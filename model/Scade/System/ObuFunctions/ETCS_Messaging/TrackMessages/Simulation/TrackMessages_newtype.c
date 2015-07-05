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
 ** struct__443 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__443VTable;

static SimFieldUtils struct__443_fields[] = {
    {"NC_DIFF", offsetof(struct__443,NC_DIFF), &_Type_kcg_int_Utils},
    {"V_DIFF", offsetof(struct__443,V_DIFF), &_Type_kcg_int_Utils},
};

int struct__443_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__443VTable != NULL
        && pSimstruct__443VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__443VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__443_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__443(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__443VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__443VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__443_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__443_double_conversion_allowed()
{
    if (pSimstruct__443VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__443VTable);
    }
    return 0;
}

int is_struct__443_long_convertion_allowed()
{
    if (pSimstruct__443VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__443VTable);
    }
    return 0;
}

void compare_struct__443(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__443VTable != NULL
        && pSimstruct__443VTable->m_version >= Scv612
        && pSimstruct__443VTable->m_pfnCompare != NULL) {
        if (pSimstruct__443VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__443VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__443VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__443_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__443_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__443VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__443VTable, nRetValue);
    }
    return 0;
}

int struct__443_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__443VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__443VTable, nRetValue);
    }
    return 0;
}

int get_struct__443_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__443_fields, 2, pfnStrAppend, pData);
}

int set_struct__443_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__443*)pValue)->NC_DIFF));
    set_kcg_int_default_value(&(((struct__443*)pValue)->V_DIFF));
    return 1;
}

int check_struct__443_string(const char *str, char **endptr)
{
    static struct__443 rTemp;
    return string_to_struct__443(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__443_Utils = {
    struct__443_to_string,
    check_struct__443_string,
    string_to_struct__443,
    is_struct__443_double_conversion_allowed,
    struct__443_to_double,
    is_struct__443_long_convertion_allowed,
    struct__443_to_long,
    compare_struct__443,
    get_struct__443_signature,
    set_struct__443_default_value,
    sizeof(struct__443)
};

/****************************************************************
 ** array__448 
 ****************************************************************/

struct SimTypeVTable *pSimarray__448VTable;

int array__448_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__448VTable != NULL
        && pSimarray__448VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__448VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__443_to_string, 32, sizeof(struct__443), pfnStrAppend, pData);
}

int string_to_array__448(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__448VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__448VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__443_Utils, 32, sizeof(struct__443), endptr);
    }
    return nRet;
}

int is_array__448_double_conversion_allowed()
{
    if (pSimarray__448VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__448VTable);
    }
    return 0;
}

int is_array__448_long_convertion_allowed()
{
    if (pSimarray__448VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__448VTable);
    }
    return 0;
}

void compare_array__448(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__448VTable != NULL
        && pSimarray__448VTable->m_version >= Scv612
        && pSimarray__448VTable->m_pfnCompare != NULL) {
        if (pSimarray__448VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__448VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__448VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__443, 32, sizeof(struct__443), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__448_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__448VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__448VTable, nRetValue);
    }
    return 0;
}

int array__448_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__448VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__448VTable, nRetValue);
    }
    return 0;
}

int get_array__448_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__443_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__448_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__443_default_value(&((struct__443*)pValue)[i]);
    return 1;
}

int check_array__448_string(const char *str, char **endptr)
{
    static array__448 rTemp;
    return string_to_array__448(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__448_Utils = {
    array__448_to_string,
    check_array__448_string,
    string_to_array__448,
    is_array__448_double_conversion_allowed,
    array__448_to_double,
    is_array__448_long_convertion_allowed,
    array__448_to_long,
    compare_array__448,
    get_array__448_signature,
    set_array__448_default_value,
    sizeof(array__448)
};

/****************************************************************
 ** struct__451 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__451VTable;

static SimFieldUtils struct__451_fields[] = {
    {"D_STATIC", offsetof(struct__451,D_STATIC), &_Type_kcg_int_Utils},
    {"V_STATIC", offsetof(struct__451,V_STATIC), &_Type_kcg_int_Utils},
    {"Q_FRONT", offsetof(struct__451,Q_FRONT), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__451,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS_q_diff", offsetof(struct__451,SECTIONS_q_diff), &_Type_array__448_Utils},
};

int struct__451_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__451VTable != NULL
        && pSimstruct__451VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__451VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__451_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__451(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__451VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__451VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__451_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__451_double_conversion_allowed()
{
    if (pSimstruct__451VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__451VTable);
    }
    return 0;
}

int is_struct__451_long_convertion_allowed()
{
    if (pSimstruct__451VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__451VTable);
    }
    return 0;
}

void compare_struct__451(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__451VTable != NULL
        && pSimstruct__451VTable->m_version >= Scv612
        && pSimstruct__451VTable->m_pfnCompare != NULL) {
        if (pSimstruct__451VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__451VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__451VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__451_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__451_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__451VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__451VTable, nRetValue);
    }
    return 0;
}

int struct__451_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__451VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__451VTable, nRetValue);
    }
    return 0;
}

int get_struct__451_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__451_fields, 5, pfnStrAppend, pData);
}

int set_struct__451_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__451*)pValue)->D_STATIC));
    set_kcg_int_default_value(&(((struct__451*)pValue)->V_STATIC));
    set_kcg_int_default_value(&(((struct__451*)pValue)->Q_FRONT));
    set_kcg_int_default_value(&(((struct__451*)pValue)->N_ITER));
    set_array__448_default_value(&(((struct__451*)pValue)->SECTIONS_q_diff));
    return 1;
}

int check_struct__451_string(const char *str, char **endptr)
{
    static struct__451 rTemp;
    return string_to_struct__451(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__451_Utils = {
    struct__451_to_string,
    check_struct__451_string,
    string_to_struct__451,
    is_struct__451_double_conversion_allowed,
    struct__451_to_double,
    is_struct__451_long_convertion_allowed,
    struct__451_to_long,
    compare_struct__451,
    get_struct__451_signature,
    set_struct__451_default_value,
    sizeof(struct__451)
};

/****************************************************************
 ** array__459 
 ****************************************************************/

struct SimTypeVTable *pSimarray__459VTable;

int array__459_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__459VTable != NULL
        && pSimarray__459VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__459VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__451_to_string, 33, sizeof(struct__451), pfnStrAppend, pData);
}

int string_to_array__459(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__459VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__459VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__451_Utils, 33, sizeof(struct__451), endptr);
    }
    return nRet;
}

int is_array__459_double_conversion_allowed()
{
    if (pSimarray__459VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__459VTable);
    }
    return 0;
}

int is_array__459_long_convertion_allowed()
{
    if (pSimarray__459VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__459VTable);
    }
    return 0;
}

void compare_array__459(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__459VTable != NULL
        && pSimarray__459VTable->m_version >= Scv612
        && pSimarray__459VTable->m_pfnCompare != NULL) {
        if (pSimarray__459VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__459VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__459VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__451, 33, sizeof(struct__451), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__459_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__459VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__459VTable, nRetValue);
    }
    return 0;
}

int array__459_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__459VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__459VTable, nRetValue);
    }
    return 0;
}

int get_array__459_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__451_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__459_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__451_default_value(&((struct__451*)pValue)[i]);
    return 1;
}

int check_array__459_string(const char *str, char **endptr)
{
    static array__459 rTemp;
    return string_to_array__459(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__459_Utils = {
    array__459_to_string,
    check_array__459_string,
    string_to_array__459,
    is_array__459_double_conversion_allowed,
    array__459_to_double,
    is_array__459_long_convertion_allowed,
    array__459_to_long,
    compare_array__459,
    get_array__459_signature,
    set_array__459_default_value,
    sizeof(array__459)
};

/****************************************************************
 ** array__462 
 ****************************************************************/

struct SimTypeVTable *pSimarray__462VTable;

int array__462_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__462VTable != NULL
        && pSimarray__462VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__462VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__451_to_string, 32, sizeof(struct__451), pfnStrAppend, pData);
}

int string_to_array__462(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__462VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__462VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__451_Utils, 32, sizeof(struct__451), endptr);
    }
    return nRet;
}

int is_array__462_double_conversion_allowed()
{
    if (pSimarray__462VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__462VTable);
    }
    return 0;
}

int is_array__462_long_convertion_allowed()
{
    if (pSimarray__462VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__462VTable);
    }
    return 0;
}

void compare_array__462(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__462VTable != NULL
        && pSimarray__462VTable->m_version >= Scv612
        && pSimarray__462VTable->m_pfnCompare != NULL) {
        if (pSimarray__462VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__462VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__462VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__451, 32, sizeof(struct__451), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__462_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__462VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__462VTable, nRetValue);
    }
    return 0;
}

int array__462_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__462VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__462VTable, nRetValue);
    }
    return 0;
}

int get_array__462_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__451_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__462_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__451_default_value(&((struct__451*)pValue)[i]);
    return 1;
}

int check_array__462_string(const char *str, char **endptr)
{
    static array__462 rTemp;
    return string_to_array__462(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__462_Utils = {
    array__462_to_string,
    check_array__462_string,
    string_to_array__462,
    is_array__462_double_conversion_allowed,
    array__462_to_double,
    is_array__462_long_convertion_allowed,
    array__462_to_long,
    compare_array__462,
    get_array__462_signature,
    set_array__462_default_value,
    sizeof(array__462)
};

/****************************************************************
 ** struct__465 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__465VTable;

static SimFieldUtils struct__465_fields[] = {
    {"valid", offsetof(struct__465,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__465,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__465,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__465,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__465,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_STATIC", offsetof(struct__465,D_STATIC), &_Type_kcg_int_Utils},
    {"V_STATIC", offsetof(struct__465,V_STATIC), &_Type_kcg_int_Utils},
    {"Q_FRONT", offsetof(struct__465,Q_FRONT), &_Type_kcg_int_Utils},
    {"N_ITER_n", offsetof(struct__465,N_ITER_n), &_Type_kcg_int_Utils},
    {"SECTIONS_q_diff", offsetof(struct__465,SECTIONS_q_diff), &_Type_array__448_Utils},
    {"N_ITER_k", offsetof(struct__465,N_ITER_k), &_Type_kcg_int_Utils},
    {"SECTIONS_SSP", offsetof(struct__465,SECTIONS_SSP), &_Type_array__462_Utils},
};

int struct__465_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__465VTable != NULL
        && pSimstruct__465VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__465VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__465_fields, 12, pfnStrAppend, pData);
}

int string_to_struct__465(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__465VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__465VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__465_fields, 12, endptr);
    }
    return nRet;
}

int is_struct__465_double_conversion_allowed()
{
    if (pSimstruct__465VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__465VTable);
    }
    return 0;
}

int is_struct__465_long_convertion_allowed()
{
    if (pSimstruct__465VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__465VTable);
    }
    return 0;
}

void compare_struct__465(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__465VTable != NULL
        && pSimstruct__465VTable->m_version >= Scv612
        && pSimstruct__465VTable->m_pfnCompare != NULL) {
        if (pSimstruct__465VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__465VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__465VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__465_fields, 12, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__465_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__465VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__465VTable, nRetValue);
    }
    return 0;
}

int struct__465_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__465VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__465VTable, nRetValue);
    }
    return 0;
}

int get_struct__465_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__465_fields, 12, pfnStrAppend, pData);
}

int set_struct__465_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__465*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__465*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__465*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__465*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__465*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__465*)pValue)->D_STATIC));
    set_kcg_int_default_value(&(((struct__465*)pValue)->V_STATIC));
    set_kcg_int_default_value(&(((struct__465*)pValue)->Q_FRONT));
    set_kcg_int_default_value(&(((struct__465*)pValue)->N_ITER_n));
    set_array__448_default_value(&(((struct__465*)pValue)->SECTIONS_q_diff));
    set_kcg_int_default_value(&(((struct__465*)pValue)->N_ITER_k));
    set_array__462_default_value(&(((struct__465*)pValue)->SECTIONS_SSP));
    return 1;
}

int check_struct__465_string(const char *str, char **endptr)
{
    static struct__465 rTemp;
    return string_to_struct__465(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__465_Utils = {
    struct__465_to_string,
    check_struct__465_string,
    string_to_struct__465,
    is_struct__465_double_conversion_allowed,
    struct__465_to_double,
    is_struct__465_long_convertion_allowed,
    struct__465_to_long,
    compare_struct__465,
    get_struct__465_signature,
    set_struct__465_default_value,
    sizeof(struct__465)
};

/****************************************************************
 ** array_int_500 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_500VTable;

int array_int_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_500VTable != NULL
        && pSimarray_int_500VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_500VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 500, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_500(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_500VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_500VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 500, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_500_double_conversion_allowed()
{
    if (pSimarray_int_500VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_500VTable);
    }
    return 0;
}

int is_array_int_500_long_convertion_allowed()
{
    if (pSimarray_int_500VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_500VTable);
    }
    return 0;
}

void compare_array_int_500(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_500VTable != NULL
        && pSimarray_int_500VTable->m_version >= Scv612
        && pSimarray_int_500VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_500VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_500VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_500VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 500, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_500_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_500VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_500VTable, nRetValue);
    }
    return 0;
}

int array_int_500_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_500VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_500VTable, nRetValue);
    }
    return 0;
}

int get_array_int_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 500; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_500_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 500; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_500_string(const char *str, char **endptr)
{
    static array_int_500 rTemp;
    return string_to_array_int_500(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_500_Utils = {
    array_int_500_to_string,
    check_array_int_500_string,
    string_to_array_int_500,
    is_array_int_500_double_conversion_allowed,
    array_int_500_to_double,
    is_array_int_500_long_convertion_allowed,
    array_int_500_to_long,
    compare_array_int_500,
    get_array_int_500_signature,
    set_array_int_500_default_value,
    sizeof(array_int_500)
};

/****************************************************************
 ** struct__483 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__483VTable;

static SimFieldUtils struct__483_fields[] = {
    {"nid_packet", offsetof(struct__483,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__483,q_dir), &_Type_Q_DIR_Utils},
    {"valid", offsetof(struct__483,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(struct__483,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(struct__483,endAddress), &_Type_kcg_int_Utils},
};

int struct__483_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__483VTable != NULL
        && pSimstruct__483VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__483VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__483_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__483(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__483VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__483VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__483_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__483_double_conversion_allowed()
{
    if (pSimstruct__483VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__483VTable);
    }
    return 0;
}

int is_struct__483_long_convertion_allowed()
{
    if (pSimstruct__483VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__483VTable);
    }
    return 0;
}

void compare_struct__483(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__483VTable != NULL
        && pSimstruct__483VTable->m_version >= Scv612
        && pSimstruct__483VTable->m_pfnCompare != NULL) {
        if (pSimstruct__483VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__483VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__483VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__483_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__483_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__483VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__483VTable, nRetValue);
    }
    return 0;
}

int struct__483_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__483VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__483VTable, nRetValue);
    }
    return 0;
}

int get_struct__483_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__483_fields, 5, pfnStrAppend, pData);
}

int set_struct__483_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__483*)pValue)->nid_packet));
    set_Q_DIR_default_value(&(((struct__483*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((struct__483*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__483*)pValue)->startAddress));
    set_kcg_int_default_value(&(((struct__483*)pValue)->endAddress));
    return 1;
}

int check_struct__483_string(const char *str, char **endptr)
{
    static struct__483 rTemp;
    return string_to_struct__483(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__483_Utils = {
    struct__483_to_string,
    check_struct__483_string,
    string_to_struct__483,
    is_struct__483_double_conversion_allowed,
    struct__483_to_double,
    is_struct__483_long_convertion_allowed,
    struct__483_to_long,
    compare_struct__483,
    get_struct__483_signature,
    set_struct__483_default_value,
    sizeof(struct__483)
};

/****************************************************************
 ** array_int_494 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_494VTable;

int array_int_494_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_494VTable != NULL
        && pSimarray_int_494VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_494VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 494, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_494(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_494VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_494VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 494, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_494_double_conversion_allowed()
{
    if (pSimarray_int_494VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_494VTable);
    }
    return 0;
}

int is_array_int_494_long_convertion_allowed()
{
    if (pSimarray_int_494VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_494VTable);
    }
    return 0;
}

void compare_array_int_494(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_494VTable != NULL
        && pSimarray_int_494VTable->m_version >= Scv612
        && pSimarray_int_494VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_494VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_494VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_494VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 494, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_494_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_494VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_494VTable, nRetValue);
    }
    return 0;
}

int array_int_494_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_494VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_494VTable, nRetValue);
    }
    return 0;
}

int get_array_int_494_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 494; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_494_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 494; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_494_string(const char *str, char **endptr)
{
    static array_int_494 rTemp;
    return string_to_array_int_494(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_494_Utils = {
    array_int_494_to_string,
    check_array_int_494_string,
    string_to_array_int_494,
    is_array_int_494_double_conversion_allowed,
    array_int_494_to_double,
    is_array_int_494_long_convertion_allowed,
    array_int_494_to_long,
    compare_array_int_494,
    get_array_int_494_signature,
    set_array_int_494_default_value,
    sizeof(array_int_494)
};

/****************************************************************
 ** array_int_6 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_6VTable;

int array_int_6_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_6VTable != NULL
        && pSimarray_int_6VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_6VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 6, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_6(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_6VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_6VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 6, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_6_double_conversion_allowed()
{
    if (pSimarray_int_6VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_6VTable);
    }
    return 0;
}

int is_array_int_6_long_convertion_allowed()
{
    if (pSimarray_int_6VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_6VTable);
    }
    return 0;
}

void compare_array_int_6(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_6VTable != NULL
        && pSimarray_int_6VTable->m_version >= Scv612
        && pSimarray_int_6VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_6VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_6VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_6VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 6, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_6_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_6VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_6VTable, nRetValue);
    }
    return 0;
}

int array_int_6_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_6VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_6VTable, nRetValue);
    }
    return 0;
}

int get_array_int_6_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 6; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_6_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 6; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_6_string(const char *str, char **endptr)
{
    static array_int_6 rTemp;
    return string_to_array_int_6(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_6_Utils = {
    array_int_6_to_string,
    check_array_int_6_string,
    string_to_array_int_6,
    is_array_int_6_double_conversion_allowed,
    array_int_6_to_double,
    is_array_int_6_long_convertion_allowed,
    array_int_6_to_long,
    compare_array_int_6,
    get_array_int_6_signature,
    set_array_int_6_default_value,
    sizeof(array_int_6)
};

/****************************************************************
 ** array__497 
 ****************************************************************/

struct SimTypeVTable *pSimarray__497VTable;

int array__497_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__497VTable != NULL
        && pSimarray__497VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__497VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__451_to_string, 1, sizeof(struct__451), pfnStrAppend, pData);
}

int string_to_array__497(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__497VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__497VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__451_Utils, 1, sizeof(struct__451), endptr);
    }
    return nRet;
}

int is_array__497_double_conversion_allowed()
{
    if (pSimarray__497VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__497VTable);
    }
    return 0;
}

int is_array__497_long_convertion_allowed()
{
    if (pSimarray__497VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__497VTable);
    }
    return 0;
}

void compare_array__497(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__497VTable != NULL
        && pSimarray__497VTable->m_version >= Scv612
        && pSimarray__497VTable->m_pfnCompare != NULL) {
        if (pSimarray__497VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__497VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__497VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__451, 1, sizeof(struct__451), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__497_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__497VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__497VTable, nRetValue);
    }
    return 0;
}

int array__497_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__497VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__497VTable, nRetValue);
    }
    return 0;
}

int get_array__497_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__451_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__497_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__451_default_value(&((struct__451*)pValue)[i]);
    return 1;
}

int check_array__497_string(const char *str, char **endptr)
{
    static array__497 rTemp;
    return string_to_array__497(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__497_Utils = {
    array__497_to_string,
    check_array__497_string,
    string_to_array__497,
    is_array__497_double_conversion_allowed,
    array__497_to_double,
    is_array__497_long_convertion_allowed,
    array__497_to_long,
    compare_array__497,
    get_array__497_signature,
    set_array__497_default_value,
    sizeof(array__497)
};

/****************************************************************
 ** NID_PACKET 
 ****************************************************************/

struct SimTypeVTable *pSimNID_PACKETVTable;

int NID_PACKET_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_PACKETVTable != NULL
        && pSimNID_PACKETVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_PACKETVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_PACKET(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_PACKETVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_PACKETVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_PACKET_double_conversion_allowed()
{
    if (pSimNID_PACKETVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_PACKETVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_PACKET_long_convertion_allowed()
{
    if (pSimNID_PACKETVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_PACKETVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_PACKET(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_PACKETVTable != NULL
        && pSimNID_PACKETVTable->m_version >= Scv612
        && pSimNID_PACKETVTable->m_pfnCompare != NULL) {
        if (pSimNID_PACKETVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_PACKETVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_PACKETVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_PACKET_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_PACKETVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_PACKETVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int NID_PACKET_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_PACKETVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_PACKETVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_NID_PACKET_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_PACKET_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_PACKET_string(const char *str, char **endptr)
{
    static NID_PACKET rTemp;
    return string_to_NID_PACKET(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_PACKET_Utils = {
    NID_PACKET_to_string,
    check_NID_PACKET_string,
    string_to_NID_PACKET,
    is_NID_PACKET_double_conversion_allowed,
    NID_PACKET_to_double,
    is_NID_PACKET_long_convertion_allowed,
    NID_PACKET_to_long,
    compare_NID_PACKET,
    get_NID_PACKET_signature,
    set_NID_PACKET_default_value,
    sizeof(NID_PACKET)
};

/****************************************************************
 ** Q_DIR 
 ****************************************************************/

struct SimTypeVTable *pSimQ_DIRVTable;

static SimEnumValUtils Q_DIR_values[] = {
    { "Q_DIR_Reverse", Q_DIR_Reverse},
    { "Q_DIR_Reverse", Q_DIR_Reverse},
    { "Q_DIR_Nominal", Q_DIR_Nominal},
    { "Q_DIR_Nominal", Q_DIR_Nominal},
    { "Q_DIR_Both_directions", Q_DIR_Both_directions},
    { "Q_DIR_Both_directions", Q_DIR_Both_directions},
};
const int Q_DIR_nb_values = 6;

int Q_DIR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_DIRVTable != NULL
        && pSimQ_DIRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DIRVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_DIR*)pValue, Q_DIR_values, Q_DIR_nb_values, pfnStrAppend, pData); 
}

int string_to_Q_DIR(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_DIRVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_DIRVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DIR_values, Q_DIR_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DIR*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_DIR_double_conversion_allowed()
{
    if (pSimQ_DIRVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_DIRVTable);
    }
    return 1;
}

int is_Q_DIR_long_convertion_allowed()
{
    if (pSimQ_DIRVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_DIRVTable);
    }
    return 1;
}

void compare_Q_DIR(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_DIRVTable != NULL
        && pSimQ_DIRVTable->m_version >= Scv612
        && pSimQ_DIRVTable->m_pfnCompare != NULL) {
        if (pSimQ_DIRVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_DIRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_DIRVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_DIR*)pValue1), (int)(*(Q_DIR*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_DIR_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_DIRVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_DIRVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_DIR*)pValue);
    return 1;
}

int Q_DIR_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_DIRVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_DIRVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_DIR*)pValue);
    return 1;
}

int get_Q_DIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_DIR_values, Q_DIR_nb_values, pfnStrAppend, pData);
}

int set_Q_DIR_default_value(void *pValue)
{
    *(Q_DIR*)pValue = Q_DIR_Reverse;
    return 1;
}

int check_Q_DIR_string(const char *str, char **endptr)
{
    static Q_DIR rTemp;
    return string_to_Q_DIR(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_DIR_Utils = {
    Q_DIR_to_string,
    check_Q_DIR_string,
    string_to_Q_DIR,
    is_Q_DIR_double_conversion_allowed,
    Q_DIR_to_double,
    is_Q_DIR_long_convertion_allowed,
    Q_DIR_to_long,
    compare_Q_DIR,
    get_Q_DIR_signature,
    set_Q_DIR_default_value,
    sizeof(Q_DIR)
};

/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimMetadataElement_T_Common_Types_PkgVTable;

int MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__483_to_string(pValue, pfnStrAppend, pData);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__483(str, pValue, endptr);
    }
    return nRet;
}

int is_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__483_double_conversion_allowed();
}

int is_MetadataElement_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__483_long_convertion_allowed();
}

void compare_MetadataElement_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimMetadataElement_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__483(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__483_to_double(pValue, nRetValue);
}

int MetadataElement_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__483_to_long(pValue, nRetValue);
}

int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__483_signature(pfnStrAppend, pData);
}

int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__483_default_value(pValue);
}

int check_MetadataElement_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static MetadataElement_T_Common_Types_Pkg rTemp;
    return string_to_MetadataElement_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_MetadataElement_T_Common_Types_Pkg_Utils = {
    MetadataElement_T_Common_Types_Pkg_to_string,
    check_MetadataElement_T_Common_Types_Pkg_string,
    string_to_MetadataElement_T_Common_Types_Pkg,
    is_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed,
    MetadataElement_T_Common_Types_Pkg_to_double,
    is_MetadataElement_T_Common_Types_Pkg_long_convertion_allowed,
    MetadataElement_T_Common_Types_Pkg_to_long,
    compare_MetadataElement_T_Common_Types_Pkg,
    get_MetadataElement_T_Common_Types_Pkg_signature,
    set_MetadataElement_T_Common_Types_Pkg_default_value,
    sizeof(MetadataElement_T_Common_Types_Pkg)
};

/****************************************************************
 ** CompressedPacketData_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimCompressedPacketData_T_Common_Types_PkgVTable;

int CompressedPacketData_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_500_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedPacketData_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPacketData_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_500(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedPacketData_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedPacketData_T_Common_Types_PkgVTable);
    }
    return is_array_int_500_double_conversion_allowed();
}

int is_CompressedPacketData_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimCompressedPacketData_T_Common_Types_PkgVTable);
    }
    return is_array_int_500_long_convertion_allowed();
}

void compare_CompressedPacketData_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_500(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedPacketData_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPacketData_T_Common_Types_PkgVTable, nRetValue);
    }
    return array_int_500_to_double(pValue, nRetValue);
}

int CompressedPacketData_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedPacketData_T_Common_Types_PkgVTable, nRetValue);
    }
    return array_int_500_to_long(pValue, nRetValue);
}

int get_CompressedPacketData_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_500_signature(pfnStrAppend, pData);
}

int set_CompressedPacketData_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_array_int_500_default_value(pValue);
}

int check_CompressedPacketData_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static CompressedPacketData_T_Common_Types_Pkg rTemp;
    return string_to_CompressedPacketData_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_CompressedPacketData_T_Common_Types_Pkg_Utils = {
    CompressedPacketData_T_Common_Types_Pkg_to_string,
    check_CompressedPacketData_T_Common_Types_Pkg_string,
    string_to_CompressedPacketData_T_Common_Types_Pkg,
    is_CompressedPacketData_T_Common_Types_Pkg_double_conversion_allowed,
    CompressedPacketData_T_Common_Types_Pkg_to_double,
    is_CompressedPacketData_T_Common_Types_Pkg_long_convertion_allowed,
    CompressedPacketData_T_Common_Types_Pkg_to_long,
    compare_CompressedPacketData_T_Common_Types_Pkg,
    get_CompressedPacketData_T_Common_Types_Pkg_signature,
    set_CompressedPacketData_T_Common_Types_Pkg_default_value,
    sizeof(CompressedPacketData_T_Common_Types_Pkg)
};

/****************************************************************
 ** nid_packet_meta_TM 
 ****************************************************************/

struct SimTypeVTable *pSimnid_packet_meta_TMVTable;

int nid_packet_meta_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimnid_packet_meta_TMVTable != NULL
        && pSimnid_packet_meta_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimnid_packet_meta_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_nid_packet_meta_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimnid_packet_meta_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimnid_packet_meta_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_nid_packet_meta_TM_double_conversion_allowed()
{
    if (pSimnid_packet_meta_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimnid_packet_meta_TMVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_nid_packet_meta_TM_long_convertion_allowed()
{
    if (pSimnid_packet_meta_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimnid_packet_meta_TMVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_nid_packet_meta_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimnid_packet_meta_TMVTable != NULL
        && pSimnid_packet_meta_TMVTable->m_version >= Scv612
        && pSimnid_packet_meta_TMVTable->m_pfnCompare != NULL) {
        if (pSimnid_packet_meta_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimnid_packet_meta_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimnid_packet_meta_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int nid_packet_meta_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimnid_packet_meta_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimnid_packet_meta_TMVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int nid_packet_meta_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimnid_packet_meta_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimnid_packet_meta_TMVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_nid_packet_meta_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_nid_packet_meta_TM_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_nid_packet_meta_TM_string(const char *str, char **endptr)
{
    static nid_packet_meta_TM rTemp;
    return string_to_nid_packet_meta_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_nid_packet_meta_TM_Utils = {
    nid_packet_meta_TM_to_string,
    check_nid_packet_meta_TM_string,
    string_to_nid_packet_meta_TM,
    is_nid_packet_meta_TM_double_conversion_allowed,
    nid_packet_meta_TM_to_double,
    is_nid_packet_meta_TM_long_convertion_allowed,
    nid_packet_meta_TM_to_long,
    compare_nid_packet_meta_TM,
    get_nid_packet_meta_TM_signature,
    set_nid_packet_meta_TM_default_value,
    sizeof(nid_packet_meta_TM)
};

/****************************************************************
 ** P027V1_trackside_int_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_trackside_int_T_TM_baseline2VTable;

int P027V1_trackside_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL
        && pSimP027V1_trackside_int_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_trackside_int_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__465_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__465(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackside_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__465_double_conversion_allowed();
}

int is_P027V1_trackside_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__465_long_convertion_allowed();
}

void compare_P027V1_trackside_int_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL
        && pSimP027V1_trackside_int_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_trackside_int_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_trackside_int_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_trackside_int_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_trackside_int_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__465(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__465_to_double(pValue, nRetValue);
}

int P027V1_trackside_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__465_to_long(pValue, nRetValue);
}

int get_P027V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__465_signature(pfnStrAppend, pData);
}

int set_P027V1_trackside_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__465_default_value(pValue);
}

int check_P027V1_trackside_int_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_trackside_int_T_TM_baseline2 rTemp;
    return string_to_P027V1_trackside_int_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_trackside_int_T_TM_baseline2_Utils = {
    P027V1_trackside_int_T_TM_baseline2_to_string,
    check_P027V1_trackside_int_T_TM_baseline2_string,
    string_to_P027V1_trackside_int_T_TM_baseline2,
    is_P027V1_trackside_int_T_TM_baseline2_double_conversion_allowed,
    P027V1_trackside_int_T_TM_baseline2_to_double,
    is_P027V1_trackside_int_T_TM_baseline2_long_convertion_allowed,
    P027V1_trackside_int_T_TM_baseline2_to_long,
    compare_P027V1_trackside_int_T_TM_baseline2,
    get_P027V1_trackside_int_T_TM_baseline2_signature,
    set_P027V1_trackside_int_T_TM_baseline2_default_value,
    sizeof(P027V1_trackside_int_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_trackside_qdifflist_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable;

int P027V1_trackside_qdifflist_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL
        && pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__448_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackside_qdifflist_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__448(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackside_qdifflist_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable);
    }
    return is_array__448_double_conversion_allowed();
}

int is_P027V1_trackside_qdifflist_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable);
    }
    return is_array__448_long_convertion_allowed();
}

void compare_P027V1_trackside_qdifflist_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL
        && pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__448(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_qdifflist_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable, nRetValue);
    }
    return array__448_to_double(pValue, nRetValue);
}

int P027V1_trackside_qdifflist_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable, nRetValue);
    }
    return array__448_to_long(pValue, nRetValue);
}

int get_P027V1_trackside_qdifflist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__448_signature(pfnStrAppend, pData);
}

int set_P027V1_trackside_qdifflist_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__448_default_value(pValue);
}

int check_P027V1_trackside_qdifflist_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_trackside_qdifflist_T_TM_baseline2 rTemp;
    return string_to_P027V1_trackside_qdifflist_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils = {
    P027V1_trackside_qdifflist_T_TM_baseline2_to_string,
    check_P027V1_trackside_qdifflist_T_TM_baseline2_string,
    string_to_P027V1_trackside_qdifflist_T_TM_baseline2,
    is_P027V1_trackside_qdifflist_T_TM_baseline2_double_conversion_allowed,
    P027V1_trackside_qdifflist_T_TM_baseline2_to_double,
    is_P027V1_trackside_qdifflist_T_TM_baseline2_long_convertion_allowed,
    P027V1_trackside_qdifflist_T_TM_baseline2_to_long,
    compare_P027V1_trackside_qdifflist_T_TM_baseline2,
    get_P027V1_trackside_qdifflist_T_TM_baseline2_signature,
    set_P027V1_trackside_qdifflist_T_TM_baseline2_default_value,
    sizeof(P027V1_trackside_qdifflist_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_section_int_qdiff_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_section_int_qdiff_T_TM_baseline2VTable;

int P027V1_section_int_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_int_qdiff_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_section_int_qdiff_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__443_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_int_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_int_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__443(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_int_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_int_qdiff_T_TM_baseline2VTable);
    }
    return is_struct__443_double_conversion_allowed();
}

int is_P027V1_section_int_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_int_qdiff_T_TM_baseline2VTable);
    }
    return is_struct__443_long_convertion_allowed();
}

void compare_P027V1_section_int_qdiff_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_int_qdiff_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_section_int_qdiff_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_section_int_qdiff_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_section_int_qdiff_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__443(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_int_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return struct__443_to_double(pValue, nRetValue);
}

int P027V1_section_int_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return struct__443_to_long(pValue, nRetValue);
}

int get_P027V1_section_int_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__443_signature(pfnStrAppend, pData);
}

int set_P027V1_section_int_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__443_default_value(pValue);
}

int check_P027V1_section_int_qdiff_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_section_int_qdiff_T_TM_baseline2 rTemp;
    return string_to_P027V1_section_int_qdiff_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_section_int_qdiff_T_TM_baseline2_Utils = {
    P027V1_section_int_qdiff_T_TM_baseline2_to_string,
    check_P027V1_section_int_qdiff_T_TM_baseline2_string,
    string_to_P027V1_section_int_qdiff_T_TM_baseline2,
    is_P027V1_section_int_qdiff_T_TM_baseline2_double_conversion_allowed,
    P027V1_section_int_qdiff_T_TM_baseline2_to_double,
    is_P027V1_section_int_qdiff_T_TM_baseline2_long_convertion_allowed,
    P027V1_section_int_qdiff_T_TM_baseline2_to_long,
    compare_P027V1_section_int_qdiff_T_TM_baseline2,
    get_P027V1_section_int_qdiff_T_TM_baseline2_signature,
    set_P027V1_section_int_qdiff_T_TM_baseline2_default_value,
    sizeof(P027V1_section_int_qdiff_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_trackside_sectionlist_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable;

int P027V1_trackside_sectionlist_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL
        && pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__462_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackside_sectionlist_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__462(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackside_sectionlist_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable);
    }
    return is_array__462_double_conversion_allowed();
}

int is_P027V1_trackside_sectionlist_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable);
    }
    return is_array__462_long_convertion_allowed();
}

void compare_P027V1_trackside_sectionlist_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL
        && pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__462(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_sectionlist_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable, nRetValue);
    }
    return array__462_to_double(pValue, nRetValue);
}

int P027V1_trackside_sectionlist_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable, nRetValue);
    }
    return array__462_to_long(pValue, nRetValue);
}

int get_P027V1_trackside_sectionlist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__462_signature(pfnStrAppend, pData);
}

int set_P027V1_trackside_sectionlist_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__462_default_value(pValue);
}

int check_P027V1_trackside_sectionlist_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_trackside_sectionlist_T_TM_baseline2 rTemp;
    return string_to_P027V1_trackside_sectionlist_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_trackside_sectionlist_T_TM_baseline2_Utils = {
    P027V1_trackside_sectionlist_T_TM_baseline2_to_string,
    check_P027V1_trackside_sectionlist_T_TM_baseline2_string,
    string_to_P027V1_trackside_sectionlist_T_TM_baseline2,
    is_P027V1_trackside_sectionlist_T_TM_baseline2_double_conversion_allowed,
    P027V1_trackside_sectionlist_T_TM_baseline2_to_double,
    is_P027V1_trackside_sectionlist_T_TM_baseline2_long_convertion_allowed,
    P027V1_trackside_sectionlist_T_TM_baseline2_to_long,
    compare_P027V1_trackside_sectionlist_T_TM_baseline2,
    get_P027V1_trackside_sectionlist_T_TM_baseline2_signature,
    set_P027V1_trackside_sectionlist_T_TM_baseline2_default_value,
    sizeof(P027V1_trackside_sectionlist_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_section_int_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_section_int_T_TM_baseline2VTable;

int P027V1_section_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_int_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_section_int_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__451_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__451(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_int_T_TM_baseline2VTable);
    }
    return is_struct__451_double_conversion_allowed();
}

int is_P027V1_section_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_int_T_TM_baseline2VTable);
    }
    return is_struct__451_long_convertion_allowed();
}

void compare_P027V1_section_int_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_int_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_section_int_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_section_int_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_section_int_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_section_int_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__451(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__451_to_double(pValue, nRetValue);
}

int P027V1_section_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__451_to_long(pValue, nRetValue);
}

int get_P027V1_section_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__451_signature(pfnStrAppend, pData);
}

int set_P027V1_section_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__451_default_value(pValue);
}

int check_P027V1_section_int_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_section_int_T_TM_baseline2 rTemp;
    return string_to_P027V1_section_int_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_section_int_T_TM_baseline2_Utils = {
    P027V1_section_int_T_TM_baseline2_to_string,
    check_P027V1_section_int_T_TM_baseline2_string,
    string_to_P027V1_section_int_T_TM_baseline2,
    is_P027V1_section_int_T_TM_baseline2_double_conversion_allowed,
    P027V1_section_int_T_TM_baseline2_to_double,
    is_P027V1_section_int_T_TM_baseline2_long_convertion_allowed,
    P027V1_section_int_T_TM_baseline2_to_long,
    compare_P027V1_section_int_T_TM_baseline2,
    get_P027V1_section_int_T_TM_baseline2_signature,
    set_P027V1_section_int_T_TM_baseline2_default_value,
    sizeof(P027V1_section_int_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_OBU_sectionlist_int_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable;

int P027V1_OBU_sectionlist_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL
        && pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__459_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_OBU_sectionlist_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__459(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_OBU_sectionlist_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable);
    }
    return is_array__459_double_conversion_allowed();
}

int is_P027V1_OBU_sectionlist_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable);
    }
    return is_array__459_long_convertion_allowed();
}

void compare_P027V1_OBU_sectionlist_int_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL
        && pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__459(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_OBU_sectionlist_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable, nRetValue);
    }
    return array__459_to_double(pValue, nRetValue);
}

int P027V1_OBU_sectionlist_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_OBU_sectionlist_int_T_TM_baseline2VTable, nRetValue);
    }
    return array__459_to_long(pValue, nRetValue);
}

int get_P027V1_OBU_sectionlist_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__459_signature(pfnStrAppend, pData);
}

int set_P027V1_OBU_sectionlist_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__459_default_value(pValue);
}

int check_P027V1_OBU_sectionlist_int_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_OBU_sectionlist_int_T_TM_baseline2 rTemp;
    return string_to_P027V1_OBU_sectionlist_int_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils = {
    P027V1_OBU_sectionlist_int_T_TM_baseline2_to_string,
    check_P027V1_OBU_sectionlist_int_T_TM_baseline2_string,
    string_to_P027V1_OBU_sectionlist_int_T_TM_baseline2,
    is_P027V1_OBU_sectionlist_int_T_TM_baseline2_double_conversion_allowed,
    P027V1_OBU_sectionlist_int_T_TM_baseline2_to_double,
    is_P027V1_OBU_sectionlist_int_T_TM_baseline2_long_convertion_allowed,
    P027V1_OBU_sectionlist_int_T_TM_baseline2_to_long,
    compare_P027V1_OBU_sectionlist_int_T_TM_baseline2,
    get_P027V1_OBU_sectionlist_int_T_TM_baseline2_signature,
    set_P027V1_OBU_sectionlist_int_T_TM_baseline2_default_value,
    sizeof(P027V1_OBU_sectionlist_int_T_TM_baseline2)
};

#include "C:/Program Files/Esterel Technologies/SCADE R16.1/SCADE/lib/kcg_conv.c"
