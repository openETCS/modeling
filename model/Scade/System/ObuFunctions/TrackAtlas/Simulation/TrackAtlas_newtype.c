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
 ** struct__307 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__307VTable;

static SimFieldUtils struct__307_fields[] = {
    {"valid", offsetof(struct__307,valid), &_Type_kcg_bool_Utils},
    {"Loc_Absolute", offsetof(struct__307,Loc_Absolute), &_Type_kcg_int_Utils},
    {"Loc_LRBG", offsetof(struct__307,Loc_LRBG), &_Type_kcg_int_Utils},
    {"Gradient", offsetof(struct__307,Gradient), &_Type_kcg_int_Utils},
    {"L_Gradient", offsetof(struct__307,L_Gradient), &_Type_kcg_int_Utils},
};

int struct__307_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__307VTable != NULL
        && pSimstruct__307VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__307VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__307_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__307(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__307VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__307VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__307_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__307_double_conversion_allowed()
{
    if (pSimstruct__307VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__307VTable);
    }
    return 0;
}

int is_struct__307_long_convertion_allowed()
{
    if (pSimstruct__307VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__307VTable);
    }
    return 0;
}

void compare_struct__307(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__307VTable != NULL
        && pSimstruct__307VTable->m_version >= Scv612
        && pSimstruct__307VTable->m_pfnCompare != NULL) {
        if (pSimstruct__307VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__307VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__307VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__307_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__307_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__307VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__307VTable, nRetValue);
    }
    return 0;
}

int struct__307_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__307VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__307VTable, nRetValue);
    }
    return 0;
}

int get_struct__307_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__307_fields, 5, pfnStrAppend, pData);
}

int set_struct__307_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__307*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__307*)pValue)->Loc_Absolute));
    set_kcg_int_default_value(&(((struct__307*)pValue)->Loc_LRBG));
    set_kcg_int_default_value(&(((struct__307*)pValue)->Gradient));
    set_kcg_int_default_value(&(((struct__307*)pValue)->L_Gradient));
    return 1;
}

int check_struct__307_string(const char *str, char **endptr)
{
    static struct__307 rTemp;
    return string_to_struct__307(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__307_Utils = {
    struct__307_to_string,
    check_struct__307_string,
    string_to_struct__307,
    is_struct__307_double_conversion_allowed,
    struct__307_to_double,
    is_struct__307_long_convertion_allowed,
    struct__307_to_long,
    compare_struct__307,
    get_struct__307_signature,
    set_struct__307_default_value,
    sizeof(struct__307)
};

/****************************************************************
 ** array__315 
 ****************************************************************/

struct SimTypeVTable *pSimarray__315VTable;

int array__315_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__315VTable != NULL
        && pSimarray__315VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__315VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__307_to_string, 50, sizeof(struct__307), pfnStrAppend, pData);
}

int string_to_array__315(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__315VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__315VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__307_Utils, 50, sizeof(struct__307), endptr);
    }
    return nRet;
}

int is_array__315_double_conversion_allowed()
{
    if (pSimarray__315VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__315VTable);
    }
    return 0;
}

int is_array__315_long_convertion_allowed()
{
    if (pSimarray__315VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__315VTable);
    }
    return 0;
}

void compare_array__315(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__315VTable != NULL
        && pSimarray__315VTable->m_version >= Scv612
        && pSimarray__315VTable->m_pfnCompare != NULL) {
        if (pSimarray__315VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__315VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__315VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__307, 50, sizeof(struct__307), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__315_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__315VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__315VTable, nRetValue);
    }
    return 0;
}

int array__315_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__315VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__315VTable, nRetValue);
    }
    return 0;
}

int get_array__315_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 50; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__307_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__315_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 50; i++)
        set_struct__307_default_value(&((struct__307*)pValue)[i]);
    return 1;
}

int check_array__315_string(const char *str, char **endptr)
{
    static array__315 rTemp;
    return string_to_array__315(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__315_Utils = {
    array__315_to_string,
    check_array__315_string,
    string_to_array__315,
    is_array__315_double_conversion_allowed,
    array__315_to_double,
    is_array__315_long_convertion_allowed,
    array__315_to_long,
    compare_array__315,
    get_array__315_signature,
    set_array__315_default_value,
    sizeof(array__315)
};

/****************************************************************
 ** struct__318 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__318VTable;

static SimFieldUtils struct__318_fields[] = {
    {"valid", offsetof(struct__318,valid), &_Type_kcg_bool_Utils},
    {"d_gradient", offsetof(struct__318,d_gradient), &_Type_kcg_int_Utils},
    {"q_gdir", offsetof(struct__318,q_gdir), &_Type_Q_GDIR_Utils},
    {"g_a", offsetof(struct__318,g_a), &_Type_kcg_int_Utils},
};

int struct__318_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__318VTable != NULL
        && pSimstruct__318VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__318VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__318_fields, 4, pfnStrAppend, pData);
}

int string_to_struct__318(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__318VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__318VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__318_fields, 4, endptr);
    }
    return nRet;
}

int is_struct__318_double_conversion_allowed()
{
    if (pSimstruct__318VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__318VTable);
    }
    return 0;
}

int is_struct__318_long_convertion_allowed()
{
    if (pSimstruct__318VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__318VTable);
    }
    return 0;
}

void compare_struct__318(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__318VTable != NULL
        && pSimstruct__318VTable->m_version >= Scv612
        && pSimstruct__318VTable->m_pfnCompare != NULL) {
        if (pSimstruct__318VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__318VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__318VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__318_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__318_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__318VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__318VTable, nRetValue);
    }
    return 0;
}

int struct__318_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__318VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__318VTable, nRetValue);
    }
    return 0;
}

int get_struct__318_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__318_fields, 4, pfnStrAppend, pData);
}

int set_struct__318_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__318*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__318*)pValue)->d_gradient));
    set_Q_GDIR_default_value(&(((struct__318*)pValue)->q_gdir));
    set_kcg_int_default_value(&(((struct__318*)pValue)->g_a));
    return 1;
}

int check_struct__318_string(const char *str, char **endptr)
{
    static struct__318 rTemp;
    return string_to_struct__318(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__318_Utils = {
    struct__318_to_string,
    check_struct__318_string,
    string_to_struct__318,
    is_struct__318_double_conversion_allowed,
    struct__318_to_double,
    is_struct__318_long_convertion_allowed,
    struct__318_to_long,
    compare_struct__318,
    get_struct__318_signature,
    set_struct__318_default_value,
    sizeof(struct__318)
};

/****************************************************************
 ** array__325 
 ****************************************************************/

struct SimTypeVTable *pSimarray__325VTable;

int array__325_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__325VTable != NULL
        && pSimarray__325VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__325VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__318_to_string, 33, sizeof(struct__318), pfnStrAppend, pData);
}

int string_to_array__325(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__325VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__325VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__318_Utils, 33, sizeof(struct__318), endptr);
    }
    return nRet;
}

int is_array__325_double_conversion_allowed()
{
    if (pSimarray__325VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__325VTable);
    }
    return 0;
}

int is_array__325_long_convertion_allowed()
{
    if (pSimarray__325VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__325VTable);
    }
    return 0;
}

void compare_array__325(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__325VTable != NULL
        && pSimarray__325VTable->m_version >= Scv612
        && pSimarray__325VTable->m_pfnCompare != NULL) {
        if (pSimarray__325VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__325VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__325VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__318, 33, sizeof(struct__318), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__325_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__325VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__325VTable, nRetValue);
    }
    return 0;
}

int array__325_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__325VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__325VTable, nRetValue);
    }
    return 0;
}

int get_array__325_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__318_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__325_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__318_default_value(&((struct__318*)pValue)[i]);
    return 1;
}

int check_array__325_string(const char *str, char **endptr)
{
    static array__325 rTemp;
    return string_to_array__325(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__325_Utils = {
    array__325_to_string,
    check_array__325_string,
    string_to_array__325,
    is_array__325_double_conversion_allowed,
    array__325_to_double,
    is_array__325_long_convertion_allowed,
    array__325_to_long,
    compare_array__325,
    get_array__325_signature,
    set_array__325_default_value,
    sizeof(array__325)
};

/****************************************************************
 ** struct__328 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__328VTable;

static SimFieldUtils struct__328_fields[] = {
    {"valid", offsetof(struct__328,valid), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(struct__328,q_dir), &_Type_Q_DIR_Utils},
    {"q_scale", offsetof(struct__328,q_scale), &_Type_Q_SCALE_Utils},
    {"n_iter", offsetof(struct__328,n_iter), &_Type_kcg_int_Utils},
    {"sections", offsetof(struct__328,sections), &_Type_array__325_Utils},
};

int struct__328_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__328VTable != NULL
        && pSimstruct__328VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__328VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__328_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__328(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__328VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__328VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__328_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__328_double_conversion_allowed()
{
    if (pSimstruct__328VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__328VTable);
    }
    return 0;
}

int is_struct__328_long_convertion_allowed()
{
    if (pSimstruct__328VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__328VTable);
    }
    return 0;
}

void compare_struct__328(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__328VTable != NULL
        && pSimstruct__328VTable->m_version >= Scv612
        && pSimstruct__328VTable->m_pfnCompare != NULL) {
        if (pSimstruct__328VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__328VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__328VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__328_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__328_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__328VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__328VTable, nRetValue);
    }
    return 0;
}

int struct__328_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__328VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__328VTable, nRetValue);
    }
    return 0;
}

int get_struct__328_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__328_fields, 5, pfnStrAppend, pData);
}

int set_struct__328_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__328*)pValue)->valid));
    set_Q_DIR_default_value(&(((struct__328*)pValue)->q_dir));
    set_Q_SCALE_default_value(&(((struct__328*)pValue)->q_scale));
    set_kcg_int_default_value(&(((struct__328*)pValue)->n_iter));
    set_array__325_default_value(&(((struct__328*)pValue)->sections));
    return 1;
}

int check_struct__328_string(const char *str, char **endptr)
{
    static struct__328 rTemp;
    return string_to_struct__328(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__328_Utils = {
    struct__328_to_string,
    check_struct__328_string,
    string_to_struct__328,
    is_struct__328_double_conversion_allowed,
    struct__328_to_double,
    is_struct__328_long_convertion_allowed,
    struct__328_to_long,
    compare_struct__328,
    get_struct__328_signature,
    set_struct__328_default_value,
    sizeof(struct__328)
};

/****************************************************************
 ** array__336 
 ****************************************************************/

struct SimTypeVTable *pSimarray__336VTable;

int array__336_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__336VTable != NULL
        && pSimarray__336VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__336VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array__325_to_string, 33, sizeof(array__325), pfnStrAppend, pData);
}

int string_to_array__336(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__336VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__336VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array__325_Utils, 33, sizeof(array__325), endptr);
    }
    return nRet;
}

int is_array__336_double_conversion_allowed()
{
    if (pSimarray__336VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__336VTable);
    }
    return 0;
}

int is_array__336_long_convertion_allowed()
{
    if (pSimarray__336VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__336VTable);
    }
    return 0;
}

void compare_array__336(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__336VTable != NULL
        && pSimarray__336VTable->m_version >= Scv612
        && pSimarray__336VTable->m_pfnCompare != NULL) {
        if (pSimarray__336VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__336VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__336VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array__325, 33, sizeof(array__325), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__336_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__336VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__336VTable, nRetValue);
    }
    return 0;
}

int array__336_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__336VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__336VTable, nRetValue);
    }
    return 0;
}

int get_array__336_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array__325_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__336_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_array__325_default_value(&((array__325*)pValue)[i]);
    return 1;
}

int check_array__336_string(const char *str, char **endptr)
{
    static array__336 rTemp;
    return string_to_array__336(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__336_Utils = {
    array__336_to_string,
    check_array__336_string,
    string_to_array__336,
    is_array__336_double_conversion_allowed,
    array__336_to_double,
    is_array__336_long_convertion_allowed,
    array__336_to_long,
    compare_array__336,
    get_array__336_signature,
    set_array__336_default_value,
    sizeof(array__336)
};

/****************************************************************
 ** array__339 
 ****************************************************************/

struct SimTypeVTable *pSimarray__339VTable;

int array__339_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__339VTable != NULL
        && pSimarray__339VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__339VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, Q_SCALE_to_string, 33, sizeof(Q_SCALE), pfnStrAppend, pData);
}

int string_to_array__339(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__339VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__339VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_Q_SCALE_Utils, 33, sizeof(Q_SCALE), endptr);
    }
    return nRet;
}

int is_array__339_double_conversion_allowed()
{
    if (pSimarray__339VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__339VTable);
    }
    return 0;
}

int is_array__339_long_convertion_allowed()
{
    if (pSimarray__339VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__339VTable);
    }
    return 0;
}

void compare_array__339(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__339VTable != NULL
        && pSimarray__339VTable->m_version >= Scv612
        && pSimarray__339VTable->m_pfnCompare != NULL) {
        if (pSimarray__339VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__339VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__339VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int array__339_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__339VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__339VTable, nRetValue);
    }
    return 0;
}

int array__339_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__339VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__339VTable, nRetValue);
    }
    return 0;
}

int get_array__339_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_array__339_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_Q_SCALE_default_value(&((Q_SCALE*)pValue)[i]);
    return 1;
}

int check_array__339_string(const char *str, char **endptr)
{
    static array__339 rTemp;
    return string_to_array__339(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__339_Utils = {
    array__339_to_string,
    check_array__339_string,
    string_to_array__339,
    is_array__339_double_conversion_allowed,
    array__339_to_double,
    is_array__339_long_convertion_allowed,
    array__339_to_long,
    compare_array__339,
    get_array__339_signature,
    set_array__339_default_value,
    sizeof(array__339)
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
 ** D_GRADIENT 
 ****************************************************************/

struct SimTypeVTable *pSimD_GRADIENTVTable;

int D_GRADIENT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_GRADIENTVTable != NULL
        && pSimD_GRADIENTVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_GRADIENTVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_GRADIENT(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_GRADIENTVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_GRADIENTVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_GRADIENT_double_conversion_allowed()
{
    if (pSimD_GRADIENTVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_GRADIENTVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_D_GRADIENT_long_convertion_allowed()
{
    if (pSimD_GRADIENTVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimD_GRADIENTVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_D_GRADIENT(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_GRADIENTVTable != NULL
        && pSimD_GRADIENTVTable->m_version >= Scv612
        && pSimD_GRADIENTVTable->m_pfnCompare != NULL) {
        if (pSimD_GRADIENTVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_GRADIENTVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_GRADIENTVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_GRADIENT_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_GRADIENTVTable != NULL) {
        return VTable_to_double(pValue, pSimD_GRADIENTVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int D_GRADIENT_to_long(const void *pValue, long *nRetValue)
{
    if (pSimD_GRADIENTVTable != NULL) {
        return VTable_to_long(pValue, pSimD_GRADIENTVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_D_GRADIENT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_GRADIENT_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_GRADIENT_string(const char *str, char **endptr)
{
    static D_GRADIENT rTemp;
    return string_to_D_GRADIENT(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_GRADIENT_Utils = {
    D_GRADIENT_to_string,
    check_D_GRADIENT_string,
    string_to_D_GRADIENT,
    is_D_GRADIENT_double_conversion_allowed,
    D_GRADIENT_to_double,
    is_D_GRADIENT_long_convertion_allowed,
    D_GRADIENT_to_long,
    compare_D_GRADIENT,
    get_D_GRADIENT_signature,
    set_D_GRADIENT_default_value,
    sizeof(D_GRADIENT)
};

/****************************************************************
 ** Q_GDIR 
 ****************************************************************/

struct SimTypeVTable *pSimQ_GDIRVTable;

static SimEnumValUtils Q_GDIR_values[] = {
    { "Q_GDIR_downhill", Q_GDIR_downhill},
    { "Q_GDIR_downhill", Q_GDIR_downhill},
    { "Q_GDIR_uphill", Q_GDIR_uphill},
    { "Q_GDIR_uphill", Q_GDIR_uphill},
};
const int Q_GDIR_nb_values = 4;

int Q_GDIR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_GDIRVTable != NULL
        && pSimQ_GDIRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_GDIRVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_GDIR*)pValue, Q_GDIR_values, Q_GDIR_nb_values, pfnStrAppend, pData); 
}

int string_to_Q_GDIR(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_GDIRVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_GDIRVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_GDIR_values, Q_GDIR_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_GDIR*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_GDIR_double_conversion_allowed()
{
    if (pSimQ_GDIRVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_GDIRVTable);
    }
    return 1;
}

int is_Q_GDIR_long_convertion_allowed()
{
    if (pSimQ_GDIRVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_GDIRVTable);
    }
    return 1;
}

void compare_Q_GDIR(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_GDIRVTable != NULL
        && pSimQ_GDIRVTable->m_version >= Scv612
        && pSimQ_GDIRVTable->m_pfnCompare != NULL) {
        if (pSimQ_GDIRVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_GDIRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_GDIRVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_GDIR*)pValue1), (int)(*(Q_GDIR*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_GDIR_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_GDIRVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_GDIRVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_GDIR*)pValue);
    return 1;
}

int Q_GDIR_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_GDIRVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_GDIRVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_GDIR*)pValue);
    return 1;
}

int get_Q_GDIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_GDIR_values, Q_GDIR_nb_values, pfnStrAppend, pData);
}

int set_Q_GDIR_default_value(void *pValue)
{
    *(Q_GDIR*)pValue = Q_GDIR_downhill;
    return 1;
}

int check_Q_GDIR_string(const char *str, char **endptr)
{
    static Q_GDIR rTemp;
    return string_to_Q_GDIR(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_GDIR_Utils = {
    Q_GDIR_to_string,
    check_Q_GDIR_string,
    string_to_Q_GDIR,
    is_Q_GDIR_double_conversion_allowed,
    Q_GDIR_to_double,
    is_Q_GDIR_long_convertion_allowed,
    Q_GDIR_to_long,
    compare_Q_GDIR,
    get_Q_GDIR_signature,
    set_Q_GDIR_default_value,
    sizeof(Q_GDIR)
};

/****************************************************************
 ** G_A 
 ****************************************************************/

struct SimTypeVTable *pSimG_AVTable;

int G_A_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimG_AVTable != NULL
        && pSimG_AVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimG_AVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_G_A(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimG_AVTable != NULL) {
        nRet=string_to_VTable(str, pSimG_AVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_G_A_double_conversion_allowed()
{
    if (pSimG_AVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimG_AVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_G_A_long_convertion_allowed()
{
    if (pSimG_AVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimG_AVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_G_A(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimG_AVTable != NULL
        && pSimG_AVTable->m_version >= Scv612
        && pSimG_AVTable->m_pfnCompare != NULL) {
        if (pSimG_AVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimG_AVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimG_AVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int G_A_to_double(const void *pValue, double *nRetValue)
{
    if (pSimG_AVTable != NULL) {
        return VTable_to_double(pValue, pSimG_AVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int G_A_to_long(const void *pValue, long *nRetValue)
{
    if (pSimG_AVTable != NULL) {
        return VTable_to_long(pValue, pSimG_AVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_G_A_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_G_A_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_G_A_string(const char *str, char **endptr)
{
    static G_A rTemp;
    return string_to_G_A(str, &rTemp, endptr);
}

SimTypeUtils _Type_G_A_Utils = {
    G_A_to_string,
    check_G_A_string,
    string_to_G_A,
    is_G_A_double_conversion_allowed,
    G_A_to_double,
    is_G_A_long_convertion_allowed,
    G_A_to_long,
    compare_G_A,
    get_G_A_signature,
    set_G_A_default_value,
    sizeof(G_A)
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
 ** G_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimG_internal_Type_Obu_BasicTypes_PkgVTable;

int G_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimG_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimG_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimG_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_G_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimG_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimG_internal_Type_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_G_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimG_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimG_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_G_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimG_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimG_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_G_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimG_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimG_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimG_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimG_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimG_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimG_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int G_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimG_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimG_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int G_internal_Type_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimG_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimG_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_G_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_G_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_G_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static G_internal_Type_Obu_BasicTypes_Pkg rTemp;
    return string_to_G_internal_Type_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_G_internal_Type_Obu_BasicTypes_Pkg_Utils = {
    G_internal_Type_Obu_BasicTypes_Pkg_to_string,
    check_G_internal_Type_Obu_BasicTypes_Pkg_string,
    string_to_G_internal_Type_Obu_BasicTypes_Pkg,
    is_G_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed,
    G_internal_Type_Obu_BasicTypes_Pkg_to_double,
    is_G_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed,
    G_internal_Type_Obu_BasicTypes_Pkg_to_long,
    compare_G_internal_Type_Obu_BasicTypes_Pkg,
    get_G_internal_Type_Obu_BasicTypes_Pkg_signature,
    set_G_internal_Type_Obu_BasicTypes_Pkg_default_value,
    sizeof(G_internal_Type_Obu_BasicTypes_Pkg)
};

/****************************************************************
 ** P021_section_enum_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_section_enum_T_TMVTable;

int P021_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_section_enum_T_TMVTable != NULL
        && pSimP021_section_enum_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_section_enum_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__318_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_section_enum_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_section_enum_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_section_enum_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__318(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_section_enum_T_TM_double_conversion_allowed()
{
    if (pSimP021_section_enum_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_section_enum_T_TMVTable);
    }
    return is_struct__318_double_conversion_allowed();
}

int is_P021_section_enum_T_TM_long_convertion_allowed()
{
    if (pSimP021_section_enum_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_section_enum_T_TMVTable);
    }
    return is_struct__318_long_convertion_allowed();
}

void compare_P021_section_enum_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_section_enum_T_TMVTable != NULL
        && pSimP021_section_enum_T_TMVTable->m_version >= Scv612
        && pSimP021_section_enum_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_section_enum_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_section_enum_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_section_enum_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__318(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_section_enum_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_section_enum_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_section_enum_T_TMVTable, nRetValue);
    }
    return struct__318_to_double(pValue, nRetValue);
}

int P021_section_enum_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_section_enum_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_section_enum_T_TMVTable, nRetValue);
    }
    return struct__318_to_long(pValue, nRetValue);
}

int get_P021_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__318_signature(pfnStrAppend, pData);
}

int set_P021_section_enum_T_TM_default_value(void *pValue)
{
    return set_struct__318_default_value(pValue);
}

int check_P021_section_enum_T_TM_string(const char *str, char **endptr)
{
    static P021_section_enum_T_TM rTemp;
    return string_to_P021_section_enum_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_section_enum_T_TM_Utils = {
    P021_section_enum_T_TM_to_string,
    check_P021_section_enum_T_TM_string,
    string_to_P021_section_enum_T_TM,
    is_P021_section_enum_T_TM_double_conversion_allowed,
    P021_section_enum_T_TM_to_double,
    is_P021_section_enum_T_TM_long_convertion_allowed,
    P021_section_enum_T_TM_to_long,
    compare_P021_section_enum_T_TM,
    get_P021_section_enum_T_TM_signature,
    set_P021_section_enum_T_TM_default_value,
    sizeof(P021_section_enum_T_TM)
};

/****************************************************************
 ** P021_OBU_sectionlist_enum_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_OBU_sectionlist_enum_T_TMVTable;

int P021_OBU_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_OBU_sectionlist_enum_T_TMVTable != NULL
        && pSimP021_OBU_sectionlist_enum_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_OBU_sectionlist_enum_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__325_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_OBU_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_OBU_sectionlist_enum_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_OBU_sectionlist_enum_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__325(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_OBU_sectionlist_enum_T_TM_double_conversion_allowed()
{
    if (pSimP021_OBU_sectionlist_enum_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_OBU_sectionlist_enum_T_TMVTable);
    }
    return is_array__325_double_conversion_allowed();
}

int is_P021_OBU_sectionlist_enum_T_TM_long_convertion_allowed()
{
    if (pSimP021_OBU_sectionlist_enum_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_OBU_sectionlist_enum_T_TMVTable);
    }
    return is_array__325_long_convertion_allowed();
}

void compare_P021_OBU_sectionlist_enum_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_OBU_sectionlist_enum_T_TMVTable != NULL
        && pSimP021_OBU_sectionlist_enum_T_TMVTable->m_version >= Scv612
        && pSimP021_OBU_sectionlist_enum_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_OBU_sectionlist_enum_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_OBU_sectionlist_enum_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_OBU_sectionlist_enum_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__325(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_OBU_sectionlist_enum_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_OBU_sectionlist_enum_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_OBU_sectionlist_enum_T_TMVTable, nRetValue);
    }
    return array__325_to_double(pValue, nRetValue);
}

int P021_OBU_sectionlist_enum_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_OBU_sectionlist_enum_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_OBU_sectionlist_enum_T_TMVTable, nRetValue);
    }
    return array__325_to_long(pValue, nRetValue);
}

int get_P021_OBU_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__325_signature(pfnStrAppend, pData);
}

int set_P021_OBU_sectionlist_enum_T_TM_default_value(void *pValue)
{
    return set_array__325_default_value(pValue);
}

int check_P021_OBU_sectionlist_enum_T_TM_string(const char *str, char **endptr)
{
    static P021_OBU_sectionlist_enum_T_TM rTemp;
    return string_to_P021_OBU_sectionlist_enum_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_OBU_sectionlist_enum_T_TM_Utils = {
    P021_OBU_sectionlist_enum_T_TM_to_string,
    check_P021_OBU_sectionlist_enum_T_TM_string,
    string_to_P021_OBU_sectionlist_enum_T_TM,
    is_P021_OBU_sectionlist_enum_T_TM_double_conversion_allowed,
    P021_OBU_sectionlist_enum_T_TM_to_double,
    is_P021_OBU_sectionlist_enum_T_TM_long_convertion_allowed,
    P021_OBU_sectionlist_enum_T_TM_to_long,
    compare_P021_OBU_sectionlist_enum_T_TM,
    get_P021_OBU_sectionlist_enum_T_TM_signature,
    set_P021_OBU_sectionlist_enum_T_TM_default_value,
    sizeof(P021_OBU_sectionlist_enum_T_TM)
};

/****************************************************************
 ** P021_OBU_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_OBU_T_TMVTable;

int P021_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_OBU_T_TMVTable != NULL
        && pSimP021_OBU_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_OBU_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__328_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_OBU_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_OBU_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_OBU_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__328(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_OBU_T_TM_double_conversion_allowed()
{
    if (pSimP021_OBU_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_OBU_T_TMVTable);
    }
    return is_struct__328_double_conversion_allowed();
}

int is_P021_OBU_T_TM_long_convertion_allowed()
{
    if (pSimP021_OBU_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_OBU_T_TMVTable);
    }
    return is_struct__328_long_convertion_allowed();
}

void compare_P021_OBU_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_OBU_T_TMVTable != NULL
        && pSimP021_OBU_T_TMVTable->m_version >= Scv612
        && pSimP021_OBU_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_OBU_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_OBU_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_OBU_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__328(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_OBU_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_OBU_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_OBU_T_TMVTable, nRetValue);
    }
    return struct__328_to_double(pValue, nRetValue);
}

int P021_OBU_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_OBU_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_OBU_T_TMVTable, nRetValue);
    }
    return struct__328_to_long(pValue, nRetValue);
}

int get_P021_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__328_signature(pfnStrAppend, pData);
}

int set_P021_OBU_T_TM_default_value(void *pValue)
{
    return set_struct__328_default_value(pValue);
}

int check_P021_OBU_T_TM_string(const char *str, char **endptr)
{
    static P021_OBU_T_TM rTemp;
    return string_to_P021_OBU_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_OBU_T_TM_Utils = {
    P021_OBU_T_TM_to_string,
    check_P021_OBU_T_TM_string,
    string_to_P021_OBU_T_TM,
    is_P021_OBU_T_TM_double_conversion_allowed,
    P021_OBU_T_TM_to_double,
    is_P021_OBU_T_TM_long_convertion_allowed,
    P021_OBU_T_TM_to_long,
    compare_P021_OBU_T_TM,
    get_P021_OBU_T_TM_signature,
    set_P021_OBU_T_TM_default_value,
    sizeof(P021_OBU_T_TM)
};

/****************************************************************
 ** Gradient_section_t_TrackAtlasTypes 
 ****************************************************************/

struct SimTypeVTable *pSimGradient_section_t_TrackAtlasTypesVTable;

int Gradient_section_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimGradient_section_t_TrackAtlasTypesVTable != NULL
        && pSimGradient_section_t_TrackAtlasTypesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimGradient_section_t_TrackAtlasTypesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__307_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Gradient_section_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimGradient_section_t_TrackAtlasTypesVTable != NULL) {
        nRet=string_to_VTable(str, pSimGradient_section_t_TrackAtlasTypesVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__307(str, pValue, endptr);
    }
    return nRet;
}

int is_Gradient_section_t_TrackAtlasTypes_double_conversion_allowed()
{
    if (pSimGradient_section_t_TrackAtlasTypesVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimGradient_section_t_TrackAtlasTypesVTable);
    }
    return is_struct__307_double_conversion_allowed();
}

int is_Gradient_section_t_TrackAtlasTypes_long_convertion_allowed()
{
    if (pSimGradient_section_t_TrackAtlasTypesVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimGradient_section_t_TrackAtlasTypesVTable);
    }
    return is_struct__307_long_convertion_allowed();
}

void compare_Gradient_section_t_TrackAtlasTypes(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimGradient_section_t_TrackAtlasTypesVTable != NULL
        && pSimGradient_section_t_TrackAtlasTypesVTable->m_version >= Scv612
        && pSimGradient_section_t_TrackAtlasTypesVTable->m_pfnCompare != NULL) {
        if (pSimGradient_section_t_TrackAtlasTypesVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimGradient_section_t_TrackAtlasTypesVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimGradient_section_t_TrackAtlasTypesVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__307(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Gradient_section_t_TrackAtlasTypes_to_double(const void *pValue, double *nRetValue)
{
    if (pSimGradient_section_t_TrackAtlasTypesVTable != NULL) {
        return VTable_to_double(pValue, pSimGradient_section_t_TrackAtlasTypesVTable, nRetValue);
    }
    return struct__307_to_double(pValue, nRetValue);
}

int Gradient_section_t_TrackAtlasTypes_to_long(const void *pValue, long *nRetValue)
{
    if (pSimGradient_section_t_TrackAtlasTypesVTable != NULL) {
        return VTable_to_long(pValue, pSimGradient_section_t_TrackAtlasTypesVTable, nRetValue);
    }
    return struct__307_to_long(pValue, nRetValue);
}

int get_Gradient_section_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__307_signature(pfnStrAppend, pData);
}

int set_Gradient_section_t_TrackAtlasTypes_default_value(void *pValue)
{
    return set_struct__307_default_value(pValue);
}

int check_Gradient_section_t_TrackAtlasTypes_string(const char *str, char **endptr)
{
    static Gradient_section_t_TrackAtlasTypes rTemp;
    return string_to_Gradient_section_t_TrackAtlasTypes(str, &rTemp, endptr);
}

SimTypeUtils _Type_Gradient_section_t_TrackAtlasTypes_Utils = {
    Gradient_section_t_TrackAtlasTypes_to_string,
    check_Gradient_section_t_TrackAtlasTypes_string,
    string_to_Gradient_section_t_TrackAtlasTypes,
    is_Gradient_section_t_TrackAtlasTypes_double_conversion_allowed,
    Gradient_section_t_TrackAtlasTypes_to_double,
    is_Gradient_section_t_TrackAtlasTypes_long_convertion_allowed,
    Gradient_section_t_TrackAtlasTypes_to_long,
    compare_Gradient_section_t_TrackAtlasTypes,
    get_Gradient_section_t_TrackAtlasTypes_signature,
    set_Gradient_section_t_TrackAtlasTypes_default_value,
    sizeof(Gradient_section_t_TrackAtlasTypes)
};

/****************************************************************
 ** GradientProfile_t_TrackAtlasTypes 
 ****************************************************************/

struct SimTypeVTable *pSimGradientProfile_t_TrackAtlasTypesVTable;

int GradientProfile_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimGradientProfile_t_TrackAtlasTypesVTable != NULL
        && pSimGradientProfile_t_TrackAtlasTypesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimGradientProfile_t_TrackAtlasTypesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__315_to_string(pValue, pfnStrAppend, pData);
}

int string_to_GradientProfile_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimGradientProfile_t_TrackAtlasTypesVTable != NULL) {
        nRet=string_to_VTable(str, pSimGradientProfile_t_TrackAtlasTypesVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__315(str, pValue, endptr);
    }
    return nRet;
}

int is_GradientProfile_t_TrackAtlasTypes_double_conversion_allowed()
{
    if (pSimGradientProfile_t_TrackAtlasTypesVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimGradientProfile_t_TrackAtlasTypesVTable);
    }
    return is_array__315_double_conversion_allowed();
}

int is_GradientProfile_t_TrackAtlasTypes_long_convertion_allowed()
{
    if (pSimGradientProfile_t_TrackAtlasTypesVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimGradientProfile_t_TrackAtlasTypesVTable);
    }
    return is_array__315_long_convertion_allowed();
}

void compare_GradientProfile_t_TrackAtlasTypes(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimGradientProfile_t_TrackAtlasTypesVTable != NULL
        && pSimGradientProfile_t_TrackAtlasTypesVTable->m_version >= Scv612
        && pSimGradientProfile_t_TrackAtlasTypesVTable->m_pfnCompare != NULL) {
        if (pSimGradientProfile_t_TrackAtlasTypesVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimGradientProfile_t_TrackAtlasTypesVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimGradientProfile_t_TrackAtlasTypesVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__315(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int GradientProfile_t_TrackAtlasTypes_to_double(const void *pValue, double *nRetValue)
{
    if (pSimGradientProfile_t_TrackAtlasTypesVTable != NULL) {
        return VTable_to_double(pValue, pSimGradientProfile_t_TrackAtlasTypesVTable, nRetValue);
    }
    return array__315_to_double(pValue, nRetValue);
}

int GradientProfile_t_TrackAtlasTypes_to_long(const void *pValue, long *nRetValue)
{
    if (pSimGradientProfile_t_TrackAtlasTypesVTable != NULL) {
        return VTable_to_long(pValue, pSimGradientProfile_t_TrackAtlasTypesVTable, nRetValue);
    }
    return array__315_to_long(pValue, nRetValue);
}

int get_GradientProfile_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__315_signature(pfnStrAppend, pData);
}

int set_GradientProfile_t_TrackAtlasTypes_default_value(void *pValue)
{
    return set_array__315_default_value(pValue);
}

int check_GradientProfile_t_TrackAtlasTypes_string(const char *str, char **endptr)
{
    static GradientProfile_t_TrackAtlasTypes rTemp;
    return string_to_GradientProfile_t_TrackAtlasTypes(str, &rTemp, endptr);
}

SimTypeUtils _Type_GradientProfile_t_TrackAtlasTypes_Utils = {
    GradientProfile_t_TrackAtlasTypes_to_string,
    check_GradientProfile_t_TrackAtlasTypes_string,
    string_to_GradientProfile_t_TrackAtlasTypes,
    is_GradientProfile_t_TrackAtlasTypes_double_conversion_allowed,
    GradientProfile_t_TrackAtlasTypes_to_double,
    is_GradientProfile_t_TrackAtlasTypes_long_convertion_allowed,
    GradientProfile_t_TrackAtlasTypes_to_long,
    compare_GradientProfile_t_TrackAtlasTypes,
    get_GradientProfile_t_TrackAtlasTypes_signature,
    set_GradientProfile_t_TrackAtlasTypes_default_value,
    sizeof(GradientProfile_t_TrackAtlasTypes)
};

#include "C:/Program Files/Esterel Technologies/SCADE R16.1/SCADE/lib/kcg_conv.c"
