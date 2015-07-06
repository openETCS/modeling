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
 ** struct__2398 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2398VTable;

static SimFieldUtils struct__2398_fields[] = {
    {"nid_packet", offsetof(struct__2398,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__2398,q_dir), &_Type_Q_DIR_Utils},
    {"valid", offsetof(struct__2398,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(struct__2398,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(struct__2398,endAddress), &_Type_kcg_int_Utils},
};

int struct__2398_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2398VTable != NULL
        && pSimstruct__2398VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2398VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2398_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__2398(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2398VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2398VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2398_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__2398_double_conversion_allowed()
{
    if (pSimstruct__2398VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2398VTable);
    }
    return 0;
}

int is_struct__2398_long_convertion_allowed()
{
    if (pSimstruct__2398VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2398VTable);
    }
    return 0;
}

void compare_struct__2398(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2398VTable != NULL
        && pSimstruct__2398VTable->m_version >= Scv612
        && pSimstruct__2398VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2398VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2398VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2398VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2398_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2398_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2398VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2398VTable, nRetValue);
    }
    return 0;
}

int struct__2398_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2398VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2398VTable, nRetValue);
    }
    return 0;
}

int get_struct__2398_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2398_fields, 5, pfnStrAppend, pData);
}

int set_struct__2398_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__2398*)pValue)->nid_packet));
    set_Q_DIR_default_value(&(((struct__2398*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((struct__2398*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__2398*)pValue)->startAddress));
    set_kcg_int_default_value(&(((struct__2398*)pValue)->endAddress));
    return 1;
}

int check_struct__2398_string(const char *str, char **endptr)
{
    static struct__2398 rTemp;
    return string_to_struct__2398(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2398_Utils = {
    struct__2398_to_string,
    check_struct__2398_string,
    string_to_struct__2398,
    is_struct__2398_double_conversion_allowed,
    struct__2398_to_double,
    is_struct__2398_long_convertion_allowed,
    struct__2398_to_long,
    compare_struct__2398,
    get_struct__2398_signature,
    set_struct__2398_default_value,
    sizeof(struct__2398)
};

/****************************************************************
 ** array__2406 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2406VTable;

int array__2406_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2406VTable != NULL
        && pSimarray__2406VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2406VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__2398_to_string, 30, sizeof(struct__2398), pfnStrAppend, pData);
}

int string_to_array__2406(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2406VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2406VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__2398_Utils, 30, sizeof(struct__2398), endptr);
    }
    return nRet;
}

int is_array__2406_double_conversion_allowed()
{
    if (pSimarray__2406VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__2406VTable);
    }
    return 0;
}

int is_array__2406_long_convertion_allowed()
{
    if (pSimarray__2406VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__2406VTable);
    }
    return 0;
}

void compare_array__2406(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2406VTable != NULL
        && pSimarray__2406VTable->m_version >= Scv612
        && pSimarray__2406VTable->m_pfnCompare != NULL) {
        if (pSimarray__2406VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2406VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2406VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__2398, 30, sizeof(struct__2398), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2406_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2406VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2406VTable, nRetValue);
    }
    return 0;
}

int array__2406_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__2406VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__2406VTable, nRetValue);
    }
    return 0;
}

int get_array__2406_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__2398_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2406_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_struct__2398_default_value(&((struct__2398*)pValue)[i]);
    return 1;
}

int check_array__2406_string(const char *str, char **endptr)
{
    static array__2406 rTemp;
    return string_to_array__2406(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2406_Utils = {
    array__2406_to_string,
    check_array__2406_string,
    string_to_array__2406,
    is_array__2406_double_conversion_allowed,
    array__2406_to_double,
    is_array__2406_long_convertion_allowed,
    array__2406_to_long,
    compare_array__2406,
    get_array__2406_signature,
    set_array__2406_default_value,
    sizeof(array__2406)
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
 ** struct__2412 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2412VTable;

static SimFieldUtils struct__2412_fields[] = {
    {"PacketHeaders", offsetof(struct__2412,PacketHeaders), &_Type_array__2406_Utils},
    {"PacketData", offsetof(struct__2412,PacketData), &_Type_array_int_500_Utils},
};

int struct__2412_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2412VTable != NULL
        && pSimstruct__2412VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2412VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2412_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__2412(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2412VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2412VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2412_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__2412_double_conversion_allowed()
{
    if (pSimstruct__2412VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2412VTable);
    }
    return 0;
}

int is_struct__2412_long_convertion_allowed()
{
    if (pSimstruct__2412VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2412VTable);
    }
    return 0;
}

void compare_struct__2412(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2412VTable != NULL
        && pSimstruct__2412VTable->m_version >= Scv612
        && pSimstruct__2412VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2412VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2412VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2412VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2412_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2412_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2412VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2412VTable, nRetValue);
    }
    return 0;
}

int struct__2412_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2412VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2412VTable, nRetValue);
    }
    return 0;
}

int get_struct__2412_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2412_fields, 2, pfnStrAppend, pData);
}

int set_struct__2412_default_value(void *pValue)
{
    set_array__2406_default_value(&(((struct__2412*)pValue)->PacketHeaders));
    set_array_int_500_default_value(&(((struct__2412*)pValue)->PacketData));
    return 1;
}

int check_struct__2412_string(const char *str, char **endptr)
{
    static struct__2412 rTemp;
    return string_to_struct__2412(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2412_Utils = {
    struct__2412_to_string,
    check_struct__2412_string,
    string_to_struct__2412,
    is_struct__2412_double_conversion_allowed,
    struct__2412_to_double,
    is_struct__2412_long_convertion_allowed,
    struct__2412_to_long,
    compare_struct__2412,
    get_struct__2412_signature,
    set_struct__2412_default_value,
    sizeof(struct__2412)
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
 ** struct__2420 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2420VTable;

static SimFieldUtils struct__2420_fields[] = {
    {"valid", offsetof(struct__2420,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__2420,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__2420,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__2420,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__2420,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_VALIDNV", offsetof(struct__2420,D_VALIDNV), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__2420,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__2420,SECTIONS), &_Type_array_int_32_Utils},
    {"V_NVSHUNT", offsetof(struct__2420,V_NVSHUNT), &_Type_kcg_int_Utils},
    {"V_NVSTFF", offsetof(struct__2420,V_NVSTFF), &_Type_kcg_int_Utils},
    {"V_NVONSIGHT", offsetof(struct__2420,V_NVONSIGHT), &_Type_kcg_int_Utils},
    {"V_NVUNFIT", offsetof(struct__2420,V_NVUNFIT), &_Type_kcg_int_Utils},
    {"V_NVREL", offsetof(struct__2420,V_NVREL), &_Type_kcg_int_Utils},
    {"D_NVROLL", offsetof(struct__2420,D_NVROLL), &_Type_kcg_int_Utils},
    {"Q_NVSRBKTRG", offsetof(struct__2420,Q_NVSRBKTRG), &_Type_kcg_int_Utils},
    {"Q_NVEMRRLS", offsetof(struct__2420,Q_NVEMRRLS), &_Type_kcg_int_Utils},
    {"V_NVALLOWOVTRP", offsetof(struct__2420,V_NVALLOWOVTRP), &_Type_kcg_int_Utils},
    {"V_NVSUPOVTRP", offsetof(struct__2420,V_NVSUPOVTRP), &_Type_kcg_int_Utils},
    {"D_NVOVTRP", offsetof(struct__2420,D_NVOVTRP), &_Type_kcg_int_Utils},
    {"T_NVOVTRP", offsetof(struct__2420,T_NVOVTRP), &_Type_kcg_int_Utils},
    {"D_NVPOTRP", offsetof(struct__2420,D_NVPOTRP), &_Type_kcg_int_Utils},
    {"M_NVCONTACT", offsetof(struct__2420,M_NVCONTACT), &_Type_kcg_int_Utils},
    {"T_NVCONTACT", offsetof(struct__2420,T_NVCONTACT), &_Type_kcg_int_Utils},
    {"M_NVDERUN", offsetof(struct__2420,M_NVDERUN), &_Type_kcg_int_Utils},
    {"D_NVSTFF", offsetof(struct__2420,D_NVSTFF), &_Type_kcg_int_Utils},
    {"Q_NVDRIVER_ADHES", offsetof(struct__2420,Q_NVDRIVER_ADHES), &_Type_kcg_int_Utils},
};

int struct__2420_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2420VTable != NULL
        && pSimstruct__2420VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2420VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2420_fields, 26, pfnStrAppend, pData);
}

int string_to_struct__2420(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2420VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2420VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2420_fields, 26, endptr);
    }
    return nRet;
}

int is_struct__2420_double_conversion_allowed()
{
    if (pSimstruct__2420VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2420VTable);
    }
    return 0;
}

int is_struct__2420_long_convertion_allowed()
{
    if (pSimstruct__2420VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2420VTable);
    }
    return 0;
}

void compare_struct__2420(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2420VTable != NULL
        && pSimstruct__2420VTable->m_version >= Scv612
        && pSimstruct__2420VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2420VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2420VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2420VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2420_fields, 26, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2420_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2420VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2420VTable, nRetValue);
    }
    return 0;
}

int struct__2420_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2420VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2420VTable, nRetValue);
    }
    return 0;
}

int get_struct__2420_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2420_fields, 26, pfnStrAppend, pData);
}

int set_struct__2420_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2420*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->D_VALIDNV));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->N_ITER));
    set_array_int_32_default_value(&(((struct__2420*)pValue)->SECTIONS));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->V_NVSHUNT));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->V_NVSTFF));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->V_NVONSIGHT));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->V_NVUNFIT));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->V_NVREL));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->D_NVROLL));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->Q_NVSRBKTRG));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->Q_NVEMRRLS));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->V_NVALLOWOVTRP));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->V_NVSUPOVTRP));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->D_NVOVTRP));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->T_NVOVTRP));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->D_NVPOTRP));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->M_NVCONTACT));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->T_NVCONTACT));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->M_NVDERUN));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->D_NVSTFF));
    set_kcg_int_default_value(&(((struct__2420*)pValue)->Q_NVDRIVER_ADHES));
    return 1;
}

int check_struct__2420_string(const char *str, char **endptr)
{
    static struct__2420 rTemp;
    return string_to_struct__2420(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2420_Utils = {
    struct__2420_to_string,
    check_struct__2420_string,
    string_to_struct__2420,
    is_struct__2420_double_conversion_allowed,
    struct__2420_to_double,
    is_struct__2420_long_convertion_allowed,
    struct__2420_to_long,
    compare_struct__2420,
    get_struct__2420_signature,
    set_struct__2420_default_value,
    sizeof(struct__2420)
};

/****************************************************************
 ** struct__2449 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2449VTable;

static SimFieldUtils struct__2449_fields[] = {
    {"valid", offsetof(struct__2449,valid), &_Type_kcg_bool_Utils},
    {"nid_c", offsetof(struct__2449,nid_c), &_Type_kcg_int_Utils},
};

int struct__2449_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2449VTable != NULL
        && pSimstruct__2449VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2449VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2449_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__2449(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2449VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2449VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2449_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__2449_double_conversion_allowed()
{
    if (pSimstruct__2449VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2449VTable);
    }
    return 0;
}

int is_struct__2449_long_convertion_allowed()
{
    if (pSimstruct__2449VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2449VTable);
    }
    return 0;
}

void compare_struct__2449(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2449VTable != NULL
        && pSimstruct__2449VTable->m_version >= Scv612
        && pSimstruct__2449VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2449VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2449VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2449VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2449_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2449_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2449VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2449VTable, nRetValue);
    }
    return 0;
}

int struct__2449_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2449VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2449VTable, nRetValue);
    }
    return 0;
}

int get_struct__2449_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2449_fields, 2, pfnStrAppend, pData);
}

int set_struct__2449_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2449*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__2449*)pValue)->nid_c));
    return 1;
}

int check_struct__2449_string(const char *str, char **endptr)
{
    static struct__2449 rTemp;
    return string_to_struct__2449(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2449_Utils = {
    struct__2449_to_string,
    check_struct__2449_string,
    string_to_struct__2449,
    is_struct__2449_double_conversion_allowed,
    struct__2449_to_double,
    is_struct__2449_long_convertion_allowed,
    struct__2449_to_long,
    compare_struct__2449,
    get_struct__2449_signature,
    set_struct__2449_default_value,
    sizeof(struct__2449)
};

/****************************************************************
 ** array__2454 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2454VTable;

int array__2454_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2454VTable != NULL
        && pSimarray__2454VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2454VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__2449_to_string, 32, sizeof(struct__2449), pfnStrAppend, pData);
}

int string_to_array__2454(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2454VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2454VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__2449_Utils, 32, sizeof(struct__2449), endptr);
    }
    return nRet;
}

int is_array__2454_double_conversion_allowed()
{
    if (pSimarray__2454VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__2454VTable);
    }
    return 0;
}

int is_array__2454_long_convertion_allowed()
{
    if (pSimarray__2454VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__2454VTable);
    }
    return 0;
}

void compare_array__2454(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2454VTable != NULL
        && pSimarray__2454VTable->m_version >= Scv612
        && pSimarray__2454VTable->m_pfnCompare != NULL) {
        if (pSimarray__2454VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2454VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2454VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__2449, 32, sizeof(struct__2449), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2454_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2454VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2454VTable, nRetValue);
    }
    return 0;
}

int array__2454_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__2454VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__2454VTable, nRetValue);
    }
    return 0;
}

int get_array__2454_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__2449_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2454_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__2449_default_value(&((struct__2449*)pValue)[i]);
    return 1;
}

int check_array__2454_string(const char *str, char **endptr)
{
    static array__2454 rTemp;
    return string_to_array__2454(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2454_Utils = {
    array__2454_to_string,
    check_array__2454_string,
    string_to_array__2454,
    is_array__2454_double_conversion_allowed,
    array__2454_to_double,
    is_array__2454_long_convertion_allowed,
    array__2454_to_long,
    compare_array__2454,
    get_array__2454_signature,
    set_array__2454_default_value,
    sizeof(array__2454)
};

/****************************************************************
 ** struct__2457 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2457VTable;

static SimFieldUtils struct__2457_fields[] = {
    {"valid", offsetof(struct__2457,valid), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(struct__2457,q_dir), &_Type_Q_DIR_Utils},
    {"q_scale", offsetof(struct__2457,q_scale), &_Type_Q_SCALE_Utils},
    {"d_validnv", offsetof(struct__2457,d_validnv), &_Type_kcg_int_Utils},
    {"n_iter", offsetof(struct__2457,n_iter), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__2457,SECTIONS), &_Type_array__2454_Utils},
    {"v_nvshunt", offsetof(struct__2457,v_nvshunt), &_Type_kcg_int_Utils},
    {"v_nvstff", offsetof(struct__2457,v_nvstff), &_Type_kcg_int_Utils},
    {"v_nvonsight", offsetof(struct__2457,v_nvonsight), &_Type_kcg_int_Utils},
    {"v_nvunfit", offsetof(struct__2457,v_nvunfit), &_Type_kcg_int_Utils},
    {"v_nvrel", offsetof(struct__2457,v_nvrel), &_Type_kcg_int_Utils},
    {"d_nvroll", offsetof(struct__2457,d_nvroll), &_Type_kcg_int_Utils},
    {"q_nvsbtsmperm", offsetof(struct__2457,q_nvsbtsmperm), &_Type_Q_NVSBTSMPERM_Utils},
    {"q_nvemrrls", offsetof(struct__2457,q_nvemrrls), &_Type_Q_NVEMRRLS_Utils},
    {"v_nvallowovtrp", offsetof(struct__2457,v_nvallowovtrp), &_Type_kcg_int_Utils},
    {"v_nvsopovtrp", offsetof(struct__2457,v_nvsopovtrp), &_Type_kcg_int_Utils},
    {"d_nvovtrp", offsetof(struct__2457,d_nvovtrp), &_Type_kcg_int_Utils},
    {"t_nvovtrp", offsetof(struct__2457,t_nvovtrp), &_Type_kcg_int_Utils},
    {"d_nvpotrp", offsetof(struct__2457,d_nvpotrp), &_Type_kcg_int_Utils},
    {"m_nvcontact", offsetof(struct__2457,m_nvcontact), &_Type_M_NVCONTACT_Utils},
    {"t_nvcontact", offsetof(struct__2457,t_nvcontact), &_Type_kcg_int_Utils},
    {"m_nvderun", offsetof(struct__2457,m_nvderun), &_Type_M_NVDERUN_Utils},
    {"d_nvstff", offsetof(struct__2457,d_nvstff), &_Type_kcg_int_Utils},
    {"q_nvdriver_adhes", offsetof(struct__2457,q_nvdriver_adhes), &_Type_Q_NVDRIVER_ADHES_Utils},
};

int struct__2457_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2457VTable != NULL
        && pSimstruct__2457VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2457VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2457_fields, 24, pfnStrAppend, pData);
}

int string_to_struct__2457(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2457VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2457VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2457_fields, 24, endptr);
    }
    return nRet;
}

int is_struct__2457_double_conversion_allowed()
{
    if (pSimstruct__2457VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2457VTable);
    }
    return 0;
}

int is_struct__2457_long_convertion_allowed()
{
    if (pSimstruct__2457VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2457VTable);
    }
    return 0;
}

void compare_struct__2457(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2457VTable != NULL
        && pSimstruct__2457VTable->m_version >= Scv612
        && pSimstruct__2457VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2457VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2457VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2457VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2457_fields, 24, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2457_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2457VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2457VTable, nRetValue);
    }
    return 0;
}

int struct__2457_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2457VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2457VTable, nRetValue);
    }
    return 0;
}

int get_struct__2457_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2457_fields, 24, pfnStrAppend, pData);
}

int set_struct__2457_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2457*)pValue)->valid));
    set_Q_DIR_default_value(&(((struct__2457*)pValue)->q_dir));
    set_Q_SCALE_default_value(&(((struct__2457*)pValue)->q_scale));
    set_kcg_int_default_value(&(((struct__2457*)pValue)->d_validnv));
    set_kcg_int_default_value(&(((struct__2457*)pValue)->n_iter));
    set_array__2454_default_value(&(((struct__2457*)pValue)->SECTIONS));
    set_kcg_int_default_value(&(((struct__2457*)pValue)->v_nvshunt));
    set_kcg_int_default_value(&(((struct__2457*)pValue)->v_nvstff));
    set_kcg_int_default_value(&(((struct__2457*)pValue)->v_nvonsight));
    set_kcg_int_default_value(&(((struct__2457*)pValue)->v_nvunfit));
    set_kcg_int_default_value(&(((struct__2457*)pValue)->v_nvrel));
    set_kcg_int_default_value(&(((struct__2457*)pValue)->d_nvroll));
    set_Q_NVSBTSMPERM_default_value(&(((struct__2457*)pValue)->q_nvsbtsmperm));
    set_Q_NVEMRRLS_default_value(&(((struct__2457*)pValue)->q_nvemrrls));
    set_kcg_int_default_value(&(((struct__2457*)pValue)->v_nvallowovtrp));
    set_kcg_int_default_value(&(((struct__2457*)pValue)->v_nvsopovtrp));
    set_kcg_int_default_value(&(((struct__2457*)pValue)->d_nvovtrp));
    set_kcg_int_default_value(&(((struct__2457*)pValue)->t_nvovtrp));
    set_kcg_int_default_value(&(((struct__2457*)pValue)->d_nvpotrp));
    set_M_NVCONTACT_default_value(&(((struct__2457*)pValue)->m_nvcontact));
    set_kcg_int_default_value(&(((struct__2457*)pValue)->t_nvcontact));
    set_M_NVDERUN_default_value(&(((struct__2457*)pValue)->m_nvderun));
    set_kcg_int_default_value(&(((struct__2457*)pValue)->d_nvstff));
    set_Q_NVDRIVER_ADHES_default_value(&(((struct__2457*)pValue)->q_nvdriver_adhes));
    return 1;
}

int check_struct__2457_string(const char *str, char **endptr)
{
    static struct__2457 rTemp;
    return string_to_struct__2457(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2457_Utils = {
    struct__2457_to_string,
    check_struct__2457_string,
    string_to_struct__2457,
    is_struct__2457_double_conversion_allowed,
    struct__2457_to_double,
    is_struct__2457_long_convertion_allowed,
    struct__2457_to_long,
    compare_struct__2457,
    get_struct__2457_signature,
    set_struct__2457_default_value,
    sizeof(struct__2457)
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
 ** array_int_32_32 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_32_32VTable;

int array_int_32_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_32_32VTable != NULL
        && pSimarray_int_32_32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_32_32VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_32_to_string, 32, sizeof(array_int_32), pfnStrAppend, pData);
}

int string_to_array_int_32_32(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_32_32VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_32_32VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_32_Utils, 32, sizeof(array_int_32), endptr);
    }
    return nRet;
}

int is_array_int_32_32_double_conversion_allowed()
{
    if (pSimarray_int_32_32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_32_32VTable);
    }
    return 0;
}

int is_array_int_32_32_long_convertion_allowed()
{
    if (pSimarray_int_32_32VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_32_32VTable);
    }
    return 0;
}

void compare_array_int_32_32(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_32_32VTable != NULL
        && pSimarray_int_32_32VTable->m_version >= Scv612
        && pSimarray_int_32_32VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_32_32VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_32_32VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_32_32VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_32, 32, sizeof(array_int_32), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_32_32_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_32_32VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_32_32VTable, nRetValue);
    }
    return 0;
}

int array_int_32_32_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_32_32VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_32_32VTable, nRetValue);
    }
    return 0;
}

int get_array_int_32_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_32_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_32_32_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_array_int_32_default_value(&((array_int_32*)pValue)[i]);
    return 1;
}

int check_array_int_32_32_string(const char *str, char **endptr)
{
    static array_int_32_32 rTemp;
    return string_to_array_int_32_32(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_32_32_Utils = {
    array_int_32_32_to_string,
    check_array_int_32_32_string,
    string_to_array_int_32_32,
    is_array_int_32_32_double_conversion_allowed,
    array_int_32_32_to_double,
    is_array_int_32_32_long_convertion_allowed,
    array_int_32_32_to_long,
    compare_array_int_32_32,
    get_array_int_32_32_signature,
    set_array_int_32_32_default_value,
    sizeof(array_int_32_32)
};

/****************************************************************
 ** array_int_30 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_30VTable;

int array_int_30_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_30VTable != NULL
        && pSimarray_int_30VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_30VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 30, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_30(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_30VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_30VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 30, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_30_double_conversion_allowed()
{
    if (pSimarray_int_30VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_30VTable);
    }
    return 0;
}

int is_array_int_30_long_convertion_allowed()
{
    if (pSimarray_int_30VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_30VTable);
    }
    return 0;
}

void compare_array_int_30(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_30VTable != NULL
        && pSimarray_int_30VTable->m_version >= Scv612
        && pSimarray_int_30VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_30VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_30VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_30VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 30, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_30_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_30VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_30VTable, nRetValue);
    }
    return 0;
}

int array_int_30_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_30VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_30VTable, nRetValue);
    }
    return 0;
}

int get_array_int_30_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_30_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_30_string(const char *str, char **endptr)
{
    static array_int_30 rTemp;
    return string_to_array_int_30(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_30_Utils = {
    array_int_30_to_string,
    check_array_int_30_string,
    string_to_array_int_30,
    is_array_int_30_double_conversion_allowed,
    array_int_30_to_double,
    is_array_int_30_long_convertion_allowed,
    array_int_30_to_long,
    compare_array_int_30,
    get_array_int_30_signature,
    set_array_int_30_default_value,
    sizeof(array_int_30)
};

/****************************************************************
 ** array_bool_30 
 ****************************************************************/

struct SimTypeVTable *pSimarray_bool_30VTable;

int array_bool_30_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_bool_30VTable != NULL
        && pSimarray_bool_30VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_bool_30VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_bool_to_string, 30, sizeof(kcg_bool), pfnStrAppend, pData);
}

int string_to_array_bool_30(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_bool_30VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_bool_30VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_bool_Utils, 30, sizeof(kcg_bool), endptr);
    }
    return nRet;
}

int is_array_bool_30_double_conversion_allowed()
{
    if (pSimarray_bool_30VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_bool_30VTable);
    }
    return 0;
}

int is_array_bool_30_long_convertion_allowed()
{
    if (pSimarray_bool_30VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_bool_30VTable);
    }
    return 0;
}

void compare_array_bool_30(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_bool_30VTable != NULL
        && pSimarray_bool_30VTable->m_version >= Scv612
        && pSimarray_bool_30VTable->m_pfnCompare != NULL) {
        if (pSimarray_bool_30VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_bool_30VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_bool_30VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_bool, 30, sizeof(kcg_bool), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_bool_30_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_bool_30VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_bool_30VTable, nRetValue);
    }
    return 0;
}

int array_bool_30_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_bool_30VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_bool_30VTable, nRetValue);
    }
    return 0;
}

int get_array_bool_30_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_bool_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_bool_30_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_kcg_bool_default_value(&((kcg_bool*)pValue)[i]);
    return 1;
}

int check_array_bool_30_string(const char *str, char **endptr)
{
    static array_bool_30 rTemp;
    return string_to_array_bool_30(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_bool_30_Utils = {
    array_bool_30_to_string,
    check_array_bool_30_string,
    string_to_array_bool_30,
    is_array_bool_30_double_conversion_allowed,
    array_bool_30_to_double,
    is_array_bool_30_long_convertion_allowed,
    array_bool_30_to_long,
    compare_array_bool_30,
    get_array_bool_30_signature,
    set_array_bool_30_default_value,
    sizeof(array_bool_30)
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
 ** NID_C 
 ****************************************************************/

struct SimTypeVTable *pSimNID_CVTable;

int NID_C_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_CVTable != NULL
        && pSimNID_CVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_CVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_C(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_CVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_CVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_C_double_conversion_allowed()
{
    if (pSimNID_CVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_CVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_C_long_convertion_allowed()
{
    if (pSimNID_CVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_CVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_C(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_CVTable != NULL
        && pSimNID_CVTable->m_version >= Scv612
        && pSimNID_CVTable->m_pfnCompare != NULL) {
        if (pSimNID_CVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_CVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_CVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_C_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_CVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_CVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int NID_C_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_CVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_CVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_NID_C_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_C_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_C_string(const char *str, char **endptr)
{
    static NID_C rTemp;
    return string_to_NID_C(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_C_Utils = {
    NID_C_to_string,
    check_NID_C_string,
    string_to_NID_C,
    is_NID_C_double_conversion_allowed,
    NID_C_to_double,
    is_NID_C_long_convertion_allowed,
    NID_C_to_long,
    compare_NID_C,
    get_NID_C_signature,
    set_NID_C_default_value,
    sizeof(NID_C)
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
 ** D_VALIDNV 
 ****************************************************************/

struct SimTypeVTable *pSimD_VALIDNVVTable;

int D_VALIDNV_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_VALIDNVVTable != NULL
        && pSimD_VALIDNVVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_VALIDNVVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_VALIDNV(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_VALIDNVVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_VALIDNVVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_VALIDNV_double_conversion_allowed()
{
    if (pSimD_VALIDNVVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_VALIDNVVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_D_VALIDNV_long_convertion_allowed()
{
    if (pSimD_VALIDNVVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimD_VALIDNVVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_D_VALIDNV(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_VALIDNVVTable != NULL
        && pSimD_VALIDNVVTable->m_version >= Scv612
        && pSimD_VALIDNVVTable->m_pfnCompare != NULL) {
        if (pSimD_VALIDNVVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_VALIDNVVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_VALIDNVVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_VALIDNV_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_VALIDNVVTable != NULL) {
        return VTable_to_double(pValue, pSimD_VALIDNVVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int D_VALIDNV_to_long(const void *pValue, long *nRetValue)
{
    if (pSimD_VALIDNVVTable != NULL) {
        return VTable_to_long(pValue, pSimD_VALIDNVVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_D_VALIDNV_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_VALIDNV_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_VALIDNV_string(const char *str, char **endptr)
{
    static D_VALIDNV rTemp;
    return string_to_D_VALIDNV(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_VALIDNV_Utils = {
    D_VALIDNV_to_string,
    check_D_VALIDNV_string,
    string_to_D_VALIDNV,
    is_D_VALIDNV_double_conversion_allowed,
    D_VALIDNV_to_double,
    is_D_VALIDNV_long_convertion_allowed,
    D_VALIDNV_to_long,
    compare_D_VALIDNV,
    get_D_VALIDNV_signature,
    set_D_VALIDNV_default_value,
    sizeof(D_VALIDNV)
};

/****************************************************************
 ** V_NVSHUNT 
 ****************************************************************/

struct SimTypeVTable *pSimV_NVSHUNTVTable;

int V_NVSHUNT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimV_NVSHUNTVTable != NULL
        && pSimV_NVSHUNTVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimV_NVSHUNTVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_V_NVSHUNT(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimV_NVSHUNTVTable != NULL) {
        nRet=string_to_VTable(str, pSimV_NVSHUNTVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_V_NVSHUNT_double_conversion_allowed()
{
    if (pSimV_NVSHUNTVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimV_NVSHUNTVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_V_NVSHUNT_long_convertion_allowed()
{
    if (pSimV_NVSHUNTVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimV_NVSHUNTVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_V_NVSHUNT(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimV_NVSHUNTVTable != NULL
        && pSimV_NVSHUNTVTable->m_version >= Scv612
        && pSimV_NVSHUNTVTable->m_pfnCompare != NULL) {
        if (pSimV_NVSHUNTVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimV_NVSHUNTVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimV_NVSHUNTVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int V_NVSHUNT_to_double(const void *pValue, double *nRetValue)
{
    if (pSimV_NVSHUNTVTable != NULL) {
        return VTable_to_double(pValue, pSimV_NVSHUNTVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int V_NVSHUNT_to_long(const void *pValue, long *nRetValue)
{
    if (pSimV_NVSHUNTVTable != NULL) {
        return VTable_to_long(pValue, pSimV_NVSHUNTVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_V_NVSHUNT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_V_NVSHUNT_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_V_NVSHUNT_string(const char *str, char **endptr)
{
    static V_NVSHUNT rTemp;
    return string_to_V_NVSHUNT(str, &rTemp, endptr);
}

SimTypeUtils _Type_V_NVSHUNT_Utils = {
    V_NVSHUNT_to_string,
    check_V_NVSHUNT_string,
    string_to_V_NVSHUNT,
    is_V_NVSHUNT_double_conversion_allowed,
    V_NVSHUNT_to_double,
    is_V_NVSHUNT_long_convertion_allowed,
    V_NVSHUNT_to_long,
    compare_V_NVSHUNT,
    get_V_NVSHUNT_signature,
    set_V_NVSHUNT_default_value,
    sizeof(V_NVSHUNT)
};

/****************************************************************
 ** V_NVSTFF 
 ****************************************************************/

struct SimTypeVTable *pSimV_NVSTFFVTable;

int V_NVSTFF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimV_NVSTFFVTable != NULL
        && pSimV_NVSTFFVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimV_NVSTFFVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_V_NVSTFF(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimV_NVSTFFVTable != NULL) {
        nRet=string_to_VTable(str, pSimV_NVSTFFVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_V_NVSTFF_double_conversion_allowed()
{
    if (pSimV_NVSTFFVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimV_NVSTFFVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_V_NVSTFF_long_convertion_allowed()
{
    if (pSimV_NVSTFFVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimV_NVSTFFVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_V_NVSTFF(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimV_NVSTFFVTable != NULL
        && pSimV_NVSTFFVTable->m_version >= Scv612
        && pSimV_NVSTFFVTable->m_pfnCompare != NULL) {
        if (pSimV_NVSTFFVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimV_NVSTFFVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimV_NVSTFFVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int V_NVSTFF_to_double(const void *pValue, double *nRetValue)
{
    if (pSimV_NVSTFFVTable != NULL) {
        return VTable_to_double(pValue, pSimV_NVSTFFVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int V_NVSTFF_to_long(const void *pValue, long *nRetValue)
{
    if (pSimV_NVSTFFVTable != NULL) {
        return VTable_to_long(pValue, pSimV_NVSTFFVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_V_NVSTFF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_V_NVSTFF_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_V_NVSTFF_string(const char *str, char **endptr)
{
    static V_NVSTFF rTemp;
    return string_to_V_NVSTFF(str, &rTemp, endptr);
}

SimTypeUtils _Type_V_NVSTFF_Utils = {
    V_NVSTFF_to_string,
    check_V_NVSTFF_string,
    string_to_V_NVSTFF,
    is_V_NVSTFF_double_conversion_allowed,
    V_NVSTFF_to_double,
    is_V_NVSTFF_long_convertion_allowed,
    V_NVSTFF_to_long,
    compare_V_NVSTFF,
    get_V_NVSTFF_signature,
    set_V_NVSTFF_default_value,
    sizeof(V_NVSTFF)
};

/****************************************************************
 ** V_NVONSIGHT 
 ****************************************************************/

struct SimTypeVTable *pSimV_NVONSIGHTVTable;

int V_NVONSIGHT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimV_NVONSIGHTVTable != NULL
        && pSimV_NVONSIGHTVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimV_NVONSIGHTVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_V_NVONSIGHT(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimV_NVONSIGHTVTable != NULL) {
        nRet=string_to_VTable(str, pSimV_NVONSIGHTVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_V_NVONSIGHT_double_conversion_allowed()
{
    if (pSimV_NVONSIGHTVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimV_NVONSIGHTVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_V_NVONSIGHT_long_convertion_allowed()
{
    if (pSimV_NVONSIGHTVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimV_NVONSIGHTVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_V_NVONSIGHT(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimV_NVONSIGHTVTable != NULL
        && pSimV_NVONSIGHTVTable->m_version >= Scv612
        && pSimV_NVONSIGHTVTable->m_pfnCompare != NULL) {
        if (pSimV_NVONSIGHTVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimV_NVONSIGHTVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimV_NVONSIGHTVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int V_NVONSIGHT_to_double(const void *pValue, double *nRetValue)
{
    if (pSimV_NVONSIGHTVTable != NULL) {
        return VTable_to_double(pValue, pSimV_NVONSIGHTVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int V_NVONSIGHT_to_long(const void *pValue, long *nRetValue)
{
    if (pSimV_NVONSIGHTVTable != NULL) {
        return VTable_to_long(pValue, pSimV_NVONSIGHTVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_V_NVONSIGHT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_V_NVONSIGHT_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_V_NVONSIGHT_string(const char *str, char **endptr)
{
    static V_NVONSIGHT rTemp;
    return string_to_V_NVONSIGHT(str, &rTemp, endptr);
}

SimTypeUtils _Type_V_NVONSIGHT_Utils = {
    V_NVONSIGHT_to_string,
    check_V_NVONSIGHT_string,
    string_to_V_NVONSIGHT,
    is_V_NVONSIGHT_double_conversion_allowed,
    V_NVONSIGHT_to_double,
    is_V_NVONSIGHT_long_convertion_allowed,
    V_NVONSIGHT_to_long,
    compare_V_NVONSIGHT,
    get_V_NVONSIGHT_signature,
    set_V_NVONSIGHT_default_value,
    sizeof(V_NVONSIGHT)
};

/****************************************************************
 ** V_NVUNFIT 
 ****************************************************************/

struct SimTypeVTable *pSimV_NVUNFITVTable;

int V_NVUNFIT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimV_NVUNFITVTable != NULL
        && pSimV_NVUNFITVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimV_NVUNFITVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_V_NVUNFIT(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimV_NVUNFITVTable != NULL) {
        nRet=string_to_VTable(str, pSimV_NVUNFITVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_V_NVUNFIT_double_conversion_allowed()
{
    if (pSimV_NVUNFITVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimV_NVUNFITVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_V_NVUNFIT_long_convertion_allowed()
{
    if (pSimV_NVUNFITVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimV_NVUNFITVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_V_NVUNFIT(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimV_NVUNFITVTable != NULL
        && pSimV_NVUNFITVTable->m_version >= Scv612
        && pSimV_NVUNFITVTable->m_pfnCompare != NULL) {
        if (pSimV_NVUNFITVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimV_NVUNFITVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimV_NVUNFITVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int V_NVUNFIT_to_double(const void *pValue, double *nRetValue)
{
    if (pSimV_NVUNFITVTable != NULL) {
        return VTable_to_double(pValue, pSimV_NVUNFITVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int V_NVUNFIT_to_long(const void *pValue, long *nRetValue)
{
    if (pSimV_NVUNFITVTable != NULL) {
        return VTable_to_long(pValue, pSimV_NVUNFITVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_V_NVUNFIT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_V_NVUNFIT_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_V_NVUNFIT_string(const char *str, char **endptr)
{
    static V_NVUNFIT rTemp;
    return string_to_V_NVUNFIT(str, &rTemp, endptr);
}

SimTypeUtils _Type_V_NVUNFIT_Utils = {
    V_NVUNFIT_to_string,
    check_V_NVUNFIT_string,
    string_to_V_NVUNFIT,
    is_V_NVUNFIT_double_conversion_allowed,
    V_NVUNFIT_to_double,
    is_V_NVUNFIT_long_convertion_allowed,
    V_NVUNFIT_to_long,
    compare_V_NVUNFIT,
    get_V_NVUNFIT_signature,
    set_V_NVUNFIT_default_value,
    sizeof(V_NVUNFIT)
};

/****************************************************************
 ** V_NVREL 
 ****************************************************************/

struct SimTypeVTable *pSimV_NVRELVTable;

int V_NVREL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimV_NVRELVTable != NULL
        && pSimV_NVRELVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimV_NVRELVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_V_NVREL(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimV_NVRELVTable != NULL) {
        nRet=string_to_VTable(str, pSimV_NVRELVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_V_NVREL_double_conversion_allowed()
{
    if (pSimV_NVRELVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimV_NVRELVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_V_NVREL_long_convertion_allowed()
{
    if (pSimV_NVRELVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimV_NVRELVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_V_NVREL(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimV_NVRELVTable != NULL
        && pSimV_NVRELVTable->m_version >= Scv612
        && pSimV_NVRELVTable->m_pfnCompare != NULL) {
        if (pSimV_NVRELVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimV_NVRELVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimV_NVRELVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int V_NVREL_to_double(const void *pValue, double *nRetValue)
{
    if (pSimV_NVRELVTable != NULL) {
        return VTable_to_double(pValue, pSimV_NVRELVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int V_NVREL_to_long(const void *pValue, long *nRetValue)
{
    if (pSimV_NVRELVTable != NULL) {
        return VTable_to_long(pValue, pSimV_NVRELVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_V_NVREL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_V_NVREL_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_V_NVREL_string(const char *str, char **endptr)
{
    static V_NVREL rTemp;
    return string_to_V_NVREL(str, &rTemp, endptr);
}

SimTypeUtils _Type_V_NVREL_Utils = {
    V_NVREL_to_string,
    check_V_NVREL_string,
    string_to_V_NVREL,
    is_V_NVREL_double_conversion_allowed,
    V_NVREL_to_double,
    is_V_NVREL_long_convertion_allowed,
    V_NVREL_to_long,
    compare_V_NVREL,
    get_V_NVREL_signature,
    set_V_NVREL_default_value,
    sizeof(V_NVREL)
};

/****************************************************************
 ** D_NVROLL 
 ****************************************************************/

struct SimTypeVTable *pSimD_NVROLLVTable;

int D_NVROLL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_NVROLLVTable != NULL
        && pSimD_NVROLLVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_NVROLLVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_NVROLL(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_NVROLLVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_NVROLLVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_NVROLL_double_conversion_allowed()
{
    if (pSimD_NVROLLVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_NVROLLVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_D_NVROLL_long_convertion_allowed()
{
    if (pSimD_NVROLLVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimD_NVROLLVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_D_NVROLL(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_NVROLLVTable != NULL
        && pSimD_NVROLLVTable->m_version >= Scv612
        && pSimD_NVROLLVTable->m_pfnCompare != NULL) {
        if (pSimD_NVROLLVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_NVROLLVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_NVROLLVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_NVROLL_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_NVROLLVTable != NULL) {
        return VTable_to_double(pValue, pSimD_NVROLLVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int D_NVROLL_to_long(const void *pValue, long *nRetValue)
{
    if (pSimD_NVROLLVTable != NULL) {
        return VTable_to_long(pValue, pSimD_NVROLLVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_D_NVROLL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_NVROLL_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_NVROLL_string(const char *str, char **endptr)
{
    static D_NVROLL rTemp;
    return string_to_D_NVROLL(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_NVROLL_Utils = {
    D_NVROLL_to_string,
    check_D_NVROLL_string,
    string_to_D_NVROLL,
    is_D_NVROLL_double_conversion_allowed,
    D_NVROLL_to_double,
    is_D_NVROLL_long_convertion_allowed,
    D_NVROLL_to_long,
    compare_D_NVROLL,
    get_D_NVROLL_signature,
    set_D_NVROLL_default_value,
    sizeof(D_NVROLL)
};

/****************************************************************
 ** Q_NVSBTSMPERM 
 ****************************************************************/

struct SimTypeVTable *pSimQ_NVSBTSMPERMVTable;

static SimEnumValUtils Q_NVSBTSMPERM_values[] = {
    { "Q_NVSBTSMPERM_No", Q_NVSBTSMPERM_No},
    { "Q_NVSBTSMPERM_No", Q_NVSBTSMPERM_No},
    { "Q_NVSBTSMPERM_Yes", Q_NVSBTSMPERM_Yes},
    { "Q_NVSBTSMPERM_Yes", Q_NVSBTSMPERM_Yes},
};
const int Q_NVSBTSMPERM_nb_values = 4;

int Q_NVSBTSMPERM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_NVSBTSMPERMVTable != NULL
        && pSimQ_NVSBTSMPERMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_NVSBTSMPERMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_NVSBTSMPERM*)pValue, Q_NVSBTSMPERM_values, Q_NVSBTSMPERM_nb_values, pfnStrAppend, pData); 
}

int string_to_Q_NVSBTSMPERM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_NVSBTSMPERMVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_NVSBTSMPERMVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_NVSBTSMPERM_values, Q_NVSBTSMPERM_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_NVSBTSMPERM*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_NVSBTSMPERM_double_conversion_allowed()
{
    if (pSimQ_NVSBTSMPERMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_NVSBTSMPERMVTable);
    }
    return 1;
}

int is_Q_NVSBTSMPERM_long_convertion_allowed()
{
    if (pSimQ_NVSBTSMPERMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_NVSBTSMPERMVTable);
    }
    return 1;
}

void compare_Q_NVSBTSMPERM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_NVSBTSMPERMVTable != NULL
        && pSimQ_NVSBTSMPERMVTable->m_version >= Scv612
        && pSimQ_NVSBTSMPERMVTable->m_pfnCompare != NULL) {
        if (pSimQ_NVSBTSMPERMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_NVSBTSMPERMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_NVSBTSMPERMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_NVSBTSMPERM*)pValue1), (int)(*(Q_NVSBTSMPERM*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_NVSBTSMPERM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_NVSBTSMPERMVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_NVSBTSMPERMVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_NVSBTSMPERM*)pValue);
    return 1;
}

int Q_NVSBTSMPERM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_NVSBTSMPERMVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_NVSBTSMPERMVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_NVSBTSMPERM*)pValue);
    return 1;
}

int get_Q_NVSBTSMPERM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_NVSBTSMPERM_values, Q_NVSBTSMPERM_nb_values, pfnStrAppend, pData);
}

int set_Q_NVSBTSMPERM_default_value(void *pValue)
{
    *(Q_NVSBTSMPERM*)pValue = Q_NVSBTSMPERM_No;
    return 1;
}

int check_Q_NVSBTSMPERM_string(const char *str, char **endptr)
{
    static Q_NVSBTSMPERM rTemp;
    return string_to_Q_NVSBTSMPERM(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_NVSBTSMPERM_Utils = {
    Q_NVSBTSMPERM_to_string,
    check_Q_NVSBTSMPERM_string,
    string_to_Q_NVSBTSMPERM,
    is_Q_NVSBTSMPERM_double_conversion_allowed,
    Q_NVSBTSMPERM_to_double,
    is_Q_NVSBTSMPERM_long_convertion_allowed,
    Q_NVSBTSMPERM_to_long,
    compare_Q_NVSBTSMPERM,
    get_Q_NVSBTSMPERM_signature,
    set_Q_NVSBTSMPERM_default_value,
    sizeof(Q_NVSBTSMPERM)
};

/****************************************************************
 ** Q_NVEMRRLS 
 ****************************************************************/

struct SimTypeVTable *pSimQ_NVEMRRLSVTable;

static SimEnumValUtils Q_NVEMRRLS_values[] = {
    { "Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill", _1_Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill},
    { "Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill", _1_Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill},
    { "Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded", Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded},
    { "Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded", Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded},
};
const int Q_NVEMRRLS_nb_values = 4;

int Q_NVEMRRLS_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_NVEMRRLSVTable != NULL
        && pSimQ_NVEMRRLSVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_NVEMRRLSVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_NVEMRRLS*)pValue, Q_NVEMRRLS_values, Q_NVEMRRLS_nb_values, pfnStrAppend, pData); 
}

int string_to_Q_NVEMRRLS(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_NVEMRRLSVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_NVEMRRLSVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_NVEMRRLS_values, Q_NVEMRRLS_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_NVEMRRLS*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_NVEMRRLS_double_conversion_allowed()
{
    if (pSimQ_NVEMRRLSVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_NVEMRRLSVTable);
    }
    return 1;
}

int is_Q_NVEMRRLS_long_convertion_allowed()
{
    if (pSimQ_NVEMRRLSVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_NVEMRRLSVTable);
    }
    return 1;
}

void compare_Q_NVEMRRLS(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_NVEMRRLSVTable != NULL
        && pSimQ_NVEMRRLSVTable->m_version >= Scv612
        && pSimQ_NVEMRRLSVTable->m_pfnCompare != NULL) {
        if (pSimQ_NVEMRRLSVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_NVEMRRLSVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_NVEMRRLSVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_NVEMRRLS*)pValue1), (int)(*(Q_NVEMRRLS*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_NVEMRRLS_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_NVEMRRLSVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_NVEMRRLSVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_NVEMRRLS*)pValue);
    return 1;
}

int Q_NVEMRRLS_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_NVEMRRLSVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_NVEMRRLSVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_NVEMRRLS*)pValue);
    return 1;
}

int get_Q_NVEMRRLS_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_NVEMRRLS_values, Q_NVEMRRLS_nb_values, pfnStrAppend, pData);
}

int set_Q_NVEMRRLS_default_value(void *pValue)
{
    *(Q_NVEMRRLS*)pValue = _1_Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
    return 1;
}

int check_Q_NVEMRRLS_string(const char *str, char **endptr)
{
    static Q_NVEMRRLS rTemp;
    return string_to_Q_NVEMRRLS(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_NVEMRRLS_Utils = {
    Q_NVEMRRLS_to_string,
    check_Q_NVEMRRLS_string,
    string_to_Q_NVEMRRLS,
    is_Q_NVEMRRLS_double_conversion_allowed,
    Q_NVEMRRLS_to_double,
    is_Q_NVEMRRLS_long_convertion_allowed,
    Q_NVEMRRLS_to_long,
    compare_Q_NVEMRRLS,
    get_Q_NVEMRRLS_signature,
    set_Q_NVEMRRLS_default_value,
    sizeof(Q_NVEMRRLS)
};

/****************************************************************
 ** V_NVALLOWOVTRP 
 ****************************************************************/

struct SimTypeVTable *pSimV_NVALLOWOVTRPVTable;

int V_NVALLOWOVTRP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimV_NVALLOWOVTRPVTable != NULL
        && pSimV_NVALLOWOVTRPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimV_NVALLOWOVTRPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_V_NVALLOWOVTRP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimV_NVALLOWOVTRPVTable != NULL) {
        nRet=string_to_VTable(str, pSimV_NVALLOWOVTRPVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_V_NVALLOWOVTRP_double_conversion_allowed()
{
    if (pSimV_NVALLOWOVTRPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimV_NVALLOWOVTRPVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_V_NVALLOWOVTRP_long_convertion_allowed()
{
    if (pSimV_NVALLOWOVTRPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimV_NVALLOWOVTRPVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_V_NVALLOWOVTRP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimV_NVALLOWOVTRPVTable != NULL
        && pSimV_NVALLOWOVTRPVTable->m_version >= Scv612
        && pSimV_NVALLOWOVTRPVTable->m_pfnCompare != NULL) {
        if (pSimV_NVALLOWOVTRPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimV_NVALLOWOVTRPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimV_NVALLOWOVTRPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int V_NVALLOWOVTRP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimV_NVALLOWOVTRPVTable != NULL) {
        return VTable_to_double(pValue, pSimV_NVALLOWOVTRPVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int V_NVALLOWOVTRP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimV_NVALLOWOVTRPVTable != NULL) {
        return VTable_to_long(pValue, pSimV_NVALLOWOVTRPVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_V_NVALLOWOVTRP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_V_NVALLOWOVTRP_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_V_NVALLOWOVTRP_string(const char *str, char **endptr)
{
    static V_NVALLOWOVTRP rTemp;
    return string_to_V_NVALLOWOVTRP(str, &rTemp, endptr);
}

SimTypeUtils _Type_V_NVALLOWOVTRP_Utils = {
    V_NVALLOWOVTRP_to_string,
    check_V_NVALLOWOVTRP_string,
    string_to_V_NVALLOWOVTRP,
    is_V_NVALLOWOVTRP_double_conversion_allowed,
    V_NVALLOWOVTRP_to_double,
    is_V_NVALLOWOVTRP_long_convertion_allowed,
    V_NVALLOWOVTRP_to_long,
    compare_V_NVALLOWOVTRP,
    get_V_NVALLOWOVTRP_signature,
    set_V_NVALLOWOVTRP_default_value,
    sizeof(V_NVALLOWOVTRP)
};

/****************************************************************
 ** V_NVSUPOVTRP 
 ****************************************************************/

struct SimTypeVTable *pSimV_NVSUPOVTRPVTable;

int V_NVSUPOVTRP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimV_NVSUPOVTRPVTable != NULL
        && pSimV_NVSUPOVTRPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimV_NVSUPOVTRPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_V_NVSUPOVTRP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimV_NVSUPOVTRPVTable != NULL) {
        nRet=string_to_VTable(str, pSimV_NVSUPOVTRPVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_V_NVSUPOVTRP_double_conversion_allowed()
{
    if (pSimV_NVSUPOVTRPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimV_NVSUPOVTRPVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_V_NVSUPOVTRP_long_convertion_allowed()
{
    if (pSimV_NVSUPOVTRPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimV_NVSUPOVTRPVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_V_NVSUPOVTRP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimV_NVSUPOVTRPVTable != NULL
        && pSimV_NVSUPOVTRPVTable->m_version >= Scv612
        && pSimV_NVSUPOVTRPVTable->m_pfnCompare != NULL) {
        if (pSimV_NVSUPOVTRPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimV_NVSUPOVTRPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimV_NVSUPOVTRPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int V_NVSUPOVTRP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimV_NVSUPOVTRPVTable != NULL) {
        return VTable_to_double(pValue, pSimV_NVSUPOVTRPVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int V_NVSUPOVTRP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimV_NVSUPOVTRPVTable != NULL) {
        return VTable_to_long(pValue, pSimV_NVSUPOVTRPVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_V_NVSUPOVTRP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_V_NVSUPOVTRP_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_V_NVSUPOVTRP_string(const char *str, char **endptr)
{
    static V_NVSUPOVTRP rTemp;
    return string_to_V_NVSUPOVTRP(str, &rTemp, endptr);
}

SimTypeUtils _Type_V_NVSUPOVTRP_Utils = {
    V_NVSUPOVTRP_to_string,
    check_V_NVSUPOVTRP_string,
    string_to_V_NVSUPOVTRP,
    is_V_NVSUPOVTRP_double_conversion_allowed,
    V_NVSUPOVTRP_to_double,
    is_V_NVSUPOVTRP_long_convertion_allowed,
    V_NVSUPOVTRP_to_long,
    compare_V_NVSUPOVTRP,
    get_V_NVSUPOVTRP_signature,
    set_V_NVSUPOVTRP_default_value,
    sizeof(V_NVSUPOVTRP)
};

/****************************************************************
 ** D_NVOVTRP 
 ****************************************************************/

struct SimTypeVTable *pSimD_NVOVTRPVTable;

int D_NVOVTRP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_NVOVTRPVTable != NULL
        && pSimD_NVOVTRPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_NVOVTRPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_NVOVTRP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_NVOVTRPVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_NVOVTRPVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_NVOVTRP_double_conversion_allowed()
{
    if (pSimD_NVOVTRPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_NVOVTRPVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_D_NVOVTRP_long_convertion_allowed()
{
    if (pSimD_NVOVTRPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimD_NVOVTRPVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_D_NVOVTRP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_NVOVTRPVTable != NULL
        && pSimD_NVOVTRPVTable->m_version >= Scv612
        && pSimD_NVOVTRPVTable->m_pfnCompare != NULL) {
        if (pSimD_NVOVTRPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_NVOVTRPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_NVOVTRPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_NVOVTRP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_NVOVTRPVTable != NULL) {
        return VTable_to_double(pValue, pSimD_NVOVTRPVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int D_NVOVTRP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimD_NVOVTRPVTable != NULL) {
        return VTable_to_long(pValue, pSimD_NVOVTRPVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_D_NVOVTRP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_NVOVTRP_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_NVOVTRP_string(const char *str, char **endptr)
{
    static D_NVOVTRP rTemp;
    return string_to_D_NVOVTRP(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_NVOVTRP_Utils = {
    D_NVOVTRP_to_string,
    check_D_NVOVTRP_string,
    string_to_D_NVOVTRP,
    is_D_NVOVTRP_double_conversion_allowed,
    D_NVOVTRP_to_double,
    is_D_NVOVTRP_long_convertion_allowed,
    D_NVOVTRP_to_long,
    compare_D_NVOVTRP,
    get_D_NVOVTRP_signature,
    set_D_NVOVTRP_default_value,
    sizeof(D_NVOVTRP)
};

/****************************************************************
 ** T_NVOVTRP 
 ****************************************************************/

struct SimTypeVTable *pSimT_NVOVTRPVTable;

int T_NVOVTRP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimT_NVOVTRPVTable != NULL
        && pSimT_NVOVTRPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_NVOVTRPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_T_NVOVTRP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimT_NVOVTRPVTable != NULL) {
        nRet=string_to_VTable(str, pSimT_NVOVTRPVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_T_NVOVTRP_double_conversion_allowed()
{
    if (pSimT_NVOVTRPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_NVOVTRPVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_T_NVOVTRP_long_convertion_allowed()
{
    if (pSimT_NVOVTRPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimT_NVOVTRPVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_T_NVOVTRP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimT_NVOVTRPVTable != NULL
        && pSimT_NVOVTRPVTable->m_version >= Scv612
        && pSimT_NVOVTRPVTable->m_pfnCompare != NULL) {
        if (pSimT_NVOVTRPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimT_NVOVTRPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimT_NVOVTRPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int T_NVOVTRP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimT_NVOVTRPVTable != NULL) {
        return VTable_to_double(pValue, pSimT_NVOVTRPVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int T_NVOVTRP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimT_NVOVTRPVTable != NULL) {
        return VTable_to_long(pValue, pSimT_NVOVTRPVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_T_NVOVTRP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_T_NVOVTRP_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_T_NVOVTRP_string(const char *str, char **endptr)
{
    static T_NVOVTRP rTemp;
    return string_to_T_NVOVTRP(str, &rTemp, endptr);
}

SimTypeUtils _Type_T_NVOVTRP_Utils = {
    T_NVOVTRP_to_string,
    check_T_NVOVTRP_string,
    string_to_T_NVOVTRP,
    is_T_NVOVTRP_double_conversion_allowed,
    T_NVOVTRP_to_double,
    is_T_NVOVTRP_long_convertion_allowed,
    T_NVOVTRP_to_long,
    compare_T_NVOVTRP,
    get_T_NVOVTRP_signature,
    set_T_NVOVTRP_default_value,
    sizeof(T_NVOVTRP)
};

/****************************************************************
 ** D_NVPOTRP 
 ****************************************************************/

struct SimTypeVTable *pSimD_NVPOTRPVTable;

int D_NVPOTRP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_NVPOTRPVTable != NULL
        && pSimD_NVPOTRPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_NVPOTRPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_NVPOTRP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_NVPOTRPVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_NVPOTRPVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_NVPOTRP_double_conversion_allowed()
{
    if (pSimD_NVPOTRPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_NVPOTRPVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_D_NVPOTRP_long_convertion_allowed()
{
    if (pSimD_NVPOTRPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimD_NVPOTRPVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_D_NVPOTRP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_NVPOTRPVTable != NULL
        && pSimD_NVPOTRPVTable->m_version >= Scv612
        && pSimD_NVPOTRPVTable->m_pfnCompare != NULL) {
        if (pSimD_NVPOTRPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_NVPOTRPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_NVPOTRPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_NVPOTRP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_NVPOTRPVTable != NULL) {
        return VTable_to_double(pValue, pSimD_NVPOTRPVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int D_NVPOTRP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimD_NVPOTRPVTable != NULL) {
        return VTable_to_long(pValue, pSimD_NVPOTRPVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_D_NVPOTRP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_NVPOTRP_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_NVPOTRP_string(const char *str, char **endptr)
{
    static D_NVPOTRP rTemp;
    return string_to_D_NVPOTRP(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_NVPOTRP_Utils = {
    D_NVPOTRP_to_string,
    check_D_NVPOTRP_string,
    string_to_D_NVPOTRP,
    is_D_NVPOTRP_double_conversion_allowed,
    D_NVPOTRP_to_double,
    is_D_NVPOTRP_long_convertion_allowed,
    D_NVPOTRP_to_long,
    compare_D_NVPOTRP,
    get_D_NVPOTRP_signature,
    set_D_NVPOTRP_default_value,
    sizeof(D_NVPOTRP)
};

/****************************************************************
 ** M_NVCONTACT 
 ****************************************************************/

struct SimTypeVTable *pSimM_NVCONTACTVTable;

static SimEnumValUtils M_NVCONTACT_values[] = {
    { "M_NVCONTACT_Train_trip", M_NVCONTACT_Train_trip},
    { "M_NVCONTACT_Train_trip", M_NVCONTACT_Train_trip},
    { "M_NVCONTACT_Apply_service_brake", M_NVCONTACT_Apply_service_brake},
    { "M_NVCONTACT_Apply_service_brake", M_NVCONTACT_Apply_service_brake},
    { "M_NVCONTACT_No_Reaction", M_NVCONTACT_No_Reaction},
    { "M_NVCONTACT_No_Reaction", M_NVCONTACT_No_Reaction},
};
const int M_NVCONTACT_nb_values = 6;

int M_NVCONTACT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_NVCONTACTVTable != NULL
        && pSimM_NVCONTACTVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_NVCONTACTVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_NVCONTACT*)pValue, M_NVCONTACT_values, M_NVCONTACT_nb_values, pfnStrAppend, pData); 
}

int string_to_M_NVCONTACT(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_NVCONTACTVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_NVCONTACTVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_NVCONTACT_values, M_NVCONTACT_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_NVCONTACT*)pValue = nTemp;
    }
    return nRet;
}

int is_M_NVCONTACT_double_conversion_allowed()
{
    if (pSimM_NVCONTACTVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_NVCONTACTVTable);
    }
    return 1;
}

int is_M_NVCONTACT_long_convertion_allowed()
{
    if (pSimM_NVCONTACTVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_NVCONTACTVTable);
    }
    return 1;
}

void compare_M_NVCONTACT(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_NVCONTACTVTable != NULL
        && pSimM_NVCONTACTVTable->m_version >= Scv612
        && pSimM_NVCONTACTVTable->m_pfnCompare != NULL) {
        if (pSimM_NVCONTACTVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_NVCONTACTVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_NVCONTACTVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_NVCONTACT*)pValue1), (int)(*(M_NVCONTACT*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_NVCONTACT_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_NVCONTACTVTable != NULL) {
        return VTable_to_double(pValue, pSimM_NVCONTACTVTable, nRetValue);
    }
    *nRetValue = (double)*((M_NVCONTACT*)pValue);
    return 1;
}

int M_NVCONTACT_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_NVCONTACTVTable != NULL) {
        return VTable_to_long(pValue, pSimM_NVCONTACTVTable, nRetValue);
    }
    *nRetValue = (long)*((M_NVCONTACT*)pValue);
    return 1;
}

int get_M_NVCONTACT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_NVCONTACT_values, M_NVCONTACT_nb_values, pfnStrAppend, pData);
}

int set_M_NVCONTACT_default_value(void *pValue)
{
    *(M_NVCONTACT*)pValue = M_NVCONTACT_Train_trip;
    return 1;
}

int check_M_NVCONTACT_string(const char *str, char **endptr)
{
    static M_NVCONTACT rTemp;
    return string_to_M_NVCONTACT(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_NVCONTACT_Utils = {
    M_NVCONTACT_to_string,
    check_M_NVCONTACT_string,
    string_to_M_NVCONTACT,
    is_M_NVCONTACT_double_conversion_allowed,
    M_NVCONTACT_to_double,
    is_M_NVCONTACT_long_convertion_allowed,
    M_NVCONTACT_to_long,
    compare_M_NVCONTACT,
    get_M_NVCONTACT_signature,
    set_M_NVCONTACT_default_value,
    sizeof(M_NVCONTACT)
};

/****************************************************************
 ** T_NVCONTACT 
 ****************************************************************/

struct SimTypeVTable *pSimT_NVCONTACTVTable;

int T_NVCONTACT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimT_NVCONTACTVTable != NULL
        && pSimT_NVCONTACTVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_NVCONTACTVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_T_NVCONTACT(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimT_NVCONTACTVTable != NULL) {
        nRet=string_to_VTable(str, pSimT_NVCONTACTVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_T_NVCONTACT_double_conversion_allowed()
{
    if (pSimT_NVCONTACTVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_NVCONTACTVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_T_NVCONTACT_long_convertion_allowed()
{
    if (pSimT_NVCONTACTVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimT_NVCONTACTVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_T_NVCONTACT(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimT_NVCONTACTVTable != NULL
        && pSimT_NVCONTACTVTable->m_version >= Scv612
        && pSimT_NVCONTACTVTable->m_pfnCompare != NULL) {
        if (pSimT_NVCONTACTVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimT_NVCONTACTVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimT_NVCONTACTVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int T_NVCONTACT_to_double(const void *pValue, double *nRetValue)
{
    if (pSimT_NVCONTACTVTable != NULL) {
        return VTable_to_double(pValue, pSimT_NVCONTACTVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int T_NVCONTACT_to_long(const void *pValue, long *nRetValue)
{
    if (pSimT_NVCONTACTVTable != NULL) {
        return VTable_to_long(pValue, pSimT_NVCONTACTVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_T_NVCONTACT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_T_NVCONTACT_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_T_NVCONTACT_string(const char *str, char **endptr)
{
    static T_NVCONTACT rTemp;
    return string_to_T_NVCONTACT(str, &rTemp, endptr);
}

SimTypeUtils _Type_T_NVCONTACT_Utils = {
    T_NVCONTACT_to_string,
    check_T_NVCONTACT_string,
    string_to_T_NVCONTACT,
    is_T_NVCONTACT_double_conversion_allowed,
    T_NVCONTACT_to_double,
    is_T_NVCONTACT_long_convertion_allowed,
    T_NVCONTACT_to_long,
    compare_T_NVCONTACT,
    get_T_NVCONTACT_signature,
    set_T_NVCONTACT_default_value,
    sizeof(T_NVCONTACT)
};

/****************************************************************
 ** M_NVDERUN 
 ****************************************************************/

struct SimTypeVTable *pSimM_NVDERUNVTable;

static SimEnumValUtils M_NVDERUN_values[] = {
    { "M_NVDERUN_No", M_NVDERUN_No},
    { "M_NVDERUN_No", M_NVDERUN_No},
    { "M_NVDERUN_Yes", M_NVDERUN_Yes},
    { "M_NVDERUN_Yes", M_NVDERUN_Yes},
};
const int M_NVDERUN_nb_values = 4;

int M_NVDERUN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_NVDERUNVTable != NULL
        && pSimM_NVDERUNVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_NVDERUNVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_NVDERUN*)pValue, M_NVDERUN_values, M_NVDERUN_nb_values, pfnStrAppend, pData); 
}

int string_to_M_NVDERUN(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_NVDERUNVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_NVDERUNVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_NVDERUN_values, M_NVDERUN_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_NVDERUN*)pValue = nTemp;
    }
    return nRet;
}

int is_M_NVDERUN_double_conversion_allowed()
{
    if (pSimM_NVDERUNVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_NVDERUNVTable);
    }
    return 1;
}

int is_M_NVDERUN_long_convertion_allowed()
{
    if (pSimM_NVDERUNVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_NVDERUNVTable);
    }
    return 1;
}

void compare_M_NVDERUN(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_NVDERUNVTable != NULL
        && pSimM_NVDERUNVTable->m_version >= Scv612
        && pSimM_NVDERUNVTable->m_pfnCompare != NULL) {
        if (pSimM_NVDERUNVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_NVDERUNVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_NVDERUNVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_NVDERUN*)pValue1), (int)(*(M_NVDERUN*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_NVDERUN_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_NVDERUNVTable != NULL) {
        return VTable_to_double(pValue, pSimM_NVDERUNVTable, nRetValue);
    }
    *nRetValue = (double)*((M_NVDERUN*)pValue);
    return 1;
}

int M_NVDERUN_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_NVDERUNVTable != NULL) {
        return VTable_to_long(pValue, pSimM_NVDERUNVTable, nRetValue);
    }
    *nRetValue = (long)*((M_NVDERUN*)pValue);
    return 1;
}

int get_M_NVDERUN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_NVDERUN_values, M_NVDERUN_nb_values, pfnStrAppend, pData);
}

int set_M_NVDERUN_default_value(void *pValue)
{
    *(M_NVDERUN*)pValue = M_NVDERUN_No;
    return 1;
}

int check_M_NVDERUN_string(const char *str, char **endptr)
{
    static M_NVDERUN rTemp;
    return string_to_M_NVDERUN(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_NVDERUN_Utils = {
    M_NVDERUN_to_string,
    check_M_NVDERUN_string,
    string_to_M_NVDERUN,
    is_M_NVDERUN_double_conversion_allowed,
    M_NVDERUN_to_double,
    is_M_NVDERUN_long_convertion_allowed,
    M_NVDERUN_to_long,
    compare_M_NVDERUN,
    get_M_NVDERUN_signature,
    set_M_NVDERUN_default_value,
    sizeof(M_NVDERUN)
};

/****************************************************************
 ** D_NVSTFF 
 ****************************************************************/

struct SimTypeVTable *pSimD_NVSTFFVTable;

int D_NVSTFF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_NVSTFFVTable != NULL
        && pSimD_NVSTFFVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_NVSTFFVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_NVSTFF(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_NVSTFFVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_NVSTFFVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_NVSTFF_double_conversion_allowed()
{
    if (pSimD_NVSTFFVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_NVSTFFVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_D_NVSTFF_long_convertion_allowed()
{
    if (pSimD_NVSTFFVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimD_NVSTFFVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_D_NVSTFF(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_NVSTFFVTable != NULL
        && pSimD_NVSTFFVTable->m_version >= Scv612
        && pSimD_NVSTFFVTable->m_pfnCompare != NULL) {
        if (pSimD_NVSTFFVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_NVSTFFVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_NVSTFFVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_NVSTFF_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_NVSTFFVTable != NULL) {
        return VTable_to_double(pValue, pSimD_NVSTFFVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int D_NVSTFF_to_long(const void *pValue, long *nRetValue)
{
    if (pSimD_NVSTFFVTable != NULL) {
        return VTable_to_long(pValue, pSimD_NVSTFFVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_D_NVSTFF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_NVSTFF_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_NVSTFF_string(const char *str, char **endptr)
{
    static D_NVSTFF rTemp;
    return string_to_D_NVSTFF(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_NVSTFF_Utils = {
    D_NVSTFF_to_string,
    check_D_NVSTFF_string,
    string_to_D_NVSTFF,
    is_D_NVSTFF_double_conversion_allowed,
    D_NVSTFF_to_double,
    is_D_NVSTFF_long_convertion_allowed,
    D_NVSTFF_to_long,
    compare_D_NVSTFF,
    get_D_NVSTFF_signature,
    set_D_NVSTFF_default_value,
    sizeof(D_NVSTFF)
};

/****************************************************************
 ** Q_NVDRIVER_ADHES 
 ****************************************************************/

struct SimTypeVTable *pSimQ_NVDRIVER_ADHESVTable;

static SimEnumValUtils Q_NVDRIVER_ADHES_values[] = {
    { "Q_NVDRIVER_ADHES_Not_allowed", Q_NVDRIVER_ADHES_Not_allowed},
    { "Q_NVDRIVER_ADHES_Not_allowed", Q_NVDRIVER_ADHES_Not_allowed},
    { "Q_NVDRIVER_ADHES_Allowed", Q_NVDRIVER_ADHES_Allowed},
    { "Q_NVDRIVER_ADHES_Allowed", Q_NVDRIVER_ADHES_Allowed},
};
const int Q_NVDRIVER_ADHES_nb_values = 4;

int Q_NVDRIVER_ADHES_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_NVDRIVER_ADHESVTable != NULL
        && pSimQ_NVDRIVER_ADHESVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_NVDRIVER_ADHESVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_NVDRIVER_ADHES*)pValue, Q_NVDRIVER_ADHES_values, Q_NVDRIVER_ADHES_nb_values, pfnStrAppend, pData); 
}

int string_to_Q_NVDRIVER_ADHES(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_NVDRIVER_ADHESVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_NVDRIVER_ADHESVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_NVDRIVER_ADHES_values, Q_NVDRIVER_ADHES_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_NVDRIVER_ADHES*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_NVDRIVER_ADHES_double_conversion_allowed()
{
    if (pSimQ_NVDRIVER_ADHESVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimQ_NVDRIVER_ADHESVTable);
    }
    return 1;
}

int is_Q_NVDRIVER_ADHES_long_convertion_allowed()
{
    if (pSimQ_NVDRIVER_ADHESVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimQ_NVDRIVER_ADHESVTable);
    }
    return 1;
}

void compare_Q_NVDRIVER_ADHES(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_NVDRIVER_ADHESVTable != NULL
        && pSimQ_NVDRIVER_ADHESVTable->m_version >= Scv612
        && pSimQ_NVDRIVER_ADHESVTable->m_pfnCompare != NULL) {
        if (pSimQ_NVDRIVER_ADHESVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_NVDRIVER_ADHESVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_NVDRIVER_ADHESVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_NVDRIVER_ADHES*)pValue1), (int)(*(Q_NVDRIVER_ADHES*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_NVDRIVER_ADHES_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_NVDRIVER_ADHESVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_NVDRIVER_ADHESVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_NVDRIVER_ADHES*)pValue);
    return 1;
}

int Q_NVDRIVER_ADHES_to_long(const void *pValue, long *nRetValue)
{
    if (pSimQ_NVDRIVER_ADHESVTable != NULL) {
        return VTable_to_long(pValue, pSimQ_NVDRIVER_ADHESVTable, nRetValue);
    }
    *nRetValue = (long)*((Q_NVDRIVER_ADHES*)pValue);
    return 1;
}

int get_Q_NVDRIVER_ADHES_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_NVDRIVER_ADHES_values, Q_NVDRIVER_ADHES_nb_values, pfnStrAppend, pData);
}

int set_Q_NVDRIVER_ADHES_default_value(void *pValue)
{
    *(Q_NVDRIVER_ADHES*)pValue = Q_NVDRIVER_ADHES_Not_allowed;
    return 1;
}

int check_Q_NVDRIVER_ADHES_string(const char *str, char **endptr)
{
    static Q_NVDRIVER_ADHES rTemp;
    return string_to_Q_NVDRIVER_ADHES(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_NVDRIVER_ADHES_Utils = {
    Q_NVDRIVER_ADHES_to_string,
    check_Q_NVDRIVER_ADHES_string,
    string_to_Q_NVDRIVER_ADHES,
    is_Q_NVDRIVER_ADHES_double_conversion_allowed,
    Q_NVDRIVER_ADHES_to_double,
    is_Q_NVDRIVER_ADHES_long_convertion_allowed,
    Q_NVDRIVER_ADHES_to_long,
    compare_Q_NVDRIVER_ADHES,
    get_Q_NVDRIVER_ADHES_signature,
    set_Q_NVDRIVER_ADHES_default_value,
    sizeof(Q_NVDRIVER_ADHES)
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
 ** P003V1_section_enum_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP003V1_section_enum_T_TM_baseline2VTable;

int P003V1_section_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP003V1_section_enum_T_TM_baseline2VTable != NULL
        && pSimP003V1_section_enum_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP003V1_section_enum_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2449_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P003V1_section_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP003V1_section_enum_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP003V1_section_enum_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2449(str, pValue, endptr);
    }
    return nRet;
}

int is_P003V1_section_enum_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP003V1_section_enum_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP003V1_section_enum_T_TM_baseline2VTable);
    }
    return is_struct__2449_double_conversion_allowed();
}

int is_P003V1_section_enum_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP003V1_section_enum_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP003V1_section_enum_T_TM_baseline2VTable);
    }
    return is_struct__2449_long_convertion_allowed();
}

void compare_P003V1_section_enum_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP003V1_section_enum_T_TM_baseline2VTable != NULL
        && pSimP003V1_section_enum_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP003V1_section_enum_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP003V1_section_enum_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP003V1_section_enum_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP003V1_section_enum_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__2449(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P003V1_section_enum_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP003V1_section_enum_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP003V1_section_enum_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2449_to_double(pValue, nRetValue);
}

int P003V1_section_enum_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP003V1_section_enum_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP003V1_section_enum_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2449_to_long(pValue, nRetValue);
}

int get_P003V1_section_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2449_signature(pfnStrAppend, pData);
}

int set_P003V1_section_enum_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__2449_default_value(pValue);
}

int check_P003V1_section_enum_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P003V1_section_enum_T_TM_baseline2 rTemp;
    return string_to_P003V1_section_enum_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P003V1_section_enum_T_TM_baseline2_Utils = {
    P003V1_section_enum_T_TM_baseline2_to_string,
    check_P003V1_section_enum_T_TM_baseline2_string,
    string_to_P003V1_section_enum_T_TM_baseline2,
    is_P003V1_section_enum_T_TM_baseline2_double_conversion_allowed,
    P003V1_section_enum_T_TM_baseline2_to_double,
    is_P003V1_section_enum_T_TM_baseline2_long_convertion_allowed,
    P003V1_section_enum_T_TM_baseline2_to_long,
    compare_P003V1_section_enum_T_TM_baseline2,
    get_P003V1_section_enum_T_TM_baseline2_signature,
    set_P003V1_section_enum_T_TM_baseline2_default_value,
    sizeof(P003V1_section_enum_T_TM_baseline2)
};

/****************************************************************
 ** P003V1_OBU_sectionlist_int_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable;

int P003V1_OBU_sectionlist_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL
        && pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_32_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P003V1_OBU_sectionlist_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_32(str, pValue, endptr);
    }
    return nRet;
}

int is_P003V1_OBU_sectionlist_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable);
    }
    return is_array_int_32_double_conversion_allowed();
}

int is_P003V1_OBU_sectionlist_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable);
    }
    return is_array_int_32_long_convertion_allowed();
}

void compare_P003V1_OBU_sectionlist_int_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL
        && pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_32(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P003V1_OBU_sectionlist_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable, nRetValue);
    }
    return array_int_32_to_double(pValue, nRetValue);
}

int P003V1_OBU_sectionlist_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP003V1_OBU_sectionlist_int_T_TM_baseline2VTable, nRetValue);
    }
    return array_int_32_to_long(pValue, nRetValue);
}

int get_P003V1_OBU_sectionlist_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_32_signature(pfnStrAppend, pData);
}

int set_P003V1_OBU_sectionlist_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_array_int_32_default_value(pValue);
}

int check_P003V1_OBU_sectionlist_int_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P003V1_OBU_sectionlist_int_T_TM_baseline2 rTemp;
    return string_to_P003V1_OBU_sectionlist_int_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P003V1_OBU_sectionlist_int_T_TM_baseline2_Utils = {
    P003V1_OBU_sectionlist_int_T_TM_baseline2_to_string,
    check_P003V1_OBU_sectionlist_int_T_TM_baseline2_string,
    string_to_P003V1_OBU_sectionlist_int_T_TM_baseline2,
    is_P003V1_OBU_sectionlist_int_T_TM_baseline2_double_conversion_allowed,
    P003V1_OBU_sectionlist_int_T_TM_baseline2_to_double,
    is_P003V1_OBU_sectionlist_int_T_TM_baseline2_long_convertion_allowed,
    P003V1_OBU_sectionlist_int_T_TM_baseline2_to_long,
    compare_P003V1_OBU_sectionlist_int_T_TM_baseline2,
    get_P003V1_OBU_sectionlist_int_T_TM_baseline2_signature,
    set_P003V1_OBU_sectionlist_int_T_TM_baseline2_default_value,
    sizeof(P003V1_OBU_sectionlist_int_T_TM_baseline2)
};

/****************************************************************
 ** P003V1_sectionlist_enum_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP003V1_sectionlist_enum_T_TM_baseline2VTable;

int P003V1_sectionlist_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP003V1_sectionlist_enum_T_TM_baseline2VTable != NULL
        && pSimP003V1_sectionlist_enum_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP003V1_sectionlist_enum_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__2454_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P003V1_sectionlist_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP003V1_sectionlist_enum_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP003V1_sectionlist_enum_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__2454(str, pValue, endptr);
    }
    return nRet;
}

int is_P003V1_sectionlist_enum_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP003V1_sectionlist_enum_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP003V1_sectionlist_enum_T_TM_baseline2VTable);
    }
    return is_array__2454_double_conversion_allowed();
}

int is_P003V1_sectionlist_enum_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP003V1_sectionlist_enum_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP003V1_sectionlist_enum_T_TM_baseline2VTable);
    }
    return is_array__2454_long_convertion_allowed();
}

void compare_P003V1_sectionlist_enum_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP003V1_sectionlist_enum_T_TM_baseline2VTable != NULL
        && pSimP003V1_sectionlist_enum_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP003V1_sectionlist_enum_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP003V1_sectionlist_enum_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP003V1_sectionlist_enum_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP003V1_sectionlist_enum_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__2454(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P003V1_sectionlist_enum_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP003V1_sectionlist_enum_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP003V1_sectionlist_enum_T_TM_baseline2VTable, nRetValue);
    }
    return array__2454_to_double(pValue, nRetValue);
}

int P003V1_sectionlist_enum_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP003V1_sectionlist_enum_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP003V1_sectionlist_enum_T_TM_baseline2VTable, nRetValue);
    }
    return array__2454_to_long(pValue, nRetValue);
}

int get_P003V1_sectionlist_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__2454_signature(pfnStrAppend, pData);
}

int set_P003V1_sectionlist_enum_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__2454_default_value(pValue);
}

int check_P003V1_sectionlist_enum_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P003V1_sectionlist_enum_T_TM_baseline2 rTemp;
    return string_to_P003V1_sectionlist_enum_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P003V1_sectionlist_enum_T_TM_baseline2_Utils = {
    P003V1_sectionlist_enum_T_TM_baseline2_to_string,
    check_P003V1_sectionlist_enum_T_TM_baseline2_string,
    string_to_P003V1_sectionlist_enum_T_TM_baseline2,
    is_P003V1_sectionlist_enum_T_TM_baseline2_double_conversion_allowed,
    P003V1_sectionlist_enum_T_TM_baseline2_to_double,
    is_P003V1_sectionlist_enum_T_TM_baseline2_long_convertion_allowed,
    P003V1_sectionlist_enum_T_TM_baseline2_to_long,
    compare_P003V1_sectionlist_enum_T_TM_baseline2,
    get_P003V1_sectionlist_enum_T_TM_baseline2_signature,
    set_P003V1_sectionlist_enum_T_TM_baseline2_default_value,
    sizeof(P003V1_sectionlist_enum_T_TM_baseline2)
};

/****************************************************************
 ** P003V1_OBU_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP003V1_OBU_T_TM_baseline2VTable;

int P003V1_OBU_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP003V1_OBU_T_TM_baseline2VTable != NULL
        && pSimP003V1_OBU_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP003V1_OBU_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2457_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P003V1_OBU_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP003V1_OBU_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP003V1_OBU_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2457(str, pValue, endptr);
    }
    return nRet;
}

int is_P003V1_OBU_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP003V1_OBU_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP003V1_OBU_T_TM_baseline2VTable);
    }
    return is_struct__2457_double_conversion_allowed();
}

int is_P003V1_OBU_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP003V1_OBU_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP003V1_OBU_T_TM_baseline2VTable);
    }
    return is_struct__2457_long_convertion_allowed();
}

void compare_P003V1_OBU_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP003V1_OBU_T_TM_baseline2VTable != NULL
        && pSimP003V1_OBU_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP003V1_OBU_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP003V1_OBU_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP003V1_OBU_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP003V1_OBU_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__2457(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P003V1_OBU_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP003V1_OBU_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP003V1_OBU_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2457_to_double(pValue, nRetValue);
}

int P003V1_OBU_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP003V1_OBU_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP003V1_OBU_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2457_to_long(pValue, nRetValue);
}

int get_P003V1_OBU_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2457_signature(pfnStrAppend, pData);
}

int set_P003V1_OBU_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__2457_default_value(pValue);
}

int check_P003V1_OBU_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P003V1_OBU_T_TM_baseline2 rTemp;
    return string_to_P003V1_OBU_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P003V1_OBU_T_TM_baseline2_Utils = {
    P003V1_OBU_T_TM_baseline2_to_string,
    check_P003V1_OBU_T_TM_baseline2_string,
    string_to_P003V1_OBU_T_TM_baseline2,
    is_P003V1_OBU_T_TM_baseline2_double_conversion_allowed,
    P003V1_OBU_T_TM_baseline2_to_double,
    is_P003V1_OBU_T_TM_baseline2_long_convertion_allowed,
    P003V1_OBU_T_TM_baseline2_to_long,
    compare_P003V1_OBU_T_TM_baseline2,
    get_P003V1_OBU_T_TM_baseline2_signature,
    set_P003V1_OBU_T_TM_baseline2_default_value,
    sizeof(P003V1_OBU_T_TM_baseline2)
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
    return struct__2420_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P003V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP003V1_trackside_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2420(str, pValue, endptr);
    }
    return nRet;
}

int is_P003V1_trackside_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP003V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__2420_double_conversion_allowed();
}

int is_P003V1_trackside_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP003V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__2420_long_convertion_allowed();
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
        compare_struct__2420(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P003V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP003V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2420_to_double(pValue, nRetValue);
}

int P003V1_trackside_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP003V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2420_to_long(pValue, nRetValue);
}

int get_P003V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2420_signature(pfnStrAppend, pData);
}

int set_P003V1_trackside_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__2420_default_value(pValue);
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

/****************************************************************
 ** Array24_TM 
 ****************************************************************/

struct SimTypeVTable *pSimArray24_TMVTable;

int Array24_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimArray24_TMVTable != NULL
        && pSimArray24_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimArray24_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_24_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Array24_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimArray24_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimArray24_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_24(str, pValue, endptr);
    }
    return nRet;
}

int is_Array24_TM_double_conversion_allowed()
{
    if (pSimArray24_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimArray24_TMVTable);
    }
    return is_array_int_24_double_conversion_allowed();
}

int is_Array24_TM_long_convertion_allowed()
{
    if (pSimArray24_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimArray24_TMVTable);
    }
    return is_array_int_24_long_convertion_allowed();
}

void compare_Array24_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimArray24_TMVTable != NULL
        && pSimArray24_TMVTable->m_version >= Scv612
        && pSimArray24_TMVTable->m_pfnCompare != NULL) {
        if (pSimArray24_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimArray24_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimArray24_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_24(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Array24_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimArray24_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimArray24_TMVTable, nRetValue);
    }
    return array_int_24_to_double(pValue, nRetValue);
}

int Array24_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimArray24_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimArray24_TMVTable, nRetValue);
    }
    return array_int_24_to_long(pValue, nRetValue);
}

int get_Array24_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_24_signature(pfnStrAppend, pData);
}

int set_Array24_TM_default_value(void *pValue)
{
    return set_array_int_24_default_value(pValue);
}

int check_Array24_TM_string(const char *str, char **endptr)
{
    static Array24_TM rTemp;
    return string_to_Array24_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_Array24_TM_Utils = {
    Array24_TM_to_string,
    check_Array24_TM_string,
    string_to_Array24_TM,
    is_Array24_TM_double_conversion_allowed,
    Array24_TM_to_double,
    is_Array24_TM_long_convertion_allowed,
    Array24_TM_to_long,
    compare_Array24_TM,
    get_Array24_TM_signature,
    set_Array24_TM_default_value,
    sizeof(Array24_TM)
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
 ** MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimMetadataElement_T_Common_Types_PkgVTable;

int MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2398_to_string(pValue, pfnStrAppend, pData);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2398(str, pValue, endptr);
    }
    return nRet;
}

int is_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__2398_double_conversion_allowed();
}

int is_MetadataElement_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__2398_long_convertion_allowed();
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
        compare_struct__2398(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2398_to_double(pValue, nRetValue);
}

int MetadataElement_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2398_to_long(pValue, nRetValue);
}

int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2398_signature(pfnStrAppend, pData);
}

int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__2398_default_value(pValue);
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
 ** Metadata_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimMetadata_T_Common_Types_PkgVTable;

int Metadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL
        && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__2406_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__2406(str, pValue, endptr);
    }
    return nRet;
}

int is_Metadata_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__2406_double_conversion_allowed();
}

int is_Metadata_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__2406_long_convertion_allowed();
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
        compare_array__2406(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__2406_to_double(pValue, nRetValue);
}

int Metadata_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__2406_to_long(pValue, nRetValue);
}

int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__2406_signature(pfnStrAppend, pData);
}

int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_array__2406_default_value(pValue);
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
 ** CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimCompressedPackets_T_Common_Types_PkgVTable;

int CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2412_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2412(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__2412_double_conversion_allowed();
}

int is_CompressedPackets_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__2412_long_convertion_allowed();
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
        compare_struct__2412(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2412_to_double(pValue, nRetValue);
}

int CompressedPackets_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2412_to_long(pValue, nRetValue);
}

int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2412_signature(pfnStrAppend, pData);
}

int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__2412_default_value(pValue);
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

#include "C:/Program Files/Esterel Technologies/SCADE R16.1/SCADE/lib/kcg_conv.c"
