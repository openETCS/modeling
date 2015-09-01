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
 ** struct__2306 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2306VTable;

static SimFieldUtils struct__2306_fields[] = {
    {"NC_DIFF", offsetof(struct__2306,NC_DIFF), &_Type_kcg_int_Utils},
    {"V_DIFF", offsetof(struct__2306,V_DIFF), &_Type_kcg_int_Utils},
};

int struct__2306_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2306VTable != NULL
        && pSimstruct__2306VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2306VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2306_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__2306(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2306VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2306VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2306_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__2306_double_conversion_allowed()
{
    if (pSimstruct__2306VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2306VTable);
    }
    return 0;
}

int is_struct__2306_long_convertion_allowed()
{
    if (pSimstruct__2306VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2306VTable);
    }
    return 0;
}

void compare_struct__2306(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2306VTable != NULL
        && pSimstruct__2306VTable->m_version >= Scv612
        && pSimstruct__2306VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2306VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2306VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2306VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2306_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2306_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2306VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2306VTable, nRetValue);
    }
    return 0;
}

int struct__2306_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2306VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2306VTable, nRetValue);
    }
    return 0;
}

int get_struct__2306_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2306_fields, 2, pfnStrAppend, pData);
}

int set_struct__2306_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__2306*)pValue)->NC_DIFF));
    set_kcg_int_default_value(&(((struct__2306*)pValue)->V_DIFF));
    return 1;
}

int check_struct__2306_string(const char *str, char **endptr)
{
    static struct__2306 rTemp;
    return string_to_struct__2306(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2306_Utils = {
    struct__2306_to_string,
    check_struct__2306_string,
    string_to_struct__2306,
    is_struct__2306_double_conversion_allowed,
    struct__2306_to_double,
    is_struct__2306_long_convertion_allowed,
    struct__2306_to_long,
    compare_struct__2306,
    get_struct__2306_signature,
    set_struct__2306_default_value,
    sizeof(struct__2306)
};

/****************************************************************
 ** array__2311 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2311VTable;

int array__2311_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2311VTable != NULL
        && pSimarray__2311VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2311VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__2306_to_string, 32, sizeof(struct__2306), pfnStrAppend, pData);
}

int string_to_array__2311(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2311VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2311VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__2306_Utils, 32, sizeof(struct__2306), endptr);
    }
    return nRet;
}

int is_array__2311_double_conversion_allowed()
{
    if (pSimarray__2311VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__2311VTable);
    }
    return 0;
}

int is_array__2311_long_convertion_allowed()
{
    if (pSimarray__2311VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__2311VTable);
    }
    return 0;
}

void compare_array__2311(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2311VTable != NULL
        && pSimarray__2311VTable->m_version >= Scv612
        && pSimarray__2311VTable->m_pfnCompare != NULL) {
        if (pSimarray__2311VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2311VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2311VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__2306, 32, sizeof(struct__2306), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2311_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2311VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2311VTable, nRetValue);
    }
    return 0;
}

int array__2311_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__2311VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__2311VTable, nRetValue);
    }
    return 0;
}

int get_array__2311_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__2306_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2311_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__2306_default_value(&((struct__2306*)pValue)[i]);
    return 1;
}

int check_array__2311_string(const char *str, char **endptr)
{
    static array__2311 rTemp;
    return string_to_array__2311(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2311_Utils = {
    array__2311_to_string,
    check_array__2311_string,
    string_to_array__2311,
    is_array__2311_double_conversion_allowed,
    array__2311_to_double,
    is_array__2311_long_convertion_allowed,
    array__2311_to_long,
    compare_array__2311,
    get_array__2311_signature,
    set_array__2311_default_value,
    sizeof(array__2311)
};

/****************************************************************
 ** struct__2314 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2314VTable;

static SimFieldUtils struct__2314_fields[] = {
    {"D_STATIC", offsetof(struct__2314,D_STATIC), &_Type_kcg_int_Utils},
    {"V_STATIC", offsetof(struct__2314,V_STATIC), &_Type_kcg_int_Utils},
    {"Q_FRONT", offsetof(struct__2314,Q_FRONT), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__2314,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS_q_diff", offsetof(struct__2314,SECTIONS_q_diff), &_Type_array__2311_Utils},
};

int struct__2314_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2314VTable != NULL
        && pSimstruct__2314VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2314VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2314_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__2314(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2314VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2314VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2314_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__2314_double_conversion_allowed()
{
    if (pSimstruct__2314VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2314VTable);
    }
    return 0;
}

int is_struct__2314_long_convertion_allowed()
{
    if (pSimstruct__2314VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2314VTable);
    }
    return 0;
}

void compare_struct__2314(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2314VTable != NULL
        && pSimstruct__2314VTable->m_version >= Scv612
        && pSimstruct__2314VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2314VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2314VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2314VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2314_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2314_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2314VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2314VTable, nRetValue);
    }
    return 0;
}

int struct__2314_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2314VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2314VTable, nRetValue);
    }
    return 0;
}

int get_struct__2314_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2314_fields, 5, pfnStrAppend, pData);
}

int set_struct__2314_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__2314*)pValue)->D_STATIC));
    set_kcg_int_default_value(&(((struct__2314*)pValue)->V_STATIC));
    set_kcg_int_default_value(&(((struct__2314*)pValue)->Q_FRONT));
    set_kcg_int_default_value(&(((struct__2314*)pValue)->N_ITER));
    set_array__2311_default_value(&(((struct__2314*)pValue)->SECTIONS_q_diff));
    return 1;
}

int check_struct__2314_string(const char *str, char **endptr)
{
    static struct__2314 rTemp;
    return string_to_struct__2314(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2314_Utils = {
    struct__2314_to_string,
    check_struct__2314_string,
    string_to_struct__2314,
    is_struct__2314_double_conversion_allowed,
    struct__2314_to_double,
    is_struct__2314_long_convertion_allowed,
    struct__2314_to_long,
    compare_struct__2314,
    get_struct__2314_signature,
    set_struct__2314_default_value,
    sizeof(struct__2314)
};

/****************************************************************
 ** array__2322 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2322VTable;

int array__2322_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2322VTable != NULL
        && pSimarray__2322VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2322VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__2314_to_string, 32, sizeof(struct__2314), pfnStrAppend, pData);
}

int string_to_array__2322(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2322VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2322VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__2314_Utils, 32, sizeof(struct__2314), endptr);
    }
    return nRet;
}

int is_array__2322_double_conversion_allowed()
{
    if (pSimarray__2322VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__2322VTable);
    }
    return 0;
}

int is_array__2322_long_convertion_allowed()
{
    if (pSimarray__2322VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__2322VTable);
    }
    return 0;
}

void compare_array__2322(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2322VTable != NULL
        && pSimarray__2322VTable->m_version >= Scv612
        && pSimarray__2322VTable->m_pfnCompare != NULL) {
        if (pSimarray__2322VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2322VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2322VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__2314, 32, sizeof(struct__2314), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2322_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2322VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2322VTable, nRetValue);
    }
    return 0;
}

int array__2322_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__2322VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__2322VTable, nRetValue);
    }
    return 0;
}

int get_array__2322_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__2314_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2322_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__2314_default_value(&((struct__2314*)pValue)[i]);
    return 1;
}

int check_array__2322_string(const char *str, char **endptr)
{
    static array__2322 rTemp;
    return string_to_array__2322(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2322_Utils = {
    array__2322_to_string,
    check_array__2322_string,
    string_to_array__2322,
    is_array__2322_double_conversion_allowed,
    array__2322_to_double,
    is_array__2322_long_convertion_allowed,
    array__2322_to_long,
    compare_array__2322,
    get_array__2322_signature,
    set_array__2322_default_value,
    sizeof(array__2322)
};

/****************************************************************
 ** struct__2325 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2325VTable;

static SimFieldUtils struct__2325_fields[] = {
    {"valid", offsetof(struct__2325,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__2325,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__2325,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__2325,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__2325,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_STATIC", offsetof(struct__2325,D_STATIC), &_Type_kcg_int_Utils},
    {"V_STATIC", offsetof(struct__2325,V_STATIC), &_Type_kcg_int_Utils},
    {"Q_FRONT", offsetof(struct__2325,Q_FRONT), &_Type_kcg_int_Utils},
    {"N_ITER_n", offsetof(struct__2325,N_ITER_n), &_Type_kcg_int_Utils},
    {"SECTIONS_q_diff", offsetof(struct__2325,SECTIONS_q_diff), &_Type_array__2311_Utils},
    {"N_ITER_k", offsetof(struct__2325,N_ITER_k), &_Type_kcg_int_Utils},
    {"SECTIONS_SSP", offsetof(struct__2325,SECTIONS_SSP), &_Type_array__2322_Utils},
};

int struct__2325_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2325VTable != NULL
        && pSimstruct__2325VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2325VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2325_fields, 12, pfnStrAppend, pData);
}

int string_to_struct__2325(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2325VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2325VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2325_fields, 12, endptr);
    }
    return nRet;
}

int is_struct__2325_double_conversion_allowed()
{
    if (pSimstruct__2325VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2325VTable);
    }
    return 0;
}

int is_struct__2325_long_convertion_allowed()
{
    if (pSimstruct__2325VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2325VTable);
    }
    return 0;
}

void compare_struct__2325(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2325VTable != NULL
        && pSimstruct__2325VTable->m_version >= Scv612
        && pSimstruct__2325VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2325VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2325VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2325VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2325_fields, 12, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2325_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2325VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2325VTable, nRetValue);
    }
    return 0;
}

int struct__2325_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2325VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2325VTable, nRetValue);
    }
    return 0;
}

int get_struct__2325_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2325_fields, 12, pfnStrAppend, pData);
}

int set_struct__2325_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2325*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__2325*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__2325*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__2325*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__2325*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__2325*)pValue)->D_STATIC));
    set_kcg_int_default_value(&(((struct__2325*)pValue)->V_STATIC));
    set_kcg_int_default_value(&(((struct__2325*)pValue)->Q_FRONT));
    set_kcg_int_default_value(&(((struct__2325*)pValue)->N_ITER_n));
    set_array__2311_default_value(&(((struct__2325*)pValue)->SECTIONS_q_diff));
    set_kcg_int_default_value(&(((struct__2325*)pValue)->N_ITER_k));
    set_array__2322_default_value(&(((struct__2325*)pValue)->SECTIONS_SSP));
    return 1;
}

int check_struct__2325_string(const char *str, char **endptr)
{
    static struct__2325 rTemp;
    return string_to_struct__2325(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2325_Utils = {
    struct__2325_to_string,
    check_struct__2325_string,
    string_to_struct__2325,
    is_struct__2325_double_conversion_allowed,
    struct__2325_to_double,
    is_struct__2325_long_convertion_allowed,
    struct__2325_to_long,
    compare_struct__2325,
    get_struct__2325_signature,
    set_struct__2325_default_value,
    sizeof(struct__2325)
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
 ** struct__2343 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2343VTable;

static SimFieldUtils struct__2343_fields[] = {
    {"nid_packet", offsetof(struct__2343,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__2343,q_dir), &_Type_Q_DIR_Utils},
    {"valid", offsetof(struct__2343,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(struct__2343,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(struct__2343,endAddress), &_Type_kcg_int_Utils},
};

int struct__2343_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2343VTable != NULL
        && pSimstruct__2343VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2343VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2343_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__2343(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2343VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2343VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2343_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__2343_double_conversion_allowed()
{
    if (pSimstruct__2343VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2343VTable);
    }
    return 0;
}

int is_struct__2343_long_convertion_allowed()
{
    if (pSimstruct__2343VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2343VTable);
    }
    return 0;
}

void compare_struct__2343(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2343VTable != NULL
        && pSimstruct__2343VTable->m_version >= Scv612
        && pSimstruct__2343VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2343VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2343VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2343VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2343_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2343_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2343VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2343VTable, nRetValue);
    }
    return 0;
}

int struct__2343_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2343VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2343VTable, nRetValue);
    }
    return 0;
}

int get_struct__2343_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2343_fields, 5, pfnStrAppend, pData);
}

int set_struct__2343_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__2343*)pValue)->nid_packet));
    set_Q_DIR_default_value(&(((struct__2343*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((struct__2343*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__2343*)pValue)->startAddress));
    set_kcg_int_default_value(&(((struct__2343*)pValue)->endAddress));
    return 1;
}

int check_struct__2343_string(const char *str, char **endptr)
{
    static struct__2343 rTemp;
    return string_to_struct__2343(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2343_Utils = {
    struct__2343_to_string,
    check_struct__2343_string,
    string_to_struct__2343,
    is_struct__2343_double_conversion_allowed,
    struct__2343_to_double,
    is_struct__2343_long_convertion_allowed,
    struct__2343_to_long,
    compare_struct__2343,
    get_struct__2343_signature,
    set_struct__2343_default_value,
    sizeof(struct__2343)
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
 ** array_int_2_32 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_2_32VTable;

int array_int_2_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_2_32VTable != NULL
        && pSimarray_int_2_32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_2_32VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_2_to_string, 32, sizeof(array_int_2), pfnStrAppend, pData);
}

int string_to_array_int_2_32(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_2_32VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_2_32VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_2_Utils, 32, sizeof(array_int_2), endptr);
    }
    return nRet;
}

int is_array_int_2_32_double_conversion_allowed()
{
    if (pSimarray_int_2_32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_2_32VTable);
    }
    return 0;
}

int is_array_int_2_32_long_convertion_allowed()
{
    if (pSimarray_int_2_32VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_2_32VTable);
    }
    return 0;
}

void compare_array_int_2_32(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_2_32VTable != NULL
        && pSimarray_int_2_32VTable->m_version >= Scv612
        && pSimarray_int_2_32VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_2_32VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_2_32VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_2_32VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_2, 32, sizeof(array_int_2), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_2_32_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_2_32VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_2_32VTable, nRetValue);
    }
    return 0;
}

int array_int_2_32_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_2_32VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_2_32VTable, nRetValue);
    }
    return 0;
}

int get_array_int_2_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_2_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_2_32_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_array_int_2_default_value(&((array_int_2*)pValue)[i]);
    return 1;
}

int check_array_int_2_32_string(const char *str, char **endptr)
{
    static array_int_2_32 rTemp;
    return string_to_array_int_2_32(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_2_32_Utils = {
    array_int_2_32_to_string,
    check_array_int_2_32_string,
    string_to_array_int_2_32,
    is_array_int_2_32_double_conversion_allowed,
    array_int_2_32_to_double,
    is_array_int_2_32_long_convertion_allowed,
    array_int_2_32_to_long,
    compare_array_int_2_32,
    get_array_int_2_32_signature,
    set_array_int_2_32_default_value,
    sizeof(array_int_2_32)
};

/****************************************************************
 ** array_int_64 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_64VTable;

int array_int_64_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_64VTable != NULL
        && pSimarray_int_64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_64VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 64, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_64(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_64VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_64VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 64, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_64_double_conversion_allowed()
{
    if (pSimarray_int_64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_64VTable);
    }
    return 0;
}

int is_array_int_64_long_convertion_allowed()
{
    if (pSimarray_int_64VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_64VTable);
    }
    return 0;
}

void compare_array_int_64(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_64VTable != NULL
        && pSimarray_int_64VTable->m_version >= Scv612
        && pSimarray_int_64VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_64VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_64VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_64VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 64, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_64_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_64VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_64VTable, nRetValue);
    }
    return 0;
}

int array_int_64_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_64VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_64VTable, nRetValue);
    }
    return 0;
}

int get_array_int_64_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 64; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_64_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 64; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_64_string(const char *str, char **endptr)
{
    static array_int_64 rTemp;
    return string_to_array_int_64(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_64_Utils = {
    array_int_64_to_string,
    check_array_int_64_string,
    string_to_array_int_64,
    is_array_int_64_double_conversion_allowed,
    array_int_64_to_double,
    is_array_int_64_long_convertion_allowed,
    array_int_64_to_long,
    compare_array_int_64,
    get_array_int_64_signature,
    set_array_int_64_default_value,
    sizeof(array_int_64)
};

/****************************************************************
 ** array__2360 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2360VTable;

int array__2360_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2360VTable != NULL
        && pSimarray__2360VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2360VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__2343_to_string, 30, sizeof(struct__2343), pfnStrAppend, pData);
}

int string_to_array__2360(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2360VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2360VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__2343_Utils, 30, sizeof(struct__2343), endptr);
    }
    return nRet;
}

int is_array__2360_double_conversion_allowed()
{
    if (pSimarray__2360VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__2360VTable);
    }
    return 0;
}

int is_array__2360_long_convertion_allowed()
{
    if (pSimarray__2360VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__2360VTable);
    }
    return 0;
}

void compare_array__2360(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2360VTable != NULL
        && pSimarray__2360VTable->m_version >= Scv612
        && pSimarray__2360VTable->m_pfnCompare != NULL) {
        if (pSimarray__2360VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2360VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2360VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__2343, 30, sizeof(struct__2343), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2360_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2360VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2360VTable, nRetValue);
    }
    return 0;
}

int array__2360_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__2360VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__2360VTable, nRetValue);
    }
    return 0;
}

int get_array__2360_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__2343_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2360_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_struct__2343_default_value(&((struct__2343*)pValue)[i]);
    return 1;
}

int check_array__2360_string(const char *str, char **endptr)
{
    static array__2360 rTemp;
    return string_to_array__2360(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2360_Utils = {
    array__2360_to_string,
    check_array__2360_string,
    string_to_array__2360,
    is_array__2360_double_conversion_allowed,
    array__2360_to_double,
    is_array__2360_long_convertion_allowed,
    array__2360_to_long,
    compare_array__2360,
    get_array__2360_signature,
    set_array__2360_default_value,
    sizeof(array__2360)
};

/****************************************************************
 ** struct__2363 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2363VTable;

static SimFieldUtils struct__2363_fields[] = {
    {"PacketHeaders", offsetof(struct__2363,PacketHeaders), &_Type_array__2360_Utils},
    {"PacketData", offsetof(struct__2363,PacketData), &_Type_array_int_500_Utils},
};

int struct__2363_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2363VTable != NULL
        && pSimstruct__2363VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2363VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2363_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__2363(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2363VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2363VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2363_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__2363_double_conversion_allowed()
{
    if (pSimstruct__2363VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2363VTable);
    }
    return 0;
}

int is_struct__2363_long_convertion_allowed()
{
    if (pSimstruct__2363VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2363VTable);
    }
    return 0;
}

void compare_struct__2363(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2363VTable != NULL
        && pSimstruct__2363VTable->m_version >= Scv612
        && pSimstruct__2363VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2363VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2363VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2363VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2363_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2363_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2363VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2363VTable, nRetValue);
    }
    return 0;
}

int struct__2363_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2363VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2363VTable, nRetValue);
    }
    return 0;
}

int get_struct__2363_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2363_fields, 2, pfnStrAppend, pData);
}

int set_struct__2363_default_value(void *pValue)
{
    set_array__2360_default_value(&(((struct__2363*)pValue)->PacketHeaders));
    set_array_int_500_default_value(&(((struct__2363*)pValue)->PacketData));
    return 1;
}

int check_struct__2363_string(const char *str, char **endptr)
{
    static struct__2363 rTemp;
    return string_to_struct__2363(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2363_Utils = {
    struct__2363_to_string,
    check_struct__2363_string,
    string_to_struct__2363,
    is_struct__2363_double_conversion_allowed,
    struct__2363_to_double,
    is_struct__2363_long_convertion_allowed,
    struct__2363_to_long,
    compare_struct__2363,
    get_struct__2363_signature,
    set_struct__2363_default_value,
    sizeof(struct__2363)
};

/****************************************************************
 ** array__2368 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2368VTable;

int array__2368_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2368VTable != NULL
        && pSimarray__2368VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2368VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__2314_to_string, 33, sizeof(struct__2314), pfnStrAppend, pData);
}

int string_to_array__2368(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2368VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2368VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__2314_Utils, 33, sizeof(struct__2314), endptr);
    }
    return nRet;
}

int is_array__2368_double_conversion_allowed()
{
    if (pSimarray__2368VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__2368VTable);
    }
    return 0;
}

int is_array__2368_long_convertion_allowed()
{
    if (pSimarray__2368VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__2368VTable);
    }
    return 0;
}

void compare_array__2368(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2368VTable != NULL
        && pSimarray__2368VTable->m_version >= Scv612
        && pSimarray__2368VTable->m_pfnCompare != NULL) {
        if (pSimarray__2368VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2368VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2368VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__2314, 33, sizeof(struct__2314), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2368_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2368VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2368VTable, nRetValue);
    }
    return 0;
}

int array__2368_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__2368VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__2368VTable, nRetValue);
    }
    return 0;
}

int get_array__2368_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__2314_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2368_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__2314_default_value(&((struct__2314*)pValue)[i]);
    return 1;
}

int check_array__2368_string(const char *str, char **endptr)
{
    static array__2368 rTemp;
    return string_to_array__2368(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2368_Utils = {
    array__2368_to_string,
    check_array__2368_string,
    string_to_array__2368,
    is_array__2368_double_conversion_allowed,
    array__2368_to_double,
    is_array__2368_long_convertion_allowed,
    array__2368_to_long,
    compare_array__2368,
    get_array__2368_signature,
    set_array__2368_default_value,
    sizeof(array__2368)
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
 ** struct__2374 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2374VTable;

static SimFieldUtils struct__2374_fields[] = {
    {"valid", offsetof(struct__2374,valid), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(struct__2374,q_dir), &_Type_Q_DIR_Utils},
    {"q_scale", offsetof(struct__2374,q_scale), &_Type_Q_SCALE_Utils},
};

int struct__2374_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2374VTable != NULL
        && pSimstruct__2374VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2374VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2374_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__2374(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2374VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2374VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2374_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__2374_double_conversion_allowed()
{
    if (pSimstruct__2374VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2374VTable);
    }
    return 0;
}

int is_struct__2374_long_convertion_allowed()
{
    if (pSimstruct__2374VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2374VTable);
    }
    return 0;
}

void compare_struct__2374(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2374VTable != NULL
        && pSimstruct__2374VTable->m_version >= Scv612
        && pSimstruct__2374VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2374VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2374VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2374VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2374_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2374_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2374VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2374VTable, nRetValue);
    }
    return 0;
}

int struct__2374_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2374VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2374VTable, nRetValue);
    }
    return 0;
}

int get_struct__2374_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2374_fields, 3, pfnStrAppend, pData);
}

int set_struct__2374_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2374*)pValue)->valid));
    set_Q_DIR_default_value(&(((struct__2374*)pValue)->q_dir));
    set_Q_SCALE_default_value(&(((struct__2374*)pValue)->q_scale));
    return 1;
}

int check_struct__2374_string(const char *str, char **endptr)
{
    static struct__2374 rTemp;
    return string_to_struct__2374(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2374_Utils = {
    struct__2374_to_string,
    check_struct__2374_string,
    string_to_struct__2374,
    is_struct__2374_double_conversion_allowed,
    struct__2374_to_double,
    is_struct__2374_long_convertion_allowed,
    struct__2374_to_long,
    compare_struct__2374,
    get_struct__2374_signature,
    set_struct__2374_default_value,
    sizeof(struct__2374)
};

/****************************************************************
 ** struct__2380 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2380VTable;

static SimFieldUtils struct__2380_fields[] = {
    {"valid", offsetof(struct__2380,valid), &_Type_kcg_bool_Utils},
    {"nc_diff", offsetof(struct__2380,nc_diff), &_Type_kcg_int_Utils},
    {"v_diff", offsetof(struct__2380,v_diff), &_Type_kcg_int_Utils},
};

int struct__2380_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2380VTable != NULL
        && pSimstruct__2380VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2380VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2380_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__2380(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2380VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2380VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2380_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__2380_double_conversion_allowed()
{
    if (pSimstruct__2380VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2380VTable);
    }
    return 0;
}

int is_struct__2380_long_convertion_allowed()
{
    if (pSimstruct__2380VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2380VTable);
    }
    return 0;
}

void compare_struct__2380(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2380VTable != NULL
        && pSimstruct__2380VTable->m_version >= Scv612
        && pSimstruct__2380VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2380VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2380VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2380VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2380_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2380_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2380VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2380VTable, nRetValue);
    }
    return 0;
}

int struct__2380_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2380VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2380VTable, nRetValue);
    }
    return 0;
}

int get_struct__2380_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2380_fields, 3, pfnStrAppend, pData);
}

int set_struct__2380_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2380*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__2380*)pValue)->nc_diff));
    set_kcg_int_default_value(&(((struct__2380*)pValue)->v_diff));
    return 1;
}

int check_struct__2380_string(const char *str, char **endptr)
{
    static struct__2380 rTemp;
    return string_to_struct__2380(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2380_Utils = {
    struct__2380_to_string,
    check_struct__2380_string,
    string_to_struct__2380,
    is_struct__2380_double_conversion_allowed,
    struct__2380_to_double,
    is_struct__2380_long_convertion_allowed,
    struct__2380_to_long,
    compare_struct__2380,
    get_struct__2380_signature,
    set_struct__2380_default_value,
    sizeof(struct__2380)
};

/****************************************************************
 ** array__2386 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2386VTable;

int array__2386_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2386VTable != NULL
        && pSimarray__2386VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2386VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__2380_to_string, 32, sizeof(struct__2380), pfnStrAppend, pData);
}

int string_to_array__2386(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2386VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2386VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__2380_Utils, 32, sizeof(struct__2380), endptr);
    }
    return nRet;
}

int is_array__2386_double_conversion_allowed()
{
    if (pSimarray__2386VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__2386VTable);
    }
    return 0;
}

int is_array__2386_long_convertion_allowed()
{
    if (pSimarray__2386VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__2386VTable);
    }
    return 0;
}

void compare_array__2386(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2386VTable != NULL
        && pSimarray__2386VTable->m_version >= Scv612
        && pSimarray__2386VTable->m_pfnCompare != NULL) {
        if (pSimarray__2386VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2386VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2386VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__2380, 32, sizeof(struct__2380), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2386_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2386VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2386VTable, nRetValue);
    }
    return 0;
}

int array__2386_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__2386VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__2386VTable, nRetValue);
    }
    return 0;
}

int get_array__2386_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__2380_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2386_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__2380_default_value(&((struct__2380*)pValue)[i]);
    return 1;
}

int check_array__2386_string(const char *str, char **endptr)
{
    static array__2386 rTemp;
    return string_to_array__2386(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2386_Utils = {
    array__2386_to_string,
    check_array__2386_string,
    string_to_array__2386,
    is_array__2386_double_conversion_allowed,
    array__2386_to_double,
    is_array__2386_long_convertion_allowed,
    array__2386_to_long,
    compare_array__2386,
    get_array__2386_signature,
    set_array__2386_default_value,
    sizeof(array__2386)
};

/****************************************************************
 ** struct__2389 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2389VTable;

static SimFieldUtils struct__2389_fields[] = {
    {"valid", offsetof(struct__2389,valid), &_Type_kcg_bool_Utils},
    {"d_static", offsetof(struct__2389,d_static), &_Type_kcg_int_Utils},
    {"v_static", offsetof(struct__2389,v_static), &_Type_kcg_int_Utils},
    {"q_front", offsetof(struct__2389,q_front), &_Type_Q_FRONT_Utils},
    {"n_iter", offsetof(struct__2389,n_iter), &_Type_kcg_int_Utils},
    {"SECTIONS_q_diff", offsetof(struct__2389,SECTIONS_q_diff), &_Type_array__2386_Utils},
};

int struct__2389_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2389VTable != NULL
        && pSimstruct__2389VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2389VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2389_fields, 6, pfnStrAppend, pData);
}

int string_to_struct__2389(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2389VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2389VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2389_fields, 6, endptr);
    }
    return nRet;
}

int is_struct__2389_double_conversion_allowed()
{
    if (pSimstruct__2389VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2389VTable);
    }
    return 0;
}

int is_struct__2389_long_convertion_allowed()
{
    if (pSimstruct__2389VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2389VTable);
    }
    return 0;
}

void compare_struct__2389(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2389VTable != NULL
        && pSimstruct__2389VTable->m_version >= Scv612
        && pSimstruct__2389VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2389VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2389VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2389VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2389_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2389_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2389VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2389VTable, nRetValue);
    }
    return 0;
}

int struct__2389_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2389VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2389VTable, nRetValue);
    }
    return 0;
}

int get_struct__2389_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2389_fields, 6, pfnStrAppend, pData);
}

int set_struct__2389_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2389*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__2389*)pValue)->d_static));
    set_kcg_int_default_value(&(((struct__2389*)pValue)->v_static));
    set_Q_FRONT_default_value(&(((struct__2389*)pValue)->q_front));
    set_kcg_int_default_value(&(((struct__2389*)pValue)->n_iter));
    set_array__2386_default_value(&(((struct__2389*)pValue)->SECTIONS_q_diff));
    return 1;
}

int check_struct__2389_string(const char *str, char **endptr)
{
    static struct__2389 rTemp;
    return string_to_struct__2389(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2389_Utils = {
    struct__2389_to_string,
    check_struct__2389_string,
    string_to_struct__2389,
    is_struct__2389_double_conversion_allowed,
    struct__2389_to_double,
    is_struct__2389_long_convertion_allowed,
    struct__2389_to_long,
    compare_struct__2389,
    get_struct__2389_signature,
    set_struct__2389_default_value,
    sizeof(struct__2389)
};

/****************************************************************
 ** array__2398 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2398VTable;

int array__2398_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2398VTable != NULL
        && pSimarray__2398VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2398VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__2389_to_string, 33, sizeof(struct__2389), pfnStrAppend, pData);
}

int string_to_array__2398(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2398VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2398VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__2389_Utils, 33, sizeof(struct__2389), endptr);
    }
    return nRet;
}

int is_array__2398_double_conversion_allowed()
{
    if (pSimarray__2398VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__2398VTable);
    }
    return 0;
}

int is_array__2398_long_convertion_allowed()
{
    if (pSimarray__2398VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__2398VTable);
    }
    return 0;
}

void compare_array__2398(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2398VTable != NULL
        && pSimarray__2398VTable->m_version >= Scv612
        && pSimarray__2398VTable->m_pfnCompare != NULL) {
        if (pSimarray__2398VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2398VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2398VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__2389, 33, sizeof(struct__2389), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2398_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2398VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2398VTable, nRetValue);
    }
    return 0;
}

int array__2398_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__2398VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__2398VTable, nRetValue);
    }
    return 0;
}

int get_array__2398_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__2389_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2398_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__2389_default_value(&((struct__2389*)pValue)[i]);
    return 1;
}

int check_array__2398_string(const char *str, char **endptr)
{
    static array__2398 rTemp;
    return string_to_array__2398(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2398_Utils = {
    array__2398_to_string,
    check_array__2398_string,
    string_to_array__2398,
    is_array__2398_double_conversion_allowed,
    array__2398_to_double,
    is_array__2398_long_convertion_allowed,
    array__2398_to_long,
    compare_array__2398,
    get_array__2398_signature,
    set_array__2398_default_value,
    sizeof(array__2398)
};

/****************************************************************
 ** struct__2401 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2401VTable;

static SimFieldUtils struct__2401_fields[] = {
    {"valid", offsetof(struct__2401,valid), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(struct__2401,q_dir), &_Type_Q_DIR_Utils},
    {"q_scale", offsetof(struct__2401,q_scale), &_Type_Q_SCALE_Utils},
    {"sections", offsetof(struct__2401,sections), &_Type_array__2398_Utils},
};

int struct__2401_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2401VTable != NULL
        && pSimstruct__2401VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2401VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2401_fields, 4, pfnStrAppend, pData);
}

int string_to_struct__2401(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2401VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2401VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2401_fields, 4, endptr);
    }
    return nRet;
}

int is_struct__2401_double_conversion_allowed()
{
    if (pSimstruct__2401VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2401VTable);
    }
    return 0;
}

int is_struct__2401_long_convertion_allowed()
{
    if (pSimstruct__2401VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2401VTable);
    }
    return 0;
}

void compare_struct__2401(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2401VTable != NULL
        && pSimstruct__2401VTable->m_version >= Scv612
        && pSimstruct__2401VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2401VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2401VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2401VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2401_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2401_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2401VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2401VTable, nRetValue);
    }
    return 0;
}

int struct__2401_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2401VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2401VTable, nRetValue);
    }
    return 0;
}

int get_struct__2401_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2401_fields, 4, pfnStrAppend, pData);
}

int set_struct__2401_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2401*)pValue)->valid));
    set_Q_DIR_default_value(&(((struct__2401*)pValue)->q_dir));
    set_Q_SCALE_default_value(&(((struct__2401*)pValue)->q_scale));
    set_array__2398_default_value(&(((struct__2401*)pValue)->sections));
    return 1;
}

int check_struct__2401_string(const char *str, char **endptr)
{
    static struct__2401 rTemp;
    return string_to_struct__2401(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2401_Utils = {
    struct__2401_to_string,
    check_struct__2401_string,
    string_to_struct__2401,
    is_struct__2401_double_conversion_allowed,
    struct__2401_to_double,
    is_struct__2401_long_convertion_allowed,
    struct__2401_to_long,
    compare_struct__2401,
    get_struct__2401_signature,
    set_struct__2401_default_value,
    sizeof(struct__2401)
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
 ** array_int_64_32 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_64_32VTable;

int array_int_64_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_64_32VTable != NULL
        && pSimarray_int_64_32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_64_32VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_64_to_string, 32, sizeof(array_int_64), pfnStrAppend, pData);
}

int string_to_array_int_64_32(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_64_32VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_64_32VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_64_Utils, 32, sizeof(array_int_64), endptr);
    }
    return nRet;
}

int is_array_int_64_32_double_conversion_allowed()
{
    if (pSimarray_int_64_32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_64_32VTable);
    }
    return 0;
}

int is_array_int_64_32_long_convertion_allowed()
{
    if (pSimarray_int_64_32VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_64_32VTable);
    }
    return 0;
}

void compare_array_int_64_32(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_64_32VTable != NULL
        && pSimarray_int_64_32VTable->m_version >= Scv612
        && pSimarray_int_64_32VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_64_32VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_64_32VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_64_32VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_64, 32, sizeof(array_int_64), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_64_32_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_64_32VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_64_32VTable, nRetValue);
    }
    return 0;
}

int array_int_64_32_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_64_32VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_64_32VTable, nRetValue);
    }
    return 0;
}

int get_array_int_64_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_64_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_64_32_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_array_int_64_default_value(&((array_int_64*)pValue)[i]);
    return 1;
}

int check_array_int_64_32_string(const char *str, char **endptr)
{
    static array_int_64_32 rTemp;
    return string_to_array_int_64_32(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_64_32_Utils = {
    array_int_64_32_to_string,
    check_array_int_64_32_string,
    string_to_array_int_64_32,
    is_array_int_64_32_double_conversion_allowed,
    array_int_64_32_to_double,
    is_array_int_64_32_long_convertion_allowed,
    array_int_64_32_to_long,
    compare_array_int_64_32,
    get_array_int_64_32_signature,
    set_array_int_64_32_default_value,
    sizeof(array_int_64_32)
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
 ** array__2429 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2429VTable;

int array__2429_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2429VTable != NULL
        && pSimarray__2429VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2429VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__2363_to_string, 33, sizeof(struct__2363), pfnStrAppend, pData);
}

int string_to_array__2429(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2429VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2429VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__2363_Utils, 33, sizeof(struct__2363), endptr);
    }
    return nRet;
}

int is_array__2429_double_conversion_allowed()
{
    if (pSimarray__2429VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__2429VTable);
    }
    return 0;
}

int is_array__2429_long_convertion_allowed()
{
    if (pSimarray__2429VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__2429VTable);
    }
    return 0;
}

void compare_array__2429(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2429VTable != NULL
        && pSimarray__2429VTable->m_version >= Scv612
        && pSimarray__2429VTable->m_pfnCompare != NULL) {
        if (pSimarray__2429VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2429VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2429VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__2363, 33, sizeof(struct__2363), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2429_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2429VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2429VTable, nRetValue);
    }
    return 0;
}

int array__2429_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__2429VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__2429VTable, nRetValue);
    }
    return 0;
}

int get_array__2429_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__2363_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2429_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__2363_default_value(&((struct__2363*)pValue)[i]);
    return 1;
}

int check_array__2429_string(const char *str, char **endptr)
{
    static array__2429 rTemp;
    return string_to_array__2429(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2429_Utils = {
    array__2429_to_string,
    check_array__2429_string,
    string_to_array__2429,
    is_array__2429_double_conversion_allowed,
    array__2429_to_double,
    is_array__2429_long_convertion_allowed,
    array__2429_to_long,
    compare_array__2429,
    get_array__2429_signature,
    set_array__2429_default_value,
    sizeof(array__2429)
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
 ** array__2438 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2438VTable;

int array__2438_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2438VTable != NULL
        && pSimarray__2438VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2438VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__2314_to_string, 1, sizeof(struct__2314), pfnStrAppend, pData);
}

int string_to_array__2438(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2438VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2438VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__2314_Utils, 1, sizeof(struct__2314), endptr);
    }
    return nRet;
}

int is_array__2438_double_conversion_allowed()
{
    if (pSimarray__2438VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__2438VTable);
    }
    return 0;
}

int is_array__2438_long_convertion_allowed()
{
    if (pSimarray__2438VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__2438VTable);
    }
    return 0;
}

void compare_array__2438(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2438VTable != NULL
        && pSimarray__2438VTable->m_version >= Scv612
        && pSimarray__2438VTable->m_pfnCompare != NULL) {
        if (pSimarray__2438VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2438VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2438VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__2314, 1, sizeof(struct__2314), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2438_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2438VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2438VTable, nRetValue);
    }
    return 0;
}

int array__2438_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__2438VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__2438VTable, nRetValue);
    }
    return 0;
}

int get_array__2438_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__2314_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2438_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__2314_default_value(&((struct__2314*)pValue)[i]);
    return 1;
}

int check_array__2438_string(const char *str, char **endptr)
{
    static array__2438 rTemp;
    return string_to_array__2438(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2438_Utils = {
    array__2438_to_string,
    check_array__2438_string,
    string_to_array__2438,
    is_array__2438_double_conversion_allowed,
    array__2438_to_double,
    is_array__2438_long_convertion_allowed,
    array__2438_to_long,
    compare_array__2438,
    get_array__2438_signature,
    set_array__2438_default_value,
    sizeof(array__2438)
};

/****************************************************************
 ** array_int_2_32_32 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_2_32_32VTable;

int array_int_2_32_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_2_32_32VTable != NULL
        && pSimarray_int_2_32_32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_2_32_32VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_2_32_to_string, 32, sizeof(array_int_2_32), pfnStrAppend, pData);
}

int string_to_array_int_2_32_32(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_2_32_32VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_2_32_32VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_2_32_Utils, 32, sizeof(array_int_2_32), endptr);
    }
    return nRet;
}

int is_array_int_2_32_32_double_conversion_allowed()
{
    if (pSimarray_int_2_32_32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_2_32_32VTable);
    }
    return 0;
}

int is_array_int_2_32_32_long_convertion_allowed()
{
    if (pSimarray_int_2_32_32VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_2_32_32VTable);
    }
    return 0;
}

void compare_array_int_2_32_32(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_2_32_32VTable != NULL
        && pSimarray_int_2_32_32VTable->m_version >= Scv612
        && pSimarray_int_2_32_32VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_2_32_32VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_2_32_32VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_2_32_32VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_2_32, 32, sizeof(array_int_2_32), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_2_32_32_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_2_32_32VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_2_32_32VTable, nRetValue);
    }
    return 0;
}

int array_int_2_32_32_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_2_32_32VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_2_32_32VTable, nRetValue);
    }
    return 0;
}

int get_array_int_2_32_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_2_32_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_2_32_32_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_array_int_2_32_default_value(&((array_int_2_32*)pValue)[i]);
    return 1;
}

int check_array_int_2_32_32_string(const char *str, char **endptr)
{
    static array_int_2_32_32 rTemp;
    return string_to_array_int_2_32_32(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_2_32_32_Utils = {
    array_int_2_32_32_to_string,
    check_array_int_2_32_32_string,
    string_to_array_int_2_32_32,
    is_array_int_2_32_32_double_conversion_allowed,
    array_int_2_32_32_to_double,
    is_array_int_2_32_32_long_convertion_allowed,
    array_int_2_32_32_to_long,
    compare_array_int_2_32_32,
    get_array_int_2_32_32_signature,
    set_array_int_2_32_32_default_value,
    sizeof(array_int_2_32_32)
};

/****************************************************************
 ** array_int_432 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_432VTable;

int array_int_432_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_432VTable != NULL
        && pSimarray_int_432VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_432VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 432, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_432(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_432VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_432VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 432, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_432_double_conversion_allowed()
{
    if (pSimarray_int_432VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_432VTable);
    }
    return 0;
}

int is_array_int_432_long_convertion_allowed()
{
    if (pSimarray_int_432VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_432VTable);
    }
    return 0;
}

void compare_array_int_432(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_432VTable != NULL
        && pSimarray_int_432VTable->m_version >= Scv612
        && pSimarray_int_432VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_432VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_432VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_432VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 432, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_432_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_432VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_432VTable, nRetValue);
    }
    return 0;
}

int array_int_432_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_432VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_432VTable, nRetValue);
    }
    return 0;
}

int get_array_int_432_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 432; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_432_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 432; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_432_string(const char *str, char **endptr)
{
    static array_int_432 rTemp;
    return string_to_array_int_432(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_432_Utils = {
    array_int_432_to_string,
    check_array_int_432_string,
    string_to_array_int_432,
    is_array_int_432_double_conversion_allowed,
    array_int_432_to_double,
    is_array_int_432_long_convertion_allowed,
    array_int_432_to_long,
    compare_array_int_432,
    get_array_int_432_signature,
    set_array_int_432_default_value,
    sizeof(array_int_432)
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
 ** array_int_68 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_68VTable;

int array_int_68_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_68VTable != NULL
        && pSimarray_int_68VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_68VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 68, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_68(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_68VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_68VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 68, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_68_double_conversion_allowed()
{
    if (pSimarray_int_68VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_68VTable);
    }
    return 0;
}

int is_array_int_68_long_convertion_allowed()
{
    if (pSimarray_int_68VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_68VTable);
    }
    return 0;
}

void compare_array_int_68(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_68VTable != NULL
        && pSimarray_int_68VTable->m_version >= Scv612
        && pSimarray_int_68VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_68VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_68VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_68VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 68, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_68_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_68VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_68VTable, nRetValue);
    }
    return 0;
}

int array_int_68_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_68VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_68VTable, nRetValue);
    }
    return 0;
}

int get_array_int_68_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 68; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_68_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 68; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_68_string(const char *str, char **endptr)
{
    static array_int_68 rTemp;
    return string_to_array_int_68(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_68_Utils = {
    array_int_68_to_string,
    check_array_int_68_string,
    string_to_array_int_68,
    is_array_int_68_double_conversion_allowed,
    array_int_68_to_double,
    is_array_int_68_long_convertion_allowed,
    array_int_68_to_long,
    compare_array_int_68,
    get_array_int_68_signature,
    set_array_int_68_default_value,
    sizeof(array_int_68)
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
 ** P027V1_OBU_body_enum_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_OBU_body_enum_T_TM_baseline2VTable;

int P027V1_OBU_body_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_OBU_body_enum_T_TM_baseline2VTable != NULL
        && pSimP027V1_OBU_body_enum_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_OBU_body_enum_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2374_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_OBU_body_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_OBU_body_enum_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_OBU_body_enum_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2374(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_OBU_body_enum_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_OBU_body_enum_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_OBU_body_enum_T_TM_baseline2VTable);
    }
    return is_struct__2374_double_conversion_allowed();
}

int is_P027V1_OBU_body_enum_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_OBU_body_enum_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_OBU_body_enum_T_TM_baseline2VTable);
    }
    return is_struct__2374_long_convertion_allowed();
}

void compare_P027V1_OBU_body_enum_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_OBU_body_enum_T_TM_baseline2VTable != NULL
        && pSimP027V1_OBU_body_enum_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_OBU_body_enum_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_OBU_body_enum_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_OBU_body_enum_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_OBU_body_enum_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__2374(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_OBU_body_enum_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_OBU_body_enum_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_OBU_body_enum_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2374_to_double(pValue, nRetValue);
}

int P027V1_OBU_body_enum_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_OBU_body_enum_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_OBU_body_enum_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2374_to_long(pValue, nRetValue);
}

int get_P027V1_OBU_body_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2374_signature(pfnStrAppend, pData);
}

int set_P027V1_OBU_body_enum_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__2374_default_value(pValue);
}

int check_P027V1_OBU_body_enum_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_OBU_body_enum_T_TM_baseline2 rTemp;
    return string_to_P027V1_OBU_body_enum_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils = {
    P027V1_OBU_body_enum_T_TM_baseline2_to_string,
    check_P027V1_OBU_body_enum_T_TM_baseline2_string,
    string_to_P027V1_OBU_body_enum_T_TM_baseline2,
    is_P027V1_OBU_body_enum_T_TM_baseline2_double_conversion_allowed,
    P027V1_OBU_body_enum_T_TM_baseline2_to_double,
    is_P027V1_OBU_body_enum_T_TM_baseline2_long_convertion_allowed,
    P027V1_OBU_body_enum_T_TM_baseline2_to_long,
    compare_P027V1_OBU_body_enum_T_TM_baseline2,
    get_P027V1_OBU_body_enum_T_TM_baseline2_signature,
    set_P027V1_OBU_body_enum_T_TM_baseline2_default_value,
    sizeof(P027V1_OBU_body_enum_T_TM_baseline2)
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
    return struct__2389_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_enum_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_enum_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2389(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_enum_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_enum_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_enum_T_TM_baseline2VTable);
    }
    return is_struct__2389_double_conversion_allowed();
}

int is_P027V1_section_enum_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_enum_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_enum_T_TM_baseline2VTable);
    }
    return is_struct__2389_long_convertion_allowed();
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
        compare_struct__2389(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_enum_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_enum_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_enum_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2389_to_double(pValue, nRetValue);
}

int P027V1_section_enum_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_enum_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_enum_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2389_to_long(pValue, nRetValue);
}

int get_P027V1_section_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2389_signature(pfnStrAppend, pData);
}

int set_P027V1_section_enum_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__2389_default_value(pValue);
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
 ** _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable;

int _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable != NULL
        && pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__2386_to_string(pValue, pfnStrAppend, pData);
}

int string_to__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__2386(str, pValue, endptr);
    }
    return nRet;
}

int is__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable);
    }
    return is_array__2386_double_conversion_allowed();
}

int is__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable);
    }
    return is_array__2386_long_convertion_allowed();
}

void compare__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable != NULL
        && pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable->m_version >= Scv612
        && pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__2386(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array__2386_to_double(pValue, nRetValue);
}

int _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSim_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array__2386_to_long(pValue, nRetValue);
}

int get__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__2386_signature(pfnStrAppend, pData);
}

int set__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__2386_default_value(pValue);
}

int check__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_string(const char *str, char **endptr)
{
    static _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 rTemp;
    return string_to__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_Utils = {
    _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_string,
    check__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_string,
    string_to__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2,
    is__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_double_conversion_allowed,
    _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_double,
    is__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_long_convertion_allowed,
    _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_long,
    compare__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2,
    get__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_signature,
    set__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_default_value,
    sizeof(_4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2)
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
    return struct__2380_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_enum_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2380(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_enum_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable);
    }
    return is_struct__2380_double_conversion_allowed();
}

int is_P027V1_section_enum_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable);
    }
    return is_struct__2380_long_convertion_allowed();
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
        compare_struct__2380(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_enum_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2380_to_double(pValue, nRetValue);
}

int P027V1_section_enum_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_enum_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2380_to_long(pValue, nRetValue);
}

int get_P027V1_section_enum_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2380_signature(pfnStrAppend, pData);
}

int set_P027V1_section_enum_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__2380_default_value(pValue);
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
 ** P027V1_sections_array_flat_qdiff_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable;

int P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_64_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_sections_array_flat_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_64(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_sections_array_flat_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable);
    }
    return is_array_int_64_double_conversion_allowed();
}

int is_P027V1_sections_array_flat_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable);
    }
    return is_array_int_64_long_convertion_allowed();
}

void compare_P027V1_sections_array_flat_qdiff_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_64(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array_int_64_to_double(pValue, nRetValue);
}

int P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_sections_array_flat_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array_int_64_to_long(pValue, nRetValue);
}

int get_P027V1_sections_array_flat_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_64_signature(pfnStrAppend, pData);
}

int set_P027V1_sections_array_flat_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    return set_array_int_64_default_value(pValue);
}

int check_P027V1_sections_array_flat_qdiff_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_sections_array_flat_qdiff_T_TM_baseline2 rTemp;
    return string_to_P027V1_sections_array_flat_qdiff_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils = {
    P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_string,
    check_P027V1_sections_array_flat_qdiff_T_TM_baseline2_string,
    string_to_P027V1_sections_array_flat_qdiff_T_TM_baseline2,
    is_P027V1_sections_array_flat_qdiff_T_TM_baseline2_double_conversion_allowed,
    P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_double,
    is_P027V1_sections_array_flat_qdiff_T_TM_baseline2_long_convertion_allowed,
    P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_long,
    compare_P027V1_sections_array_flat_qdiff_T_TM_baseline2,
    get_P027V1_sections_array_flat_qdiff_T_TM_baseline2_signature,
    set_P027V1_sections_array_flat_qdiff_T_TM_baseline2_default_value,
    sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2)
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
    return struct__2401_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_OBU_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_OBU_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_OBU_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2401(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_OBU_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_OBU_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_OBU_T_TM_baseline2VTable);
    }
    return is_struct__2401_double_conversion_allowed();
}

int is_P027V1_OBU_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_OBU_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_OBU_T_TM_baseline2VTable);
    }
    return is_struct__2401_long_convertion_allowed();
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
        compare_struct__2401(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_OBU_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_OBU_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_OBU_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2401_to_double(pValue, nRetValue);
}

int P027V1_OBU_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_OBU_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_OBU_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2401_to_long(pValue, nRetValue);
}

int get_P027V1_OBU_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2401_signature(pfnStrAppend, pData);
}

int set_P027V1_OBU_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__2401_default_value(pValue);
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
 ** _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable;

int _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable != NULL
        && pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__2398_to_string(pValue, pfnStrAppend, pData);
}

int string_to__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__2398(str, pValue, endptr);
    }
    return nRet;
}

int is__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_double_conversion_allowed()
{
    if (pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable);
    }
    return is_array__2398_double_conversion_allowed();
}

int is__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_long_convertion_allowed()
{
    if (pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable);
    }
    return is_array__2398_long_convertion_allowed();
}

void compare__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable != NULL
        && pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable->m_version >= Scv612
        && pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__2398(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable, nRetValue);
    }
    return array__2398_to_double(pValue, nRetValue);
}

int _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSim_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2VTable, nRetValue);
    }
    return array__2398_to_long(pValue, nRetValue);
}

int get__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__2398_signature(pfnStrAppend, pData);
}

int set__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__2398_default_value(pValue);
}

int check__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_string(const char *str, char **endptr)
{
    static _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 rTemp;
    return string_to__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils = {
    _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_string,
    check__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_string,
    string_to__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2,
    is__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_double_conversion_allowed,
    _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_double,
    is__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_long_convertion_allowed,
    _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_long,
    compare__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2,
    get__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_signature,
    set__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_default_value,
    sizeof(_3_P027V1_OBU_sectionlist_enum_T_TM_baseline2)
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
    return struct__2325_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2325(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackside_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__2325_double_conversion_allowed();
}

int is_P027V1_trackside_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__2325_long_convertion_allowed();
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
        compare_struct__2325(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2325_to_double(pValue, nRetValue);
}

int P027V1_trackside_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2325_to_long(pValue, nRetValue);
}

int get_P027V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2325_signature(pfnStrAppend, pData);
}

int set_P027V1_trackside_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__2325_default_value(pValue);
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
    return array__2311_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackside_qdifflist_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__2311(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackside_qdifflist_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable);
    }
    return is_array__2311_double_conversion_allowed();
}

int is_P027V1_trackside_qdifflist_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable);
    }
    return is_array__2311_long_convertion_allowed();
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
        compare_array__2311(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_qdifflist_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable, nRetValue);
    }
    return array__2311_to_double(pValue, nRetValue);
}

int P027V1_trackside_qdifflist_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable, nRetValue);
    }
    return array__2311_to_long(pValue, nRetValue);
}

int get_P027V1_trackside_qdifflist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__2311_signature(pfnStrAppend, pData);
}

int set_P027V1_trackside_qdifflist_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__2311_default_value(pValue);
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
    return struct__2306_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_int_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_int_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2306(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_int_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_int_qdiff_T_TM_baseline2VTable);
    }
    return is_struct__2306_double_conversion_allowed();
}

int is_P027V1_section_int_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_int_qdiff_T_TM_baseline2VTable);
    }
    return is_struct__2306_long_convertion_allowed();
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
        compare_struct__2306(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_int_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2306_to_double(pValue, nRetValue);
}

int P027V1_section_int_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2306_to_long(pValue, nRetValue);
}

int get_P027V1_section_int_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2306_signature(pfnStrAppend, pData);
}

int set_P027V1_section_int_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__2306_default_value(pValue);
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
    return array__2322_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackside_sectionlist_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__2322(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackside_sectionlist_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable);
    }
    return is_array__2322_double_conversion_allowed();
}

int is_P027V1_trackside_sectionlist_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable);
    }
    return is_array__2322_long_convertion_allowed();
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
        compare_array__2322(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_sectionlist_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable, nRetValue);
    }
    return array__2322_to_double(pValue, nRetValue);
}

int P027V1_trackside_sectionlist_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable, nRetValue);
    }
    return array__2322_to_long(pValue, nRetValue);
}

int get_P027V1_trackside_sectionlist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__2322_signature(pfnStrAppend, pData);
}

int set_P027V1_trackside_sectionlist_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__2322_default_value(pValue);
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
    return struct__2314_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2314(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_int_T_TM_baseline2VTable);
    }
    return is_struct__2314_double_conversion_allowed();
}

int is_P027V1_section_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_int_T_TM_baseline2VTable);
    }
    return is_struct__2314_long_convertion_allowed();
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
        compare_struct__2314(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2314_to_double(pValue, nRetValue);
}

int P027V1_section_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__2314_to_long(pValue, nRetValue);
}

int get_P027V1_section_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2314_signature(pfnStrAppend, pData);
}

int set_P027V1_section_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__2314_default_value(pValue);
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
 ** _2_P027V1_OBU_sectionlist_int_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable;

int _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL
        && pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__2368_to_string(pValue, pfnStrAppend, pData);
}

int string_to__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__2368(str, pValue, endptr);
    }
    return nRet;
}

int is__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable);
    }
    return is_array__2368_double_conversion_allowed();
}

int is__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable);
    }
    return is_array__2368_long_convertion_allowed();
}

void compare__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL
        && pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_version >= Scv612
        && pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__2368(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable, nRetValue);
    }
    return array__2368_to_double(pValue, nRetValue);
}

int _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable, nRetValue);
    }
    return array__2368_to_long(pValue, nRetValue);
}

int get__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__2368_signature(pfnStrAppend, pData);
}

int set__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__2368_default_value(pValue);
}

int check__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_string(const char *str, char **endptr)
{
    static _2_P027V1_OBU_sectionlist_int_T_TM_baseline2 rTemp;
    return string_to__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils = {
    _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_string,
    check__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_string,
    string_to__2_P027V1_OBU_sectionlist_int_T_TM_baseline2,
    is__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_double_conversion_allowed,
    _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_double,
    is__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_long_convertion_allowed,
    _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_long,
    compare__2_P027V1_OBU_sectionlist_int_T_TM_baseline2,
    get__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_signature,
    set__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_default_value,
    sizeof(_2_P027V1_OBU_sectionlist_int_T_TM_baseline2)
};

/****************************************************************
 ** _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable;

int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable != NULL
        && pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_2_32_to_string(pValue, pfnStrAppend, pData);
}

int string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_2_32(str, pValue, endptr);
    }
    return nRet;
}

int is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable);
    }
    return is_array_int_2_32_double_conversion_allowed();
}

int is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable);
    }
    return is_array_int_2_32_long_convertion_allowed();
}

void compare__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable != NULL
        && pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable->m_version >= Scv612
        && pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_2_32(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array_int_2_32_to_double(pValue, nRetValue);
}

int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array_int_2_32_to_long(pValue, nRetValue);
}

int get__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_2_32_signature(pfnStrAppend, pData);
}

int set__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    return set_array_int_2_32_default_value(pValue);
}

int check__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_string(const char *str, char **endptr)
{
    static _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 rTemp;
    return string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_Utils = {
    _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_string,
    check__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_string,
    string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2,
    is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_double_conversion_allowed,
    _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_double,
    is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_long_convertion_allowed,
    _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_long,
    compare__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2,
    get__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_signature,
    set__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_default_value,
    sizeof(_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_section_array_qdiff_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_section_array_qdiff_T_TM_baseline2VTable;

int P027V1_section_array_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_array_qdiff_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_section_array_qdiff_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_2_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_array_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_array_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_2(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_array_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_array_qdiff_T_TM_baseline2VTable);
    }
    return is_array_int_2_double_conversion_allowed();
}

int is_P027V1_section_array_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_array_qdiff_T_TM_baseline2VTable);
    }
    return is_array_int_2_long_convertion_allowed();
}

void compare_P027V1_section_array_qdiff_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_section_array_qdiff_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_section_array_qdiff_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_section_array_qdiff_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_section_array_qdiff_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_2(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_array_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_array_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array_int_2_to_double(pValue, nRetValue);
}

int P027V1_section_array_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_array_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_array_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array_int_2_to_long(pValue, nRetValue);
}

int get_P027V1_section_array_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_2_signature(pfnStrAppend, pData);
}

int set_P027V1_section_array_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    return set_array_int_2_default_value(pValue);
}

int check_P027V1_section_array_qdiff_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_section_array_qdiff_T_TM_baseline2 rTemp;
    return string_to_P027V1_section_array_qdiff_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_section_array_qdiff_T_TM_baseline2_Utils = {
    P027V1_section_array_qdiff_T_TM_baseline2_to_string,
    check_P027V1_section_array_qdiff_T_TM_baseline2_string,
    string_to_P027V1_section_array_qdiff_T_TM_baseline2,
    is_P027V1_section_array_qdiff_T_TM_baseline2_double_conversion_allowed,
    P027V1_section_array_qdiff_T_TM_baseline2_to_double,
    is_P027V1_section_array_qdiff_T_TM_baseline2_long_convertion_allowed,
    P027V1_section_array_qdiff_T_TM_baseline2_to_long,
    compare_P027V1_section_array_qdiff_T_TM_baseline2,
    get_P027V1_section_array_qdiff_T_TM_baseline2_signature,
    set_P027V1_section_array_qdiff_T_TM_baseline2_default_value,
    sizeof(P027V1_section_array_qdiff_T_TM_baseline2)
};

/****************************************************************
 ** P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable;

int P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__2311_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__2311(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable);
    }
    return is_array__2311_double_conversion_allowed();
}

int is_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable);
    }
    return is_array__2311_long_convertion_allowed();
}

void compare_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL
        && pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable->m_version >= Scv612
        && pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__2311(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array__2311_to_double(pValue, nRetValue);
}

int P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array__2311_to_long(pValue, nRetValue);
}

int get_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__2311_signature(pfnStrAppend, pData);
}

int set_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__2311_default_value(pValue);
}

int check_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_string(const char *str, char **endptr)
{
    static P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 rTemp;
    return string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_Utils = {
    P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_string,
    check_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_string,
    string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2,
    is_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_double_conversion_allowed,
    P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_double,
    is_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_long_convertion_allowed,
    P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_long,
    compare_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2,
    get_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_signature,
    set_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_default_value,
    sizeof(P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2)
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
 ** Array03_TM 
 ****************************************************************/

struct SimTypeVTable *pSimArray03_TMVTable;

int Array03_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimArray03_TMVTable != NULL
        && pSimArray03_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimArray03_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_3_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Array03_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimArray03_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimArray03_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_3(str, pValue, endptr);
    }
    return nRet;
}

int is_Array03_TM_double_conversion_allowed()
{
    if (pSimArray03_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimArray03_TMVTable);
    }
    return is_array_int_3_double_conversion_allowed();
}

int is_Array03_TM_long_convertion_allowed()
{
    if (pSimArray03_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimArray03_TMVTable);
    }
    return is_array_int_3_long_convertion_allowed();
}

void compare_Array03_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimArray03_TMVTable != NULL
        && pSimArray03_TMVTable->m_version >= Scv612
        && pSimArray03_TMVTable->m_pfnCompare != NULL) {
        if (pSimArray03_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimArray03_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimArray03_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_3(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Array03_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimArray03_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimArray03_TMVTable, nRetValue);
    }
    return array_int_3_to_double(pValue, nRetValue);
}

int Array03_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimArray03_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimArray03_TMVTable, nRetValue);
    }
    return array_int_3_to_long(pValue, nRetValue);
}

int get_Array03_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_3_signature(pfnStrAppend, pData);
}

int set_Array03_TM_default_value(void *pValue)
{
    return set_array_int_3_default_value(pValue);
}

int check_Array03_TM_string(const char *str, char **endptr)
{
    static Array03_TM rTemp;
    return string_to_Array03_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_Array03_TM_Utils = {
    Array03_TM_to_string,
    check_Array03_TM_string,
    string_to_Array03_TM,
    is_Array03_TM_double_conversion_allowed,
    Array03_TM_to_double,
    is_Array03_TM_long_convertion_allowed,
    Array03_TM_to_long,
    compare_Array03_TM,
    get_Array03_TM_signature,
    set_Array03_TM_default_value,
    sizeof(Array03_TM)
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
    return struct__2343_to_string(pValue, pfnStrAppend, pData);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2343(str, pValue, endptr);
    }
    return nRet;
}

int is_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__2343_double_conversion_allowed();
}

int is_MetadataElement_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__2343_long_convertion_allowed();
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
        compare_struct__2343(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2343_to_double(pValue, nRetValue);
}

int MetadataElement_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2343_to_long(pValue, nRetValue);
}

int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2343_signature(pfnStrAppend, pData);
}

int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__2343_default_value(pValue);
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
    return array__2360_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__2360(str, pValue, endptr);
    }
    return nRet;
}

int is_Metadata_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__2360_double_conversion_allowed();
}

int is_Metadata_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__2360_long_convertion_allowed();
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
        compare_array__2360(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__2360_to_double(pValue, nRetValue);
}

int Metadata_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__2360_to_long(pValue, nRetValue);
}

int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__2360_signature(pfnStrAppend, pData);
}

int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_array__2360_default_value(pValue);
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
    return struct__2363_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2363(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__2363_double_conversion_allowed();
}

int is_CompressedPackets_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__2363_long_convertion_allowed();
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
        compare_struct__2363(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2363_to_double(pValue, nRetValue);
}

int CompressedPackets_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2363_to_long(pValue, nRetValue);
}

int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2363_signature(pfnStrAppend, pData);
}

int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__2363_default_value(pValue);
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
