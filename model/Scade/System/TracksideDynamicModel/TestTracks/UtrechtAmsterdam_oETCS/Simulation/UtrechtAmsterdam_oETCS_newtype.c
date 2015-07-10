#include <stdlib.h>
#include <stddef.h>
#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "UtrechtAmsterdam_oETCS_newtype.h"
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
 ** struct__20594 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20594VTable;

static SimFieldUtils struct__20594_fields[] = {
    {"TrainPos_in", offsetof(struct__20594,TrainPos_in), &_Type_kcg_real_Utils},
    {"OffsetTotal", offsetof(struct__20594,OffsetTotal), &_Type_kcg_int_Utils},
    {"TrainPosCalibrated", offsetof(struct__20594,TrainPosCalibrated), &_Type_kcg_real_Utils},
};

int struct__20594_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20594VTable != NULL
        && pSimstruct__20594VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20594VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20594_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__20594(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20594VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20594VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20594_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__20594_double_conversion_allowed()
{
    if (pSimstruct__20594VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20594VTable);
    }
    return 0;
}

int is_struct__20594_long_convertion_allowed()
{
    if (pSimstruct__20594VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20594VTable);
    }
    return 0;
}

void compare_struct__20594(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20594VTable != NULL
        && pSimstruct__20594VTable->m_version >= Scv612
        && pSimstruct__20594VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20594VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20594VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20594VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20594_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20594_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20594VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20594VTable, nRetValue);
    }
    return 0;
}

int struct__20594_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20594VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20594VTable, nRetValue);
    }
    return 0;
}

int get_struct__20594_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20594_fields, 3, pfnStrAppend, pData);
}

int set_struct__20594_default_value(void *pValue)
{
    set_kcg_real_default_value(&(((struct__20594*)pValue)->TrainPos_in));
    set_kcg_int_default_value(&(((struct__20594*)pValue)->OffsetTotal));
    set_kcg_real_default_value(&(((struct__20594*)pValue)->TrainPosCalibrated));
    return 1;
}

int check_struct__20594_string(const char *str, char **endptr)
{
    static struct__20594 rTemp;
    return string_to_struct__20594(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20594_Utils = {
    struct__20594_to_string,
    check_struct__20594_string,
    string_to_struct__20594,
    is_struct__20594_double_conversion_allowed,
    struct__20594_to_double,
    is_struct__20594_long_convertion_allowed,
    struct__20594_to_long,
    compare_struct__20594,
    get_struct__20594_signature,
    set_struct__20594_default_value,
    sizeof(struct__20594)
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
 ** struct__20603 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20603VTable;

static SimFieldUtils struct__20603_fields[] = {
    {"nid_packet", offsetof(struct__20603,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__20603,q_dir), &_Type_Q_DIR_Utils},
    {"valid", offsetof(struct__20603,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(struct__20603,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(struct__20603,endAddress), &_Type_kcg_int_Utils},
};

int struct__20603_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20603VTable != NULL
        && pSimstruct__20603VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20603VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20603_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__20603(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20603VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20603VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20603_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__20603_double_conversion_allowed()
{
    if (pSimstruct__20603VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20603VTable);
    }
    return 0;
}

int is_struct__20603_long_convertion_allowed()
{
    if (pSimstruct__20603VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20603VTable);
    }
    return 0;
}

void compare_struct__20603(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20603VTable != NULL
        && pSimstruct__20603VTable->m_version >= Scv612
        && pSimstruct__20603VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20603VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20603VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20603VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20603_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20603_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20603VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20603VTable, nRetValue);
    }
    return 0;
}

int struct__20603_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20603VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20603VTable, nRetValue);
    }
    return 0;
}

int get_struct__20603_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20603_fields, 5, pfnStrAppend, pData);
}

int set_struct__20603_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__20603*)pValue)->nid_packet));
    set_Q_DIR_default_value(&(((struct__20603*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((struct__20603*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__20603*)pValue)->startAddress));
    set_kcg_int_default_value(&(((struct__20603*)pValue)->endAddress));
    return 1;
}

int check_struct__20603_string(const char *str, char **endptr)
{
    static struct__20603 rTemp;
    return string_to_struct__20603(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20603_Utils = {
    struct__20603_to_string,
    check_struct__20603_string,
    string_to_struct__20603,
    is_struct__20603_double_conversion_allowed,
    struct__20603_to_double,
    is_struct__20603_long_convertion_allowed,
    struct__20603_to_long,
    compare_struct__20603,
    get_struct__20603_signature,
    set_struct__20603_default_value,
    sizeof(struct__20603)
};

/****************************************************************
 ** array__20611 
 ****************************************************************/

struct SimTypeVTable *pSimarray__20611VTable;

int array__20611_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__20611VTable != NULL
        && pSimarray__20611VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__20611VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__20603_to_string, 30, sizeof(struct__20603), pfnStrAppend, pData);
}

int string_to_array__20611(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__20611VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__20611VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__20603_Utils, 30, sizeof(struct__20603), endptr);
    }
    return nRet;
}

int is_array__20611_double_conversion_allowed()
{
    if (pSimarray__20611VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__20611VTable);
    }
    return 0;
}

int is_array__20611_long_convertion_allowed()
{
    if (pSimarray__20611VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__20611VTable);
    }
    return 0;
}

void compare_array__20611(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__20611VTable != NULL
        && pSimarray__20611VTable->m_version >= Scv612
        && pSimarray__20611VTable->m_pfnCompare != NULL) {
        if (pSimarray__20611VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__20611VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__20611VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__20603, 30, sizeof(struct__20603), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__20611_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__20611VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__20611VTable, nRetValue);
    }
    return 0;
}

int array__20611_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__20611VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__20611VTable, nRetValue);
    }
    return 0;
}

int get_array__20611_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__20603_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__20611_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_struct__20603_default_value(&((struct__20603*)pValue)[i]);
    return 1;
}

int check_array__20611_string(const char *str, char **endptr)
{
    static array__20611 rTemp;
    return string_to_array__20611(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__20611_Utils = {
    array__20611_to_string,
    check_array__20611_string,
    string_to_array__20611,
    is_array__20611_double_conversion_allowed,
    array__20611_to_double,
    is_array__20611_long_convertion_allowed,
    array__20611_to_long,
    compare_array__20611,
    get_array__20611_signature,
    set_array__20611_default_value,
    sizeof(array__20611)
};

/****************************************************************
 ** struct__20614 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20614VTable;

static SimFieldUtils struct__20614_fields[] = {
    {"PacketHeaders", offsetof(struct__20614,PacketHeaders), &_Type_array__20611_Utils},
    {"PacketData", offsetof(struct__20614,PacketData), &_Type_array_int_500_Utils},
};

int struct__20614_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20614VTable != NULL
        && pSimstruct__20614VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20614VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20614_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__20614(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20614VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20614VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20614_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__20614_double_conversion_allowed()
{
    if (pSimstruct__20614VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20614VTable);
    }
    return 0;
}

int is_struct__20614_long_convertion_allowed()
{
    if (pSimstruct__20614VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20614VTable);
    }
    return 0;
}

void compare_struct__20614(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20614VTable != NULL
        && pSimstruct__20614VTable->m_version >= Scv612
        && pSimstruct__20614VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20614VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20614VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20614VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20614_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20614_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20614VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20614VTable, nRetValue);
    }
    return 0;
}

int struct__20614_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20614VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20614VTable, nRetValue);
    }
    return 0;
}

int get_struct__20614_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20614_fields, 2, pfnStrAppend, pData);
}

int set_struct__20614_default_value(void *pValue)
{
    set_array__20611_default_value(&(((struct__20614*)pValue)->PacketHeaders));
    set_array_int_500_default_value(&(((struct__20614*)pValue)->PacketData));
    return 1;
}

int check_struct__20614_string(const char *str, char **endptr)
{
    static struct__20614 rTemp;
    return string_to_struct__20614(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20614_Utils = {
    struct__20614_to_string,
    check_struct__20614_string,
    string_to_struct__20614,
    is_struct__20614_double_conversion_allowed,
    struct__20614_to_double,
    is_struct__20614_long_convertion_allowed,
    struct__20614_to_long,
    compare_struct__20614,
    get_struct__20614_signature,
    set_struct__20614_default_value,
    sizeof(struct__20614)
};

/****************************************************************
 ** struct__20619 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20619VTable;

static SimFieldUtils struct__20619_fields[] = {
    {"q_updown", offsetof(struct__20619,q_updown), &_Type_kcg_int_Utils},
    {"m_version", offsetof(struct__20619,m_version), &_Type_kcg_int_Utils},
    {"q_media", offsetof(struct__20619,q_media), &_Type_kcg_int_Utils},
    {"n_pig", offsetof(struct__20619,n_pig), &_Type_kcg_int_Utils},
    {"n_total", offsetof(struct__20619,n_total), &_Type_kcg_int_Utils},
    {"m_dup", offsetof(struct__20619,m_dup), &_Type_kcg_int_Utils},
    {"m_mcount", offsetof(struct__20619,m_mcount), &_Type_kcg_int_Utils},
    {"nid_c", offsetof(struct__20619,nid_c), &_Type_kcg_int_Utils},
    {"nid_bg", offsetof(struct__20619,nid_bg), &_Type_kcg_int_Utils},
    {"q_link", offsetof(struct__20619,q_link), &_Type_kcg_int_Utils},
};

int struct__20619_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20619VTable != NULL
        && pSimstruct__20619VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20619VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20619_fields, 10, pfnStrAppend, pData);
}

int string_to_struct__20619(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20619VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20619VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20619_fields, 10, endptr);
    }
    return nRet;
}

int is_struct__20619_double_conversion_allowed()
{
    if (pSimstruct__20619VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20619VTable);
    }
    return 0;
}

int is_struct__20619_long_convertion_allowed()
{
    if (pSimstruct__20619VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20619VTable);
    }
    return 0;
}

void compare_struct__20619(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20619VTable != NULL
        && pSimstruct__20619VTable->m_version >= Scv612
        && pSimstruct__20619VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20619VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20619VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20619VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20619_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20619_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20619VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20619VTable, nRetValue);
    }
    return 0;
}

int struct__20619_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20619VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20619VTable, nRetValue);
    }
    return 0;
}

int get_struct__20619_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20619_fields, 10, pfnStrAppend, pData);
}

int set_struct__20619_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__20619*)pValue)->q_updown));
    set_kcg_int_default_value(&(((struct__20619*)pValue)->m_version));
    set_kcg_int_default_value(&(((struct__20619*)pValue)->q_media));
    set_kcg_int_default_value(&(((struct__20619*)pValue)->n_pig));
    set_kcg_int_default_value(&(((struct__20619*)pValue)->n_total));
    set_kcg_int_default_value(&(((struct__20619*)pValue)->m_dup));
    set_kcg_int_default_value(&(((struct__20619*)pValue)->m_mcount));
    set_kcg_int_default_value(&(((struct__20619*)pValue)->nid_c));
    set_kcg_int_default_value(&(((struct__20619*)pValue)->nid_bg));
    set_kcg_int_default_value(&(((struct__20619*)pValue)->q_link));
    return 1;
}

int check_struct__20619_string(const char *str, char **endptr)
{
    static struct__20619 rTemp;
    return string_to_struct__20619(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20619_Utils = {
    struct__20619_to_string,
    check_struct__20619_string,
    string_to_struct__20619,
    is_struct__20619_double_conversion_allowed,
    struct__20619_to_double,
    is_struct__20619_long_convertion_allowed,
    struct__20619_to_long,
    compare_struct__20619,
    get_struct__20619_signature,
    set_struct__20619_default_value,
    sizeof(struct__20619)
};

/****************************************************************
 ** struct__20632 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20632VTable;

static SimFieldUtils struct__20632_fields[] = {
    {"Header", offsetof(struct__20632,Header), &_Type_struct__20619_Utils},
    {"Messages", offsetof(struct__20632,Messages), &_Type_struct__20614_Utils},
};

int struct__20632_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20632VTable != NULL
        && pSimstruct__20632VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20632VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20632_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__20632(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20632VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20632VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20632_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__20632_double_conversion_allowed()
{
    if (pSimstruct__20632VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20632VTable);
    }
    return 0;
}

int is_struct__20632_long_convertion_allowed()
{
    if (pSimstruct__20632VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20632VTable);
    }
    return 0;
}

void compare_struct__20632(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20632VTable != NULL
        && pSimstruct__20632VTable->m_version >= Scv612
        && pSimstruct__20632VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20632VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20632VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20632VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20632_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20632_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20632VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20632VTable, nRetValue);
    }
    return 0;
}

int struct__20632_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20632VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20632VTable, nRetValue);
    }
    return 0;
}

int get_struct__20632_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20632_fields, 2, pfnStrAppend, pData);
}

int set_struct__20632_default_value(void *pValue)
{
    set_struct__20619_default_value(&(((struct__20632*)pValue)->Header));
    set_struct__20614_default_value(&(((struct__20632*)pValue)->Messages));
    return 1;
}

int check_struct__20632_string(const char *str, char **endptr)
{
    static struct__20632 rTemp;
    return string_to_struct__20632(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20632_Utils = {
    struct__20632_to_string,
    check_struct__20632_string,
    string_to_struct__20632,
    is_struct__20632_double_conversion_allowed,
    struct__20632_to_double,
    is_struct__20632_long_convertion_allowed,
    struct__20632_to_long,
    compare_struct__20632,
    get_struct__20632_signature,
    set_struct__20632_default_value,
    sizeof(struct__20632)
};

/****************************************************************
 ** struct__20637 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20637VTable;

static SimFieldUtils struct__20637_fields[] = {
    {"TrainPosRaw", offsetof(struct__20637,TrainPosRaw), &_Type_struct__20594_Utils},
    {"BG_Message", offsetof(struct__20637,BG_Message), &_Type_struct__20632_Utils},
};

int struct__20637_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20637VTable != NULL
        && pSimstruct__20637VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20637VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20637_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__20637(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20637VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20637VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20637_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__20637_double_conversion_allowed()
{
    if (pSimstruct__20637VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20637VTable);
    }
    return 0;
}

int is_struct__20637_long_convertion_allowed()
{
    if (pSimstruct__20637VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20637VTable);
    }
    return 0;
}

void compare_struct__20637(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20637VTable != NULL
        && pSimstruct__20637VTable->m_version >= Scv612
        && pSimstruct__20637VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20637VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20637VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20637VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20637_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20637_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20637VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20637VTable, nRetValue);
    }
    return 0;
}

int struct__20637_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20637VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20637VTable, nRetValue);
    }
    return 0;
}

int get_struct__20637_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20637_fields, 2, pfnStrAppend, pData);
}

int set_struct__20637_default_value(void *pValue)
{
    set_struct__20594_default_value(&(((struct__20637*)pValue)->TrainPosRaw));
    set_struct__20632_default_value(&(((struct__20637*)pValue)->BG_Message));
    return 1;
}

int check_struct__20637_string(const char *str, char **endptr)
{
    static struct__20637 rTemp;
    return string_to_struct__20637(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20637_Utils = {
    struct__20637_to_string,
    check_struct__20637_string,
    string_to_struct__20637,
    is_struct__20637_double_conversion_allowed,
    struct__20637_to_double,
    is_struct__20637_long_convertion_allowed,
    struct__20637_to_long,
    compare_struct__20637,
    get_struct__20637_signature,
    set_struct__20637_default_value,
    sizeof(struct__20637)
};

/****************************************************************
 ** struct__20642 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20642VTable;

static SimFieldUtils struct__20642_fields[] = {
    {"NID_C", offsetof(struct__20642,NID_C), &_Type_kcg_int_Utils},
    {"NID_BG", offsetof(struct__20642,NID_BG), &_Type_kcg_int_Utils},
    {"Pos", offsetof(struct__20642,Pos), &_Type_kcg_int_Utils},
    {"Or_BG", offsetof(struct__20642,Or_BG), &_Type_OrBG_TM_Utils},
    {"Or_Line", offsetof(struct__20642,Or_Line), &_Type_OrLine_TM_Utils},
};

int struct__20642_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20642VTable != NULL
        && pSimstruct__20642VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20642VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20642_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__20642(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20642VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20642VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20642_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__20642_double_conversion_allowed()
{
    if (pSimstruct__20642VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20642VTable);
    }
    return 0;
}

int is_struct__20642_long_convertion_allowed()
{
    if (pSimstruct__20642VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20642VTable);
    }
    return 0;
}

void compare_struct__20642(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20642VTable != NULL
        && pSimstruct__20642VTable->m_version >= Scv612
        && pSimstruct__20642VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20642VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20642VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20642VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20642_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20642_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20642VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20642VTable, nRetValue);
    }
    return 0;
}

int struct__20642_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20642VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20642VTable, nRetValue);
    }
    return 0;
}

int get_struct__20642_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20642_fields, 5, pfnStrAppend, pData);
}

int set_struct__20642_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__20642*)pValue)->NID_C));
    set_kcg_int_default_value(&(((struct__20642*)pValue)->NID_BG));
    set_kcg_int_default_value(&(((struct__20642*)pValue)->Pos));
    set_OrBG_TM_default_value(&(((struct__20642*)pValue)->Or_BG));
    set_OrLine_TM_default_value(&(((struct__20642*)pValue)->Or_Line));
    return 1;
}

int check_struct__20642_string(const char *str, char **endptr)
{
    static struct__20642 rTemp;
    return string_to_struct__20642(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20642_Utils = {
    struct__20642_to_string,
    check_struct__20642_string,
    string_to_struct__20642,
    is_struct__20642_double_conversion_allowed,
    struct__20642_to_double,
    is_struct__20642_long_convertion_allowed,
    struct__20642_to_long,
    compare_struct__20642,
    get_struct__20642_signature,
    set_struct__20642_default_value,
    sizeof(struct__20642)
};

/****************************************************************
 ** struct__20650 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20650VTable;

static SimFieldUtils struct__20650_fields[] = {
    {"header", offsetof(struct__20650,header), &_Type_struct__20619_Utils},
    {"packets", offsetof(struct__20650,packets), &_Type_struct__20614_Utils},
    {"engineering_BG_location", offsetof(struct__20650,engineering_BG_location), &_Type_kcg_int_Utils},
    {"TrainPos", offsetof(struct__20650,TrainPos), &_Type_kcg_real_Utils},
    {"pig_nom_0", offsetof(struct__20650,pig_nom_0), &_Type_kcg_int_Utils},
    {"balise_passed", offsetof(struct__20650,balise_passed), &_Type_kcg_bool_Utils},
};

int struct__20650_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20650VTable != NULL
        && pSimstruct__20650VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20650VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20650_fields, 6, pfnStrAppend, pData);
}

int string_to_struct__20650(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20650VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20650VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20650_fields, 6, endptr);
    }
    return nRet;
}

int is_struct__20650_double_conversion_allowed()
{
    if (pSimstruct__20650VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20650VTable);
    }
    return 0;
}

int is_struct__20650_long_convertion_allowed()
{
    if (pSimstruct__20650VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20650VTable);
    }
    return 0;
}

void compare_struct__20650(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20650VTable != NULL
        && pSimstruct__20650VTable->m_version >= Scv612
        && pSimstruct__20650VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20650VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20650VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20650VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20650_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20650_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20650VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20650VTable, nRetValue);
    }
    return 0;
}

int struct__20650_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20650VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20650VTable, nRetValue);
    }
    return 0;
}

int get_struct__20650_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20650_fields, 6, pfnStrAppend, pData);
}

int set_struct__20650_default_value(void *pValue)
{
    set_struct__20619_default_value(&(((struct__20650*)pValue)->header));
    set_struct__20614_default_value(&(((struct__20650*)pValue)->packets));
    set_kcg_int_default_value(&(((struct__20650*)pValue)->engineering_BG_location));
    set_kcg_real_default_value(&(((struct__20650*)pValue)->TrainPos));
    set_kcg_int_default_value(&(((struct__20650*)pValue)->pig_nom_0));
    set_kcg_bool_default_value(&(((struct__20650*)pValue)->balise_passed));
    return 1;
}

int check_struct__20650_string(const char *str, char **endptr)
{
    static struct__20650 rTemp;
    return string_to_struct__20650(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20650_Utils = {
    struct__20650_to_string,
    check_struct__20650_string,
    string_to_struct__20650,
    is_struct__20650_double_conversion_allowed,
    struct__20650_to_double,
    is_struct__20650_long_convertion_allowed,
    struct__20650_to_long,
    compare_struct__20650,
    get_struct__20650_signature,
    set_struct__20650_default_value,
    sizeof(struct__20650)
};

/****************************************************************
 ** struct__20659 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20659VTable;

static SimFieldUtils struct__20659_fields[] = {
    {"valid", offsetof(struct__20659,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__20659,NID_PACKET), &_Type_kcg_int_Utils},
};

int struct__20659_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20659VTable != NULL
        && pSimstruct__20659VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20659VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20659_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__20659(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20659VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20659VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20659_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__20659_double_conversion_allowed()
{
    if (pSimstruct__20659VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20659VTable);
    }
    return 0;
}

int is_struct__20659_long_convertion_allowed()
{
    if (pSimstruct__20659VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20659VTable);
    }
    return 0;
}

void compare_struct__20659(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20659VTable != NULL
        && pSimstruct__20659VTable->m_version >= Scv612
        && pSimstruct__20659VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20659VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20659VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20659VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20659_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20659_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20659VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20659VTable, nRetValue);
    }
    return 0;
}

int struct__20659_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20659VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20659VTable, nRetValue);
    }
    return 0;
}

int get_struct__20659_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20659_fields, 2, pfnStrAppend, pData);
}

int set_struct__20659_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__20659*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__20659*)pValue)->NID_PACKET));
    return 1;
}

int check_struct__20659_string(const char *str, char **endptr)
{
    static struct__20659 rTemp;
    return string_to_struct__20659(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20659_Utils = {
    struct__20659_to_string,
    check_struct__20659_string,
    string_to_struct__20659,
    is_struct__20659_double_conversion_allowed,
    struct__20659_to_double,
    is_struct__20659_long_convertion_allowed,
    struct__20659_to_long,
    compare_struct__20659,
    get_struct__20659_signature,
    set_struct__20659_default_value,
    sizeof(struct__20659)
};

/****************************************************************
 ** struct__20664 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20664VTable;

static SimFieldUtils struct__20664_fields[] = {
    {"valid", offsetof(struct__20664,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__20664,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__20664,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__20664,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SRSTOP", offsetof(struct__20664,Q_SRSTOP), &_Type_kcg_int_Utils},
};

int struct__20664_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20664VTable != NULL
        && pSimstruct__20664VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20664VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20664_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__20664(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20664VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20664VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20664_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__20664_double_conversion_allowed()
{
    if (pSimstruct__20664VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20664VTable);
    }
    return 0;
}

int is_struct__20664_long_convertion_allowed()
{
    if (pSimstruct__20664VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20664VTable);
    }
    return 0;
}

void compare_struct__20664(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20664VTable != NULL
        && pSimstruct__20664VTable->m_version >= Scv612
        && pSimstruct__20664VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20664VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20664VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20664VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20664_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20664_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20664VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20664VTable, nRetValue);
    }
    return 0;
}

int struct__20664_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20664VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20664VTable, nRetValue);
    }
    return 0;
}

int get_struct__20664_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20664_fields, 5, pfnStrAppend, pData);
}

int set_struct__20664_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__20664*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__20664*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__20664*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__20664*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__20664*)pValue)->Q_SRSTOP));
    return 1;
}

int check_struct__20664_string(const char *str, char **endptr)
{
    static struct__20664 rTemp;
    return string_to_struct__20664(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20664_Utils = {
    struct__20664_to_string,
    check_struct__20664_string,
    string_to_struct__20664,
    is_struct__20664_double_conversion_allowed,
    struct__20664_to_double,
    is_struct__20664_long_convertion_allowed,
    struct__20664_to_long,
    compare_struct__20664,
    get_struct__20664_signature,
    set_struct__20664_default_value,
    sizeof(struct__20664)
};

/****************************************************************
 ** array_int_3 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_3VTable;

int array_int_3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_3VTable != NULL
        && pSimarray_int_3VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_3VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 3, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_3(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_3VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_3VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 3, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_3_double_conversion_allowed()
{
    if (pSimarray_int_3VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_3VTable);
    }
    return 0;
}

int is_array_int_3_long_convertion_allowed()
{
    if (pSimarray_int_3VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_3VTable);
    }
    return 0;
}

void compare_array_int_3(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_3VTable != NULL
        && pSimarray_int_3VTable->m_version >= Scv612
        && pSimarray_int_3VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_3VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_3VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_3VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 3, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_3_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_3VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_3VTable, nRetValue);
    }
    return 0;
}

int array_int_3_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_3VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_3VTable, nRetValue);
    }
    return 0;
}

int get_array_int_3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 3; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_3_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 3; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_3_string(const char *str, char **endptr)
{
    static array_int_3 rTemp;
    return string_to_array_int_3(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_3_Utils = {
    array_int_3_to_string,
    check_array_int_3_string,
    string_to_array_int_3,
    is_array_int_3_double_conversion_allowed,
    array_int_3_to_double,
    is_array_int_3_long_convertion_allowed,
    array_int_3_to_long,
    compare_array_int_3,
    get_array_int_3_signature,
    set_array_int_3_default_value,
    sizeof(array_int_3)
};

/****************************************************************
 ** struct__20675 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20675VTable;

static SimFieldUtils struct__20675_fields[] = {
    {"M_LEVELTR", offsetof(struct__20675,M_LEVELTR), &_Type_kcg_int_Utils},
    {"NID_NTC", offsetof(struct__20675,NID_NTC), &_Type_kcg_int_Utils},
    {"L_ACKLEVELTR", offsetof(struct__20675,L_ACKLEVELTR), &_Type_kcg_int_Utils},
};

int struct__20675_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20675VTable != NULL
        && pSimstruct__20675VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20675VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20675_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__20675(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20675VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20675VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20675_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__20675_double_conversion_allowed()
{
    if (pSimstruct__20675VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20675VTable);
    }
    return 0;
}

int is_struct__20675_long_convertion_allowed()
{
    if (pSimstruct__20675VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20675VTable);
    }
    return 0;
}

void compare_struct__20675(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20675VTable != NULL
        && pSimstruct__20675VTable->m_version >= Scv612
        && pSimstruct__20675VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20675VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20675VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20675VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20675_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20675_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20675VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20675VTable, nRetValue);
    }
    return 0;
}

int struct__20675_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20675VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20675VTable, nRetValue);
    }
    return 0;
}

int get_struct__20675_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20675_fields, 3, pfnStrAppend, pData);
}

int set_struct__20675_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__20675*)pValue)->M_LEVELTR));
    set_kcg_int_default_value(&(((struct__20675*)pValue)->NID_NTC));
    set_kcg_int_default_value(&(((struct__20675*)pValue)->L_ACKLEVELTR));
    return 1;
}

int check_struct__20675_string(const char *str, char **endptr)
{
    static struct__20675 rTemp;
    return string_to_struct__20675(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20675_Utils = {
    struct__20675_to_string,
    check_struct__20675_string,
    string_to_struct__20675,
    is_struct__20675_double_conversion_allowed,
    struct__20675_to_double,
    is_struct__20675_long_convertion_allowed,
    struct__20675_to_long,
    compare_struct__20675,
    get_struct__20675_signature,
    set_struct__20675_default_value,
    sizeof(struct__20675)
};

/****************************************************************
 ** array_int_3_33 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_3_33VTable;

int array_int_3_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_3_33VTable != NULL
        && pSimarray_int_3_33VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_3_33VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_3_to_string, 33, sizeof(array_int_3), pfnStrAppend, pData);
}

int string_to_array_int_3_33(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_3_33VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_3_33VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_3_Utils, 33, sizeof(array_int_3), endptr);
    }
    return nRet;
}

int is_array_int_3_33_double_conversion_allowed()
{
    if (pSimarray_int_3_33VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_3_33VTable);
    }
    return 0;
}

int is_array_int_3_33_long_convertion_allowed()
{
    if (pSimarray_int_3_33VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_3_33VTable);
    }
    return 0;
}

void compare_array_int_3_33(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_3_33VTable != NULL
        && pSimarray_int_3_33VTable->m_version >= Scv612
        && pSimarray_int_3_33VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_3_33VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_3_33VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_3_33VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_3, 33, sizeof(array_int_3), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_3_33_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_3_33VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_3_33VTable, nRetValue);
    }
    return 0;
}

int array_int_3_33_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_3_33VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_3_33VTable, nRetValue);
    }
    return 0;
}

int get_array_int_3_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_3_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_3_33_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_array_int_3_default_value(&((array_int_3*)pValue)[i]);
    return 1;
}

int check_array_int_3_33_string(const char *str, char **endptr)
{
    static array_int_3_33 rTemp;
    return string_to_array_int_3_33(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_3_33_Utils = {
    array_int_3_33_to_string,
    check_array_int_3_33_string,
    string_to_array_int_3_33,
    is_array_int_3_33_double_conversion_allowed,
    array_int_3_33_to_double,
    is_array_int_3_33_long_convertion_allowed,
    array_int_3_33_to_long,
    compare_array_int_3_33,
    get_array_int_3_33_signature,
    set_array_int_3_33_default_value,
    sizeof(array_int_3_33)
};

/****************************************************************
 ** array_int_99 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_99VTable;

int array_int_99_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_99VTable != NULL
        && pSimarray_int_99VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_99VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 99, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_99(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_99VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_99VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 99, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_99_double_conversion_allowed()
{
    if (pSimarray_int_99VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_99VTable);
    }
    return 0;
}

int is_array_int_99_long_convertion_allowed()
{
    if (pSimarray_int_99VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_99VTable);
    }
    return 0;
}

void compare_array_int_99(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_99VTable != NULL
        && pSimarray_int_99VTable->m_version >= Scv612
        && pSimarray_int_99VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_99VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_99VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_99VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 99, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_99_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_99VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_99VTable, nRetValue);
    }
    return 0;
}

int array_int_99_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_99VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_99VTable, nRetValue);
    }
    return 0;
}

int get_array_int_99_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 99; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_99_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 99; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_99_string(const char *str, char **endptr)
{
    static array_int_99 rTemp;
    return string_to_array_int_99(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_99_Utils = {
    array_int_99_to_string,
    check_array_int_99_string,
    string_to_array_int_99,
    is_array_int_99_double_conversion_allowed,
    array_int_99_to_double,
    is_array_int_99_long_convertion_allowed,
    array_int_99_to_long,
    compare_array_int_99,
    get_array_int_99_signature,
    set_array_int_99_default_value,
    sizeof(array_int_99)
};

/****************************************************************
 ** array__20687 
 ****************************************************************/

struct SimTypeVTable *pSimarray__20687VTable;

int array__20687_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__20687VTable != NULL
        && pSimarray__20687VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__20687VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__20675_to_string, 33, sizeof(struct__20675), pfnStrAppend, pData);
}

int string_to_array__20687(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__20687VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__20687VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__20675_Utils, 33, sizeof(struct__20675), endptr);
    }
    return nRet;
}

int is_array__20687_double_conversion_allowed()
{
    if (pSimarray__20687VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__20687VTable);
    }
    return 0;
}

int is_array__20687_long_convertion_allowed()
{
    if (pSimarray__20687VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__20687VTable);
    }
    return 0;
}

void compare_array__20687(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__20687VTable != NULL
        && pSimarray__20687VTable->m_version >= Scv612
        && pSimarray__20687VTable->m_pfnCompare != NULL) {
        if (pSimarray__20687VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__20687VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__20687VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__20675, 33, sizeof(struct__20675), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__20687_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__20687VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__20687VTable, nRetValue);
    }
    return 0;
}

int array__20687_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__20687VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__20687VTable, nRetValue);
    }
    return 0;
}

int get_array__20687_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__20675_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__20687_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__20675_default_value(&((struct__20675*)pValue)[i]);
    return 1;
}

int check_array__20687_string(const char *str, char **endptr)
{
    static array__20687 rTemp;
    return string_to_array__20687(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__20687_Utils = {
    array__20687_to_string,
    check_array__20687_string,
    string_to_array__20687,
    is_array__20687_double_conversion_allowed,
    array__20687_to_double,
    is_array__20687_long_convertion_allowed,
    array__20687_to_long,
    compare_array__20687,
    get_array__20687_signature,
    set_array__20687_default_value,
    sizeof(array__20687)
};

/****************************************************************
 ** array__20690 
 ****************************************************************/

struct SimTypeVTable *pSimarray__20690VTable;

int array__20690_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__20690VTable != NULL
        && pSimarray__20690VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__20690VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__20675_to_string, 32, sizeof(struct__20675), pfnStrAppend, pData);
}

int string_to_array__20690(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__20690VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__20690VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__20675_Utils, 32, sizeof(struct__20675), endptr);
    }
    return nRet;
}

int is_array__20690_double_conversion_allowed()
{
    if (pSimarray__20690VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__20690VTable);
    }
    return 0;
}

int is_array__20690_long_convertion_allowed()
{
    if (pSimarray__20690VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__20690VTable);
    }
    return 0;
}

void compare_array__20690(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__20690VTable != NULL
        && pSimarray__20690VTable->m_version >= Scv612
        && pSimarray__20690VTable->m_pfnCompare != NULL) {
        if (pSimarray__20690VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__20690VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__20690VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__20675, 32, sizeof(struct__20675), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__20690_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__20690VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__20690VTable, nRetValue);
    }
    return 0;
}

int array__20690_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__20690VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__20690VTable, nRetValue);
    }
    return 0;
}

int get_array__20690_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__20675_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__20690_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__20675_default_value(&((struct__20675*)pValue)[i]);
    return 1;
}

int check_array__20690_string(const char *str, char **endptr)
{
    static array__20690 rTemp;
    return string_to_array__20690(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__20690_Utils = {
    array__20690_to_string,
    check_array__20690_string,
    string_to_array__20690,
    is_array__20690_double_conversion_allowed,
    array__20690_to_double,
    is_array__20690_long_convertion_allowed,
    array__20690_to_long,
    compare_array__20690,
    get_array__20690_signature,
    set_array__20690_default_value,
    sizeof(array__20690)
};

/****************************************************************
 ** struct__20693 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20693VTable;

static SimFieldUtils struct__20693_fields[] = {
    {"valid", offsetof(struct__20693,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__20693,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__20693,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__20693,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__20693,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_LEVELTR", offsetof(struct__20693,D_LEVELTR), &_Type_kcg_int_Utils},
    {"M_LEVELTR", offsetof(struct__20693,M_LEVELTR), &_Type_kcg_int_Utils},
    {"NID_NTC", offsetof(struct__20693,NID_NTC), &_Type_kcg_int_Utils},
    {"L_ACKLEVELTR", offsetof(struct__20693,L_ACKLEVELTR), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__20693,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__20693,SECTIONS), &_Type_array__20690_Utils},
};

int struct__20693_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20693VTable != NULL
        && pSimstruct__20693VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20693VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20693_fields, 11, pfnStrAppend, pData);
}

int string_to_struct__20693(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20693VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20693VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20693_fields, 11, endptr);
    }
    return nRet;
}

int is_struct__20693_double_conversion_allowed()
{
    if (pSimstruct__20693VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20693VTable);
    }
    return 0;
}

int is_struct__20693_long_convertion_allowed()
{
    if (pSimstruct__20693VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20693VTable);
    }
    return 0;
}

void compare_struct__20693(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20693VTable != NULL
        && pSimstruct__20693VTable->m_version >= Scv612
        && pSimstruct__20693VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20693VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20693VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20693VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20693_fields, 11, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20693_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20693VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20693VTable, nRetValue);
    }
    return 0;
}

int struct__20693_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20693VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20693VTable, nRetValue);
    }
    return 0;
}

int get_struct__20693_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20693_fields, 11, pfnStrAppend, pData);
}

int set_struct__20693_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__20693*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__20693*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__20693*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__20693*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__20693*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__20693*)pValue)->D_LEVELTR));
    set_kcg_int_default_value(&(((struct__20693*)pValue)->M_LEVELTR));
    set_kcg_int_default_value(&(((struct__20693*)pValue)->NID_NTC));
    set_kcg_int_default_value(&(((struct__20693*)pValue)->L_ACKLEVELTR));
    set_kcg_int_default_value(&(((struct__20693*)pValue)->N_ITER));
    set_array__20690_default_value(&(((struct__20693*)pValue)->SECTIONS));
    return 1;
}

int check_struct__20693_string(const char *str, char **endptr)
{
    static struct__20693 rTemp;
    return string_to_struct__20693(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20693_Utils = {
    struct__20693_to_string,
    check_struct__20693_string,
    string_to_struct__20693,
    is_struct__20693_double_conversion_allowed,
    struct__20693_to_double,
    is_struct__20693_long_convertion_allowed,
    struct__20693_to_long,
    compare_struct__20693,
    get_struct__20693_signature,
    set_struct__20693_default_value,
    sizeof(struct__20693)
};

/****************************************************************
 ** array_int_2 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_2VTable;

int array_int_2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_2VTable != NULL
        && pSimarray_int_2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 2, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_2VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 2, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_2_double_conversion_allowed()
{
    if (pSimarray_int_2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_2VTable);
    }
    return 0;
}

int is_array_int_2_long_convertion_allowed()
{
    if (pSimarray_int_2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_2VTable);
    }
    return 0;
}

void compare_array_int_2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_2VTable != NULL
        && pSimarray_int_2VTable->m_version >= Scv612
        && pSimarray_int_2VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 2, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_2VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_2VTable, nRetValue);
    }
    return 0;
}

int array_int_2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_2VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_2VTable, nRetValue);
    }
    return 0;
}

int get_array_int_2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 2; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_2_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 2; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_2_string(const char *str, char **endptr)
{
    static array_int_2 rTemp;
    return string_to_array_int_2(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_2_Utils = {
    array_int_2_to_string,
    check_array_int_2_string,
    string_to_array_int_2,
    is_array_int_2_double_conversion_allowed,
    array_int_2_to_double,
    is_array_int_2_long_convertion_allowed,
    array_int_2_to_long,
    compare_array_int_2,
    get_array_int_2_signature,
    set_array_int_2_default_value,
    sizeof(array_int_2)
};

/****************************************************************
 ** struct__20710 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20710VTable;

static SimFieldUtils struct__20710_fields[] = {
    {"M_LEVELTR", offsetof(struct__20710,M_LEVELTR), &_Type_kcg_int_Utils},
    {"NID_NTC", offsetof(struct__20710,NID_NTC), &_Type_kcg_int_Utils},
};

int struct__20710_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20710VTable != NULL
        && pSimstruct__20710VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20710VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20710_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__20710(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20710VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20710VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20710_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__20710_double_conversion_allowed()
{
    if (pSimstruct__20710VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20710VTable);
    }
    return 0;
}

int is_struct__20710_long_convertion_allowed()
{
    if (pSimstruct__20710VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20710VTable);
    }
    return 0;
}

void compare_struct__20710(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20710VTable != NULL
        && pSimstruct__20710VTable->m_version >= Scv612
        && pSimstruct__20710VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20710VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20710VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20710VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20710_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20710_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20710VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20710VTable, nRetValue);
    }
    return 0;
}

int struct__20710_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20710VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20710VTable, nRetValue);
    }
    return 0;
}

int get_struct__20710_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20710_fields, 2, pfnStrAppend, pData);
}

int set_struct__20710_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__20710*)pValue)->M_LEVELTR));
    set_kcg_int_default_value(&(((struct__20710*)pValue)->NID_NTC));
    return 1;
}

int check_struct__20710_string(const char *str, char **endptr)
{
    static struct__20710 rTemp;
    return string_to_struct__20710(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20710_Utils = {
    struct__20710_to_string,
    check_struct__20710_string,
    string_to_struct__20710,
    is_struct__20710_double_conversion_allowed,
    struct__20710_to_double,
    is_struct__20710_long_convertion_allowed,
    struct__20710_to_long,
    compare_struct__20710,
    get_struct__20710_signature,
    set_struct__20710_default_value,
    sizeof(struct__20710)
};

/****************************************************************
 ** array_int_2_33 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_2_33VTable;

int array_int_2_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_2_33VTable != NULL
        && pSimarray_int_2_33VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_2_33VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_2_to_string, 33, sizeof(array_int_2), pfnStrAppend, pData);
}

int string_to_array_int_2_33(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_2_33VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_2_33VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_2_Utils, 33, sizeof(array_int_2), endptr);
    }
    return nRet;
}

int is_array_int_2_33_double_conversion_allowed()
{
    if (pSimarray_int_2_33VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_2_33VTable);
    }
    return 0;
}

int is_array_int_2_33_long_convertion_allowed()
{
    if (pSimarray_int_2_33VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_2_33VTable);
    }
    return 0;
}

void compare_array_int_2_33(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_2_33VTable != NULL
        && pSimarray_int_2_33VTable->m_version >= Scv612
        && pSimarray_int_2_33VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_2_33VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_2_33VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_2_33VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_2, 33, sizeof(array_int_2), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_2_33_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_2_33VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_2_33VTable, nRetValue);
    }
    return 0;
}

int array_int_2_33_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_2_33VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_2_33VTable, nRetValue);
    }
    return 0;
}

int get_array_int_2_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_2_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_2_33_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_array_int_2_default_value(&((array_int_2*)pValue)[i]);
    return 1;
}

int check_array_int_2_33_string(const char *str, char **endptr)
{
    static array_int_2_33 rTemp;
    return string_to_array_int_2_33(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_2_33_Utils = {
    array_int_2_33_to_string,
    check_array_int_2_33_string,
    string_to_array_int_2_33,
    is_array_int_2_33_double_conversion_allowed,
    array_int_2_33_to_double,
    is_array_int_2_33_long_convertion_allowed,
    array_int_2_33_to_long,
    compare_array_int_2_33,
    get_array_int_2_33_signature,
    set_array_int_2_33_default_value,
    sizeof(array_int_2_33)
};

/****************************************************************
 ** array_int_66 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_66VTable;

int array_int_66_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_66VTable != NULL
        && pSimarray_int_66VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_66VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 66, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_66(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_66VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_66VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 66, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_66_double_conversion_allowed()
{
    if (pSimarray_int_66VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_66VTable);
    }
    return 0;
}

int is_array_int_66_long_convertion_allowed()
{
    if (pSimarray_int_66VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_66VTable);
    }
    return 0;
}

void compare_array_int_66(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_66VTable != NULL
        && pSimarray_int_66VTable->m_version >= Scv612
        && pSimarray_int_66VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_66VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_66VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_66VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 66, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_66_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_66VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_66VTable, nRetValue);
    }
    return 0;
}

int array_int_66_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_66VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_66VTable, nRetValue);
    }
    return 0;
}

int get_array_int_66_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 66; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_66_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 66; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_66_string(const char *str, char **endptr)
{
    static array_int_66 rTemp;
    return string_to_array_int_66(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_66_Utils = {
    array_int_66_to_string,
    check_array_int_66_string,
    string_to_array_int_66,
    is_array_int_66_double_conversion_allowed,
    array_int_66_to_double,
    is_array_int_66_long_convertion_allowed,
    array_int_66_to_long,
    compare_array_int_66,
    get_array_int_66_signature,
    set_array_int_66_default_value,
    sizeof(array_int_66)
};

/****************************************************************
 ** array__20721 
 ****************************************************************/

struct SimTypeVTable *pSimarray__20721VTable;

int array__20721_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__20721VTable != NULL
        && pSimarray__20721VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__20721VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__20710_to_string, 33, sizeof(struct__20710), pfnStrAppend, pData);
}

int string_to_array__20721(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__20721VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__20721VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__20710_Utils, 33, sizeof(struct__20710), endptr);
    }
    return nRet;
}

int is_array__20721_double_conversion_allowed()
{
    if (pSimarray__20721VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__20721VTable);
    }
    return 0;
}

int is_array__20721_long_convertion_allowed()
{
    if (pSimarray__20721VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__20721VTable);
    }
    return 0;
}

void compare_array__20721(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__20721VTable != NULL
        && pSimarray__20721VTable->m_version >= Scv612
        && pSimarray__20721VTable->m_pfnCompare != NULL) {
        if (pSimarray__20721VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__20721VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__20721VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__20710, 33, sizeof(struct__20710), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__20721_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__20721VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__20721VTable, nRetValue);
    }
    return 0;
}

int array__20721_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__20721VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__20721VTable, nRetValue);
    }
    return 0;
}

int get_array__20721_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__20710_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__20721_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__20710_default_value(&((struct__20710*)pValue)[i]);
    return 1;
}

int check_array__20721_string(const char *str, char **endptr)
{
    static array__20721 rTemp;
    return string_to_array__20721(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__20721_Utils = {
    array__20721_to_string,
    check_array__20721_string,
    string_to_array__20721,
    is_array__20721_double_conversion_allowed,
    array__20721_to_double,
    is_array__20721_long_convertion_allowed,
    array__20721_to_long,
    compare_array__20721,
    get_array__20721_signature,
    set_array__20721_default_value,
    sizeof(array__20721)
};

/****************************************************************
 ** array__20724 
 ****************************************************************/

struct SimTypeVTable *pSimarray__20724VTable;

int array__20724_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__20724VTable != NULL
        && pSimarray__20724VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__20724VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__20710_to_string, 32, sizeof(struct__20710), pfnStrAppend, pData);
}

int string_to_array__20724(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__20724VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__20724VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__20710_Utils, 32, sizeof(struct__20710), endptr);
    }
    return nRet;
}

int is_array__20724_double_conversion_allowed()
{
    if (pSimarray__20724VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__20724VTable);
    }
    return 0;
}

int is_array__20724_long_convertion_allowed()
{
    if (pSimarray__20724VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__20724VTable);
    }
    return 0;
}

void compare_array__20724(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__20724VTable != NULL
        && pSimarray__20724VTable->m_version >= Scv612
        && pSimarray__20724VTable->m_pfnCompare != NULL) {
        if (pSimarray__20724VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__20724VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__20724VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__20710, 32, sizeof(struct__20710), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__20724_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__20724VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__20724VTable, nRetValue);
    }
    return 0;
}

int array__20724_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__20724VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__20724VTable, nRetValue);
    }
    return 0;
}

int get_array__20724_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__20710_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__20724_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__20710_default_value(&((struct__20710*)pValue)[i]);
    return 1;
}

int check_array__20724_string(const char *str, char **endptr)
{
    static array__20724 rTemp;
    return string_to_array__20724(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__20724_Utils = {
    array__20724_to_string,
    check_array__20724_string,
    string_to_array__20724,
    is_array__20724_double_conversion_allowed,
    array__20724_to_double,
    is_array__20724_long_convertion_allowed,
    array__20724_to_long,
    compare_array__20724,
    get_array__20724_signature,
    set_array__20724_default_value,
    sizeof(array__20724)
};

/****************************************************************
 ** struct__20727 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20727VTable;

static SimFieldUtils struct__20727_fields[] = {
    {"valid", offsetof(struct__20727,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__20727,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__20727,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__20727,L_PACKET), &_Type_kcg_int_Utils},
    {"M_LEVELTR", offsetof(struct__20727,M_LEVELTR), &_Type_kcg_int_Utils},
    {"NID_NTC", offsetof(struct__20727,NID_NTC), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__20727,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__20727,SECTIONS), &_Type_array__20724_Utils},
};

int struct__20727_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20727VTable != NULL
        && pSimstruct__20727VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20727VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20727_fields, 8, pfnStrAppend, pData);
}

int string_to_struct__20727(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20727VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20727VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20727_fields, 8, endptr);
    }
    return nRet;
}

int is_struct__20727_double_conversion_allowed()
{
    if (pSimstruct__20727VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20727VTable);
    }
    return 0;
}

int is_struct__20727_long_convertion_allowed()
{
    if (pSimstruct__20727VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20727VTable);
    }
    return 0;
}

void compare_struct__20727(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20727VTable != NULL
        && pSimstruct__20727VTable->m_version >= Scv612
        && pSimstruct__20727VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20727VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20727VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20727VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20727_fields, 8, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20727_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20727VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20727VTable, nRetValue);
    }
    return 0;
}

int struct__20727_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20727VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20727VTable, nRetValue);
    }
    return 0;
}

int get_struct__20727_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20727_fields, 8, pfnStrAppend, pData);
}

int set_struct__20727_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__20727*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__20727*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__20727*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__20727*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__20727*)pValue)->M_LEVELTR));
    set_kcg_int_default_value(&(((struct__20727*)pValue)->NID_NTC));
    set_kcg_int_default_value(&(((struct__20727*)pValue)->N_ITER));
    set_array__20724_default_value(&(((struct__20727*)pValue)->SECTIONS));
    return 1;
}

int check_struct__20727_string(const char *str, char **endptr)
{
    static struct__20727 rTemp;
    return string_to_struct__20727(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20727_Utils = {
    struct__20727_to_string,
    check_struct__20727_string,
    string_to_struct__20727,
    is_struct__20727_double_conversion_allowed,
    struct__20727_to_double,
    is_struct__20727_long_convertion_allowed,
    struct__20727_to_long,
    compare_struct__20727,
    get_struct__20727_signature,
    set_struct__20727_default_value,
    sizeof(struct__20727)
};

/****************************************************************
 ** struct__20738 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20738VTable;

static SimFieldUtils struct__20738_fields[] = {
    {"valid", offsetof(struct__20738,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__20738,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__20738,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__20738,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_RBC", offsetof(struct__20738,Q_RBC), &_Type_kcg_int_Utils},
    {"NID_C", offsetof(struct__20738,NID_C), &_Type_kcg_int_Utils},
    {"NID_RBC", offsetof(struct__20738,NID_RBC), &_Type_kcg_int_Utils},
    {"NID_RADIO", offsetof(struct__20738,NID_RADIO), &_Type_kcg_int_Utils},
    {"Q_SLEEPSESSION", offsetof(struct__20738,Q_SLEEPSESSION), &_Type_kcg_int_Utils},
};

int struct__20738_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20738VTable != NULL
        && pSimstruct__20738VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20738VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20738_fields, 9, pfnStrAppend, pData);
}

int string_to_struct__20738(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20738VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20738VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20738_fields, 9, endptr);
    }
    return nRet;
}

int is_struct__20738_double_conversion_allowed()
{
    if (pSimstruct__20738VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20738VTable);
    }
    return 0;
}

int is_struct__20738_long_convertion_allowed()
{
    if (pSimstruct__20738VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20738VTable);
    }
    return 0;
}

void compare_struct__20738(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20738VTable != NULL
        && pSimstruct__20738VTable->m_version >= Scv612
        && pSimstruct__20738VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20738VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20738VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20738VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20738_fields, 9, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20738_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20738VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20738VTable, nRetValue);
    }
    return 0;
}

int struct__20738_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20738VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20738VTable, nRetValue);
    }
    return 0;
}

int get_struct__20738_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20738_fields, 9, pfnStrAppend, pData);
}

int set_struct__20738_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__20738*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__20738*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__20738*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__20738*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__20738*)pValue)->Q_RBC));
    set_kcg_int_default_value(&(((struct__20738*)pValue)->NID_C));
    set_kcg_int_default_value(&(((struct__20738*)pValue)->NID_RBC));
    set_kcg_int_default_value(&(((struct__20738*)pValue)->NID_RADIO));
    set_kcg_int_default_value(&(((struct__20738*)pValue)->Q_SLEEPSESSION));
    return 1;
}

int check_struct__20738_string(const char *str, char **endptr)
{
    static struct__20738 rTemp;
    return string_to_struct__20738(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20738_Utils = {
    struct__20738_to_string,
    check_struct__20738_string,
    string_to_struct__20738,
    is_struct__20738_double_conversion_allowed,
    struct__20738_to_double,
    is_struct__20738_long_convertion_allowed,
    struct__20738_to_long,
    compare_struct__20738,
    get_struct__20738_signature,
    set_struct__20738_default_value,
    sizeof(struct__20738)
};

/****************************************************************
 ** array_int_32 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_32VTable;

int array_int_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_32VTable != NULL
        && pSimarray_int_32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_32VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 32, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_32(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_32VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_32VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 32, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_32_double_conversion_allowed()
{
    if (pSimarray_int_32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_32VTable);
    }
    return 0;
}

int is_array_int_32_long_convertion_allowed()
{
    if (pSimarray_int_32VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_32VTable);
    }
    return 0;
}

void compare_array_int_32(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_32VTable != NULL
        && pSimarray_int_32VTable->m_version >= Scv612
        && pSimarray_int_32VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_32VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_32VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_32VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 32, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_32_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_32VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_32VTable, nRetValue);
    }
    return 0;
}

int array_int_32_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_32VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_32VTable, nRetValue);
    }
    return 0;
}

int get_array_int_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_32_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_32_string(const char *str, char **endptr)
{
    static array_int_32 rTemp;
    return string_to_array_int_32(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_32_Utils = {
    array_int_32_to_string,
    check_array_int_32_string,
    string_to_array_int_32,
    is_array_int_32_double_conversion_allowed,
    array_int_32_to_double,
    is_array_int_32_long_convertion_allowed,
    array_int_32_to_long,
    compare_array_int_32,
    get_array_int_32_signature,
    set_array_int_32_default_value,
    sizeof(array_int_32)
};

/****************************************************************
 ** struct__20753 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__20753VTable;

static SimFieldUtils struct__20753_fields[] = {
    {"valid", offsetof(struct__20753,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__20753,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__20753,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__20753,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__20753,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_VALIDNV", offsetof(struct__20753,D_VALIDNV), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__20753,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__20753,SECTIONS), &_Type_array_int_32_Utils},
    {"V_NVSHUNT", offsetof(struct__20753,V_NVSHUNT), &_Type_kcg_int_Utils},
    {"V_NVSTFF", offsetof(struct__20753,V_NVSTFF), &_Type_kcg_int_Utils},
    {"V_NVONSIGHT", offsetof(struct__20753,V_NVONSIGHT), &_Type_kcg_int_Utils},
    {"V_NVUNFIT", offsetof(struct__20753,V_NVUNFIT), &_Type_kcg_int_Utils},
    {"V_NVREL", offsetof(struct__20753,V_NVREL), &_Type_kcg_int_Utils},
    {"D_NVROLL", offsetof(struct__20753,D_NVROLL), &_Type_kcg_int_Utils},
    {"Q_NVSRBKTRG", offsetof(struct__20753,Q_NVSRBKTRG), &_Type_kcg_int_Utils},
    {"Q_NVEMRRLS", offsetof(struct__20753,Q_NVEMRRLS), &_Type_kcg_int_Utils},
    {"V_NVALLOWOVTRP", offsetof(struct__20753,V_NVALLOWOVTRP), &_Type_kcg_int_Utils},
    {"V_NVSUPOVTRP", offsetof(struct__20753,V_NVSUPOVTRP), &_Type_kcg_int_Utils},
    {"D_NVOVTRP", offsetof(struct__20753,D_NVOVTRP), &_Type_kcg_int_Utils},
    {"T_NVOVTRP", offsetof(struct__20753,T_NVOVTRP), &_Type_kcg_int_Utils},
    {"D_NVPOTRP", offsetof(struct__20753,D_NVPOTRP), &_Type_kcg_int_Utils},
    {"M_NVCONTACT", offsetof(struct__20753,M_NVCONTACT), &_Type_kcg_int_Utils},
    {"T_NVCONTACT", offsetof(struct__20753,T_NVCONTACT), &_Type_kcg_int_Utils},
    {"M_NVDERUN", offsetof(struct__20753,M_NVDERUN), &_Type_kcg_int_Utils},
    {"D_NVSTFF", offsetof(struct__20753,D_NVSTFF), &_Type_kcg_int_Utils},
    {"Q_NVDRIVER_ADHES", offsetof(struct__20753,Q_NVDRIVER_ADHES), &_Type_kcg_int_Utils},
};

int struct__20753_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__20753VTable != NULL
        && pSimstruct__20753VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__20753VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__20753_fields, 26, pfnStrAppend, pData);
}

int string_to_struct__20753(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__20753VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__20753VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__20753_fields, 26, endptr);
    }
    return nRet;
}

int is_struct__20753_double_conversion_allowed()
{
    if (pSimstruct__20753VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__20753VTable);
    }
    return 0;
}

int is_struct__20753_long_convertion_allowed()
{
    if (pSimstruct__20753VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__20753VTable);
    }
    return 0;
}

void compare_struct__20753(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__20753VTable != NULL
        && pSimstruct__20753VTable->m_version >= Scv612
        && pSimstruct__20753VTable->m_pfnCompare != NULL) {
        if (pSimstruct__20753VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__20753VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__20753VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__20753_fields, 26, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__20753_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__20753VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__20753VTable, nRetValue);
    }
    return 0;
}

int struct__20753_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__20753VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__20753VTable, nRetValue);
    }
    return 0;
}

int get_struct__20753_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__20753_fields, 26, pfnStrAppend, pData);
}

int set_struct__20753_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__20753*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->D_VALIDNV));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->N_ITER));
    set_array_int_32_default_value(&(((struct__20753*)pValue)->SECTIONS));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->V_NVSHUNT));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->V_NVSTFF));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->V_NVONSIGHT));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->V_NVUNFIT));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->V_NVREL));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->D_NVROLL));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->Q_NVSRBKTRG));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->Q_NVEMRRLS));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->V_NVALLOWOVTRP));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->V_NVSUPOVTRP));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->D_NVOVTRP));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->T_NVOVTRP));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->D_NVPOTRP));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->M_NVCONTACT));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->T_NVCONTACT));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->M_NVDERUN));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->D_NVSTFF));
    set_kcg_int_default_value(&(((struct__20753*)pValue)->Q_NVDRIVER_ADHES));
    return 1;
}

int check_struct__20753_string(const char *str, char **endptr)
{
    static struct__20753 rTemp;
    return string_to_struct__20753(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__20753_Utils = {
    struct__20753_to_string,
    check_struct__20753_string,
    string_to_struct__20753,
    is_struct__20753_double_conversion_allowed,
    struct__20753_to_double,
    is_struct__20753_long_convertion_allowed,
    struct__20753_to_long,
    compare_struct__20753,
    get_struct__20753_signature,
    set_struct__20753_default_value,
    sizeof(struct__20753)
};

/****************************************************************
 ** array_int_500_500 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_500_500VTable;

int array_int_500_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_500_500VTable != NULL
        && pSimarray_int_500_500VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_500_500VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_500_to_string, 500, sizeof(array_int_500), pfnStrAppend, pData);
}

int string_to_array_int_500_500(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_500_500VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_500_500VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_500_Utils, 500, sizeof(array_int_500), endptr);
    }
    return nRet;
}

int is_array_int_500_500_double_conversion_allowed()
{
    if (pSimarray_int_500_500VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_500_500VTable);
    }
    return 0;
}

int is_array_int_500_500_long_convertion_allowed()
{
    if (pSimarray_int_500_500VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_500_500VTable);
    }
    return 0;
}

void compare_array_int_500_500(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_500_500VTable != NULL
        && pSimarray_int_500_500VTable->m_version >= Scv612
        && pSimarray_int_500_500VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_500_500VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_500_500VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_500_500VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_500, 500, sizeof(array_int_500), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_500_500_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_500_500VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_500_500VTable, nRetValue);
    }
    return 0;
}

int array_int_500_500_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_500_500VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_500_500VTable, nRetValue);
    }
    return 0;
}

int get_array_int_500_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 500; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_500_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_500_500_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 500; i++)
        set_array_int_500_default_value(&((array_int_500*)pValue)[i]);
    return 1;
}

int check_array_int_500_500_string(const char *str, char **endptr)
{
    static array_int_500_500 rTemp;
    return string_to_array_int_500_500(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_500_500_Utils = {
    array_int_500_500_to_string,
    check_array_int_500_500_string,
    string_to_array_int_500_500,
    is_array_int_500_500_double_conversion_allowed,
    array_int_500_500_to_double,
    is_array_int_500_500_long_convertion_allowed,
    array_int_500_500_to_long,
    compare_array_int_500_500,
    get_array_int_500_500_signature,
    set_array_int_500_500_default_value,
    sizeof(array_int_500_500)
};

/****************************************************************
 ** array_int_499 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_499VTable;

int array_int_499_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_499VTable != NULL
        && pSimarray_int_499VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_499VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 499, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_499(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_499VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_499VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 499, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_499_double_conversion_allowed()
{
    if (pSimarray_int_499VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_499VTable);
    }
    return 0;
}

int is_array_int_499_long_convertion_allowed()
{
    if (pSimarray_int_499VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_499VTable);
    }
    return 0;
}

void compare_array_int_499(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_499VTable != NULL
        && pSimarray_int_499VTable->m_version >= Scv612
        && pSimarray_int_499VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_499VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_499VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_499VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 499, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_499_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_499VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_499VTable, nRetValue);
    }
    return 0;
}

int array_int_499_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_499VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_499VTable, nRetValue);
    }
    return 0;
}

int get_array_int_499_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 499; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_499_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 499; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_499_string(const char *str, char **endptr)
{
    static array_int_499 rTemp;
    return string_to_array_int_499(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_499_Utils = {
    array_int_499_to_string,
    check_array_int_499_string,
    string_to_array_int_499,
    is_array_int_499_double_conversion_allowed,
    array_int_499_to_double,
    is_array_int_499_long_convertion_allowed,
    array_int_499_to_long,
    compare_array_int_499,
    get_array_int_499_signature,
    set_array_int_499_default_value,
    sizeof(array_int_499)
};

/****************************************************************
 ** array_int_1 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_1VTable;

int array_int_1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_1VTable != NULL
        && pSimarray_int_1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 1, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_1(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_1VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_1VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 1, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_1_double_conversion_allowed()
{
    if (pSimarray_int_1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_1VTable);
    }
    return 0;
}

int is_array_int_1_long_convertion_allowed()
{
    if (pSimarray_int_1VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_1VTable);
    }
    return 0;
}

void compare_array_int_1(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_1VTable != NULL
        && pSimarray_int_1VTable->m_version >= Scv612
        && pSimarray_int_1VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 1, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_1_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_1VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_1VTable, nRetValue);
    }
    return 0;
}

int array_int_1_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_1VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_1VTable, nRetValue);
    }
    return 0;
}

int get_array_int_1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_1_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_1_string(const char *str, char **endptr)
{
    static array_int_1 rTemp;
    return string_to_array_int_1(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_1_Utils = {
    array_int_1_to_string,
    check_array_int_1_string,
    string_to_array_int_1,
    is_array_int_1_double_conversion_allowed,
    array_int_1_to_double,
    is_array_int_1_long_convertion_allowed,
    array_int_1_to_long,
    compare_array_int_1,
    get_array_int_1_signature,
    set_array_int_1_default_value,
    sizeof(array_int_1)
};

/****************************************************************
 ** array_int_492 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_492VTable;

int array_int_492_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_492VTable != NULL
        && pSimarray_int_492VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_492VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 492, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_492(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_492VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_492VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 492, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_492_double_conversion_allowed()
{
    if (pSimarray_int_492VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_492VTable);
    }
    return 0;
}

int is_array_int_492_long_convertion_allowed()
{
    if (pSimarray_int_492VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_492VTable);
    }
    return 0;
}

void compare_array_int_492(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_492VTable != NULL
        && pSimarray_int_492VTable->m_version >= Scv612
        && pSimarray_int_492VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_492VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_492VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_492VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 492, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_492_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_492VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_492VTable, nRetValue);
    }
    return 0;
}

int array_int_492_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_492VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_492VTable, nRetValue);
    }
    return 0;
}

int get_array_int_492_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 492; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_492_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 492; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_492_string(const char *str, char **endptr)
{
    static array_int_492 rTemp;
    return string_to_array_int_492(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_492_Utils = {
    array_int_492_to_string,
    check_array_int_492_string,
    string_to_array_int_492,
    is_array_int_492_double_conversion_allowed,
    array_int_492_to_double,
    is_array_int_492_long_convertion_allowed,
    array_int_492_to_long,
    compare_array_int_492,
    get_array_int_492_signature,
    set_array_int_492_default_value,
    sizeof(array_int_492)
};

/****************************************************************
 ** array_int_8 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_8VTable;

int array_int_8_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_8VTable != NULL
        && pSimarray_int_8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_8VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 8, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_8(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_8VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_8VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 8, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_8_double_conversion_allowed()
{
    if (pSimarray_int_8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_8VTable);
    }
    return 0;
}

int is_array_int_8_long_convertion_allowed()
{
    if (pSimarray_int_8VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_8VTable);
    }
    return 0;
}

void compare_array_int_8(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_8VTable != NULL
        && pSimarray_int_8VTable->m_version >= Scv612
        && pSimarray_int_8VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_8VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_8VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_8VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 8, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_8_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_8VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_8VTable, nRetValue);
    }
    return 0;
}

int array_int_8_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_8VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_8VTable, nRetValue);
    }
    return 0;
}

int get_array_int_8_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 8; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_8_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 8; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_8_string(const char *str, char **endptr)
{
    static array_int_8 rTemp;
    return string_to_array_int_8(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_8_Utils = {
    array_int_8_to_string,
    check_array_int_8_string,
    string_to_array_int_8,
    is_array_int_8_double_conversion_allowed,
    array_int_8_to_double,
    is_array_int_8_long_convertion_allowed,
    array_int_8_to_long,
    compare_array_int_8,
    get_array_int_8_signature,
    set_array_int_8_default_value,
    sizeof(array_int_8)
};

/****************************************************************
 ** array_int_2_33_99 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_2_33_99VTable;

int array_int_2_33_99_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_2_33_99VTable != NULL
        && pSimarray_int_2_33_99VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_2_33_99VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_2_33_to_string, 99, sizeof(array_int_2_33), pfnStrAppend, pData);
}

int string_to_array_int_2_33_99(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_2_33_99VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_2_33_99VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_2_33_Utils, 99, sizeof(array_int_2_33), endptr);
    }
    return nRet;
}

int is_array_int_2_33_99_double_conversion_allowed()
{
    if (pSimarray_int_2_33_99VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_2_33_99VTable);
    }
    return 0;
}

int is_array_int_2_33_99_long_convertion_allowed()
{
    if (pSimarray_int_2_33_99VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_2_33_99VTable);
    }
    return 0;
}

void compare_array_int_2_33_99(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_2_33_99VTable != NULL
        && pSimarray_int_2_33_99VTable->m_version >= Scv612
        && pSimarray_int_2_33_99VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_2_33_99VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_2_33_99VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_2_33_99VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_2_33, 99, sizeof(array_int_2_33), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_2_33_99_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_2_33_99VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_2_33_99VTable, nRetValue);
    }
    return 0;
}

int array_int_2_33_99_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_2_33_99VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_2_33_99VTable, nRetValue);
    }
    return 0;
}

int get_array_int_2_33_99_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 99; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_2_33_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_2_33_99_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 99; i++)
        set_array_int_2_33_default_value(&((array_int_2_33*)pValue)[i]);
    return 1;
}

int check_array_int_2_33_99_string(const char *str, char **endptr)
{
    static array_int_2_33_99 rTemp;
    return string_to_array_int_2_33_99(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_2_33_99_Utils = {
    array_int_2_33_99_to_string,
    check_array_int_2_33_99_string,
    string_to_array_int_2_33_99,
    is_array_int_2_33_99_double_conversion_allowed,
    array_int_2_33_99_to_double,
    is_array_int_2_33_99_long_convertion_allowed,
    array_int_2_33_99_to_long,
    compare_array_int_2_33_99,
    get_array_int_2_33_99_signature,
    set_array_int_2_33_99_default_value,
    sizeof(array_int_2_33_99)
};

/****************************************************************
 ** array_int_430 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_430VTable;

int array_int_430_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_430VTable != NULL
        && pSimarray_int_430VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_430VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 430, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_430(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_430VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_430VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 430, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_430_double_conversion_allowed()
{
    if (pSimarray_int_430VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_430VTable);
    }
    return 0;
}

int is_array_int_430_long_convertion_allowed()
{
    if (pSimarray_int_430VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_430VTable);
    }
    return 0;
}

void compare_array_int_430(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_430VTable != NULL
        && pSimarray_int_430VTable->m_version >= Scv612
        && pSimarray_int_430VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_430VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_430VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_430VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 430, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_430_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_430VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_430VTable, nRetValue);
    }
    return 0;
}

int array_int_430_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_430VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_430VTable, nRetValue);
    }
    return 0;
}

int get_array_int_430_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 430; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_430_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 430; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_430_string(const char *str, char **endptr)
{
    static array_int_430 rTemp;
    return string_to_array_int_430(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_430_Utils = {
    array_int_430_to_string,
    check_array_int_430_string,
    string_to_array_int_430,
    is_array_int_430_double_conversion_allowed,
    array_int_430_to_double,
    is_array_int_430_long_convertion_allowed,
    array_int_430_to_long,
    compare_array_int_430,
    get_array_int_430_signature,
    set_array_int_430_default_value,
    sizeof(array_int_430)
};

/****************************************************************
 ** array_int_4 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_4VTable;

int array_int_4_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_4VTable != NULL
        && pSimarray_int_4VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_4VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 4, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_4(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_4VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_4VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 4, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_4_double_conversion_allowed()
{
    if (pSimarray_int_4VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_4VTable);
    }
    return 0;
}

int is_array_int_4_long_convertion_allowed()
{
    if (pSimarray_int_4VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_4VTable);
    }
    return 0;
}

void compare_array_int_4(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_4VTable != NULL
        && pSimarray_int_4VTable->m_version >= Scv612
        && pSimarray_int_4VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_4VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_4VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_4VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 4, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_4_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_4VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_4VTable, nRetValue);
    }
    return 0;
}

int array_int_4_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_4VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_4VTable, nRetValue);
    }
    return 0;
}

int get_array_int_4_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 4; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_4_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 4; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_4_string(const char *str, char **endptr)
{
    static array_int_4 rTemp;
    return string_to_array_int_4(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_4_Utils = {
    array_int_4_to_string,
    check_array_int_4_string,
    string_to_array_int_4,
    is_array_int_4_double_conversion_allowed,
    array_int_4_to_double,
    is_array_int_4_long_convertion_allowed,
    array_int_4_to_long,
    compare_array_int_4,
    get_array_int_4_signature,
    set_array_int_4_default_value,
    sizeof(array_int_4)
};

/****************************************************************
 ** array_int_70 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_70VTable;

int array_int_70_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_70VTable != NULL
        && pSimarray_int_70VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_70VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 70, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_70(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_70VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_70VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 70, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_70_double_conversion_allowed()
{
    if (pSimarray_int_70VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_70VTable);
    }
    return 0;
}

int is_array_int_70_long_convertion_allowed()
{
    if (pSimarray_int_70VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_70VTable);
    }
    return 0;
}

void compare_array_int_70(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_70VTable != NULL
        && pSimarray_int_70VTable->m_version >= Scv612
        && pSimarray_int_70VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_70VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_70VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_70VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 70, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_70_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_70VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_70VTable, nRetValue);
    }
    return 0;
}

int array_int_70_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_70VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_70VTable, nRetValue);
    }
    return 0;
}

int get_array_int_70_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 70; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_70_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 70; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_70_string(const char *str, char **endptr)
{
    static array_int_70 rTemp;
    return string_to_array_int_70(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_70_Utils = {
    array_int_70_to_string,
    check_array_int_70_string,
    string_to_array_int_70,
    is_array_int_70_double_conversion_allowed,
    array_int_70_to_double,
    is_array_int_70_long_convertion_allowed,
    array_int_70_to_long,
    compare_array_int_70,
    get_array_int_70_signature,
    set_array_int_70_default_value,
    sizeof(array_int_70)
};

/****************************************************************
 ** array__20809 
 ****************************************************************/

struct SimTypeVTable *pSimarray__20809VTable;

int array__20809_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__20809VTable != NULL
        && pSimarray__20809VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__20809VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__20710_to_string, 1, sizeof(struct__20710), pfnStrAppend, pData);
}

int string_to_array__20809(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__20809VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__20809VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__20710_Utils, 1, sizeof(struct__20710), endptr);
    }
    return nRet;
}

int is_array__20809_double_conversion_allowed()
{
    if (pSimarray__20809VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__20809VTable);
    }
    return 0;
}

int is_array__20809_long_convertion_allowed()
{
    if (pSimarray__20809VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__20809VTable);
    }
    return 0;
}

void compare_array__20809(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__20809VTable != NULL
        && pSimarray__20809VTable->m_version >= Scv612
        && pSimarray__20809VTable->m_pfnCompare != NULL) {
        if (pSimarray__20809VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__20809VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__20809VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__20710, 1, sizeof(struct__20710), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__20809_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__20809VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__20809VTable, nRetValue);
    }
    return 0;
}

int array__20809_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__20809VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__20809VTable, nRetValue);
    }
    return 0;
}

int get_array__20809_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__20710_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__20809_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__20710_default_value(&((struct__20710*)pValue)[i]);
    return 1;
}

int check_array__20809_string(const char *str, char **endptr)
{
    static array__20809 rTemp;
    return string_to_array__20809(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__20809_Utils = {
    array__20809_to_string,
    check_array__20809_string,
    string_to_array__20809,
    is_array__20809_double_conversion_allowed,
    array__20809_to_double,
    is_array__20809_long_convertion_allowed,
    array__20809_to_long,
    compare_array__20809,
    get_array__20809_signature,
    set_array__20809_default_value,
    sizeof(array__20809)
};

/****************************************************************
 ** array_int_444 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_444VTable;

int array_int_444_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_444VTable != NULL
        && pSimarray_int_444VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_444VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 444, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_444(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_444VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_444VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 444, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_444_double_conversion_allowed()
{
    if (pSimarray_int_444VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_444VTable);
    }
    return 0;
}

int is_array_int_444_long_convertion_allowed()
{
    if (pSimarray_int_444VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_444VTable);
    }
    return 0;
}

void compare_array_int_444(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_444VTable != NULL
        && pSimarray_int_444VTable->m_version >= Scv612
        && pSimarray_int_444VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_444VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_444VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_444VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 444, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_444_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_444VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_444VTable, nRetValue);
    }
    return 0;
}

int array_int_444_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_444VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_444VTable, nRetValue);
    }
    return 0;
}

int get_array_int_444_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 444; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_444_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 444; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_444_string(const char *str, char **endptr)
{
    static array_int_444 rTemp;
    return string_to_array_int_444(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_444_Utils = {
    array_int_444_to_string,
    check_array_int_444_string,
    string_to_array_int_444,
    is_array_int_444_double_conversion_allowed,
    array_int_444_to_double,
    is_array_int_444_long_convertion_allowed,
    array_int_444_to_long,
    compare_array_int_444,
    get_array_int_444_signature,
    set_array_int_444_default_value,
    sizeof(array_int_444)
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
 ** array_int_24 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_24VTable;

int array_int_24_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_24VTable != NULL
        && pSimarray_int_24VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_24VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 24, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_24(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_24VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_24VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 24, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_24_double_conversion_allowed()
{
    if (pSimarray_int_24VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_24VTable);
    }
    return 0;
}

int is_array_int_24_long_convertion_allowed()
{
    if (pSimarray_int_24VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_24VTable);
    }
    return 0;
}

void compare_array_int_24(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_24VTable != NULL
        && pSimarray_int_24VTable->m_version >= Scv612
        && pSimarray_int_24VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_24VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_24VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_24VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 24, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_24_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_24VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_24VTable, nRetValue);
    }
    return 0;
}

int array_int_24_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_24VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_24VTable, nRetValue);
    }
    return 0;
}

int get_array_int_24_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 24; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_24_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 24; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_24_string(const char *str, char **endptr)
{
    static array_int_24 rTemp;
    return string_to_array_int_24(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_24_Utils = {
    array_int_24_to_string,
    check_array_int_24_string,
    string_to_array_int_24,
    is_array_int_24_double_conversion_allowed,
    array_int_24_to_double,
    is_array_int_24_long_convertion_allowed,
    array_int_24_to_long,
    compare_array_int_24,
    get_array_int_24_signature,
    set_array_int_24_default_value,
    sizeof(array_int_24)
};

/****************************************************************
 ** array_int_56 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_56VTable;

int array_int_56_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_56VTable != NULL
        && pSimarray_int_56VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_56VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 56, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_56(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_56VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_56VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 56, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_56_double_conversion_allowed()
{
    if (pSimarray_int_56VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_56VTable);
    }
    return 0;
}

int is_array_int_56_long_convertion_allowed()
{
    if (pSimarray_int_56VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_56VTable);
    }
    return 0;
}

void compare_array_int_56(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_56VTable != NULL
        && pSimarray_int_56VTable->m_version >= Scv612
        && pSimarray_int_56VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_56VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_56VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_56VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 56, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_56_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_56VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_56VTable, nRetValue);
    }
    return 0;
}

int array_int_56_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_56VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_56VTable, nRetValue);
    }
    return 0;
}

int get_array_int_56_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 56; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_56_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 56; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_56_string(const char *str, char **endptr)
{
    static array_int_56 rTemp;
    return string_to_array_int_56(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_56_Utils = {
    array_int_56_to_string,
    check_array_int_56_string,
    string_to_array_int_56,
    is_array_int_56_double_conversion_allowed,
    array_int_56_to_double,
    is_array_int_56_long_convertion_allowed,
    array_int_56_to_long,
    compare_array_int_56,
    get_array_int_56_signature,
    set_array_int_56_default_value,
    sizeof(array_int_56)
};

/****************************************************************
 ** array_int_18 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_18VTable;

int array_int_18_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_18VTable != NULL
        && pSimarray_int_18VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_18VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 18, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_18(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_18VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_18VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 18, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_18_double_conversion_allowed()
{
    if (pSimarray_int_18VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_18VTable);
    }
    return 0;
}

int is_array_int_18_long_convertion_allowed()
{
    if (pSimarray_int_18VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_18VTable);
    }
    return 0;
}

void compare_array_int_18(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_18VTable != NULL
        && pSimarray_int_18VTable->m_version >= Scv612
        && pSimarray_int_18VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_18VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_18VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_18VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 18, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_18_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_18VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_18VTable, nRetValue);
    }
    return 0;
}

int array_int_18_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_18VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_18VTable, nRetValue);
    }
    return 0;
}

int get_array_int_18_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 18; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_18_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 18; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_18_string(const char *str, char **endptr)
{
    static array_int_18 rTemp;
    return string_to_array_int_18(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_18_Utils = {
    array_int_18_to_string,
    check_array_int_18_string,
    string_to_array_int_18,
    is_array_int_18_double_conversion_allowed,
    array_int_18_to_double,
    is_array_int_18_long_convertion_allowed,
    array_int_18_to_long,
    compare_array_int_18,
    get_array_int_18_signature,
    set_array_int_18_default_value,
    sizeof(array_int_18)
};

/****************************************************************
 ** array_int_3_33_99 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_3_33_99VTable;

int array_int_3_33_99_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_3_33_99VTable != NULL
        && pSimarray_int_3_33_99VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_3_33_99VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_3_33_to_string, 99, sizeof(array_int_3_33), pfnStrAppend, pData);
}

int string_to_array_int_3_33_99(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_3_33_99VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_3_33_99VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_3_33_Utils, 99, sizeof(array_int_3_33), endptr);
    }
    return nRet;
}

int is_array_int_3_33_99_double_conversion_allowed()
{
    if (pSimarray_int_3_33_99VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_3_33_99VTable);
    }
    return 0;
}

int is_array_int_3_33_99_long_convertion_allowed()
{
    if (pSimarray_int_3_33_99VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_3_33_99VTable);
    }
    return 0;
}

void compare_array_int_3_33_99(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_3_33_99VTable != NULL
        && pSimarray_int_3_33_99VTable->m_version >= Scv612
        && pSimarray_int_3_33_99VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_3_33_99VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_3_33_99VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_3_33_99VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_3_33, 99, sizeof(array_int_3_33), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_3_33_99_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_3_33_99VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_3_33_99VTable, nRetValue);
    }
    return 0;
}

int array_int_3_33_99_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_3_33_99VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_3_33_99VTable, nRetValue);
    }
    return 0;
}

int get_array_int_3_33_99_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 99; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_3_33_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_3_33_99_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 99; i++)
        set_array_int_3_33_default_value(&((array_int_3_33*)pValue)[i]);
    return 1;
}

int check_array_int_3_33_99_string(const char *str, char **endptr)
{
    static array_int_3_33_99 rTemp;
    return string_to_array_int_3_33_99(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_3_33_99_Utils = {
    array_int_3_33_99_to_string,
    check_array_int_3_33_99_string,
    string_to_array_int_3_33_99,
    is_array_int_3_33_99_double_conversion_allowed,
    array_int_3_33_99_to_double,
    is_array_int_3_33_99_long_convertion_allowed,
    array_int_3_33_99_to_long,
    compare_array_int_3_33_99,
    get_array_int_3_33_99_signature,
    set_array_int_3_33_99_default_value,
    sizeof(array_int_3_33_99)
};

/****************************************************************
 ** array_int_395 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_395VTable;

int array_int_395_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_395VTable != NULL
        && pSimarray_int_395VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_395VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 395, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_395(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_395VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_395VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 395, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_395_double_conversion_allowed()
{
    if (pSimarray_int_395VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_395VTable);
    }
    return 0;
}

int is_array_int_395_long_convertion_allowed()
{
    if (pSimarray_int_395VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_395VTable);
    }
    return 0;
}

void compare_array_int_395(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_395VTable != NULL
        && pSimarray_int_395VTable->m_version >= Scv612
        && pSimarray_int_395VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_395VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_395VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_395VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 395, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_395_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_395VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_395VTable, nRetValue);
    }
    return 0;
}

int array_int_395_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_395VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_395VTable, nRetValue);
    }
    return 0;
}

int get_array_int_395_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 395; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_395_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 395; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_395_string(const char *str, char **endptr)
{
    static array_int_395 rTemp;
    return string_to_array_int_395(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_395_Utils = {
    array_int_395_to_string,
    check_array_int_395_string,
    string_to_array_int_395,
    is_array_int_395_double_conversion_allowed,
    array_int_395_to_double,
    is_array_int_395_long_convertion_allowed,
    array_int_395_to_long,
    compare_array_int_395,
    get_array_int_395_signature,
    set_array_int_395_default_value,
    sizeof(array_int_395)
};

/****************************************************************
 ** array_int_5 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_5VTable;

int array_int_5_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_5VTable != NULL
        && pSimarray_int_5VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_5VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 5, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_5(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_5VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_5VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 5, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_5_double_conversion_allowed()
{
    if (pSimarray_int_5VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_5VTable);
    }
    return 0;
}

int is_array_int_5_long_convertion_allowed()
{
    if (pSimarray_int_5VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_5VTable);
    }
    return 0;
}

void compare_array_int_5(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_5VTable != NULL
        && pSimarray_int_5VTable->m_version >= Scv612
        && pSimarray_int_5VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_5VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_5VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_5VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 5, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_5_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_5VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_5VTable, nRetValue);
    }
    return 0;
}

int array_int_5_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_5VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_5VTable, nRetValue);
    }
    return 0;
}

int get_array_int_5_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 5; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_5_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 5; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_5_string(const char *str, char **endptr)
{
    static array_int_5 rTemp;
    return string_to_array_int_5(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_5_Utils = {
    array_int_5_to_string,
    check_array_int_5_string,
    string_to_array_int_5,
    is_array_int_5_double_conversion_allowed,
    array_int_5_to_double,
    is_array_int_5_long_convertion_allowed,
    array_int_5_to_long,
    compare_array_int_5,
    get_array_int_5_signature,
    set_array_int_5_default_value,
    sizeof(array_int_5)
};

/****************************************************************
 ** array_int_105 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_105VTable;

int array_int_105_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_105VTable != NULL
        && pSimarray_int_105VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_105VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 105, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_105(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_105VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_105VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 105, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_105_double_conversion_allowed()
{
    if (pSimarray_int_105VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_105VTable);
    }
    return 0;
}

int is_array_int_105_long_convertion_allowed()
{
    if (pSimarray_int_105VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_105VTable);
    }
    return 0;
}

void compare_array_int_105(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_105VTable != NULL
        && pSimarray_int_105VTable->m_version >= Scv612
        && pSimarray_int_105VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_105VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_105VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_105VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 105, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_105_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_105VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_105VTable, nRetValue);
    }
    return 0;
}

int array_int_105_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_105VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_105VTable, nRetValue);
    }
    return 0;
}

int get_array_int_105_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 105; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_105_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 105; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_105_string(const char *str, char **endptr)
{
    static array_int_105 rTemp;
    return string_to_array_int_105(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_105_Utils = {
    array_int_105_to_string,
    check_array_int_105_string,
    string_to_array_int_105,
    is_array_int_105_double_conversion_allowed,
    array_int_105_to_double,
    is_array_int_105_long_convertion_allowed,
    array_int_105_to_long,
    compare_array_int_105,
    get_array_int_105_signature,
    set_array_int_105_default_value,
    sizeof(array_int_105)
};

/****************************************************************
 ** array__20839 
 ****************************************************************/

struct SimTypeVTable *pSimarray__20839VTable;

int array__20839_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__20839VTable != NULL
        && pSimarray__20839VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__20839VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__20675_to_string, 1, sizeof(struct__20675), pfnStrAppend, pData);
}

int string_to_array__20839(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__20839VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__20839VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__20675_Utils, 1, sizeof(struct__20675), endptr);
    }
    return nRet;
}

int is_array__20839_double_conversion_allowed()
{
    if (pSimarray__20839VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__20839VTable);
    }
    return 0;
}

int is_array__20839_long_convertion_allowed()
{
    if (pSimarray__20839VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__20839VTable);
    }
    return 0;
}

void compare_array__20839(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__20839VTable != NULL
        && pSimarray__20839VTable->m_version >= Scv612
        && pSimarray__20839VTable->m_pfnCompare != NULL) {
        if (pSimarray__20839VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__20839VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__20839VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__20675, 1, sizeof(struct__20675), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__20839_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__20839VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__20839VTable, nRetValue);
    }
    return 0;
}

int array__20839_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__20839VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__20839VTable, nRetValue);
    }
    return 0;
}

int get_array__20839_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__20675_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__20839_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__20675_default_value(&((struct__20675*)pValue)[i]);
    return 1;
}

int check_array__20839_string(const char *str, char **endptr)
{
    static array__20839 rTemp;
    return string_to_array__20839(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__20839_Utils = {
    array__20839_to_string,
    check_array__20839_string,
    string_to_array__20839,
    is_array__20839_double_conversion_allowed,
    array__20839_to_double,
    is_array__20839_long_convertion_allowed,
    array__20839_to_long,
    compare_array__20839,
    get_array__20839_signature,
    set_array__20839_default_value,
    sizeof(array__20839)
};

/****************************************************************
 ** array_int_496 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_496VTable;

int array_int_496_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_496VTable != NULL
        && pSimarray_int_496VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_496VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 496, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_496(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_496VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_496VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 496, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_496_double_conversion_allowed()
{
    if (pSimarray_int_496VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_496VTable);
    }
    return 0;
}

int is_array_int_496_long_convertion_allowed()
{
    if (pSimarray_int_496VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_496VTable);
    }
    return 0;
}

void compare_array_int_496(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_496VTable != NULL
        && pSimarray_int_496VTable->m_version >= Scv612
        && pSimarray_int_496VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_496VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_496VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_496VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 496, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_496_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_496VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_496VTable, nRetValue);
    }
    return 0;
}

int array_int_496_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_496VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_496VTable, nRetValue);
    }
    return 0;
}

int get_array_int_496_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 496; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_496_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 496; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_496_string(const char *str, char **endptr)
{
    static array_int_496 rTemp;
    return string_to_array_int_496(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_496_Utils = {
    array_int_496_to_string,
    check_array_int_496_string,
    string_to_array_int_496,
    is_array_int_496_double_conversion_allowed,
    array_int_496_to_double,
    is_array_int_496_long_convertion_allowed,
    array_int_496_to_long,
    compare_array_int_496,
    get_array_int_496_signature,
    set_array_int_496_default_value,
    sizeof(array_int_496)
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
 ** BaliseGroupData_Basics 
 ****************************************************************/

struct SimTypeVTable *pSimBaliseGroupData_BasicsVTable;

int BaliseGroupData_Basics_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBaliseGroupData_BasicsVTable != NULL
        && pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20642_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BaliseGroupData_Basics(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        nRet=string_to_VTable(str, pSimBaliseGroupData_BasicsVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20642(str, pValue, endptr);
    }
    return nRet;
}

int is_BaliseGroupData_Basics_double_conversion_allowed()
{
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBaliseGroupData_BasicsVTable);
    }
    return is_struct__20642_double_conversion_allowed();
}

int is_BaliseGroupData_Basics_long_convertion_allowed()
{
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimBaliseGroupData_BasicsVTable);
    }
    return is_struct__20642_long_convertion_allowed();
}

void compare_BaliseGroupData_Basics(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBaliseGroupData_BasicsVTable != NULL
        && pSimBaliseGroupData_BasicsVTable->m_version >= Scv612
        && pSimBaliseGroupData_BasicsVTable->m_pfnCompare != NULL) {
        if (pSimBaliseGroupData_BasicsVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBaliseGroupData_BasicsVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBaliseGroupData_BasicsVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20642(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BaliseGroupData_Basics_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        return VTable_to_double(pValue, pSimBaliseGroupData_BasicsVTable, nRetValue);
    }
    return struct__20642_to_double(pValue, nRetValue);
}

int BaliseGroupData_Basics_to_long(const void *pValue, long *nRetValue)
{
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        return VTable_to_long(pValue, pSimBaliseGroupData_BasicsVTable, nRetValue);
    }
    return struct__20642_to_long(pValue, nRetValue);
}

int get_BaliseGroupData_Basics_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20642_signature(pfnStrAppend, pData);
}

int set_BaliseGroupData_Basics_default_value(void *pValue)
{
    return set_struct__20642_default_value(pValue);
}

int check_BaliseGroupData_Basics_string(const char *str, char **endptr)
{
    static BaliseGroupData_Basics rTemp;
    return string_to_BaliseGroupData_Basics(str, &rTemp, endptr);
}

SimTypeUtils _Type_BaliseGroupData_Basics_Utils = {
    BaliseGroupData_Basics_to_string,
    check_BaliseGroupData_Basics_string,
    string_to_BaliseGroupData_Basics,
    is_BaliseGroupData_Basics_double_conversion_allowed,
    BaliseGroupData_Basics_to_double,
    is_BaliseGroupData_Basics_long_convertion_allowed,
    BaliseGroupData_Basics_to_long,
    compare_BaliseGroupData_Basics,
    get_BaliseGroupData_Basics_signature,
    set_BaliseGroupData_Basics_default_value,
    sizeof(BaliseGroupData_Basics)
};

/****************************************************************
 ** OrBG_TM 
 ****************************************************************/

struct SimTypeVTable *pSimOrBG_TMVTable;

static SimEnumValUtils OrBG_TM_values[] = {
    { "TM::Amsterdam", Amsterdam_TM},
    { "Amsterdam", Amsterdam_TM},
    { "TM::Utrecht", Utrecht_TM},
    { "Utrecht", Utrecht_TM},
};
const int OrBG_TM_nb_values = 4;

int OrBG_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOrBG_TMVTable != NULL
        && pSimOrBG_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOrBG_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(OrBG_TM*)pValue, OrBG_TM_values, OrBG_TM_nb_values, pfnStrAppend, pData); 
}

int string_to_OrBG_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOrBG_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimOrBG_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, OrBG_TM_values, OrBG_TM_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(OrBG_TM*)pValue = nTemp;
    }
    return nRet;
}

int is_OrBG_TM_double_conversion_allowed()
{
    if (pSimOrBG_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimOrBG_TMVTable);
    }
    return 1;
}

int is_OrBG_TM_long_convertion_allowed()
{
    if (pSimOrBG_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimOrBG_TMVTable);
    }
    return 1;
}

void compare_OrBG_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimOrBG_TMVTable != NULL
        && pSimOrBG_TMVTable->m_version >= Scv612
        && pSimOrBG_TMVTable->m_pfnCompare != NULL) {
        if (pSimOrBG_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOrBG_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimOrBG_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(OrBG_TM*)pValue1), (int)(*(OrBG_TM*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int OrBG_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOrBG_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimOrBG_TMVTable, nRetValue);
    }
    *nRetValue = (double)*((OrBG_TM*)pValue);
    return 1;
}

int OrBG_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimOrBG_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimOrBG_TMVTable, nRetValue);
    }
    *nRetValue = (long)*((OrBG_TM*)pValue);
    return 1;
}

int get_OrBG_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(OrBG_TM_values, OrBG_TM_nb_values, pfnStrAppend, pData);
}

int set_OrBG_TM_default_value(void *pValue)
{
    *(OrBG_TM*)pValue = Amsterdam_TM;
    return 1;
}

int check_OrBG_TM_string(const char *str, char **endptr)
{
    static OrBG_TM rTemp;
    return string_to_OrBG_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_OrBG_TM_Utils = {
    OrBG_TM_to_string,
    check_OrBG_TM_string,
    string_to_OrBG_TM,
    is_OrBG_TM_double_conversion_allowed,
    OrBG_TM_to_double,
    is_OrBG_TM_long_convertion_allowed,
    OrBG_TM_to_long,
    compare_OrBG_TM,
    get_OrBG_TM_signature,
    set_OrBG_TM_default_value,
    sizeof(OrBG_TM)
};

/****************************************************************
 ** OrLine_TM 
 ****************************************************************/

struct SimTypeVTable *pSimOrLine_TMVTable;

static SimEnumValUtils OrLine_TM_values[] = {
    { "TM::N", N_TM},
    { "N", N_TM},
    { "TM::Z", Z_TM},
    { "Z", Z_TM},
};
const int OrLine_TM_nb_values = 4;

int OrLine_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOrLine_TMVTable != NULL
        && pSimOrLine_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOrLine_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(OrLine_TM*)pValue, OrLine_TM_values, OrLine_TM_nb_values, pfnStrAppend, pData); 
}

int string_to_OrLine_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOrLine_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimOrLine_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, OrLine_TM_values, OrLine_TM_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(OrLine_TM*)pValue = nTemp;
    }
    return nRet;
}

int is_OrLine_TM_double_conversion_allowed()
{
    if (pSimOrLine_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimOrLine_TMVTable);
    }
    return 1;
}

int is_OrLine_TM_long_convertion_allowed()
{
    if (pSimOrLine_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimOrLine_TMVTable);
    }
    return 1;
}

void compare_OrLine_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimOrLine_TMVTable != NULL
        && pSimOrLine_TMVTable->m_version >= Scv612
        && pSimOrLine_TMVTable->m_pfnCompare != NULL) {
        if (pSimOrLine_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOrLine_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimOrLine_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(OrLine_TM*)pValue1), (int)(*(OrLine_TM*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int OrLine_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOrLine_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimOrLine_TMVTable, nRetValue);
    }
    *nRetValue = (double)*((OrLine_TM*)pValue);
    return 1;
}

int OrLine_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimOrLine_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimOrLine_TMVTable, nRetValue);
    }
    *nRetValue = (long)*((OrLine_TM*)pValue);
    return 1;
}

int get_OrLine_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(OrLine_TM_values, OrLine_TM_nb_values, pfnStrAppend, pData);
}

int set_OrLine_TM_default_value(void *pValue)
{
    *(OrLine_TM*)pValue = N_TM;
    return 1;
}

int check_OrLine_TM_string(const char *str, char **endptr)
{
    static OrLine_TM rTemp;
    return string_to_OrLine_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_OrLine_TM_Utils = {
    OrLine_TM_to_string,
    check_OrLine_TM_string,
    string_to_OrLine_TM,
    is_OrLine_TM_double_conversion_allowed,
    OrLine_TM_to_double,
    is_OrLine_TM_long_convertion_allowed,
    OrLine_TM_to_long,
    compare_OrLine_TM,
    get_OrLine_TM_signature,
    set_OrLine_TM_default_value,
    sizeof(OrLine_TM)
};

/****************************************************************
 ** BaliseTelegramHeader_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimBaliseTelegramHeader_int_T_TMVTable;

int BaliseTelegramHeader_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL
        && pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20619_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BaliseTelegramHeader_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimBaliseTelegramHeader_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20619(str, pValue, endptr);
    }
    return nRet;
}

int is_BaliseTelegramHeader_int_T_TM_double_conversion_allowed()
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBaliseTelegramHeader_int_T_TMVTable);
    }
    return is_struct__20619_double_conversion_allowed();
}

int is_BaliseTelegramHeader_int_T_TM_long_convertion_allowed()
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimBaliseTelegramHeader_int_T_TMVTable);
    }
    return is_struct__20619_long_convertion_allowed();
}

void compare_BaliseTelegramHeader_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL
        && pSimBaliseTelegramHeader_int_T_TMVTable->m_version >= Scv612
        && pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimBaliseTelegramHeader_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20619(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BaliseTelegramHeader_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimBaliseTelegramHeader_int_T_TMVTable, nRetValue);
    }
    return struct__20619_to_double(pValue, nRetValue);
}

int BaliseTelegramHeader_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimBaliseTelegramHeader_int_T_TMVTable, nRetValue);
    }
    return struct__20619_to_long(pValue, nRetValue);
}

int get_BaliseTelegramHeader_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20619_signature(pfnStrAppend, pData);
}

int set_BaliseTelegramHeader_int_T_TM_default_value(void *pValue)
{
    return set_struct__20619_default_value(pValue);
}

int check_BaliseTelegramHeader_int_T_TM_string(const char *str, char **endptr)
{
    static BaliseTelegramHeader_int_T_TM rTemp;
    return string_to_BaliseTelegramHeader_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_BaliseTelegramHeader_int_T_TM_Utils = {
    BaliseTelegramHeader_int_T_TM_to_string,
    check_BaliseTelegramHeader_int_T_TM_string,
    string_to_BaliseTelegramHeader_int_T_TM,
    is_BaliseTelegramHeader_int_T_TM_double_conversion_allowed,
    BaliseTelegramHeader_int_T_TM_to_double,
    is_BaliseTelegramHeader_int_T_TM_long_convertion_allowed,
    BaliseTelegramHeader_int_T_TM_to_long,
    compare_BaliseTelegramHeader_int_T_TM,
    get_BaliseTelegramHeader_int_T_TM_signature,
    set_BaliseTelegramHeader_int_T_TM_default_value,
    sizeof(BaliseTelegramHeader_int_T_TM)
};

/****************************************************************
 ** P255_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP255_trackside_int_T_TMVTable;

int P255_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP255_trackside_int_T_TMVTable != NULL
        && pSimP255_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP255_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20659_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P255_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP255_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP255_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20659(str, pValue, endptr);
    }
    return nRet;
}

int is_P255_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP255_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP255_trackside_int_T_TMVTable);
    }
    return is_struct__20659_double_conversion_allowed();
}

int is_P255_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP255_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP255_trackside_int_T_TMVTable);
    }
    return is_struct__20659_long_convertion_allowed();
}

void compare_P255_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP255_trackside_int_T_TMVTable != NULL
        && pSimP255_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimP255_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP255_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP255_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP255_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20659(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P255_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP255_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP255_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__20659_to_double(pValue, nRetValue);
}

int P255_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP255_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP255_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__20659_to_long(pValue, nRetValue);
}

int get_P255_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20659_signature(pfnStrAppend, pData);
}

int set_P255_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__20659_default_value(pValue);
}

int check_P255_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static P255_trackside_int_T_TM rTemp;
    return string_to_P255_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P255_trackside_int_T_TM_Utils = {
    P255_trackside_int_T_TM_to_string,
    check_P255_trackside_int_T_TM_string,
    string_to_P255_trackside_int_T_TM,
    is_P255_trackside_int_T_TM_double_conversion_allowed,
    P255_trackside_int_T_TM_to_double,
    is_P255_trackside_int_T_TM_long_convertion_allowed,
    P255_trackside_int_T_TM_to_long,
    compare_P255_trackside_int_T_TM,
    get_P255_trackside_int_T_TM_signature,
    set_P255_trackside_int_T_TM_default_value,
    sizeof(P255_trackside_int_T_TM)
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
 ** BaliseGroupData_TM 
 ****************************************************************/

struct SimTypeVTable *pSimBaliseGroupData_TMVTable;

int BaliseGroupData_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBaliseGroupData_TMVTable != NULL
        && pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBaliseGroupData_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20642_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BaliseGroupData_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBaliseGroupData_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimBaliseGroupData_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20642(str, pValue, endptr);
    }
    return nRet;
}

int is_BaliseGroupData_TM_double_conversion_allowed()
{
    if (pSimBaliseGroupData_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBaliseGroupData_TMVTable);
    }
    return is_struct__20642_double_conversion_allowed();
}

int is_BaliseGroupData_TM_long_convertion_allowed()
{
    if (pSimBaliseGroupData_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimBaliseGroupData_TMVTable);
    }
    return is_struct__20642_long_convertion_allowed();
}

void compare_BaliseGroupData_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBaliseGroupData_TMVTable != NULL
        && pSimBaliseGroupData_TMVTable->m_version >= Scv612
        && pSimBaliseGroupData_TMVTable->m_pfnCompare != NULL) {
        if (pSimBaliseGroupData_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBaliseGroupData_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBaliseGroupData_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20642(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BaliseGroupData_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBaliseGroupData_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimBaliseGroupData_TMVTable, nRetValue);
    }
    return struct__20642_to_double(pValue, nRetValue);
}

int BaliseGroupData_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimBaliseGroupData_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimBaliseGroupData_TMVTable, nRetValue);
    }
    return struct__20642_to_long(pValue, nRetValue);
}

int get_BaliseGroupData_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20642_signature(pfnStrAppend, pData);
}

int set_BaliseGroupData_TM_default_value(void *pValue)
{
    return set_struct__20642_default_value(pValue);
}

int check_BaliseGroupData_TM_string(const char *str, char **endptr)
{
    static BaliseGroupData_TM rTemp;
    return string_to_BaliseGroupData_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_BaliseGroupData_TM_Utils = {
    BaliseGroupData_TM_to_string,
    check_BaliseGroupData_TM_string,
    string_to_BaliseGroupData_TM,
    is_BaliseGroupData_TM_double_conversion_allowed,
    BaliseGroupData_TM_to_double,
    is_BaliseGroupData_TM_long_convertion_allowed,
    BaliseGroupData_TM_to_long,
    compare_BaliseGroupData_TM,
    get_BaliseGroupData_TM_signature,
    set_BaliseGroupData_TM_default_value,
    sizeof(BaliseGroupData_TM)
};

/****************************************************************
 ** CompressedBaliseMessage_TM 
 ****************************************************************/

struct SimTypeVTable *pSimCompressedBaliseMessage_TMVTable;

int CompressedBaliseMessage_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL
        && pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedBaliseMessage_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20632_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedBaliseMessage_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedBaliseMessage_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20632(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedBaliseMessage_TM_double_conversion_allowed()
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedBaliseMessage_TMVTable);
    }
    return is_struct__20632_double_conversion_allowed();
}

int is_CompressedBaliseMessage_TM_long_convertion_allowed()
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimCompressedBaliseMessage_TMVTable);
    }
    return is_struct__20632_long_convertion_allowed();
}

void compare_CompressedBaliseMessage_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCompressedBaliseMessage_TMVTable != NULL
        && pSimCompressedBaliseMessage_TMVTable->m_version >= Scv612
        && pSimCompressedBaliseMessage_TMVTable->m_pfnCompare != NULL) {
        if (pSimCompressedBaliseMessage_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCompressedBaliseMessage_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCompressedBaliseMessage_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20632(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedBaliseMessage_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedBaliseMessage_TMVTable, nRetValue);
    }
    return struct__20632_to_double(pValue, nRetValue);
}

int CompressedBaliseMessage_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedBaliseMessage_TMVTable, nRetValue);
    }
    return struct__20632_to_long(pValue, nRetValue);
}

int get_CompressedBaliseMessage_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20632_signature(pfnStrAppend, pData);
}

int set_CompressedBaliseMessage_TM_default_value(void *pValue)
{
    return set_struct__20632_default_value(pValue);
}

int check_CompressedBaliseMessage_TM_string(const char *str, char **endptr)
{
    static CompressedBaliseMessage_TM rTemp;
    return string_to_CompressedBaliseMessage_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_CompressedBaliseMessage_TM_Utils = {
    CompressedBaliseMessage_TM_to_string,
    check_CompressedBaliseMessage_TM_string,
    string_to_CompressedBaliseMessage_TM,
    is_CompressedBaliseMessage_TM_double_conversion_allowed,
    CompressedBaliseMessage_TM_to_double,
    is_CompressedBaliseMessage_TM_long_convertion_allowed,
    CompressedBaliseMessage_TM_to_long,
    compare_CompressedBaliseMessage_TM,
    get_CompressedBaliseMessage_TM_signature,
    set_CompressedBaliseMessage_TM_default_value,
    sizeof(CompressedBaliseMessage_TM)
};

/****************************************************************
 ** P042_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP042_trackside_int_T_TMVTable;

int P042_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP042_trackside_int_T_TMVTable != NULL
        && pSimP042_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP042_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20738_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P042_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP042_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP042_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20738(str, pValue, endptr);
    }
    return nRet;
}

int is_P042_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP042_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP042_trackside_int_T_TMVTable);
    }
    return is_struct__20738_double_conversion_allowed();
}

int is_P042_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP042_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP042_trackside_int_T_TMVTable);
    }
    return is_struct__20738_long_convertion_allowed();
}

void compare_P042_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP042_trackside_int_T_TMVTable != NULL
        && pSimP042_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimP042_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP042_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP042_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP042_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20738(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P042_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP042_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP042_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__20738_to_double(pValue, nRetValue);
}

int P042_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP042_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP042_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__20738_to_long(pValue, nRetValue);
}

int get_P042_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20738_signature(pfnStrAppend, pData);
}

int set_P042_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__20738_default_value(pValue);
}

int check_P042_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static P042_trackside_int_T_TM rTemp;
    return string_to_P042_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P042_trackside_int_T_TM_Utils = {
    P042_trackside_int_T_TM_to_string,
    check_P042_trackside_int_T_TM_string,
    string_to_P042_trackside_int_T_TM,
    is_P042_trackside_int_T_TM_double_conversion_allowed,
    P042_trackside_int_T_TM_to_double,
    is_P042_trackside_int_T_TM_long_convertion_allowed,
    P042_trackside_int_T_TM_to_long,
    compare_P042_trackside_int_T_TM,
    get_P042_trackside_int_T_TM_signature,
    set_P042_trackside_int_T_TM_default_value,
    sizeof(P042_trackside_int_T_TM)
};

/****************************************************************
 ** P046_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP046_trackside_int_T_TMVTable;

int P046_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP046_trackside_int_T_TMVTable != NULL
        && pSimP046_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP046_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20727_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P046_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP046_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP046_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20727(str, pValue, endptr);
    }
    return nRet;
}

int is_P046_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP046_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP046_trackside_int_T_TMVTable);
    }
    return is_struct__20727_double_conversion_allowed();
}

int is_P046_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP046_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP046_trackside_int_T_TMVTable);
    }
    return is_struct__20727_long_convertion_allowed();
}

void compare_P046_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP046_trackside_int_T_TMVTable != NULL
        && pSimP046_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimP046_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP046_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP046_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP046_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20727(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P046_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP046_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP046_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__20727_to_double(pValue, nRetValue);
}

int P046_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP046_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP046_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__20727_to_long(pValue, nRetValue);
}

int get_P046_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20727_signature(pfnStrAppend, pData);
}

int set_P046_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__20727_default_value(pValue);
}

int check_P046_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static P046_trackside_int_T_TM rTemp;
    return string_to_P046_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P046_trackside_int_T_TM_Utils = {
    P046_trackside_int_T_TM_to_string,
    check_P046_trackside_int_T_TM_string,
    string_to_P046_trackside_int_T_TM,
    is_P046_trackside_int_T_TM_double_conversion_allowed,
    P046_trackside_int_T_TM_to_double,
    is_P046_trackside_int_T_TM_long_convertion_allowed,
    P046_trackside_int_T_TM_to_long,
    compare_P046_trackside_int_T_TM,
    get_P046_trackside_int_T_TM_signature,
    set_P046_trackside_int_T_TM_default_value,
    sizeof(P046_trackside_int_T_TM)
};

/****************************************************************
 ** P046_trackide_sectionlist_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP046_trackide_sectionlist_T_TMVTable;

int P046_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP046_trackide_sectionlist_T_TMVTable != NULL
        && pSimP046_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP046_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__20724_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P046_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP046_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP046_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__20724(str, pValue, endptr);
    }
    return nRet;
}

int is_P046_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimP046_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP046_trackide_sectionlist_T_TMVTable);
    }
    return is_array__20724_double_conversion_allowed();
}

int is_P046_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimP046_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP046_trackide_sectionlist_T_TMVTable);
    }
    return is_array__20724_long_convertion_allowed();
}

void compare_P046_trackide_sectionlist_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP046_trackide_sectionlist_T_TMVTable != NULL
        && pSimP046_trackide_sectionlist_T_TMVTable->m_version >= Scv612
        && pSimP046_trackide_sectionlist_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP046_trackide_sectionlist_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP046_trackide_sectionlist_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP046_trackide_sectionlist_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__20724(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P046_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP046_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP046_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__20724_to_double(pValue, nRetValue);
}

int P046_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP046_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP046_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__20724_to_long(pValue, nRetValue);
}

int get_P046_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__20724_signature(pfnStrAppend, pData);
}

int set_P046_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_array__20724_default_value(pValue);
}

int check_P046_trackide_sectionlist_T_TM_string(const char *str, char **endptr)
{
    static P046_trackide_sectionlist_T_TM rTemp;
    return string_to_P046_trackide_sectionlist_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P046_trackide_sectionlist_T_TM_Utils = {
    P046_trackide_sectionlist_T_TM_to_string,
    check_P046_trackide_sectionlist_T_TM_string,
    string_to_P046_trackide_sectionlist_T_TM,
    is_P046_trackide_sectionlist_T_TM_double_conversion_allowed,
    P046_trackide_sectionlist_T_TM_to_double,
    is_P046_trackide_sectionlist_T_TM_long_convertion_allowed,
    P046_trackide_sectionlist_T_TM_to_long,
    compare_P046_trackide_sectionlist_T_TM,
    get_P046_trackide_sectionlist_T_TM_signature,
    set_P046_trackide_sectionlist_T_TM_default_value,
    sizeof(P046_trackide_sectionlist_T_TM)
};

/****************************************************************
 ** P046_section_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP046_section_int_T_TMVTable;

int P046_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP046_section_int_T_TMVTable != NULL
        && pSimP046_section_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP046_section_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20710_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P046_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP046_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP046_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20710(str, pValue, endptr);
    }
    return nRet;
}

int is_P046_section_int_T_TM_double_conversion_allowed()
{
    if (pSimP046_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP046_section_int_T_TMVTable);
    }
    return is_struct__20710_double_conversion_allowed();
}

int is_P046_section_int_T_TM_long_convertion_allowed()
{
    if (pSimP046_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP046_section_int_T_TMVTable);
    }
    return is_struct__20710_long_convertion_allowed();
}

void compare_P046_section_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP046_section_int_T_TMVTable != NULL
        && pSimP046_section_int_T_TMVTable->m_version >= Scv612
        && pSimP046_section_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP046_section_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP046_section_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP046_section_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20710(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P046_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP046_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP046_section_int_T_TMVTable, nRetValue);
    }
    return struct__20710_to_double(pValue, nRetValue);
}

int P046_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP046_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP046_section_int_T_TMVTable, nRetValue);
    }
    return struct__20710_to_long(pValue, nRetValue);
}

int get_P046_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20710_signature(pfnStrAppend, pData);
}

int set_P046_section_int_T_TM_default_value(void *pValue)
{
    return set_struct__20710_default_value(pValue);
}

int check_P046_section_int_T_TM_string(const char *str, char **endptr)
{
    static P046_section_int_T_TM rTemp;
    return string_to_P046_section_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P046_section_int_T_TM_Utils = {
    P046_section_int_T_TM_to_string,
    check_P046_section_int_T_TM_string,
    string_to_P046_section_int_T_TM,
    is_P046_section_int_T_TM_double_conversion_allowed,
    P046_section_int_T_TM_to_double,
    is_P046_section_int_T_TM_long_convertion_allowed,
    P046_section_int_T_TM_to_long,
    compare_P046_section_int_T_TM,
    get_P046_section_int_T_TM_signature,
    set_P046_section_int_T_TM_default_value,
    sizeof(P046_section_int_T_TM)
};

/****************************************************************
 ** P046_sections_array_flat_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP046_sections_array_flat_T_TMVTable;

int P046_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP046_sections_array_flat_T_TMVTable != NULL
        && pSimP046_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP046_sections_array_flat_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_66_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P046_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP046_sections_array_flat_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP046_sections_array_flat_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_66(str, pValue, endptr);
    }
    return nRet;
}

int is_P046_sections_array_flat_T_TM_double_conversion_allowed()
{
    if (pSimP046_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP046_sections_array_flat_T_TMVTable);
    }
    return is_array_int_66_double_conversion_allowed();
}

int is_P046_sections_array_flat_T_TM_long_convertion_allowed()
{
    if (pSimP046_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP046_sections_array_flat_T_TMVTable);
    }
    return is_array_int_66_long_convertion_allowed();
}

void compare_P046_sections_array_flat_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP046_sections_array_flat_T_TMVTable != NULL
        && pSimP046_sections_array_flat_T_TMVTable->m_version >= Scv612
        && pSimP046_sections_array_flat_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP046_sections_array_flat_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP046_sections_array_flat_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP046_sections_array_flat_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_66(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P046_sections_array_flat_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP046_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP046_sections_array_flat_T_TMVTable, nRetValue);
    }
    return array_int_66_to_double(pValue, nRetValue);
}

int P046_sections_array_flat_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP046_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP046_sections_array_flat_T_TMVTable, nRetValue);
    }
    return array_int_66_to_long(pValue, nRetValue);
}

int get_P046_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_66_signature(pfnStrAppend, pData);
}

int set_P046_sections_array_flat_T_TM_default_value(void *pValue)
{
    return set_array_int_66_default_value(pValue);
}

int check_P046_sections_array_flat_T_TM_string(const char *str, char **endptr)
{
    static P046_sections_array_flat_T_TM rTemp;
    return string_to_P046_sections_array_flat_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P046_sections_array_flat_T_TM_Utils = {
    P046_sections_array_flat_T_TM_to_string,
    check_P046_sections_array_flat_T_TM_string,
    string_to_P046_sections_array_flat_T_TM,
    is_P046_sections_array_flat_T_TM_double_conversion_allowed,
    P046_sections_array_flat_T_TM_to_double,
    is_P046_sections_array_flat_T_TM_long_convertion_allowed,
    P046_sections_array_flat_T_TM_to_long,
    compare_P046_sections_array_flat_T_TM,
    get_P046_sections_array_flat_T_TM_signature,
    set_P046_sections_array_flat_T_TM_default_value,
    sizeof(P046_sections_array_flat_T_TM)
};

/****************************************************************
 ** P046_OBU_sectionlist_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP046_OBU_sectionlist_array_T_TMVTable;

int P046_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP046_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP046_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP046_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_2_33_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P046_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP046_OBU_sectionlist_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP046_OBU_sectionlist_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_2_33(str, pValue, endptr);
    }
    return nRet;
}

int is_P046_OBU_sectionlist_array_T_TM_double_conversion_allowed()
{
    if (pSimP046_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP046_OBU_sectionlist_array_T_TMVTable);
    }
    return is_array_int_2_33_double_conversion_allowed();
}

int is_P046_OBU_sectionlist_array_T_TM_long_convertion_allowed()
{
    if (pSimP046_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP046_OBU_sectionlist_array_T_TMVTable);
    }
    return is_array_int_2_33_long_convertion_allowed();
}

void compare_P046_OBU_sectionlist_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP046_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP046_OBU_sectionlist_array_T_TMVTable->m_version >= Scv612
        && pSimP046_OBU_sectionlist_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP046_OBU_sectionlist_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP046_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP046_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_2_33(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P046_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP046_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP046_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return array_int_2_33_to_double(pValue, nRetValue);
}

int P046_OBU_sectionlist_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP046_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP046_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return array_int_2_33_to_long(pValue, nRetValue);
}

int get_P046_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_2_33_signature(pfnStrAppend, pData);
}

int set_P046_OBU_sectionlist_array_T_TM_default_value(void *pValue)
{
    return set_array_int_2_33_default_value(pValue);
}

int check_P046_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr)
{
    static P046_OBU_sectionlist_array_T_TM rTemp;
    return string_to_P046_OBU_sectionlist_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P046_OBU_sectionlist_array_T_TM_Utils = {
    P046_OBU_sectionlist_array_T_TM_to_string,
    check_P046_OBU_sectionlist_array_T_TM_string,
    string_to_P046_OBU_sectionlist_array_T_TM,
    is_P046_OBU_sectionlist_array_T_TM_double_conversion_allowed,
    P046_OBU_sectionlist_array_T_TM_to_double,
    is_P046_OBU_sectionlist_array_T_TM_long_convertion_allowed,
    P046_OBU_sectionlist_array_T_TM_to_long,
    compare_P046_OBU_sectionlist_array_T_TM,
    get_P046_OBU_sectionlist_array_T_TM_signature,
    set_P046_OBU_sectionlist_array_T_TM_default_value,
    sizeof(P046_OBU_sectionlist_array_T_TM)
};

/****************************************************************
 ** P046_section_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP046_section_array_T_TMVTable;

int P046_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP046_section_array_T_TMVTable != NULL
        && pSimP046_section_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP046_section_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_2_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P046_section_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP046_section_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP046_section_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_2(str, pValue, endptr);
    }
    return nRet;
}

int is_P046_section_array_T_TM_double_conversion_allowed()
{
    if (pSimP046_section_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP046_section_array_T_TMVTable);
    }
    return is_array_int_2_double_conversion_allowed();
}

int is_P046_section_array_T_TM_long_convertion_allowed()
{
    if (pSimP046_section_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP046_section_array_T_TMVTable);
    }
    return is_array_int_2_long_convertion_allowed();
}

void compare_P046_section_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP046_section_array_T_TMVTable != NULL
        && pSimP046_section_array_T_TMVTable->m_version >= Scv612
        && pSimP046_section_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP046_section_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP046_section_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP046_section_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_2(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P046_section_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP046_section_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP046_section_array_T_TMVTable, nRetValue);
    }
    return array_int_2_to_double(pValue, nRetValue);
}

int P046_section_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP046_section_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP046_section_array_T_TMVTable, nRetValue);
    }
    return array_int_2_to_long(pValue, nRetValue);
}

int get_P046_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_2_signature(pfnStrAppend, pData);
}

int set_P046_section_array_T_TM_default_value(void *pValue)
{
    return set_array_int_2_default_value(pValue);
}

int check_P046_section_array_T_TM_string(const char *str, char **endptr)
{
    static P046_section_array_T_TM rTemp;
    return string_to_P046_section_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P046_section_array_T_TM_Utils = {
    P046_section_array_T_TM_to_string,
    check_P046_section_array_T_TM_string,
    string_to_P046_section_array_T_TM,
    is_P046_section_array_T_TM_double_conversion_allowed,
    P046_section_array_T_TM_to_double,
    is_P046_section_array_T_TM_long_convertion_allowed,
    P046_section_array_T_TM_to_long,
    compare_P046_section_array_T_TM,
    get_P046_section_array_T_TM_signature,
    set_P046_section_array_T_TM_default_value,
    sizeof(P046_section_array_T_TM)
};

/****************************************************************
 ** P046_OBU_sectionlist_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP046_OBU_sectionlist_int_T_TMVTable;

int P046_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP046_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP046_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP046_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__20721_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P046_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP046_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP046_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__20721(str, pValue, endptr);
    }
    return nRet;
}

int is_P046_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimP046_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP046_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__20721_double_conversion_allowed();
}

int is_P046_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimP046_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP046_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__20721_long_convertion_allowed();
}

void compare_P046_OBU_sectionlist_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP046_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP046_OBU_sectionlist_int_T_TMVTable->m_version >= Scv612
        && pSimP046_OBU_sectionlist_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP046_OBU_sectionlist_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP046_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP046_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__20721(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P046_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP046_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP046_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__20721_to_double(pValue, nRetValue);
}

int P046_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP046_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP046_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__20721_to_long(pValue, nRetValue);
}

int get_P046_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__20721_signature(pfnStrAppend, pData);
}

int set_P046_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_array__20721_default_value(pValue);
}

int check_P046_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr)
{
    static P046_OBU_sectionlist_int_T_TM rTemp;
    return string_to_P046_OBU_sectionlist_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P046_OBU_sectionlist_int_T_TM_Utils = {
    P046_OBU_sectionlist_int_T_TM_to_string,
    check_P046_OBU_sectionlist_int_T_TM_string,
    string_to_P046_OBU_sectionlist_int_T_TM,
    is_P046_OBU_sectionlist_int_T_TM_double_conversion_allowed,
    P046_OBU_sectionlist_int_T_TM_to_double,
    is_P046_OBU_sectionlist_int_T_TM_long_convertion_allowed,
    P046_OBU_sectionlist_int_T_TM_to_long,
    compare_P046_OBU_sectionlist_int_T_TM,
    get_P046_OBU_sectionlist_int_T_TM_signature,
    set_P046_OBU_sectionlist_int_T_TM_default_value,
    sizeof(P046_OBU_sectionlist_int_T_TM)
};

/****************************************************************
 ** P041_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP041_trackside_int_T_TMVTable;

int P041_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP041_trackside_int_T_TMVTable != NULL
        && pSimP041_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP041_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20693_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20693(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_trackside_int_T_TMVTable);
    }
    return is_struct__20693_double_conversion_allowed();
}

int is_P041_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_trackside_int_T_TMVTable);
    }
    return is_struct__20693_long_convertion_allowed();
}

void compare_P041_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP041_trackside_int_T_TMVTable != NULL
        && pSimP041_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimP041_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP041_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP041_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP041_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20693(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__20693_to_double(pValue, nRetValue);
}

int P041_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__20693_to_long(pValue, nRetValue);
}

int get_P041_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20693_signature(pfnStrAppend, pData);
}

int set_P041_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__20693_default_value(pValue);
}

int check_P041_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static P041_trackside_int_T_TM rTemp;
    return string_to_P041_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P041_trackside_int_T_TM_Utils = {
    P041_trackside_int_T_TM_to_string,
    check_P041_trackside_int_T_TM_string,
    string_to_P041_trackside_int_T_TM,
    is_P041_trackside_int_T_TM_double_conversion_allowed,
    P041_trackside_int_T_TM_to_double,
    is_P041_trackside_int_T_TM_long_convertion_allowed,
    P041_trackside_int_T_TM_to_long,
    compare_P041_trackside_int_T_TM,
    get_P041_trackside_int_T_TM_signature,
    set_P041_trackside_int_T_TM_default_value,
    sizeof(P041_trackside_int_T_TM)
};

/****************************************************************
 ** P041_trackide_sectionlist_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP041_trackide_sectionlist_T_TMVTable;

int P041_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL
        && pSimP041_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP041_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__20690_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__20690(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_trackide_sectionlist_T_TMVTable);
    }
    return is_array__20690_double_conversion_allowed();
}

int is_P041_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_trackide_sectionlist_T_TMVTable);
    }
    return is_array__20690_long_convertion_allowed();
}

void compare_P041_trackide_sectionlist_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL
        && pSimP041_trackide_sectionlist_T_TMVTable->m_version >= Scv612
        && pSimP041_trackide_sectionlist_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP041_trackide_sectionlist_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP041_trackide_sectionlist_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP041_trackide_sectionlist_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__20690(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__20690_to_double(pValue, nRetValue);
}

int P041_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__20690_to_long(pValue, nRetValue);
}

int get_P041_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__20690_signature(pfnStrAppend, pData);
}

int set_P041_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_array__20690_default_value(pValue);
}

int check_P041_trackide_sectionlist_T_TM_string(const char *str, char **endptr)
{
    static P041_trackide_sectionlist_T_TM rTemp;
    return string_to_P041_trackide_sectionlist_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P041_trackide_sectionlist_T_TM_Utils = {
    P041_trackide_sectionlist_T_TM_to_string,
    check_P041_trackide_sectionlist_T_TM_string,
    string_to_P041_trackide_sectionlist_T_TM,
    is_P041_trackide_sectionlist_T_TM_double_conversion_allowed,
    P041_trackide_sectionlist_T_TM_to_double,
    is_P041_trackide_sectionlist_T_TM_long_convertion_allowed,
    P041_trackide_sectionlist_T_TM_to_long,
    compare_P041_trackide_sectionlist_T_TM,
    get_P041_trackide_sectionlist_T_TM_signature,
    set_P041_trackide_sectionlist_T_TM_default_value,
    sizeof(P041_trackide_sectionlist_T_TM)
};

/****************************************************************
 ** P041_section_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP041_section_int_T_TMVTable;

int P041_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP041_section_int_T_TMVTable != NULL
        && pSimP041_section_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP041_section_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20675_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20675(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_section_int_T_TM_double_conversion_allowed()
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_section_int_T_TMVTable);
    }
    return is_struct__20675_double_conversion_allowed();
}

int is_P041_section_int_T_TM_long_convertion_allowed()
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_section_int_T_TMVTable);
    }
    return is_struct__20675_long_convertion_allowed();
}

void compare_P041_section_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP041_section_int_T_TMVTable != NULL
        && pSimP041_section_int_T_TMVTable->m_version >= Scv612
        && pSimP041_section_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP041_section_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP041_section_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP041_section_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20675(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_section_int_T_TMVTable, nRetValue);
    }
    return struct__20675_to_double(pValue, nRetValue);
}

int P041_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_section_int_T_TMVTable, nRetValue);
    }
    return struct__20675_to_long(pValue, nRetValue);
}

int get_P041_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20675_signature(pfnStrAppend, pData);
}

int set_P041_section_int_T_TM_default_value(void *pValue)
{
    return set_struct__20675_default_value(pValue);
}

int check_P041_section_int_T_TM_string(const char *str, char **endptr)
{
    static P041_section_int_T_TM rTemp;
    return string_to_P041_section_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P041_section_int_T_TM_Utils = {
    P041_section_int_T_TM_to_string,
    check_P041_section_int_T_TM_string,
    string_to_P041_section_int_T_TM,
    is_P041_section_int_T_TM_double_conversion_allowed,
    P041_section_int_T_TM_to_double,
    is_P041_section_int_T_TM_long_convertion_allowed,
    P041_section_int_T_TM_to_long,
    compare_P041_section_int_T_TM,
    get_P041_section_int_T_TM_signature,
    set_P041_section_int_T_TM_default_value,
    sizeof(P041_section_int_T_TM)
};

/****************************************************************
 ** P041_sections_array_flat_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP041_sections_array_flat_T_TMVTable;

int P041_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP041_sections_array_flat_T_TMVTable != NULL
        && pSimP041_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP041_sections_array_flat_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_99_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_sections_array_flat_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_sections_array_flat_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_99(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_sections_array_flat_T_TM_double_conversion_allowed()
{
    if (pSimP041_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_sections_array_flat_T_TMVTable);
    }
    return is_array_int_99_double_conversion_allowed();
}

int is_P041_sections_array_flat_T_TM_long_convertion_allowed()
{
    if (pSimP041_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_sections_array_flat_T_TMVTable);
    }
    return is_array_int_99_long_convertion_allowed();
}

void compare_P041_sections_array_flat_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP041_sections_array_flat_T_TMVTable != NULL
        && pSimP041_sections_array_flat_T_TMVTable->m_version >= Scv612
        && pSimP041_sections_array_flat_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP041_sections_array_flat_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP041_sections_array_flat_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP041_sections_array_flat_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_99(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_sections_array_flat_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_sections_array_flat_T_TMVTable, nRetValue);
    }
    return array_int_99_to_double(pValue, nRetValue);
}

int P041_sections_array_flat_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_sections_array_flat_T_TMVTable, nRetValue);
    }
    return array_int_99_to_long(pValue, nRetValue);
}

int get_P041_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_99_signature(pfnStrAppend, pData);
}

int set_P041_sections_array_flat_T_TM_default_value(void *pValue)
{
    return set_array_int_99_default_value(pValue);
}

int check_P041_sections_array_flat_T_TM_string(const char *str, char **endptr)
{
    static P041_sections_array_flat_T_TM rTemp;
    return string_to_P041_sections_array_flat_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P041_sections_array_flat_T_TM_Utils = {
    P041_sections_array_flat_T_TM_to_string,
    check_P041_sections_array_flat_T_TM_string,
    string_to_P041_sections_array_flat_T_TM,
    is_P041_sections_array_flat_T_TM_double_conversion_allowed,
    P041_sections_array_flat_T_TM_to_double,
    is_P041_sections_array_flat_T_TM_long_convertion_allowed,
    P041_sections_array_flat_T_TM_to_long,
    compare_P041_sections_array_flat_T_TM,
    get_P041_sections_array_flat_T_TM_signature,
    set_P041_sections_array_flat_T_TM_default_value,
    sizeof(P041_sections_array_flat_T_TM)
};

/****************************************************************
 ** P041_OBU_sectionlist_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP041_OBU_sectionlist_array_T_TMVTable;

int P041_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP041_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP041_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP041_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_3_33_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_OBU_sectionlist_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_OBU_sectionlist_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_3_33(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_OBU_sectionlist_array_T_TM_double_conversion_allowed()
{
    if (pSimP041_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_OBU_sectionlist_array_T_TMVTable);
    }
    return is_array_int_3_33_double_conversion_allowed();
}

int is_P041_OBU_sectionlist_array_T_TM_long_convertion_allowed()
{
    if (pSimP041_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_OBU_sectionlist_array_T_TMVTable);
    }
    return is_array_int_3_33_long_convertion_allowed();
}

void compare_P041_OBU_sectionlist_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP041_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP041_OBU_sectionlist_array_T_TMVTable->m_version >= Scv612
        && pSimP041_OBU_sectionlist_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP041_OBU_sectionlist_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP041_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP041_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_3_33(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return array_int_3_33_to_double(pValue, nRetValue);
}

int P041_OBU_sectionlist_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return array_int_3_33_to_long(pValue, nRetValue);
}

int get_P041_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_3_33_signature(pfnStrAppend, pData);
}

int set_P041_OBU_sectionlist_array_T_TM_default_value(void *pValue)
{
    return set_array_int_3_33_default_value(pValue);
}

int check_P041_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr)
{
    static P041_OBU_sectionlist_array_T_TM rTemp;
    return string_to_P041_OBU_sectionlist_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P041_OBU_sectionlist_array_T_TM_Utils = {
    P041_OBU_sectionlist_array_T_TM_to_string,
    check_P041_OBU_sectionlist_array_T_TM_string,
    string_to_P041_OBU_sectionlist_array_T_TM,
    is_P041_OBU_sectionlist_array_T_TM_double_conversion_allowed,
    P041_OBU_sectionlist_array_T_TM_to_double,
    is_P041_OBU_sectionlist_array_T_TM_long_convertion_allowed,
    P041_OBU_sectionlist_array_T_TM_to_long,
    compare_P041_OBU_sectionlist_array_T_TM,
    get_P041_OBU_sectionlist_array_T_TM_signature,
    set_P041_OBU_sectionlist_array_T_TM_default_value,
    sizeof(P041_OBU_sectionlist_array_T_TM)
};

/****************************************************************
 ** P041_section_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP041_section_array_T_TMVTable;

int P041_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP041_section_array_T_TMVTable != NULL
        && pSimP041_section_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP041_section_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_3_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_section_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_section_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_section_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_3(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_section_array_T_TM_double_conversion_allowed()
{
    if (pSimP041_section_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_section_array_T_TMVTable);
    }
    return is_array_int_3_double_conversion_allowed();
}

int is_P041_section_array_T_TM_long_convertion_allowed()
{
    if (pSimP041_section_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_section_array_T_TMVTable);
    }
    return is_array_int_3_long_convertion_allowed();
}

void compare_P041_section_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP041_section_array_T_TMVTable != NULL
        && pSimP041_section_array_T_TMVTable->m_version >= Scv612
        && pSimP041_section_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP041_section_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP041_section_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP041_section_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_3(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_section_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_section_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_section_array_T_TMVTable, nRetValue);
    }
    return array_int_3_to_double(pValue, nRetValue);
}

int P041_section_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_section_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_section_array_T_TMVTable, nRetValue);
    }
    return array_int_3_to_long(pValue, nRetValue);
}

int get_P041_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_3_signature(pfnStrAppend, pData);
}

int set_P041_section_array_T_TM_default_value(void *pValue)
{
    return set_array_int_3_default_value(pValue);
}

int check_P041_section_array_T_TM_string(const char *str, char **endptr)
{
    static P041_section_array_T_TM rTemp;
    return string_to_P041_section_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P041_section_array_T_TM_Utils = {
    P041_section_array_T_TM_to_string,
    check_P041_section_array_T_TM_string,
    string_to_P041_section_array_T_TM,
    is_P041_section_array_T_TM_double_conversion_allowed,
    P041_section_array_T_TM_to_double,
    is_P041_section_array_T_TM_long_convertion_allowed,
    P041_section_array_T_TM_to_long,
    compare_P041_section_array_T_TM,
    get_P041_section_array_T_TM_signature,
    set_P041_section_array_T_TM_default_value,
    sizeof(P041_section_array_T_TM)
};

/****************************************************************
 ** P041_OBU_sectionlist_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP041_OBU_sectionlist_int_T_TMVTable;

int P041_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP041_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP041_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__20687_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__20687(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__20687_double_conversion_allowed();
}

int is_P041_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__20687_long_convertion_allowed();
}

void compare_P041_OBU_sectionlist_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP041_OBU_sectionlist_int_T_TMVTable->m_version >= Scv612
        && pSimP041_OBU_sectionlist_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP041_OBU_sectionlist_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP041_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP041_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__20687(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__20687_to_double(pValue, nRetValue);
}

int P041_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__20687_to_long(pValue, nRetValue);
}

int get_P041_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__20687_signature(pfnStrAppend, pData);
}

int set_P041_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_array__20687_default_value(pValue);
}

int check_P041_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr)
{
    static P041_OBU_sectionlist_int_T_TM rTemp;
    return string_to_P041_OBU_sectionlist_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P041_OBU_sectionlist_int_T_TM_Utils = {
    P041_OBU_sectionlist_int_T_TM_to_string,
    check_P041_OBU_sectionlist_int_T_TM_string,
    string_to_P041_OBU_sectionlist_int_T_TM,
    is_P041_OBU_sectionlist_int_T_TM_double_conversion_allowed,
    P041_OBU_sectionlist_int_T_TM_to_double,
    is_P041_OBU_sectionlist_int_T_TM_long_convertion_allowed,
    P041_OBU_sectionlist_int_T_TM_to_long,
    compare_P041_OBU_sectionlist_int_T_TM,
    get_P041_OBU_sectionlist_int_T_TM_signature,
    set_P041_OBU_sectionlist_int_T_TM_default_value,
    sizeof(P041_OBU_sectionlist_int_T_TM)
};

/****************************************************************
 ** P137_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP137_trackside_int_T_TMVTable;

int P137_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP137_trackside_int_T_TMVTable != NULL
        && pSimP137_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP137_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20664_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P137_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP137_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP137_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20664(str, pValue, endptr);
    }
    return nRet;
}

int is_P137_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP137_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP137_trackside_int_T_TMVTable);
    }
    return is_struct__20664_double_conversion_allowed();
}

int is_P137_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP137_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP137_trackside_int_T_TMVTable);
    }
    return is_struct__20664_long_convertion_allowed();
}

void compare_P137_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP137_trackside_int_T_TMVTable != NULL
        && pSimP137_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimP137_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP137_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP137_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP137_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20664(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P137_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP137_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP137_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__20664_to_double(pValue, nRetValue);
}

int P137_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP137_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP137_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__20664_to_long(pValue, nRetValue);
}

int get_P137_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20664_signature(pfnStrAppend, pData);
}

int set_P137_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__20664_default_value(pValue);
}

int check_P137_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static P137_trackside_int_T_TM rTemp;
    return string_to_P137_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P137_trackside_int_T_TM_Utils = {
    P137_trackside_int_T_TM_to_string,
    check_P137_trackside_int_T_TM_string,
    string_to_P137_trackside_int_T_TM,
    is_P137_trackside_int_T_TM_double_conversion_allowed,
    P137_trackside_int_T_TM_to_double,
    is_P137_trackside_int_T_TM_long_convertion_allowed,
    P137_trackside_int_T_TM_to_long,
    compare_P137_trackside_int_T_TM,
    get_P137_trackside_int_T_TM_signature,
    set_P137_trackside_int_T_TM_default_value,
    sizeof(P137_trackside_int_T_TM)
};

/****************************************************************
 ** B_data_internal_T_InfraLib 
 ****************************************************************/

struct SimTypeVTable *pSimB_data_internal_T_InfraLibVTable;

int B_data_internal_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimB_data_internal_T_InfraLibVTable != NULL
        && pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimB_data_internal_T_InfraLibVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20650_to_string(pValue, pfnStrAppend, pData);
}

int string_to_B_data_internal_T_InfraLib(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimB_data_internal_T_InfraLibVTable != NULL) {
        nRet=string_to_VTable(str, pSimB_data_internal_T_InfraLibVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20650(str, pValue, endptr);
    }
    return nRet;
}

int is_B_data_internal_T_InfraLib_double_conversion_allowed()
{
    if (pSimB_data_internal_T_InfraLibVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimB_data_internal_T_InfraLibVTable);
    }
    return is_struct__20650_double_conversion_allowed();
}

int is_B_data_internal_T_InfraLib_long_convertion_allowed()
{
    if (pSimB_data_internal_T_InfraLibVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimB_data_internal_T_InfraLibVTable);
    }
    return is_struct__20650_long_convertion_allowed();
}

void compare_B_data_internal_T_InfraLib(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimB_data_internal_T_InfraLibVTable != NULL
        && pSimB_data_internal_T_InfraLibVTable->m_version >= Scv612
        && pSimB_data_internal_T_InfraLibVTable->m_pfnCompare != NULL) {
        if (pSimB_data_internal_T_InfraLibVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimB_data_internal_T_InfraLibVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimB_data_internal_T_InfraLibVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20650(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int B_data_internal_T_InfraLib_to_double(const void *pValue, double *nRetValue)
{
    if (pSimB_data_internal_T_InfraLibVTable != NULL) {
        return VTable_to_double(pValue, pSimB_data_internal_T_InfraLibVTable, nRetValue);
    }
    return struct__20650_to_double(pValue, nRetValue);
}

int B_data_internal_T_InfraLib_to_long(const void *pValue, long *nRetValue)
{
    if (pSimB_data_internal_T_InfraLibVTable != NULL) {
        return VTable_to_long(pValue, pSimB_data_internal_T_InfraLibVTable, nRetValue);
    }
    return struct__20650_to_long(pValue, nRetValue);
}

int get_B_data_internal_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20650_signature(pfnStrAppend, pData);
}

int set_B_data_internal_T_InfraLib_default_value(void *pValue)
{
    return set_struct__20650_default_value(pValue);
}

int check_B_data_internal_T_InfraLib_string(const char *str, char **endptr)
{
    static B_data_internal_T_InfraLib rTemp;
    return string_to_B_data_internal_T_InfraLib(str, &rTemp, endptr);
}

SimTypeUtils _Type_B_data_internal_T_InfraLib_Utils = {
    B_data_internal_T_InfraLib_to_string,
    check_B_data_internal_T_InfraLib_string,
    string_to_B_data_internal_T_InfraLib,
    is_B_data_internal_T_InfraLib_double_conversion_allowed,
    B_data_internal_T_InfraLib_to_double,
    is_B_data_internal_T_InfraLib_long_convertion_allowed,
    B_data_internal_T_InfraLib_to_long,
    compare_B_data_internal_T_InfraLib,
    get_B_data_internal_T_InfraLib_signature,
    set_B_data_internal_T_InfraLib_default_value,
    sizeof(B_data_internal_T_InfraLib)
};

/****************************************************************
 ** TrackSectionData_T_InfraLib 
 ****************************************************************/

struct SimTypeVTable *pSimTrackSectionData_T_InfraLibVTable;

int TrackSectionData_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTrackSectionData_T_InfraLibVTable != NULL
        && pSimTrackSectionData_T_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTrackSectionData_T_InfraLibVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20637_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TrackSectionData_T_InfraLib(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTrackSectionData_T_InfraLibVTable != NULL) {
        nRet=string_to_VTable(str, pSimTrackSectionData_T_InfraLibVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20637(str, pValue, endptr);
    }
    return nRet;
}

int is_TrackSectionData_T_InfraLib_double_conversion_allowed()
{
    if (pSimTrackSectionData_T_InfraLibVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimTrackSectionData_T_InfraLibVTable);
    }
    return is_struct__20637_double_conversion_allowed();
}

int is_TrackSectionData_T_InfraLib_long_convertion_allowed()
{
    if (pSimTrackSectionData_T_InfraLibVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimTrackSectionData_T_InfraLibVTable);
    }
    return is_struct__20637_long_convertion_allowed();
}

void compare_TrackSectionData_T_InfraLib(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTrackSectionData_T_InfraLibVTable != NULL
        && pSimTrackSectionData_T_InfraLibVTable->m_version >= Scv612
        && pSimTrackSectionData_T_InfraLibVTable->m_pfnCompare != NULL) {
        if (pSimTrackSectionData_T_InfraLibVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTrackSectionData_T_InfraLibVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTrackSectionData_T_InfraLibVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20637(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TrackSectionData_T_InfraLib_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTrackSectionData_T_InfraLibVTable != NULL) {
        return VTable_to_double(pValue, pSimTrackSectionData_T_InfraLibVTable, nRetValue);
    }
    return struct__20637_to_double(pValue, nRetValue);
}

int TrackSectionData_T_InfraLib_to_long(const void *pValue, long *nRetValue)
{
    if (pSimTrackSectionData_T_InfraLibVTable != NULL) {
        return VTable_to_long(pValue, pSimTrackSectionData_T_InfraLibVTable, nRetValue);
    }
    return struct__20637_to_long(pValue, nRetValue);
}

int get_TrackSectionData_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20637_signature(pfnStrAppend, pData);
}

int set_TrackSectionData_T_InfraLib_default_value(void *pValue)
{
    return set_struct__20637_default_value(pValue);
}

int check_TrackSectionData_T_InfraLib_string(const char *str, char **endptr)
{
    static TrackSectionData_T_InfraLib rTemp;
    return string_to_TrackSectionData_T_InfraLib(str, &rTemp, endptr);
}

SimTypeUtils _Type_TrackSectionData_T_InfraLib_Utils = {
    TrackSectionData_T_InfraLib_to_string,
    check_TrackSectionData_T_InfraLib_string,
    string_to_TrackSectionData_T_InfraLib,
    is_TrackSectionData_T_InfraLib_double_conversion_allowed,
    TrackSectionData_T_InfraLib_to_double,
    is_TrackSectionData_T_InfraLib_long_convertion_allowed,
    TrackSectionData_T_InfraLib_to_long,
    compare_TrackSectionData_T_InfraLib,
    get_TrackSectionData_T_InfraLib_signature,
    set_TrackSectionData_T_InfraLib_default_value,
    sizeof(TrackSectionData_T_InfraLib)
};

/****************************************************************
 ** TrainPosRaw_T_InfraLib 
 ****************************************************************/

struct SimTypeVTable *pSimTrainPosRaw_T_InfraLibVTable;

int TrainPosRaw_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTrainPosRaw_T_InfraLibVTable != NULL
        && pSimTrainPosRaw_T_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTrainPosRaw_T_InfraLibVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20594_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TrainPosRaw_T_InfraLib(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTrainPosRaw_T_InfraLibVTable != NULL) {
        nRet=string_to_VTable(str, pSimTrainPosRaw_T_InfraLibVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20594(str, pValue, endptr);
    }
    return nRet;
}

int is_TrainPosRaw_T_InfraLib_double_conversion_allowed()
{
    if (pSimTrainPosRaw_T_InfraLibVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimTrainPosRaw_T_InfraLibVTable);
    }
    return is_struct__20594_double_conversion_allowed();
}

int is_TrainPosRaw_T_InfraLib_long_convertion_allowed()
{
    if (pSimTrainPosRaw_T_InfraLibVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimTrainPosRaw_T_InfraLibVTable);
    }
    return is_struct__20594_long_convertion_allowed();
}

void compare_TrainPosRaw_T_InfraLib(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTrainPosRaw_T_InfraLibVTable != NULL
        && pSimTrainPosRaw_T_InfraLibVTable->m_version >= Scv612
        && pSimTrainPosRaw_T_InfraLibVTable->m_pfnCompare != NULL) {
        if (pSimTrainPosRaw_T_InfraLibVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTrainPosRaw_T_InfraLibVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTrainPosRaw_T_InfraLibVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20594(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TrainPosRaw_T_InfraLib_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTrainPosRaw_T_InfraLibVTable != NULL) {
        return VTable_to_double(pValue, pSimTrainPosRaw_T_InfraLibVTable, nRetValue);
    }
    return struct__20594_to_double(pValue, nRetValue);
}

int TrainPosRaw_T_InfraLib_to_long(const void *pValue, long *nRetValue)
{
    if (pSimTrainPosRaw_T_InfraLibVTable != NULL) {
        return VTable_to_long(pValue, pSimTrainPosRaw_T_InfraLibVTable, nRetValue);
    }
    return struct__20594_to_long(pValue, nRetValue);
}

int get_TrainPosRaw_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20594_signature(pfnStrAppend, pData);
}

int set_TrainPosRaw_T_InfraLib_default_value(void *pValue)
{
    return set_struct__20594_default_value(pValue);
}

int check_TrainPosRaw_T_InfraLib_string(const char *str, char **endptr)
{
    static TrainPosRaw_T_InfraLib rTemp;
    return string_to_TrainPosRaw_T_InfraLib(str, &rTemp, endptr);
}

SimTypeUtils _Type_TrainPosRaw_T_InfraLib_Utils = {
    TrainPosRaw_T_InfraLib_to_string,
    check_TrainPosRaw_T_InfraLib_string,
    string_to_TrainPosRaw_T_InfraLib,
    is_TrainPosRaw_T_InfraLib_double_conversion_allowed,
    TrainPosRaw_T_InfraLib_to_double,
    is_TrainPosRaw_T_InfraLib_long_convertion_allowed,
    TrainPosRaw_T_InfraLib_to_long,
    compare_TrainPosRaw_T_InfraLib,
    get_TrainPosRaw_T_InfraLib_signature,
    set_TrainPosRaw_T_InfraLib_default_value,
    sizeof(TrainPosRaw_T_InfraLib)
};

/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimCompressedPackets_T_Common_Types_PkgVTable;

int CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20614_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20614(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__20614_double_conversion_allowed();
}

int is_CompressedPackets_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__20614_long_convertion_allowed();
}

void compare_CompressedPackets_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20614(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__20614_to_double(pValue, nRetValue);
}

int CompressedPackets_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__20614_to_long(pValue, nRetValue);
}

int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20614_signature(pfnStrAppend, pData);
}

int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__20614_default_value(pValue);
}

int check_CompressedPackets_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static CompressedPackets_T_Common_Types_Pkg rTemp;
    return string_to_CompressedPackets_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_CompressedPackets_T_Common_Types_Pkg_Utils = {
    CompressedPackets_T_Common_Types_Pkg_to_string,
    check_CompressedPackets_T_Common_Types_Pkg_string,
    string_to_CompressedPackets_T_Common_Types_Pkg,
    is_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed,
    CompressedPackets_T_Common_Types_Pkg_to_double,
    is_CompressedPackets_T_Common_Types_Pkg_long_convertion_allowed,
    CompressedPackets_T_Common_Types_Pkg_to_long,
    compare_CompressedPackets_T_Common_Types_Pkg,
    get_CompressedPackets_T_Common_Types_Pkg_signature,
    set_CompressedPackets_T_Common_Types_Pkg_default_value,
    sizeof(CompressedPackets_T_Common_Types_Pkg)
};

/****************************************************************
 ** Metadata_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimMetadata_T_Common_Types_PkgVTable;

int Metadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL
        && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__20611_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__20611(str, pValue, endptr);
    }
    return nRet;
}

int is_Metadata_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__20611_double_conversion_allowed();
}

int is_Metadata_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__20611_long_convertion_allowed();
}

void compare_Metadata_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL
        && pSimMetadata_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimMetadata_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimMetadata_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimMetadata_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimMetadata_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__20611(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__20611_to_double(pValue, nRetValue);
}

int Metadata_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__20611_to_long(pValue, nRetValue);
}

int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__20611_signature(pfnStrAppend, pData);
}

int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_array__20611_default_value(pValue);
}

int check_Metadata_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static Metadata_T_Common_Types_Pkg rTemp;
    return string_to_Metadata_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_Metadata_T_Common_Types_Pkg_Utils = {
    Metadata_T_Common_Types_Pkg_to_string,
    check_Metadata_T_Common_Types_Pkg_string,
    string_to_Metadata_T_Common_Types_Pkg,
    is_Metadata_T_Common_Types_Pkg_double_conversion_allowed,
    Metadata_T_Common_Types_Pkg_to_double,
    is_Metadata_T_Common_Types_Pkg_long_convertion_allowed,
    Metadata_T_Common_Types_Pkg_to_long,
    compare_Metadata_T_Common_Types_Pkg,
    get_Metadata_T_Common_Types_Pkg_signature,
    set_Metadata_T_Common_Types_Pkg_default_value,
    sizeof(Metadata_T_Common_Types_Pkg)
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
    return struct__20603_to_string(pValue, pfnStrAppend, pData);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20603(str, pValue, endptr);
    }
    return nRet;
}

int is_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__20603_double_conversion_allowed();
}

int is_MetadataElement_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__20603_long_convertion_allowed();
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
        compare_struct__20603(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__20603_to_double(pValue, nRetValue);
}

int MetadataElement_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__20603_to_long(pValue, nRetValue);
}

int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20603_signature(pfnStrAppend, pData);
}

int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__20603_default_value(pValue);
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
 ** P003V1_trackside_int_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP003V1_trackside_int_T_TM_baseline2VTable;

int P003V1_trackside_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL
        && pSimP003V1_trackside_int_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP003V1_trackside_int_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__20753_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P003V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP003V1_trackside_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__20753(str, pValue, endptr);
    }
    return nRet;
}

int is_P003V1_trackside_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP003V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__20753_double_conversion_allowed();
}

int is_P003V1_trackside_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP003V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__20753_long_convertion_allowed();
}

void compare_P003V1_trackside_int_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL
        && pSimP003V1_trackside_int_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP003V1_trackside_int_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP003V1_trackside_int_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP003V1_trackside_int_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP003V1_trackside_int_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__20753(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P003V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP003V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__20753_to_double(pValue, nRetValue);
}

int P003V1_trackside_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP003V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__20753_to_long(pValue, nRetValue);
}

int get_P003V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__20753_signature(pfnStrAppend, pData);
}

int set_P003V1_trackside_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__20753_default_value(pValue);
}

int check_P003V1_trackside_int_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P003V1_trackside_int_T_TM_baseline2 rTemp;
    return string_to_P003V1_trackside_int_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P003V1_trackside_int_T_TM_baseline2_Utils = {
    P003V1_trackside_int_T_TM_baseline2_to_string,
    check_P003V1_trackside_int_T_TM_baseline2_string,
    string_to_P003V1_trackside_int_T_TM_baseline2,
    is_P003V1_trackside_int_T_TM_baseline2_double_conversion_allowed,
    P003V1_trackside_int_T_TM_baseline2_to_double,
    is_P003V1_trackside_int_T_TM_baseline2_long_convertion_allowed,
    P003V1_trackside_int_T_TM_baseline2_to_long,
    compare_P003V1_trackside_int_T_TM_baseline2,
    get_P003V1_trackside_int_T_TM_baseline2_signature,
    set_P003V1_trackside_int_T_TM_baseline2_default_value,
    sizeof(P003V1_trackside_int_T_TM_baseline2)
};

/****************************************************************
 ** P003V1_trackide_sectionlist_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable;

int P003V1_trackide_sectionlist_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable != NULL
        && pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_32_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P003V1_trackide_sectionlist_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_32(str, pValue, endptr);
    }
    return nRet;
}

int is_P003V1_trackide_sectionlist_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable);
    }
    return is_array_int_32_double_conversion_allowed();
}

int is_P003V1_trackide_sectionlist_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable);
    }
    return is_array_int_32_long_convertion_allowed();
}

void compare_P003V1_trackide_sectionlist_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable != NULL
        && pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_32(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P003V1_trackide_sectionlist_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable, nRetValue);
    }
    return array_int_32_to_double(pValue, nRetValue);
}

int P003V1_trackide_sectionlist_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP003V1_trackide_sectionlist_T_TM_baseline2VTable, nRetValue);
    }
    return array_int_32_to_long(pValue, nRetValue);
}

int get_P003V1_trackide_sectionlist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_32_signature(pfnStrAppend, pData);
}

int set_P003V1_trackide_sectionlist_T_TM_baseline2_default_value(void *pValue)
{
    return set_array_int_32_default_value(pValue);
}

int check_P003V1_trackide_sectionlist_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P003V1_trackide_sectionlist_T_TM_baseline2 rTemp;
    return string_to_P003V1_trackide_sectionlist_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils = {
    P003V1_trackide_sectionlist_T_TM_baseline2_to_string,
    check_P003V1_trackide_sectionlist_T_TM_baseline2_string,
    string_to_P003V1_trackide_sectionlist_T_TM_baseline2,
    is_P003V1_trackide_sectionlist_T_TM_baseline2_double_conversion_allowed,
    P003V1_trackide_sectionlist_T_TM_baseline2_to_double,
    is_P003V1_trackide_sectionlist_T_TM_baseline2_long_convertion_allowed,
    P003V1_trackide_sectionlist_T_TM_baseline2_to_long,
    compare_P003V1_trackide_sectionlist_T_TM_baseline2,
    get_P003V1_trackide_sectionlist_T_TM_baseline2_signature,
    set_P003V1_trackide_sectionlist_T_TM_baseline2_default_value,
    sizeof(P003V1_trackide_sectionlist_T_TM_baseline2)
};

#include "C:/Program Files/Esterel Technologies/SCADE R16.1/SCADE/lib/kcg_conv.c"
