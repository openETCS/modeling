#include <stdlib.h>
#include <stddef.h>
#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "TrackMessages_newtype.h"
#include "kcg_conv.h"

char* strDefaultRealFormat="%.5g"; /* (from .etp) */

#define skip_whitespace(str) while(*str == ' ' || *str == '\t') str++

/****************************************************************
 ** utility functions 
 ****************************************************************/

static int string_to_VTable(const char *str, const struct SimTypeVTable *pVTable, void *pValue, char **endptr)
{
    int nRet;
    if (pVTable != NULL && pVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
        nRet = pVTable->m_pfnFromType(SptString, (const void*)&str, pValue);
        if (nRet != 0) {
            *endptr = (char*)str+strlen(str);
        }
        return nRet;
    };
    return 0;
}

static int is_VTable_double_conversion_allowed(const struct SimTypeVTable *pVTable)
{
    if (pVTable != NULL) {
        int nConversionAllowed = 0;
        nConversionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
        nConversionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
        nConversionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
        nConversionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
        return nConversionAllowed;
    }
    return 1;
}

int VTable_to_double(const void *pValue, const struct SimTypeVTable *pVTable, double *nRetValue)
{
    if (pVTable != NULL) {
        if (pVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
            *nRetValue = (*(double*)pVTable->m_pfnToType(SptDouble, pValue));
        else if (pVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
            *nRetValue = (double)(*(float*)pVTable->m_pfnToType(SptFloat, pValue));
        else if (pVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
            *nRetValue = (double)(*(long*)pVTable->m_pfnToType(SptLong, pValue));
        else if (pVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
            *nRetValue = (double)(*(int*)pVTable->m_pfnToType(SptShort, pValue));
        else
            return 0;
    }
    return 1;
}

static int is_VTable_long_convertion_allowed(const struct SimTypeVTable *pVTable)
{
    if (pVTable != NULL) {
        int nConvertionAllowed = 0;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
        return nConvertionAllowed;
    }
    return 1;
}

int VTable_to_long(const void *pValue, const struct SimTypeVTable *pVTable, long *nRetValue)
{
    if (pVTable != NULL) {
        if (pVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
            *nRetValue = (*(long*)pVTable->m_pfnToType(SptLong, pValue));
        else if (pVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
            *nRetValue = (long)(*(int*)pVTable->m_pfnToType(SptShort, pValue));
        else
            return 0;
    }
    return 1;
}

static int get_enum_signature(const SimEnumValUtils *pEnumVals, int nSize, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    int i;
    pfnStrAppend("E", pData);
    for(i=0; i<nSize; i++) {
        pfnStrAppend("|", pData);
        pfnStrAppend(pEnumVals[i].m_name, pData);
    }
    return 1;
}

static int get_structure_signature(const SimFieldUtils *pFields, int nSize, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for(i=0; i<nSize; i++) {
        if (i > 0)
            pfnStrAppend(",", pData);
        pFields[i].m_pTypeUtils->m_pfnGetSignature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

/****************************************************************
 ** kcg_real 
 ****************************************************************/

struct SimTypeVTable *pSimDoubleVTable;

int kcg_real_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimDoubleVTable != NULL
        && pSimDoubleVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimDoubleVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimDoubleVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            double value = (double)(*(const kcg_real*)pValue);
            return pfnStrAppend(*(char**)pSimDoubleVTable->m_pfnToType(SptString, &value), pData);
        }
    }
    return predef_kcg_real_to_string(*((kcg_real*)pValue), pConverter->m_RealFormat, pfnStrAppend, pData);
}

int string_to_kcg_real(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    static double rTemp;
    skip_whitespace(str);
    if (pSimDoubleVTable != NULL) {
        if (pSimDoubleVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimDoubleVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet=string_to_VTable(str, pSimDoubleVTable, &rTemp, endptr);
            if (nRet!=0) {
                *(kcg_real*)pValue = (kcg_real)rTemp;
            }
        }
    }
    if (nRet==0) {
        nRet = predef_string_to_kcg_real(str, (kcg_real*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_real_double_conversion_allowed()
{
    if (pSimDoubleVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimDoubleVTable);
    }
    return 1;
}

int is_kcg_real_long_convertion_allowed()
{
    if (pSimDoubleVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimDoubleVTable);
    }
    return 1;
}

void compare_kcg_real(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    if (pSimDoubleVTable != NULL && pData!=NULL
        && pSimDoubleVTable->m_version >= Scv65
        && pSimDoubleVTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimDoubleVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pData);
    } else if (pSimDoubleVTable != NULL && pData==NULL
               && pSimDoubleVTable->m_version >= Scv612
               && pSimDoubleVTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        if (pSimDoubleVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimDoubleVTable->m_pfnCompare(pResult, pValue1, pValue2);
         } else {
             /* Before R15: VTable function returns a standard C typed *variable: */
             double value1 = (double)(*(const kcg_real*)pValue1);
             double value2 = (double)(*(const kcg_real*)pValue2);
             pSimDoubleVTable->m_pfnCompare(&unitResult, &value1, &value2);
             updateCompareResult(unitResult, pResult);
         }
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_real(pResult, *((kcg_real*)pValue1), *((kcg_real*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int kcg_real_to_double(const void *pValue, double *nRetValue)
{
    if (pSimDoubleVTable != NULL) {
        if (pSimDoubleVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimDoubleVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            double value = (double)(*(const kcg_real*)pValue);
            return VTable_to_double(&value, pSimDoubleVTable, nRetValue);
        }
    }
    *nRetValue = (double)*((kcg_real*)pValue);
    return 1;
}

int kcg_real_to_long(const void *pValue, long *nRetValue)
{
    if (pSimDoubleVTable != NULL) {
        if (pSimDoubleVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimDoubleVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            double value = (double)(*(const kcg_real*)pValue);
            return VTable_to_long(&value, pSimDoubleVTable, nRetValue);
        }
    }
    *nRetValue = (long)*((kcg_real*)pValue);
    return 1;
}

int get_kcg_real_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return pfnStrAppend("R", pData);
}

int set_kcg_real_default_value(void *pValue)
{
    *(kcg_real*)pValue = 0.0;
    return 1;
}

int check_kcg_real_string(const char *str, char **endptr)
{
    static kcg_real rTemp;
    return string_to_kcg_real(str, &rTemp, endptr);
}

SimTypeUtils _Type_kcg_real_Utils = {
    kcg_real_to_string,
    check_kcg_real_string,
    string_to_kcg_real,
    is_kcg_real_double_conversion_allowed,
    kcg_real_to_double,
    is_kcg_real_long_convertion_allowed,
    kcg_real_to_long,
    compare_kcg_real,
    get_kcg_real_signature,
    set_kcg_real_default_value,
    sizeof(kcg_real)
};

/****************************************************************
 ** kcg_bool 
 ****************************************************************/

struct SimTypeVTable *pSimBoolVTable;

int kcg_bool_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, &value), pData);
        }
    }
    return predef_kcg_bool_to_string(*((kcg_bool*)pValue), pfnStrAppend, pData);
}

int string_to_kcg_bool(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    static SimBool rTemp;
    skip_whitespace(str);
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimBoolVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet=string_to_VTable(str, pSimBoolVTable, &rTemp, endptr);
            if (nRet!=0) {
                *(kcg_bool*)pValue = (rTemp == SbTrue)? kcg_true : kcg_false;
            }
        }
    }
    if (nRet==0) {
        nRet = predef_string_to_kcg_bool(str, (kcg_bool*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_bool_double_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int is_kcg_bool_long_convertion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimBoolVTable);
    }
    return 1;
}

void compare_kcg_bool(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_version >= Scv612
        && pSimBoolVTable->m_pfnCompare != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimBoolVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value1 = (*((const kcg_bool*)pValue1) == kcg_true)? SbTrue : SbFalse;
            SimBool value2 = (*((const kcg_bool*)pValue2) == kcg_true)? SbTrue : SbFalse;
            pSimBoolVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_bool(pResult, *((kcg_bool*)pValue1), *((kcg_bool*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int kcg_bool_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimBoolVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_double(&value, pSimBoolVTable, nRetValue);
        }
    }
    *nRetValue = *((kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
    return 1;
}

int kcg_bool_to_long(const void *pValue, long *nRetValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimBoolVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_long(&value, pSimBoolVTable, nRetValue);
        }
    }
    *nRetValue = *((kcg_bool*)pValue) == kcg_true ? 1 : 0;
    return 1;
}

int get_kcg_bool_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return pfnStrAppend("B", pData);
}

int set_kcg_bool_default_value(void *pValue)
{
    *(kcg_bool*)pValue = kcg_false;
    return 1;
}

int check_kcg_bool_string(const char *str, char **endptr)
{
    static kcg_bool rTemp;
    return string_to_kcg_bool(str, &rTemp, endptr);
}

SimTypeUtils _Type_kcg_bool_Utils = {
    kcg_bool_to_string,
    check_kcg_bool_string,
    string_to_kcg_bool,
    is_kcg_bool_double_conversion_allowed,
    kcg_bool_to_double,
    is_kcg_bool_long_convertion_allowed,
    kcg_bool_to_long,
    compare_kcg_bool,
    get_kcg_bool_signature,
    set_kcg_bool_default_value,
    sizeof(kcg_bool)
};

/****************************************************************
 ** kcg_char 
 ****************************************************************/

struct SimTypeVTable *pSimCharVTable;

int kcg_char_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, &value), pData);
        }
    }
    return predef_kcg_char_to_string(*((kcg_char*)pValue), pfnStrAppend, pData);
}

int string_to_kcg_char(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    static char rTemp;
    skip_whitespace(str);
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimCharVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet=string_to_VTable(str, pSimCharVTable, &rTemp, endptr);
            if (nRet!=0) {
                *(kcg_char*)pValue = (kcg_char)rTemp;
            }
        }
    }
    if (nRet==0) {
        nRet = predef_string_to_kcg_char(str, (kcg_char*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_char_double_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int is_kcg_char_long_convertion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimCharVTable);
    }
    return 1;
}

void compare_kcg_char(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_version >= Scv612
        && pSimCharVTable->m_pfnCompare != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimCharVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value1 = (char)(*(const kcg_char*)pValue1);
            char value2 = (char)(*(const kcg_char*)pValue2);
            pSimCharVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_char(pResult, *((kcg_char*)pValue1), *((kcg_char*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int kcg_char_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimCharVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_double(&value, pSimCharVTable, nRetValue);
        }
    }
    *nRetValue = (double)*((kcg_char*)pValue);
    return 1;
}

int kcg_char_to_long(const void *pValue, long *nRetValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimCharVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_long(&value, pSimCharVTable, nRetValue);
        }
    }
    *nRetValue = (long)*((kcg_char*)pValue);
    return 1;
}

int get_kcg_char_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return pfnStrAppend("C", pData);
}

int set_kcg_char_default_value(void *pValue)
{
    *(kcg_char*)pValue = 0;
    return 1;
}

int check_kcg_char_string(const char *str, char **endptr)
{
    static kcg_char rTemp;
    return string_to_kcg_char(str, &rTemp, endptr);
}

SimTypeUtils _Type_kcg_char_Utils = {
    kcg_char_to_string,
    check_kcg_char_string,
    string_to_kcg_char,
    is_kcg_char_double_conversion_allowed,
    kcg_char_to_double,
    is_kcg_char_long_convertion_allowed,
    kcg_char_to_long,
    compare_kcg_char,
    get_kcg_char_signature,
    set_kcg_char_default_value,
    sizeof(kcg_char)
};

/****************************************************************
 ** kcg_int 
 ****************************************************************/

struct SimTypeVTable *pSimLongVTable;

int kcg_int_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimLongVTable != NULL
        && pSimLongVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimLongVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimLongVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            long value = (long)(*(const kcg_int*)pValue);
            return pfnStrAppend(*(char**)pSimLongVTable->m_pfnToType(SptString, &value), pData);
        }
    }
    return predef_kcg_int_to_string(*((kcg_int*)pValue), pfnStrAppend, pData);
}

int string_to_kcg_int(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    static long rTemp;
    skip_whitespace(str);
    if (pSimLongVTable != NULL) {
        if (pSimLongVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimLongVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet=string_to_VTable(str, pSimLongVTable, &rTemp, endptr);
            if (nRet!=0) {
                *(kcg_int*)pValue = (kcg_int)rTemp;
            }
        }
    }
    if (nRet==0) {
        nRet = predef_string_to_kcg_int(str, (kcg_int*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int_double_conversion_allowed()
{
    if (pSimLongVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimLongVTable);
    }
    return 1;
}

int is_kcg_int_long_convertion_allowed()
{
    if (pSimLongVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimLongVTable);
    }
    return 1;
}

void compare_kcg_int(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimLongVTable != NULL
        && pSimLongVTable->m_version >= Scv612
        && pSimLongVTable->m_pfnCompare != NULL) {
        if (pSimLongVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimLongVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            long value1 = (long)(*(const kcg_int*)pValue1);
            long value2 = (long)(*(const kcg_int*)pValue2);
            pSimLongVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int(pResult, *((kcg_int*)pValue1), *((kcg_int*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int kcg_int_to_double(const void *pValue, double *nRetValue)
{
    if (pSimLongVTable != NULL) {
        if (pSimLongVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimLongVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            long value = (long)(*(const kcg_int*)pValue);
            return VTable_to_double(&value, pSimLongVTable, nRetValue);
        }
    }
    *nRetValue = (double)*((kcg_int*)pValue);
    return 1;
}

int kcg_int_to_long(const void *pValue, long *nRetValue)
{
    if (pSimLongVTable != NULL) {
        if (pSimLongVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimLongVTable, nRetValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            long value = (long)(*(const kcg_int*)pValue);
            return VTable_to_long(&value, pSimLongVTable, nRetValue);
        }
    }
    *nRetValue = (long)*((kcg_int*)pValue);
    return 1;
}

int get_kcg_int_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return pfnStrAppend("I", pData);
}

int set_kcg_int_default_value(void *pValue)
{
    *(kcg_int*)pValue = 0;
    return 1;
}

int check_kcg_int_string(const char *str, char **endptr)
{
    static kcg_int rTemp;
    return string_to_kcg_int(str, &rTemp, endptr);
}

SimTypeUtils _Type_kcg_int_Utils = {
    kcg_int_to_string,
    check_kcg_int_string,
    string_to_kcg_int,
    is_kcg_int_double_conversion_allowed,
    kcg_int_to_double,
    is_kcg_int_long_convertion_allowed,
    kcg_int_to_long,
    compare_kcg_int,
    get_kcg_int_signature,
    set_kcg_int_default_value,
    sizeof(kcg_int)
};

/****************************************************************
 ** struct__244 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__244VTable;

static SimFieldUtils struct__244_fields[] = {
    {"valid", offsetof(struct__244,valid), &_Type_kcg_bool_Utils},
    {"nid_message", offsetof(struct__244,nid_message), &_Type_kcg_int_Utils},
    {"l_message", offsetof(struct__244,l_message), &_Type_kcg_int_Utils},
    {"t_train", offsetof(struct__244,t_train), &_Type_kcg_real_Utils},
    {"nid_engine", offsetof(struct__244,nid_engine), &_Type_kcg_int_Utils},
    {"field1", offsetof(struct__244,field1), &_Type_kcg_int_Utils},
    {"field2", offsetof(struct__244,field2), &_Type_kcg_int_Utils},
    {"field3", offsetof(struct__244,field3), &_Type_kcg_int_Utils},
};

int struct__244_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__244VTable != NULL
        && pSimstruct__244VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__244VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__244_fields, 8, pfnStrAppend, pData);
}

int string_to_struct__244(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__244VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__244VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__244_fields, 8, endptr);
    }
    return nRet;
}

int is_struct__244_double_conversion_allowed()
{
    if (pSimstruct__244VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__244VTable);
    }
    return 0;
}

int is_struct__244_long_convertion_allowed()
{
    if (pSimstruct__244VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__244VTable);
    }
    return 0;
}

void compare_struct__244(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__244VTable != NULL
        && pSimstruct__244VTable->m_version >= Scv612
        && pSimstruct__244VTable->m_pfnCompare != NULL) {
        if (pSimstruct__244VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__244VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__244VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__244_fields, 8, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__244_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__244VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__244VTable, nRetValue);
    }
    return 0;
}

int struct__244_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__244VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__244VTable, nRetValue);
    }
    return 0;
}

int get_struct__244_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__244_fields, 8, pfnStrAppend, pData);
}

int set_struct__244_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__244*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__244*)pValue)->nid_message));
    set_kcg_int_default_value(&(((struct__244*)pValue)->l_message));
    set_kcg_real_default_value(&(((struct__244*)pValue)->t_train));
    set_kcg_int_default_value(&(((struct__244*)pValue)->nid_engine));
    set_kcg_int_default_value(&(((struct__244*)pValue)->field1));
    set_kcg_int_default_value(&(((struct__244*)pValue)->field2));
    set_kcg_int_default_value(&(((struct__244*)pValue)->field3));
    return 1;
}

int check_struct__244_string(const char *str, char **endptr)
{
    static struct__244 rTemp;
    return string_to_struct__244(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__244_Utils = {
    struct__244_to_string,
    check_struct__244_string,
    string_to_struct__244,
    is_struct__244_double_conversion_allowed,
    struct__244_to_double,
    is_struct__244_long_convertion_allowed,
    struct__244_to_long,
    compare_struct__244,
    get_struct__244_signature,
    set_struct__244_default_value,
    sizeof(struct__244)
};

/****************************************************************
 ** array_int_20 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_20VTable;

int array_int_20_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_20VTable != NULL
        && pSimarray_int_20VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_20VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 20, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_20(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_20VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_20VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 20, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_20_double_conversion_allowed()
{
    if (pSimarray_int_20VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_20VTable);
    }
    return 0;
}

int is_array_int_20_long_convertion_allowed()
{
    if (pSimarray_int_20VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_20VTable);
    }
    return 0;
}

void compare_array_int_20(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_20VTable != NULL
        && pSimarray_int_20VTable->m_version >= Scv612
        && pSimarray_int_20VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_20VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_20VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_20VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 20, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_20_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_20VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_20VTable, nRetValue);
    }
    return 0;
}

int array_int_20_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_20VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_20VTable, nRetValue);
    }
    return 0;
}

int get_array_int_20_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 20; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_20_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 20; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_20_string(const char *str, char **endptr)
{
    static array_int_20 rTemp;
    return string_to_array_int_20(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_20_Utils = {
    array_int_20_to_string,
    check_array_int_20_string,
    string_to_array_int_20,
    is_array_int_20_double_conversion_allowed,
    array_int_20_to_double,
    is_array_int_20_long_convertion_allowed,
    array_int_20_to_long,
    compare_array_int_20,
    get_array_int_20_signature,
    set_array_int_20_default_value,
    sizeof(array_int_20)
};

/****************************************************************
 ** array__258 
 ****************************************************************/

struct SimTypeVTable *pSimarray__258VTable;

int array__258_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__258VTable != NULL
        && pSimarray__258VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__258VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__244_to_string, 20, sizeof(struct__244), pfnStrAppend, pData);
}

int string_to_array__258(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__258VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__258VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__244_Utils, 20, sizeof(struct__244), endptr);
    }
    return nRet;
}

int is_array__258_double_conversion_allowed()
{
    if (pSimarray__258VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__258VTable);
    }
    return 0;
}

int is_array__258_long_convertion_allowed()
{
    if (pSimarray__258VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__258VTable);
    }
    return 0;
}

void compare_array__258(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__258VTable != NULL
        && pSimarray__258VTable->m_version >= Scv612
        && pSimarray__258VTable->m_pfnCompare != NULL) {
        if (pSimarray__258VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__258VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__258VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__244, 20, sizeof(struct__244), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__258_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__258VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__258VTable, nRetValue);
    }
    return 0;
}

int array__258_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__258VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__258VTable, nRetValue);
    }
    return 0;
}

int get_array__258_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 20; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__244_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__258_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 20; i++)
        set_struct__244_default_value(&((struct__244*)pValue)[i]);
    return 1;
}

int check_array__258_string(const char *str, char **endptr)
{
    static array__258 rTemp;
    return string_to_array__258(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__258_Utils = {
    array__258_to_string,
    check_array__258_string,
    string_to_array__258,
    is_array__258_double_conversion_allowed,
    array__258_to_double,
    is_array__258_long_convertion_allowed,
    array__258_to_long,
    compare_array__258,
    get_array__258_signature,
    set_array__258_default_value,
    sizeof(array__258)
};

/****************************************************************
 ** NID_MESSAGE 
 ****************************************************************/

struct SimTypeVTable *pSimNID_MESSAGEVTable;

int NID_MESSAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_MESSAGEVTable != NULL
        && pSimNID_MESSAGEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_MESSAGEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_MESSAGE(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_MESSAGEVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_MESSAGEVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_MESSAGE_double_conversion_allowed()
{
    if (pSimNID_MESSAGEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_MESSAGEVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_MESSAGE_long_convertion_allowed()
{
    if (pSimNID_MESSAGEVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_MESSAGEVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_MESSAGE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_MESSAGEVTable != NULL
        && pSimNID_MESSAGEVTable->m_version >= Scv612
        && pSimNID_MESSAGEVTable->m_pfnCompare != NULL) {
        if (pSimNID_MESSAGEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_MESSAGEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_MESSAGEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_MESSAGE_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_MESSAGEVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_MESSAGEVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int NID_MESSAGE_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_MESSAGEVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_MESSAGEVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_NID_MESSAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_MESSAGE_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_MESSAGE_string(const char *str, char **endptr)
{
    static NID_MESSAGE rTemp;
    return string_to_NID_MESSAGE(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_MESSAGE_Utils = {
    NID_MESSAGE_to_string,
    check_NID_MESSAGE_string,
    string_to_NID_MESSAGE,
    is_NID_MESSAGE_double_conversion_allowed,
    NID_MESSAGE_to_double,
    is_NID_MESSAGE_long_convertion_allowed,
    NID_MESSAGE_to_long,
    compare_NID_MESSAGE,
    get_NID_MESSAGE_signature,
    set_NID_MESSAGE_default_value,
    sizeof(NID_MESSAGE)
};

/****************************************************************
 ** L_MESSAGE 
 ****************************************************************/

struct SimTypeVTable *pSimL_MESSAGEVTable;

int L_MESSAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimL_MESSAGEVTable != NULL
        && pSimL_MESSAGEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimL_MESSAGEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_L_MESSAGE(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimL_MESSAGEVTable != NULL) {
        nRet=string_to_VTable(str, pSimL_MESSAGEVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_L_MESSAGE_double_conversion_allowed()
{
    if (pSimL_MESSAGEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimL_MESSAGEVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_L_MESSAGE_long_convertion_allowed()
{
    if (pSimL_MESSAGEVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimL_MESSAGEVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_L_MESSAGE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimL_MESSAGEVTable != NULL
        && pSimL_MESSAGEVTable->m_version >= Scv612
        && pSimL_MESSAGEVTable->m_pfnCompare != NULL) {
        if (pSimL_MESSAGEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimL_MESSAGEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimL_MESSAGEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int L_MESSAGE_to_double(const void *pValue, double *nRetValue)
{
    if (pSimL_MESSAGEVTable != NULL) {
        return VTable_to_double(pValue, pSimL_MESSAGEVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int L_MESSAGE_to_long(const void *pValue, long *nRetValue)
{
    if (pSimL_MESSAGEVTable != NULL) {
        return VTable_to_long(pValue, pSimL_MESSAGEVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_L_MESSAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_L_MESSAGE_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_L_MESSAGE_string(const char *str, char **endptr)
{
    static L_MESSAGE rTemp;
    return string_to_L_MESSAGE(str, &rTemp, endptr);
}

SimTypeUtils _Type_L_MESSAGE_Utils = {
    L_MESSAGE_to_string,
    check_L_MESSAGE_string,
    string_to_L_MESSAGE,
    is_L_MESSAGE_double_conversion_allowed,
    L_MESSAGE_to_double,
    is_L_MESSAGE_long_convertion_allowed,
    L_MESSAGE_to_long,
    compare_L_MESSAGE,
    get_L_MESSAGE_signature,
    set_L_MESSAGE_default_value,
    sizeof(L_MESSAGE)
};

/****************************************************************
 ** T_TRAIN 
 ****************************************************************/

struct SimTypeVTable *pSimT_TRAINVTable;

int T_TRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimT_TRAINVTable != NULL
        && pSimT_TRAINVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_TRAINVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_real_to_string(pValue, pfnStrAppend, pData);
}

int string_to_T_TRAIN(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimT_TRAINVTable != NULL) {
        nRet=string_to_VTable(str, pSimT_TRAINVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_real(str, pValue, endptr);
    }
    return nRet;
}

int is_T_TRAIN_double_conversion_allowed()
{
    if (pSimT_TRAINVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_TRAINVTable);
    }
    return is_kcg_real_double_conversion_allowed();
}

int is_T_TRAIN_long_convertion_allowed()
{
    if (pSimT_TRAINVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimT_TRAINVTable);
    }
    return is_kcg_real_long_convertion_allowed();
}

void compare_T_TRAIN(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimT_TRAINVTable != NULL
        && pSimT_TRAINVTable->m_version >= Scv612
        && pSimT_TRAINVTable->m_pfnCompare != NULL) {
        if (pSimT_TRAINVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimT_TRAINVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimT_TRAINVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_real(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int T_TRAIN_to_double(const void *pValue, double *nRetValue)
{
    if (pSimT_TRAINVTable != NULL) {
        return VTable_to_double(pValue, pSimT_TRAINVTable, nRetValue);
    }
    return kcg_real_to_double(pValue, nRetValue);
}

int T_TRAIN_to_long(const void *pValue, long *nRetValue)
{
    if (pSimT_TRAINVTable != NULL) {
        return VTable_to_long(pValue, pSimT_TRAINVTable, nRetValue);
    }
    return kcg_real_to_long(pValue, nRetValue);
}

int get_T_TRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_real_signature(pfnStrAppend, pData);
}

int set_T_TRAIN_default_value(void *pValue)
{
    return set_kcg_real_default_value(pValue);
}

int check_T_TRAIN_string(const char *str, char **endptr)
{
    static T_TRAIN rTemp;
    return string_to_T_TRAIN(str, &rTemp, endptr);
}

SimTypeUtils _Type_T_TRAIN_Utils = {
    T_TRAIN_to_string,
    check_T_TRAIN_string,
    string_to_T_TRAIN,
    is_T_TRAIN_double_conversion_allowed,
    T_TRAIN_to_double,
    is_T_TRAIN_long_convertion_allowed,
    T_TRAIN_to_long,
    compare_T_TRAIN,
    get_T_TRAIN_signature,
    set_T_TRAIN_default_value,
    sizeof(T_TRAIN)
};

/****************************************************************
 ** NID_ENGINE 
 ****************************************************************/

struct SimTypeVTable *pSimNID_ENGINEVTable;

int NID_ENGINE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_ENGINEVTable != NULL
        && pSimNID_ENGINEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_ENGINEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_ENGINE(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_ENGINEVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_ENGINEVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_ENGINE_double_conversion_allowed()
{
    if (pSimNID_ENGINEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_ENGINEVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_ENGINE_long_convertion_allowed()
{
    if (pSimNID_ENGINEVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_ENGINEVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_ENGINE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_ENGINEVTable != NULL
        && pSimNID_ENGINEVTable->m_version >= Scv612
        && pSimNID_ENGINEVTable->m_pfnCompare != NULL) {
        if (pSimNID_ENGINEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_ENGINEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_ENGINEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_ENGINE_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_ENGINEVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_ENGINEVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int NID_ENGINE_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_ENGINEVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_ENGINEVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_NID_ENGINE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_ENGINE_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_ENGINE_string(const char *str, char **endptr)
{
    static NID_ENGINE rTemp;
    return string_to_NID_ENGINE(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_ENGINE_Utils = {
    NID_ENGINE_to_string,
    check_NID_ENGINE_string,
    string_to_NID_ENGINE,
    is_NID_ENGINE_double_conversion_allowed,
    NID_ENGINE_to_double,
    is_NID_ENGINE_long_convertion_allowed,
    NID_ENGINE_to_long,
    compare_NID_ENGINE,
    get_NID_ENGINE_signature,
    set_NID_ENGINE_default_value,
    sizeof(NID_ENGINE)
};

/****************************************************************
 ** M_TrainTrack_Radio_TM_radio_messages 
 ****************************************************************/

struct SimTypeVTable *pSimM_TrainTrack_Radio_TM_radio_messagesVTable;

int M_TrainTrack_Radio_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_TrainTrack_Radio_TM_radio_messagesVTable != NULL
        && pSimM_TrainTrack_Radio_TM_radio_messagesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_TrainTrack_Radio_TM_radio_messagesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__244_to_string(pValue, pfnStrAppend, pData);
}

int string_to_M_TrainTrack_Radio_TM_radio_messages(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_TrainTrack_Radio_TM_radio_messagesVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_TrainTrack_Radio_TM_radio_messagesVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__244(str, pValue, endptr);
    }
    return nRet;
}

int is_M_TrainTrack_Radio_TM_radio_messages_double_conversion_allowed()
{
    if (pSimM_TrainTrack_Radio_TM_radio_messagesVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_TrainTrack_Radio_TM_radio_messagesVTable);
    }
    return is_struct__244_double_conversion_allowed();
}

int is_M_TrainTrack_Radio_TM_radio_messages_long_convertion_allowed()
{
    if (pSimM_TrainTrack_Radio_TM_radio_messagesVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_TrainTrack_Radio_TM_radio_messagesVTable);
    }
    return is_struct__244_long_convertion_allowed();
}

void compare_M_TrainTrack_Radio_TM_radio_messages(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_TrainTrack_Radio_TM_radio_messagesVTable != NULL
        && pSimM_TrainTrack_Radio_TM_radio_messagesVTable->m_version >= Scv612
        && pSimM_TrainTrack_Radio_TM_radio_messagesVTable->m_pfnCompare != NULL) {
        if (pSimM_TrainTrack_Radio_TM_radio_messagesVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_TrainTrack_Radio_TM_radio_messagesVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_TrainTrack_Radio_TM_radio_messagesVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__244(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_TrainTrack_Radio_TM_radio_messages_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_TrainTrack_Radio_TM_radio_messagesVTable != NULL) {
        return VTable_to_double(pValue, pSimM_TrainTrack_Radio_TM_radio_messagesVTable, nRetValue);
    }
    return struct__244_to_double(pValue, nRetValue);
}

int M_TrainTrack_Radio_TM_radio_messages_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_TrainTrack_Radio_TM_radio_messagesVTable != NULL) {
        return VTable_to_long(pValue, pSimM_TrainTrack_Radio_TM_radio_messagesVTable, nRetValue);
    }
    return struct__244_to_long(pValue, nRetValue);
}

int get_M_TrainTrack_Radio_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__244_signature(pfnStrAppend, pData);
}

int set_M_TrainTrack_Radio_TM_radio_messages_default_value(void *pValue)
{
    return set_struct__244_default_value(pValue);
}

int check_M_TrainTrack_Radio_TM_radio_messages_string(const char *str, char **endptr)
{
    static M_TrainTrack_Radio_TM_radio_messages rTemp;
    return string_to_M_TrainTrack_Radio_TM_radio_messages(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_TrainTrack_Radio_TM_radio_messages_Utils = {
    M_TrainTrack_Radio_TM_radio_messages_to_string,
    check_M_TrainTrack_Radio_TM_radio_messages_string,
    string_to_M_TrainTrack_Radio_TM_radio_messages,
    is_M_TrainTrack_Radio_TM_radio_messages_double_conversion_allowed,
    M_TrainTrack_Radio_TM_radio_messages_to_double,
    is_M_TrainTrack_Radio_TM_radio_messages_long_convertion_allowed,
    M_TrainTrack_Radio_TM_radio_messages_to_long,
    compare_M_TrainTrack_Radio_TM_radio_messages,
    get_M_TrainTrack_Radio_TM_radio_messages_signature,
    set_M_TrainTrack_Radio_TM_radio_messages_default_value,
    sizeof(M_TrainTrack_Radio_TM_radio_messages)
};

#include "C:/Program Files/Esterel Technologies/SCADE R16.1/SCADE/lib/kcg_conv.c"
