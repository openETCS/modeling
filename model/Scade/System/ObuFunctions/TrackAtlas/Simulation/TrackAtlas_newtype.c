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
 ** struct__246 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__246VTable;

static SimFieldUtils struct__246_fields[] = {
    {"target", offsetof(struct__246,target), &_Type_kcg_int_Utils},
    {"speed", offsetof(struct__246,speed), &_Type_kcg_int_Utils},
};

int struct__246_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__246VTable != NULL
        && pSimstruct__246VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__246VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__246_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__246(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__246VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__246VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__246_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__246_double_conversion_allowed()
{
    if (pSimstruct__246VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__246VTable);
    }
    return 0;
}

int is_struct__246_long_convertion_allowed()
{
    if (pSimstruct__246VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__246VTable);
    }
    return 0;
}

void compare_struct__246(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__246VTable != NULL
        && pSimstruct__246VTable->m_version >= Scv612
        && pSimstruct__246VTable->m_pfnCompare != NULL) {
        if (pSimstruct__246VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__246VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__246VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__246_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__246_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__246VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__246VTable, nRetValue);
    }
    return 0;
}

int struct__246_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__246VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__246VTable, nRetValue);
    }
    return 0;
}

int get_struct__246_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__246_fields, 2, pfnStrAppend, pData);
}

int set_struct__246_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__246*)pValue)->target));
    set_kcg_int_default_value(&(((struct__246*)pValue)->speed));
    return 1;
}

int check_struct__246_string(const char *str, char **endptr)
{
    static struct__246 rTemp;
    return string_to_struct__246(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__246_Utils = {
    struct__246_to_string,
    check_struct__246_string,
    string_to_struct__246,
    is_struct__246_double_conversion_allowed,
    struct__246_to_double,
    is_struct__246_long_convertion_allowed,
    struct__246_to_long,
    compare_struct__246,
    get_struct__246_signature,
    set_struct__246_default_value,
    sizeof(struct__246)
};

/****************************************************************
 ** array__251 
 ****************************************************************/

struct SimTypeVTable *pSimarray__251VTable;

int array__251_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__251VTable != NULL
        && pSimarray__251VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__251VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__246_to_string, 33, sizeof(struct__246), pfnStrAppend, pData);
}

int string_to_array__251(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__251VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__251VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__246_Utils, 33, sizeof(struct__246), endptr);
    }
    return nRet;
}

int is_array__251_double_conversion_allowed()
{
    if (pSimarray__251VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__251VTable);
    }
    return 0;
}

int is_array__251_long_convertion_allowed()
{
    if (pSimarray__251VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__251VTable);
    }
    return 0;
}

void compare_array__251(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__251VTable != NULL
        && pSimarray__251VTable->m_version >= Scv612
        && pSimarray__251VTable->m_pfnCompare != NULL) {
        if (pSimarray__251VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__251VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__251VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__246, 33, sizeof(struct__246), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__251_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__251VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__251VTable, nRetValue);
    }
    return 0;
}

int array__251_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__251VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__251VTable, nRetValue);
    }
    return 0;
}

int get_array__251_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__246_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__251_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__246_default_value(&((struct__246*)pValue)[i]);
    return 1;
}

int check_array__251_string(const char *str, char **endptr)
{
    static array__251 rTemp;
    return string_to_array__251(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__251_Utils = {
    array__251_to_string,
    check_array__251_string,
    string_to_array__251,
    is_array__251_double_conversion_allowed,
    array__251_to_double,
    is_array__251_long_convertion_allowed,
    array__251_to_long,
    compare_array__251,
    get_array__251_signature,
    set_array__251_default_value,
    sizeof(array__251)
};

/****************************************************************
 ** array__254 
 ****************************************************************/

struct SimTypeVTable *pSimarray__254VTable;

int array__254_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__254VTable != NULL
        && pSimarray__254VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__254VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array__251_to_string, 33, sizeof(array__251), pfnStrAppend, pData);
}

int string_to_array__254(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__254VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__254VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array__251_Utils, 33, sizeof(array__251), endptr);
    }
    return nRet;
}

int is_array__254_double_conversion_allowed()
{
    if (pSimarray__254VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__254VTable);
    }
    return 0;
}

int is_array__254_long_convertion_allowed()
{
    if (pSimarray__254VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__254VTable);
    }
    return 0;
}

void compare_array__254(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__254VTable != NULL
        && pSimarray__254VTable->m_version >= Scv612
        && pSimarray__254VTable->m_pfnCompare != NULL) {
        if (pSimarray__254VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__254VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__254VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array__251, 33, sizeof(array__251), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__254_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__254VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__254VTable, nRetValue);
    }
    return 0;
}

int array__254_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__254VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__254VTable, nRetValue);
    }
    return 0;
}

int get_array__254_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array__251_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__254_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_array__251_default_value(&((array__251*)pValue)[i]);
    return 1;
}

int check_array__254_string(const char *str, char **endptr)
{
    static array__254 rTemp;
    return string_to_array__254(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__254_Utils = {
    array__254_to_string,
    check_array__254_string,
    string_to_array__254,
    is_array__254_double_conversion_allowed,
    array__254_to_double,
    is_array__254_long_convertion_allowed,
    array__254_to_long,
    compare_array__254,
    get_array__254_signature,
    set_array__254_default_value,
    sizeof(array__254)
};

/****************************************************************
 ** array_int_33 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_33VTable;

int array_int_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_33VTable != NULL
        && pSimarray_int_33VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_33VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 33, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_33(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_33VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_33VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 33, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_33_double_conversion_allowed()
{
    if (pSimarray_int_33VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_33VTable);
    }
    return 0;
}

int is_array_int_33_long_convertion_allowed()
{
    if (pSimarray_int_33VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_33VTable);
    }
    return 0;
}

void compare_array_int_33(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_33VTable != NULL
        && pSimarray_int_33VTable->m_version >= Scv612
        && pSimarray_int_33VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_33VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_33VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_33VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 33, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_33_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_33VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_33VTable, nRetValue);
    }
    return 0;
}

int array_int_33_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_33VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_33VTable, nRetValue);
    }
    return 0;
}

int get_array_int_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_33_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_33_string(const char *str, char **endptr)
{
    static array_int_33 rTemp;
    return string_to_array_int_33(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_33_Utils = {
    array_int_33_to_string,
    check_array_int_33_string,
    string_to_array_int_33,
    is_array_int_33_double_conversion_allowed,
    array_int_33_to_double,
    is_array_int_33_long_convertion_allowed,
    array_int_33_to_long,
    compare_array_int_33,
    get_array_int_33_signature,
    set_array_int_33_default_value,
    sizeof(array_int_33)
};

/****************************************************************
 ** SSP_section_t_TA_MRSP 
 ****************************************************************/

struct SimTypeVTable *pSimSSP_section_t_TA_MRSPVTable;

int SSP_section_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSP_section_t_TA_MRSPVTable != NULL
        && pSimSSP_section_t_TA_MRSPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSP_section_t_TA_MRSPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__246_to_string(pValue, pfnStrAppend, pData);
}

int string_to_SSP_section_t_TA_MRSP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSP_section_t_TA_MRSPVTable != NULL) {
        nRet=string_to_VTable(str, pSimSSP_section_t_TA_MRSPVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__246(str, pValue, endptr);
    }
    return nRet;
}

int is_SSP_section_t_TA_MRSP_double_conversion_allowed()
{
    if (pSimSSP_section_t_TA_MRSPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSP_section_t_TA_MRSPVTable);
    }
    return is_struct__246_double_conversion_allowed();
}

int is_SSP_section_t_TA_MRSP_long_convertion_allowed()
{
    if (pSimSSP_section_t_TA_MRSPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimSSP_section_t_TA_MRSPVTable);
    }
    return is_struct__246_long_convertion_allowed();
}

void compare_SSP_section_t_TA_MRSP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSP_section_t_TA_MRSPVTable != NULL
        && pSimSSP_section_t_TA_MRSPVTable->m_version >= Scv612
        && pSimSSP_section_t_TA_MRSPVTable->m_pfnCompare != NULL) {
        if (pSimSSP_section_t_TA_MRSPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSP_section_t_TA_MRSPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSP_section_t_TA_MRSPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__246(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSP_section_t_TA_MRSP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSP_section_t_TA_MRSPVTable != NULL) {
        return VTable_to_double(pValue, pSimSSP_section_t_TA_MRSPVTable, nRetValue);
    }
    return struct__246_to_double(pValue, nRetValue);
}

int SSP_section_t_TA_MRSP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimSSP_section_t_TA_MRSPVTable != NULL) {
        return VTable_to_long(pValue, pSimSSP_section_t_TA_MRSPVTable, nRetValue);
    }
    return struct__246_to_long(pValue, nRetValue);
}

int get_SSP_section_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__246_signature(pfnStrAppend, pData);
}

int set_SSP_section_t_TA_MRSP_default_value(void *pValue)
{
    return set_struct__246_default_value(pValue);
}

int check_SSP_section_t_TA_MRSP_string(const char *str, char **endptr)
{
    static SSP_section_t_TA_MRSP rTemp;
    return string_to_SSP_section_t_TA_MRSP(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSP_section_t_TA_MRSP_Utils = {
    SSP_section_t_TA_MRSP_to_string,
    check_SSP_section_t_TA_MRSP_string,
    string_to_SSP_section_t_TA_MRSP,
    is_SSP_section_t_TA_MRSP_double_conversion_allowed,
    SSP_section_t_TA_MRSP_to_double,
    is_SSP_section_t_TA_MRSP_long_convertion_allowed,
    SSP_section_t_TA_MRSP_to_long,
    compare_SSP_section_t_TA_MRSP,
    get_SSP_section_t_TA_MRSP_signature,
    set_SSP_section_t_TA_MRSP_default_value,
    sizeof(SSP_section_t_TA_MRSP)
};

/****************************************************************
 ** SSP_t_section_t_TA_MRSP 
 ****************************************************************/

struct SimTypeVTable *pSimSSP_t_section_t_TA_MRSPVTable;

int SSP_t_section_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSP_t_section_t_TA_MRSPVTable != NULL
        && pSimSSP_t_section_t_TA_MRSPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSP_t_section_t_TA_MRSPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_SSP_t_section_t_TA_MRSP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSP_t_section_t_TA_MRSPVTable != NULL) {
        nRet=string_to_VTable(str, pSimSSP_t_section_t_TA_MRSPVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_SSP_t_section_t_TA_MRSP_double_conversion_allowed()
{
    if (pSimSSP_t_section_t_TA_MRSPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSP_t_section_t_TA_MRSPVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_SSP_t_section_t_TA_MRSP_long_convertion_allowed()
{
    if (pSimSSP_t_section_t_TA_MRSPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimSSP_t_section_t_TA_MRSPVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_SSP_t_section_t_TA_MRSP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSP_t_section_t_TA_MRSPVTable != NULL
        && pSimSSP_t_section_t_TA_MRSPVTable->m_version >= Scv612
        && pSimSSP_t_section_t_TA_MRSPVTable->m_pfnCompare != NULL) {
        if (pSimSSP_t_section_t_TA_MRSPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSP_t_section_t_TA_MRSPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSP_t_section_t_TA_MRSPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSP_t_section_t_TA_MRSP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSP_t_section_t_TA_MRSPVTable != NULL) {
        return VTable_to_double(pValue, pSimSSP_t_section_t_TA_MRSPVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int SSP_t_section_t_TA_MRSP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimSSP_t_section_t_TA_MRSPVTable != NULL) {
        return VTable_to_long(pValue, pSimSSP_t_section_t_TA_MRSPVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_SSP_t_section_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_SSP_t_section_t_TA_MRSP_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_SSP_t_section_t_TA_MRSP_string(const char *str, char **endptr)
{
    static SSP_t_section_t_TA_MRSP rTemp;
    return string_to_SSP_t_section_t_TA_MRSP(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSP_t_section_t_TA_MRSP_Utils = {
    SSP_t_section_t_TA_MRSP_to_string,
    check_SSP_t_section_t_TA_MRSP_string,
    string_to_SSP_t_section_t_TA_MRSP,
    is_SSP_t_section_t_TA_MRSP_double_conversion_allowed,
    SSP_t_section_t_TA_MRSP_to_double,
    is_SSP_t_section_t_TA_MRSP_long_convertion_allowed,
    SSP_t_section_t_TA_MRSP_to_long,
    compare_SSP_t_section_t_TA_MRSP,
    get_SSP_t_section_t_TA_MRSP_signature,
    set_SSP_t_section_t_TA_MRSP_default_value,
    sizeof(SSP_t_section_t_TA_MRSP)
};

/****************************************************************
 ** SSP_s_section_t_TA_MRSP 
 ****************************************************************/

struct SimTypeVTable *pSimSSP_s_section_t_TA_MRSPVTable;

int SSP_s_section_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSP_s_section_t_TA_MRSPVTable != NULL
        && pSimSSP_s_section_t_TA_MRSPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSP_s_section_t_TA_MRSPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_SSP_s_section_t_TA_MRSP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSP_s_section_t_TA_MRSPVTable != NULL) {
        nRet=string_to_VTable(str, pSimSSP_s_section_t_TA_MRSPVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_SSP_s_section_t_TA_MRSP_double_conversion_allowed()
{
    if (pSimSSP_s_section_t_TA_MRSPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSP_s_section_t_TA_MRSPVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_SSP_s_section_t_TA_MRSP_long_convertion_allowed()
{
    if (pSimSSP_s_section_t_TA_MRSPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimSSP_s_section_t_TA_MRSPVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_SSP_s_section_t_TA_MRSP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSP_s_section_t_TA_MRSPVTable != NULL
        && pSimSSP_s_section_t_TA_MRSPVTable->m_version >= Scv612
        && pSimSSP_s_section_t_TA_MRSPVTable->m_pfnCompare != NULL) {
        if (pSimSSP_s_section_t_TA_MRSPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSP_s_section_t_TA_MRSPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSP_s_section_t_TA_MRSPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSP_s_section_t_TA_MRSP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSP_s_section_t_TA_MRSPVTable != NULL) {
        return VTable_to_double(pValue, pSimSSP_s_section_t_TA_MRSPVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int SSP_s_section_t_TA_MRSP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimSSP_s_section_t_TA_MRSPVTable != NULL) {
        return VTable_to_long(pValue, pSimSSP_s_section_t_TA_MRSPVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_SSP_s_section_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_SSP_s_section_t_TA_MRSP_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_SSP_s_section_t_TA_MRSP_string(const char *str, char **endptr)
{
    static SSP_s_section_t_TA_MRSP rTemp;
    return string_to_SSP_s_section_t_TA_MRSP(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSP_s_section_t_TA_MRSP_Utils = {
    SSP_s_section_t_TA_MRSP_to_string,
    check_SSP_s_section_t_TA_MRSP_string,
    string_to_SSP_s_section_t_TA_MRSP,
    is_SSP_s_section_t_TA_MRSP_double_conversion_allowed,
    SSP_s_section_t_TA_MRSP_to_double,
    is_SSP_s_section_t_TA_MRSP_long_convertion_allowed,
    SSP_s_section_t_TA_MRSP_to_long,
    compare_SSP_s_section_t_TA_MRSP,
    get_SSP_s_section_t_TA_MRSP_signature,
    set_SSP_s_section_t_TA_MRSP_default_value,
    sizeof(SSP_s_section_t_TA_MRSP)
};

/****************************************************************
 ** SSP_cat_t_TA_MRSP 
 ****************************************************************/

struct SimTypeVTable *pSimSSP_cat_t_TA_MRSPVTable;

int SSP_cat_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSP_cat_t_TA_MRSPVTable != NULL
        && pSimSSP_cat_t_TA_MRSPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSP_cat_t_TA_MRSPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__251_to_string(pValue, pfnStrAppend, pData);
}

int string_to_SSP_cat_t_TA_MRSP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSP_cat_t_TA_MRSPVTable != NULL) {
        nRet=string_to_VTable(str, pSimSSP_cat_t_TA_MRSPVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__251(str, pValue, endptr);
    }
    return nRet;
}

int is_SSP_cat_t_TA_MRSP_double_conversion_allowed()
{
    if (pSimSSP_cat_t_TA_MRSPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSP_cat_t_TA_MRSPVTable);
    }
    return is_array__251_double_conversion_allowed();
}

int is_SSP_cat_t_TA_MRSP_long_convertion_allowed()
{
    if (pSimSSP_cat_t_TA_MRSPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimSSP_cat_t_TA_MRSPVTable);
    }
    return is_array__251_long_convertion_allowed();
}

void compare_SSP_cat_t_TA_MRSP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSP_cat_t_TA_MRSPVTable != NULL
        && pSimSSP_cat_t_TA_MRSPVTable->m_version >= Scv612
        && pSimSSP_cat_t_TA_MRSPVTable->m_pfnCompare != NULL) {
        if (pSimSSP_cat_t_TA_MRSPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSP_cat_t_TA_MRSPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSP_cat_t_TA_MRSPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__251(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSP_cat_t_TA_MRSP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSP_cat_t_TA_MRSPVTable != NULL) {
        return VTable_to_double(pValue, pSimSSP_cat_t_TA_MRSPVTable, nRetValue);
    }
    return array__251_to_double(pValue, nRetValue);
}

int SSP_cat_t_TA_MRSP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimSSP_cat_t_TA_MRSPVTable != NULL) {
        return VTable_to_long(pValue, pSimSSP_cat_t_TA_MRSPVTable, nRetValue);
    }
    return array__251_to_long(pValue, nRetValue);
}

int get_SSP_cat_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__251_signature(pfnStrAppend, pData);
}

int set_SSP_cat_t_TA_MRSP_default_value(void *pValue)
{
    return set_array__251_default_value(pValue);
}

int check_SSP_cat_t_TA_MRSP_string(const char *str, char **endptr)
{
    static SSP_cat_t_TA_MRSP rTemp;
    return string_to_SSP_cat_t_TA_MRSP(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSP_cat_t_TA_MRSP_Utils = {
    SSP_cat_t_TA_MRSP_to_string,
    check_SSP_cat_t_TA_MRSP_string,
    string_to_SSP_cat_t_TA_MRSP,
    is_SSP_cat_t_TA_MRSP_double_conversion_allowed,
    SSP_cat_t_TA_MRSP_to_double,
    is_SSP_cat_t_TA_MRSP_long_convertion_allowed,
    SSP_cat_t_TA_MRSP_to_long,
    compare_SSP_cat_t_TA_MRSP,
    get_SSP_cat_t_TA_MRSP_signature,
    set_SSP_cat_t_TA_MRSP_default_value,
    sizeof(SSP_cat_t_TA_MRSP)
};

#include "C:/Program Files/Esterel Technologies/SCADE R16.1/SCADE/lib/kcg_conv.c"
