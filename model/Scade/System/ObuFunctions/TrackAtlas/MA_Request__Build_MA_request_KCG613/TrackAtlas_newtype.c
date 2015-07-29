#include <stdlib.h>
#include <stddef.h>
#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "TrackAtlas_newtype.h"
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
 ** struct__431 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__431VTable;

static SimFieldUtils struct__431_fields[] = {
    {"nominal", offsetof(struct__431,nominal), &_Type_kcg_int_Utils},
    {"d_min", offsetof(struct__431,d_min), &_Type_kcg_int_Utils},
    {"d_max", offsetof(struct__431,d_max), &_Type_kcg_int_Utils},
};

int struct__431_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__431VTable != NULL
        && pSimstruct__431VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__431VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__431_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__431(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__431VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__431VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__431_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__431_double_conversion_allowed()
{
    if (pSimstruct__431VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__431VTable);
    }
    return 0;
}

int is_struct__431_long_convertion_allowed()
{
    if (pSimstruct__431VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__431VTable);
    }
    return 0;
}

void compare_struct__431(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__431VTable != NULL
        && pSimstruct__431VTable->m_version >= Scv612
        && pSimstruct__431VTable->m_pfnCompare != NULL) {
        if (pSimstruct__431VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__431VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__431VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__431_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__431_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__431VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__431VTable, nRetValue);
    }
    return 0;
}

int struct__431_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__431VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__431VTable, nRetValue);
    }
    return 0;
}

int get_struct__431_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__431_fields, 3, pfnStrAppend, pData);
}

int set_struct__431_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__431*)pValue)->nominal));
    set_kcg_int_default_value(&(((struct__431*)pValue)->d_min));
    set_kcg_int_default_value(&(((struct__431*)pValue)->d_max));
    return 1;
}

int check_struct__431_string(const char *str, char **endptr)
{
    static struct__431 rTemp;
    return string_to_struct__431(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__431_Utils = {
    struct__431_to_string,
    check_struct__431_string,
    string_to_struct__431,
    is_struct__431_double_conversion_allowed,
    struct__431_to_double,
    is_struct__431_long_convertion_allowed,
    struct__431_to_long,
    compare_struct__431,
    get_struct__431_signature,
    set_struct__431_default_value,
    sizeof(struct__431)
};

/****************************************************************
 ** struct__437 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__437VTable;

static SimFieldUtils struct__437_fields[] = {
    {"nid_engine", offsetof(struct__437,nid_engine), &_Type_kcg_int_Utils},
    {"nid_operational", offsetof(struct__437,nid_operational), &_Type_kcg_int_Utils},
    {"l_train", offsetof(struct__437,l_train), &_Type_kcg_int_Utils},
    {"d_baliseAntenna_2_frontend", offsetof(struct__437,d_baliseAntenna_2_frontend), &_Type_struct__431_Utils},
    {"d_frontend_2_rearend", offsetof(struct__437,d_frontend_2_rearend), &_Type_struct__431_Utils},
    {"locationAccuracy_DefaultValue", offsetof(struct__437,locationAccuracy_DefaultValue), &_Type_struct__431_Utils},
    {"centerDetectionAcc_DefaultValue", offsetof(struct__437,centerDetectionAcc_DefaultValue), &_Type_struct__431_Utils},
};

int struct__437_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__437VTable != NULL
        && pSimstruct__437VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__437VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__437_fields, 7, pfnStrAppend, pData);
}

int string_to_struct__437(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__437VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__437VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__437_fields, 7, endptr);
    }
    return nRet;
}

int is_struct__437_double_conversion_allowed()
{
    if (pSimstruct__437VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__437VTable);
    }
    return 0;
}

int is_struct__437_long_convertion_allowed()
{
    if (pSimstruct__437VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__437VTable);
    }
    return 0;
}

void compare_struct__437(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__437VTable != NULL
        && pSimstruct__437VTable->m_version >= Scv612
        && pSimstruct__437VTable->m_pfnCompare != NULL) {
        if (pSimstruct__437VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__437VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__437VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__437_fields, 7, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__437_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__437VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__437VTable, nRetValue);
    }
    return 0;
}

int struct__437_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__437VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__437VTable, nRetValue);
    }
    return 0;
}

int get_struct__437_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__437_fields, 7, pfnStrAppend, pData);
}

int set_struct__437_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__437*)pValue)->nid_engine));
    set_kcg_int_default_value(&(((struct__437*)pValue)->nid_operational));
    set_kcg_int_default_value(&(((struct__437*)pValue)->l_train));
    set_struct__431_default_value(&(((struct__437*)pValue)->d_baliseAntenna_2_frontend));
    set_struct__431_default_value(&(((struct__437*)pValue)->d_frontend_2_rearend));
    set_struct__431_default_value(&(((struct__437*)pValue)->locationAccuracy_DefaultValue));
    set_struct__431_default_value(&(((struct__437*)pValue)->centerDetectionAcc_DefaultValue));
    return 1;
}

int check_struct__437_string(const char *str, char **endptr)
{
    static struct__437 rTemp;
    return string_to_struct__437(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__437_Utils = {
    struct__437_to_string,
    check_struct__437_string,
    string_to_struct__437,
    is_struct__437_double_conversion_allowed,
    struct__437_to_double,
    is_struct__437_long_convertion_allowed,
    struct__437_to_long,
    compare_struct__437,
    get_struct__437_signature,
    set_struct__437_default_value,
    sizeof(struct__437)
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
 ** struct__450 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__450VTable;

static SimFieldUtils struct__450_fields[] = {
    {"m_voltage", offsetof(struct__450,m_voltage), &_Type_M_VOLTAGE_Utils},
    {"nid_ctraction", offsetof(struct__450,nid_ctraction), &_Type_kcg_int_Utils},
};

int struct__450_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__450VTable != NULL
        && pSimstruct__450VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__450VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__450_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__450(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__450VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__450VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__450_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__450_double_conversion_allowed()
{
    if (pSimstruct__450VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__450VTable);
    }
    return 0;
}

int is_struct__450_long_convertion_allowed()
{
    if (pSimstruct__450VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__450VTable);
    }
    return 0;
}

void compare_struct__450(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__450VTable != NULL
        && pSimstruct__450VTable->m_version >= Scv612
        && pSimstruct__450VTable->m_pfnCompare != NULL) {
        if (pSimstruct__450VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__450VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__450VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__450_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__450_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__450VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__450VTable, nRetValue);
    }
    return 0;
}

int struct__450_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__450VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__450VTable, nRetValue);
    }
    return 0;
}

int get_struct__450_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__450_fields, 2, pfnStrAppend, pData);
}

int set_struct__450_default_value(void *pValue)
{
    set_M_VOLTAGE_default_value(&(((struct__450*)pValue)->m_voltage));
    set_kcg_int_default_value(&(((struct__450*)pValue)->nid_ctraction));
    return 1;
}

int check_struct__450_string(const char *str, char **endptr)
{
    static struct__450 rTemp;
    return string_to_struct__450(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__450_Utils = {
    struct__450_to_string,
    check_struct__450_string,
    string_to_struct__450,
    is_struct__450_double_conversion_allowed,
    struct__450_to_double,
    is_struct__450_long_convertion_allowed,
    struct__450_to_long,
    compare_struct__450,
    get_struct__450_signature,
    set_struct__450_default_value,
    sizeof(struct__450)
};

/****************************************************************
 ** array__455 
 ****************************************************************/

struct SimTypeVTable *pSimarray__455VTable;

int array__455_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__455VTable != NULL
        && pSimarray__455VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__455VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__450_to_string, 3, sizeof(struct__450), pfnStrAppend, pData);
}

int string_to_array__455(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__455VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__455VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__450_Utils, 3, sizeof(struct__450), endptr);
    }
    return nRet;
}

int is_array__455_double_conversion_allowed()
{
    if (pSimarray__455VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__455VTable);
    }
    return 0;
}

int is_array__455_long_convertion_allowed()
{
    if (pSimarray__455VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__455VTable);
    }
    return 0;
}

void compare_array__455(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__455VTable != NULL
        && pSimarray__455VTable->m_version >= Scv612
        && pSimarray__455VTable->m_pfnCompare != NULL) {
        if (pSimarray__455VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__455VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__455VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__450, 3, sizeof(struct__450), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__455_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__455VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__455VTable, nRetValue);
    }
    return 0;
}

int array__455_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__455VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__455VTable, nRetValue);
    }
    return 0;
}

int get_array__455_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 3; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__450_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__455_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 3; i++)
        set_struct__450_default_value(&((struct__450*)pValue)[i]);
    return 1;
}

int check_array__455_string(const char *str, char **endptr)
{
    static array__455 rTemp;
    return string_to_array__455(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__455_Utils = {
    array__455_to_string,
    check_array__455_string,
    string_to_array__455,
    is_array__455_double_conversion_allowed,
    array__455_to_double,
    is_array__455_long_convertion_allowed,
    array__455_to_long,
    compare_array__455,
    get_array__455_signature,
    set_array__455_default_value,
    sizeof(array__455)
};

/****************************************************************
 ** struct__458 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__458VTable;

static SimFieldUtils struct__458_fields[] = {
    {"valid", offsetof(struct__458,valid), &_Type_kcg_bool_Utils},
    {"NC_CDTRAIN", offsetof(struct__458,NC_CDTRAIN), &_Type_NC_CDTRAIN_Utils},
    {"NC_TRAIN", offsetof(struct__458,NC_TRAIN), &_Type_NC_TRAIN_Utils},
    {"l_train", offsetof(struct__458,l_train), &_Type_kcg_int_Utils},
    {"v_maxtrain", offsetof(struct__458,v_maxtrain), &_Type_kcg_int_Utils},
    {"m_loadinggoage", offsetof(struct__458,m_loadinggoage), &_Type_M_LOADINGGAUGE_Utils},
    {"m_axleloadcat", offsetof(struct__458,m_axleloadcat), &_Type_M_AXLELOADCAT_Utils},
    {"m_airtight", offsetof(struct__458,m_airtight), &_Type_M_AIRTIGHT_Utils},
    {"n_axle", offsetof(struct__458,n_axle), &_Type_kcg_int_Utils},
    {"nIter_tractionIdentity", offsetof(struct__458,nIter_tractionIdentity), &_Type_kcg_int_Utils},
    {"tractionIdentity", offsetof(struct__458,tractionIdentity), &_Type_array__455_Utils},
    {"nIter_ntc", offsetof(struct__458,nIter_ntc), &_Type_kcg_int_Utils},
    {"nid_ntc", offsetof(struct__458,nid_ntc), &_Type_array_int_3_Utils},
};

int struct__458_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__458VTable != NULL
        && pSimstruct__458VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__458VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__458_fields, 13, pfnStrAppend, pData);
}

int string_to_struct__458(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__458VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__458VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__458_fields, 13, endptr);
    }
    return nRet;
}

int is_struct__458_double_conversion_allowed()
{
    if (pSimstruct__458VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__458VTable);
    }
    return 0;
}

int is_struct__458_long_convertion_allowed()
{
    if (pSimstruct__458VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__458VTable);
    }
    return 0;
}

void compare_struct__458(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__458VTable != NULL
        && pSimstruct__458VTable->m_version >= Scv612
        && pSimstruct__458VTable->m_pfnCompare != NULL) {
        if (pSimstruct__458VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__458VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__458VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__458_fields, 13, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__458_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__458VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__458VTable, nRetValue);
    }
    return 0;
}

int struct__458_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__458VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__458VTable, nRetValue);
    }
    return 0;
}

int get_struct__458_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__458_fields, 13, pfnStrAppend, pData);
}

int set_struct__458_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__458*)pValue)->valid));
    set_NC_CDTRAIN_default_value(&(((struct__458*)pValue)->NC_CDTRAIN));
    set_NC_TRAIN_default_value(&(((struct__458*)pValue)->NC_TRAIN));
    set_kcg_int_default_value(&(((struct__458*)pValue)->l_train));
    set_kcg_int_default_value(&(((struct__458*)pValue)->v_maxtrain));
    set_M_LOADINGGAUGE_default_value(&(((struct__458*)pValue)->m_loadinggoage));
    set_M_AXLELOADCAT_default_value(&(((struct__458*)pValue)->m_axleloadcat));
    set_M_AIRTIGHT_default_value(&(((struct__458*)pValue)->m_airtight));
    set_kcg_int_default_value(&(((struct__458*)pValue)->n_axle));
    set_kcg_int_default_value(&(((struct__458*)pValue)->nIter_tractionIdentity));
    set_array__455_default_value(&(((struct__458*)pValue)->tractionIdentity));
    set_kcg_int_default_value(&(((struct__458*)pValue)->nIter_ntc));
    set_array_int_3_default_value(&(((struct__458*)pValue)->nid_ntc));
    return 1;
}

int check_struct__458_string(const char *str, char **endptr)
{
    static struct__458 rTemp;
    return string_to_struct__458(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__458_Utils = {
    struct__458_to_string,
    check_struct__458_string,
    string_to_struct__458,
    is_struct__458_double_conversion_allowed,
    struct__458_to_double,
    is_struct__458_long_convertion_allowed,
    struct__458_to_long,
    compare_struct__458,
    get_struct__458_signature,
    set_struct__458_default_value,
    sizeof(struct__458)
};

/****************************************************************
 ** struct__474 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__474VTable;

static SimFieldUtils struct__474_fields[] = {
    {"valid", offsetof(struct__474,valid), &_Type_kcg_bool_Utils},
    {"transitionInformation", offsetof(struct__474,transitionInformation), &_Type_kcg_int_Utils},
};

int struct__474_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__474VTable != NULL
        && pSimstruct__474VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__474VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__474_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__474(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__474VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__474VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__474_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__474_double_conversion_allowed()
{
    if (pSimstruct__474VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__474VTable);
    }
    return 0;
}

int is_struct__474_long_convertion_allowed()
{
    if (pSimstruct__474VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__474VTable);
    }
    return 0;
}

void compare_struct__474(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__474VTable != NULL
        && pSimstruct__474VTable->m_version >= Scv612
        && pSimstruct__474VTable->m_pfnCompare != NULL) {
        if (pSimstruct__474VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__474VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__474VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__474_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__474_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__474VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__474VTable, nRetValue);
    }
    return 0;
}

int struct__474_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__474VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__474VTable, nRetValue);
    }
    return 0;
}

int get_struct__474_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__474_fields, 2, pfnStrAppend, pData);
}

int set_struct__474_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__474*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__474*)pValue)->transitionInformation));
    return 1;
}

int check_struct__474_string(const char *str, char **endptr)
{
    static struct__474 rTemp;
    return string_to_struct__474(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__474_Utils = {
    struct__474_to_string,
    check_struct__474_string,
    string_to_struct__474,
    is_struct__474_double_conversion_allowed,
    struct__474_to_double,
    is_struct__474_long_convertion_allowed,
    struct__474_to_long,
    compare_struct__474,
    get_struct__474_signature,
    set_struct__474_default_value,
    sizeof(struct__474)
};

/****************************************************************
 ** struct__479 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__479VTable;

static SimFieldUtils struct__479_fields[] = {
    {"valid", offsetof(struct__479,valid), &_Type_kcg_bool_Utils},
    {"TrainRunningNumber", offsetof(struct__479,TrainRunningNumber), &_Type_kcg_int_Utils},
};

int struct__479_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__479VTable != NULL
        && pSimstruct__479VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__479VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__479_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__479(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__479VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__479VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__479_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__479_double_conversion_allowed()
{
    if (pSimstruct__479VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__479VTable);
    }
    return 0;
}

int is_struct__479_long_convertion_allowed()
{
    if (pSimstruct__479VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__479VTable);
    }
    return 0;
}

void compare_struct__479(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__479VTable != NULL
        && pSimstruct__479VTable->m_version >= Scv612
        && pSimstruct__479VTable->m_pfnCompare != NULL) {
        if (pSimstruct__479VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__479VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__479VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__479_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__479_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__479VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__479VTable, nRetValue);
    }
    return 0;
}

int struct__479_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__479VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__479VTable, nRetValue);
    }
    return 0;
}

int get_struct__479_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__479_fields, 2, pfnStrAppend, pData);
}

int set_struct__479_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__479*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__479*)pValue)->TrainRunningNumber));
    return 1;
}

int check_struct__479_string(const char *str, char **endptr)
{
    static struct__479 rTemp;
    return string_to_struct__479(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__479_Utils = {
    struct__479_to_string,
    check_struct__479_string,
    string_to_struct__479,
    is_struct__479_double_conversion_allowed,
    struct__479_to_double,
    is_struct__479_long_convertion_allowed,
    struct__479_to_long,
    compare_struct__479,
    get_struct__479_signature,
    set_struct__479_default_value,
    sizeof(struct__479)
};

/****************************************************************
 ** struct__484 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__484VTable;

static SimFieldUtils struct__484_fields[] = {
    {"valid", offsetof(struct__484,valid), &_Type_kcg_bool_Utils},
    {"M_ERROR", offsetof(struct__484,M_ERROR), &_Type_M_ERROR_Utils},
};

int struct__484_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__484VTable != NULL
        && pSimstruct__484VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__484VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__484_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__484(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__484VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__484VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__484_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__484_double_conversion_allowed()
{
    if (pSimstruct__484VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__484VTable);
    }
    return 0;
}

int is_struct__484_long_convertion_allowed()
{
    if (pSimstruct__484VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__484VTable);
    }
    return 0;
}

void compare_struct__484(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__484VTable != NULL
        && pSimstruct__484VTable->m_version >= Scv612
        && pSimstruct__484VTable->m_pfnCompare != NULL) {
        if (pSimstruct__484VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__484VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__484VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__484_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__484_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__484VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__484VTable, nRetValue);
    }
    return 0;
}

int struct__484_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__484VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__484VTable, nRetValue);
    }
    return 0;
}

int get_struct__484_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__484_fields, 2, pfnStrAppend, pData);
}

int set_struct__484_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__484*)pValue)->valid));
    set_M_ERROR_default_value(&(((struct__484*)pValue)->M_ERROR));
    return 1;
}

int check_struct__484_string(const char *str, char **endptr)
{
    static struct__484 rTemp;
    return string_to_struct__484(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__484_Utils = {
    struct__484_to_string,
    check_struct__484_string,
    string_to_struct__484,
    is_struct__484_double_conversion_allowed,
    struct__484_to_double,
    is_struct__484_long_convertion_allowed,
    struct__484_to_long,
    compare_struct__484,
    get_struct__484_signature,
    set_struct__484_default_value,
    sizeof(struct__484)
};

/****************************************************************
 ** array_int_15 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_15VTable;

int array_int_15_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_15VTable != NULL
        && pSimarray_int_15VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_15VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 15, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_15(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_15VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_15VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 15, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_15_double_conversion_allowed()
{
    if (pSimarray_int_15VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_15VTable);
    }
    return 0;
}

int is_array_int_15_long_convertion_allowed()
{
    if (pSimarray_int_15VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_15VTable);
    }
    return 0;
}

void compare_array_int_15(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_15VTable != NULL
        && pSimarray_int_15VTable->m_version >= Scv612
        && pSimarray_int_15VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_15VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_15VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_15VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 15, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_15_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_15VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_15VTable, nRetValue);
    }
    return 0;
}

int array_int_15_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_15VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_15VTable, nRetValue);
    }
    return 0;
}

int get_array_int_15_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 15; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_15_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 15; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_15_string(const char *str, char **endptr)
{
    static array_int_15 rTemp;
    return string_to_array_int_15(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_15_Utils = {
    array_int_15_to_string,
    check_array_int_15_string,
    string_to_array_int_15,
    is_array_int_15_double_conversion_allowed,
    array_int_15_to_double,
    is_array_int_15_long_convertion_allowed,
    array_int_15_to_long,
    compare_array_int_15,
    get_array_int_15_signature,
    set_array_int_15_default_value,
    sizeof(array_int_15)
};

/****************************************************************
 ** struct__492 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__492VTable;

static SimFieldUtils struct__492_fields[] = {
    {"valid", offsetof(struct__492,valid), &_Type_kcg_bool_Utils},
    {"telephoneNumber", offsetof(struct__492,telephoneNumber), &_Type_array_int_15_Utils},
};

int struct__492_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__492VTable != NULL
        && pSimstruct__492VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__492VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__492_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__492(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__492VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__492VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__492_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__492_double_conversion_allowed()
{
    if (pSimstruct__492VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__492VTable);
    }
    return 0;
}

int is_struct__492_long_convertion_allowed()
{
    if (pSimstruct__492VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__492VTable);
    }
    return 0;
}

void compare_struct__492(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__492VTable != NULL
        && pSimstruct__492VTable->m_version >= Scv612
        && pSimstruct__492VTable->m_pfnCompare != NULL) {
        if (pSimstruct__492VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__492VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__492VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__492_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__492_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__492VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__492VTable, nRetValue);
    }
    return 0;
}

int struct__492_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__492VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__492VTable, nRetValue);
    }
    return 0;
}

int get_struct__492_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__492_fields, 2, pfnStrAppend, pData);
}

int set_struct__492_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__492*)pValue)->valid));
    set_array_int_15_default_value(&(((struct__492*)pValue)->telephoneNumber));
    return 1;
}

int check_struct__492_string(const char *str, char **endptr)
{
    static struct__492 rTemp;
    return string_to_struct__492(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__492_Utils = {
    struct__492_to_string,
    check_struct__492_string,
    string_to_struct__492,
    is_struct__492_double_conversion_allowed,
    struct__492_to_double,
    is_struct__492_long_convertion_allowed,
    struct__492_to_long,
    compare_struct__492,
    get_struct__492_signature,
    set_struct__492_default_value,
    sizeof(struct__492)
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
    return pConverter->m_pfnArrayToString(pValue, struct__492_to_string, 1, sizeof(struct__492), pfnStrAppend, pData);
}

int string_to_array__497(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__497VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__497VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__492_Utils, 1, sizeof(struct__492), endptr);
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
                compare_struct__492, 1, sizeof(struct__492), pData, pszPath, pfnStrListAppend, pListErrPaths);
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
        get_struct__492_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__497_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__492_default_value(&((struct__492*)pValue)[i]);
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
 ** struct__500 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__500VTable;

static SimFieldUtils struct__500_fields[] = {
    {"valid", offsetof(struct__500,valid), &_Type_kcg_bool_Utils},
    {"number", offsetof(struct__500,number), &_Type_kcg_int_Utils},
    {"aNID_RADIO", offsetof(struct__500,aNID_RADIO), &_Type_array__497_Utils},
};

int struct__500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__500VTable != NULL
        && pSimstruct__500VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__500VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__500_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__500(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__500VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__500VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__500_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__500_double_conversion_allowed()
{
    if (pSimstruct__500VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__500VTable);
    }
    return 0;
}

int is_struct__500_long_convertion_allowed()
{
    if (pSimstruct__500VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__500VTable);
    }
    return 0;
}

void compare_struct__500(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__500VTable != NULL
        && pSimstruct__500VTable->m_version >= Scv612
        && pSimstruct__500VTable->m_pfnCompare != NULL) {
        if (pSimstruct__500VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__500VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__500VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__500_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__500_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__500VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__500VTable, nRetValue);
    }
    return 0;
}

int struct__500_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__500VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__500VTable, nRetValue);
    }
    return 0;
}

int get_struct__500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__500_fields, 3, pfnStrAppend, pData);
}

int set_struct__500_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__500*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__500*)pValue)->number));
    set_array__497_default_value(&(((struct__500*)pValue)->aNID_RADIO));
    return 1;
}

int check_struct__500_string(const char *str, char **endptr)
{
    static struct__500 rTemp;
    return string_to_struct__500(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__500_Utils = {
    struct__500_to_string,
    check_struct__500_string,
    string_to_struct__500,
    is_struct__500_double_conversion_allowed,
    struct__500_to_double,
    is_struct__500_long_convertion_allowed,
    struct__500_to_long,
    compare_struct__500,
    get_struct__500_signature,
    set_struct__500_default_value,
    sizeof(struct__500)
};

/****************************************************************
 ** struct__506 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__506VTable;

static SimFieldUtils struct__506_fields[] = {
    {"NID_PACKET", offsetof(struct__506,NID_PACKET), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__506,L_PACKET), &_Type_kcg_int_Utils},
    {"qscale", offsetof(struct__506,qscale), &_Type_Q_SCALE_Utils},
    {"NID_LRBG", offsetof(struct__506,NID_LRBG), &_Type_kcg_int_Utils},
    {"NID_PRVLRBG", offsetof(struct__506,NID_PRVLRBG), &_Type_kcg_int_Utils},
    {"D_LRBG", offsetof(struct__506,D_LRBG), &_Type_kcg_int_Utils},
    {"dirlrbg", offsetof(struct__506,dirlrbg), &_Type_Q_DIRLRBG_Utils},
    {"dlrbg", offsetof(struct__506,dlrbg), &_Type_Q_DLRBG_Utils},
    {"L_DOUBTOVER", offsetof(struct__506,L_DOUBTOVER), &_Type_kcg_int_Utils},
    {"L_DOUBTUNDER", offsetof(struct__506,L_DOUBTUNDER), &_Type_kcg_int_Utils},
    {"length", offsetof(struct__506,length), &_Type_Q_LENGTH_Utils},
    {"L_TRAININT", offsetof(struct__506,L_TRAININT), &_Type_kcg_int_Utils},
    {"V_TRAIN", offsetof(struct__506,V_TRAIN), &_Type_kcg_int_Utils},
    {"dirtrain", offsetof(struct__506,dirtrain), &_Type_Q_DIRTRAIN_Utils},
    {"mode", offsetof(struct__506,mode), &_Type_M_MODE_Utils},
    {"level", offsetof(struct__506,level), &_Type_M_LEVEL_Utils},
    {"NID_NTC", offsetof(struct__506,NID_NTC), &_Type_kcg_int_Utils},
};

int struct__506_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__506VTable != NULL
        && pSimstruct__506VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__506VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__506_fields, 17, pfnStrAppend, pData);
}

int string_to_struct__506(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__506VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__506VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__506_fields, 17, endptr);
    }
    return nRet;
}

int is_struct__506_double_conversion_allowed()
{
    if (pSimstruct__506VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__506VTable);
    }
    return 0;
}

int is_struct__506_long_convertion_allowed()
{
    if (pSimstruct__506VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__506VTable);
    }
    return 0;
}

void compare_struct__506(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__506VTable != NULL
        && pSimstruct__506VTable->m_version >= Scv612
        && pSimstruct__506VTable->m_pfnCompare != NULL) {
        if (pSimstruct__506VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__506VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__506VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__506_fields, 17, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__506_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__506VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__506VTable, nRetValue);
    }
    return 0;
}

int struct__506_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__506VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__506VTable, nRetValue);
    }
    return 0;
}

int get_struct__506_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__506_fields, 17, pfnStrAppend, pData);
}

int set_struct__506_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__506*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__506*)pValue)->L_PACKET));
    set_Q_SCALE_default_value(&(((struct__506*)pValue)->qscale));
    set_kcg_int_default_value(&(((struct__506*)pValue)->NID_LRBG));
    set_kcg_int_default_value(&(((struct__506*)pValue)->NID_PRVLRBG));
    set_kcg_int_default_value(&(((struct__506*)pValue)->D_LRBG));
    set_Q_DIRLRBG_default_value(&(((struct__506*)pValue)->dirlrbg));
    set_Q_DLRBG_default_value(&(((struct__506*)pValue)->dlrbg));
    set_kcg_int_default_value(&(((struct__506*)pValue)->L_DOUBTOVER));
    set_kcg_int_default_value(&(((struct__506*)pValue)->L_DOUBTUNDER));
    set_Q_LENGTH_default_value(&(((struct__506*)pValue)->length));
    set_kcg_int_default_value(&(((struct__506*)pValue)->L_TRAININT));
    set_kcg_int_default_value(&(((struct__506*)pValue)->V_TRAIN));
    set_Q_DIRTRAIN_default_value(&(((struct__506*)pValue)->dirtrain));
    set_M_MODE_default_value(&(((struct__506*)pValue)->mode));
    set_M_LEVEL_default_value(&(((struct__506*)pValue)->level));
    set_kcg_int_default_value(&(((struct__506*)pValue)->NID_NTC));
    return 1;
}

int check_struct__506_string(const char *str, char **endptr)
{
    static struct__506 rTemp;
    return string_to_struct__506(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__506_Utils = {
    struct__506_to_string,
    check_struct__506_string,
    string_to_struct__506,
    is_struct__506_double_conversion_allowed,
    struct__506_to_double,
    is_struct__506_long_convertion_allowed,
    struct__506_to_long,
    compare_struct__506,
    get_struct__506_signature,
    set_struct__506_default_value,
    sizeof(struct__506)
};

/****************************************************************
 ** struct__526 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__526VTable;

static SimFieldUtils struct__526_fields[] = {
    {"valid", offsetof(struct__526,valid), &_Type_kcg_bool_Utils},
    {"packet1", offsetof(struct__526,packet1), &_Type_struct__506_Utils},
};

int struct__526_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__526VTable != NULL
        && pSimstruct__526VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__526VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__526_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__526(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__526VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__526VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__526_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__526_double_conversion_allowed()
{
    if (pSimstruct__526VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__526VTable);
    }
    return 0;
}

int is_struct__526_long_convertion_allowed()
{
    if (pSimstruct__526VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__526VTable);
    }
    return 0;
}

void compare_struct__526(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__526VTable != NULL
        && pSimstruct__526VTable->m_version >= Scv612
        && pSimstruct__526VTable->m_pfnCompare != NULL) {
        if (pSimstruct__526VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__526VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__526VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__526_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__526_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__526VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__526VTable, nRetValue);
    }
    return 0;
}

int struct__526_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__526VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__526VTable, nRetValue);
    }
    return 0;
}

int get_struct__526_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__526_fields, 2, pfnStrAppend, pData);
}

int set_struct__526_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__526*)pValue)->valid));
    set_struct__506_default_value(&(((struct__526*)pValue)->packet1));
    return 1;
}

int check_struct__526_string(const char *str, char **endptr)
{
    static struct__526 rTemp;
    return string_to_struct__526(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__526_Utils = {
    struct__526_to_string,
    check_struct__526_string,
    string_to_struct__526,
    is_struct__526_double_conversion_allowed,
    struct__526_to_double,
    is_struct__526_long_convertion_allowed,
    struct__526_to_long,
    compare_struct__526,
    get_struct__526_signature,
    set_struct__526_default_value,
    sizeof(struct__526)
};

/****************************************************************
 ** struct__531 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__531VTable;

static SimFieldUtils struct__531_fields[] = {
    {"NID_PACKET", offsetof(struct__531,NID_PACKET), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__531,L_PACKET), &_Type_kcg_int_Utils},
    {"qscale", offsetof(struct__531,qscale), &_Type_Q_SCALE_Utils},
    {"NID_LRBG", offsetof(struct__531,NID_LRBG), &_Type_kcg_int_Utils},
    {"D_LRBG", offsetof(struct__531,D_LRBG), &_Type_kcg_int_Utils},
    {"dirlrbg", offsetof(struct__531,dirlrbg), &_Type_Q_DIRLRBG_Utils},
    {"dlrbg", offsetof(struct__531,dlrbg), &_Type_Q_DLRBG_Utils},
    {"L_DOUBTOVER", offsetof(struct__531,L_DOUBTOVER), &_Type_kcg_int_Utils},
    {"L_DOUBTUNDER", offsetof(struct__531,L_DOUBTUNDER), &_Type_kcg_int_Utils},
    {"length", offsetof(struct__531,length), &_Type_Q_LENGTH_Utils},
    {"L_TRAININT", offsetof(struct__531,L_TRAININT), &_Type_kcg_int_Utils},
    {"V_TRAIN", offsetof(struct__531,V_TRAIN), &_Type_kcg_int_Utils},
    {"dirtrain", offsetof(struct__531,dirtrain), &_Type_Q_DIRTRAIN_Utils},
    {"mode", offsetof(struct__531,mode), &_Type_M_MODE_Utils},
    {"level", offsetof(struct__531,level), &_Type_M_LEVEL_Utils},
    {"NID_NTC", offsetof(struct__531,NID_NTC), &_Type_kcg_int_Utils},
};

int struct__531_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__531VTable != NULL
        && pSimstruct__531VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__531VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__531_fields, 16, pfnStrAppend, pData);
}

int string_to_struct__531(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__531VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__531VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__531_fields, 16, endptr);
    }
    return nRet;
}

int is_struct__531_double_conversion_allowed()
{
    if (pSimstruct__531VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__531VTable);
    }
    return 0;
}

int is_struct__531_long_convertion_allowed()
{
    if (pSimstruct__531VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__531VTable);
    }
    return 0;
}

void compare_struct__531(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__531VTable != NULL
        && pSimstruct__531VTable->m_version >= Scv612
        && pSimstruct__531VTable->m_pfnCompare != NULL) {
        if (pSimstruct__531VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__531VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__531VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__531_fields, 16, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__531_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__531VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__531VTable, nRetValue);
    }
    return 0;
}

int struct__531_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__531VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__531VTable, nRetValue);
    }
    return 0;
}

int get_struct__531_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__531_fields, 16, pfnStrAppend, pData);
}

int set_struct__531_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__531*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__531*)pValue)->L_PACKET));
    set_Q_SCALE_default_value(&(((struct__531*)pValue)->qscale));
    set_kcg_int_default_value(&(((struct__531*)pValue)->NID_LRBG));
    set_kcg_int_default_value(&(((struct__531*)pValue)->D_LRBG));
    set_Q_DIRLRBG_default_value(&(((struct__531*)pValue)->dirlrbg));
    set_Q_DLRBG_default_value(&(((struct__531*)pValue)->dlrbg));
    set_kcg_int_default_value(&(((struct__531*)pValue)->L_DOUBTOVER));
    set_kcg_int_default_value(&(((struct__531*)pValue)->L_DOUBTUNDER));
    set_Q_LENGTH_default_value(&(((struct__531*)pValue)->length));
    set_kcg_int_default_value(&(((struct__531*)pValue)->L_TRAININT));
    set_kcg_int_default_value(&(((struct__531*)pValue)->V_TRAIN));
    set_Q_DIRTRAIN_default_value(&(((struct__531*)pValue)->dirtrain));
    set_M_MODE_default_value(&(((struct__531*)pValue)->mode));
    set_M_LEVEL_default_value(&(((struct__531*)pValue)->level));
    set_kcg_int_default_value(&(((struct__531*)pValue)->NID_NTC));
    return 1;
}

int check_struct__531_string(const char *str, char **endptr)
{
    static struct__531 rTemp;
    return string_to_struct__531(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__531_Utils = {
    struct__531_to_string,
    check_struct__531_string,
    string_to_struct__531,
    is_struct__531_double_conversion_allowed,
    struct__531_to_double,
    is_struct__531_long_convertion_allowed,
    struct__531_to_long,
    compare_struct__531,
    get_struct__531_signature,
    set_struct__531_default_value,
    sizeof(struct__531)
};

/****************************************************************
 ** struct__550 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__550VTable;

static SimFieldUtils struct__550_fields[] = {
    {"valid", offsetof(struct__550,valid), &_Type_kcg_bool_Utils},
    {"packet0", offsetof(struct__550,packet0), &_Type_struct__531_Utils},
};

int struct__550_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__550VTable != NULL
        && pSimstruct__550VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__550VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__550_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__550(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__550VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__550VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__550_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__550_double_conversion_allowed()
{
    if (pSimstruct__550VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__550VTable);
    }
    return 0;
}

int is_struct__550_long_convertion_allowed()
{
    if (pSimstruct__550VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__550VTable);
    }
    return 0;
}

void compare_struct__550(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__550VTable != NULL
        && pSimstruct__550VTable->m_version >= Scv612
        && pSimstruct__550VTable->m_pfnCompare != NULL) {
        if (pSimstruct__550VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__550VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__550VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__550_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__550_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__550VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__550VTable, nRetValue);
    }
    return 0;
}

int struct__550_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__550VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__550VTable, nRetValue);
    }
    return 0;
}

int get_struct__550_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__550_fields, 2, pfnStrAppend, pData);
}

int set_struct__550_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__550*)pValue)->valid));
    set_struct__531_default_value(&(((struct__550*)pValue)->packet0));
    return 1;
}

int check_struct__550_string(const char *str, char **endptr)
{
    static struct__550 rTemp;
    return string_to_struct__550(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__550_Utils = {
    struct__550_to_string,
    check_struct__550_string,
    string_to_struct__550,
    is_struct__550_double_conversion_allowed,
    struct__550_to_double,
    is_struct__550_long_convertion_allowed,
    struct__550_to_long,
    compare_struct__550,
    get_struct__550_signature,
    set_struct__550_default_value,
    sizeof(struct__550)
};

/****************************************************************
 ** struct__555 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__555VTable;

static SimFieldUtils struct__555_fields[] = {
    {"p0", offsetof(struct__555,p0), &_Type_struct__550_Utils},
    {"p1", offsetof(struct__555,p1), &_Type_struct__526_Utils},
    {"p3", offsetof(struct__555,p3), &_Type_struct__500_Utils},
    {"p4", offsetof(struct__555,p4), &_Type_struct__484_Utils},
    {"p5", offsetof(struct__555,p5), &_Type_struct__479_Utils},
    {"p9", offsetof(struct__555,p9), &_Type_struct__474_Utils},
    {"p11", offsetof(struct__555,p11), &_Type_struct__458_Utils},
};

int struct__555_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__555VTable != NULL
        && pSimstruct__555VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__555VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__555_fields, 7, pfnStrAppend, pData);
}

int string_to_struct__555(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__555VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__555VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__555_fields, 7, endptr);
    }
    return nRet;
}

int is_struct__555_double_conversion_allowed()
{
    if (pSimstruct__555VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__555VTable);
    }
    return 0;
}

int is_struct__555_long_convertion_allowed()
{
    if (pSimstruct__555VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__555VTable);
    }
    return 0;
}

void compare_struct__555(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__555VTable != NULL
        && pSimstruct__555VTable->m_version >= Scv612
        && pSimstruct__555VTable->m_pfnCompare != NULL) {
        if (pSimstruct__555VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__555VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__555VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__555_fields, 7, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__555_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__555VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__555VTable, nRetValue);
    }
    return 0;
}

int struct__555_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__555VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__555VTable, nRetValue);
    }
    return 0;
}

int get_struct__555_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__555_fields, 7, pfnStrAppend, pData);
}

int set_struct__555_default_value(void *pValue)
{
    set_struct__550_default_value(&(((struct__555*)pValue)->p0));
    set_struct__526_default_value(&(((struct__555*)pValue)->p1));
    set_struct__500_default_value(&(((struct__555*)pValue)->p3));
    set_struct__484_default_value(&(((struct__555*)pValue)->p4));
    set_struct__479_default_value(&(((struct__555*)pValue)->p5));
    set_struct__474_default_value(&(((struct__555*)pValue)->p9));
    set_struct__458_default_value(&(((struct__555*)pValue)->p11));
    return 1;
}

int check_struct__555_string(const char *str, char **endptr)
{
    static struct__555 rTemp;
    return string_to_struct__555(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__555_Utils = {
    struct__555_to_string,
    check_struct__555_string,
    string_to_struct__555,
    is_struct__555_double_conversion_allowed,
    struct__555_to_double,
    is_struct__555_long_convertion_allowed,
    struct__555_to_long,
    compare_struct__555,
    get_struct__555_signature,
    set_struct__555_default_value,
    sizeof(struct__555)
};

/****************************************************************
 ** struct__565 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__565VTable;

static SimFieldUtils struct__565_fields[] = {
    {"present", offsetof(struct__565,present), &_Type_kcg_bool_Utils},
    {"nid_message", offsetof(struct__565,nid_message), &_Type_kcg_int_Utils},
    {"t_train", offsetof(struct__565,t_train), &_Type_kcg_real_Utils},
    {"nid_engine", offsetof(struct__565,nid_engine), &_Type_kcg_int_Utils},
    {"xQ_MARQSTREASON", offsetof(struct__565,xQ_MARQSTREASON), &_Type_Q_MARQSTREASON_Utils},
    {"xT_TRAIN", offsetof(struct__565,xT_TRAIN), &_Type_kcg_real_Utils},
    {"xNID_EM", offsetof(struct__565,xNID_EM), &_Type_kcg_int_Utils},
    {"xQ_EMERGENCYSTOP", offsetof(struct__565,xQ_EMERGENCYSTOP), &_Type_Q_EMERGENCYSTOP_Utils},
    {"xNID_TEXTMESSAGE", offsetof(struct__565,xNID_TEXTMESSAGE), &_Type_kcg_int_Utils},
};

int struct__565_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__565VTable != NULL
        && pSimstruct__565VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__565VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__565_fields, 9, pfnStrAppend, pData);
}

int string_to_struct__565(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__565VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__565VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__565_fields, 9, endptr);
    }
    return nRet;
}

int is_struct__565_double_conversion_allowed()
{
    if (pSimstruct__565VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__565VTable);
    }
    return 0;
}

int is_struct__565_long_convertion_allowed()
{
    if (pSimstruct__565VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__565VTable);
    }
    return 0;
}

void compare_struct__565(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__565VTable != NULL
        && pSimstruct__565VTable->m_version >= Scv612
        && pSimstruct__565VTable->m_pfnCompare != NULL) {
        if (pSimstruct__565VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__565VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__565VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__565_fields, 9, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__565_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__565VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__565VTable, nRetValue);
    }
    return 0;
}

int struct__565_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__565VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__565VTable, nRetValue);
    }
    return 0;
}

int get_struct__565_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__565_fields, 9, pfnStrAppend, pData);
}

int set_struct__565_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__565*)pValue)->present));
    set_kcg_int_default_value(&(((struct__565*)pValue)->nid_message));
    set_kcg_real_default_value(&(((struct__565*)pValue)->t_train));
    set_kcg_int_default_value(&(((struct__565*)pValue)->nid_engine));
    set_Q_MARQSTREASON_default_value(&(((struct__565*)pValue)->xQ_MARQSTREASON));
    set_kcg_real_default_value(&(((struct__565*)pValue)->xT_TRAIN));
    set_kcg_int_default_value(&(((struct__565*)pValue)->xNID_EM));
    set_Q_EMERGENCYSTOP_default_value(&(((struct__565*)pValue)->xQ_EMERGENCYSTOP));
    set_kcg_int_default_value(&(((struct__565*)pValue)->xNID_TEXTMESSAGE));
    return 1;
}

int check_struct__565_string(const char *str, char **endptr)
{
    static struct__565 rTemp;
    return string_to_struct__565(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__565_Utils = {
    struct__565_to_string,
    check_struct__565_string,
    string_to_struct__565,
    is_struct__565_double_conversion_allowed,
    struct__565_to_double,
    is_struct__565_long_convertion_allowed,
    struct__565_to_long,
    compare_struct__565,
    get_struct__565_signature,
    set_struct__565_default_value,
    sizeof(struct__565)
};

/****************************************************************
 ** struct__577 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__577VTable;

static SimFieldUtils struct__577_fields[] = {
    {"present", offsetof(struct__577,present), &_Type_kcg_bool_Utils},
    {"header", offsetof(struct__577,header), &_Type_struct__565_Utils},
    {"packets", offsetof(struct__577,packets), &_Type_struct__555_Utils},
};

int struct__577_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__577VTable != NULL
        && pSimstruct__577VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__577VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__577_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__577(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__577VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__577VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__577_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__577_double_conversion_allowed()
{
    if (pSimstruct__577VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__577VTable);
    }
    return 0;
}

int is_struct__577_long_convertion_allowed()
{
    if (pSimstruct__577VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__577VTable);
    }
    return 0;
}

void compare_struct__577(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__577VTable != NULL
        && pSimstruct__577VTable->m_version >= Scv612
        && pSimstruct__577VTable->m_pfnCompare != NULL) {
        if (pSimstruct__577VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__577VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__577VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__577_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__577_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__577VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__577VTable, nRetValue);
    }
    return 0;
}

int struct__577_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__577VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__577VTable, nRetValue);
    }
    return 0;
}

int get_struct__577_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__577_fields, 3, pfnStrAppend, pData);
}

int set_struct__577_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__577*)pValue)->present));
    set_struct__565_default_value(&(((struct__577*)pValue)->header));
    set_struct__555_default_value(&(((struct__577*)pValue)->packets));
    return 1;
}

int check_struct__577_string(const char *str, char **endptr)
{
    static struct__577 rTemp;
    return string_to_struct__577(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__577_Utils = {
    struct__577_to_string,
    check_struct__577_string,
    string_to_struct__577,
    is_struct__577_double_conversion_allowed,
    struct__577_to_double,
    is_struct__577_long_convertion_allowed,
    struct__577_to_long,
    compare_struct__577,
    get_struct__577_signature,
    set_struct__577_default_value,
    sizeof(struct__577)
};

/****************************************************************
 ** Q_MARQSTREASON 
 ****************************************************************/

struct SimTypeVTable *pSimQ_MARQSTREASONVTable;

static SimEnumValUtils Q_MARQSTREASON_values[] = {
    { "Q_MARQSTREASON_Start_selected_by_driver", Q_MARQSTREASON_Start_selected_by_driver},
    { "Q_MARQSTREASON_Start_selected_by_driver", Q_MARQSTREASON_Start_selected_by_driver},
    { "Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached", Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached},
    { "Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached", Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached},
    { "Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached", Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached},
    { "Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached", Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached},
    { "Q_MARQSTREASON_Track_description_deleted", Q_MARQSTREASON_Track_description_deleted},
    { "Q_MARQSTREASON_Track_description_deleted", Q_MARQSTREASON_Track_description_deleted},
    { "Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location", Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location},
    { "Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location", Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location},
};
const int Q_MARQSTREASON_nb_values = 10;

int Q_MARQSTREASON_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_MARQSTREASONVTable != NULL
        && pSimQ_MARQSTREASONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_MARQSTREASONVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_MARQSTREASON*)pValue, Q_MARQSTREASON_values, Q_MARQSTREASON_nb_values, pfnStrAppend, pData); 
}

int string_to_Q_MARQSTREASON(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_MARQSTREASONVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_MARQSTREASONVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_MARQSTREASON_values, Q_MARQSTREASON_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_MARQSTREASON*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_MARQSTREASON_double_conversion_allowed()
{
    if (pSimQ_MARQSTREASONVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_MARQSTREASONVTable);
    }
    return 1;
}

int is_Q_MARQSTREASON_long_convertion_allowed()
{
    if (pSimQ_MARQSTREASONVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_MARQSTREASONVTable);
    }
    return 1;
}

void compare_Q_MARQSTREASON(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_MARQSTREASONVTable != NULL
        && pSimQ_MARQSTREASONVTable->m_version >= Scv612
        && pSimQ_MARQSTREASONVTable->m_pfnCompare != NULL) {
        if (pSimQ_MARQSTREASONVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_MARQSTREASONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_MARQSTREASONVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_MARQSTREASON*)pValue1), (int)(*(Q_MARQSTREASON*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_MARQSTREASON_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_MARQSTREASONVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_MARQSTREASONVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_MARQSTREASON*)pValue);
    return 1;
}

int Q_MARQSTREASON_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_MARQSTREASONVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_MARQSTREASONVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_MARQSTREASON*)pValue);
    return 1;
}

int get_Q_MARQSTREASON_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_MARQSTREASON_values, Q_MARQSTREASON_nb_values, pfnStrAppend, pData);
}

int set_Q_MARQSTREASON_default_value(void *pValue)
{
    *(Q_MARQSTREASON*)pValue = Q_MARQSTREASON_Start_selected_by_driver;
    return 1;
}

int check_Q_MARQSTREASON_string(const char *str, char **endptr)
{
    static Q_MARQSTREASON rTemp;
    return string_to_Q_MARQSTREASON(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_MARQSTREASON_Utils = {
    Q_MARQSTREASON_to_string,
    check_Q_MARQSTREASON_string,
    string_to_Q_MARQSTREASON,
    is_Q_MARQSTREASON_double_conversion_allowed,
    Q_MARQSTREASON_to_double,
    is_Q_MARQSTREASON_long_convertion_allowed,
    Q_MARQSTREASON_to_long,
    compare_Q_MARQSTREASON,
    get_Q_MARQSTREASON_signature,
    set_Q_MARQSTREASON_default_value,
    sizeof(Q_MARQSTREASON)
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
 ** NID_EM 
 ****************************************************************/

struct SimTypeVTable *pSimNID_EMVTable;

int NID_EM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_EMVTable != NULL
        && pSimNID_EMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_EMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_EM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_EMVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_EMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_EM_double_conversion_allowed()
{
    if (pSimNID_EMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_EMVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_EM_long_convertion_allowed()
{
    if (pSimNID_EMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_EMVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_EM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_EMVTable != NULL
        && pSimNID_EMVTable->m_version >= Scv612
        && pSimNID_EMVTable->m_pfnCompare != NULL) {
        if (pSimNID_EMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_EMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_EMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_EM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_EMVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_EMVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int NID_EM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_EMVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_EMVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_NID_EM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_EM_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_EM_string(const char *str, char **endptr)
{
    static NID_EM rTemp;
    return string_to_NID_EM(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_EM_Utils = {
    NID_EM_to_string,
    check_NID_EM_string,
    string_to_NID_EM,
    is_NID_EM_double_conversion_allowed,
    NID_EM_to_double,
    is_NID_EM_long_convertion_allowed,
    NID_EM_to_long,
    compare_NID_EM,
    get_NID_EM_signature,
    set_NID_EM_default_value,
    sizeof(NID_EM)
};

/****************************************************************
 ** Q_EMERGENCYSTOP 
 ****************************************************************/

struct SimTypeVTable *pSimQ_EMERGENCYSTOPVTable;

static SimEnumValUtils Q_EMERGENCYSTOP_values[] = {
    { "Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA", _3_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA},
    { "Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA", _3_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA},
    { "Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA", Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA},
    { "Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA", Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA},
    { "Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted", Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted},
    { "Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted", Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted},
    { "Q_EMERGENCYSTOP_Emergency_stop", Q_EMERGENCYSTOP_Emergency_stop},
    { "Q_EMERGENCYSTOP_Emergency_stop", Q_EMERGENCYSTOP_Emergency_stop},
};
const int Q_EMERGENCYSTOP_nb_values = 8;

int Q_EMERGENCYSTOP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_EMERGENCYSTOPVTable != NULL
        && pSimQ_EMERGENCYSTOPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_EMERGENCYSTOPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_EMERGENCYSTOP*)pValue, Q_EMERGENCYSTOP_values, Q_EMERGENCYSTOP_nb_values, pfnStrAppend, pData); 
}

int string_to_Q_EMERGENCYSTOP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_EMERGENCYSTOPVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_EMERGENCYSTOPVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_EMERGENCYSTOP_values, Q_EMERGENCYSTOP_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_EMERGENCYSTOP*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_EMERGENCYSTOP_double_conversion_allowed()
{
    if (pSimQ_EMERGENCYSTOPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_EMERGENCYSTOPVTable);
    }
    return 1;
}

int is_Q_EMERGENCYSTOP_long_convertion_allowed()
{
    if (pSimQ_EMERGENCYSTOPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_EMERGENCYSTOPVTable);
    }
    return 1;
}

void compare_Q_EMERGENCYSTOP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_EMERGENCYSTOPVTable != NULL
        && pSimQ_EMERGENCYSTOPVTable->m_version >= Scv612
        && pSimQ_EMERGENCYSTOPVTable->m_pfnCompare != NULL) {
        if (pSimQ_EMERGENCYSTOPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_EMERGENCYSTOPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_EMERGENCYSTOPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_EMERGENCYSTOP*)pValue1), (int)(*(Q_EMERGENCYSTOP*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_EMERGENCYSTOP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_EMERGENCYSTOPVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_EMERGENCYSTOPVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_EMERGENCYSTOP*)pValue);
    return 1;
}

int Q_EMERGENCYSTOP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_EMERGENCYSTOPVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_EMERGENCYSTOPVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_EMERGENCYSTOP*)pValue);
    return 1;
}

int get_Q_EMERGENCYSTOP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_EMERGENCYSTOP_values, Q_EMERGENCYSTOP_nb_values, pfnStrAppend, pData);
}

int set_Q_EMERGENCYSTOP_default_value(void *pValue)
{
    *(Q_EMERGENCYSTOP*)pValue = _3_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
    return 1;
}

int check_Q_EMERGENCYSTOP_string(const char *str, char **endptr)
{
    static Q_EMERGENCYSTOP rTemp;
    return string_to_Q_EMERGENCYSTOP(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_EMERGENCYSTOP_Utils = {
    Q_EMERGENCYSTOP_to_string,
    check_Q_EMERGENCYSTOP_string,
    string_to_Q_EMERGENCYSTOP,
    is_Q_EMERGENCYSTOP_double_conversion_allowed,
    Q_EMERGENCYSTOP_to_double,
    is_Q_EMERGENCYSTOP_long_convertion_allowed,
    Q_EMERGENCYSTOP_to_long,
    compare_Q_EMERGENCYSTOP,
    get_Q_EMERGENCYSTOP_signature,
    set_Q_EMERGENCYSTOP_default_value,
    sizeof(Q_EMERGENCYSTOP)
};

/****************************************************************
 ** NID_TEXTMESSAGE 
 ****************************************************************/

struct SimTypeVTable *pSimNID_TEXTMESSAGEVTable;

int NID_TEXTMESSAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_TEXTMESSAGEVTable != NULL
        && pSimNID_TEXTMESSAGEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_TEXTMESSAGEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_TEXTMESSAGE(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_TEXTMESSAGEVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_TEXTMESSAGEVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_TEXTMESSAGE_double_conversion_allowed()
{
    if (pSimNID_TEXTMESSAGEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_TEXTMESSAGEVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_TEXTMESSAGE_long_convertion_allowed()
{
    if (pSimNID_TEXTMESSAGEVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_TEXTMESSAGEVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_TEXTMESSAGE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_TEXTMESSAGEVTable != NULL
        && pSimNID_TEXTMESSAGEVTable->m_version >= Scv612
        && pSimNID_TEXTMESSAGEVTable->m_pfnCompare != NULL) {
        if (pSimNID_TEXTMESSAGEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_TEXTMESSAGEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_TEXTMESSAGEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_TEXTMESSAGE_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_TEXTMESSAGEVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_TEXTMESSAGEVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int NID_TEXTMESSAGE_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_TEXTMESSAGEVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_TEXTMESSAGEVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_NID_TEXTMESSAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_TEXTMESSAGE_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_TEXTMESSAGE_string(const char *str, char **endptr)
{
    static NID_TEXTMESSAGE rTemp;
    return string_to_NID_TEXTMESSAGE(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_TEXTMESSAGE_Utils = {
    NID_TEXTMESSAGE_to_string,
    check_NID_TEXTMESSAGE_string,
    string_to_NID_TEXTMESSAGE,
    is_NID_TEXTMESSAGE_double_conversion_allowed,
    NID_TEXTMESSAGE_to_double,
    is_NID_TEXTMESSAGE_long_convertion_allowed,
    NID_TEXTMESSAGE_to_long,
    compare_NID_TEXTMESSAGE,
    get_NID_TEXTMESSAGE_signature,
    set_NID_TEXTMESSAGE_default_value,
    sizeof(NID_TEXTMESSAGE)
};

/****************************************************************
 ** Q_SCALE 
 ****************************************************************/

struct SimTypeVTable *pSimQ_SCALEVTable;

static SimEnumValUtils Q_SCALE_values[] = {
    { "Q_SCALE_10_cm_scale", Q_SCALE_10_cm_scale},
    { "Q_SCALE_10_cm_scale", Q_SCALE_10_cm_scale},
    { "Q_SCALE_1_m_scale", Q_SCALE_1_m_scale},
    { "Q_SCALE_1_m_scale", Q_SCALE_1_m_scale},
    { "Q_SCALE_10_m_scale", Q_SCALE_10_m_scale},
    { "Q_SCALE_10_m_scale", Q_SCALE_10_m_scale},
};
const int Q_SCALE_nb_values = 6;

int Q_SCALE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_SCALEVTable != NULL
        && pSimQ_SCALEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_SCALEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_SCALE*)pValue, Q_SCALE_values, Q_SCALE_nb_values, pfnStrAppend, pData); 
}

int string_to_Q_SCALE(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_SCALEVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_SCALEVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_SCALE_values, Q_SCALE_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_SCALE*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_SCALE_double_conversion_allowed()
{
    if (pSimQ_SCALEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_SCALEVTable);
    }
    return 1;
}

int is_Q_SCALE_long_convertion_allowed()
{
    if (pSimQ_SCALEVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_SCALEVTable);
    }
    return 1;
}

void compare_Q_SCALE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_SCALEVTable != NULL
        && pSimQ_SCALEVTable->m_version >= Scv612
        && pSimQ_SCALEVTable->m_pfnCompare != NULL) {
        if (pSimQ_SCALEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_SCALEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_SCALEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_SCALE*)pValue1), (int)(*(Q_SCALE*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_SCALE_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_SCALEVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_SCALEVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_SCALE*)pValue);
    return 1;
}

int Q_SCALE_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_SCALEVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_SCALEVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_SCALE*)pValue);
    return 1;
}

int get_Q_SCALE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_SCALE_values, Q_SCALE_nb_values, pfnStrAppend, pData);
}

int set_Q_SCALE_default_value(void *pValue)
{
    *(Q_SCALE*)pValue = Q_SCALE_10_cm_scale;
    return 1;
}

int check_Q_SCALE_string(const char *str, char **endptr)
{
    static Q_SCALE rTemp;
    return string_to_Q_SCALE(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_SCALE_Utils = {
    Q_SCALE_to_string,
    check_Q_SCALE_string,
    string_to_Q_SCALE,
    is_Q_SCALE_double_conversion_allowed,
    Q_SCALE_to_double,
    is_Q_SCALE_long_convertion_allowed,
    Q_SCALE_to_long,
    compare_Q_SCALE,
    get_Q_SCALE_signature,
    set_Q_SCALE_default_value,
    sizeof(Q_SCALE)
};

/****************************************************************
 ** Q_DIRLRBG 
 ****************************************************************/

struct SimTypeVTable *pSimQ_DIRLRBGVTable;

static SimEnumValUtils Q_DIRLRBG_values[] = {
    { "Q_DIRLRBG_Reverse", Q_DIRLRBG_Reverse},
    { "Q_DIRLRBG_Reverse", Q_DIRLRBG_Reverse},
    { "Q_DIRLRBG_Nominal", Q_DIRLRBG_Nominal},
    { "Q_DIRLRBG_Nominal", Q_DIRLRBG_Nominal},
    { "Q_DIRLRBG_Unknown", Q_DIRLRBG_Unknown},
    { "Q_DIRLRBG_Unknown", Q_DIRLRBG_Unknown},
};
const int Q_DIRLRBG_nb_values = 6;

int Q_DIRLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_DIRLRBGVTable != NULL
        && pSimQ_DIRLRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DIRLRBGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_DIRLRBG*)pValue, Q_DIRLRBG_values, Q_DIRLRBG_nb_values, pfnStrAppend, pData); 
}

int string_to_Q_DIRLRBG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_DIRLRBGVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_DIRLRBGVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DIRLRBG_values, Q_DIRLRBG_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DIRLRBG*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_DIRLRBG_double_conversion_allowed()
{
    if (pSimQ_DIRLRBGVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_DIRLRBGVTable);
    }
    return 1;
}

int is_Q_DIRLRBG_long_convertion_allowed()
{
    if (pSimQ_DIRLRBGVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_DIRLRBGVTable);
    }
    return 1;
}

void compare_Q_DIRLRBG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_DIRLRBGVTable != NULL
        && pSimQ_DIRLRBGVTable->m_version >= Scv612
        && pSimQ_DIRLRBGVTable->m_pfnCompare != NULL) {
        if (pSimQ_DIRLRBGVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_DIRLRBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_DIRLRBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_DIRLRBG*)pValue1), (int)(*(Q_DIRLRBG*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_DIRLRBG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_DIRLRBGVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_DIRLRBGVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_DIRLRBG*)pValue);
    return 1;
}

int Q_DIRLRBG_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_DIRLRBGVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_DIRLRBGVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_DIRLRBG*)pValue);
    return 1;
}

int get_Q_DIRLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_DIRLRBG_values, Q_DIRLRBG_nb_values, pfnStrAppend, pData);
}

int set_Q_DIRLRBG_default_value(void *pValue)
{
    *(Q_DIRLRBG*)pValue = Q_DIRLRBG_Reverse;
    return 1;
}

int check_Q_DIRLRBG_string(const char *str, char **endptr)
{
    static Q_DIRLRBG rTemp;
    return string_to_Q_DIRLRBG(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_DIRLRBG_Utils = {
    Q_DIRLRBG_to_string,
    check_Q_DIRLRBG_string,
    string_to_Q_DIRLRBG,
    is_Q_DIRLRBG_double_conversion_allowed,
    Q_DIRLRBG_to_double,
    is_Q_DIRLRBG_long_convertion_allowed,
    Q_DIRLRBG_to_long,
    compare_Q_DIRLRBG,
    get_Q_DIRLRBG_signature,
    set_Q_DIRLRBG_default_value,
    sizeof(Q_DIRLRBG)
};

/****************************************************************
 ** Q_DLRBG 
 ****************************************************************/

struct SimTypeVTable *pSimQ_DLRBGVTable;

static SimEnumValUtils Q_DLRBG_values[] = {
    { "Q_DLRBG_Reverse", Q_DLRBG_Reverse},
    { "Q_DLRBG_Reverse", Q_DLRBG_Reverse},
    { "Q_DLRBG_Nominal", Q_DLRBG_Nominal},
    { "Q_DLRBG_Nominal", Q_DLRBG_Nominal},
    { "Q_DLRBG_Unknown", Q_DLRBG_Unknown},
    { "Q_DLRBG_Unknown", Q_DLRBG_Unknown},
};
const int Q_DLRBG_nb_values = 6;

int Q_DLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_DLRBGVTable != NULL
        && pSimQ_DLRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DLRBGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_DLRBG*)pValue, Q_DLRBG_values, Q_DLRBG_nb_values, pfnStrAppend, pData); 
}

int string_to_Q_DLRBG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_DLRBGVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_DLRBGVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DLRBG_values, Q_DLRBG_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DLRBG*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_DLRBG_double_conversion_allowed()
{
    if (pSimQ_DLRBGVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_DLRBGVTable);
    }
    return 1;
}

int is_Q_DLRBG_long_convertion_allowed()
{
    if (pSimQ_DLRBGVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_DLRBGVTable);
    }
    return 1;
}

void compare_Q_DLRBG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_DLRBGVTable != NULL
        && pSimQ_DLRBGVTable->m_version >= Scv612
        && pSimQ_DLRBGVTable->m_pfnCompare != NULL) {
        if (pSimQ_DLRBGVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_DLRBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_DLRBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_DLRBG*)pValue1), (int)(*(Q_DLRBG*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_DLRBG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_DLRBGVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_DLRBGVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_DLRBG*)pValue);
    return 1;
}

int Q_DLRBG_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_DLRBGVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_DLRBGVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_DLRBG*)pValue);
    return 1;
}

int get_Q_DLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_DLRBG_values, Q_DLRBG_nb_values, pfnStrAppend, pData);
}

int set_Q_DLRBG_default_value(void *pValue)
{
    *(Q_DLRBG*)pValue = Q_DLRBG_Reverse;
    return 1;
}

int check_Q_DLRBG_string(const char *str, char **endptr)
{
    static Q_DLRBG rTemp;
    return string_to_Q_DLRBG(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_DLRBG_Utils = {
    Q_DLRBG_to_string,
    check_Q_DLRBG_string,
    string_to_Q_DLRBG,
    is_Q_DLRBG_double_conversion_allowed,
    Q_DLRBG_to_double,
    is_Q_DLRBG_long_convertion_allowed,
    Q_DLRBG_to_long,
    compare_Q_DLRBG,
    get_Q_DLRBG_signature,
    set_Q_DLRBG_default_value,
    sizeof(Q_DLRBG)
};

/****************************************************************
 ** Q_LENGTH 
 ****************************************************************/

struct SimTypeVTable *pSimQ_LENGTHVTable;

static SimEnumValUtils Q_LENGTH_values[] = {
    { "Q_LENGTH_No_train_integrity_information_available", Q_LENGTH_No_train_integrity_information_available},
    { "Q_LENGTH_No_train_integrity_information_available", Q_LENGTH_No_train_integrity_information_available},
    { "Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device", _2_Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device},
    { "Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device", _2_Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device},
    { "Q_LENGTH_Train_integrity_confirmed_by_driver", Q_LENGTH_Train_integrity_confirmed_by_driver},
    { "Q_LENGTH_Train_integrity_confirmed_by_driver", Q_LENGTH_Train_integrity_confirmed_by_driver},
    { "Q_LENGTH_Train_integrity_lost", Q_LENGTH_Train_integrity_lost},
    { "Q_LENGTH_Train_integrity_lost", Q_LENGTH_Train_integrity_lost},
};
const int Q_LENGTH_nb_values = 8;

int Q_LENGTH_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_LENGTHVTable != NULL
        && pSimQ_LENGTHVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_LENGTHVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_LENGTH*)pValue, Q_LENGTH_values, Q_LENGTH_nb_values, pfnStrAppend, pData); 
}

int string_to_Q_LENGTH(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_LENGTHVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_LENGTHVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_LENGTH_values, Q_LENGTH_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_LENGTH*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_LENGTH_double_conversion_allowed()
{
    if (pSimQ_LENGTHVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_LENGTHVTable);
    }
    return 1;
}

int is_Q_LENGTH_long_convertion_allowed()
{
    if (pSimQ_LENGTHVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_LENGTHVTable);
    }
    return 1;
}

void compare_Q_LENGTH(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_LENGTHVTable != NULL
        && pSimQ_LENGTHVTable->m_version >= Scv612
        && pSimQ_LENGTHVTable->m_pfnCompare != NULL) {
        if (pSimQ_LENGTHVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_LENGTHVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_LENGTHVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_LENGTH*)pValue1), (int)(*(Q_LENGTH*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_LENGTH_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_LENGTHVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_LENGTHVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_LENGTH*)pValue);
    return 1;
}

int Q_LENGTH_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_LENGTHVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_LENGTHVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_LENGTH*)pValue);
    return 1;
}

int get_Q_LENGTH_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_LENGTH_values, Q_LENGTH_nb_values, pfnStrAppend, pData);
}

int set_Q_LENGTH_default_value(void *pValue)
{
    *(Q_LENGTH*)pValue = Q_LENGTH_No_train_integrity_information_available;
    return 1;
}

int check_Q_LENGTH_string(const char *str, char **endptr)
{
    static Q_LENGTH rTemp;
    return string_to_Q_LENGTH(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_LENGTH_Utils = {
    Q_LENGTH_to_string,
    check_Q_LENGTH_string,
    string_to_Q_LENGTH,
    is_Q_LENGTH_double_conversion_allowed,
    Q_LENGTH_to_double,
    is_Q_LENGTH_long_convertion_allowed,
    Q_LENGTH_to_long,
    compare_Q_LENGTH,
    get_Q_LENGTH_signature,
    set_Q_LENGTH_default_value,
    sizeof(Q_LENGTH)
};

/****************************************************************
 ** Q_DIRTRAIN 
 ****************************************************************/

struct SimTypeVTable *pSimQ_DIRTRAINVTable;

static SimEnumValUtils Q_DIRTRAIN_values[] = {
    { "Q_DIRTRAIN_Reverse", Q_DIRTRAIN_Reverse},
    { "Q_DIRTRAIN_Reverse", Q_DIRTRAIN_Reverse},
    { "Q_DIRTRAIN_Nominal", Q_DIRTRAIN_Nominal},
    { "Q_DIRTRAIN_Nominal", Q_DIRTRAIN_Nominal},
    { "Q_DIRTRAIN_Unknown", Q_DIRTRAIN_Unknown},
    { "Q_DIRTRAIN_Unknown", Q_DIRTRAIN_Unknown},
};
const int Q_DIRTRAIN_nb_values = 6;

int Q_DIRTRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_DIRTRAINVTable != NULL
        && pSimQ_DIRTRAINVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DIRTRAINVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_DIRTRAIN*)pValue, Q_DIRTRAIN_values, Q_DIRTRAIN_nb_values, pfnStrAppend, pData); 
}

int string_to_Q_DIRTRAIN(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_DIRTRAINVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_DIRTRAINVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DIRTRAIN_values, Q_DIRTRAIN_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DIRTRAIN*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_DIRTRAIN_double_conversion_allowed()
{
    if (pSimQ_DIRTRAINVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_DIRTRAINVTable);
    }
    return 1;
}

int is_Q_DIRTRAIN_long_convertion_allowed()
{
    if (pSimQ_DIRTRAINVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_DIRTRAINVTable);
    }
    return 1;
}

void compare_Q_DIRTRAIN(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_DIRTRAINVTable != NULL
        && pSimQ_DIRTRAINVTable->m_version >= Scv612
        && pSimQ_DIRTRAINVTable->m_pfnCompare != NULL) {
        if (pSimQ_DIRTRAINVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_DIRTRAINVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_DIRTRAINVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_DIRTRAIN*)pValue1), (int)(*(Q_DIRTRAIN*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_DIRTRAIN_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_DIRTRAINVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_DIRTRAINVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_DIRTRAIN*)pValue);
    return 1;
}

int Q_DIRTRAIN_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_DIRTRAINVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_DIRTRAINVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_DIRTRAIN*)pValue);
    return 1;
}

int get_Q_DIRTRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_DIRTRAIN_values, Q_DIRTRAIN_nb_values, pfnStrAppend, pData);
}

int set_Q_DIRTRAIN_default_value(void *pValue)
{
    *(Q_DIRTRAIN*)pValue = Q_DIRTRAIN_Reverse;
    return 1;
}

int check_Q_DIRTRAIN_string(const char *str, char **endptr)
{
    static Q_DIRTRAIN rTemp;
    return string_to_Q_DIRTRAIN(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_DIRTRAIN_Utils = {
    Q_DIRTRAIN_to_string,
    check_Q_DIRTRAIN_string,
    string_to_Q_DIRTRAIN,
    is_Q_DIRTRAIN_double_conversion_allowed,
    Q_DIRTRAIN_to_double,
    is_Q_DIRTRAIN_long_convertion_allowed,
    Q_DIRTRAIN_to_long,
    compare_Q_DIRTRAIN,
    get_Q_DIRTRAIN_signature,
    set_Q_DIRTRAIN_default_value,
    sizeof(Q_DIRTRAIN)
};

/****************************************************************
 ** M_MODE 
 ****************************************************************/

struct SimTypeVTable *pSimM_MODEVTable;

static SimEnumValUtils M_MODE_values[] = {
    { "M_MODE_Full_Supervision", M_MODE_Full_Supervision},
    { "M_MODE_Full_Supervision", M_MODE_Full_Supervision},
    { "M_MODE_On_Sight", M_MODE_On_Sight},
    { "M_MODE_On_Sight", M_MODE_On_Sight},
    { "M_MODE_Staff_Responsible", M_MODE_Staff_Responsible},
    { "M_MODE_Staff_Responsible", M_MODE_Staff_Responsible},
    { "M_MODE_Shunting", M_MODE_Shunting},
    { "M_MODE_Shunting", M_MODE_Shunting},
    { "M_MODE_Unfitted", M_MODE_Unfitted},
    { "M_MODE_Unfitted", M_MODE_Unfitted},
    { "M_MODE_Sleeping", M_MODE_Sleeping},
    { "M_MODE_Sleeping", M_MODE_Sleeping},
    { "M_MODE_Stand_By", M_MODE_Stand_By},
    { "M_MODE_Stand_By", M_MODE_Stand_By},
    { "M_MODE_Trip", M_MODE_Trip},
    { "M_MODE_Trip", M_MODE_Trip},
    { "M_MODE_Post_Trip", M_MODE_Post_Trip},
    { "M_MODE_Post_Trip", M_MODE_Post_Trip},
    { "M_MODE_System_Failure", M_MODE_System_Failure},
    { "M_MODE_System_Failure", M_MODE_System_Failure},
    { "M_MODE_Isolation", M_MODE_Isolation},
    { "M_MODE_Isolation", M_MODE_Isolation},
    { "M_MODE_Non_Leading", M_MODE_Non_Leading},
    { "M_MODE_Non_Leading", M_MODE_Non_Leading},
    { "M_MODE_Limited_Supervision", M_MODE_Limited_Supervision},
    { "M_MODE_Limited_Supervision", M_MODE_Limited_Supervision},
    { "M_MODE_National_System", M_MODE_National_System},
    { "M_MODE_National_System", M_MODE_National_System},
    { "M_MODE_Reversing", M_MODE_Reversing},
    { "M_MODE_Reversing", M_MODE_Reversing},
    { "M_MODE_Passive_Shunting", M_MODE_Passive_Shunting},
    { "M_MODE_Passive_Shunting", M_MODE_Passive_Shunting},
    { "M_MODE_No_Power", M_MODE_No_Power},
    { "M_MODE_No_Power", M_MODE_No_Power},
};
const int M_MODE_nb_values = 34;

int M_MODE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_MODEVTable != NULL
        && pSimM_MODEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_MODEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_MODE*)pValue, M_MODE_values, M_MODE_nb_values, pfnStrAppend, pData); 
}

int string_to_M_MODE(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_MODEVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_MODEVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_MODE_values, M_MODE_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_MODE*)pValue = nTemp;
    }
    return nRet;
}

int is_M_MODE_double_conversion_allowed()
{
    if (pSimM_MODEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_MODEVTable);
    }
    return 1;
}

int is_M_MODE_long_convertion_allowed()
{
    if (pSimM_MODEVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_MODEVTable);
    }
    return 1;
}

void compare_M_MODE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_MODEVTable != NULL
        && pSimM_MODEVTable->m_version >= Scv612
        && pSimM_MODEVTable->m_pfnCompare != NULL) {
        if (pSimM_MODEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_MODEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_MODEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_MODE*)pValue1), (int)(*(M_MODE*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_MODE_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_MODEVTable != NULL) {
        return VTable_to_double(pValue, pSimM_MODEVTable, nRetValue);
    }
    *nRetValue = (double)*((M_MODE*)pValue);
    return 1;
}

int M_MODE_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_MODEVTable != NULL) {
        return VTable_to_long(pValue, pSimM_MODEVTable, nRetValue);
    }
    *nRetValue = (long)*((M_MODE*)pValue);
    return 1;
}

int get_M_MODE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_MODE_values, M_MODE_nb_values, pfnStrAppend, pData);
}

int set_M_MODE_default_value(void *pValue)
{
    *(M_MODE*)pValue = M_MODE_Full_Supervision;
    return 1;
}

int check_M_MODE_string(const char *str, char **endptr)
{
    static M_MODE rTemp;
    return string_to_M_MODE(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_MODE_Utils = {
    M_MODE_to_string,
    check_M_MODE_string,
    string_to_M_MODE,
    is_M_MODE_double_conversion_allowed,
    M_MODE_to_double,
    is_M_MODE_long_convertion_allowed,
    M_MODE_to_long,
    compare_M_MODE,
    get_M_MODE_signature,
    set_M_MODE_default_value,
    sizeof(M_MODE)
};

/****************************************************************
 ** M_LEVEL 
 ****************************************************************/

struct SimTypeVTable *pSimM_LEVELVTable;

static SimEnumValUtils M_LEVEL_values[] = {
    { "M_LEVEL_Level_0", M_LEVEL_Level_0},
    { "M_LEVEL_Level_0", M_LEVEL_Level_0},
    { "M_LEVEL_Level_NTC_specified_by_NID_NTC", M_LEVEL_Level_NTC_specified_by_NID_NTC},
    { "M_LEVEL_Level_NTC_specified_by_NID_NTC", M_LEVEL_Level_NTC_specified_by_NID_NTC},
    { "M_LEVEL_Level_1", M_LEVEL_Level_1},
    { "M_LEVEL_Level_1", M_LEVEL_Level_1},
    { "M_LEVEL_Level_2", M_LEVEL_Level_2},
    { "M_LEVEL_Level_2", M_LEVEL_Level_2},
    { "M_LEVEL_Level_3", M_LEVEL_Level_3},
    { "M_LEVEL_Level_3", M_LEVEL_Level_3},
};
const int M_LEVEL_nb_values = 10;

int M_LEVEL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_LEVELVTable != NULL
        && pSimM_LEVELVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_LEVELVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_LEVEL*)pValue, M_LEVEL_values, M_LEVEL_nb_values, pfnStrAppend, pData); 
}

int string_to_M_LEVEL(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_LEVELVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_LEVELVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_LEVEL_values, M_LEVEL_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_LEVEL*)pValue = nTemp;
    }
    return nRet;
}

int is_M_LEVEL_double_conversion_allowed()
{
    if (pSimM_LEVELVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_LEVELVTable);
    }
    return 1;
}

int is_M_LEVEL_long_convertion_allowed()
{
    if (pSimM_LEVELVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_LEVELVTable);
    }
    return 1;
}

void compare_M_LEVEL(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_LEVELVTable != NULL
        && pSimM_LEVELVTable->m_version >= Scv612
        && pSimM_LEVELVTable->m_pfnCompare != NULL) {
        if (pSimM_LEVELVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_LEVELVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_LEVELVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_LEVEL*)pValue1), (int)(*(M_LEVEL*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_LEVEL_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_LEVELVTable != NULL) {
        return VTable_to_double(pValue, pSimM_LEVELVTable, nRetValue);
    }
    *nRetValue = (double)*((M_LEVEL*)pValue);
    return 1;
}

int M_LEVEL_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_LEVELVTable != NULL) {
        return VTable_to_long(pValue, pSimM_LEVELVTable, nRetValue);
    }
    *nRetValue = (long)*((M_LEVEL*)pValue);
    return 1;
}

int get_M_LEVEL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_LEVEL_values, M_LEVEL_nb_values, pfnStrAppend, pData);
}

int set_M_LEVEL_default_value(void *pValue)
{
    *(M_LEVEL*)pValue = M_LEVEL_Level_0;
    return 1;
}

int check_M_LEVEL_string(const char *str, char **endptr)
{
    static M_LEVEL rTemp;
    return string_to_M_LEVEL(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_LEVEL_Utils = {
    M_LEVEL_to_string,
    check_M_LEVEL_string,
    string_to_M_LEVEL,
    is_M_LEVEL_double_conversion_allowed,
    M_LEVEL_to_double,
    is_M_LEVEL_long_convertion_allowed,
    M_LEVEL_to_long,
    compare_M_LEVEL,
    get_M_LEVEL_signature,
    set_M_LEVEL_default_value,
    sizeof(M_LEVEL)
};

/****************************************************************
 ** M_ERROR 
 ****************************************************************/

struct SimTypeVTable *pSimM_ERRORVTable;

static SimEnumValUtils M_ERROR_values[] = {
    { "M_ERROR_Balise_group_linking_consistency_error", M_ERROR_Balise_group_linking_consistency_error},
    { "M_ERROR_Balise_group_linking_consistency_error", M_ERROR_Balise_group_linking_consistency_error},
    { "M_ERROR_Linked_balise_group_message_consistency_erro", M_ERROR_Linked_balise_group_message_consistency_erro},
    { "M_ERROR_Linked_balise_group_message_consistency_erro", M_ERROR_Linked_balise_group_message_consistency_erro},
    { "M_ERROR_Unlinked_balise_group_message_consistency_error", M_ERROR_Unlinked_balise_group_message_consistency_error},
    { "M_ERROR_Unlinked_balise_group_message_consistency_error", M_ERROR_Unlinked_balise_group_message_consistency_error},
    { "M_ERROR_Radio_message_consistency_error", M_ERROR_Radio_message_consistency_error},
    { "M_ERROR_Radio_message_consistency_error", M_ERROR_Radio_message_consistency_error},
    { "M_ERROR_Radio_sequence_error", M_ERROR_Radio_sequence_error},
    { "M_ERROR_Radio_sequence_error", M_ERROR_Radio_sequence_error},
    { "M_ERROR_Radio_safe_radio_connection_error", M_ERROR_Radio_safe_radio_connection_error},
    { "M_ERROR_Radio_safe_radio_connection_error", M_ERROR_Radio_safe_radio_connection_error},
    { "M_ERROR_Safety_critical_failure", M_ERROR_Safety_critical_failure},
    { "M_ERROR_Safety_critical_failure", M_ERROR_Safety_critical_failure},
    { "M_ERROR_Double_linking_error", M_ERROR_Double_linking_error},
    { "M_ERROR_Double_linking_error", M_ERROR_Double_linking_error},
    { "M_ERROR_Double_repositioning_error", M_ERROR_Double_repositioning_error},
    { "M_ERROR_Double_repositioning_error", M_ERROR_Double_repositioning_error},
};
const int M_ERROR_nb_values = 18;

int M_ERROR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_ERRORVTable != NULL
        && pSimM_ERRORVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_ERRORVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_ERROR*)pValue, M_ERROR_values, M_ERROR_nb_values, pfnStrAppend, pData); 
}

int string_to_M_ERROR(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_ERRORVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_ERRORVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_ERROR_values, M_ERROR_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_ERROR*)pValue = nTemp;
    }
    return nRet;
}

int is_M_ERROR_double_conversion_allowed()
{
    if (pSimM_ERRORVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_ERRORVTable);
    }
    return 1;
}

int is_M_ERROR_long_convertion_allowed()
{
    if (pSimM_ERRORVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_ERRORVTable);
    }
    return 1;
}

void compare_M_ERROR(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_ERRORVTable != NULL
        && pSimM_ERRORVTable->m_version >= Scv612
        && pSimM_ERRORVTable->m_pfnCompare != NULL) {
        if (pSimM_ERRORVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_ERRORVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_ERRORVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_ERROR*)pValue1), (int)(*(M_ERROR*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_ERROR_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_ERRORVTable != NULL) {
        return VTable_to_double(pValue, pSimM_ERRORVTable, nRetValue);
    }
    *nRetValue = (double)*((M_ERROR*)pValue);
    return 1;
}

int M_ERROR_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_ERRORVTable != NULL) {
        return VTable_to_long(pValue, pSimM_ERRORVTable, nRetValue);
    }
    *nRetValue = (long)*((M_ERROR*)pValue);
    return 1;
}

int get_M_ERROR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_ERROR_values, M_ERROR_nb_values, pfnStrAppend, pData);
}

int set_M_ERROR_default_value(void *pValue)
{
    *(M_ERROR*)pValue = M_ERROR_Balise_group_linking_consistency_error;
    return 1;
}

int check_M_ERROR_string(const char *str, char **endptr)
{
    static M_ERROR rTemp;
    return string_to_M_ERROR(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_ERROR_Utils = {
    M_ERROR_to_string,
    check_M_ERROR_string,
    string_to_M_ERROR,
    is_M_ERROR_double_conversion_allowed,
    M_ERROR_to_double,
    is_M_ERROR_long_convertion_allowed,
    M_ERROR_to_long,
    compare_M_ERROR,
    get_M_ERROR_signature,
    set_M_ERROR_default_value,
    sizeof(M_ERROR)
};

/****************************************************************
 ** NID_OPERATIONAL 
 ****************************************************************/

struct SimTypeVTable *pSimNID_OPERATIONALVTable;

int NID_OPERATIONAL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_OPERATIONALVTable != NULL
        && pSimNID_OPERATIONALVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_OPERATIONALVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_OPERATIONAL(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_OPERATIONALVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_OPERATIONALVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_OPERATIONAL_double_conversion_allowed()
{
    if (pSimNID_OPERATIONALVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_OPERATIONALVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_OPERATIONAL_long_convertion_allowed()
{
    if (pSimNID_OPERATIONALVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_OPERATIONALVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_OPERATIONAL(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_OPERATIONALVTable != NULL
        && pSimNID_OPERATIONALVTable->m_version >= Scv612
        && pSimNID_OPERATIONALVTable->m_pfnCompare != NULL) {
        if (pSimNID_OPERATIONALVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_OPERATIONALVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_OPERATIONALVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_OPERATIONAL_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_OPERATIONALVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_OPERATIONALVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int NID_OPERATIONAL_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_OPERATIONALVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_OPERATIONALVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_NID_OPERATIONAL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_OPERATIONAL_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_OPERATIONAL_string(const char *str, char **endptr)
{
    static NID_OPERATIONAL rTemp;
    return string_to_NID_OPERATIONAL(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_OPERATIONAL_Utils = {
    NID_OPERATIONAL_to_string,
    check_NID_OPERATIONAL_string,
    string_to_NID_OPERATIONAL,
    is_NID_OPERATIONAL_double_conversion_allowed,
    NID_OPERATIONAL_to_double,
    is_NID_OPERATIONAL_long_convertion_allowed,
    NID_OPERATIONAL_to_long,
    compare_NID_OPERATIONAL,
    get_NID_OPERATIONAL_signature,
    set_NID_OPERATIONAL_default_value,
    sizeof(NID_OPERATIONAL)
};

/****************************************************************
 ** NID_LTRBG 
 ****************************************************************/

struct SimTypeVTable *pSimNID_LTRBGVTable;

int NID_LTRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_LTRBGVTable != NULL
        && pSimNID_LTRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_LTRBGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_LTRBG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_LTRBGVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_LTRBGVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_LTRBG_double_conversion_allowed()
{
    if (pSimNID_LTRBGVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_LTRBGVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_LTRBG_long_convertion_allowed()
{
    if (pSimNID_LTRBGVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_LTRBGVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_LTRBG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_LTRBGVTable != NULL
        && pSimNID_LTRBGVTable->m_version >= Scv612
        && pSimNID_LTRBGVTable->m_pfnCompare != NULL) {
        if (pSimNID_LTRBGVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_LTRBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_LTRBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_LTRBG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_LTRBGVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_LTRBGVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int NID_LTRBG_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_LTRBGVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_LTRBGVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_NID_LTRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_LTRBG_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_LTRBG_string(const char *str, char **endptr)
{
    static NID_LTRBG rTemp;
    return string_to_NID_LTRBG(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_LTRBG_Utils = {
    NID_LTRBG_to_string,
    check_NID_LTRBG_string,
    string_to_NID_LTRBG,
    is_NID_LTRBG_double_conversion_allowed,
    NID_LTRBG_to_double,
    is_NID_LTRBG_long_convertion_allowed,
    NID_LTRBG_to_long,
    compare_NID_LTRBG,
    get_NID_LTRBG_signature,
    set_NID_LTRBG_default_value,
    sizeof(NID_LTRBG)
};

/****************************************************************
 ** NC_CDTRAIN 
 ****************************************************************/

struct SimTypeVTable *pSimNC_CDTRAINVTable;

static SimEnumValUtils NC_CDTRAIN_values[] = {
    { "NC_CDTRAIN_Cant_Deficiency_80_mm", NC_CDTRAIN_Cant_Deficiency_80_mm},
    { "NC_CDTRAIN_Cant_Deficiency_80_mm", NC_CDTRAIN_Cant_Deficiency_80_mm},
    { "NC_CDTRAIN_Cant_Deficiency_100_mm", NC_CDTRAIN_Cant_Deficiency_100_mm},
    { "NC_CDTRAIN_Cant_Deficiency_100_mm", NC_CDTRAIN_Cant_Deficiency_100_mm},
    { "NC_CDTRAIN_Cant_Deficiency_130_mm", NC_CDTRAIN_Cant_Deficiency_130_mm},
    { "NC_CDTRAIN_Cant_Deficiency_130_mm", NC_CDTRAIN_Cant_Deficiency_130_mm},
    { "NC_CDTRAIN_Cant_Deficiency_150_mm", NC_CDTRAIN_Cant_Deficiency_150_mm},
    { "NC_CDTRAIN_Cant_Deficiency_150_mm", NC_CDTRAIN_Cant_Deficiency_150_mm},
    { "NC_CDTRAIN_Cant_Deficiency_165_mm", NC_CDTRAIN_Cant_Deficiency_165_mm},
    { "NC_CDTRAIN_Cant_Deficiency_165_mm", NC_CDTRAIN_Cant_Deficiency_165_mm},
    { "NC_CDTRAIN_Cant_Deficiency_180_mm", NC_CDTRAIN_Cant_Deficiency_180_mm},
    { "NC_CDTRAIN_Cant_Deficiency_180_mm", NC_CDTRAIN_Cant_Deficiency_180_mm},
    { "NC_CDTRAIN_Cant_Deficiency_210_mm", NC_CDTRAIN_Cant_Deficiency_210_mm},
    { "NC_CDTRAIN_Cant_Deficiency_210_mm", NC_CDTRAIN_Cant_Deficiency_210_mm},
    { "NC_CDTRAIN_Cant_Deficiency_225_mm", NC_CDTRAIN_Cant_Deficiency_225_mm},
    { "NC_CDTRAIN_Cant_Deficiency_225_mm", NC_CDTRAIN_Cant_Deficiency_225_mm},
    { "NC_CDTRAIN_Cant_Deficiency_245_mm", NC_CDTRAIN_Cant_Deficiency_245_mm},
    { "NC_CDTRAIN_Cant_Deficiency_245_mm", NC_CDTRAIN_Cant_Deficiency_245_mm},
    { "NC_CDTRAIN_Cant_Deficiency_275_mm", NC_CDTRAIN_Cant_Deficiency_275_mm},
    { "NC_CDTRAIN_Cant_Deficiency_275_mm", NC_CDTRAIN_Cant_Deficiency_275_mm},
    { "NC_CDTRAIN_Cant_Deficiency_300_mm", NC_CDTRAIN_Cant_Deficiency_300_mm},
    { "NC_CDTRAIN_Cant_Deficiency_300_mm", NC_CDTRAIN_Cant_Deficiency_300_mm},
};
const int NC_CDTRAIN_nb_values = 22;

int NC_CDTRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNC_CDTRAINVTable != NULL
        && pSimNC_CDTRAINVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNC_CDTRAINVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(NC_CDTRAIN*)pValue, NC_CDTRAIN_values, NC_CDTRAIN_nb_values, pfnStrAppend, pData); 
}

int string_to_NC_CDTRAIN(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNC_CDTRAINVTable != NULL) {
        nRet=string_to_VTable(str, pSimNC_CDTRAINVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, NC_CDTRAIN_values, NC_CDTRAIN_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(NC_CDTRAIN*)pValue = nTemp;
    }
    return nRet;
}

int is_NC_CDTRAIN_double_conversion_allowed()
{
    if (pSimNC_CDTRAINVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNC_CDTRAINVTable);
    }
    return 1;
}

int is_NC_CDTRAIN_long_convertion_allowed()
{
    if (pSimNC_CDTRAINVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNC_CDTRAINVTable);
    }
    return 1;
}

void compare_NC_CDTRAIN(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNC_CDTRAINVTable != NULL
        && pSimNC_CDTRAINVTable->m_version >= Scv612
        && pSimNC_CDTRAINVTable->m_pfnCompare != NULL) {
        if (pSimNC_CDTRAINVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNC_CDTRAINVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNC_CDTRAINVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(NC_CDTRAIN*)pValue1), (int)(*(NC_CDTRAIN*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NC_CDTRAIN_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNC_CDTRAINVTable != NULL) {
        return VTable_to_double(pValue, pSimNC_CDTRAINVTable, nRetValue);
    }
    *nRetValue = (double)*((NC_CDTRAIN*)pValue);
    return 1;
}

int NC_CDTRAIN_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNC_CDTRAINVTable != NULL) {
        return VTable_to_long(pValue, pSimNC_CDTRAINVTable, nRetValue);
    }
    *nRetValue = (long)*((NC_CDTRAIN*)pValue);
    return 1;
}

int get_NC_CDTRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(NC_CDTRAIN_values, NC_CDTRAIN_nb_values, pfnStrAppend, pData);
}

int set_NC_CDTRAIN_default_value(void *pValue)
{
    *(NC_CDTRAIN*)pValue = NC_CDTRAIN_Cant_Deficiency_80_mm;
    return 1;
}

int check_NC_CDTRAIN_string(const char *str, char **endptr)
{
    static NC_CDTRAIN rTemp;
    return string_to_NC_CDTRAIN(str, &rTemp, endptr);
}

SimTypeUtils _Type_NC_CDTRAIN_Utils = {
    NC_CDTRAIN_to_string,
    check_NC_CDTRAIN_string,
    string_to_NC_CDTRAIN,
    is_NC_CDTRAIN_double_conversion_allowed,
    NC_CDTRAIN_to_double,
    is_NC_CDTRAIN_long_convertion_allowed,
    NC_CDTRAIN_to_long,
    compare_NC_CDTRAIN,
    get_NC_CDTRAIN_signature,
    set_NC_CDTRAIN_default_value,
    sizeof(NC_CDTRAIN)
};

/****************************************************************
 ** NC_TRAIN 
 ****************************************************************/

struct SimTypeVTable *pSimNC_TRAINVTable;

static SimEnumValUtils NC_TRAIN_values[] = {
    { "NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category", NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category},
    { "NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category", NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category},
    { "NC_TRAIN_Freight_train_braked_in_P_position", _1_NC_TRAIN_Freight_train_braked_in_P_position},
    { "NC_TRAIN_Freight_train_braked_in_P_position", _1_NC_TRAIN_Freight_train_braked_in_P_position},
    { "NC_TRAIN_Freight_train_braked_in_G_position", NC_TRAIN_Freight_train_braked_in_G_position},
    { "NC_TRAIN_Freight_train_braked_in_G_position", NC_TRAIN_Freight_train_braked_in_G_position},
    { "NC_TRAIN_Passenger_train", NC_TRAIN_Passenger_train},
    { "NC_TRAIN_Passenger_train", NC_TRAIN_Passenger_train},
};
const int NC_TRAIN_nb_values = 8;

int NC_TRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNC_TRAINVTable != NULL
        && pSimNC_TRAINVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNC_TRAINVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(NC_TRAIN*)pValue, NC_TRAIN_values, NC_TRAIN_nb_values, pfnStrAppend, pData); 
}

int string_to_NC_TRAIN(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNC_TRAINVTable != NULL) {
        nRet=string_to_VTable(str, pSimNC_TRAINVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, NC_TRAIN_values, NC_TRAIN_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(NC_TRAIN*)pValue = nTemp;
    }
    return nRet;
}

int is_NC_TRAIN_double_conversion_allowed()
{
    if (pSimNC_TRAINVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNC_TRAINVTable);
    }
    return 1;
}

int is_NC_TRAIN_long_convertion_allowed()
{
    if (pSimNC_TRAINVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNC_TRAINVTable);
    }
    return 1;
}

void compare_NC_TRAIN(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNC_TRAINVTable != NULL
        && pSimNC_TRAINVTable->m_version >= Scv612
        && pSimNC_TRAINVTable->m_pfnCompare != NULL) {
        if (pSimNC_TRAINVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNC_TRAINVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNC_TRAINVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(NC_TRAIN*)pValue1), (int)(*(NC_TRAIN*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NC_TRAIN_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNC_TRAINVTable != NULL) {
        return VTable_to_double(pValue, pSimNC_TRAINVTable, nRetValue);
    }
    *nRetValue = (double)*((NC_TRAIN*)pValue);
    return 1;
}

int NC_TRAIN_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNC_TRAINVTable != NULL) {
        return VTable_to_long(pValue, pSimNC_TRAINVTable, nRetValue);
    }
    *nRetValue = (long)*((NC_TRAIN*)pValue);
    return 1;
}

int get_NC_TRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(NC_TRAIN_values, NC_TRAIN_nb_values, pfnStrAppend, pData);
}

int set_NC_TRAIN_default_value(void *pValue)
{
    *(NC_TRAIN*)pValue = NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
    return 1;
}

int check_NC_TRAIN_string(const char *str, char **endptr)
{
    static NC_TRAIN rTemp;
    return string_to_NC_TRAIN(str, &rTemp, endptr);
}

SimTypeUtils _Type_NC_TRAIN_Utils = {
    NC_TRAIN_to_string,
    check_NC_TRAIN_string,
    string_to_NC_TRAIN,
    is_NC_TRAIN_double_conversion_allowed,
    NC_TRAIN_to_double,
    is_NC_TRAIN_long_convertion_allowed,
    NC_TRAIN_to_long,
    compare_NC_TRAIN,
    get_NC_TRAIN_signature,
    set_NC_TRAIN_default_value,
    sizeof(NC_TRAIN)
};

/****************************************************************
 ** M_LOADINGGAUGE 
 ****************************************************************/

struct SimTypeVTable *pSimM_LOADINGGAUGEVTable;

static SimEnumValUtils M_LOADINGGAUGE_values[] = {
    { "M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles", M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles},
    { "M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles", M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles},
    { "M_LOADINGGAUGE_G1", M_LOADINGGAUGE_G1},
    { "M_LOADINGGAUGE_G1", M_LOADINGGAUGE_G1},
    { "M_LOADINGGAUGE_GA", M_LOADINGGAUGE_GA},
    { "M_LOADINGGAUGE_GA", M_LOADINGGAUGE_GA},
    { "M_LOADINGGAUGE_GB", M_LOADINGGAUGE_GB},
    { "M_LOADINGGAUGE_GB", M_LOADINGGAUGE_GB},
    { "M_LOADINGGAUGE_GC", M_LOADINGGAUGE_GC},
    { "M_LOADINGGAUGE_GC", M_LOADINGGAUGE_GC},
};
const int M_LOADINGGAUGE_nb_values = 10;

int M_LOADINGGAUGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_LOADINGGAUGEVTable != NULL
        && pSimM_LOADINGGAUGEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_LOADINGGAUGEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_LOADINGGAUGE*)pValue, M_LOADINGGAUGE_values, M_LOADINGGAUGE_nb_values, pfnStrAppend, pData); 
}

int string_to_M_LOADINGGAUGE(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_LOADINGGAUGEVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_LOADINGGAUGEVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_LOADINGGAUGE_values, M_LOADINGGAUGE_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_LOADINGGAUGE*)pValue = nTemp;
    }
    return nRet;
}

int is_M_LOADINGGAUGE_double_conversion_allowed()
{
    if (pSimM_LOADINGGAUGEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_LOADINGGAUGEVTable);
    }
    return 1;
}

int is_M_LOADINGGAUGE_long_convertion_allowed()
{
    if (pSimM_LOADINGGAUGEVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_LOADINGGAUGEVTable);
    }
    return 1;
}

void compare_M_LOADINGGAUGE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_LOADINGGAUGEVTable != NULL
        && pSimM_LOADINGGAUGEVTable->m_version >= Scv612
        && pSimM_LOADINGGAUGEVTable->m_pfnCompare != NULL) {
        if (pSimM_LOADINGGAUGEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_LOADINGGAUGEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_LOADINGGAUGEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_LOADINGGAUGE*)pValue1), (int)(*(M_LOADINGGAUGE*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_LOADINGGAUGE_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_LOADINGGAUGEVTable != NULL) {
        return VTable_to_double(pValue, pSimM_LOADINGGAUGEVTable, nRetValue);
    }
    *nRetValue = (double)*((M_LOADINGGAUGE*)pValue);
    return 1;
}

int M_LOADINGGAUGE_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_LOADINGGAUGEVTable != NULL) {
        return VTable_to_long(pValue, pSimM_LOADINGGAUGEVTable, nRetValue);
    }
    *nRetValue = (long)*((M_LOADINGGAUGE*)pValue);
    return 1;
}

int get_M_LOADINGGAUGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_LOADINGGAUGE_values, M_LOADINGGAUGE_nb_values, pfnStrAppend, pData);
}

int set_M_LOADINGGAUGE_default_value(void *pValue)
{
    *(M_LOADINGGAUGE*)pValue = M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
    return 1;
}

int check_M_LOADINGGAUGE_string(const char *str, char **endptr)
{
    static M_LOADINGGAUGE rTemp;
    return string_to_M_LOADINGGAUGE(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_LOADINGGAUGE_Utils = {
    M_LOADINGGAUGE_to_string,
    check_M_LOADINGGAUGE_string,
    string_to_M_LOADINGGAUGE,
    is_M_LOADINGGAUGE_double_conversion_allowed,
    M_LOADINGGAUGE_to_double,
    is_M_LOADINGGAUGE_long_convertion_allowed,
    M_LOADINGGAUGE_to_long,
    compare_M_LOADINGGAUGE,
    get_M_LOADINGGAUGE_signature,
    set_M_LOADINGGAUGE_default_value,
    sizeof(M_LOADINGGAUGE)
};

/****************************************************************
 ** M_AXLELOADCAT 
 ****************************************************************/

struct SimTypeVTable *pSimM_AXLELOADCATVTable;

static SimEnumValUtils M_AXLELOADCAT_values[] = {
    { "M_AXLELOADCAT_A", M_AXLELOADCAT_A},
    { "M_AXLELOADCAT_A", M_AXLELOADCAT_A},
    { "M_AXLELOADCAT_HS17", M_AXLELOADCAT_HS17},
    { "M_AXLELOADCAT_HS17", M_AXLELOADCAT_HS17},
    { "M_AXLELOADCAT_B1", M_AXLELOADCAT_B1},
    { "M_AXLELOADCAT_B1", M_AXLELOADCAT_B1},
    { "M_AXLELOADCAT_B2", M_AXLELOADCAT_B2},
    { "M_AXLELOADCAT_B2", M_AXLELOADCAT_B2},
    { "M_AXLELOADCAT_C2", M_AXLELOADCAT_C2},
    { "M_AXLELOADCAT_C2", M_AXLELOADCAT_C2},
    { "M_AXLELOADCAT_C3", M_AXLELOADCAT_C3},
    { "M_AXLELOADCAT_C3", M_AXLELOADCAT_C3},
    { "M_AXLELOADCAT_C4", M_AXLELOADCAT_C4},
    { "M_AXLELOADCAT_C4", M_AXLELOADCAT_C4},
    { "M_AXLELOADCAT_D2", M_AXLELOADCAT_D2},
    { "M_AXLELOADCAT_D2", M_AXLELOADCAT_D2},
    { "M_AXLELOADCAT_D3", M_AXLELOADCAT_D3},
    { "M_AXLELOADCAT_D3", M_AXLELOADCAT_D3},
    { "M_AXLELOADCAT_D4", M_AXLELOADCAT_D4},
    { "M_AXLELOADCAT_D4", M_AXLELOADCAT_D4},
    { "M_AXLELOADCAT_D4XL", M_AXLELOADCAT_D4XL},
    { "M_AXLELOADCAT_D4XL", M_AXLELOADCAT_D4XL},
    { "M_AXLELOADCAT_E4", M_AXLELOADCAT_E4},
    { "M_AXLELOADCAT_E4", M_AXLELOADCAT_E4},
    { "M_AXLELOADCAT_E5", M_AXLELOADCAT_E5},
    { "M_AXLELOADCAT_E5", M_AXLELOADCAT_E5},
};
const int M_AXLELOADCAT_nb_values = 26;

int M_AXLELOADCAT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_AXLELOADCATVTable != NULL
        && pSimM_AXLELOADCATVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_AXLELOADCATVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_AXLELOADCAT*)pValue, M_AXLELOADCAT_values, M_AXLELOADCAT_nb_values, pfnStrAppend, pData); 
}

int string_to_M_AXLELOADCAT(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_AXLELOADCATVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_AXLELOADCATVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_AXLELOADCAT_values, M_AXLELOADCAT_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_AXLELOADCAT*)pValue = nTemp;
    }
    return nRet;
}

int is_M_AXLELOADCAT_double_conversion_allowed()
{
    if (pSimM_AXLELOADCATVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_AXLELOADCATVTable);
    }
    return 1;
}

int is_M_AXLELOADCAT_long_convertion_allowed()
{
    if (pSimM_AXLELOADCATVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_AXLELOADCATVTable);
    }
    return 1;
}

void compare_M_AXLELOADCAT(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_AXLELOADCATVTable != NULL
        && pSimM_AXLELOADCATVTable->m_version >= Scv612
        && pSimM_AXLELOADCATVTable->m_pfnCompare != NULL) {
        if (pSimM_AXLELOADCATVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_AXLELOADCATVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_AXLELOADCATVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_AXLELOADCAT*)pValue1), (int)(*(M_AXLELOADCAT*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_AXLELOADCAT_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_AXLELOADCATVTable != NULL) {
        return VTable_to_double(pValue, pSimM_AXLELOADCATVTable, nRetValue);
    }
    *nRetValue = (double)*((M_AXLELOADCAT*)pValue);
    return 1;
}

int M_AXLELOADCAT_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_AXLELOADCATVTable != NULL) {
        return VTable_to_long(pValue, pSimM_AXLELOADCATVTable, nRetValue);
    }
    *nRetValue = (long)*((M_AXLELOADCAT*)pValue);
    return 1;
}

int get_M_AXLELOADCAT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_AXLELOADCAT_values, M_AXLELOADCAT_nb_values, pfnStrAppend, pData);
}

int set_M_AXLELOADCAT_default_value(void *pValue)
{
    *(M_AXLELOADCAT*)pValue = M_AXLELOADCAT_A;
    return 1;
}

int check_M_AXLELOADCAT_string(const char *str, char **endptr)
{
    static M_AXLELOADCAT rTemp;
    return string_to_M_AXLELOADCAT(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_AXLELOADCAT_Utils = {
    M_AXLELOADCAT_to_string,
    check_M_AXLELOADCAT_string,
    string_to_M_AXLELOADCAT,
    is_M_AXLELOADCAT_double_conversion_allowed,
    M_AXLELOADCAT_to_double,
    is_M_AXLELOADCAT_long_convertion_allowed,
    M_AXLELOADCAT_to_long,
    compare_M_AXLELOADCAT,
    get_M_AXLELOADCAT_signature,
    set_M_AXLELOADCAT_default_value,
    sizeof(M_AXLELOADCAT)
};

/****************************************************************
 ** M_AIRTIGHT 
 ****************************************************************/

struct SimTypeVTable *pSimM_AIRTIGHTVTable;

static SimEnumValUtils M_AIRTIGHT_values[] = {
    { "M_AIRTIGHT_Not_fitted", M_AIRTIGHT_Not_fitted},
    { "M_AIRTIGHT_Not_fitted", M_AIRTIGHT_Not_fitted},
    { "M_AIRTIGHT_Fitted", M_AIRTIGHT_Fitted},
    { "M_AIRTIGHT_Fitted", M_AIRTIGHT_Fitted},
};
const int M_AIRTIGHT_nb_values = 4;

int M_AIRTIGHT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_AIRTIGHTVTable != NULL
        && pSimM_AIRTIGHTVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_AIRTIGHTVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_AIRTIGHT*)pValue, M_AIRTIGHT_values, M_AIRTIGHT_nb_values, pfnStrAppend, pData); 
}

int string_to_M_AIRTIGHT(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_AIRTIGHTVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_AIRTIGHTVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_AIRTIGHT_values, M_AIRTIGHT_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_AIRTIGHT*)pValue = nTemp;
    }
    return nRet;
}

int is_M_AIRTIGHT_double_conversion_allowed()
{
    if (pSimM_AIRTIGHTVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_AIRTIGHTVTable);
    }
    return 1;
}

int is_M_AIRTIGHT_long_convertion_allowed()
{
    if (pSimM_AIRTIGHTVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_AIRTIGHTVTable);
    }
    return 1;
}

void compare_M_AIRTIGHT(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_AIRTIGHTVTable != NULL
        && pSimM_AIRTIGHTVTable->m_version >= Scv612
        && pSimM_AIRTIGHTVTable->m_pfnCompare != NULL) {
        if (pSimM_AIRTIGHTVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_AIRTIGHTVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_AIRTIGHTVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_AIRTIGHT*)pValue1), (int)(*(M_AIRTIGHT*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_AIRTIGHT_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_AIRTIGHTVTable != NULL) {
        return VTable_to_double(pValue, pSimM_AIRTIGHTVTable, nRetValue);
    }
    *nRetValue = (double)*((M_AIRTIGHT*)pValue);
    return 1;
}

int M_AIRTIGHT_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_AIRTIGHTVTable != NULL) {
        return VTable_to_long(pValue, pSimM_AIRTIGHTVTable, nRetValue);
    }
    *nRetValue = (long)*((M_AIRTIGHT*)pValue);
    return 1;
}

int get_M_AIRTIGHT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_AIRTIGHT_values, M_AIRTIGHT_nb_values, pfnStrAppend, pData);
}

int set_M_AIRTIGHT_default_value(void *pValue)
{
    *(M_AIRTIGHT*)pValue = M_AIRTIGHT_Not_fitted;
    return 1;
}

int check_M_AIRTIGHT_string(const char *str, char **endptr)
{
    static M_AIRTIGHT rTemp;
    return string_to_M_AIRTIGHT(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_AIRTIGHT_Utils = {
    M_AIRTIGHT_to_string,
    check_M_AIRTIGHT_string,
    string_to_M_AIRTIGHT,
    is_M_AIRTIGHT_double_conversion_allowed,
    M_AIRTIGHT_to_double,
    is_M_AIRTIGHT_long_convertion_allowed,
    M_AIRTIGHT_to_long,
    compare_M_AIRTIGHT,
    get_M_AIRTIGHT_signature,
    set_M_AIRTIGHT_default_value,
    sizeof(M_AIRTIGHT)
};

/****************************************************************
 ** N_AXLE 
 ****************************************************************/

struct SimTypeVTable *pSimN_AXLEVTable;

int N_AXLE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimN_AXLEVTable != NULL
        && pSimN_AXLEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimN_AXLEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_N_AXLE(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimN_AXLEVTable != NULL) {
        nRet=string_to_VTable(str, pSimN_AXLEVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_N_AXLE_double_conversion_allowed()
{
    if (pSimN_AXLEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimN_AXLEVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_N_AXLE_long_convertion_allowed()
{
    if (pSimN_AXLEVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimN_AXLEVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_N_AXLE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimN_AXLEVTable != NULL
        && pSimN_AXLEVTable->m_version >= Scv612
        && pSimN_AXLEVTable->m_pfnCompare != NULL) {
        if (pSimN_AXLEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimN_AXLEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimN_AXLEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int N_AXLE_to_double(const void *pValue, double *nRetValue)
{
    if (pSimN_AXLEVTable != NULL) {
        return VTable_to_double(pValue, pSimN_AXLEVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int N_AXLE_to_long(const void *pValue, long *nRetValue)
{
    if (pSimN_AXLEVTable != NULL) {
        return VTable_to_long(pValue, pSimN_AXLEVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_N_AXLE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_N_AXLE_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_N_AXLE_string(const char *str, char **endptr)
{
    static N_AXLE rTemp;
    return string_to_N_AXLE(str, &rTemp, endptr);
}

SimTypeUtils _Type_N_AXLE_Utils = {
    N_AXLE_to_string,
    check_N_AXLE_string,
    string_to_N_AXLE,
    is_N_AXLE_double_conversion_allowed,
    N_AXLE_to_double,
    is_N_AXLE_long_convertion_allowed,
    N_AXLE_to_long,
    compare_N_AXLE,
    get_N_AXLE_signature,
    set_N_AXLE_default_value,
    sizeof(N_AXLE)
};

/****************************************************************
 ** M_VOLTAGE 
 ****************************************************************/

struct SimTypeVTable *pSimM_VOLTAGEVTable;

static SimEnumValUtils M_VOLTAGE_values[] = {
    { "M_VOLTAGE_Line_not_fitted_with_any_traction_system", M_VOLTAGE_Line_not_fitted_with_any_traction_system},
    { "M_VOLTAGE_Line_not_fitted_with_any_traction_system", M_VOLTAGE_Line_not_fitted_with_any_traction_system},
    { "M_VOLTAGE_AC_25_kV_50_Hz", M_VOLTAGE_AC_25_kV_50_Hz},
    { "M_VOLTAGE_AC_25_kV_50_Hz", M_VOLTAGE_AC_25_kV_50_Hz},
    { "M_VOLTAGE_AC_15_kV_16_7_Hz", M_VOLTAGE_AC_15_kV_16_7_Hz},
    { "M_VOLTAGE_AC_15_kV_16_7_Hz", M_VOLTAGE_AC_15_kV_16_7_Hz},
    { "M_VOLTAGE_DC_3_kV", M_VOLTAGE_DC_3_kV},
    { "M_VOLTAGE_DC_3_kV", M_VOLTAGE_DC_3_kV},
    { "M_VOLTAGE_DC_1_5_kV", M_VOLTAGE_DC_1_5_kV},
    { "M_VOLTAGE_DC_1_5_kV", M_VOLTAGE_DC_1_5_kV},
    { "M_VOLTAGE_DC_600_or_750_V", M_VOLTAGE_DC_600_or_750_V},
    { "M_VOLTAGE_DC_600_or_750_V", M_VOLTAGE_DC_600_or_750_V},
};
const int M_VOLTAGE_nb_values = 12;

int M_VOLTAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_VOLTAGEVTable != NULL
        && pSimM_VOLTAGEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_VOLTAGEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_VOLTAGE*)pValue, M_VOLTAGE_values, M_VOLTAGE_nb_values, pfnStrAppend, pData); 
}

int string_to_M_VOLTAGE(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_VOLTAGEVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_VOLTAGEVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_VOLTAGE_values, M_VOLTAGE_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_VOLTAGE*)pValue = nTemp;
    }
    return nRet;
}

int is_M_VOLTAGE_double_conversion_allowed()
{
    if (pSimM_VOLTAGEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_VOLTAGEVTable);
    }
    return 1;
}

int is_M_VOLTAGE_long_convertion_allowed()
{
    if (pSimM_VOLTAGEVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_VOLTAGEVTable);
    }
    return 1;
}

void compare_M_VOLTAGE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_VOLTAGEVTable != NULL
        && pSimM_VOLTAGEVTable->m_version >= Scv612
        && pSimM_VOLTAGEVTable->m_pfnCompare != NULL) {
        if (pSimM_VOLTAGEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_VOLTAGEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_VOLTAGEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_VOLTAGE*)pValue1), (int)(*(M_VOLTAGE*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_VOLTAGE_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_VOLTAGEVTable != NULL) {
        return VTable_to_double(pValue, pSimM_VOLTAGEVTable, nRetValue);
    }
    *nRetValue = (double)*((M_VOLTAGE*)pValue);
    return 1;
}

int M_VOLTAGE_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_VOLTAGEVTable != NULL) {
        return VTable_to_long(pValue, pSimM_VOLTAGEVTable, nRetValue);
    }
    *nRetValue = (long)*((M_VOLTAGE*)pValue);
    return 1;
}

int get_M_VOLTAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_VOLTAGE_values, M_VOLTAGE_nb_values, pfnStrAppend, pData);
}

int set_M_VOLTAGE_default_value(void *pValue)
{
    *(M_VOLTAGE*)pValue = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    return 1;
}

int check_M_VOLTAGE_string(const char *str, char **endptr)
{
    static M_VOLTAGE rTemp;
    return string_to_M_VOLTAGE(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_VOLTAGE_Utils = {
    M_VOLTAGE_to_string,
    check_M_VOLTAGE_string,
    string_to_M_VOLTAGE,
    is_M_VOLTAGE_double_conversion_allowed,
    M_VOLTAGE_to_double,
    is_M_VOLTAGE_long_convertion_allowed,
    M_VOLTAGE_to_long,
    compare_M_VOLTAGE,
    get_M_VOLTAGE_signature,
    set_M_VOLTAGE_default_value,
    sizeof(M_VOLTAGE)
};

/****************************************************************
 ** NID_CTRACTION 
 ****************************************************************/

struct SimTypeVTable *pSimNID_CTRACTIONVTable;

int NID_CTRACTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_CTRACTIONVTable != NULL
        && pSimNID_CTRACTIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_CTRACTIONVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_CTRACTION(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_CTRACTIONVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_CTRACTIONVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_CTRACTION_double_conversion_allowed()
{
    if (pSimNID_CTRACTIONVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_CTRACTIONVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_CTRACTION_long_convertion_allowed()
{
    if (pSimNID_CTRACTIONVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_CTRACTIONVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_CTRACTION(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_CTRACTIONVTable != NULL
        && pSimNID_CTRACTIONVTable->m_version >= Scv612
        && pSimNID_CTRACTIONVTable->m_pfnCompare != NULL) {
        if (pSimNID_CTRACTIONVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_CTRACTIONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_CTRACTIONVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_CTRACTION_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_CTRACTIONVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_CTRACTIONVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int NID_CTRACTION_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_CTRACTIONVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_CTRACTIONVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_NID_CTRACTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_CTRACTION_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_CTRACTION_string(const char *str, char **endptr)
{
    static NID_CTRACTION rTemp;
    return string_to_NID_CTRACTION(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_CTRACTION_Utils = {
    NID_CTRACTION_to_string,
    check_NID_CTRACTION_string,
    string_to_NID_CTRACTION,
    is_NID_CTRACTION_double_conversion_allowed,
    NID_CTRACTION_to_double,
    is_NID_CTRACTION_long_convertion_allowed,
    NID_CTRACTION_to_long,
    compare_NID_CTRACTION,
    get_NID_CTRACTION_signature,
    set_NID_CTRACTION_default_value,
    sizeof(NID_CTRACTION)
};

/****************************************************************
 ** NID_NTC 
 ****************************************************************/

struct SimTypeVTable *pSimNID_NTCVTable;

int NID_NTC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_NTCVTable != NULL
        && pSimNID_NTCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_NTCVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_NTC(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_NTCVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_NTCVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_NTC_double_conversion_allowed()
{
    if (pSimNID_NTCVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_NTCVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_NTC_long_convertion_allowed()
{
    if (pSimNID_NTCVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_NTCVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_NTC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_NTCVTable != NULL
        && pSimNID_NTCVTable->m_version >= Scv612
        && pSimNID_NTCVTable->m_pfnCompare != NULL) {
        if (pSimNID_NTCVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_NTCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_NTCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_NTC_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_NTCVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_NTCVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int NID_NTC_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_NTCVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_NTCVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_NID_NTC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_NTC_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_NTC_string(const char *str, char **endptr)
{
    static NID_NTC rTemp;
    return string_to_NID_NTC(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_NTC_Utils = {
    NID_NTC_to_string,
    check_NID_NTC_string,
    string_to_NID_NTC,
    is_NID_NTC_double_conversion_allowed,
    NID_NTC_to_double,
    is_NID_NTC_long_convertion_allowed,
    NID_NTC_to_long,
    compare_NID_NTC,
    get_NID_NTC_signature,
    set_NID_NTC_default_value,
    sizeof(NID_NTC)
};

/****************************************************************
 ** L_TRAIN 
 ****************************************************************/

struct SimTypeVTable *pSimL_TRAINVTable;

int L_TRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimL_TRAINVTable != NULL
        && pSimL_TRAINVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimL_TRAINVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_L_TRAIN(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimL_TRAINVTable != NULL) {
        nRet=string_to_VTable(str, pSimL_TRAINVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_L_TRAIN_double_conversion_allowed()
{
    if (pSimL_TRAINVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimL_TRAINVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_L_TRAIN_long_convertion_allowed()
{
    if (pSimL_TRAINVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimL_TRAINVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_L_TRAIN(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimL_TRAINVTable != NULL
        && pSimL_TRAINVTable->m_version >= Scv612
        && pSimL_TRAINVTable->m_pfnCompare != NULL) {
        if (pSimL_TRAINVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimL_TRAINVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimL_TRAINVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int L_TRAIN_to_double(const void *pValue, double *nRetValue)
{
    if (pSimL_TRAINVTable != NULL) {
        return VTable_to_double(pValue, pSimL_TRAINVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int L_TRAIN_to_long(const void *pValue, long *nRetValue)
{
    if (pSimL_TRAINVTable != NULL) {
        return VTable_to_long(pValue, pSimL_TRAINVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_L_TRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_L_TRAIN_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_L_TRAIN_string(const char *str, char **endptr)
{
    static L_TRAIN rTemp;
    return string_to_L_TRAIN(str, &rTemp, endptr);
}

SimTypeUtils _Type_L_TRAIN_Utils = {
    L_TRAIN_to_string,
    check_L_TRAIN_string,
    string_to_L_TRAIN,
    is_L_TRAIN_double_conversion_allowed,
    L_TRAIN_to_double,
    is_L_TRAIN_long_convertion_allowed,
    L_TRAIN_to_long,
    compare_L_TRAIN,
    get_L_TRAIN_signature,
    set_L_TRAIN_default_value,
    sizeof(L_TRAIN)
};

/****************************************************************
 ** Radio_TrainTrack_Header_T_Radio_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable;

int Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__565_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Radio_TrainTrack_Header_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__565(str, pValue, endptr);
    }
    return nRet;
}

int is_Radio_TrainTrack_Header_T_Radio_Types_Pkg_double_conversion_allowed()
{
    if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable);
    }
    return is_struct__565_double_conversion_allowed();
}

int is_Radio_TrainTrack_Header_T_Radio_Types_Pkg_long_convertion_allowed()
{
    if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable);
    }
    return is_struct__565_long_convertion_allowed();
}

void compare_Radio_TrainTrack_Header_T_Radio_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable->m_version >= Scv612
        && pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__565(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable, nRetValue);
    }
    return struct__565_to_double(pValue, nRetValue);
}

int Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimRadio_TrainTrack_Header_T_Radio_Types_PkgVTable, nRetValue);
    }
    return struct__565_to_long(pValue, nRetValue);
}

int get_Radio_TrainTrack_Header_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__565_signature(pfnStrAppend, pData);
}

int set_Radio_TrainTrack_Header_T_Radio_Types_Pkg_default_value(void *pValue)
{
    return set_struct__565_default_value(pValue);
}

int check_Radio_TrainTrack_Header_T_Radio_Types_Pkg_string(const char *str, char **endptr)
{
    static Radio_TrainTrack_Header_T_Radio_Types_Pkg rTemp;
    return string_to_Radio_TrainTrack_Header_T_Radio_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_Radio_TrainTrack_Header_T_Radio_Types_Pkg_Utils = {
    Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_string,
    check_Radio_TrainTrack_Header_T_Radio_Types_Pkg_string,
    string_to_Radio_TrainTrack_Header_T_Radio_Types_Pkg,
    is_Radio_TrainTrack_Header_T_Radio_Types_Pkg_double_conversion_allowed,
    Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_double,
    is_Radio_TrainTrack_Header_T_Radio_Types_Pkg_long_convertion_allowed,
    Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_long,
    compare_Radio_TrainTrack_Header_T_Radio_Types_Pkg,
    get_Radio_TrainTrack_Header_T_Radio_Types_Pkg_signature,
    set_Radio_TrainTrack_Header_T_Radio_Types_Pkg_default_value,
    sizeof(Radio_TrainTrack_Header_T_Radio_Types_Pkg)
};

/****************************************************************
 ** Radio_TrainTrack_Message_T_Radio_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable;

int Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__577_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Radio_TrainTrack_Message_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__577(str, pValue, endptr);
    }
    return nRet;
}

int is_Radio_TrainTrack_Message_T_Radio_Types_Pkg_double_conversion_allowed()
{
    if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable);
    }
    return is_struct__577_double_conversion_allowed();
}

int is_Radio_TrainTrack_Message_T_Radio_Types_Pkg_long_convertion_allowed()
{
    if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable);
    }
    return is_struct__577_long_convertion_allowed();
}

void compare_Radio_TrainTrack_Message_T_Radio_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_version >= Scv612
        && pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__577(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable, nRetValue);
    }
    return struct__577_to_double(pValue, nRetValue);
}

int Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimRadio_TrainTrack_Message_T_Radio_Types_PkgVTable, nRetValue);
    }
    return struct__577_to_long(pValue, nRetValue);
}

int get_Radio_TrainTrack_Message_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__577_signature(pfnStrAppend, pData);
}

int set_Radio_TrainTrack_Message_T_Radio_Types_Pkg_default_value(void *pValue)
{
    return set_struct__577_default_value(pValue);
}

int check_Radio_TrainTrack_Message_T_Radio_Types_Pkg_string(const char *str, char **endptr)
{
    static Radio_TrainTrack_Message_T_Radio_Types_Pkg rTemp;
    return string_to_Radio_TrainTrack_Message_T_Radio_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils = {
    Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_string,
    check_Radio_TrainTrack_Message_T_Radio_Types_Pkg_string,
    string_to_Radio_TrainTrack_Message_T_Radio_Types_Pkg,
    is_Radio_TrainTrack_Message_T_Radio_Types_Pkg_double_conversion_allowed,
    Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_double,
    is_Radio_TrainTrack_Message_T_Radio_Types_Pkg_long_convertion_allowed,
    Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_long,
    compare_Radio_TrainTrack_Message_T_Radio_Types_Pkg,
    get_Radio_TrainTrack_Message_T_Radio_Types_Pkg_signature,
    set_Radio_TrainTrack_Message_T_Radio_Types_Pkg_default_value,
    sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg)
};

/****************************************************************
 ** outPackets_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimoutPackets_T_Common_Types_PkgVTable;

int outPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimoutPackets_T_Common_Types_PkgVTable != NULL
        && pSimoutPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimoutPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__555_to_string(pValue, pfnStrAppend, pData);
}

int string_to_outPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimoutPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimoutPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__555(str, pValue, endptr);
    }
    return nRet;
}

int is_outPackets_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimoutPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimoutPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__555_double_conversion_allowed();
}

int is_outPackets_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimoutPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimoutPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__555_long_convertion_allowed();
}

void compare_outPackets_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimoutPackets_T_Common_Types_PkgVTable != NULL
        && pSimoutPackets_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimoutPackets_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimoutPackets_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimoutPackets_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimoutPackets_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__555(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int outPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimoutPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimoutPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__555_to_double(pValue, nRetValue);
}

int outPackets_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimoutPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimoutPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__555_to_long(pValue, nRetValue);
}

int get_outPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__555_signature(pfnStrAppend, pData);
}

int set_outPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__555_default_value(pValue);
}

int check_outPackets_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static outPackets_T_Common_Types_Pkg rTemp;
    return string_to_outPackets_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_outPackets_T_Common_Types_Pkg_Utils = {
    outPackets_T_Common_Types_Pkg_to_string,
    check_outPackets_T_Common_Types_Pkg_string,
    string_to_outPackets_T_Common_Types_Pkg,
    is_outPackets_T_Common_Types_Pkg_double_conversion_allowed,
    outPackets_T_Common_Types_Pkg_to_double,
    is_outPackets_T_Common_Types_Pkg_long_convertion_allowed,
    outPackets_T_Common_Types_Pkg_to_long,
    compare_outPackets_T_Common_Types_Pkg,
    get_outPackets_T_Common_Types_Pkg_signature,
    set_outPackets_T_Common_Types_Pkg_default_value,
    sizeof(outPackets_T_Common_Types_Pkg)
};

/****************************************************************
 ** PT0_PositionReport_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable;

int PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__550_to_string(pValue, pfnStrAppend, pData);
}

int string_to_PT0_PositionReport_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__550(str, pValue, endptr);
    }
    return nRet;
}

int is_PT0_PositionReport_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__550_double_conversion_allowed();
}

int is_PT0_PositionReport_T_Packet_TrainTypes_Pkg_long_convertion_allowed()
{
    if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__550_long_convertion_allowed();
}

void compare_PT0_PositionReport_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__550(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__550_to_double(pValue, nRetValue);
}

int PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimPT0_PositionReport_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__550_to_long(pValue, nRetValue);
}

int get_PT0_PositionReport_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__550_signature(pfnStrAppend, pData);
}

int set_PT0_PositionReport_T_Packet_TrainTypes_Pkg_default_value(void *pValue)
{
    return set_struct__550_default_value(pValue);
}

int check_PT0_PositionReport_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static PT0_PositionReport_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_PT0_PositionReport_T_Packet_TrainTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_PT0_PositionReport_T_Packet_TrainTypes_Pkg_Utils = {
    PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_string,
    check_PT0_PositionReport_T_Packet_TrainTypes_Pkg_string,
    string_to_PT0_PositionReport_T_Packet_TrainTypes_Pkg,
    is_PT0_PositionReport_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_double,
    is_PT0_PositionReport_T_Packet_TrainTypes_Pkg_long_convertion_allowed,
    PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_long,
    compare_PT0_PositionReport_T_Packet_TrainTypes_Pkg,
    get_PT0_PositionReport_T_Packet_TrainTypes_Pkg_signature,
    set_PT0_PositionReport_T_Packet_TrainTypes_Pkg_default_value,
    sizeof(PT0_PositionReport_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable;

int PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__526_to_string(pValue, pfnStrAppend, pData);
}

int string_to_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__526(str, pValue, endptr);
    }
    return nRet;
}

int is_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__526_double_conversion_allowed();
}

int is_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_long_convertion_allowed()
{
    if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__526_long_convertion_allowed();
}

void compare_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__526(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__526_to_double(pValue, nRetValue);
}

int PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimPT1_PositionReport_2BG_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__526_to_long(pValue, nRetValue);
}

int get_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__526_signature(pfnStrAppend, pData);
}

int set_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_default_value(void *pValue)
{
    return set_struct__526_default_value(pValue);
}

int check_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_Utils = {
    PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_string,
    check_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_string,
    string_to_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg,
    is_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_double,
    is_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_long_convertion_allowed,
    PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_long,
    compare_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg,
    get_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_signature,
    set_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_default_value,
    sizeof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable;

int PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__500_to_string(pValue, pfnStrAppend, pData);
}

int string_to_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__500(str, pValue, endptr);
    }
    return nRet;
}

int is_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__500_double_conversion_allowed();
}

int is_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_long_convertion_allowed()
{
    if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__500_long_convertion_allowed();
}

void compare_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__500(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__500_to_double(pValue, nRetValue);
}

int PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimPT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__500_to_long(pValue, nRetValue);
}

int get_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__500_signature(pfnStrAppend, pData);
}

int set_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_default_value(void *pValue)
{
    return set_struct__500_default_value(pValue);
}

int check_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_Utils = {
    PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_string,
    check_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_string,
    string_to_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg,
    is_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_double,
    is_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_long_convertion_allowed,
    PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_long,
    compare_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg,
    get_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_signature,
    set_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_default_value,
    sizeof(PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** aNID_RADIO_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable;

int aNID_RADIO_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__497_to_string(pValue, pfnStrAppend, pData);
}

int string_to_aNID_RADIO_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__497(str, pValue, endptr);
    }
    return nRet;
}

int is_aNID_RADIO_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable);
    }
    return is_array__497_double_conversion_allowed();
}

int is_aNID_RADIO_T_Packet_TrainTypes_Pkg_long_convertion_allowed()
{
    if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable);
    }
    return is_array__497_long_convertion_allowed();
}

void compare_aNID_RADIO_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__497(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int aNID_RADIO_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return array__497_to_double(pValue, nRetValue);
}

int aNID_RADIO_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimaNID_RADIO_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return array__497_to_long(pValue, nRetValue);
}

int get_aNID_RADIO_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__497_signature(pfnStrAppend, pData);
}

int set_aNID_RADIO_T_Packet_TrainTypes_Pkg_default_value(void *pValue)
{
    return set_array__497_default_value(pValue);
}

int check_aNID_RADIO_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static aNID_RADIO_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_aNID_RADIO_T_Packet_TrainTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_aNID_RADIO_T_Packet_TrainTypes_Pkg_Utils = {
    aNID_RADIO_T_Packet_TrainTypes_Pkg_to_string,
    check_aNID_RADIO_T_Packet_TrainTypes_Pkg_string,
    string_to_aNID_RADIO_T_Packet_TrainTypes_Pkg,
    is_aNID_RADIO_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    aNID_RADIO_T_Packet_TrainTypes_Pkg_to_double,
    is_aNID_RADIO_T_Packet_TrainTypes_Pkg_long_convertion_allowed,
    aNID_RADIO_T_Packet_TrainTypes_Pkg_to_long,
    compare_aNID_RADIO_T_Packet_TrainTypes_Pkg,
    get_aNID_RADIO_T_Packet_TrainTypes_Pkg_signature,
    set_aNID_RADIO_T_Packet_TrainTypes_Pkg_default_value,
    sizeof(aNID_RADIO_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** sNID_RADIO_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable;

int sNID_RADIO_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__492_to_string(pValue, pfnStrAppend, pData);
}

int string_to_sNID_RADIO_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__492(str, pValue, endptr);
    }
    return nRet;
}

int is_sNID_RADIO_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__492_double_conversion_allowed();
}

int is_sNID_RADIO_T_Packet_TrainTypes_Pkg_long_convertion_allowed()
{
    if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__492_long_convertion_allowed();
}

void compare_sNID_RADIO_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__492(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int sNID_RADIO_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__492_to_double(pValue, nRetValue);
}

int sNID_RADIO_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimsNID_RADIO_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__492_to_long(pValue, nRetValue);
}

int get_sNID_RADIO_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__492_signature(pfnStrAppend, pData);
}

int set_sNID_RADIO_T_Packet_TrainTypes_Pkg_default_value(void *pValue)
{
    return set_struct__492_default_value(pValue);
}

int check_sNID_RADIO_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static sNID_RADIO_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_sNID_RADIO_T_Packet_TrainTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_sNID_RADIO_T_Packet_TrainTypes_Pkg_Utils = {
    sNID_RADIO_T_Packet_TrainTypes_Pkg_to_string,
    check_sNID_RADIO_T_Packet_TrainTypes_Pkg_string,
    string_to_sNID_RADIO_T_Packet_TrainTypes_Pkg,
    is_sNID_RADIO_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    sNID_RADIO_T_Packet_TrainTypes_Pkg_to_double,
    is_sNID_RADIO_T_Packet_TrainTypes_Pkg_long_convertion_allowed,
    sNID_RADIO_T_Packet_TrainTypes_Pkg_to_long,
    compare_sNID_RADIO_T_Packet_TrainTypes_Pkg,
    get_sNID_RADIO_T_Packet_TrainTypes_Pkg_signature,
    set_sNID_RADIO_T_Packet_TrainTypes_Pkg_default_value,
    sizeof(sNID_RADIO_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** telephoneNumber_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable;

int telephoneNumber_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_15_to_string(pValue, pfnStrAppend, pData);
}

int string_to_telephoneNumber_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_15(str, pValue, endptr);
    }
    return nRet;
}

int is_telephoneNumber_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable);
    }
    return is_array_int_15_double_conversion_allowed();
}

int is_telephoneNumber_T_Packet_TrainTypes_Pkg_long_convertion_allowed()
{
    if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable);
    }
    return is_array_int_15_long_convertion_allowed();
}

void compare_telephoneNumber_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_15(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int telephoneNumber_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return array_int_15_to_double(pValue, nRetValue);
}

int telephoneNumber_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimtelephoneNumber_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return array_int_15_to_long(pValue, nRetValue);
}

int get_telephoneNumber_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_15_signature(pfnStrAppend, pData);
}

int set_telephoneNumber_T_Packet_TrainTypes_Pkg_default_value(void *pValue)
{
    return set_array_int_15_default_value(pValue);
}

int check_telephoneNumber_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static telephoneNumber_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_telephoneNumber_T_Packet_TrainTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_telephoneNumber_T_Packet_TrainTypes_Pkg_Utils = {
    telephoneNumber_T_Packet_TrainTypes_Pkg_to_string,
    check_telephoneNumber_T_Packet_TrainTypes_Pkg_string,
    string_to_telephoneNumber_T_Packet_TrainTypes_Pkg,
    is_telephoneNumber_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    telephoneNumber_T_Packet_TrainTypes_Pkg_to_double,
    is_telephoneNumber_T_Packet_TrainTypes_Pkg_long_convertion_allowed,
    telephoneNumber_T_Packet_TrainTypes_Pkg_to_long,
    compare_telephoneNumber_T_Packet_TrainTypes_Pkg,
    get_telephoneNumber_T_Packet_TrainTypes_Pkg_signature,
    set_telephoneNumber_T_Packet_TrainTypes_Pkg_default_value,
    sizeof(telephoneNumber_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** PT4_ErrorReporting_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable;

int PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__484_to_string(pValue, pfnStrAppend, pData);
}

int string_to_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__484(str, pValue, endptr);
    }
    return nRet;
}

int is_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__484_double_conversion_allowed();
}

int is_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_long_convertion_allowed()
{
    if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__484_long_convertion_allowed();
}

void compare_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__484(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__484_to_double(pValue, nRetValue);
}

int PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimPT4_ErrorReporting_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__484_to_long(pValue, nRetValue);
}

int get_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__484_signature(pfnStrAppend, pData);
}

int set_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_default_value(void *pValue)
{
    return set_struct__484_default_value(pValue);
}

int check_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_Utils = {
    PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_string,
    check_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_string,
    string_to_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg,
    is_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_double,
    is_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_long_convertion_allowed,
    PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_long,
    compare_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg,
    get_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_signature,
    set_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_default_value,
    sizeof(PT4_ErrorReporting_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** PT5_TrainRunningNumber_Packet_TrainTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable;

int PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__479_to_string(pValue, pfnStrAppend, pData);
}

int string_to_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__479(str, pValue, endptr);
    }
    return nRet;
}

int is_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__479_double_conversion_allowed();
}

int is_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_long_convertion_allowed()
{
    if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__479_long_convertion_allowed();
}

void compare_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__479(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__479_to_double(pValue, nRetValue);
}

int PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimPT5_TrainRunningNumber_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__479_to_long(pValue, nRetValue);
}

int get_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__479_signature(pfnStrAppend, pData);
}

int set_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_default_value(void *pValue)
{
    return set_struct__479_default_value(pValue);
}

int check_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg rTemp;
    return string_to_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_Utils = {
    PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_string,
    check_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_string,
    string_to_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg,
    is_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_double_conversion_allowed,
    PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_double,
    is_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_long_convertion_allowed,
    PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_long,
    compare_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg,
    get_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_signature,
    set_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_default_value,
    sizeof(PT5_TrainRunningNumber_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable;

int PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__474_to_string(pValue, pfnStrAppend, pData);
}

int string_to_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__474(str, pValue, endptr);
    }
    return nRet;
}

int is_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__474_double_conversion_allowed();
}

int is_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_long_convertion_allowed()
{
    if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__474_long_convertion_allowed();
}

void compare_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__474(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__474_to_double(pValue, nRetValue);
}

int PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimPT9_Level23_TransitionInformation_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__474_to_long(pValue, nRetValue);
}

int get_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__474_signature(pfnStrAppend, pData);
}

int set_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_default_value(void *pValue)
{
    return set_struct__474_default_value(pValue);
}

int check_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_Utils = {
    PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_string,
    check_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_string,
    string_to_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg,
    is_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_double,
    is_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_long_convertion_allowed,
    PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_long,
    compare_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg,
    get_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_signature,
    set_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_default_value,
    sizeof(PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable;

int PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__458_to_string(pValue, pfnStrAppend, pData);
}

int string_to_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__458(str, pValue, endptr);
    }
    return nRet;
}

int is_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__458_double_conversion_allowed();
}

int is_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_long_convertion_allowed()
{
    if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__458_long_convertion_allowed();
}

void compare_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__458(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__458_to_double(pValue, nRetValue);
}

int PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimPT11_ValidatedTrainData_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__458_to_long(pValue, nRetValue);
}

int get_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__458_signature(pfnStrAppend, pData);
}

int set_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_default_value(void *pValue)
{
    return set_struct__458_default_value(pValue);
}

int check_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_Utils = {
    PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_string,
    check_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_string,
    string_to_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,
    is_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_double,
    is_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_long_convertion_allowed,
    PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_long,
    compare_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg,
    get_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_signature,
    set_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_default_value,
    sizeof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** aTractionIdentity_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable;

int aTractionIdentity_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__455_to_string(pValue, pfnStrAppend, pData);
}

int string_to_aTractionIdentity_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__455(str, pValue, endptr);
    }
    return nRet;
}

int is_aTractionIdentity_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable);
    }
    return is_array__455_double_conversion_allowed();
}

int is_aTractionIdentity_T_Packet_TrainTypes_Pkg_long_convertion_allowed()
{
    if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable);
    }
    return is_array__455_long_convertion_allowed();
}

void compare_aTractionIdentity_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__455(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int aTractionIdentity_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return array__455_to_double(pValue, nRetValue);
}

int aTractionIdentity_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimaTractionIdentity_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return array__455_to_long(pValue, nRetValue);
}

int get_aTractionIdentity_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__455_signature(pfnStrAppend, pData);
}

int set_aTractionIdentity_T_Packet_TrainTypes_Pkg_default_value(void *pValue)
{
    return set_array__455_default_value(pValue);
}

int check_aTractionIdentity_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static aTractionIdentity_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_aTractionIdentity_T_Packet_TrainTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_aTractionIdentity_T_Packet_TrainTypes_Pkg_Utils = {
    aTractionIdentity_T_Packet_TrainTypes_Pkg_to_string,
    check_aTractionIdentity_T_Packet_TrainTypes_Pkg_string,
    string_to_aTractionIdentity_T_Packet_TrainTypes_Pkg,
    is_aTractionIdentity_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    aTractionIdentity_T_Packet_TrainTypes_Pkg_to_double,
    is_aTractionIdentity_T_Packet_TrainTypes_Pkg_long_convertion_allowed,
    aTractionIdentity_T_Packet_TrainTypes_Pkg_to_long,
    compare_aTractionIdentity_T_Packet_TrainTypes_Pkg,
    get_aTractionIdentity_T_Packet_TrainTypes_Pkg_signature,
    set_aTractionIdentity_T_Packet_TrainTypes_Pkg_default_value,
    sizeof(aTractionIdentity_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** sTractionIdentity_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable;

int sTractionIdentity_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__450_to_string(pValue, pfnStrAppend, pData);
}

int string_to_sTractionIdentity_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__450(str, pValue, endptr);
    }
    return nRet;
}

int is_sTractionIdentity_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__450_double_conversion_allowed();
}

int is_sTractionIdentity_T_Packet_TrainTypes_Pkg_long_convertion_allowed()
{
    if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable);
    }
    return is_struct__450_long_convertion_allowed();
}

void compare_sTractionIdentity_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__450(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int sTractionIdentity_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__450_to_double(pValue, nRetValue);
}

int sTractionIdentity_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimsTractionIdentity_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return struct__450_to_long(pValue, nRetValue);
}

int get_sTractionIdentity_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__450_signature(pfnStrAppend, pData);
}

int set_sTractionIdentity_T_Packet_TrainTypes_Pkg_default_value(void *pValue)
{
    return set_struct__450_default_value(pValue);
}

int check_sTractionIdentity_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static sTractionIdentity_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_sTractionIdentity_T_Packet_TrainTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_sTractionIdentity_T_Packet_TrainTypes_Pkg_Utils = {
    sTractionIdentity_T_Packet_TrainTypes_Pkg_to_string,
    check_sTractionIdentity_T_Packet_TrainTypes_Pkg_string,
    string_to_sTractionIdentity_T_Packet_TrainTypes_Pkg,
    is_sTractionIdentity_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    sTractionIdentity_T_Packet_TrainTypes_Pkg_to_double,
    is_sTractionIdentity_T_Packet_TrainTypes_Pkg_long_convertion_allowed,
    sTractionIdentity_T_Packet_TrainTypes_Pkg_to_long,
    compare_sTractionIdentity_T_Packet_TrainTypes_Pkg,
    get_sTractionIdentity_T_Packet_TrainTypes_Pkg_signature,
    set_sTractionIdentity_T_Packet_TrainTypes_Pkg_default_value,
    sizeof(sTractionIdentity_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** aNID_NTC_T_Packet_TrainTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable;

int aNID_NTC_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_3_to_string(pValue, pfnStrAppend, pData);
}

int string_to_aNID_NTC_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_3(str, pValue, endptr);
    }
    return nRet;
}

int is_aNID_NTC_T_Packet_TrainTypes_Pkg_double_conversion_allowed()
{
    if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable);
    }
    return is_array_int_3_double_conversion_allowed();
}

int is_aNID_NTC_T_Packet_TrainTypes_Pkg_long_convertion_allowed()
{
    if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable);
    }
    return is_array_int_3_long_convertion_allowed();
}

void compare_aNID_NTC_T_Packet_TrainTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable != NULL
        && pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable->m_version >= Scv612
        && pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_3(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int aNID_NTC_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return array_int_3_to_double(pValue, nRetValue);
}

int aNID_NTC_T_Packet_TrainTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimaNID_NTC_T_Packet_TrainTypes_PkgVTable, nRetValue);
    }
    return array_int_3_to_long(pValue, nRetValue);
}

int get_aNID_NTC_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_3_signature(pfnStrAppend, pData);
}

int set_aNID_NTC_T_Packet_TrainTypes_Pkg_default_value(void *pValue)
{
    return set_array_int_3_default_value(pValue);
}

int check_aNID_NTC_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr)
{
    static aNID_NTC_T_Packet_TrainTypes_Pkg rTemp;
    return string_to_aNID_NTC_T_Packet_TrainTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_aNID_NTC_T_Packet_TrainTypes_Pkg_Utils = {
    aNID_NTC_T_Packet_TrainTypes_Pkg_to_string,
    check_aNID_NTC_T_Packet_TrainTypes_Pkg_string,
    string_to_aNID_NTC_T_Packet_TrainTypes_Pkg,
    is_aNID_NTC_T_Packet_TrainTypes_Pkg_double_conversion_allowed,
    aNID_NTC_T_Packet_TrainTypes_Pkg_to_double,
    is_aNID_NTC_T_Packet_TrainTypes_Pkg_long_convertion_allowed,
    aNID_NTC_T_Packet_TrainTypes_Pkg_to_long,
    compare_aNID_NTC_T_Packet_TrainTypes_Pkg,
    get_aNID_NTC_T_Packet_TrainTypes_Pkg_signature,
    set_aNID_NTC_T_Packet_TrainTypes_Pkg_default_value,
    sizeof(aNID_NTC_T_Packet_TrainTypes_Pkg)
};

/****************************************************************
 ** Position_Report_TrainToTrack 
 ****************************************************************/

struct SimTypeVTable *pSimPosition_Report_TrainToTrackVTable;

int Position_Report_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimPosition_Report_TrainToTrackVTable != NULL
        && pSimPosition_Report_TrainToTrackVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPosition_Report_TrainToTrackVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__531_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Position_Report_TrainToTrack(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimPosition_Report_TrainToTrackVTable != NULL) {
        nRet=string_to_VTable(str, pSimPosition_Report_TrainToTrackVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__531(str, pValue, endptr);
    }
    return nRet;
}

int is_Position_Report_TrainToTrack_double_conversion_allowed()
{
    if (pSimPosition_Report_TrainToTrackVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPosition_Report_TrainToTrackVTable);
    }
    return is_struct__531_double_conversion_allowed();
}

int is_Position_Report_TrainToTrack_long_convertion_allowed()
{
    if (pSimPosition_Report_TrainToTrackVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimPosition_Report_TrainToTrackVTable);
    }
    return is_struct__531_long_convertion_allowed();
}

void compare_Position_Report_TrainToTrack(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimPosition_Report_TrainToTrackVTable != NULL
        && pSimPosition_Report_TrainToTrackVTable->m_version >= Scv612
        && pSimPosition_Report_TrainToTrackVTable->m_pfnCompare != NULL) {
        if (pSimPosition_Report_TrainToTrackVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimPosition_Report_TrainToTrackVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimPosition_Report_TrainToTrackVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__531(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Position_Report_TrainToTrack_to_double(const void *pValue, double *nRetValue)
{
    if (pSimPosition_Report_TrainToTrackVTable != NULL) {
        return VTable_to_double(pValue, pSimPosition_Report_TrainToTrackVTable, nRetValue);
    }
    return struct__531_to_double(pValue, nRetValue);
}

int Position_Report_TrainToTrack_to_long(const void *pValue, long *nRetValue)
{
    if (pSimPosition_Report_TrainToTrackVTable != NULL) {
        return VTable_to_long(pValue, pSimPosition_Report_TrainToTrackVTable, nRetValue);
    }
    return struct__531_to_long(pValue, nRetValue);
}

int get_Position_Report_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__531_signature(pfnStrAppend, pData);
}

int set_Position_Report_TrainToTrack_default_value(void *pValue)
{
    return set_struct__531_default_value(pValue);
}

int check_Position_Report_TrainToTrack_string(const char *str, char **endptr)
{
    static Position_Report_TrainToTrack rTemp;
    return string_to_Position_Report_TrainToTrack(str, &rTemp, endptr);
}

SimTypeUtils _Type_Position_Report_TrainToTrack_Utils = {
    Position_Report_TrainToTrack_to_string,
    check_Position_Report_TrainToTrack_string,
    string_to_Position_Report_TrainToTrack,
    is_Position_Report_TrainToTrack_double_conversion_allowed,
    Position_Report_TrainToTrack_to_double,
    is_Position_Report_TrainToTrack_long_convertion_allowed,
    Position_Report_TrainToTrack_to_long,
    compare_Position_Report_TrainToTrack,
    get_Position_Report_TrainToTrack_signature,
    set_Position_Report_TrainToTrack_default_value,
    sizeof(Position_Report_TrainToTrack)
};

/****************************************************************
 ** Position_Report_based_on_two_balise_groups_TrainToTrack 
 ****************************************************************/

struct SimTypeVTable *pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable;

int Position_Report_based_on_two_balise_groups_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable != NULL
        && pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__506_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Position_Report_based_on_two_balise_groups_TrainToTrack(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable != NULL) {
        nRet=string_to_VTable(str, pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__506(str, pValue, endptr);
    }
    return nRet;
}

int is_Position_Report_based_on_two_balise_groups_TrainToTrack_double_conversion_allowed()
{
    if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable);
    }
    return is_struct__506_double_conversion_allowed();
}

int is_Position_Report_based_on_two_balise_groups_TrainToTrack_long_convertion_allowed()
{
    if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable);
    }
    return is_struct__506_long_convertion_allowed();
}

void compare_Position_Report_based_on_two_balise_groups_TrainToTrack(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable != NULL
        && pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable->m_version >= Scv612
        && pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable->m_pfnCompare != NULL) {
        if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__506(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Position_Report_based_on_two_balise_groups_TrainToTrack_to_double(const void *pValue, double *nRetValue)
{
    if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable != NULL) {
        return VTable_to_double(pValue, pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable, nRetValue);
    }
    return struct__506_to_double(pValue, nRetValue);
}

int Position_Report_based_on_two_balise_groups_TrainToTrack_to_long(const void *pValue, long *nRetValue)
{
    if (pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable != NULL) {
        return VTable_to_long(pValue, pSimPosition_Report_based_on_two_balise_groups_TrainToTrackVTable, nRetValue);
    }
    return struct__506_to_long(pValue, nRetValue);
}

int get_Position_Report_based_on_two_balise_groups_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__506_signature(pfnStrAppend, pData);
}

int set_Position_Report_based_on_two_balise_groups_TrainToTrack_default_value(void *pValue)
{
    return set_struct__506_default_value(pValue);
}

int check_Position_Report_based_on_two_balise_groups_TrainToTrack_string(const char *str, char **endptr)
{
    static Position_Report_based_on_two_balise_groups_TrainToTrack rTemp;
    return string_to_Position_Report_based_on_two_balise_groups_TrainToTrack(str, &rTemp, endptr);
}

SimTypeUtils _Type_Position_Report_based_on_two_balise_groups_TrainToTrack_Utils = {
    Position_Report_based_on_two_balise_groups_TrainToTrack_to_string,
    check_Position_Report_based_on_two_balise_groups_TrainToTrack_string,
    string_to_Position_Report_based_on_two_balise_groups_TrainToTrack,
    is_Position_Report_based_on_two_balise_groups_TrainToTrack_double_conversion_allowed,
    Position_Report_based_on_two_balise_groups_TrainToTrack_to_double,
    is_Position_Report_based_on_two_balise_groups_TrainToTrack_long_convertion_allowed,
    Position_Report_based_on_two_balise_groups_TrainToTrack_to_long,
    compare_Position_Report_based_on_two_balise_groups_TrainToTrack,
    get_Position_Report_based_on_two_balise_groups_TrainToTrack_signature,
    set_Position_Report_based_on_two_balise_groups_TrainToTrack_default_value,
    sizeof(Position_Report_based_on_two_balise_groups_TrainToTrack)
};

/****************************************************************
 ** BCD_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimBCD_T_Obu_BasicTypes_PkgVTable;

int BCD_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBCD_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimBCD_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBCD_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BCD_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBCD_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimBCD_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_BCD_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimBCD_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBCD_T_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_BCD_T_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimBCD_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimBCD_T_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_BCD_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBCD_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimBCD_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimBCD_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimBCD_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBCD_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBCD_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BCD_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBCD_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimBCD_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int BCD_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimBCD_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimBCD_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_BCD_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_BCD_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_BCD_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static BCD_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_BCD_T_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_BCD_T_Obu_BasicTypes_Pkg_Utils = {
    BCD_T_Obu_BasicTypes_Pkg_to_string,
    check_BCD_T_Obu_BasicTypes_Pkg_string,
    string_to_BCD_T_Obu_BasicTypes_Pkg,
    is_BCD_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    BCD_T_Obu_BasicTypes_Pkg_to_double,
    is_BCD_T_Obu_BasicTypes_Pkg_long_convertion_allowed,
    BCD_T_Obu_BasicTypes_Pkg_to_long,
    compare_BCD_T_Obu_BasicTypes_Pkg,
    get_BCD_T_Obu_BasicTypes_Pkg_signature,
    set_BCD_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(BCD_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** L_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimL_internal_Type_Obu_BasicTypes_PkgVTable;

int L_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_L_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimL_internal_Type_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_L_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimL_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_L_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimL_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_L_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int L_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimL_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int L_internal_Type_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimL_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_L_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_L_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_L_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static L_internal_Type_Obu_BasicTypes_Pkg rTemp;
    return string_to_L_internal_Type_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils = {
    L_internal_Type_Obu_BasicTypes_Pkg_to_string,
    check_L_internal_Type_Obu_BasicTypes_Pkg_string,
    string_to_L_internal_Type_Obu_BasicTypes_Pkg,
    is_L_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed,
    L_internal_Type_Obu_BasicTypes_Pkg_to_double,
    is_L_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed,
    L_internal_Type_Obu_BasicTypes_Pkg_to_long,
    compare_L_internal_Type_Obu_BasicTypes_Pkg,
    get_L_internal_Type_Obu_BasicTypes_Pkg_signature,
    set_L_internal_Type_Obu_BasicTypes_Pkg_default_value,
    sizeof(L_internal_Type_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** V_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimV_internal_Type_Obu_BasicTypes_PkgVTable;

int V_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_V_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimV_internal_Type_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_V_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimV_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_V_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimV_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_V_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int V_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimV_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int V_internal_Type_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimV_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_V_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_V_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_V_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static V_internal_Type_Obu_BasicTypes_Pkg rTemp;
    return string_to_V_internal_Type_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils = {
    V_internal_Type_Obu_BasicTypes_Pkg_to_string,
    check_V_internal_Type_Obu_BasicTypes_Pkg_string,
    string_to_V_internal_Type_Obu_BasicTypes_Pkg,
    is_V_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed,
    V_internal_Type_Obu_BasicTypes_Pkg_to_double,
    is_V_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed,
    V_internal_Type_Obu_BasicTypes_Pkg_to_long,
    compare_V_internal_Type_Obu_BasicTypes_Pkg,
    get_V_internal_Type_Obu_BasicTypes_Pkg_signature,
    set_V_internal_Type_Obu_BasicTypes_Pkg_default_value,
    sizeof(V_internal_Type_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** LocWithInAcc_T_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable;

int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__431_to_string(pValue, pfnStrAppend, pData);
}

int string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__431(str, pValue, endptr);
    }
    return nRet;
}

int is_LocWithInAcc_T_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable);
    }
    return is_struct__431_double_conversion_allowed();
}

int is_LocWithInAcc_T_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable);
    }
    return is_struct__431_long_convertion_allowed();
}

void compare_LocWithInAcc_T_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL
        && pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__431(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return struct__431_to_double(pValue, nRetValue);
}

int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return struct__431_to_long(pValue, nRetValue);
}

int get_LocWithInAcc_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__431_signature(pfnStrAppend, pData);
}

int set_LocWithInAcc_T_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_struct__431_default_value(pValue);
}

int check_LocWithInAcc_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static LocWithInAcc_T_Obu_BasicTypes_Pkg rTemp;
    return string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils = {
    LocWithInAcc_T_Obu_BasicTypes_Pkg_to_string,
    check_LocWithInAcc_T_Obu_BasicTypes_Pkg_string,
    string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg,
    is_LocWithInAcc_T_Obu_BasicTypes_Pkg_double_conversion_allowed,
    LocWithInAcc_T_Obu_BasicTypes_Pkg_to_double,
    is_LocWithInAcc_T_Obu_BasicTypes_Pkg_long_convertion_allowed,
    LocWithInAcc_T_Obu_BasicTypes_Pkg_to_long,
    compare_LocWithInAcc_T_Obu_BasicTypes_Pkg,
    get_LocWithInAcc_T_Obu_BasicTypes_Pkg_signature,
    set_LocWithInAcc_T_Obu_BasicTypes_Pkg_default_value,
    sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** trainProperties_T_TrainPosition_Types_Pck 
 ****************************************************************/

struct SimTypeVTable *pSimtrainProperties_T_TrainPosition_Types_PckVTable;

int trainProperties_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimtrainProperties_T_TrainPosition_Types_PckVTable != NULL
        && pSimtrainProperties_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimtrainProperties_T_TrainPosition_Types_PckVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__437_to_string(pValue, pfnStrAppend, pData);
}

int string_to_trainProperties_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimtrainProperties_T_TrainPosition_Types_PckVTable != NULL) {
        nRet=string_to_VTable(str, pSimtrainProperties_T_TrainPosition_Types_PckVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__437(str, pValue, endptr);
    }
    return nRet;
}

int is_trainProperties_T_TrainPosition_Types_Pck_double_conversion_allowed()
{
    if (pSimtrainProperties_T_TrainPosition_Types_PckVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimtrainProperties_T_TrainPosition_Types_PckVTable);
    }
    return is_struct__437_double_conversion_allowed();
}

int is_trainProperties_T_TrainPosition_Types_Pck_long_convertion_allowed()
{
    if (pSimtrainProperties_T_TrainPosition_Types_PckVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimtrainProperties_T_TrainPosition_Types_PckVTable);
    }
    return is_struct__437_long_convertion_allowed();
}

void compare_trainProperties_T_TrainPosition_Types_Pck(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimtrainProperties_T_TrainPosition_Types_PckVTable != NULL
        && pSimtrainProperties_T_TrainPosition_Types_PckVTable->m_version >= Scv612
        && pSimtrainProperties_T_TrainPosition_Types_PckVTable->m_pfnCompare != NULL) {
        if (pSimtrainProperties_T_TrainPosition_Types_PckVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimtrainProperties_T_TrainPosition_Types_PckVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimtrainProperties_T_TrainPosition_Types_PckVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__437(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int trainProperties_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nRetValue)
{
    if (pSimtrainProperties_T_TrainPosition_Types_PckVTable != NULL) {
        return VTable_to_double(pValue, pSimtrainProperties_T_TrainPosition_Types_PckVTable, nRetValue);
    }
    return struct__437_to_double(pValue, nRetValue);
}

int trainProperties_T_TrainPosition_Types_Pck_to_long(const void *pValue, long *nRetValue)
{
    if (pSimtrainProperties_T_TrainPosition_Types_PckVTable != NULL) {
        return VTable_to_long(pValue, pSimtrainProperties_T_TrainPosition_Types_PckVTable, nRetValue);
    }
    return struct__437_to_long(pValue, nRetValue);
}

int get_trainProperties_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__437_signature(pfnStrAppend, pData);
}

int set_trainProperties_T_TrainPosition_Types_Pck_default_value(void *pValue)
{
    return set_struct__437_default_value(pValue);
}

int check_trainProperties_T_TrainPosition_Types_Pck_string(const char *str, char **endptr)
{
    static trainProperties_T_TrainPosition_Types_Pck rTemp;
    return string_to_trainProperties_T_TrainPosition_Types_Pck(str, &rTemp, endptr);
}

SimTypeUtils _Type_trainProperties_T_TrainPosition_Types_Pck_Utils = {
    trainProperties_T_TrainPosition_Types_Pck_to_string,
    check_trainProperties_T_TrainPosition_Types_Pck_string,
    string_to_trainProperties_T_TrainPosition_Types_Pck,
    is_trainProperties_T_TrainPosition_Types_Pck_double_conversion_allowed,
    trainProperties_T_TrainPosition_Types_Pck_to_double,
    is_trainProperties_T_TrainPosition_Types_Pck_long_convertion_allowed,
    trainProperties_T_TrainPosition_Types_Pck_to_long,
    compare_trainProperties_T_TrainPosition_Types_Pck,
    get_trainProperties_T_TrainPosition_Types_Pck_signature,
    set_trainProperties_T_TrainPosition_Types_Pck_default_value,
    sizeof(trainProperties_T_TrainPosition_Types_Pck)
};

#include "C:/program files/esterel technologies/scade r16.1/scade/lib/kcg_conv.c"
