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
 ** struct__455 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__455VTable;

static SimFieldUtils struct__455_fields[] = {
    {"valid", offsetof(struct__455,valid), &_Type_kcg_bool_Utils},
    {"nc_diff", offsetof(struct__455,nc_diff), &_Type_kcg_int_Utils},
    {"v_diff", offsetof(struct__455,v_diff), &_Type_kcg_int_Utils},
};

int struct__455_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__455VTable != NULL
        && pSimstruct__455VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__455VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__455_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__455(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__455VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__455VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__455_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__455_double_conversion_allowed()
{
    if (pSimstruct__455VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__455VTable);
    }
    return 0;
}

int is_struct__455_long_convertion_allowed()
{
    if (pSimstruct__455VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__455VTable);
    }
    return 0;
}

void compare_struct__455(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__455VTable != NULL
        && pSimstruct__455VTable->m_version >= Scv612
        && pSimstruct__455VTable->m_pfnCompare != NULL) {
        if (pSimstruct__455VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__455VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__455VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__455_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__455_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__455VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__455VTable, nRetValue);
    }
    return 0;
}

int struct__455_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__455VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__455VTable, nRetValue);
    }
    return 0;
}

int get_struct__455_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__455_fields, 3, pfnStrAppend, pData);
}

int set_struct__455_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__455*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__455*)pValue)->nc_diff));
    set_kcg_int_default_value(&(((struct__455*)pValue)->v_diff));
    return 1;
}

int check_struct__455_string(const char *str, char **endptr)
{
    static struct__455 rTemp;
    return string_to_struct__455(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__455_Utils = {
    struct__455_to_string,
    check_struct__455_string,
    string_to_struct__455,
    is_struct__455_double_conversion_allowed,
    struct__455_to_double,
    is_struct__455_long_convertion_allowed,
    struct__455_to_long,
    compare_struct__455,
    get_struct__455_signature,
    set_struct__455_default_value,
    sizeof(struct__455)
};

/****************************************************************
 ** array__461 
 ****************************************************************/

struct SimTypeVTable *pSimarray__461VTable;

int array__461_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__461VTable != NULL
        && pSimarray__461VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__461VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__455_to_string, 32, sizeof(struct__455), pfnStrAppend, pData);
}

int string_to_array__461(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__461VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__461VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__455_Utils, 32, sizeof(struct__455), endptr);
    }
    return nRet;
}

int is_array__461_double_conversion_allowed()
{
    if (pSimarray__461VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__461VTable);
    }
    return 0;
}

int is_array__461_long_convertion_allowed()
{
    if (pSimarray__461VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__461VTable);
    }
    return 0;
}

void compare_array__461(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__461VTable != NULL
        && pSimarray__461VTable->m_version >= Scv612
        && pSimarray__461VTable->m_pfnCompare != NULL) {
        if (pSimarray__461VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__461VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__461VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__455, 32, sizeof(struct__455), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__461_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__461VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__461VTable, nRetValue);
    }
    return 0;
}

int array__461_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__461VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__461VTable, nRetValue);
    }
    return 0;
}

int get_array__461_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__455_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__461_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__455_default_value(&((struct__455*)pValue)[i]);
    return 1;
}

int check_array__461_string(const char *str, char **endptr)
{
    static array__461 rTemp;
    return string_to_array__461(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__461_Utils = {
    array__461_to_string,
    check_array__461_string,
    string_to_array__461,
    is_array__461_double_conversion_allowed,
    array__461_to_double,
    is_array__461_long_convertion_allowed,
    array__461_to_long,
    compare_array__461,
    get_array__461_signature,
    set_array__461_default_value,
    sizeof(array__461)
};

/****************************************************************
 ** struct__464 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__464VTable;

static SimFieldUtils struct__464_fields[] = {
    {"valid", offsetof(struct__464,valid), &_Type_kcg_bool_Utils},
    {"d_static", offsetof(struct__464,d_static), &_Type_kcg_int_Utils},
    {"v_static", offsetof(struct__464,v_static), &_Type_kcg_int_Utils},
    {"q_front", offsetof(struct__464,q_front), &_Type_Q_FRONT_Utils},
    {"n_iter", offsetof(struct__464,n_iter), &_Type_kcg_int_Utils},
    {"SECTIONS_q_diff", offsetof(struct__464,SECTIONS_q_diff), &_Type_array__461_Utils},
};

int struct__464_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__464VTable != NULL
        && pSimstruct__464VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__464VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__464_fields, 6, pfnStrAppend, pData);
}

int string_to_struct__464(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__464VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__464VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__464_fields, 6, endptr);
    }
    return nRet;
}

int is_struct__464_double_conversion_allowed()
{
    if (pSimstruct__464VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__464VTable);
    }
    return 0;
}

int is_struct__464_long_convertion_allowed()
{
    if (pSimstruct__464VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__464VTable);
    }
    return 0;
}

void compare_struct__464(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__464VTable != NULL
        && pSimstruct__464VTable->m_version >= Scv612
        && pSimstruct__464VTable->m_pfnCompare != NULL) {
        if (pSimstruct__464VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__464VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__464VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__464_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__464_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__464VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__464VTable, nRetValue);
    }
    return 0;
}

int struct__464_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__464VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__464VTable, nRetValue);
    }
    return 0;
}

int get_struct__464_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__464_fields, 6, pfnStrAppend, pData);
}

int set_struct__464_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__464*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__464*)pValue)->d_static));
    set_kcg_int_default_value(&(((struct__464*)pValue)->v_static));
    set_Q_FRONT_default_value(&(((struct__464*)pValue)->q_front));
    set_kcg_int_default_value(&(((struct__464*)pValue)->n_iter));
    set_array__461_default_value(&(((struct__464*)pValue)->SECTIONS_q_diff));
    return 1;
}

int check_struct__464_string(const char *str, char **endptr)
{
    static struct__464 rTemp;
    return string_to_struct__464(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__464_Utils = {
    struct__464_to_string,
    check_struct__464_string,
    string_to_struct__464,
    is_struct__464_double_conversion_allowed,
    struct__464_to_double,
    is_struct__464_long_convertion_allowed,
    struct__464_to_long,
    compare_struct__464,
    get_struct__464_signature,
    set_struct__464_default_value,
    sizeof(struct__464)
};

/****************************************************************
 ** array__473 
 ****************************************************************/

struct SimTypeVTable *pSimarray__473VTable;

int array__473_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__473VTable != NULL
        && pSimarray__473VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__473VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__464_to_string, 33, sizeof(struct__464), pfnStrAppend, pData);
}

int string_to_array__473(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__473VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__473VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__464_Utils, 33, sizeof(struct__464), endptr);
    }
    return nRet;
}

int is_array__473_double_conversion_allowed()
{
    if (pSimarray__473VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__473VTable);
    }
    return 0;
}

int is_array__473_long_convertion_allowed()
{
    if (pSimarray__473VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__473VTable);
    }
    return 0;
}

void compare_array__473(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__473VTable != NULL
        && pSimarray__473VTable->m_version >= Scv612
        && pSimarray__473VTable->m_pfnCompare != NULL) {
        if (pSimarray__473VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__473VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__473VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__464, 33, sizeof(struct__464), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__473_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__473VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__473VTable, nRetValue);
    }
    return 0;
}

int array__473_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__473VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__473VTable, nRetValue);
    }
    return 0;
}

int get_array__473_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__464_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__473_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__464_default_value(&((struct__464*)pValue)[i]);
    return 1;
}

int check_array__473_string(const char *str, char **endptr)
{
    static array__473 rTemp;
    return string_to_array__473(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__473_Utils = {
    array__473_to_string,
    check_array__473_string,
    string_to_array__473,
    is_array__473_double_conversion_allowed,
    array__473_to_double,
    is_array__473_long_convertion_allowed,
    array__473_to_long,
    compare_array__473,
    get_array__473_signature,
    set_array__473_default_value,
    sizeof(array__473)
};

/****************************************************************
 ** struct__476 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__476VTable;

static SimFieldUtils struct__476_fields[] = {
    {"valid", offsetof(struct__476,valid), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(struct__476,q_dir), &_Type_Q_DIR_Utils},
    {"q_scale", offsetof(struct__476,q_scale), &_Type_Q_SCALE_Utils},
    {"sections", offsetof(struct__476,sections), &_Type_array__473_Utils},
};

int struct__476_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__476VTable != NULL
        && pSimstruct__476VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__476VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__476_fields, 4, pfnStrAppend, pData);
}

int string_to_struct__476(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__476VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__476VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__476_fields, 4, endptr);
    }
    return nRet;
}

int is_struct__476_double_conversion_allowed()
{
    if (pSimstruct__476VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__476VTable);
    }
    return 0;
}

int is_struct__476_long_convertion_allowed()
{
    if (pSimstruct__476VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__476VTable);
    }
    return 0;
}

void compare_struct__476(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__476VTable != NULL
        && pSimstruct__476VTable->m_version >= Scv612
        && pSimstruct__476VTable->m_pfnCompare != NULL) {
        if (pSimstruct__476VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__476VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__476VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__476_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__476_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__476VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__476VTable, nRetValue);
    }
    return 0;
}

int struct__476_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__476VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__476VTable, nRetValue);
    }
    return 0;
}

int get_struct__476_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__476_fields, 4, pfnStrAppend, pData);
}

int set_struct__476_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__476*)pValue)->valid));
    set_Q_DIR_default_value(&(((struct__476*)pValue)->q_dir));
    set_Q_SCALE_default_value(&(((struct__476*)pValue)->q_scale));
    set_array__473_default_value(&(((struct__476*)pValue)->sections));
    return 1;
}

int check_struct__476_string(const char *str, char **endptr)
{
    static struct__476 rTemp;
    return string_to_struct__476(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__476_Utils = {
    struct__476_to_string,
    check_struct__476_string,
    string_to_struct__476,
    is_struct__476_double_conversion_allowed,
    struct__476_to_double,
    is_struct__476_long_convertion_allowed,
    struct__476_to_long,
    compare_struct__476,
    get_struct__476_signature,
    set_struct__476_default_value,
    sizeof(struct__476)
};

/****************************************************************
 ** struct__483 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__483VTable;

static SimFieldUtils struct__483_fields[] = {
    {"target", offsetof(struct__483,target), &_Type_kcg_int_Utils},
    {"speed", offsetof(struct__483,speed), &_Type_kcg_int_Utils},
};

int struct__483_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__483VTable != NULL
        && pSimstruct__483VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__483VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__483_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__483(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__483VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__483VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__483_fields, 2, endptr);
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
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__483_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
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
    return get_structure_signature(struct__483_fields, 2, pfnStrAppend, pData);
}

int set_struct__483_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__483*)pValue)->target));
    set_kcg_int_default_value(&(((struct__483*)pValue)->speed));
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
 ** array__488 
 ****************************************************************/

struct SimTypeVTable *pSimarray__488VTable;

int array__488_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__488VTable != NULL
        && pSimarray__488VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__488VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__483_to_string, 33, sizeof(struct__483), pfnStrAppend, pData);
}

int string_to_array__488(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__488VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__488VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__483_Utils, 33, sizeof(struct__483), endptr);
    }
    return nRet;
}

int is_array__488_double_conversion_allowed()
{
    if (pSimarray__488VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__488VTable);
    }
    return 0;
}

int is_array__488_long_convertion_allowed()
{
    if (pSimarray__488VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__488VTable);
    }
    return 0;
}

void compare_array__488(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__488VTable != NULL
        && pSimarray__488VTable->m_version >= Scv612
        && pSimarray__488VTable->m_pfnCompare != NULL) {
        if (pSimarray__488VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__488VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__488VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__483, 33, sizeof(struct__483), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__488_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__488VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__488VTable, nRetValue);
    }
    return 0;
}

int array__488_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__488VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__488VTable, nRetValue);
    }
    return 0;
}

int get_array__488_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__483_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__488_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__483_default_value(&((struct__483*)pValue)[i]);
    return 1;
}

int check_array__488_string(const char *str, char **endptr)
{
    static array__488 rTemp;
    return string_to_array__488(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__488_Utils = {
    array__488_to_string,
    check_array__488_string,
    string_to_array__488,
    is_array__488_double_conversion_allowed,
    array__488_to_double,
    is_array__488_long_convertion_allowed,
    array__488_to_long,
    compare_array__488,
    get_array__488_signature,
    set_array__488_default_value,
    sizeof(array__488)
};

/****************************************************************
 ** array__491 
 ****************************************************************/

struct SimTypeVTable *pSimarray__491VTable;

int array__491_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__491VTable != NULL
        && pSimarray__491VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__491VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__464_to_string, 32, sizeof(struct__464), pfnStrAppend, pData);
}

int string_to_array__491(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__491VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__491VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__464_Utils, 32, sizeof(struct__464), endptr);
    }
    return nRet;
}

int is_array__491_double_conversion_allowed()
{
    if (pSimarray__491VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__491VTable);
    }
    return 0;
}

int is_array__491_long_convertion_allowed()
{
    if (pSimarray__491VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__491VTable);
    }
    return 0;
}

void compare_array__491(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__491VTable != NULL
        && pSimarray__491VTable->m_version >= Scv612
        && pSimarray__491VTable->m_pfnCompare != NULL) {
        if (pSimarray__491VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__491VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__491VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__464, 32, sizeof(struct__464), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__491_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__491VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__491VTable, nRetValue);
    }
    return 0;
}

int array__491_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__491VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__491VTable, nRetValue);
    }
    return 0;
}

int get_array__491_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__464_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__491_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__464_default_value(&((struct__464*)pValue)[i]);
    return 1;
}

int check_array__491_string(const char *str, char **endptr)
{
    static array__491 rTemp;
    return string_to_array__491(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__491_Utils = {
    array__491_to_string,
    check_array__491_string,
    string_to_array__491,
    is_array__491_double_conversion_allowed,
    array__491_to_double,
    is_array__491_long_convertion_allowed,
    array__491_to_long,
    compare_array__491,
    get_array__491_signature,
    set_array__491_default_value,
    sizeof(array__491)
};

/****************************************************************
 ** array__494 
 ****************************************************************/

struct SimTypeVTable *pSimarray__494VTable;

int array__494_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__494VTable != NULL
        && pSimarray__494VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__494VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array__473_to_string, 33, sizeof(array__473), pfnStrAppend, pData);
}

int string_to_array__494(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__494VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__494VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array__473_Utils, 33, sizeof(array__473), endptr);
    }
    return nRet;
}

int is_array__494_double_conversion_allowed()
{
    if (pSimarray__494VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__494VTable);
    }
    return 0;
}

int is_array__494_long_convertion_allowed()
{
    if (pSimarray__494VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__494VTable);
    }
    return 0;
}

void compare_array__494(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__494VTable != NULL
        && pSimarray__494VTable->m_version >= Scv612
        && pSimarray__494VTable->m_pfnCompare != NULL) {
        if (pSimarray__494VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__494VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__494VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array__473, 33, sizeof(array__473), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__494_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__494VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__494VTable, nRetValue);
    }
    return 0;
}

int array__494_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__494VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__494VTable, nRetValue);
    }
    return 0;
}

int get_array__494_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array__473_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__494_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_array__473_default_value(&((array__473*)pValue)[i]);
    return 1;
}

int check_array__494_string(const char *str, char **endptr)
{
    static array__494 rTemp;
    return string_to_array__494(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__494_Utils = {
    array__494_to_string,
    check_array__494_string,
    string_to_array__494,
    is_array__494_double_conversion_allowed,
    array__494_to_double,
    is_array__494_long_convertion_allowed,
    array__494_to_long,
    compare_array__494,
    get_array__494_signature,
    set_array__494_default_value,
    sizeof(array__494)
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
    return pConverter->m_pfnArrayToString(pValue, Q_SCALE_to_string, 33, sizeof(Q_SCALE), pfnStrAppend, pData);
}

int string_to_array__497(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__497VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__497VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_Q_SCALE_Utils, 33, sizeof(Q_SCALE), endptr);
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
                compare_Q_SCALE, 33, sizeof(Q_SCALE), pData, pszPath, pfnStrListAppend, pListErrPaths);
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
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_Q_SCALE_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__497_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_Q_SCALE_default_value(&((Q_SCALE*)pValue)[i]);
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
 ** array__503 
 ****************************************************************/

struct SimTypeVTable *pSimarray__503VTable;

int array__503_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__503VTable != NULL
        && pSimarray__503VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__503VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__464_to_string, 1, sizeof(struct__464), pfnStrAppend, pData);
}

int string_to_array__503(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__503VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__503VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__464_Utils, 1, sizeof(struct__464), endptr);
    }
    return nRet;
}

int is_array__503_double_conversion_allowed()
{
    if (pSimarray__503VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__503VTable);
    }
    return 0;
}

int is_array__503_long_convertion_allowed()
{
    if (pSimarray__503VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__503VTable);
    }
    return 0;
}

void compare_array__503(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__503VTable != NULL
        && pSimarray__503VTable->m_version >= Scv612
        && pSimarray__503VTable->m_pfnCompare != NULL) {
        if (pSimarray__503VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__503VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__503VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__464, 1, sizeof(struct__464), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__503_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__503VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__503VTable, nRetValue);
    }
    return 0;
}

int array__503_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__503VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__503VTable, nRetValue);
    }
    return 0;
}

int get_array__503_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__464_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__503_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__464_default_value(&((struct__464*)pValue)[i]);
    return 1;
}

int check_array__503_string(const char *str, char **endptr)
{
    static array__503 rTemp;
    return string_to_array__503(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__503_Utils = {
    array__503_to_string,
    check_array__503_string,
    string_to_array__503,
    is_array__503_double_conversion_allowed,
    array__503_to_double,
    is_array__503_long_convertion_allowed,
    array__503_to_long,
    compare_array__503,
    get_array__503_signature,
    set_array__503_default_value,
    sizeof(array__503)
};

/****************************************************************
 ** D_STATIC 
 ****************************************************************/

struct SimTypeVTable *pSimD_STATICVTable;

int D_STATIC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_STATICVTable != NULL
        && pSimD_STATICVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_STATICVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_STATIC(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_STATICVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_STATICVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_STATIC_double_conversion_allowed()
{
    if (pSimD_STATICVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_STATICVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_D_STATIC_long_convertion_allowed()
{
    if (pSimD_STATICVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimD_STATICVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_D_STATIC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_STATICVTable != NULL
        && pSimD_STATICVTable->m_version >= Scv612
        && pSimD_STATICVTable->m_pfnCompare != NULL) {
        if (pSimD_STATICVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_STATICVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_STATICVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_STATIC_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_STATICVTable != NULL) {
        return VTable_to_double(pValue, pSimD_STATICVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int D_STATIC_to_long(const void *pValue, long *nRetValue)
{
    if (pSimD_STATICVTable != NULL) {
        return VTable_to_long(pValue, pSimD_STATICVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_D_STATIC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_STATIC_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_STATIC_string(const char *str, char **endptr)
{
    static D_STATIC rTemp;
    return string_to_D_STATIC(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_STATIC_Utils = {
    D_STATIC_to_string,
    check_D_STATIC_string,
    string_to_D_STATIC,
    is_D_STATIC_double_conversion_allowed,
    D_STATIC_to_double,
    is_D_STATIC_long_convertion_allowed,
    D_STATIC_to_long,
    compare_D_STATIC,
    get_D_STATIC_signature,
    set_D_STATIC_default_value,
    sizeof(D_STATIC)
};

/****************************************************************
 ** V_STATIC 
 ****************************************************************/

struct SimTypeVTable *pSimV_STATICVTable;

int V_STATIC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimV_STATICVTable != NULL
        && pSimV_STATICVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimV_STATICVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_V_STATIC(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimV_STATICVTable != NULL) {
        nRet=string_to_VTable(str, pSimV_STATICVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_V_STATIC_double_conversion_allowed()
{
    if (pSimV_STATICVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimV_STATICVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_V_STATIC_long_convertion_allowed()
{
    if (pSimV_STATICVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimV_STATICVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_V_STATIC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimV_STATICVTable != NULL
        && pSimV_STATICVTable->m_version >= Scv612
        && pSimV_STATICVTable->m_pfnCompare != NULL) {
        if (pSimV_STATICVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimV_STATICVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimV_STATICVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int V_STATIC_to_double(const void *pValue, double *nRetValue)
{
    if (pSimV_STATICVTable != NULL) {
        return VTable_to_double(pValue, pSimV_STATICVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int V_STATIC_to_long(const void *pValue, long *nRetValue)
{
    if (pSimV_STATICVTable != NULL) {
        return VTable_to_long(pValue, pSimV_STATICVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_V_STATIC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_V_STATIC_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_V_STATIC_string(const char *str, char **endptr)
{
    static V_STATIC rTemp;
    return string_to_V_STATIC(str, &rTemp, endptr);
}

SimTypeUtils _Type_V_STATIC_Utils = {
    V_STATIC_to_string,
    check_V_STATIC_string,
    string_to_V_STATIC,
    is_V_STATIC_double_conversion_allowed,
    V_STATIC_to_double,
    is_V_STATIC_long_convertion_allowed,
    V_STATIC_to_long,
    compare_V_STATIC,
    get_V_STATIC_signature,
    set_V_STATIC_default_value,
    sizeof(V_STATIC)
};

/****************************************************************
 ** Q_FRONT 
 ****************************************************************/

struct SimTypeVTable *pSimQ_FRONTVTable;

static SimEnumValUtils Q_FRONT_values[] = {
    { "Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element", Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element},
    { "Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element", Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element},
    { "Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element", Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element},
    { "Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element", Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element},
};
const int Q_FRONT_nb_values = 4;

int Q_FRONT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_FRONTVTable != NULL
        && pSimQ_FRONTVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_FRONTVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_FRONT*)pValue, Q_FRONT_values, Q_FRONT_nb_values, pfnStrAppend, pData); 
}

int string_to_Q_FRONT(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_FRONTVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_FRONTVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_FRONT_values, Q_FRONT_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_FRONT*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_FRONT_double_conversion_allowed()
{
    if (pSimQ_FRONTVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_FRONTVTable);
    }
    return 1;
}

int is_Q_FRONT_long_convertion_allowed()
{
    if (pSimQ_FRONTVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_FRONTVTable);
    }
    return 1;
}

void compare_Q_FRONT(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_FRONTVTable != NULL
        && pSimQ_FRONTVTable->m_version >= Scv612
        && pSimQ_FRONTVTable->m_pfnCompare != NULL) {
        if (pSimQ_FRONTVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_FRONTVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_FRONTVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_FRONT*)pValue1), (int)(*(Q_FRONT*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_FRONT_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_FRONTVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_FRONTVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_FRONT*)pValue);
    return 1;
}

int Q_FRONT_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_FRONTVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_FRONTVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_FRONT*)pValue);
    return 1;
}

int get_Q_FRONT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_FRONT_values, Q_FRONT_nb_values, pfnStrAppend, pData);
}

int set_Q_FRONT_default_value(void *pValue)
{
    *(Q_FRONT*)pValue = Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    return 1;
}

int check_Q_FRONT_string(const char *str, char **endptr)
{
    static Q_FRONT rTemp;
    return string_to_Q_FRONT(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_FRONT_Utils = {
    Q_FRONT_to_string,
    check_Q_FRONT_string,
    string_to_Q_FRONT,
    is_Q_FRONT_double_conversion_allowed,
    Q_FRONT_to_double,
    is_Q_FRONT_long_convertion_allowed,
    Q_FRONT_to_long,
    compare_Q_FRONT,
    get_Q_FRONT_signature,
    set_Q_FRONT_default_value,
    sizeof(Q_FRONT)
};

/****************************************************************
 ** N_ITER 
 ****************************************************************/

struct SimTypeVTable *pSimN_ITERVTable;

int N_ITER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimN_ITERVTable != NULL
        && pSimN_ITERVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimN_ITERVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_N_ITER(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimN_ITERVTable != NULL) {
        nRet=string_to_VTable(str, pSimN_ITERVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_N_ITER_double_conversion_allowed()
{
    if (pSimN_ITERVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimN_ITERVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_N_ITER_long_convertion_allowed()
{
    if (pSimN_ITERVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimN_ITERVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_N_ITER(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimN_ITERVTable != NULL
        && pSimN_ITERVTable->m_version >= Scv612
        && pSimN_ITERVTable->m_pfnCompare != NULL) {
        if (pSimN_ITERVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimN_ITERVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimN_ITERVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int N_ITER_to_double(const void *pValue, double *nRetValue)
{
    if (pSimN_ITERVTable != NULL) {
        return VTable_to_double(pValue, pSimN_ITERVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int N_ITER_to_long(const void *pValue, long *nRetValue)
{
    if (pSimN_ITERVTable != NULL) {
        return VTable_to_long(pValue, pSimN_ITERVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_N_ITER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_N_ITER_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_N_ITER_string(const char *str, char **endptr)
{
    static N_ITER rTemp;
    return string_to_N_ITER(str, &rTemp, endptr);
}

SimTypeUtils _Type_N_ITER_Utils = {
    N_ITER_to_string,
    check_N_ITER_string,
    string_to_N_ITER,
    is_N_ITER_double_conversion_allowed,
    N_ITER_to_double,
    is_N_ITER_long_convertion_allowed,
    N_ITER_to_long,
    compare_N_ITER,
    get_N_ITER_signature,
    set_N_ITER_default_value,
    sizeof(N_ITER)
};

/****************************************************************
 ** NC_DIFF 
 ****************************************************************/

struct SimTypeVTable *pSimNC_DIFFVTable;

int NC_DIFF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNC_DIFFVTable != NULL
        && pSimNC_DIFFVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNC_DIFFVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NC_DIFF(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNC_DIFFVTable != NULL) {
        nRet=string_to_VTable(str, pSimNC_DIFFVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NC_DIFF_double_conversion_allowed()
{
    if (pSimNC_DIFFVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNC_DIFFVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NC_DIFF_long_convertion_allowed()
{
    if (pSimNC_DIFFVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNC_DIFFVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NC_DIFF(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNC_DIFFVTable != NULL
        && pSimNC_DIFFVTable->m_version >= Scv612
        && pSimNC_DIFFVTable->m_pfnCompare != NULL) {
        if (pSimNC_DIFFVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNC_DIFFVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNC_DIFFVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NC_DIFF_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNC_DIFFVTable != NULL) {
        return VTable_to_double(pValue, pSimNC_DIFFVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int NC_DIFF_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNC_DIFFVTable != NULL) {
        return VTable_to_long(pValue, pSimNC_DIFFVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_NC_DIFF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NC_DIFF_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NC_DIFF_string(const char *str, char **endptr)
{
    static NC_DIFF rTemp;
    return string_to_NC_DIFF(str, &rTemp, endptr);
}

SimTypeUtils _Type_NC_DIFF_Utils = {
    NC_DIFF_to_string,
    check_NC_DIFF_string,
    string_to_NC_DIFF,
    is_NC_DIFF_double_conversion_allowed,
    NC_DIFF_to_double,
    is_NC_DIFF_long_convertion_allowed,
    NC_DIFF_to_long,
    compare_NC_DIFF,
    get_NC_DIFF_signature,
    set_NC_DIFF_default_value,
    sizeof(NC_DIFF)
};

/****************************************************************
 ** V_DIFF 
 ****************************************************************/

struct SimTypeVTable *pSimV_DIFFVTable;

int V_DIFF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimV_DIFFVTable != NULL
        && pSimV_DIFFVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimV_DIFFVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_V_DIFF(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimV_DIFFVTable != NULL) {
        nRet=string_to_VTable(str, pSimV_DIFFVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_V_DIFF_double_conversion_allowed()
{
    if (pSimV_DIFFVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimV_DIFFVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_V_DIFF_long_convertion_allowed()
{
    if (pSimV_DIFFVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimV_DIFFVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_V_DIFF(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimV_DIFFVTable != NULL
        && pSimV_DIFFVTable->m_version >= Scv612
        && pSimV_DIFFVTable->m_pfnCompare != NULL) {
        if (pSimV_DIFFVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimV_DIFFVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimV_DIFFVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int V_DIFF_to_double(const void *pValue, double *nRetValue)
{
    if (pSimV_DIFFVTable != NULL) {
        return VTable_to_double(pValue, pSimV_DIFFVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int V_DIFF_to_long(const void *pValue, long *nRetValue)
{
    if (pSimV_DIFFVTable != NULL) {
        return VTable_to_long(pValue, pSimV_DIFFVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_V_DIFF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_V_DIFF_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_V_DIFF_string(const char *str, char **endptr)
{
    static V_DIFF rTemp;
    return string_to_V_DIFF(str, &rTemp, endptr);
}

SimTypeUtils _Type_V_DIFF_Utils = {
    V_DIFF_to_string,
    check_V_DIFF_string,
    string_to_V_DIFF,
    is_V_DIFF_double_conversion_allowed,
    V_DIFF_to_double,
    is_V_DIFF_long_convertion_allowed,
    V_DIFF_to_long,
    compare_V_DIFF,
    get_V_DIFF_signature,
    set_V_DIFF_default_value,
    sizeof(V_DIFF)
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
 ** SSP_section_t_TA_MRSP 
 ****************************************************************/

struct SimTypeVTable *pSimSSP_section_t_TA_MRSPVTable;

int SSP_section_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSP_section_t_TA_MRSPVTable != NULL
        && pSimSSP_section_t_TA_MRSPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSP_section_t_TA_MRSPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__483_to_string(pValue, pfnStrAppend, pData);
}

int string_to_SSP_section_t_TA_MRSP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSP_section_t_TA_MRSPVTable != NULL) {
        nRet=string_to_VTable(str, pSimSSP_section_t_TA_MRSPVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__483(str, pValue, endptr);
    }
    return nRet;
}

int is_SSP_section_t_TA_MRSP_double_conversion_allowed()
{
    if (pSimSSP_section_t_TA_MRSPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSP_section_t_TA_MRSPVTable);
    }
    return is_struct__483_double_conversion_allowed();
}

int is_SSP_section_t_TA_MRSP_long_convertion_allowed()
{
    if (pSimSSP_section_t_TA_MRSPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimSSP_section_t_TA_MRSPVTable);
    }
    return is_struct__483_long_convertion_allowed();
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
        compare_struct__483(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSP_section_t_TA_MRSP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSP_section_t_TA_MRSPVTable != NULL) {
        return VTable_to_double(pValue, pSimSSP_section_t_TA_MRSPVTable, nRetValue);
    }
    return struct__483_to_double(pValue, nRetValue);
}

int SSP_section_t_TA_MRSP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimSSP_section_t_TA_MRSPVTable != NULL) {
        return VTable_to_long(pValue, pSimSSP_section_t_TA_MRSPVTable, nRetValue);
    }
    return struct__483_to_long(pValue, nRetValue);
}

int get_SSP_section_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__483_signature(pfnStrAppend, pData);
}

int set_SSP_section_t_TA_MRSP_default_value(void *pValue)
{
    return set_struct__483_default_value(pValue);
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
    return array__488_to_string(pValue, pfnStrAppend, pData);
}

int string_to_SSP_cat_t_TA_MRSP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSP_cat_t_TA_MRSPVTable != NULL) {
        nRet=string_to_VTable(str, pSimSSP_cat_t_TA_MRSPVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__488(str, pValue, endptr);
    }
    return nRet;
}

int is_SSP_cat_t_TA_MRSP_double_conversion_allowed()
{
    if (pSimSSP_cat_t_TA_MRSPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSP_cat_t_TA_MRSPVTable);
    }
    return is_array__488_double_conversion_allowed();
}

int is_SSP_cat_t_TA_MRSP_long_convertion_allowed()
{
    if (pSimSSP_cat_t_TA_MRSPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimSSP_cat_t_TA_MRSPVTable);
    }
    return is_array__488_long_convertion_allowed();
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
        compare_array__488(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSP_cat_t_TA_MRSP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSP_cat_t_TA_MRSPVTable != NULL) {
        return VTable_to_double(pValue, pSimSSP_cat_t_TA_MRSPVTable, nRetValue);
    }
    return array__488_to_double(pValue, nRetValue);
}

int SSP_cat_t_TA_MRSP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimSSP_cat_t_TA_MRSPVTable != NULL) {
        return VTable_to_long(pValue, pSimSSP_cat_t_TA_MRSPVTable, nRetValue);
    }
    return array__488_to_long(pValue, nRetValue);
}

int get_SSP_cat_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__488_signature(pfnStrAppend, pData);
}

int set_SSP_cat_t_TA_MRSP_default_value(void *pValue)
{
    return set_array__488_default_value(pValue);
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

/****************************************************************
 ** P027V1_section_enum_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_section_enum_T_TM_baseline2VTable;

int P027V1_section_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_section_enum_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_enum_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_section_enum_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__464_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_enum_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_enum_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__464(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_enum_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_enum_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_enum_T_TM_baseline2VTable);
    }
    return is_struct__464_double_conversion_allowed();
}

int is_P027V1_section_enum_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_enum_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_enum_T_TM_baseline2VTable);
    }
    return is_struct__464_long_convertion_allowed();
}

void compare_P027V1_section_enum_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_section_enum_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_enum_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_section_enum_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_section_enum_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_section_enum_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_section_enum_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__464(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_enum_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_enum_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_enum_T_TM_baseline2VTable, nRetValue);
    }
    return struct__464_to_double(pValue, nRetValue);
}

int P027V1_section_enum_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_enum_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_enum_T_TM_baseline2VTable, nRetValue);
    }
    return struct__464_to_long(pValue, nRetValue);
}

int get_P027V1_section_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__464_signature(pfnStrAppend, pData);
}

int set_P027V1_section_enum_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__464_default_value(pValue);
}

int check_P027V1_section_enum_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_section_enum_T_TM_baseline2 rTemp;
    return string_to_P027V1_section_enum_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_section_enum_T_TM_baseline2_Utils = {
    P027V1_section_enum_T_TM_baseline2_to_string,
    check_P027V1_section_enum_T_TM_baseline2_string,
    string_to_P027V1_section_enum_T_TM_baseline2,
    is_P027V1_section_enum_T_TM_baseline2_double_conversion_allowed,
    P027V1_section_enum_T_TM_baseline2_to_double,
    is_P027V1_section_enum_T_TM_baseline2_long_convertion_allowed,
    P027V1_section_enum_T_TM_baseline2_to_long,
    compare_P027V1_section_enum_T_TM_baseline2,
    get_P027V1_section_enum_T_TM_baseline2_signature,
    set_P027V1_section_enum_T_TM_baseline2_default_value,
    sizeof(P027V1_section_enum_T_TM_baseline2)
};

/****************************************************************
 ** _1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable;

int _1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable != NULL
        && pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__461_to_string(pValue, pfnStrAppend, pData);
}

int string_to__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__461(str, pValue, endptr);
    }
    return nRet;
}

int is__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable);
    }
    return is_array__461_double_conversion_allowed();
}

int is__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable);
    }
    return is_array__461_long_convertion_allowed();
}

void compare__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable != NULL
        && pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable->m_version >= Scv612
        && pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__461(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int _1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array__461_to_double(pValue, nRetValue);
}

int _1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSim_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array__461_to_long(pValue, nRetValue);
}

int get__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__461_signature(pfnStrAppend, pData);
}

int set__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__461_default_value(pValue);
}

int check__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_string(const char *str, char **endptr)
{
    static _1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 rTemp;
    return string_to__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_Utils = {
    _1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_string,
    check__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_string,
    string_to__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2,
    is__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_double_conversion_allowed,
    _1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_double,
    is__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_long_convertion_allowed,
    _1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_long,
    compare__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2,
    get__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_signature,
    set__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_default_value,
    sizeof(_1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_section_enum_qdiff_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable;

int P027V1_section_enum_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__455_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_enum_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__455(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_enum_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable);
    }
    return is_struct__455_double_conversion_allowed();
}

int is_P027V1_section_enum_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable);
    }
    return is_struct__455_long_convertion_allowed();
}

void compare_P027V1_section_enum_qdiff_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__455(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_enum_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return struct__455_to_double(pValue, nRetValue);
}

int P027V1_section_enum_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return struct__455_to_long(pValue, nRetValue);
}

int get_P027V1_section_enum_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__455_signature(pfnStrAppend, pData);
}

int set_P027V1_section_enum_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__455_default_value(pValue);
}

int check_P027V1_section_enum_qdiff_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_section_enum_qdiff_T_TM_baseline2 rTemp;
    return string_to_P027V1_section_enum_qdiff_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_section_enum_qdiff_T_TM_baseline2_Utils = {
    P027V1_section_enum_qdiff_T_TM_baseline2_to_string,
    check_P027V1_section_enum_qdiff_T_TM_baseline2_string,
    string_to_P027V1_section_enum_qdiff_T_TM_baseline2,
    is_P027V1_section_enum_qdiff_T_TM_baseline2_double_conversion_allowed,
    P027V1_section_enum_qdiff_T_TM_baseline2_to_double,
    is_P027V1_section_enum_qdiff_T_TM_baseline2_long_convertion_allowed,
    P027V1_section_enum_qdiff_T_TM_baseline2_to_long,
    compare_P027V1_section_enum_qdiff_T_TM_baseline2,
    get_P027V1_section_enum_qdiff_T_TM_baseline2_signature,
    set_P027V1_section_enum_qdiff_T_TM_baseline2_default_value,
    sizeof(P027V1_section_enum_qdiff_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_OBU_sectionlist_enum_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable;

int P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable != NULL
        && pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__473_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_OBU_sectionlist_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__473(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_OBU_sectionlist_enum_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable);
    }
    return is_array__473_double_conversion_allowed();
}

int is_P027V1_OBU_sectionlist_enum_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable);
    }
    return is_array__473_long_convertion_allowed();
}

void compare_P027V1_OBU_sectionlist_enum_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable != NULL
        && pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__473(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable, nRetValue);
    }
    return array__473_to_double(pValue, nRetValue);
}

int P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_OBU_sectionlist_enum_T_TM_baseline2VTable, nRetValue);
    }
    return array__473_to_long(pValue, nRetValue);
}

int get_P027V1_OBU_sectionlist_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__473_signature(pfnStrAppend, pData);
}

int set_P027V1_OBU_sectionlist_enum_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__473_default_value(pValue);
}

int check_P027V1_OBU_sectionlist_enum_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_OBU_sectionlist_enum_T_TM_baseline2 rTemp;
    return string_to_P027V1_OBU_sectionlist_enum_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils = {
    P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_string,
    check_P027V1_OBU_sectionlist_enum_T_TM_baseline2_string,
    string_to_P027V1_OBU_sectionlist_enum_T_TM_baseline2,
    is_P027V1_OBU_sectionlist_enum_T_TM_baseline2_double_conversion_allowed,
    P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_double,
    is_P027V1_OBU_sectionlist_enum_T_TM_baseline2_long_convertion_allowed,
    P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_long,
    compare_P027V1_OBU_sectionlist_enum_T_TM_baseline2,
    get_P027V1_OBU_sectionlist_enum_T_TM_baseline2_signature,
    set_P027V1_OBU_sectionlist_enum_T_TM_baseline2_default_value,
    sizeof(P027V1_OBU_sectionlist_enum_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_OBU_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_OBU_T_TM_baseline2VTable;

int P027V1_OBU_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_OBU_T_TM_baseline2VTable != NULL
        && pSimP027V1_OBU_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_OBU_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__476_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_OBU_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_OBU_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_OBU_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__476(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_OBU_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_OBU_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_OBU_T_TM_baseline2VTable);
    }
    return is_struct__476_double_conversion_allowed();
}

int is_P027V1_OBU_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_OBU_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_OBU_T_TM_baseline2VTable);
    }
    return is_struct__476_long_convertion_allowed();
}

void compare_P027V1_OBU_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_OBU_T_TM_baseline2VTable != NULL
        && pSimP027V1_OBU_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_OBU_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_OBU_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_OBU_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_OBU_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__476(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_OBU_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_OBU_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_OBU_T_TM_baseline2VTable, nRetValue);
    }
    return struct__476_to_double(pValue, nRetValue);
}

int P027V1_OBU_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_OBU_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_OBU_T_TM_baseline2VTable, nRetValue);
    }
    return struct__476_to_long(pValue, nRetValue);
}

int get_P027V1_OBU_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__476_signature(pfnStrAppend, pData);
}

int set_P027V1_OBU_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__476_default_value(pValue);
}

int check_P027V1_OBU_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_OBU_T_TM_baseline2 rTemp;
    return string_to_P027V1_OBU_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_OBU_T_TM_baseline2_Utils = {
    P027V1_OBU_T_TM_baseline2_to_string,
    check_P027V1_OBU_T_TM_baseline2_string,
    string_to_P027V1_OBU_T_TM_baseline2,
    is_P027V1_OBU_T_TM_baseline2_double_conversion_allowed,
    P027V1_OBU_T_TM_baseline2_to_double,
    is_P027V1_OBU_T_TM_baseline2_long_convertion_allowed,
    P027V1_OBU_T_TM_baseline2_to_long,
    compare_P027V1_OBU_T_TM_baseline2,
    get_P027V1_OBU_T_TM_baseline2_signature,
    set_P027V1_OBU_T_TM_baseline2_default_value,
    sizeof(P027V1_OBU_T_TM_baseline2)
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

#include "C:/Program Files/Esterel Technologies/SCADE R16.1/SCADE/lib/kcg_conv.c"
