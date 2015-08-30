#include <stdlib.h>
#include <stddef.h>
#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "TestTrackAtlas_newtype.h"
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
 ** struct__1921 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1921VTable;

static SimFieldUtils struct__1921_fields[] = {
    {"valid", offsetof(struct__1921,valid), &_Type_kcg_bool_Utils},
    {"Loc_Absolute", offsetof(struct__1921,Loc_Absolute), &_Type_kcg_int_Utils},
    {"Loc_LRBG", offsetof(struct__1921,Loc_LRBG), &_Type_kcg_int_Utils},
    {"Gradient", offsetof(struct__1921,Gradient), &_Type_kcg_int_Utils},
    {"L_Gradient", offsetof(struct__1921,L_Gradient), &_Type_kcg_int_Utils},
};

int struct__1921_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1921VTable != NULL
        && pSimstruct__1921VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1921VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1921_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__1921(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1921VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1921VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1921_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__1921_double_conversion_allowed()
{
    if (pSimstruct__1921VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__1921VTable);
    }
    return 0;
}

int is_struct__1921_long_convertion_allowed()
{
    if (pSimstruct__1921VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__1921VTable);
    }
    return 0;
}

void compare_struct__1921(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1921VTable != NULL
        && pSimstruct__1921VTable->m_version >= Scv612
        && pSimstruct__1921VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1921VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1921VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1921VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1921_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1921_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1921VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1921VTable, nRetValue);
    }
    return 0;
}

int struct__1921_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__1921VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__1921VTable, nRetValue);
    }
    return 0;
}

int get_struct__1921_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1921_fields, 5, pfnStrAppend, pData);
}

int set_struct__1921_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__1921*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__1921*)pValue)->Loc_Absolute));
    set_kcg_int_default_value(&(((struct__1921*)pValue)->Loc_LRBG));
    set_kcg_int_default_value(&(((struct__1921*)pValue)->Gradient));
    set_kcg_int_default_value(&(((struct__1921*)pValue)->L_Gradient));
    return 1;
}

int check_struct__1921_string(const char *str, char **endptr)
{
    static struct__1921 rTemp;
    return string_to_struct__1921(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1921_Utils = {
    struct__1921_to_string,
    check_struct__1921_string,
    string_to_struct__1921,
    is_struct__1921_double_conversion_allowed,
    struct__1921_to_double,
    is_struct__1921_long_convertion_allowed,
    struct__1921_to_long,
    compare_struct__1921,
    get_struct__1921_signature,
    set_struct__1921_default_value,
    sizeof(struct__1921)
};

/****************************************************************
 ** array__1929 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1929VTable;

int array__1929_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1929VTable != NULL
        && pSimarray__1929VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1929VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__1921_to_string, 50, sizeof(struct__1921), pfnStrAppend, pData);
}

int string_to_array__1929(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1929VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1929VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__1921_Utils, 50, sizeof(struct__1921), endptr);
    }
    return nRet;
}

int is_array__1929_double_conversion_allowed()
{
    if (pSimarray__1929VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__1929VTable);
    }
    return 0;
}

int is_array__1929_long_convertion_allowed()
{
    if (pSimarray__1929VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__1929VTable);
    }
    return 0;
}

void compare_array__1929(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1929VTable != NULL
        && pSimarray__1929VTable->m_version >= Scv612
        && pSimarray__1929VTable->m_pfnCompare != NULL) {
        if (pSimarray__1929VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1929VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1929VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__1921, 50, sizeof(struct__1921), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1929_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1929VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1929VTable, nRetValue);
    }
    return 0;
}

int array__1929_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__1929VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__1929VTable, nRetValue);
    }
    return 0;
}

int get_array__1929_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 50; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__1921_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1929_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 50; i++)
        set_struct__1921_default_value(&((struct__1921*)pValue)[i]);
    return 1;
}

int check_array__1929_string(const char *str, char **endptr)
{
    static array__1929 rTemp;
    return string_to_array__1929(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1929_Utils = {
    array__1929_to_string,
    check_array__1929_string,
    string_to_array__1929,
    is_array__1929_double_conversion_allowed,
    array__1929_to_double,
    is_array__1929_long_convertion_allowed,
    array__1929_to_long,
    compare_array__1929,
    get_array__1929_signature,
    set_array__1929_default_value,
    sizeof(array__1929)
};

/****************************************************************
 ** struct__1932 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1932VTable;

static SimFieldUtils struct__1932_fields[] = {
    {"valid", offsetof(struct__1932,valid), &_Type_kcg_bool_Utils},
    {"d_gradient", offsetof(struct__1932,d_gradient), &_Type_kcg_int_Utils},
    {"q_gdir", offsetof(struct__1932,q_gdir), &_Type_Q_GDIR_Utils},
    {"g_a", offsetof(struct__1932,g_a), &_Type_kcg_int_Utils},
};

int struct__1932_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1932VTable != NULL
        && pSimstruct__1932VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1932VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1932_fields, 4, pfnStrAppend, pData);
}

int string_to_struct__1932(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1932VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1932VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1932_fields, 4, endptr);
    }
    return nRet;
}

int is_struct__1932_double_conversion_allowed()
{
    if (pSimstruct__1932VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__1932VTable);
    }
    return 0;
}

int is_struct__1932_long_convertion_allowed()
{
    if (pSimstruct__1932VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__1932VTable);
    }
    return 0;
}

void compare_struct__1932(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1932VTable != NULL
        && pSimstruct__1932VTable->m_version >= Scv612
        && pSimstruct__1932VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1932VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1932VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1932VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1932_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1932_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1932VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1932VTable, nRetValue);
    }
    return 0;
}

int struct__1932_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__1932VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__1932VTable, nRetValue);
    }
    return 0;
}

int get_struct__1932_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1932_fields, 4, pfnStrAppend, pData);
}

int set_struct__1932_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__1932*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__1932*)pValue)->d_gradient));
    set_Q_GDIR_default_value(&(((struct__1932*)pValue)->q_gdir));
    set_kcg_int_default_value(&(((struct__1932*)pValue)->g_a));
    return 1;
}

int check_struct__1932_string(const char *str, char **endptr)
{
    static struct__1932 rTemp;
    return string_to_struct__1932(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1932_Utils = {
    struct__1932_to_string,
    check_struct__1932_string,
    string_to_struct__1932,
    is_struct__1932_double_conversion_allowed,
    struct__1932_to_double,
    is_struct__1932_long_convertion_allowed,
    struct__1932_to_long,
    compare_struct__1932,
    get_struct__1932_signature,
    set_struct__1932_default_value,
    sizeof(struct__1932)
};

/****************************************************************
 ** array__1939 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1939VTable;

int array__1939_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1939VTable != NULL
        && pSimarray__1939VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1939VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__1932_to_string, 33, sizeof(struct__1932), pfnStrAppend, pData);
}

int string_to_array__1939(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1939VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1939VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__1932_Utils, 33, sizeof(struct__1932), endptr);
    }
    return nRet;
}

int is_array__1939_double_conversion_allowed()
{
    if (pSimarray__1939VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__1939VTable);
    }
    return 0;
}

int is_array__1939_long_convertion_allowed()
{
    if (pSimarray__1939VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__1939VTable);
    }
    return 0;
}

void compare_array__1939(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1939VTable != NULL
        && pSimarray__1939VTable->m_version >= Scv612
        && pSimarray__1939VTable->m_pfnCompare != NULL) {
        if (pSimarray__1939VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1939VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1939VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__1932, 33, sizeof(struct__1932), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1939_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1939VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1939VTable, nRetValue);
    }
    return 0;
}

int array__1939_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__1939VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__1939VTable, nRetValue);
    }
    return 0;
}

int get_array__1939_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__1932_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1939_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__1932_default_value(&((struct__1932*)pValue)[i]);
    return 1;
}

int check_array__1939_string(const char *str, char **endptr)
{
    static array__1939 rTemp;
    return string_to_array__1939(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1939_Utils = {
    array__1939_to_string,
    check_array__1939_string,
    string_to_array__1939,
    is_array__1939_double_conversion_allowed,
    array__1939_to_double,
    is_array__1939_long_convertion_allowed,
    array__1939_to_long,
    compare_array__1939,
    get_array__1939_signature,
    set_array__1939_default_value,
    sizeof(array__1939)
};

/****************************************************************
 ** struct__1942 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1942VTable;

static SimFieldUtils struct__1942_fields[] = {
    {"valid", offsetof(struct__1942,valid), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(struct__1942,q_dir), &_Type_Q_DIR_Utils},
    {"q_scale", offsetof(struct__1942,q_scale), &_Type_Q_SCALE_Utils},
    {"n_iter", offsetof(struct__1942,n_iter), &_Type_kcg_int_Utils},
    {"sections", offsetof(struct__1942,sections), &_Type_array__1939_Utils},
};

int struct__1942_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1942VTable != NULL
        && pSimstruct__1942VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1942VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1942_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__1942(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1942VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1942VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1942_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__1942_double_conversion_allowed()
{
    if (pSimstruct__1942VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__1942VTable);
    }
    return 0;
}

int is_struct__1942_long_convertion_allowed()
{
    if (pSimstruct__1942VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__1942VTable);
    }
    return 0;
}

void compare_struct__1942(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1942VTable != NULL
        && pSimstruct__1942VTable->m_version >= Scv612
        && pSimstruct__1942VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1942VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1942VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1942VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1942_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1942_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1942VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1942VTable, nRetValue);
    }
    return 0;
}

int struct__1942_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__1942VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__1942VTable, nRetValue);
    }
    return 0;
}

int get_struct__1942_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1942_fields, 5, pfnStrAppend, pData);
}

int set_struct__1942_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__1942*)pValue)->valid));
    set_Q_DIR_default_value(&(((struct__1942*)pValue)->q_dir));
    set_Q_SCALE_default_value(&(((struct__1942*)pValue)->q_scale));
    set_kcg_int_default_value(&(((struct__1942*)pValue)->n_iter));
    set_array__1939_default_value(&(((struct__1942*)pValue)->sections));
    return 1;
}

int check_struct__1942_string(const char *str, char **endptr)
{
    static struct__1942 rTemp;
    return string_to_struct__1942(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1942_Utils = {
    struct__1942_to_string,
    check_struct__1942_string,
    string_to_struct__1942,
    is_struct__1942_double_conversion_allowed,
    struct__1942_to_double,
    is_struct__1942_long_convertion_allowed,
    struct__1942_to_long,
    compare_struct__1942,
    get_struct__1942_signature,
    set_struct__1942_default_value,
    sizeof(struct__1942)
};

/****************************************************************
 ** struct__1950 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1950VTable;

static SimFieldUtils struct__1950_fields[] = {
    {"D_GRADIENT", offsetof(struct__1950,D_GRADIENT), &_Type_kcg_int_Utils},
    {"Q_GDIR", offsetof(struct__1950,Q_GDIR), &_Type_kcg_int_Utils},
    {"G_A", offsetof(struct__1950,G_A), &_Type_kcg_int_Utils},
};

int struct__1950_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1950VTable != NULL
        && pSimstruct__1950VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1950VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1950_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__1950(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1950VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1950VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1950_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__1950_double_conversion_allowed()
{
    if (pSimstruct__1950VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__1950VTable);
    }
    return 0;
}

int is_struct__1950_long_convertion_allowed()
{
    if (pSimstruct__1950VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__1950VTable);
    }
    return 0;
}

void compare_struct__1950(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1950VTable != NULL
        && pSimstruct__1950VTable->m_version >= Scv612
        && pSimstruct__1950VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1950VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1950VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1950VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1950_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1950_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1950VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1950VTable, nRetValue);
    }
    return 0;
}

int struct__1950_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__1950VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__1950VTable, nRetValue);
    }
    return 0;
}

int get_struct__1950_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1950_fields, 3, pfnStrAppend, pData);
}

int set_struct__1950_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__1950*)pValue)->D_GRADIENT));
    set_kcg_int_default_value(&(((struct__1950*)pValue)->Q_GDIR));
    set_kcg_int_default_value(&(((struct__1950*)pValue)->G_A));
    return 1;
}

int check_struct__1950_string(const char *str, char **endptr)
{
    static struct__1950 rTemp;
    return string_to_struct__1950(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1950_Utils = {
    struct__1950_to_string,
    check_struct__1950_string,
    string_to_struct__1950,
    is_struct__1950_double_conversion_allowed,
    struct__1950_to_double,
    is_struct__1950_long_convertion_allowed,
    struct__1950_to_long,
    compare_struct__1950,
    get_struct__1950_signature,
    set_struct__1950_default_value,
    sizeof(struct__1950)
};

/****************************************************************
 ** array__1956 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1956VTable;

int array__1956_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1956VTable != NULL
        && pSimarray__1956VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1956VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__1950_to_string, 32, sizeof(struct__1950), pfnStrAppend, pData);
}

int string_to_array__1956(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1956VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1956VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__1950_Utils, 32, sizeof(struct__1950), endptr);
    }
    return nRet;
}

int is_array__1956_double_conversion_allowed()
{
    if (pSimarray__1956VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__1956VTable);
    }
    return 0;
}

int is_array__1956_long_convertion_allowed()
{
    if (pSimarray__1956VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__1956VTable);
    }
    return 0;
}

void compare_array__1956(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1956VTable != NULL
        && pSimarray__1956VTable->m_version >= Scv612
        && pSimarray__1956VTable->m_pfnCompare != NULL) {
        if (pSimarray__1956VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1956VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1956VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__1950, 32, sizeof(struct__1950), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1956_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1956VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1956VTable, nRetValue);
    }
    return 0;
}

int array__1956_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__1956VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__1956VTable, nRetValue);
    }
    return 0;
}

int get_array__1956_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__1950_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1956_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__1950_default_value(&((struct__1950*)pValue)[i]);
    return 1;
}

int check_array__1956_string(const char *str, char **endptr)
{
    static array__1956 rTemp;
    return string_to_array__1956(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1956_Utils = {
    array__1956_to_string,
    check_array__1956_string,
    string_to_array__1956,
    is_array__1956_double_conversion_allowed,
    array__1956_to_double,
    is_array__1956_long_convertion_allowed,
    array__1956_to_long,
    compare_array__1956,
    get_array__1956_signature,
    set_array__1956_default_value,
    sizeof(array__1956)
};

/****************************************************************
 ** struct__1959 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1959VTable;

static SimFieldUtils struct__1959_fields[] = {
    {"valid", offsetof(struct__1959,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__1959,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__1959,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__1959,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__1959,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_GRADIENT", offsetof(struct__1959,D_GRADIENT), &_Type_kcg_int_Utils},
    {"Q_GDIR", offsetof(struct__1959,Q_GDIR), &_Type_kcg_int_Utils},
    {"G_A", offsetof(struct__1959,G_A), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__1959,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__1959,SECTIONS), &_Type_array__1956_Utils},
};

int struct__1959_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1959VTable != NULL
        && pSimstruct__1959VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1959VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1959_fields, 10, pfnStrAppend, pData);
}

int string_to_struct__1959(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1959VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1959VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1959_fields, 10, endptr);
    }
    return nRet;
}

int is_struct__1959_double_conversion_allowed()
{
    if (pSimstruct__1959VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__1959VTable);
    }
    return 0;
}

int is_struct__1959_long_convertion_allowed()
{
    if (pSimstruct__1959VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__1959VTable);
    }
    return 0;
}

void compare_struct__1959(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1959VTable != NULL
        && pSimstruct__1959VTable->m_version >= Scv612
        && pSimstruct__1959VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1959VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1959VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1959VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1959_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1959_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1959VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1959VTable, nRetValue);
    }
    return 0;
}

int struct__1959_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__1959VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__1959VTable, nRetValue);
    }
    return 0;
}

int get_struct__1959_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1959_fields, 10, pfnStrAppend, pData);
}

int set_struct__1959_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__1959*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__1959*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__1959*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__1959*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__1959*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__1959*)pValue)->D_GRADIENT));
    set_kcg_int_default_value(&(((struct__1959*)pValue)->Q_GDIR));
    set_kcg_int_default_value(&(((struct__1959*)pValue)->G_A));
    set_kcg_int_default_value(&(((struct__1959*)pValue)->N_ITER));
    set_array__1956_default_value(&(((struct__1959*)pValue)->SECTIONS));
    return 1;
}

int check_struct__1959_string(const char *str, char **endptr)
{
    static struct__1959 rTemp;
    return string_to_struct__1959(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1959_Utils = {
    struct__1959_to_string,
    check_struct__1959_string,
    string_to_struct__1959,
    is_struct__1959_double_conversion_allowed,
    struct__1959_to_double,
    is_struct__1959_long_convertion_allowed,
    struct__1959_to_long,
    compare_struct__1959,
    get_struct__1959_signature,
    set_struct__1959_default_value,
    sizeof(struct__1959)
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
 ** struct__1975 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1975VTable;

static SimFieldUtils struct__1975_fields[] = {
    {"nid_packet", offsetof(struct__1975,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__1975,q_dir), &_Type_Q_DIR_Utils},
    {"valid", offsetof(struct__1975,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(struct__1975,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(struct__1975,endAddress), &_Type_kcg_int_Utils},
};

int struct__1975_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1975VTable != NULL
        && pSimstruct__1975VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1975VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1975_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__1975(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1975VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1975VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1975_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__1975_double_conversion_allowed()
{
    if (pSimstruct__1975VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__1975VTable);
    }
    return 0;
}

int is_struct__1975_long_convertion_allowed()
{
    if (pSimstruct__1975VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__1975VTable);
    }
    return 0;
}

void compare_struct__1975(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1975VTable != NULL
        && pSimstruct__1975VTable->m_version >= Scv612
        && pSimstruct__1975VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1975VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1975VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1975VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1975_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1975_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1975VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1975VTable, nRetValue);
    }
    return 0;
}

int struct__1975_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__1975VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__1975VTable, nRetValue);
    }
    return 0;
}

int get_struct__1975_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1975_fields, 5, pfnStrAppend, pData);
}

int set_struct__1975_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__1975*)pValue)->nid_packet));
    set_Q_DIR_default_value(&(((struct__1975*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((struct__1975*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__1975*)pValue)->startAddress));
    set_kcg_int_default_value(&(((struct__1975*)pValue)->endAddress));
    return 1;
}

int check_struct__1975_string(const char *str, char **endptr)
{
    static struct__1975 rTemp;
    return string_to_struct__1975(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1975_Utils = {
    struct__1975_to_string,
    check_struct__1975_string,
    string_to_struct__1975,
    is_struct__1975_double_conversion_allowed,
    struct__1975_to_double,
    is_struct__1975_long_convertion_allowed,
    struct__1975_to_long,
    compare_struct__1975,
    get_struct__1975_signature,
    set_struct__1975_default_value,
    sizeof(struct__1975)
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
 ** array__1992 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1992VTable;

int array__1992_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1992VTable != NULL
        && pSimarray__1992VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1992VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__1950_to_string, 33, sizeof(struct__1950), pfnStrAppend, pData);
}

int string_to_array__1992(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1992VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1992VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__1950_Utils, 33, sizeof(struct__1950), endptr);
    }
    return nRet;
}

int is_array__1992_double_conversion_allowed()
{
    if (pSimarray__1992VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__1992VTable);
    }
    return 0;
}

int is_array__1992_long_convertion_allowed()
{
    if (pSimarray__1992VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__1992VTable);
    }
    return 0;
}

void compare_array__1992(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1992VTable != NULL
        && pSimarray__1992VTable->m_version >= Scv612
        && pSimarray__1992VTable->m_pfnCompare != NULL) {
        if (pSimarray__1992VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1992VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1992VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__1950, 33, sizeof(struct__1950), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1992_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1992VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1992VTable, nRetValue);
    }
    return 0;
}

int array__1992_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__1992VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__1992VTable, nRetValue);
    }
    return 0;
}

int get_array__1992_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__1950_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1992_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__1950_default_value(&((struct__1950*)pValue)[i]);
    return 1;
}

int check_array__1992_string(const char *str, char **endptr)
{
    static array__1992 rTemp;
    return string_to_array__1992(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1992_Utils = {
    array__1992_to_string,
    check_array__1992_string,
    string_to_array__1992,
    is_array__1992_double_conversion_allowed,
    array__1992_to_double,
    is_array__1992_long_convertion_allowed,
    array__1992_to_long,
    compare_array__1992,
    get_array__1992_signature,
    set_array__1992_default_value,
    sizeof(array__1992)
};

/****************************************************************
 ** array__1995 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1995VTable;

int array__1995_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1995VTable != NULL
        && pSimarray__1995VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1995VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__1975_to_string, 30, sizeof(struct__1975), pfnStrAppend, pData);
}

int string_to_array__1995(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1995VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1995VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__1975_Utils, 30, sizeof(struct__1975), endptr);
    }
    return nRet;
}

int is_array__1995_double_conversion_allowed()
{
    if (pSimarray__1995VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__1995VTable);
    }
    return 0;
}

int is_array__1995_long_convertion_allowed()
{
    if (pSimarray__1995VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__1995VTable);
    }
    return 0;
}

void compare_array__1995(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1995VTable != NULL
        && pSimarray__1995VTable->m_version >= Scv612
        && pSimarray__1995VTable->m_pfnCompare != NULL) {
        if (pSimarray__1995VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1995VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1995VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__1975, 30, sizeof(struct__1975), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1995_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1995VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1995VTable, nRetValue);
    }
    return 0;
}

int array__1995_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__1995VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__1995VTable, nRetValue);
    }
    return 0;
}

int get_array__1995_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__1975_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1995_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_struct__1975_default_value(&((struct__1975*)pValue)[i]);
    return 1;
}

int check_array__1995_string(const char *str, char **endptr)
{
    static array__1995 rTemp;
    return string_to_array__1995(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1995_Utils = {
    array__1995_to_string,
    check_array__1995_string,
    string_to_array__1995,
    is_array__1995_double_conversion_allowed,
    array__1995_to_double,
    is_array__1995_long_convertion_allowed,
    array__1995_to_long,
    compare_array__1995,
    get_array__1995_signature,
    set_array__1995_default_value,
    sizeof(array__1995)
};

/****************************************************************
 ** struct__1998 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1998VTable;

static SimFieldUtils struct__1998_fields[] = {
    {"PacketHeaders", offsetof(struct__1998,PacketHeaders), &_Type_array__1995_Utils},
    {"PacketData", offsetof(struct__1998,PacketData), &_Type_array_int_500_Utils},
};

int struct__1998_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1998VTable != NULL
        && pSimstruct__1998VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1998VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1998_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__1998(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1998VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1998VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1998_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__1998_double_conversion_allowed()
{
    if (pSimstruct__1998VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__1998VTable);
    }
    return 0;
}

int is_struct__1998_long_convertion_allowed()
{
    if (pSimstruct__1998VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__1998VTable);
    }
    return 0;
}

void compare_struct__1998(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1998VTable != NULL
        && pSimstruct__1998VTable->m_version >= Scv612
        && pSimstruct__1998VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1998VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1998VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1998VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1998_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1998_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1998VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1998VTable, nRetValue);
    }
    return 0;
}

int struct__1998_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__1998VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__1998VTable, nRetValue);
    }
    return 0;
}

int get_struct__1998_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1998_fields, 2, pfnStrAppend, pData);
}

int set_struct__1998_default_value(void *pValue)
{
    set_array__1995_default_value(&(((struct__1998*)pValue)->PacketHeaders));
    set_array_int_500_default_value(&(((struct__1998*)pValue)->PacketData));
    return 1;
}

int check_struct__1998_string(const char *str, char **endptr)
{
    static struct__1998 rTemp;
    return string_to_struct__1998(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1998_Utils = {
    struct__1998_to_string,
    check_struct__1998_string,
    string_to_struct__1998,
    is_struct__1998_double_conversion_allowed,
    struct__1998_to_double,
    is_struct__1998_long_convertion_allowed,
    struct__1998_to_long,
    compare_struct__1998,
    get_struct__1998_signature,
    set_struct__1998_default_value,
    sizeof(struct__1998)
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
 ** array_int_99_33 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_99_33VTable;

int array_int_99_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_99_33VTable != NULL
        && pSimarray_int_99_33VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_99_33VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_99_to_string, 33, sizeof(array_int_99), pfnStrAppend, pData);
}

int string_to_array_int_99_33(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_99_33VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_99_33VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_99_Utils, 33, sizeof(array_int_99), endptr);
    }
    return nRet;
}

int is_array_int_99_33_double_conversion_allowed()
{
    if (pSimarray_int_99_33VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_99_33VTable);
    }
    return 0;
}

int is_array_int_99_33_long_convertion_allowed()
{
    if (pSimarray_int_99_33VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_99_33VTable);
    }
    return 0;
}

void compare_array_int_99_33(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_99_33VTable != NULL
        && pSimarray_int_99_33VTable->m_version >= Scv612
        && pSimarray_int_99_33VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_99_33VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_99_33VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_99_33VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_99, 33, sizeof(array_int_99), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_99_33_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_99_33VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_99_33VTable, nRetValue);
    }
    return 0;
}

int array_int_99_33_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_99_33VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_99_33VTable, nRetValue);
    }
    return 0;
}

int get_array_int_99_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_99_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_99_33_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_array_int_99_default_value(&((array_int_99*)pValue)[i]);
    return 1;
}

int check_array_int_99_33_string(const char *str, char **endptr)
{
    static array_int_99_33 rTemp;
    return string_to_array_int_99_33(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_99_33_Utils = {
    array_int_99_33_to_string,
    check_array_int_99_33_string,
    string_to_array_int_99_33,
    is_array_int_99_33_double_conversion_allowed,
    array_int_99_33_to_double,
    is_array_int_99_33_long_convertion_allowed,
    array_int_99_33_to_long,
    compare_array_int_99_33,
    get_array_int_99_33_signature,
    set_array_int_99_33_default_value,
    sizeof(array_int_99_33)
};

/****************************************************************
 ** array_int_3_33_231 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_3_33_231VTable;

int array_int_3_33_231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_3_33_231VTable != NULL
        && pSimarray_int_3_33_231VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_3_33_231VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_3_33_to_string, 231, sizeof(array_int_3_33), pfnStrAppend, pData);
}

int string_to_array_int_3_33_231(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_3_33_231VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_3_33_231VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_3_33_Utils, 231, sizeof(array_int_3_33), endptr);
    }
    return nRet;
}

int is_array_int_3_33_231_double_conversion_allowed()
{
    if (pSimarray_int_3_33_231VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_3_33_231VTable);
    }
    return 0;
}

int is_array_int_3_33_231_long_convertion_allowed()
{
    if (pSimarray_int_3_33_231VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_3_33_231VTable);
    }
    return 0;
}

void compare_array_int_3_33_231(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_3_33_231VTable != NULL
        && pSimarray_int_3_33_231VTable->m_version >= Scv612
        && pSimarray_int_3_33_231VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_3_33_231VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_3_33_231VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_3_33_231VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_3_33, 231, sizeof(array_int_3_33), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_3_33_231_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_3_33_231VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_3_33_231VTable, nRetValue);
    }
    return 0;
}

int array_int_3_33_231_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_3_33_231VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_3_33_231VTable, nRetValue);
    }
    return 0;
}

int get_array_int_3_33_231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 231; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_3_33_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_3_33_231_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 231; i++)
        set_array_int_3_33_default_value(&((array_int_3_33*)pValue)[i]);
    return 1;
}

int check_array_int_3_33_231_string(const char *str, char **endptr)
{
    static array_int_3_33_231 rTemp;
    return string_to_array_int_3_33_231(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_3_33_231_Utils = {
    array_int_3_33_231_to_string,
    check_array_int_3_33_231_string,
    string_to_array_int_3_33_231,
    is_array_int_3_33_231_double_conversion_allowed,
    array_int_3_33_231_to_double,
    is_array_int_3_33_231_long_convertion_allowed,
    array_int_3_33_231_to_long,
    compare_array_int_3_33_231,
    get_array_int_3_33_231_signature,
    set_array_int_3_33_231_default_value,
    sizeof(array_int_3_33_231)
};

/****************************************************************
 ** array_int_396 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_396VTable;

int array_int_396_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_396VTable != NULL
        && pSimarray_int_396VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_396VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 396, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_396(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_396VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_396VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 396, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_396_double_conversion_allowed()
{
    if (pSimarray_int_396VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_396VTable);
    }
    return 0;
}

int is_array_int_396_long_convertion_allowed()
{
    if (pSimarray_int_396VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_396VTable);
    }
    return 0;
}

void compare_array_int_396(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_396VTable != NULL
        && pSimarray_int_396VTable->m_version >= Scv612
        && pSimarray_int_396VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_396VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_396VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_396VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 396, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_396_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_396VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_396VTable, nRetValue);
    }
    return 0;
}

int array_int_396_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_396VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_396VTable, nRetValue);
    }
    return 0;
}

int get_array_int_396_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 396; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_396_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 396; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_396_string(const char *str, char **endptr)
{
    static array_int_396 rTemp;
    return string_to_array_int_396(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_396_Utils = {
    array_int_396_to_string,
    check_array_int_396_string,
    string_to_array_int_396,
    is_array_int_396_double_conversion_allowed,
    array_int_396_to_double,
    is_array_int_396_long_convertion_allowed,
    array_int_396_to_long,
    compare_array_int_396,
    get_array_int_396_signature,
    set_array_int_396_default_value,
    sizeof(array_int_396)
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
 ** array_int_104 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_104VTable;

int array_int_104_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_104VTable != NULL
        && pSimarray_int_104VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_104VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 104, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_104(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_104VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_104VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 104, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_104_double_conversion_allowed()
{
    if (pSimarray_int_104VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_104VTable);
    }
    return 0;
}

int is_array_int_104_long_convertion_allowed()
{
    if (pSimarray_int_104VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_104VTable);
    }
    return 0;
}

void compare_array_int_104(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_104VTable != NULL
        && pSimarray_int_104VTable->m_version >= Scv612
        && pSimarray_int_104VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_104VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_104VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_104VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 104, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_104_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_104VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_104VTable, nRetValue);
    }
    return 0;
}

int array_int_104_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_104VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_104VTable, nRetValue);
    }
    return 0;
}

int get_array_int_104_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 104; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_104_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 104; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_104_string(const char *str, char **endptr)
{
    static array_int_104 rTemp;
    return string_to_array_int_104(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_104_Utils = {
    array_int_104_to_string,
    check_array_int_104_string,
    string_to_array_int_104,
    is_array_int_104_double_conversion_allowed,
    array_int_104_to_double,
    is_array_int_104_long_convertion_allowed,
    array_int_104_to_long,
    compare_array_int_104,
    get_array_int_104_signature,
    set_array_int_104_default_value,
    sizeof(array_int_104)
};

/****************************************************************
 ** array__2036 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2036VTable;

int array__2036_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2036VTable != NULL
        && pSimarray__2036VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2036VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__1950_to_string, 1, sizeof(struct__1950), pfnStrAppend, pData);
}

int string_to_array__2036(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2036VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2036VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__1950_Utils, 1, sizeof(struct__1950), endptr);
    }
    return nRet;
}

int is_array__2036_double_conversion_allowed()
{
    if (pSimarray__2036VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__2036VTable);
    }
    return 0;
}

int is_array__2036_long_convertion_allowed()
{
    if (pSimarray__2036VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__2036VTable);
    }
    return 0;
}

void compare_array__2036(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2036VTable != NULL
        && pSimarray__2036VTable->m_version >= Scv612
        && pSimarray__2036VTable->m_pfnCompare != NULL) {
        if (pSimarray__2036VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2036VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2036VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__1950, 1, sizeof(struct__1950), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2036_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2036VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2036VTable, nRetValue);
    }
    return 0;
}

int array__2036_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__2036VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__2036VTable, nRetValue);
    }
    return 0;
}

int get_array__2036_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__1950_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2036_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__1950_default_value(&((struct__1950*)pValue)[i]);
    return 1;
}

int check_array__2036_string(const char *str, char **endptr)
{
    static array__2036 rTemp;
    return string_to_array__2036(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2036_Utils = {
    array__2036_to_string,
    check_array__2036_string,
    string_to_array__2036,
    is_array__2036_double_conversion_allowed,
    array__2036_to_double,
    is_array__2036_long_convertion_allowed,
    array__2036_to_long,
    compare_array__2036,
    get_array__2036_signature,
    set_array__2036_default_value,
    sizeof(array__2036)
};

/****************************************************************
 ** array__2039 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2039VTable;

int array__2039_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2039VTable != NULL
        && pSimarray__2039VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2039VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array__1939_to_string, 33, sizeof(array__1939), pfnStrAppend, pData);
}

int string_to_array__2039(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2039VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2039VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array__1939_Utils, 33, sizeof(array__1939), endptr);
    }
    return nRet;
}

int is_array__2039_double_conversion_allowed()
{
    if (pSimarray__2039VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__2039VTable);
    }
    return 0;
}

int is_array__2039_long_convertion_allowed()
{
    if (pSimarray__2039VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__2039VTable);
    }
    return 0;
}

void compare_array__2039(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2039VTable != NULL
        && pSimarray__2039VTable->m_version >= Scv612
        && pSimarray__2039VTable->m_pfnCompare != NULL) {
        if (pSimarray__2039VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2039VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2039VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array__1939, 33, sizeof(array__1939), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2039_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2039VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2039VTable, nRetValue);
    }
    return 0;
}

int array__2039_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__2039VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__2039VTable, nRetValue);
    }
    return 0;
}

int get_array__2039_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array__1939_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2039_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_array__1939_default_value(&((array__1939*)pValue)[i]);
    return 1;
}

int check_array__2039_string(const char *str, char **endptr)
{
    static array__2039 rTemp;
    return string_to_array__2039(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2039_Utils = {
    array__2039_to_string,
    check_array__2039_string,
    string_to_array__2039,
    is_array__2039_double_conversion_allowed,
    array__2039_to_double,
    is_array__2039_long_convertion_allowed,
    array__2039_to_long,
    compare_array__2039,
    get_array__2039_signature,
    set_array__2039_default_value,
    sizeof(array__2039)
};

/****************************************************************
 ** array__2042 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2042VTable;

int array__2042_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2042VTable != NULL
        && pSimarray__2042VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2042VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, Q_SCALE_to_string, 33, sizeof(Q_SCALE), pfnStrAppend, pData);
}

int string_to_array__2042(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2042VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2042VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_Q_SCALE_Utils, 33, sizeof(Q_SCALE), endptr);
    }
    return nRet;
}

int is_array__2042_double_conversion_allowed()
{
    if (pSimarray__2042VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__2042VTable);
    }
    return 0;
}

int is_array__2042_long_convertion_allowed()
{
    if (pSimarray__2042VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__2042VTable);
    }
    return 0;
}

void compare_array__2042(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2042VTable != NULL
        && pSimarray__2042VTable->m_version >= Scv612
        && pSimarray__2042VTable->m_pfnCompare != NULL) {
        if (pSimarray__2042VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2042VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2042VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int array__2042_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2042VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2042VTable, nRetValue);
    }
    return 0;
}

int array__2042_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__2042VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__2042VTable, nRetValue);
    }
    return 0;
}

int get_array__2042_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_array__2042_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_Q_SCALE_default_value(&((Q_SCALE*)pValue)[i]);
    return 1;
}

int check_array__2042_string(const char *str, char **endptr)
{
    static array__2042 rTemp;
    return string_to_array__2042(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2042_Utils = {
    array__2042_to_string,
    check_array__2042_string,
    string_to_array__2042,
    is_array__2042_double_conversion_allowed,
    array__2042_to_double,
    is_array__2042_long_convertion_allowed,
    array__2042_to_long,
    compare_array__2042,
    get_array__2042_signature,
    set_array__2042_default_value,
    sizeof(array__2042)
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
 ** P021_section_enum_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_section_enum_T_TMVTable;

int P021_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_section_enum_T_TMVTable != NULL
        && pSimP021_section_enum_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_section_enum_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1932_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_section_enum_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_section_enum_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_section_enum_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1932(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_section_enum_T_TM_double_conversion_allowed()
{
    if (pSimP021_section_enum_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_section_enum_T_TMVTable);
    }
    return is_struct__1932_double_conversion_allowed();
}

int is_P021_section_enum_T_TM_long_convertion_allowed()
{
    if (pSimP021_section_enum_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_section_enum_T_TMVTable);
    }
    return is_struct__1932_long_convertion_allowed();
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
        compare_struct__1932(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_section_enum_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_section_enum_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_section_enum_T_TMVTable, nRetValue);
    }
    return struct__1932_to_double(pValue, nRetValue);
}

int P021_section_enum_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_section_enum_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_section_enum_T_TMVTable, nRetValue);
    }
    return struct__1932_to_long(pValue, nRetValue);
}

int get_P021_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1932_signature(pfnStrAppend, pData);
}

int set_P021_section_enum_T_TM_default_value(void *pValue)
{
    return set_struct__1932_default_value(pValue);
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
 ** P021_sections_array_flat_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_sections_array_flat_T_TMVTable;

int P021_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_sections_array_flat_T_TMVTable != NULL
        && pSimP021_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_sections_array_flat_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_99_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_sections_array_flat_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_sections_array_flat_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_99(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_sections_array_flat_T_TM_double_conversion_allowed()
{
    if (pSimP021_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_sections_array_flat_T_TMVTable);
    }
    return is_array_int_99_double_conversion_allowed();
}

int is_P021_sections_array_flat_T_TM_long_convertion_allowed()
{
    if (pSimP021_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_sections_array_flat_T_TMVTable);
    }
    return is_array_int_99_long_convertion_allowed();
}

void compare_P021_sections_array_flat_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_sections_array_flat_T_TMVTable != NULL
        && pSimP021_sections_array_flat_T_TMVTable->m_version >= Scv612
        && pSimP021_sections_array_flat_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_sections_array_flat_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_sections_array_flat_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_sections_array_flat_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_99(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_sections_array_flat_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_sections_array_flat_T_TMVTable, nRetValue);
    }
    return array_int_99_to_double(pValue, nRetValue);
}

int P021_sections_array_flat_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_sections_array_flat_T_TMVTable, nRetValue);
    }
    return array_int_99_to_long(pValue, nRetValue);
}

int get_P021_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_99_signature(pfnStrAppend, pData);
}

int set_P021_sections_array_flat_T_TM_default_value(void *pValue)
{
    return set_array_int_99_default_value(pValue);
}

int check_P021_sections_array_flat_T_TM_string(const char *str, char **endptr)
{
    static P021_sections_array_flat_T_TM rTemp;
    return string_to_P021_sections_array_flat_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_sections_array_flat_T_TM_Utils = {
    P021_sections_array_flat_T_TM_to_string,
    check_P021_sections_array_flat_T_TM_string,
    string_to_P021_sections_array_flat_T_TM,
    is_P021_sections_array_flat_T_TM_double_conversion_allowed,
    P021_sections_array_flat_T_TM_to_double,
    is_P021_sections_array_flat_T_TM_long_convertion_allowed,
    P021_sections_array_flat_T_TM_to_long,
    compare_P021_sections_array_flat_T_TM,
    get_P021_sections_array_flat_T_TM_signature,
    set_P021_sections_array_flat_T_TM_default_value,
    sizeof(P021_sections_array_flat_T_TM)
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
    return array__1939_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_OBU_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_OBU_sectionlist_enum_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_OBU_sectionlist_enum_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__1939(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_OBU_sectionlist_enum_T_TM_double_conversion_allowed()
{
    if (pSimP021_OBU_sectionlist_enum_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_OBU_sectionlist_enum_T_TMVTable);
    }
    return is_array__1939_double_conversion_allowed();
}

int is_P021_OBU_sectionlist_enum_T_TM_long_convertion_allowed()
{
    if (pSimP021_OBU_sectionlist_enum_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_OBU_sectionlist_enum_T_TMVTable);
    }
    return is_array__1939_long_convertion_allowed();
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
        compare_array__1939(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_OBU_sectionlist_enum_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_OBU_sectionlist_enum_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_OBU_sectionlist_enum_T_TMVTable, nRetValue);
    }
    return array__1939_to_double(pValue, nRetValue);
}

int P021_OBU_sectionlist_enum_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_OBU_sectionlist_enum_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_OBU_sectionlist_enum_T_TMVTable, nRetValue);
    }
    return array__1939_to_long(pValue, nRetValue);
}

int get_P021_OBU_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__1939_signature(pfnStrAppend, pData);
}

int set_P021_OBU_sectionlist_enum_T_TM_default_value(void *pValue)
{
    return set_array__1939_default_value(pValue);
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
    return struct__1942_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_OBU_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_OBU_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_OBU_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1942(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_OBU_T_TM_double_conversion_allowed()
{
    if (pSimP021_OBU_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_OBU_T_TMVTable);
    }
    return is_struct__1942_double_conversion_allowed();
}

int is_P021_OBU_T_TM_long_convertion_allowed()
{
    if (pSimP021_OBU_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_OBU_T_TMVTable);
    }
    return is_struct__1942_long_convertion_allowed();
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
        compare_struct__1942(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_OBU_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_OBU_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_OBU_T_TMVTable, nRetValue);
    }
    return struct__1942_to_double(pValue, nRetValue);
}

int P021_OBU_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_OBU_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_OBU_T_TMVTable, nRetValue);
    }
    return struct__1942_to_long(pValue, nRetValue);
}

int get_P021_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1942_signature(pfnStrAppend, pData);
}

int set_P021_OBU_T_TM_default_value(void *pValue)
{
    return set_struct__1942_default_value(pValue);
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
 ** Array05_TM 
 ****************************************************************/

struct SimTypeVTable *pSimArray05_TMVTable;

int Array05_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimArray05_TMVTable != NULL
        && pSimArray05_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimArray05_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_5_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Array05_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimArray05_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimArray05_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_5(str, pValue, endptr);
    }
    return nRet;
}

int is_Array05_TM_double_conversion_allowed()
{
    if (pSimArray05_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimArray05_TMVTable);
    }
    return is_array_int_5_double_conversion_allowed();
}

int is_Array05_TM_long_convertion_allowed()
{
    if (pSimArray05_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimArray05_TMVTable);
    }
    return is_array_int_5_long_convertion_allowed();
}

void compare_Array05_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimArray05_TMVTable != NULL
        && pSimArray05_TMVTable->m_version >= Scv612
        && pSimArray05_TMVTable->m_pfnCompare != NULL) {
        if (pSimArray05_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimArray05_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimArray05_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_5(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Array05_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimArray05_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimArray05_TMVTable, nRetValue);
    }
    return array_int_5_to_double(pValue, nRetValue);
}

int Array05_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimArray05_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimArray05_TMVTable, nRetValue);
    }
    return array_int_5_to_long(pValue, nRetValue);
}

int get_Array05_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_5_signature(pfnStrAppend, pData);
}

int set_Array05_TM_default_value(void *pValue)
{
    return set_array_int_5_default_value(pValue);
}

int check_Array05_TM_string(const char *str, char **endptr)
{
    static Array05_TM rTemp;
    return string_to_Array05_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_Array05_TM_Utils = {
    Array05_TM_to_string,
    check_Array05_TM_string,
    string_to_Array05_TM,
    is_Array05_TM_double_conversion_allowed,
    Array05_TM_to_double,
    is_Array05_TM_long_convertion_allowed,
    Array05_TM_to_long,
    compare_Array05_TM,
    get_Array05_TM_signature,
    set_Array05_TM_default_value,
    sizeof(Array05_TM)
};

/****************************************************************
 ** P021_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_trackside_int_T_TMVTable;

int P021_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_trackside_int_T_TMVTable != NULL
        && pSimP021_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1959_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1959(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_trackside_int_T_TMVTable);
    }
    return is_struct__1959_double_conversion_allowed();
}

int is_P021_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_trackside_int_T_TMVTable);
    }
    return is_struct__1959_long_convertion_allowed();
}

void compare_P021_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_trackside_int_T_TMVTable != NULL
        && pSimP021_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimP021_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1959(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__1959_to_double(pValue, nRetValue);
}

int P021_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__1959_to_long(pValue, nRetValue);
}

int get_P021_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1959_signature(pfnStrAppend, pData);
}

int set_P021_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__1959_default_value(pValue);
}

int check_P021_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static P021_trackside_int_T_TM rTemp;
    return string_to_P021_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_trackside_int_T_TM_Utils = {
    P021_trackside_int_T_TM_to_string,
    check_P021_trackside_int_T_TM_string,
    string_to_P021_trackside_int_T_TM,
    is_P021_trackside_int_T_TM_double_conversion_allowed,
    P021_trackside_int_T_TM_to_double,
    is_P021_trackside_int_T_TM_long_convertion_allowed,
    P021_trackside_int_T_TM_to_long,
    compare_P021_trackside_int_T_TM,
    get_P021_trackside_int_T_TM_signature,
    set_P021_trackside_int_T_TM_default_value,
    sizeof(P021_trackside_int_T_TM)
};

/****************************************************************
 ** P021_trackide_sectionlist_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_trackide_sectionlist_T_TMVTable;

int P021_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL
        && pSimP021_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__1956_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__1956(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_trackide_sectionlist_T_TMVTable);
    }
    return is_array__1956_double_conversion_allowed();
}

int is_P021_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_trackide_sectionlist_T_TMVTable);
    }
    return is_array__1956_long_convertion_allowed();
}

void compare_P021_trackide_sectionlist_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL
        && pSimP021_trackide_sectionlist_T_TMVTable->m_version >= Scv612
        && pSimP021_trackide_sectionlist_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_trackide_sectionlist_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_trackide_sectionlist_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_trackide_sectionlist_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__1956(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__1956_to_double(pValue, nRetValue);
}

int P021_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__1956_to_long(pValue, nRetValue);
}

int get_P021_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__1956_signature(pfnStrAppend, pData);
}

int set_P021_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_array__1956_default_value(pValue);
}

int check_P021_trackide_sectionlist_T_TM_string(const char *str, char **endptr)
{
    static P021_trackide_sectionlist_T_TM rTemp;
    return string_to_P021_trackide_sectionlist_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_trackide_sectionlist_T_TM_Utils = {
    P021_trackide_sectionlist_T_TM_to_string,
    check_P021_trackide_sectionlist_T_TM_string,
    string_to_P021_trackide_sectionlist_T_TM,
    is_P021_trackide_sectionlist_T_TM_double_conversion_allowed,
    P021_trackide_sectionlist_T_TM_to_double,
    is_P021_trackide_sectionlist_T_TM_long_convertion_allowed,
    P021_trackide_sectionlist_T_TM_to_long,
    compare_P021_trackide_sectionlist_T_TM,
    get_P021_trackide_sectionlist_T_TM_signature,
    set_P021_trackide_sectionlist_T_TM_default_value,
    sizeof(P021_trackide_sectionlist_T_TM)
};

/****************************************************************
 ** P021_section_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_section_int_T_TMVTable;

int P021_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_section_int_T_TMVTable != NULL
        && pSimP021_section_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_section_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1950_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1950(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_section_int_T_TM_double_conversion_allowed()
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_section_int_T_TMVTable);
    }
    return is_struct__1950_double_conversion_allowed();
}

int is_P021_section_int_T_TM_long_convertion_allowed()
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_section_int_T_TMVTable);
    }
    return is_struct__1950_long_convertion_allowed();
}

void compare_P021_section_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_section_int_T_TMVTable != NULL
        && pSimP021_section_int_T_TMVTable->m_version >= Scv612
        && pSimP021_section_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_section_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_section_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_section_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1950(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_section_int_T_TMVTable, nRetValue);
    }
    return struct__1950_to_double(pValue, nRetValue);
}

int P021_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_section_int_T_TMVTable, nRetValue);
    }
    return struct__1950_to_long(pValue, nRetValue);
}

int get_P021_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1950_signature(pfnStrAppend, pData);
}

int set_P021_section_int_T_TM_default_value(void *pValue)
{
    return set_struct__1950_default_value(pValue);
}

int check_P021_section_int_T_TM_string(const char *str, char **endptr)
{
    static P021_section_int_T_TM rTemp;
    return string_to_P021_section_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_section_int_T_TM_Utils = {
    P021_section_int_T_TM_to_string,
    check_P021_section_int_T_TM_string,
    string_to_P021_section_int_T_TM,
    is_P021_section_int_T_TM_double_conversion_allowed,
    P021_section_int_T_TM_to_double,
    is_P021_section_int_T_TM_long_convertion_allowed,
    P021_section_int_T_TM_to_long,
    compare_P021_section_int_T_TM,
    get_P021_section_int_T_TM_signature,
    set_P021_section_int_T_TM_default_value,
    sizeof(P021_section_int_T_TM)
};

/****************************************************************
 ** P021_OBU_sectionlist_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_OBU_sectionlist_array_T_TMVTable;

int P021_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP021_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_3_33_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_OBU_sectionlist_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_OBU_sectionlist_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_3_33(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_OBU_sectionlist_array_T_TM_double_conversion_allowed()
{
    if (pSimP021_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_OBU_sectionlist_array_T_TMVTable);
    }
    return is_array_int_3_33_double_conversion_allowed();
}

int is_P021_OBU_sectionlist_array_T_TM_long_convertion_allowed()
{
    if (pSimP021_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_OBU_sectionlist_array_T_TMVTable);
    }
    return is_array_int_3_33_long_convertion_allowed();
}

void compare_P021_OBU_sectionlist_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP021_OBU_sectionlist_array_T_TMVTable->m_version >= Scv612
        && pSimP021_OBU_sectionlist_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_OBU_sectionlist_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_3_33(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return array_int_3_33_to_double(pValue, nRetValue);
}

int P021_OBU_sectionlist_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return array_int_3_33_to_long(pValue, nRetValue);
}

int get_P021_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_3_33_signature(pfnStrAppend, pData);
}

int set_P021_OBU_sectionlist_array_T_TM_default_value(void *pValue)
{
    return set_array_int_3_33_default_value(pValue);
}

int check_P021_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr)
{
    static P021_OBU_sectionlist_array_T_TM rTemp;
    return string_to_P021_OBU_sectionlist_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_OBU_sectionlist_array_T_TM_Utils = {
    P021_OBU_sectionlist_array_T_TM_to_string,
    check_P021_OBU_sectionlist_array_T_TM_string,
    string_to_P021_OBU_sectionlist_array_T_TM,
    is_P021_OBU_sectionlist_array_T_TM_double_conversion_allowed,
    P021_OBU_sectionlist_array_T_TM_to_double,
    is_P021_OBU_sectionlist_array_T_TM_long_convertion_allowed,
    P021_OBU_sectionlist_array_T_TM_to_long,
    compare_P021_OBU_sectionlist_array_T_TM,
    get_P021_OBU_sectionlist_array_T_TM_signature,
    set_P021_OBU_sectionlist_array_T_TM_default_value,
    sizeof(P021_OBU_sectionlist_array_T_TM)
};

/****************************************************************
 ** P021_section_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_section_array_T_TMVTable;

int P021_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_section_array_T_TMVTable != NULL
        && pSimP021_section_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_section_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_3_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_section_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_section_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_section_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_3(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_section_array_T_TM_double_conversion_allowed()
{
    if (pSimP021_section_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_section_array_T_TMVTable);
    }
    return is_array_int_3_double_conversion_allowed();
}

int is_P021_section_array_T_TM_long_convertion_allowed()
{
    if (pSimP021_section_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_section_array_T_TMVTable);
    }
    return is_array_int_3_long_convertion_allowed();
}

void compare_P021_section_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_section_array_T_TMVTable != NULL
        && pSimP021_section_array_T_TMVTable->m_version >= Scv612
        && pSimP021_section_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_section_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_section_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_section_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_3(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_section_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_section_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_section_array_T_TMVTable, nRetValue);
    }
    return array_int_3_to_double(pValue, nRetValue);
}

int P021_section_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_section_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_section_array_T_TMVTable, nRetValue);
    }
    return array_int_3_to_long(pValue, nRetValue);
}

int get_P021_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_3_signature(pfnStrAppend, pData);
}

int set_P021_section_array_T_TM_default_value(void *pValue)
{
    return set_array_int_3_default_value(pValue);
}

int check_P021_section_array_T_TM_string(const char *str, char **endptr)
{
    static P021_section_array_T_TM rTemp;
    return string_to_P021_section_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_section_array_T_TM_Utils = {
    P021_section_array_T_TM_to_string,
    check_P021_section_array_T_TM_string,
    string_to_P021_section_array_T_TM,
    is_P021_section_array_T_TM_double_conversion_allowed,
    P021_section_array_T_TM_to_double,
    is_P021_section_array_T_TM_long_convertion_allowed,
    P021_section_array_T_TM_to_long,
    compare_P021_section_array_T_TM,
    get_P021_section_array_T_TM_signature,
    set_P021_section_array_T_TM_default_value,
    sizeof(P021_section_array_T_TM)
};

/****************************************************************
 ** P021_OBU_sectionlist_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_OBU_sectionlist_int_T_TMVTable;

int P021_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP021_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__1992_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__1992(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__1992_double_conversion_allowed();
}

int is_P021_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__1992_long_convertion_allowed();
}

void compare_P021_OBU_sectionlist_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP021_OBU_sectionlist_int_T_TMVTable->m_version >= Scv612
        && pSimP021_OBU_sectionlist_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP021_OBU_sectionlist_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP021_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP021_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__1992(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__1992_to_double(pValue, nRetValue);
}

int P021_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__1992_to_long(pValue, nRetValue);
}

int get_P021_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__1992_signature(pfnStrAppend, pData);
}

int set_P021_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_array__1992_default_value(pValue);
}

int check_P021_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr)
{
    static P021_OBU_sectionlist_int_T_TM rTemp;
    return string_to_P021_OBU_sectionlist_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P021_OBU_sectionlist_int_T_TM_Utils = {
    P021_OBU_sectionlist_int_T_TM_to_string,
    check_P021_OBU_sectionlist_int_T_TM_string,
    string_to_P021_OBU_sectionlist_int_T_TM,
    is_P021_OBU_sectionlist_int_T_TM_double_conversion_allowed,
    P021_OBU_sectionlist_int_T_TM_to_double,
    is_P021_OBU_sectionlist_int_T_TM_long_convertion_allowed,
    P021_OBU_sectionlist_int_T_TM_to_long,
    compare_P021_OBU_sectionlist_int_T_TM,
    get_P021_OBU_sectionlist_int_T_TM_signature,
    set_P021_OBU_sectionlist_int_T_TM_default_value,
    sizeof(P021_OBU_sectionlist_int_T_TM)
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
 ** MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimMetadataElement_T_Common_Types_PkgVTable;

int MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1975_to_string(pValue, pfnStrAppend, pData);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1975(str, pValue, endptr);
    }
    return nRet;
}

int is_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__1975_double_conversion_allowed();
}

int is_MetadataElement_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__1975_long_convertion_allowed();
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
        compare_struct__1975(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__1975_to_double(pValue, nRetValue);
}

int MetadataElement_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__1975_to_long(pValue, nRetValue);
}

int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1975_signature(pfnStrAppend, pData);
}

int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__1975_default_value(pValue);
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
    return array__1995_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__1995(str, pValue, endptr);
    }
    return nRet;
}

int is_Metadata_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__1995_double_conversion_allowed();
}

int is_Metadata_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__1995_long_convertion_allowed();
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
        compare_array__1995(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__1995_to_double(pValue, nRetValue);
}

int Metadata_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__1995_to_long(pValue, nRetValue);
}

int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__1995_signature(pfnStrAppend, pData);
}

int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_array__1995_default_value(pValue);
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
 ** CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimCompressedPackets_T_Common_Types_PkgVTable;

int CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1998_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1998(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__1998_double_conversion_allowed();
}

int is_CompressedPackets_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__1998_long_convertion_allowed();
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
        compare_struct__1998(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__1998_to_double(pValue, nRetValue);
}

int CompressedPackets_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__1998_to_long(pValue, nRetValue);
}

int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1998_signature(pfnStrAppend, pData);
}

int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__1998_default_value(pValue);
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
 ** Gradient_section_t_TrackAtlasTypes 
 ****************************************************************/

struct SimTypeVTable *pSimGradient_section_t_TrackAtlasTypesVTable;

int Gradient_section_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimGradient_section_t_TrackAtlasTypesVTable != NULL
        && pSimGradient_section_t_TrackAtlasTypesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimGradient_section_t_TrackAtlasTypesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1921_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Gradient_section_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimGradient_section_t_TrackAtlasTypesVTable != NULL) {
        nRet=string_to_VTable(str, pSimGradient_section_t_TrackAtlasTypesVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1921(str, pValue, endptr);
    }
    return nRet;
}

int is_Gradient_section_t_TrackAtlasTypes_double_conversion_allowed()
{
    if (pSimGradient_section_t_TrackAtlasTypesVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimGradient_section_t_TrackAtlasTypesVTable);
    }
    return is_struct__1921_double_conversion_allowed();
}

int is_Gradient_section_t_TrackAtlasTypes_long_convertion_allowed()
{
    if (pSimGradient_section_t_TrackAtlasTypesVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimGradient_section_t_TrackAtlasTypesVTable);
    }
    return is_struct__1921_long_convertion_allowed();
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
        compare_struct__1921(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Gradient_section_t_TrackAtlasTypes_to_double(const void *pValue, double *nRetValue)
{
    if (pSimGradient_section_t_TrackAtlasTypesVTable != NULL) {
        return VTable_to_double(pValue, pSimGradient_section_t_TrackAtlasTypesVTable, nRetValue);
    }
    return struct__1921_to_double(pValue, nRetValue);
}

int Gradient_section_t_TrackAtlasTypes_to_long(const void *pValue, long *nRetValue)
{
    if (pSimGradient_section_t_TrackAtlasTypesVTable != NULL) {
        return VTable_to_long(pValue, pSimGradient_section_t_TrackAtlasTypesVTable, nRetValue);
    }
    return struct__1921_to_long(pValue, nRetValue);
}

int get_Gradient_section_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1921_signature(pfnStrAppend, pData);
}

int set_Gradient_section_t_TrackAtlasTypes_default_value(void *pValue)
{
    return set_struct__1921_default_value(pValue);
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
    return array__1929_to_string(pValue, pfnStrAppend, pData);
}

int string_to_GradientProfile_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimGradientProfile_t_TrackAtlasTypesVTable != NULL) {
        nRet=string_to_VTable(str, pSimGradientProfile_t_TrackAtlasTypesVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__1929(str, pValue, endptr);
    }
    return nRet;
}

int is_GradientProfile_t_TrackAtlasTypes_double_conversion_allowed()
{
    if (pSimGradientProfile_t_TrackAtlasTypesVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimGradientProfile_t_TrackAtlasTypesVTable);
    }
    return is_array__1929_double_conversion_allowed();
}

int is_GradientProfile_t_TrackAtlasTypes_long_convertion_allowed()
{
    if (pSimGradientProfile_t_TrackAtlasTypesVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimGradientProfile_t_TrackAtlasTypesVTable);
    }
    return is_array__1929_long_convertion_allowed();
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
        compare_array__1929(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int GradientProfile_t_TrackAtlasTypes_to_double(const void *pValue, double *nRetValue)
{
    if (pSimGradientProfile_t_TrackAtlasTypesVTable != NULL) {
        return VTable_to_double(pValue, pSimGradientProfile_t_TrackAtlasTypesVTable, nRetValue);
    }
    return array__1929_to_double(pValue, nRetValue);
}

int GradientProfile_t_TrackAtlasTypes_to_long(const void *pValue, long *nRetValue)
{
    if (pSimGradientProfile_t_TrackAtlasTypesVTable != NULL) {
        return VTable_to_long(pValue, pSimGradientProfile_t_TrackAtlasTypesVTable, nRetValue);
    }
    return array__1929_to_long(pValue, nRetValue);
}

int get_GradientProfile_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__1929_signature(pfnStrAppend, pData);
}

int set_GradientProfile_t_TrackAtlasTypes_default_value(void *pValue)
{
    return set_array__1929_default_value(pValue);
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
