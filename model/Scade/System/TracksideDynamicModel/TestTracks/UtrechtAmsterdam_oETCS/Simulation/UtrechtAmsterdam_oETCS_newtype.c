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
 ** struct__2935 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2935VTable;

static SimFieldUtils struct__2935_fields[] = {
    {"nid_packet", offsetof(struct__2935,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__2935,q_dir), &_Type_Q_DIR_Utils},
    {"valid", offsetof(struct__2935,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(struct__2935,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(struct__2935,endAddress), &_Type_kcg_int_Utils},
};

int struct__2935_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2935VTable != NULL
        && pSimstruct__2935VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2935VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2935_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__2935(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2935VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2935VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2935_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__2935_double_conversion_allowed()
{
    if (pSimstruct__2935VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2935VTable);
    }
    return 0;
}

int is_struct__2935_long_convertion_allowed()
{
    if (pSimstruct__2935VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2935VTable);
    }
    return 0;
}

void compare_struct__2935(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2935VTable != NULL
        && pSimstruct__2935VTable->m_version >= Scv612
        && pSimstruct__2935VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2935VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2935VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2935VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2935_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2935_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2935VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2935VTable, nRetValue);
    }
    return 0;
}

int struct__2935_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2935VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2935VTable, nRetValue);
    }
    return 0;
}

int get_struct__2935_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2935_fields, 5, pfnStrAppend, pData);
}

int set_struct__2935_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__2935*)pValue)->nid_packet));
    set_Q_DIR_default_value(&(((struct__2935*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((struct__2935*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__2935*)pValue)->startAddress));
    set_kcg_int_default_value(&(((struct__2935*)pValue)->endAddress));
    return 1;
}

int check_struct__2935_string(const char *str, char **endptr)
{
    static struct__2935 rTemp;
    return string_to_struct__2935(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2935_Utils = {
    struct__2935_to_string,
    check_struct__2935_string,
    string_to_struct__2935,
    is_struct__2935_double_conversion_allowed,
    struct__2935_to_double,
    is_struct__2935_long_convertion_allowed,
    struct__2935_to_long,
    compare_struct__2935,
    get_struct__2935_signature,
    set_struct__2935_default_value,
    sizeof(struct__2935)
};

/****************************************************************
 ** array__2943 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2943VTable;

int array__2943_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2943VTable != NULL
        && pSimarray__2943VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2943VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__2935_to_string, 30, sizeof(struct__2935), pfnStrAppend, pData);
}

int string_to_array__2943(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2943VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2943VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__2935_Utils, 30, sizeof(struct__2935), endptr);
    }
    return nRet;
}

int is_array__2943_double_conversion_allowed()
{
    if (pSimarray__2943VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__2943VTable);
    }
    return 0;
}

int is_array__2943_long_convertion_allowed()
{
    if (pSimarray__2943VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__2943VTable);
    }
    return 0;
}

void compare_array__2943(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2943VTable != NULL
        && pSimarray__2943VTable->m_version >= Scv612
        && pSimarray__2943VTable->m_pfnCompare != NULL) {
        if (pSimarray__2943VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2943VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2943VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__2935, 30, sizeof(struct__2935), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2943_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2943VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2943VTable, nRetValue);
    }
    return 0;
}

int array__2943_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__2943VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__2943VTable, nRetValue);
    }
    return 0;
}

int get_array__2943_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__2935_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2943_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_struct__2935_default_value(&((struct__2935*)pValue)[i]);
    return 1;
}

int check_array__2943_string(const char *str, char **endptr)
{
    static array__2943 rTemp;
    return string_to_array__2943(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2943_Utils = {
    array__2943_to_string,
    check_array__2943_string,
    string_to_array__2943,
    is_array__2943_double_conversion_allowed,
    array__2943_to_double,
    is_array__2943_long_convertion_allowed,
    array__2943_to_long,
    compare_array__2943,
    get_array__2943_signature,
    set_array__2943_default_value,
    sizeof(array__2943)
};

/****************************************************************
 ** struct__2946 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2946VTable;

static SimFieldUtils struct__2946_fields[] = {
    {"PacketHeaders", offsetof(struct__2946,PacketHeaders), &_Type_array__2943_Utils},
    {"PacketData", offsetof(struct__2946,PacketData), &_Type_array_int_500_Utils},
};

int struct__2946_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2946VTable != NULL
        && pSimstruct__2946VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2946VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2946_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__2946(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2946VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2946VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2946_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__2946_double_conversion_allowed()
{
    if (pSimstruct__2946VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2946VTable);
    }
    return 0;
}

int is_struct__2946_long_convertion_allowed()
{
    if (pSimstruct__2946VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2946VTable);
    }
    return 0;
}

void compare_struct__2946(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2946VTable != NULL
        && pSimstruct__2946VTable->m_version >= Scv612
        && pSimstruct__2946VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2946VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2946VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2946VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2946_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2946_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2946VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2946VTable, nRetValue);
    }
    return 0;
}

int struct__2946_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2946VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2946VTable, nRetValue);
    }
    return 0;
}

int get_struct__2946_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2946_fields, 2, pfnStrAppend, pData);
}

int set_struct__2946_default_value(void *pValue)
{
    set_array__2943_default_value(&(((struct__2946*)pValue)->PacketHeaders));
    set_array_int_500_default_value(&(((struct__2946*)pValue)->PacketData));
    return 1;
}

int check_struct__2946_string(const char *str, char **endptr)
{
    static struct__2946 rTemp;
    return string_to_struct__2946(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2946_Utils = {
    struct__2946_to_string,
    check_struct__2946_string,
    string_to_struct__2946,
    is_struct__2946_double_conversion_allowed,
    struct__2946_to_double,
    is_struct__2946_long_convertion_allowed,
    struct__2946_to_long,
    compare_struct__2946,
    get_struct__2946_signature,
    set_struct__2946_default_value,
    sizeof(struct__2946)
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
 ** struct__2954 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2954VTable;

static SimFieldUtils struct__2954_fields[] = {
    {"L_SECTION", offsetof(struct__2954,L_SECTION), &_Type_kcg_int_Utils},
    {"Q_SECTIONTIMER", offsetof(struct__2954,Q_SECTIONTIMER), &_Type_kcg_int_Utils},
    {"T_SECTIONTIMER", offsetof(struct__2954,T_SECTIONTIMER), &_Type_kcg_int_Utils},
    {"D_SECTIONTIMERSTOPLOC", offsetof(struct__2954,D_SECTIONTIMERSTOPLOC), &_Type_kcg_int_Utils},
};

int struct__2954_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2954VTable != NULL
        && pSimstruct__2954VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2954VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2954_fields, 4, pfnStrAppend, pData);
}

int string_to_struct__2954(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2954VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2954VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2954_fields, 4, endptr);
    }
    return nRet;
}

int is_struct__2954_double_conversion_allowed()
{
    if (pSimstruct__2954VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2954VTable);
    }
    return 0;
}

int is_struct__2954_long_convertion_allowed()
{
    if (pSimstruct__2954VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2954VTable);
    }
    return 0;
}

void compare_struct__2954(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2954VTable != NULL
        && pSimstruct__2954VTable->m_version >= Scv612
        && pSimstruct__2954VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2954VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2954VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2954VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2954_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2954_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2954VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2954VTable, nRetValue);
    }
    return 0;
}

int struct__2954_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2954VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2954VTable, nRetValue);
    }
    return 0;
}

int get_struct__2954_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2954_fields, 4, pfnStrAppend, pData);
}

int set_struct__2954_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__2954*)pValue)->L_SECTION));
    set_kcg_int_default_value(&(((struct__2954*)pValue)->Q_SECTIONTIMER));
    set_kcg_int_default_value(&(((struct__2954*)pValue)->T_SECTIONTIMER));
    set_kcg_int_default_value(&(((struct__2954*)pValue)->D_SECTIONTIMERSTOPLOC));
    return 1;
}

int check_struct__2954_string(const char *str, char **endptr)
{
    static struct__2954 rTemp;
    return string_to_struct__2954(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2954_Utils = {
    struct__2954_to_string,
    check_struct__2954_string,
    string_to_struct__2954,
    is_struct__2954_double_conversion_allowed,
    struct__2954_to_double,
    is_struct__2954_long_convertion_allowed,
    struct__2954_to_long,
    compare_struct__2954,
    get_struct__2954_signature,
    set_struct__2954_default_value,
    sizeof(struct__2954)
};

/****************************************************************
 ** array_int_4_32 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_4_32VTable;

int array_int_4_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_4_32VTable != NULL
        && pSimarray_int_4_32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_4_32VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_4_to_string, 32, sizeof(array_int_4), pfnStrAppend, pData);
}

int string_to_array_int_4_32(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_4_32VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_4_32VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_4_Utils, 32, sizeof(array_int_4), endptr);
    }
    return nRet;
}

int is_array_int_4_32_double_conversion_allowed()
{
    if (pSimarray_int_4_32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_4_32VTable);
    }
    return 0;
}

int is_array_int_4_32_long_convertion_allowed()
{
    if (pSimarray_int_4_32VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_4_32VTable);
    }
    return 0;
}

void compare_array_int_4_32(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_4_32VTable != NULL
        && pSimarray_int_4_32VTable->m_version >= Scv612
        && pSimarray_int_4_32VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_4_32VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_4_32VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_4_32VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_4, 32, sizeof(array_int_4), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_4_32_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_4_32VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_4_32VTable, nRetValue);
    }
    return 0;
}

int array_int_4_32_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_4_32VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_4_32VTable, nRetValue);
    }
    return 0;
}

int get_array_int_4_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_4_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_4_32_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_array_int_4_default_value(&((array_int_4*)pValue)[i]);
    return 1;
}

int check_array_int_4_32_string(const char *str, char **endptr)
{
    static array_int_4_32 rTemp;
    return string_to_array_int_4_32(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_4_32_Utils = {
    array_int_4_32_to_string,
    check_array_int_4_32_string,
    string_to_array_int_4_32,
    is_array_int_4_32_double_conversion_allowed,
    array_int_4_32_to_double,
    is_array_int_4_32_long_convertion_allowed,
    array_int_4_32_to_long,
    compare_array_int_4_32,
    get_array_int_4_32_signature,
    set_array_int_4_32_default_value,
    sizeof(array_int_4_32)
};

/****************************************************************
 ** array_int_128 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_128VTable;

int array_int_128_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_128VTable != NULL
        && pSimarray_int_128VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_128VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 128, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_128(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_128VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_128VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 128, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_128_double_conversion_allowed()
{
    if (pSimarray_int_128VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_128VTable);
    }
    return 0;
}

int is_array_int_128_long_convertion_allowed()
{
    if (pSimarray_int_128VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_128VTable);
    }
    return 0;
}

void compare_array_int_128(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_128VTable != NULL
        && pSimarray_int_128VTable->m_version >= Scv612
        && pSimarray_int_128VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_128VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_128VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_128VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 128, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_128_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_128VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_128VTable, nRetValue);
    }
    return 0;
}

int array_int_128_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_128VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_128VTable, nRetValue);
    }
    return 0;
}

int get_array_int_128_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 128; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_128_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 128; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_128_string(const char *str, char **endptr)
{
    static array_int_128 rTemp;
    return string_to_array_int_128(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_128_Utils = {
    array_int_128_to_string,
    check_array_int_128_string,
    string_to_array_int_128,
    is_array_int_128_double_conversion_allowed,
    array_int_128_to_double,
    is_array_int_128_long_convertion_allowed,
    array_int_128_to_long,
    compare_array_int_128,
    get_array_int_128_signature,
    set_array_int_128_default_value,
    sizeof(array_int_128)
};

/****************************************************************
 ** array__2967 
 ****************************************************************/

struct SimTypeVTable *pSimarray__2967VTable;

int array__2967_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__2967VTable != NULL
        && pSimarray__2967VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__2967VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__2954_to_string, 32, sizeof(struct__2954), pfnStrAppend, pData);
}

int string_to_array__2967(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__2967VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__2967VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__2954_Utils, 32, sizeof(struct__2954), endptr);
    }
    return nRet;
}

int is_array__2967_double_conversion_allowed()
{
    if (pSimarray__2967VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__2967VTable);
    }
    return 0;
}

int is_array__2967_long_convertion_allowed()
{
    if (pSimarray__2967VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__2967VTable);
    }
    return 0;
}

void compare_array__2967(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__2967VTable != NULL
        && pSimarray__2967VTable->m_version >= Scv612
        && pSimarray__2967VTable->m_pfnCompare != NULL) {
        if (pSimarray__2967VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__2967VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__2967VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__2954, 32, sizeof(struct__2954), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__2967_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__2967VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__2967VTable, nRetValue);
    }
    return 0;
}

int array__2967_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__2967VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__2967VTable, nRetValue);
    }
    return 0;
}

int get_array__2967_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__2954_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__2967_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__2954_default_value(&((struct__2954*)pValue)[i]);
    return 1;
}

int check_array__2967_string(const char *str, char **endptr)
{
    static array__2967 rTemp;
    return string_to_array__2967(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__2967_Utils = {
    array__2967_to_string,
    check_array__2967_string,
    string_to_array__2967,
    is_array__2967_double_conversion_allowed,
    array__2967_to_double,
    is_array__2967_long_convertion_allowed,
    array__2967_to_long,
    compare_array__2967,
    get_array__2967_signature,
    set_array__2967_default_value,
    sizeof(array__2967)
};

/****************************************************************
 ** struct__2970 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2970VTable;

static SimFieldUtils struct__2970_fields[] = {
    {"valid", offsetof(struct__2970,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__2970,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__2970,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__2970,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__2970,Q_SCALE), &_Type_kcg_int_Utils},
    {"V_LOA", offsetof(struct__2970,V_LOA), &_Type_kcg_int_Utils},
    {"T_LOA", offsetof(struct__2970,T_LOA), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__2970,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__2970,SECTIONS), &_Type_array__2967_Utils},
    {"L_ENDSECTION", offsetof(struct__2970,L_ENDSECTION), &_Type_kcg_int_Utils},
    {"Q_SECTIONTIMER", offsetof(struct__2970,Q_SECTIONTIMER), &_Type_kcg_int_Utils},
    {"T_SECTIONTIMER", offsetof(struct__2970,T_SECTIONTIMER), &_Type_kcg_int_Utils},
    {"D_SECTIONTIMERSTOPLOC", offsetof(struct__2970,D_SECTIONTIMERSTOPLOC), &_Type_kcg_int_Utils},
    {"Q_ENDTIMER", offsetof(struct__2970,Q_ENDTIMER), &_Type_kcg_int_Utils},
    {"T_ENDTIMER", offsetof(struct__2970,T_ENDTIMER), &_Type_kcg_int_Utils},
    {"D_ENDTIMERSTARTLOC", offsetof(struct__2970,D_ENDTIMERSTARTLOC), &_Type_kcg_int_Utils},
    {"Q_DANGERPOINT", offsetof(struct__2970,Q_DANGERPOINT), &_Type_kcg_int_Utils},
    {"D_DP", offsetof(struct__2970,D_DP), &_Type_kcg_int_Utils},
    {"V_RELEASEDP", offsetof(struct__2970,V_RELEASEDP), &_Type_kcg_int_Utils},
    {"Q_OVERLAP", offsetof(struct__2970,Q_OVERLAP), &_Type_kcg_int_Utils},
    {"D_STARTOL", offsetof(struct__2970,D_STARTOL), &_Type_kcg_int_Utils},
    {"T_OL", offsetof(struct__2970,T_OL), &_Type_kcg_int_Utils},
    {"D_OL", offsetof(struct__2970,D_OL), &_Type_kcg_int_Utils},
    {"V_RELEASEOL", offsetof(struct__2970,V_RELEASEOL), &_Type_kcg_int_Utils},
};

int struct__2970_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2970VTable != NULL
        && pSimstruct__2970VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2970VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2970_fields, 24, pfnStrAppend, pData);
}

int string_to_struct__2970(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2970VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2970VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2970_fields, 24, endptr);
    }
    return nRet;
}

int is_struct__2970_double_conversion_allowed()
{
    if (pSimstruct__2970VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2970VTable);
    }
    return 0;
}

int is_struct__2970_long_convertion_allowed()
{
    if (pSimstruct__2970VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2970VTable);
    }
    return 0;
}

void compare_struct__2970(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2970VTable != NULL
        && pSimstruct__2970VTable->m_version >= Scv612
        && pSimstruct__2970VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2970VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2970VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2970VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2970_fields, 24, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2970_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2970VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2970VTable, nRetValue);
    }
    return 0;
}

int struct__2970_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2970VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2970VTable, nRetValue);
    }
    return 0;
}

int get_struct__2970_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2970_fields, 24, pfnStrAppend, pData);
}

int set_struct__2970_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2970*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->V_LOA));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->T_LOA));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->N_ITER));
    set_array__2967_default_value(&(((struct__2970*)pValue)->SECTIONS));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->L_ENDSECTION));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->Q_SECTIONTIMER));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->T_SECTIONTIMER));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->D_SECTIONTIMERSTOPLOC));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->Q_ENDTIMER));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->T_ENDTIMER));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->D_ENDTIMERSTARTLOC));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->Q_DANGERPOINT));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->D_DP));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->V_RELEASEDP));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->Q_OVERLAP));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->D_STARTOL));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->T_OL));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->D_OL));
    set_kcg_int_default_value(&(((struct__2970*)pValue)->V_RELEASEOL));
    return 1;
}

int check_struct__2970_string(const char *str, char **endptr)
{
    static struct__2970 rTemp;
    return string_to_struct__2970(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2970_Utils = {
    struct__2970_to_string,
    check_struct__2970_string,
    string_to_struct__2970,
    is_struct__2970_double_conversion_allowed,
    struct__2970_to_double,
    is_struct__2970_long_convertion_allowed,
    struct__2970_to_long,
    compare_struct__2970,
    get_struct__2970_signature,
    set_struct__2970_default_value,
    sizeof(struct__2970)
};

/****************************************************************
 ** struct__2997 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__2997VTable;

static SimFieldUtils struct__2997_fields[] = {
    {"valid", offsetof(struct__2997,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__2997,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__2997,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__2997,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__2997,Q_SCALE), &_Type_kcg_int_Utils},
    {"NID_TSR", offsetof(struct__2997,NID_TSR), &_Type_kcg_int_Utils},
    {"D_TSR", offsetof(struct__2997,D_TSR), &_Type_kcg_int_Utils},
    {"L_TSR", offsetof(struct__2997,L_TSR), &_Type_kcg_int_Utils},
    {"Q_FRONT", offsetof(struct__2997,Q_FRONT), &_Type_kcg_int_Utils},
    {"V_TSR", offsetof(struct__2997,V_TSR), &_Type_kcg_int_Utils},
};

int struct__2997_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__2997VTable != NULL
        && pSimstruct__2997VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__2997VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__2997_fields, 10, pfnStrAppend, pData);
}

int string_to_struct__2997(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__2997VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__2997VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__2997_fields, 10, endptr);
    }
    return nRet;
}

int is_struct__2997_double_conversion_allowed()
{
    if (pSimstruct__2997VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__2997VTable);
    }
    return 0;
}

int is_struct__2997_long_convertion_allowed()
{
    if (pSimstruct__2997VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__2997VTable);
    }
    return 0;
}

void compare_struct__2997(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__2997VTable != NULL
        && pSimstruct__2997VTable->m_version >= Scv612
        && pSimstruct__2997VTable->m_pfnCompare != NULL) {
        if (pSimstruct__2997VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__2997VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__2997VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__2997_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__2997_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__2997VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__2997VTable, nRetValue);
    }
    return 0;
}

int struct__2997_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__2997VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__2997VTable, nRetValue);
    }
    return 0;
}

int get_struct__2997_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__2997_fields, 10, pfnStrAppend, pData);
}

int set_struct__2997_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__2997*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__2997*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__2997*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__2997*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__2997*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__2997*)pValue)->NID_TSR));
    set_kcg_int_default_value(&(((struct__2997*)pValue)->D_TSR));
    set_kcg_int_default_value(&(((struct__2997*)pValue)->L_TSR));
    set_kcg_int_default_value(&(((struct__2997*)pValue)->Q_FRONT));
    set_kcg_int_default_value(&(((struct__2997*)pValue)->V_TSR));
    return 1;
}

int check_struct__2997_string(const char *str, char **endptr)
{
    static struct__2997 rTemp;
    return string_to_struct__2997(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__2997_Utils = {
    struct__2997_to_string,
    check_struct__2997_string,
    string_to_struct__2997,
    is_struct__2997_double_conversion_allowed,
    struct__2997_to_double,
    is_struct__2997_long_convertion_allowed,
    struct__2997_to_long,
    compare_struct__2997,
    get_struct__2997_signature,
    set_struct__2997_default_value,
    sizeof(struct__2997)
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
 ** struct__3013 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3013VTable;

static SimFieldUtils struct__3013_fields[] = {
    {"M_LEVELTR", offsetof(struct__3013,M_LEVELTR), &_Type_kcg_int_Utils},
    {"NID_NTC", offsetof(struct__3013,NID_NTC), &_Type_kcg_int_Utils},
    {"L_ACKLEVELTR", offsetof(struct__3013,L_ACKLEVELTR), &_Type_kcg_int_Utils},
};

int struct__3013_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3013VTable != NULL
        && pSimstruct__3013VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3013VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3013_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__3013(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3013VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3013VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3013_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__3013_double_conversion_allowed()
{
    if (pSimstruct__3013VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__3013VTable);
    }
    return 0;
}

int is_struct__3013_long_convertion_allowed()
{
    if (pSimstruct__3013VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__3013VTable);
    }
    return 0;
}

void compare_struct__3013(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3013VTable != NULL
        && pSimstruct__3013VTable->m_version >= Scv612
        && pSimstruct__3013VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3013VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3013VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3013VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3013_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3013_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3013VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3013VTable, nRetValue);
    }
    return 0;
}

int struct__3013_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__3013VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__3013VTable, nRetValue);
    }
    return 0;
}

int get_struct__3013_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3013_fields, 3, pfnStrAppend, pData);
}

int set_struct__3013_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__3013*)pValue)->M_LEVELTR));
    set_kcg_int_default_value(&(((struct__3013*)pValue)->NID_NTC));
    set_kcg_int_default_value(&(((struct__3013*)pValue)->L_ACKLEVELTR));
    return 1;
}

int check_struct__3013_string(const char *str, char **endptr)
{
    static struct__3013 rTemp;
    return string_to_struct__3013(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3013_Utils = {
    struct__3013_to_string,
    check_struct__3013_string,
    string_to_struct__3013,
    is_struct__3013_double_conversion_allowed,
    struct__3013_to_double,
    is_struct__3013_long_convertion_allowed,
    struct__3013_to_long,
    compare_struct__3013,
    get_struct__3013_signature,
    set_struct__3013_default_value,
    sizeof(struct__3013)
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
 ** array__3025 
 ****************************************************************/

struct SimTypeVTable *pSimarray__3025VTable;

int array__3025_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__3025VTable != NULL
        && pSimarray__3025VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__3025VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__3013_to_string, 33, sizeof(struct__3013), pfnStrAppend, pData);
}

int string_to_array__3025(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__3025VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__3025VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__3013_Utils, 33, sizeof(struct__3013), endptr);
    }
    return nRet;
}

int is_array__3025_double_conversion_allowed()
{
    if (pSimarray__3025VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__3025VTable);
    }
    return 0;
}

int is_array__3025_long_convertion_allowed()
{
    if (pSimarray__3025VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__3025VTable);
    }
    return 0;
}

void compare_array__3025(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__3025VTable != NULL
        && pSimarray__3025VTable->m_version >= Scv612
        && pSimarray__3025VTable->m_pfnCompare != NULL) {
        if (pSimarray__3025VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__3025VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__3025VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__3013, 33, sizeof(struct__3013), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__3025_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__3025VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__3025VTable, nRetValue);
    }
    return 0;
}

int array__3025_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__3025VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__3025VTable, nRetValue);
    }
    return 0;
}

int get_array__3025_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__3013_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__3025_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__3013_default_value(&((struct__3013*)pValue)[i]);
    return 1;
}

int check_array__3025_string(const char *str, char **endptr)
{
    static array__3025 rTemp;
    return string_to_array__3025(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__3025_Utils = {
    array__3025_to_string,
    check_array__3025_string,
    string_to_array__3025,
    is_array__3025_double_conversion_allowed,
    array__3025_to_double,
    is_array__3025_long_convertion_allowed,
    array__3025_to_long,
    compare_array__3025,
    get_array__3025_signature,
    set_array__3025_default_value,
    sizeof(array__3025)
};

/****************************************************************
 ** array__3028 
 ****************************************************************/

struct SimTypeVTable *pSimarray__3028VTable;

int array__3028_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__3028VTable != NULL
        && pSimarray__3028VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__3028VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__3013_to_string, 32, sizeof(struct__3013), pfnStrAppend, pData);
}

int string_to_array__3028(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__3028VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__3028VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__3013_Utils, 32, sizeof(struct__3013), endptr);
    }
    return nRet;
}

int is_array__3028_double_conversion_allowed()
{
    if (pSimarray__3028VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__3028VTable);
    }
    return 0;
}

int is_array__3028_long_convertion_allowed()
{
    if (pSimarray__3028VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__3028VTable);
    }
    return 0;
}

void compare_array__3028(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__3028VTable != NULL
        && pSimarray__3028VTable->m_version >= Scv612
        && pSimarray__3028VTable->m_pfnCompare != NULL) {
        if (pSimarray__3028VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__3028VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__3028VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__3013, 32, sizeof(struct__3013), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__3028_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__3028VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__3028VTable, nRetValue);
    }
    return 0;
}

int array__3028_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__3028VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__3028VTable, nRetValue);
    }
    return 0;
}

int get_array__3028_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__3013_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__3028_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__3013_default_value(&((struct__3013*)pValue)[i]);
    return 1;
}

int check_array__3028_string(const char *str, char **endptr)
{
    static array__3028 rTemp;
    return string_to_array__3028(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__3028_Utils = {
    array__3028_to_string,
    check_array__3028_string,
    string_to_array__3028,
    is_array__3028_double_conversion_allowed,
    array__3028_to_double,
    is_array__3028_long_convertion_allowed,
    array__3028_to_long,
    compare_array__3028,
    get_array__3028_signature,
    set_array__3028_default_value,
    sizeof(array__3028)
};

/****************************************************************
 ** struct__3031 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3031VTable;

static SimFieldUtils struct__3031_fields[] = {
    {"valid", offsetof(struct__3031,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__3031,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__3031,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__3031,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__3031,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_LEVELTR", offsetof(struct__3031,D_LEVELTR), &_Type_kcg_int_Utils},
    {"M_LEVELTR", offsetof(struct__3031,M_LEVELTR), &_Type_kcg_int_Utils},
    {"NID_NTC", offsetof(struct__3031,NID_NTC), &_Type_kcg_int_Utils},
    {"L_ACKLEVELTR", offsetof(struct__3031,L_ACKLEVELTR), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__3031,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__3031,SECTIONS), &_Type_array__3028_Utils},
};

int struct__3031_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3031VTable != NULL
        && pSimstruct__3031VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3031VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3031_fields, 11, pfnStrAppend, pData);
}

int string_to_struct__3031(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3031VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3031VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3031_fields, 11, endptr);
    }
    return nRet;
}

int is_struct__3031_double_conversion_allowed()
{
    if (pSimstruct__3031VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__3031VTable);
    }
    return 0;
}

int is_struct__3031_long_convertion_allowed()
{
    if (pSimstruct__3031VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__3031VTable);
    }
    return 0;
}

void compare_struct__3031(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3031VTable != NULL
        && pSimstruct__3031VTable->m_version >= Scv612
        && pSimstruct__3031VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3031VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3031VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3031VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3031_fields, 11, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3031_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3031VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3031VTable, nRetValue);
    }
    return 0;
}

int struct__3031_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__3031VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__3031VTable, nRetValue);
    }
    return 0;
}

int get_struct__3031_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3031_fields, 11, pfnStrAppend, pData);
}

int set_struct__3031_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__3031*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__3031*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__3031*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__3031*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__3031*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__3031*)pValue)->D_LEVELTR));
    set_kcg_int_default_value(&(((struct__3031*)pValue)->M_LEVELTR));
    set_kcg_int_default_value(&(((struct__3031*)pValue)->NID_NTC));
    set_kcg_int_default_value(&(((struct__3031*)pValue)->L_ACKLEVELTR));
    set_kcg_int_default_value(&(((struct__3031*)pValue)->N_ITER));
    set_array__3028_default_value(&(((struct__3031*)pValue)->SECTIONS));
    return 1;
}

int check_struct__3031_string(const char *str, char **endptr)
{
    static struct__3031 rTemp;
    return string_to_struct__3031(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3031_Utils = {
    struct__3031_to_string,
    check_struct__3031_string,
    string_to_struct__3031,
    is_struct__3031_double_conversion_allowed,
    struct__3031_to_double,
    is_struct__3031_long_convertion_allowed,
    struct__3031_to_long,
    compare_struct__3031,
    get_struct__3031_signature,
    set_struct__3031_default_value,
    sizeof(struct__3031)
};

/****************************************************************
 ** array_int_7 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_7VTable;

int array_int_7_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_7VTable != NULL
        && pSimarray_int_7VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_7VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 7, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_7(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_7VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_7VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 7, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_7_double_conversion_allowed()
{
    if (pSimarray_int_7VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_7VTable);
    }
    return 0;
}

int is_array_int_7_long_convertion_allowed()
{
    if (pSimarray_int_7VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_7VTable);
    }
    return 0;
}

void compare_array_int_7(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_7VTable != NULL
        && pSimarray_int_7VTable->m_version >= Scv612
        && pSimarray_int_7VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_7VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_7VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_7VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 7, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_7_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_7VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_7VTable, nRetValue);
    }
    return 0;
}

int array_int_7_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_7VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_7VTable, nRetValue);
    }
    return 0;
}

int get_array_int_7_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 7; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_7_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 7; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_7_string(const char *str, char **endptr)
{
    static array_int_7 rTemp;
    return string_to_array_int_7(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_7_Utils = {
    array_int_7_to_string,
    check_array_int_7_string,
    string_to_array_int_7,
    is_array_int_7_double_conversion_allowed,
    array_int_7_to_double,
    is_array_int_7_long_convertion_allowed,
    array_int_7_to_long,
    compare_array_int_7,
    get_array_int_7_signature,
    set_array_int_7_default_value,
    sizeof(array_int_7)
};

/****************************************************************
 ** struct__3048 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3048VTable;

static SimFieldUtils struct__3048_fields[] = {
    {"D_LINK", offsetof(struct__3048,D_LINK), &_Type_kcg_int_Utils},
    {"Q_NEWCOUNTRY", offsetof(struct__3048,Q_NEWCOUNTRY), &_Type_kcg_int_Utils},
    {"NID_C", offsetof(struct__3048,NID_C), &_Type_kcg_int_Utils},
    {"NID_BG", offsetof(struct__3048,NID_BG), &_Type_kcg_int_Utils},
    {"Q_LINKORIENTATION", offsetof(struct__3048,Q_LINKORIENTATION), &_Type_kcg_int_Utils},
    {"Q_LINKREACTION", offsetof(struct__3048,Q_LINKREACTION), &_Type_kcg_int_Utils},
    {"Q_LOCACC", offsetof(struct__3048,Q_LOCACC), &_Type_kcg_int_Utils},
};

int struct__3048_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3048VTable != NULL
        && pSimstruct__3048VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3048VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3048_fields, 7, pfnStrAppend, pData);
}

int string_to_struct__3048(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3048VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3048VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3048_fields, 7, endptr);
    }
    return nRet;
}

int is_struct__3048_double_conversion_allowed()
{
    if (pSimstruct__3048VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__3048VTable);
    }
    return 0;
}

int is_struct__3048_long_convertion_allowed()
{
    if (pSimstruct__3048VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__3048VTable);
    }
    return 0;
}

void compare_struct__3048(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3048VTable != NULL
        && pSimstruct__3048VTable->m_version >= Scv612
        && pSimstruct__3048VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3048VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3048VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3048VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3048_fields, 7, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3048_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3048VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3048VTable, nRetValue);
    }
    return 0;
}

int struct__3048_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__3048VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__3048VTable, nRetValue);
    }
    return 0;
}

int get_struct__3048_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3048_fields, 7, pfnStrAppend, pData);
}

int set_struct__3048_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__3048*)pValue)->D_LINK));
    set_kcg_int_default_value(&(((struct__3048*)pValue)->Q_NEWCOUNTRY));
    set_kcg_int_default_value(&(((struct__3048*)pValue)->NID_C));
    set_kcg_int_default_value(&(((struct__3048*)pValue)->NID_BG));
    set_kcg_int_default_value(&(((struct__3048*)pValue)->Q_LINKORIENTATION));
    set_kcg_int_default_value(&(((struct__3048*)pValue)->Q_LINKREACTION));
    set_kcg_int_default_value(&(((struct__3048*)pValue)->Q_LOCACC));
    return 1;
}

int check_struct__3048_string(const char *str, char **endptr)
{
    static struct__3048 rTemp;
    return string_to_struct__3048(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3048_Utils = {
    struct__3048_to_string,
    check_struct__3048_string,
    string_to_struct__3048,
    is_struct__3048_double_conversion_allowed,
    struct__3048_to_double,
    is_struct__3048_long_convertion_allowed,
    struct__3048_to_long,
    compare_struct__3048,
    get_struct__3048_signature,
    set_struct__3048_default_value,
    sizeof(struct__3048)
};

/****************************************************************
 ** array_int_7_33 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_7_33VTable;

int array_int_7_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_7_33VTable != NULL
        && pSimarray_int_7_33VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_7_33VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_7_to_string, 33, sizeof(array_int_7), pfnStrAppend, pData);
}

int string_to_array_int_7_33(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_7_33VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_7_33VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_7_Utils, 33, sizeof(array_int_7), endptr);
    }
    return nRet;
}

int is_array_int_7_33_double_conversion_allowed()
{
    if (pSimarray_int_7_33VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_7_33VTable);
    }
    return 0;
}

int is_array_int_7_33_long_convertion_allowed()
{
    if (pSimarray_int_7_33VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_7_33VTable);
    }
    return 0;
}

void compare_array_int_7_33(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_7_33VTable != NULL
        && pSimarray_int_7_33VTable->m_version >= Scv612
        && pSimarray_int_7_33VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_7_33VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_7_33VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_7_33VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_7, 33, sizeof(array_int_7), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_7_33_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_7_33VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_7_33VTable, nRetValue);
    }
    return 0;
}

int array_int_7_33_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_7_33VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_7_33VTable, nRetValue);
    }
    return 0;
}

int get_array_int_7_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_7_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_7_33_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_array_int_7_default_value(&((array_int_7*)pValue)[i]);
    return 1;
}

int check_array_int_7_33_string(const char *str, char **endptr)
{
    static array_int_7_33 rTemp;
    return string_to_array_int_7_33(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_7_33_Utils = {
    array_int_7_33_to_string,
    check_array_int_7_33_string,
    string_to_array_int_7_33,
    is_array_int_7_33_double_conversion_allowed,
    array_int_7_33_to_double,
    is_array_int_7_33_long_convertion_allowed,
    array_int_7_33_to_long,
    compare_array_int_7_33,
    get_array_int_7_33_signature,
    set_array_int_7_33_default_value,
    sizeof(array_int_7_33)
};

/****************************************************************
 ** array_int_231 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_231VTable;

int array_int_231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_231VTable != NULL
        && pSimarray_int_231VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_231VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 231, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_231(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_231VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_231VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 231, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_231_double_conversion_allowed()
{
    if (pSimarray_int_231VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_231VTable);
    }
    return 0;
}

int is_array_int_231_long_convertion_allowed()
{
    if (pSimarray_int_231VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_231VTable);
    }
    return 0;
}

void compare_array_int_231(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_231VTable != NULL
        && pSimarray_int_231VTable->m_version >= Scv612
        && pSimarray_int_231VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_231VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_231VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_231VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 231, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_231_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_231VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_231VTable, nRetValue);
    }
    return 0;
}

int array_int_231_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_231VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_231VTable, nRetValue);
    }
    return 0;
}

int get_array_int_231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 231; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_231_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 231; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_231_string(const char *str, char **endptr)
{
    static array_int_231 rTemp;
    return string_to_array_int_231(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_231_Utils = {
    array_int_231_to_string,
    check_array_int_231_string,
    string_to_array_int_231,
    is_array_int_231_double_conversion_allowed,
    array_int_231_to_double,
    is_array_int_231_long_convertion_allowed,
    array_int_231_to_long,
    compare_array_int_231,
    get_array_int_231_signature,
    set_array_int_231_default_value,
    sizeof(array_int_231)
};

/****************************************************************
 ** array__3064 
 ****************************************************************/

struct SimTypeVTable *pSimarray__3064VTable;

int array__3064_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__3064VTable != NULL
        && pSimarray__3064VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__3064VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__3048_to_string, 33, sizeof(struct__3048), pfnStrAppend, pData);
}

int string_to_array__3064(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__3064VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__3064VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__3048_Utils, 33, sizeof(struct__3048), endptr);
    }
    return nRet;
}

int is_array__3064_double_conversion_allowed()
{
    if (pSimarray__3064VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__3064VTable);
    }
    return 0;
}

int is_array__3064_long_convertion_allowed()
{
    if (pSimarray__3064VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__3064VTable);
    }
    return 0;
}

void compare_array__3064(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__3064VTable != NULL
        && pSimarray__3064VTable->m_version >= Scv612
        && pSimarray__3064VTable->m_pfnCompare != NULL) {
        if (pSimarray__3064VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__3064VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__3064VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__3048, 33, sizeof(struct__3048), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__3064_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__3064VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__3064VTable, nRetValue);
    }
    return 0;
}

int array__3064_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__3064VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__3064VTable, nRetValue);
    }
    return 0;
}

int get_array__3064_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__3048_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__3064_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__3048_default_value(&((struct__3048*)pValue)[i]);
    return 1;
}

int check_array__3064_string(const char *str, char **endptr)
{
    static array__3064 rTemp;
    return string_to_array__3064(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__3064_Utils = {
    array__3064_to_string,
    check_array__3064_string,
    string_to_array__3064,
    is_array__3064_double_conversion_allowed,
    array__3064_to_double,
    is_array__3064_long_convertion_allowed,
    array__3064_to_long,
    compare_array__3064,
    get_array__3064_signature,
    set_array__3064_default_value,
    sizeof(array__3064)
};

/****************************************************************
 ** array__3067 
 ****************************************************************/

struct SimTypeVTable *pSimarray__3067VTable;

int array__3067_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__3067VTable != NULL
        && pSimarray__3067VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__3067VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__3048_to_string, 32, sizeof(struct__3048), pfnStrAppend, pData);
}

int string_to_array__3067(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__3067VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__3067VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__3048_Utils, 32, sizeof(struct__3048), endptr);
    }
    return nRet;
}

int is_array__3067_double_conversion_allowed()
{
    if (pSimarray__3067VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__3067VTable);
    }
    return 0;
}

int is_array__3067_long_convertion_allowed()
{
    if (pSimarray__3067VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__3067VTable);
    }
    return 0;
}

void compare_array__3067(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__3067VTable != NULL
        && pSimarray__3067VTable->m_version >= Scv612
        && pSimarray__3067VTable->m_pfnCompare != NULL) {
        if (pSimarray__3067VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__3067VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__3067VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__3048, 32, sizeof(struct__3048), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__3067_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__3067VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__3067VTable, nRetValue);
    }
    return 0;
}

int array__3067_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__3067VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__3067VTable, nRetValue);
    }
    return 0;
}

int get_array__3067_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__3048_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__3067_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__3048_default_value(&((struct__3048*)pValue)[i]);
    return 1;
}

int check_array__3067_string(const char *str, char **endptr)
{
    static array__3067 rTemp;
    return string_to_array__3067(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__3067_Utils = {
    array__3067_to_string,
    check_array__3067_string,
    string_to_array__3067,
    is_array__3067_double_conversion_allowed,
    array__3067_to_double,
    is_array__3067_long_convertion_allowed,
    array__3067_to_long,
    compare_array__3067,
    get_array__3067_signature,
    set_array__3067_default_value,
    sizeof(array__3067)
};

/****************************************************************
 ** struct__3070 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3070VTable;

static SimFieldUtils struct__3070_fields[] = {
    {"valid", offsetof(struct__3070,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__3070,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__3070,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__3070,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__3070,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_LINK", offsetof(struct__3070,D_LINK), &_Type_kcg_int_Utils},
    {"Q_NEWCOUNTRY", offsetof(struct__3070,Q_NEWCOUNTRY), &_Type_kcg_int_Utils},
    {"NID_C", offsetof(struct__3070,NID_C), &_Type_kcg_int_Utils},
    {"NID_BG", offsetof(struct__3070,NID_BG), &_Type_kcg_int_Utils},
    {"Q_LINKORIENTATION", offsetof(struct__3070,Q_LINKORIENTATION), &_Type_kcg_int_Utils},
    {"Q_LINKREACTION", offsetof(struct__3070,Q_LINKREACTION), &_Type_kcg_int_Utils},
    {"Q_LOCACC", offsetof(struct__3070,Q_LOCACC), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__3070,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__3070,SECTIONS), &_Type_array__3067_Utils},
};

int struct__3070_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3070VTable != NULL
        && pSimstruct__3070VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3070VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3070_fields, 14, pfnStrAppend, pData);
}

int string_to_struct__3070(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3070VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3070VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3070_fields, 14, endptr);
    }
    return nRet;
}

int is_struct__3070_double_conversion_allowed()
{
    if (pSimstruct__3070VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__3070VTable);
    }
    return 0;
}

int is_struct__3070_long_convertion_allowed()
{
    if (pSimstruct__3070VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__3070VTable);
    }
    return 0;
}

void compare_struct__3070(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3070VTable != NULL
        && pSimstruct__3070VTable->m_version >= Scv612
        && pSimstruct__3070VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3070VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3070VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3070VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3070_fields, 14, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3070_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3070VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3070VTable, nRetValue);
    }
    return 0;
}

int struct__3070_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__3070VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__3070VTable, nRetValue);
    }
    return 0;
}

int get_struct__3070_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3070_fields, 14, pfnStrAppend, pData);
}

int set_struct__3070_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__3070*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__3070*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__3070*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__3070*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__3070*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__3070*)pValue)->D_LINK));
    set_kcg_int_default_value(&(((struct__3070*)pValue)->Q_NEWCOUNTRY));
    set_kcg_int_default_value(&(((struct__3070*)pValue)->NID_C));
    set_kcg_int_default_value(&(((struct__3070*)pValue)->NID_BG));
    set_kcg_int_default_value(&(((struct__3070*)pValue)->Q_LINKORIENTATION));
    set_kcg_int_default_value(&(((struct__3070*)pValue)->Q_LINKREACTION));
    set_kcg_int_default_value(&(((struct__3070*)pValue)->Q_LOCACC));
    set_kcg_int_default_value(&(((struct__3070*)pValue)->N_ITER));
    set_array__3067_default_value(&(((struct__3070*)pValue)->SECTIONS));
    return 1;
}

int check_struct__3070_string(const char *str, char **endptr)
{
    static struct__3070 rTemp;
    return string_to_struct__3070(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3070_Utils = {
    struct__3070_to_string,
    check_struct__3070_string,
    string_to_struct__3070,
    is_struct__3070_double_conversion_allowed,
    struct__3070_to_double,
    is_struct__3070_long_convertion_allowed,
    struct__3070_to_long,
    compare_struct__3070,
    get_struct__3070_signature,
    set_struct__3070_default_value,
    sizeof(struct__3070)
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
 ** struct__3090 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3090VTable;

static SimFieldUtils struct__3090_fields[] = {
    {"valid", offsetof(struct__3090,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__3090,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__3090,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__3090,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__3090,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_VALIDNV", offsetof(struct__3090,D_VALIDNV), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__3090,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__3090,SECTIONS), &_Type_array_int_32_Utils},
    {"V_NVSHUNT", offsetof(struct__3090,V_NVSHUNT), &_Type_kcg_int_Utils},
    {"V_NVSTFF", offsetof(struct__3090,V_NVSTFF), &_Type_kcg_int_Utils},
    {"V_NVONSIGHT", offsetof(struct__3090,V_NVONSIGHT), &_Type_kcg_int_Utils},
    {"V_NVUNFIT", offsetof(struct__3090,V_NVUNFIT), &_Type_kcg_int_Utils},
    {"V_NVREL", offsetof(struct__3090,V_NVREL), &_Type_kcg_int_Utils},
    {"D_NVROLL", offsetof(struct__3090,D_NVROLL), &_Type_kcg_int_Utils},
    {"Q_NVSRBKTRG", offsetof(struct__3090,Q_NVSRBKTRG), &_Type_kcg_int_Utils},
    {"Q_NVEMRRLS", offsetof(struct__3090,Q_NVEMRRLS), &_Type_kcg_int_Utils},
    {"V_NVALLOWOVTRP", offsetof(struct__3090,V_NVALLOWOVTRP), &_Type_kcg_int_Utils},
    {"V_NVSUPOVTRP", offsetof(struct__3090,V_NVSUPOVTRP), &_Type_kcg_int_Utils},
    {"D_NVOVTRP", offsetof(struct__3090,D_NVOVTRP), &_Type_kcg_int_Utils},
    {"T_NVOVTRP", offsetof(struct__3090,T_NVOVTRP), &_Type_kcg_int_Utils},
    {"D_NVPOTRP", offsetof(struct__3090,D_NVPOTRP), &_Type_kcg_int_Utils},
    {"M_NVCONTACT", offsetof(struct__3090,M_NVCONTACT), &_Type_kcg_int_Utils},
    {"T_NVCONTACT", offsetof(struct__3090,T_NVCONTACT), &_Type_kcg_int_Utils},
    {"M_NVDERUN", offsetof(struct__3090,M_NVDERUN), &_Type_kcg_int_Utils},
    {"D_NVSTFF", offsetof(struct__3090,D_NVSTFF), &_Type_kcg_int_Utils},
    {"Q_NVDRIVER_ADHES", offsetof(struct__3090,Q_NVDRIVER_ADHES), &_Type_kcg_int_Utils},
};

int struct__3090_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3090VTable != NULL
        && pSimstruct__3090VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3090VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3090_fields, 26, pfnStrAppend, pData);
}

int string_to_struct__3090(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3090VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3090VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3090_fields, 26, endptr);
    }
    return nRet;
}

int is_struct__3090_double_conversion_allowed()
{
    if (pSimstruct__3090VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__3090VTable);
    }
    return 0;
}

int is_struct__3090_long_convertion_allowed()
{
    if (pSimstruct__3090VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__3090VTable);
    }
    return 0;
}

void compare_struct__3090(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3090VTable != NULL
        && pSimstruct__3090VTable->m_version >= Scv612
        && pSimstruct__3090VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3090VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3090VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3090VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3090_fields, 26, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3090_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3090VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3090VTable, nRetValue);
    }
    return 0;
}

int struct__3090_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__3090VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__3090VTable, nRetValue);
    }
    return 0;
}

int get_struct__3090_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3090_fields, 26, pfnStrAppend, pData);
}

int set_struct__3090_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__3090*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->D_VALIDNV));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->N_ITER));
    set_array_int_32_default_value(&(((struct__3090*)pValue)->SECTIONS));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->V_NVSHUNT));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->V_NVSTFF));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->V_NVONSIGHT));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->V_NVUNFIT));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->V_NVREL));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->D_NVROLL));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->Q_NVSRBKTRG));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->Q_NVEMRRLS));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->V_NVALLOWOVTRP));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->V_NVSUPOVTRP));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->D_NVOVTRP));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->T_NVOVTRP));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->D_NVPOTRP));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->M_NVCONTACT));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->T_NVCONTACT));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->M_NVDERUN));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->D_NVSTFF));
    set_kcg_int_default_value(&(((struct__3090*)pValue)->Q_NVDRIVER_ADHES));
    return 1;
}

int check_struct__3090_string(const char *str, char **endptr)
{
    static struct__3090 rTemp;
    return string_to_struct__3090(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3090_Utils = {
    struct__3090_to_string,
    check_struct__3090_string,
    string_to_struct__3090,
    is_struct__3090_double_conversion_allowed,
    struct__3090_to_double,
    is_struct__3090_long_convertion_allowed,
    struct__3090_to_long,
    compare_struct__3090,
    get_struct__3090_signature,
    set_struct__3090_default_value,
    sizeof(struct__3090)
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
 ** struct__3122 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3122VTable;

static SimFieldUtils struct__3122_fields[] = {
    {"NC_DIFF", offsetof(struct__3122,NC_DIFF), &_Type_kcg_int_Utils},
    {"V_DIFF", offsetof(struct__3122,V_DIFF), &_Type_kcg_int_Utils},
};

int struct__3122_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3122VTable != NULL
        && pSimstruct__3122VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3122VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3122_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__3122(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3122VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3122VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3122_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__3122_double_conversion_allowed()
{
    if (pSimstruct__3122VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__3122VTable);
    }
    return 0;
}

int is_struct__3122_long_convertion_allowed()
{
    if (pSimstruct__3122VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__3122VTable);
    }
    return 0;
}

void compare_struct__3122(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3122VTable != NULL
        && pSimstruct__3122VTable->m_version >= Scv612
        && pSimstruct__3122VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3122VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3122VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3122VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3122_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3122_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3122VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3122VTable, nRetValue);
    }
    return 0;
}

int struct__3122_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__3122VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__3122VTable, nRetValue);
    }
    return 0;
}

int get_struct__3122_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3122_fields, 2, pfnStrAppend, pData);
}

int set_struct__3122_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__3122*)pValue)->NC_DIFF));
    set_kcg_int_default_value(&(((struct__3122*)pValue)->V_DIFF));
    return 1;
}

int check_struct__3122_string(const char *str, char **endptr)
{
    static struct__3122 rTemp;
    return string_to_struct__3122(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3122_Utils = {
    struct__3122_to_string,
    check_struct__3122_string,
    string_to_struct__3122,
    is_struct__3122_double_conversion_allowed,
    struct__3122_to_double,
    is_struct__3122_long_convertion_allowed,
    struct__3122_to_long,
    compare_struct__3122,
    get_struct__3122_signature,
    set_struct__3122_default_value,
    sizeof(struct__3122)
};

/****************************************************************
 ** array__3127 
 ****************************************************************/

struct SimTypeVTable *pSimarray__3127VTable;

int array__3127_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__3127VTable != NULL
        && pSimarray__3127VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__3127VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__3122_to_string, 32, sizeof(struct__3122), pfnStrAppend, pData);
}

int string_to_array__3127(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__3127VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__3127VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__3122_Utils, 32, sizeof(struct__3122), endptr);
    }
    return nRet;
}

int is_array__3127_double_conversion_allowed()
{
    if (pSimarray__3127VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__3127VTable);
    }
    return 0;
}

int is_array__3127_long_convertion_allowed()
{
    if (pSimarray__3127VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__3127VTable);
    }
    return 0;
}

void compare_array__3127(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__3127VTable != NULL
        && pSimarray__3127VTable->m_version >= Scv612
        && pSimarray__3127VTable->m_pfnCompare != NULL) {
        if (pSimarray__3127VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__3127VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__3127VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__3122, 32, sizeof(struct__3122), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__3127_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__3127VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__3127VTable, nRetValue);
    }
    return 0;
}

int array__3127_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__3127VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__3127VTable, nRetValue);
    }
    return 0;
}

int get_array__3127_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__3122_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__3127_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__3122_default_value(&((struct__3122*)pValue)[i]);
    return 1;
}

int check_array__3127_string(const char *str, char **endptr)
{
    static array__3127 rTemp;
    return string_to_array__3127(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__3127_Utils = {
    array__3127_to_string,
    check_array__3127_string,
    string_to_array__3127,
    is_array__3127_double_conversion_allowed,
    array__3127_to_double,
    is_array__3127_long_convertion_allowed,
    array__3127_to_long,
    compare_array__3127,
    get_array__3127_signature,
    set_array__3127_default_value,
    sizeof(array__3127)
};

/****************************************************************
 ** struct__3130 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3130VTable;

static SimFieldUtils struct__3130_fields[] = {
    {"D_STATIC", offsetof(struct__3130,D_STATIC), &_Type_kcg_int_Utils},
    {"V_STATIC", offsetof(struct__3130,V_STATIC), &_Type_kcg_int_Utils},
    {"Q_FRONT", offsetof(struct__3130,Q_FRONT), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__3130,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS_q_diff", offsetof(struct__3130,SECTIONS_q_diff), &_Type_array__3127_Utils},
};

int struct__3130_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3130VTable != NULL
        && pSimstruct__3130VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3130VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3130_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__3130(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3130VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3130VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3130_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__3130_double_conversion_allowed()
{
    if (pSimstruct__3130VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__3130VTable);
    }
    return 0;
}

int is_struct__3130_long_convertion_allowed()
{
    if (pSimstruct__3130VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__3130VTable);
    }
    return 0;
}

void compare_struct__3130(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3130VTable != NULL
        && pSimstruct__3130VTable->m_version >= Scv612
        && pSimstruct__3130VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3130VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3130VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3130VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3130_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3130_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3130VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3130VTable, nRetValue);
    }
    return 0;
}

int struct__3130_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__3130VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__3130VTable, nRetValue);
    }
    return 0;
}

int get_struct__3130_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3130_fields, 5, pfnStrAppend, pData);
}

int set_struct__3130_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__3130*)pValue)->D_STATIC));
    set_kcg_int_default_value(&(((struct__3130*)pValue)->V_STATIC));
    set_kcg_int_default_value(&(((struct__3130*)pValue)->Q_FRONT));
    set_kcg_int_default_value(&(((struct__3130*)pValue)->N_ITER));
    set_array__3127_default_value(&(((struct__3130*)pValue)->SECTIONS_q_diff));
    return 1;
}

int check_struct__3130_string(const char *str, char **endptr)
{
    static struct__3130 rTemp;
    return string_to_struct__3130(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3130_Utils = {
    struct__3130_to_string,
    check_struct__3130_string,
    string_to_struct__3130,
    is_struct__3130_double_conversion_allowed,
    struct__3130_to_double,
    is_struct__3130_long_convertion_allowed,
    struct__3130_to_long,
    compare_struct__3130,
    get_struct__3130_signature,
    set_struct__3130_default_value,
    sizeof(struct__3130)
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
 ** array__3144 
 ****************************************************************/

struct SimTypeVTable *pSimarray__3144VTable;

int array__3144_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__3144VTable != NULL
        && pSimarray__3144VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__3144VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__3130_to_string, 33, sizeof(struct__3130), pfnStrAppend, pData);
}

int string_to_array__3144(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__3144VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__3144VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__3130_Utils, 33, sizeof(struct__3130), endptr);
    }
    return nRet;
}

int is_array__3144_double_conversion_allowed()
{
    if (pSimarray__3144VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__3144VTable);
    }
    return 0;
}

int is_array__3144_long_convertion_allowed()
{
    if (pSimarray__3144VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__3144VTable);
    }
    return 0;
}

void compare_array__3144(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__3144VTable != NULL
        && pSimarray__3144VTable->m_version >= Scv612
        && pSimarray__3144VTable->m_pfnCompare != NULL) {
        if (pSimarray__3144VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__3144VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__3144VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__3130, 33, sizeof(struct__3130), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__3144_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__3144VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__3144VTable, nRetValue);
    }
    return 0;
}

int array__3144_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__3144VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__3144VTable, nRetValue);
    }
    return 0;
}

int get_array__3144_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__3130_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__3144_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__3130_default_value(&((struct__3130*)pValue)[i]);
    return 1;
}

int check_array__3144_string(const char *str, char **endptr)
{
    static array__3144 rTemp;
    return string_to_array__3144(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__3144_Utils = {
    array__3144_to_string,
    check_array__3144_string,
    string_to_array__3144,
    is_array__3144_double_conversion_allowed,
    array__3144_to_double,
    is_array__3144_long_convertion_allowed,
    array__3144_to_long,
    compare_array__3144,
    get_array__3144_signature,
    set_array__3144_default_value,
    sizeof(array__3144)
};

/****************************************************************
 ** array__3147 
 ****************************************************************/

struct SimTypeVTable *pSimarray__3147VTable;

int array__3147_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__3147VTable != NULL
        && pSimarray__3147VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__3147VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__3130_to_string, 32, sizeof(struct__3130), pfnStrAppend, pData);
}

int string_to_array__3147(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__3147VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__3147VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__3130_Utils, 32, sizeof(struct__3130), endptr);
    }
    return nRet;
}

int is_array__3147_double_conversion_allowed()
{
    if (pSimarray__3147VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__3147VTable);
    }
    return 0;
}

int is_array__3147_long_convertion_allowed()
{
    if (pSimarray__3147VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__3147VTable);
    }
    return 0;
}

void compare_array__3147(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__3147VTable != NULL
        && pSimarray__3147VTable->m_version >= Scv612
        && pSimarray__3147VTable->m_pfnCompare != NULL) {
        if (pSimarray__3147VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__3147VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__3147VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__3130, 32, sizeof(struct__3130), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__3147_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__3147VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__3147VTable, nRetValue);
    }
    return 0;
}

int array__3147_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__3147VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__3147VTable, nRetValue);
    }
    return 0;
}

int get_array__3147_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__3130_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__3147_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__3130_default_value(&((struct__3130*)pValue)[i]);
    return 1;
}

int check_array__3147_string(const char *str, char **endptr)
{
    static array__3147 rTemp;
    return string_to_array__3147(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__3147_Utils = {
    array__3147_to_string,
    check_array__3147_string,
    string_to_array__3147,
    is_array__3147_double_conversion_allowed,
    array__3147_to_double,
    is_array__3147_long_convertion_allowed,
    array__3147_to_long,
    compare_array__3147,
    get_array__3147_signature,
    set_array__3147_default_value,
    sizeof(array__3147)
};

/****************************************************************
 ** struct__3150 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3150VTable;

static SimFieldUtils struct__3150_fields[] = {
    {"valid", offsetof(struct__3150,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__3150,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__3150,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__3150,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__3150,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_STATIC", offsetof(struct__3150,D_STATIC), &_Type_kcg_int_Utils},
    {"V_STATIC", offsetof(struct__3150,V_STATIC), &_Type_kcg_int_Utils},
    {"Q_FRONT", offsetof(struct__3150,Q_FRONT), &_Type_kcg_int_Utils},
    {"N_ITER_n", offsetof(struct__3150,N_ITER_n), &_Type_kcg_int_Utils},
    {"SECTIONS_q_diff", offsetof(struct__3150,SECTIONS_q_diff), &_Type_array__3127_Utils},
    {"N_ITER_k", offsetof(struct__3150,N_ITER_k), &_Type_kcg_int_Utils},
    {"SECTIONS_SSP", offsetof(struct__3150,SECTIONS_SSP), &_Type_array__3147_Utils},
};

int struct__3150_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3150VTable != NULL
        && pSimstruct__3150VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3150VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3150_fields, 12, pfnStrAppend, pData);
}

int string_to_struct__3150(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3150VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3150VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3150_fields, 12, endptr);
    }
    return nRet;
}

int is_struct__3150_double_conversion_allowed()
{
    if (pSimstruct__3150VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__3150VTable);
    }
    return 0;
}

int is_struct__3150_long_convertion_allowed()
{
    if (pSimstruct__3150VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__3150VTable);
    }
    return 0;
}

void compare_struct__3150(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3150VTable != NULL
        && pSimstruct__3150VTable->m_version >= Scv612
        && pSimstruct__3150VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3150VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3150VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3150VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3150_fields, 12, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3150_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3150VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3150VTable, nRetValue);
    }
    return 0;
}

int struct__3150_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__3150VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__3150VTable, nRetValue);
    }
    return 0;
}

int get_struct__3150_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3150_fields, 12, pfnStrAppend, pData);
}

int set_struct__3150_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__3150*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__3150*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__3150*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__3150*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__3150*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__3150*)pValue)->D_STATIC));
    set_kcg_int_default_value(&(((struct__3150*)pValue)->V_STATIC));
    set_kcg_int_default_value(&(((struct__3150*)pValue)->Q_FRONT));
    set_kcg_int_default_value(&(((struct__3150*)pValue)->N_ITER_n));
    set_array__3127_default_value(&(((struct__3150*)pValue)->SECTIONS_q_diff));
    set_kcg_int_default_value(&(((struct__3150*)pValue)->N_ITER_k));
    set_array__3147_default_value(&(((struct__3150*)pValue)->SECTIONS_SSP));
    return 1;
}

int check_struct__3150_string(const char *str, char **endptr)
{
    static struct__3150 rTemp;
    return string_to_struct__3150(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3150_Utils = {
    struct__3150_to_string,
    check_struct__3150_string,
    string_to_struct__3150,
    is_struct__3150_double_conversion_allowed,
    struct__3150_to_double,
    is_struct__3150_long_convertion_allowed,
    struct__3150_to_long,
    compare_struct__3150,
    get_struct__3150_signature,
    set_struct__3150_default_value,
    sizeof(struct__3150)
};

/****************************************************************
 ** struct__3165 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3165VTable;

static SimFieldUtils struct__3165_fields[] = {
    {"D_GRADIENT", offsetof(struct__3165,D_GRADIENT), &_Type_kcg_int_Utils},
    {"Q_GDIR", offsetof(struct__3165,Q_GDIR), &_Type_kcg_int_Utils},
    {"G_A", offsetof(struct__3165,G_A), &_Type_kcg_int_Utils},
};

int struct__3165_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3165VTable != NULL
        && pSimstruct__3165VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3165VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3165_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__3165(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3165VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3165VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3165_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__3165_double_conversion_allowed()
{
    if (pSimstruct__3165VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__3165VTable);
    }
    return 0;
}

int is_struct__3165_long_convertion_allowed()
{
    if (pSimstruct__3165VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__3165VTable);
    }
    return 0;
}

void compare_struct__3165(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3165VTable != NULL
        && pSimstruct__3165VTable->m_version >= Scv612
        && pSimstruct__3165VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3165VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3165VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3165VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3165_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3165_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3165VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3165VTable, nRetValue);
    }
    return 0;
}

int struct__3165_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__3165VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__3165VTable, nRetValue);
    }
    return 0;
}

int get_struct__3165_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3165_fields, 3, pfnStrAppend, pData);
}

int set_struct__3165_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__3165*)pValue)->D_GRADIENT));
    set_kcg_int_default_value(&(((struct__3165*)pValue)->Q_GDIR));
    set_kcg_int_default_value(&(((struct__3165*)pValue)->G_A));
    return 1;
}

int check_struct__3165_string(const char *str, char **endptr)
{
    static struct__3165 rTemp;
    return string_to_struct__3165(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3165_Utils = {
    struct__3165_to_string,
    check_struct__3165_string,
    string_to_struct__3165,
    is_struct__3165_double_conversion_allowed,
    struct__3165_to_double,
    is_struct__3165_long_convertion_allowed,
    struct__3165_to_long,
    compare_struct__3165,
    get_struct__3165_signature,
    set_struct__3165_default_value,
    sizeof(struct__3165)
};

/****************************************************************
 ** array__3171 
 ****************************************************************/

struct SimTypeVTable *pSimarray__3171VTable;

int array__3171_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__3171VTable != NULL
        && pSimarray__3171VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__3171VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__3165_to_string, 33, sizeof(struct__3165), pfnStrAppend, pData);
}

int string_to_array__3171(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__3171VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__3171VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__3165_Utils, 33, sizeof(struct__3165), endptr);
    }
    return nRet;
}

int is_array__3171_double_conversion_allowed()
{
    if (pSimarray__3171VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__3171VTable);
    }
    return 0;
}

int is_array__3171_long_convertion_allowed()
{
    if (pSimarray__3171VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__3171VTable);
    }
    return 0;
}

void compare_array__3171(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__3171VTable != NULL
        && pSimarray__3171VTable->m_version >= Scv612
        && pSimarray__3171VTable->m_pfnCompare != NULL) {
        if (pSimarray__3171VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__3171VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__3171VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__3165, 33, sizeof(struct__3165), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__3171_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__3171VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__3171VTable, nRetValue);
    }
    return 0;
}

int array__3171_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__3171VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__3171VTable, nRetValue);
    }
    return 0;
}

int get_array__3171_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__3165_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__3171_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__3165_default_value(&((struct__3165*)pValue)[i]);
    return 1;
}

int check_array__3171_string(const char *str, char **endptr)
{
    static array__3171 rTemp;
    return string_to_array__3171(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__3171_Utils = {
    array__3171_to_string,
    check_array__3171_string,
    string_to_array__3171,
    is_array__3171_double_conversion_allowed,
    array__3171_to_double,
    is_array__3171_long_convertion_allowed,
    array__3171_to_long,
    compare_array__3171,
    get_array__3171_signature,
    set_array__3171_default_value,
    sizeof(array__3171)
};

/****************************************************************
 ** array__3174 
 ****************************************************************/

struct SimTypeVTable *pSimarray__3174VTable;

int array__3174_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__3174VTable != NULL
        && pSimarray__3174VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__3174VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__3165_to_string, 32, sizeof(struct__3165), pfnStrAppend, pData);
}

int string_to_array__3174(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__3174VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__3174VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__3165_Utils, 32, sizeof(struct__3165), endptr);
    }
    return nRet;
}

int is_array__3174_double_conversion_allowed()
{
    if (pSimarray__3174VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__3174VTable);
    }
    return 0;
}

int is_array__3174_long_convertion_allowed()
{
    if (pSimarray__3174VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__3174VTable);
    }
    return 0;
}

void compare_array__3174(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__3174VTable != NULL
        && pSimarray__3174VTable->m_version >= Scv612
        && pSimarray__3174VTable->m_pfnCompare != NULL) {
        if (pSimarray__3174VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__3174VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__3174VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__3165, 32, sizeof(struct__3165), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__3174_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__3174VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__3174VTable, nRetValue);
    }
    return 0;
}

int array__3174_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__3174VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__3174VTable, nRetValue);
    }
    return 0;
}

int get_array__3174_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__3165_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__3174_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__3165_default_value(&((struct__3165*)pValue)[i]);
    return 1;
}

int check_array__3174_string(const char *str, char **endptr)
{
    static array__3174 rTemp;
    return string_to_array__3174(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__3174_Utils = {
    array__3174_to_string,
    check_array__3174_string,
    string_to_array__3174,
    is_array__3174_double_conversion_allowed,
    array__3174_to_double,
    is_array__3174_long_convertion_allowed,
    array__3174_to_long,
    compare_array__3174,
    get_array__3174_signature,
    set_array__3174_default_value,
    sizeof(array__3174)
};

/****************************************************************
 ** struct__3177 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3177VTable;

static SimFieldUtils struct__3177_fields[] = {
    {"valid", offsetof(struct__3177,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__3177,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__3177,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__3177,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__3177,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_GRADIENT", offsetof(struct__3177,D_GRADIENT), &_Type_kcg_int_Utils},
    {"Q_GDIR", offsetof(struct__3177,Q_GDIR), &_Type_kcg_int_Utils},
    {"G_A", offsetof(struct__3177,G_A), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__3177,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__3177,SECTIONS), &_Type_array__3174_Utils},
};

int struct__3177_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3177VTable != NULL
        && pSimstruct__3177VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3177VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3177_fields, 10, pfnStrAppend, pData);
}

int string_to_struct__3177(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3177VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3177VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3177_fields, 10, endptr);
    }
    return nRet;
}

int is_struct__3177_double_conversion_allowed()
{
    if (pSimstruct__3177VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__3177VTable);
    }
    return 0;
}

int is_struct__3177_long_convertion_allowed()
{
    if (pSimstruct__3177VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__3177VTable);
    }
    return 0;
}

void compare_struct__3177(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3177VTable != NULL
        && pSimstruct__3177VTable->m_version >= Scv612
        && pSimstruct__3177VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3177VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3177VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3177VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3177_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3177_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3177VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3177VTable, nRetValue);
    }
    return 0;
}

int struct__3177_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__3177VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__3177VTable, nRetValue);
    }
    return 0;
}

int get_struct__3177_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3177_fields, 10, pfnStrAppend, pData);
}

int set_struct__3177_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__3177*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__3177*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__3177*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__3177*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__3177*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__3177*)pValue)->D_GRADIENT));
    set_kcg_int_default_value(&(((struct__3177*)pValue)->Q_GDIR));
    set_kcg_int_default_value(&(((struct__3177*)pValue)->G_A));
    set_kcg_int_default_value(&(((struct__3177*)pValue)->N_ITER));
    set_array__3174_default_value(&(((struct__3177*)pValue)->SECTIONS));
    return 1;
}

int check_struct__3177_string(const char *str, char **endptr)
{
    static struct__3177 rTemp;
    return string_to_struct__3177(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3177_Utils = {
    struct__3177_to_string,
    check_struct__3177_string,
    string_to_struct__3177,
    is_struct__3177_double_conversion_allowed,
    struct__3177_to_double,
    is_struct__3177_long_convertion_allowed,
    struct__3177_to_long,
    compare_struct__3177,
    get_struct__3177_signature,
    set_struct__3177_default_value,
    sizeof(struct__3177)
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
 ** array__3208 
 ****************************************************************/

struct SimTypeVTable *pSimarray__3208VTable;

int array__3208_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__3208VTable != NULL
        && pSimarray__3208VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__3208VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__3165_to_string, 1, sizeof(struct__3165), pfnStrAppend, pData);
}

int string_to_array__3208(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__3208VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__3208VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__3165_Utils, 1, sizeof(struct__3165), endptr);
    }
    return nRet;
}

int is_array__3208_double_conversion_allowed()
{
    if (pSimarray__3208VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__3208VTable);
    }
    return 0;
}

int is_array__3208_long_convertion_allowed()
{
    if (pSimarray__3208VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__3208VTable);
    }
    return 0;
}

void compare_array__3208(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__3208VTable != NULL
        && pSimarray__3208VTable->m_version >= Scv612
        && pSimarray__3208VTable->m_pfnCompare != NULL) {
        if (pSimarray__3208VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__3208VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__3208VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__3165, 1, sizeof(struct__3165), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__3208_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__3208VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__3208VTable, nRetValue);
    }
    return 0;
}

int array__3208_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__3208VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__3208VTable, nRetValue);
    }
    return 0;
}

int get_array__3208_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__3165_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__3208_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__3165_default_value(&((struct__3165*)pValue)[i]);
    return 1;
}

int check_array__3208_string(const char *str, char **endptr)
{
    static array__3208 rTemp;
    return string_to_array__3208(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__3208_Utils = {
    array__3208_to_string,
    check_array__3208_string,
    string_to_array__3208,
    is_array__3208_double_conversion_allowed,
    array__3208_to_double,
    is_array__3208_long_convertion_allowed,
    array__3208_to_long,
    compare_array__3208,
    get_array__3208_signature,
    set_array__3208_default_value,
    sizeof(array__3208)
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
 ** array__3217 
 ****************************************************************/

struct SimTypeVTable *pSimarray__3217VTable;

int array__3217_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__3217VTable != NULL
        && pSimarray__3217VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__3217VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__3130_to_string, 1, sizeof(struct__3130), pfnStrAppend, pData);
}

int string_to_array__3217(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__3217VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__3217VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__3130_Utils, 1, sizeof(struct__3130), endptr);
    }
    return nRet;
}

int is_array__3217_double_conversion_allowed()
{
    if (pSimarray__3217VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__3217VTable);
    }
    return 0;
}

int is_array__3217_long_convertion_allowed()
{
    if (pSimarray__3217VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__3217VTable);
    }
    return 0;
}

void compare_array__3217(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__3217VTable != NULL
        && pSimarray__3217VTable->m_version >= Scv612
        && pSimarray__3217VTable->m_pfnCompare != NULL) {
        if (pSimarray__3217VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__3217VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__3217VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__3130, 1, sizeof(struct__3130), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__3217_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__3217VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__3217VTable, nRetValue);
    }
    return 0;
}

int array__3217_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__3217VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__3217VTable, nRetValue);
    }
    return 0;
}

int get_array__3217_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__3130_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__3217_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__3130_default_value(&((struct__3130*)pValue)[i]);
    return 1;
}

int check_array__3217_string(const char *str, char **endptr)
{
    static array__3217 rTemp;
    return string_to_array__3217(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__3217_Utils = {
    array__3217_to_string,
    check_array__3217_string,
    string_to_array__3217,
    is_array__3217_double_conversion_allowed,
    array__3217_to_double,
    is_array__3217_long_convertion_allowed,
    array__3217_to_long,
    compare_array__3217,
    get_array__3217_signature,
    set_array__3217_default_value,
    sizeof(array__3217)
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
 ** array_int_7_33_231 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_7_33_231VTable;

int array_int_7_33_231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_7_33_231VTable != NULL
        && pSimarray_int_7_33_231VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_7_33_231VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_7_33_to_string, 231, sizeof(array_int_7_33), pfnStrAppend, pData);
}

int string_to_array_int_7_33_231(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_7_33_231VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_7_33_231VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_7_33_Utils, 231, sizeof(array_int_7_33), endptr);
    }
    return nRet;
}

int is_array_int_7_33_231_double_conversion_allowed()
{
    if (pSimarray_int_7_33_231VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_7_33_231VTable);
    }
    return 0;
}

int is_array_int_7_33_231_long_convertion_allowed()
{
    if (pSimarray_int_7_33_231VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_7_33_231VTable);
    }
    return 0;
}

void compare_array_int_7_33_231(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_7_33_231VTable != NULL
        && pSimarray_int_7_33_231VTable->m_version >= Scv612
        && pSimarray_int_7_33_231VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_7_33_231VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_7_33_231VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_7_33_231VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_7_33, 231, sizeof(array_int_7_33), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_7_33_231_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_7_33_231VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_7_33_231VTable, nRetValue);
    }
    return 0;
}

int array_int_7_33_231_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_7_33_231VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_7_33_231VTable, nRetValue);
    }
    return 0;
}

int get_array_int_7_33_231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 231; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_7_33_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_7_33_231_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 231; i++)
        set_array_int_7_33_default_value(&((array_int_7_33*)pValue)[i]);
    return 1;
}

int check_array_int_7_33_231_string(const char *str, char **endptr)
{
    static array_int_7_33_231 rTemp;
    return string_to_array_int_7_33_231(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_7_33_231_Utils = {
    array_int_7_33_231_to_string,
    check_array_int_7_33_231_string,
    string_to_array_int_7_33_231,
    is_array_int_7_33_231_double_conversion_allowed,
    array_int_7_33_231_to_double,
    is_array_int_7_33_231_long_convertion_allowed,
    array_int_7_33_231_to_long,
    compare_array_int_7_33_231,
    get_array_int_7_33_231_signature,
    set_array_int_7_33_231_default_value,
    sizeof(array_int_7_33_231)
};

/****************************************************************
 ** array_int_264 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_264VTable;

int array_int_264_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_264VTable != NULL
        && pSimarray_int_264VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_264VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 264, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_264(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_264VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_264VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 264, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_264_double_conversion_allowed()
{
    if (pSimarray_int_264VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_264VTable);
    }
    return 0;
}

int is_array_int_264_long_convertion_allowed()
{
    if (pSimarray_int_264VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_264VTable);
    }
    return 0;
}

void compare_array_int_264(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_264VTable != NULL
        && pSimarray_int_264VTable->m_version >= Scv612
        && pSimarray_int_264VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_264VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_264VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_264VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 264, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_264_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_264VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_264VTable, nRetValue);
    }
    return 0;
}

int array_int_264_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_264VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_264VTable, nRetValue);
    }
    return 0;
}

int get_array_int_264_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 264; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_264_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 264; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_264_string(const char *str, char **endptr)
{
    static array_int_264 rTemp;
    return string_to_array_int_264(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_264_Utils = {
    array_int_264_to_string,
    check_array_int_264_string,
    string_to_array_int_264,
    is_array_int_264_double_conversion_allowed,
    array_int_264_to_double,
    is_array_int_264_long_convertion_allowed,
    array_int_264_to_long,
    compare_array_int_264,
    get_array_int_264_signature,
    set_array_int_264_default_value,
    sizeof(array_int_264)
};

/****************************************************************
 ** array_int_236 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_236VTable;

int array_int_236_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_236VTable != NULL
        && pSimarray_int_236VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_236VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 236, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_236(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_236VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_236VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 236, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_236_double_conversion_allowed()
{
    if (pSimarray_int_236VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_236VTable);
    }
    return 0;
}

int is_array_int_236_long_convertion_allowed()
{
    if (pSimarray_int_236VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_236VTable);
    }
    return 0;
}

void compare_array_int_236(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_236VTable != NULL
        && pSimarray_int_236VTable->m_version >= Scv612
        && pSimarray_int_236VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_236VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_236VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_236VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 236, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_236_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_236VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_236VTable, nRetValue);
    }
    return 0;
}

int array_int_236_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_236VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_236VTable, nRetValue);
    }
    return 0;
}

int get_array_int_236_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 236; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_236_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 236; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_236_string(const char *str, char **endptr)
{
    static array_int_236 rTemp;
    return string_to_array_int_236(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_236_Utils = {
    array_int_236_to_string,
    check_array_int_236_string,
    string_to_array_int_236,
    is_array_int_236_double_conversion_allowed,
    array_int_236_to_double,
    is_array_int_236_long_convertion_allowed,
    array_int_236_to_long,
    compare_array_int_236,
    get_array_int_236_signature,
    set_array_int_236_default_value,
    sizeof(array_int_236)
};

/****************************************************************
 ** array__3253 
 ****************************************************************/

struct SimTypeVTable *pSimarray__3253VTable;

int array__3253_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__3253VTable != NULL
        && pSimarray__3253VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__3253VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__3048_to_string, 1, sizeof(struct__3048), pfnStrAppend, pData);
}

int string_to_array__3253(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__3253VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__3253VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__3048_Utils, 1, sizeof(struct__3048), endptr);
    }
    return nRet;
}

int is_array__3253_double_conversion_allowed()
{
    if (pSimarray__3253VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__3253VTable);
    }
    return 0;
}

int is_array__3253_long_convertion_allowed()
{
    if (pSimarray__3253VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__3253VTable);
    }
    return 0;
}

void compare_array__3253(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__3253VTable != NULL
        && pSimarray__3253VTable->m_version >= Scv612
        && pSimarray__3253VTable->m_pfnCompare != NULL) {
        if (pSimarray__3253VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__3253VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__3253VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__3048, 1, sizeof(struct__3048), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__3253_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__3253VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__3253VTable, nRetValue);
    }
    return 0;
}

int array__3253_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__3253VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__3253VTable, nRetValue);
    }
    return 0;
}

int get_array__3253_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__3048_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__3253_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__3048_default_value(&((struct__3048*)pValue)[i]);
    return 1;
}

int check_array__3253_string(const char *str, char **endptr)
{
    static array__3253 rTemp;
    return string_to_array__3253(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__3253_Utils = {
    array__3253_to_string,
    check_array__3253_string,
    string_to_array__3253,
    is_array__3253_double_conversion_allowed,
    array__3253_to_double,
    is_array__3253_long_convertion_allowed,
    array__3253_to_long,
    compare_array__3253,
    get_array__3253_signature,
    set_array__3253_default_value,
    sizeof(array__3253)
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
 ** array__3265 
 ****************************************************************/

struct SimTypeVTable *pSimarray__3265VTable;

int array__3265_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__3265VTable != NULL
        && pSimarray__3265VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__3265VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__3013_to_string, 1, sizeof(struct__3013), pfnStrAppend, pData);
}

int string_to_array__3265(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__3265VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__3265VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__3013_Utils, 1, sizeof(struct__3013), endptr);
    }
    return nRet;
}

int is_array__3265_double_conversion_allowed()
{
    if (pSimarray__3265VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__3265VTable);
    }
    return 0;
}

int is_array__3265_long_convertion_allowed()
{
    if (pSimarray__3265VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__3265VTable);
    }
    return 0;
}

void compare_array__3265(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__3265VTable != NULL
        && pSimarray__3265VTable->m_version >= Scv612
        && pSimarray__3265VTable->m_pfnCompare != NULL) {
        if (pSimarray__3265VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__3265VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__3265VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__3013, 1, sizeof(struct__3013), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__3265_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__3265VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__3265VTable, nRetValue);
    }
    return 0;
}

int array__3265_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__3265VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__3265VTable, nRetValue);
    }
    return 0;
}

int get_array__3265_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__3013_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__3265_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__3013_default_value(&((struct__3013*)pValue)[i]);
    return 1;
}

int check_array__3265_string(const char *str, char **endptr)
{
    static array__3265 rTemp;
    return string_to_array__3265(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__3265_Utils = {
    array__3265_to_string,
    check_array__3265_string,
    string_to_array__3265,
    is_array__3265_double_conversion_allowed,
    array__3265_to_double,
    is_array__3265_long_convertion_allowed,
    array__3265_to_long,
    compare_array__3265,
    get_array__3265_signature,
    set_array__3265_default_value,
    sizeof(array__3265)
};

/****************************************************************
 ** array_int_491 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_491VTable;

int array_int_491_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_491VTable != NULL
        && pSimarray_int_491VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_491VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 491, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_491(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_491VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_491VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 491, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_491_double_conversion_allowed()
{
    if (pSimarray_int_491VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_491VTable);
    }
    return 0;
}

int is_array_int_491_long_convertion_allowed()
{
    if (pSimarray_int_491VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_491VTable);
    }
    return 0;
}

void compare_array_int_491(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_491VTable != NULL
        && pSimarray_int_491VTable->m_version >= Scv612
        && pSimarray_int_491VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_491VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_491VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_491VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 491, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_491_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_491VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_491VTable, nRetValue);
    }
    return 0;
}

int array_int_491_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_491VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_491VTable, nRetValue);
    }
    return 0;
}

int get_array_int_491_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 491; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_491_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 491; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_491_string(const char *str, char **endptr)
{
    static array_int_491 rTemp;
    return string_to_array_int_491(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_491_Utils = {
    array_int_491_to_string,
    check_array_int_491_string,
    string_to_array_int_491,
    is_array_int_491_double_conversion_allowed,
    array_int_491_to_double,
    is_array_int_491_long_convertion_allowed,
    array_int_491_to_long,
    compare_array_int_491,
    get_array_int_491_signature,
    set_array_int_491_default_value,
    sizeof(array_int_491)
};

/****************************************************************
 ** array_int_9 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_9VTable;

int array_int_9_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_9VTable != NULL
        && pSimarray_int_9VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_9VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 9, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_9(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_9VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_9VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 9, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_9_double_conversion_allowed()
{
    if (pSimarray_int_9VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_9VTable);
    }
    return 0;
}

int is_array_int_9_long_convertion_allowed()
{
    if (pSimarray_int_9VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_9VTable);
    }
    return 0;
}

void compare_array_int_9(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_9VTable != NULL
        && pSimarray_int_9VTable->m_version >= Scv612
        && pSimarray_int_9VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_9VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_9VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_9VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 9, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_9_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_9VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_9VTable, nRetValue);
    }
    return 0;
}

int array_int_9_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_9VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_9VTable, nRetValue);
    }
    return 0;
}

int get_array_int_9_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 9; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_9_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 9; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_9_string(const char *str, char **endptr)
{
    static array_int_9 rTemp;
    return string_to_array_int_9(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_9_Utils = {
    array_int_9_to_string,
    check_array_int_9_string,
    string_to_array_int_9,
    is_array_int_9_double_conversion_allowed,
    array_int_9_to_double,
    is_array_int_9_long_convertion_allowed,
    array_int_9_to_long,
    compare_array_int_9,
    get_array_int_9_signature,
    set_array_int_9_default_value,
    sizeof(array_int_9)
};

/****************************************************************
 ** array_int_4_32_128 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_4_32_128VTable;

int array_int_4_32_128_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_4_32_128VTable != NULL
        && pSimarray_int_4_32_128VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_4_32_128VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_4_32_to_string, 128, sizeof(array_int_4_32), pfnStrAppend, pData);
}

int string_to_array_int_4_32_128(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_4_32_128VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_4_32_128VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_4_32_Utils, 128, sizeof(array_int_4_32), endptr);
    }
    return nRet;
}

int is_array_int_4_32_128_double_conversion_allowed()
{
    if (pSimarray_int_4_32_128VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_4_32_128VTable);
    }
    return 0;
}

int is_array_int_4_32_128_long_convertion_allowed()
{
    if (pSimarray_int_4_32_128VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_4_32_128VTable);
    }
    return 0;
}

void compare_array_int_4_32_128(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_4_32_128VTable != NULL
        && pSimarray_int_4_32_128VTable->m_version >= Scv612
        && pSimarray_int_4_32_128VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_4_32_128VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_4_32_128VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_4_32_128VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_4_32, 128, sizeof(array_int_4_32), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_4_32_128_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_4_32_128VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_4_32_128VTable, nRetValue);
    }
    return 0;
}

int array_int_4_32_128_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_4_32_128VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_4_32_128VTable, nRetValue);
    }
    return 0;
}

int get_array_int_4_32_128_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 128; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_4_32_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_4_32_128_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 128; i++)
        set_array_int_4_32_default_value(&((array_int_4_32*)pValue)[i]);
    return 1;
}

int check_array_int_4_32_128_string(const char *str, char **endptr)
{
    static array_int_4_32_128 rTemp;
    return string_to_array_int_4_32_128(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_4_32_128_Utils = {
    array_int_4_32_128_to_string,
    check_array_int_4_32_128_string,
    string_to_array_int_4_32_128,
    is_array_int_4_32_128_double_conversion_allowed,
    array_int_4_32_128_to_double,
    is_array_int_4_32_128_long_convertion_allowed,
    array_int_4_32_128_to_long,
    compare_array_int_4_32_128,
    get_array_int_4_32_128_signature,
    set_array_int_4_32_128_default_value,
    sizeof(array_int_4_32_128)
};

/****************************************************************
 ** array_int_350 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_350VTable;

int array_int_350_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_350VTable != NULL
        && pSimarray_int_350VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_350VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 350, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_350(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_350VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_350VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 350, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_350_double_conversion_allowed()
{
    if (pSimarray_int_350VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_350VTable);
    }
    return 0;
}

int is_array_int_350_long_convertion_allowed()
{
    if (pSimarray_int_350VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_350VTable);
    }
    return 0;
}

void compare_array_int_350(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_350VTable != NULL
        && pSimarray_int_350VTable->m_version >= Scv612
        && pSimarray_int_350VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_350VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_350VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_350VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 350, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_350_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_350VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_350VTable, nRetValue);
    }
    return 0;
}

int array_int_350_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_350VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_350VTable, nRetValue);
    }
    return 0;
}

int get_array_int_350_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 350; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_350_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 350; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_350_string(const char *str, char **endptr)
{
    static array_int_350 rTemp;
    return string_to_array_int_350(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_350_Utils = {
    array_int_350_to_string,
    check_array_int_350_string,
    string_to_array_int_350,
    is_array_int_350_double_conversion_allowed,
    array_int_350_to_double,
    is_array_int_350_long_convertion_allowed,
    array_int_350_to_long,
    compare_array_int_350,
    get_array_int_350_signature,
    set_array_int_350_default_value,
    sizeof(array_int_350)
};

/****************************************************************
 ** array_int_21 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_21VTable;

int array_int_21_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_21VTable != NULL
        && pSimarray_int_21VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_21VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 21, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_21(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_21VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_21VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 21, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_21_double_conversion_allowed()
{
    if (pSimarray_int_21VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_21VTable);
    }
    return 0;
}

int is_array_int_21_long_convertion_allowed()
{
    if (pSimarray_int_21VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_21VTable);
    }
    return 0;
}

void compare_array_int_21(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_21VTable != NULL
        && pSimarray_int_21VTable->m_version >= Scv612
        && pSimarray_int_21VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_21VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_21VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_21VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 21, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_21_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_21VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_21VTable, nRetValue);
    }
    return 0;
}

int array_int_21_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_21VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_21VTable, nRetValue);
    }
    return 0;
}

int get_array_int_21_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 21; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_21_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 21; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_21_string(const char *str, char **endptr)
{
    static array_int_21 rTemp;
    return string_to_array_int_21(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_21_Utils = {
    array_int_21_to_string,
    check_array_int_21_string,
    string_to_array_int_21,
    is_array_int_21_double_conversion_allowed,
    array_int_21_to_double,
    is_array_int_21_long_convertion_allowed,
    array_int_21_to_long,
    compare_array_int_21,
    get_array_int_21_signature,
    set_array_int_21_default_value,
    sizeof(array_int_21)
};

/****************************************************************
 ** array_int_150 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_150VTable;

int array_int_150_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_150VTable != NULL
        && pSimarray_int_150VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_150VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 150, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_150(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_150VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_150VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 150, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_150_double_conversion_allowed()
{
    if (pSimarray_int_150VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_150VTable);
    }
    return 0;
}

int is_array_int_150_long_convertion_allowed()
{
    if (pSimarray_int_150VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_150VTable);
    }
    return 0;
}

void compare_array_int_150(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_150VTable != NULL
        && pSimarray_int_150VTable->m_version >= Scv612
        && pSimarray_int_150VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_150VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_150VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_150VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 150, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_150_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_150VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_150VTable, nRetValue);
    }
    return 0;
}

int array_int_150_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_150VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_150VTable, nRetValue);
    }
    return 0;
}

int get_array_int_150_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 150; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_150_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 150; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_150_string(const char *str, char **endptr)
{
    static array_int_150 rTemp;
    return string_to_array_int_150(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_150_Utils = {
    array_int_150_to_string,
    check_array_int_150_string,
    string_to_array_int_150,
    is_array_int_150_double_conversion_allowed,
    array_int_150_to_double,
    is_array_int_150_long_convertion_allowed,
    array_int_150_to_long,
    compare_array_int_150,
    get_array_int_150_signature,
    set_array_int_150_default_value,
    sizeof(array_int_150)
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
 ** array_int_22 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_22VTable;

int array_int_22_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_22VTable != NULL
        && pSimarray_int_22VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_22VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 22, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_22(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_22VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_22VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 22, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_22_double_conversion_allowed()
{
    if (pSimarray_int_22VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_22VTable);
    }
    return 0;
}

int is_array_int_22_long_convertion_allowed()
{
    if (pSimarray_int_22VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_22VTable);
    }
    return 0;
}

void compare_array_int_22(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_22VTable != NULL
        && pSimarray_int_22VTable->m_version >= Scv612
        && pSimarray_int_22VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_22VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_22VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_22VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 22, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_22_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_22VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_22VTable, nRetValue);
    }
    return 0;
}

int array_int_22_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_22VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_22VTable, nRetValue);
    }
    return 0;
}

int get_array_int_22_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 22; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_22_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 22; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_22_string(const char *str, char **endptr)
{
    static array_int_22 rTemp;
    return string_to_array_int_22(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_22_Utils = {
    array_int_22_to_string,
    check_array_int_22_string,
    string_to_array_int_22,
    is_array_int_22_double_conversion_allowed,
    array_int_22_to_double,
    is_array_int_22_long_convertion_allowed,
    array_int_22_to_long,
    compare_array_int_22,
    get_array_int_22_signature,
    set_array_int_22_default_value,
    sizeof(array_int_22)
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
 ** P021_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP021_trackside_int_T_TMVTable;

int P021_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP021_trackside_int_T_TMVTable != NULL
        && pSimP021_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP021_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__3177_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3177(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_trackside_int_T_TMVTable);
    }
    return is_struct__3177_double_conversion_allowed();
}

int is_P021_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_trackside_int_T_TMVTable);
    }
    return is_struct__3177_long_convertion_allowed();
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
        compare_struct__3177(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__3177_to_double(pValue, nRetValue);
}

int P021_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__3177_to_long(pValue, nRetValue);
}

int get_P021_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3177_signature(pfnStrAppend, pData);
}

int set_P021_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__3177_default_value(pValue);
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
    return array__3174_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__3174(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_trackide_sectionlist_T_TMVTable);
    }
    return is_array__3174_double_conversion_allowed();
}

int is_P021_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_trackide_sectionlist_T_TMVTable);
    }
    return is_array__3174_long_convertion_allowed();
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
        compare_array__3174(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__3174_to_double(pValue, nRetValue);
}

int P021_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__3174_to_long(pValue, nRetValue);
}

int get_P021_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__3174_signature(pfnStrAppend, pData);
}

int set_P021_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_array__3174_default_value(pValue);
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
    return struct__3165_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3165(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_section_int_T_TM_double_conversion_allowed()
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_section_int_T_TMVTable);
    }
    return is_struct__3165_double_conversion_allowed();
}

int is_P021_section_int_T_TM_long_convertion_allowed()
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_section_int_T_TMVTable);
    }
    return is_struct__3165_long_convertion_allowed();
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
        compare_struct__3165(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_section_int_T_TMVTable, nRetValue);
    }
    return struct__3165_to_double(pValue, nRetValue);
}

int P021_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_section_int_T_TMVTable, nRetValue);
    }
    return struct__3165_to_long(pValue, nRetValue);
}

int get_P021_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3165_signature(pfnStrAppend, pData);
}

int set_P021_section_int_T_TM_default_value(void *pValue)
{
    return set_struct__3165_default_value(pValue);
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
    return array__3171_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__3171(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__3171_double_conversion_allowed();
}

int is_P021_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__3171_long_convertion_allowed();
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
        compare_array__3171(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__3171_to_double(pValue, nRetValue);
}

int P021_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__3171_to_long(pValue, nRetValue);
}

int get_P021_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__3171_signature(pfnStrAppend, pData);
}

int set_P021_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_array__3171_default_value(pValue);
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
 ** P005_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_trackside_int_T_TMVTable;

int P005_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_trackside_int_T_TMVTable != NULL
        && pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__3070_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3070(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP005_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP005_trackside_int_T_TMVTable);
    }
    return is_struct__3070_double_conversion_allowed();
}

int is_P005_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP005_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP005_trackside_int_T_TMVTable);
    }
    return is_struct__3070_long_convertion_allowed();
}

void compare_P005_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_trackside_int_T_TMVTable != NULL
        && pSimP005_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimP005_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__3070(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__3070_to_double(pValue, nRetValue);
}

int P005_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP005_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP005_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__3070_to_long(pValue, nRetValue);
}

int get_P005_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3070_signature(pfnStrAppend, pData);
}

int set_P005_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__3070_default_value(pValue);
}

int check_P005_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static P005_trackside_int_T_TM rTemp;
    return string_to_P005_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_trackside_int_T_TM_Utils = {
    P005_trackside_int_T_TM_to_string,
    check_P005_trackside_int_T_TM_string,
    string_to_P005_trackside_int_T_TM,
    is_P005_trackside_int_T_TM_double_conversion_allowed,
    P005_trackside_int_T_TM_to_double,
    is_P005_trackside_int_T_TM_long_convertion_allowed,
    P005_trackside_int_T_TM_to_long,
    compare_P005_trackside_int_T_TM,
    get_P005_trackside_int_T_TM_signature,
    set_P005_trackside_int_T_TM_default_value,
    sizeof(P005_trackside_int_T_TM)
};

/****************************************************************
 ** P005_trackide_sectionlist_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_trackide_sectionlist_T_TMVTable;

int P005_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL
        && pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__3067_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__3067(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP005_trackide_sectionlist_T_TMVTable);
    }
    return is_array__3067_double_conversion_allowed();
}

int is_P005_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP005_trackide_sectionlist_T_TMVTable);
    }
    return is_array__3067_long_convertion_allowed();
}

void compare_P005_trackide_sectionlist_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL
        && pSimP005_trackide_sectionlist_T_TMVTable->m_version >= Scv612
        && pSimP005_trackide_sectionlist_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_trackide_sectionlist_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_trackide_sectionlist_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_trackide_sectionlist_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__3067(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__3067_to_double(pValue, nRetValue);
}

int P005_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP005_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__3067_to_long(pValue, nRetValue);
}

int get_P005_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__3067_signature(pfnStrAppend, pData);
}

int set_P005_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_array__3067_default_value(pValue);
}

int check_P005_trackide_sectionlist_T_TM_string(const char *str, char **endptr)
{
    static P005_trackide_sectionlist_T_TM rTemp;
    return string_to_P005_trackide_sectionlist_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_trackide_sectionlist_T_TM_Utils = {
    P005_trackide_sectionlist_T_TM_to_string,
    check_P005_trackide_sectionlist_T_TM_string,
    string_to_P005_trackide_sectionlist_T_TM,
    is_P005_trackide_sectionlist_T_TM_double_conversion_allowed,
    P005_trackide_sectionlist_T_TM_to_double,
    is_P005_trackide_sectionlist_T_TM_long_convertion_allowed,
    P005_trackide_sectionlist_T_TM_to_long,
    compare_P005_trackide_sectionlist_T_TM,
    get_P005_trackide_sectionlist_T_TM_signature,
    set_P005_trackide_sectionlist_T_TM_default_value,
    sizeof(P005_trackide_sectionlist_T_TM)
};

/****************************************************************
 ** P005_section_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_section_int_T_TMVTable;

int P005_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_section_int_T_TMVTable != NULL
        && pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_section_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__3048_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3048(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_section_int_T_TM_double_conversion_allowed()
{
    if (pSimP005_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP005_section_int_T_TMVTable);
    }
    return is_struct__3048_double_conversion_allowed();
}

int is_P005_section_int_T_TM_long_convertion_allowed()
{
    if (pSimP005_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP005_section_int_T_TMVTable);
    }
    return is_struct__3048_long_convertion_allowed();
}

void compare_P005_section_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_section_int_T_TMVTable != NULL
        && pSimP005_section_int_T_TMVTable->m_version >= Scv612
        && pSimP005_section_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_section_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_section_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_section_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__3048(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_section_int_T_TMVTable, nRetValue);
    }
    return struct__3048_to_double(pValue, nRetValue);
}

int P005_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP005_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP005_section_int_T_TMVTable, nRetValue);
    }
    return struct__3048_to_long(pValue, nRetValue);
}

int get_P005_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3048_signature(pfnStrAppend, pData);
}

int set_P005_section_int_T_TM_default_value(void *pValue)
{
    return set_struct__3048_default_value(pValue);
}

int check_P005_section_int_T_TM_string(const char *str, char **endptr)
{
    static P005_section_int_T_TM rTemp;
    return string_to_P005_section_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_section_int_T_TM_Utils = {
    P005_section_int_T_TM_to_string,
    check_P005_section_int_T_TM_string,
    string_to_P005_section_int_T_TM,
    is_P005_section_int_T_TM_double_conversion_allowed,
    P005_section_int_T_TM_to_double,
    is_P005_section_int_T_TM_long_convertion_allowed,
    P005_section_int_T_TM_to_long,
    compare_P005_section_int_T_TM,
    get_P005_section_int_T_TM_signature,
    set_P005_section_int_T_TM_default_value,
    sizeof(P005_section_int_T_TM)
};

/****************************************************************
 ** P005_sections_array_flat_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_sections_array_flat_T_TMVTable;

int P005_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_sections_array_flat_T_TMVTable != NULL
        && pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_sections_array_flat_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_231_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_sections_array_flat_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_sections_array_flat_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_231(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_sections_array_flat_T_TM_double_conversion_allowed()
{
    if (pSimP005_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP005_sections_array_flat_T_TMVTable);
    }
    return is_array_int_231_double_conversion_allowed();
}

int is_P005_sections_array_flat_T_TM_long_convertion_allowed()
{
    if (pSimP005_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP005_sections_array_flat_T_TMVTable);
    }
    return is_array_int_231_long_convertion_allowed();
}

void compare_P005_sections_array_flat_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_sections_array_flat_T_TMVTable != NULL
        && pSimP005_sections_array_flat_T_TMVTable->m_version >= Scv612
        && pSimP005_sections_array_flat_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_sections_array_flat_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_sections_array_flat_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_sections_array_flat_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_231(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_sections_array_flat_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_sections_array_flat_T_TMVTable, nRetValue);
    }
    return array_int_231_to_double(pValue, nRetValue);
}

int P005_sections_array_flat_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP005_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP005_sections_array_flat_T_TMVTable, nRetValue);
    }
    return array_int_231_to_long(pValue, nRetValue);
}

int get_P005_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_231_signature(pfnStrAppend, pData);
}

int set_P005_sections_array_flat_T_TM_default_value(void *pValue)
{
    return set_array_int_231_default_value(pValue);
}

int check_P005_sections_array_flat_T_TM_string(const char *str, char **endptr)
{
    static P005_sections_array_flat_T_TM rTemp;
    return string_to_P005_sections_array_flat_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_sections_array_flat_T_TM_Utils = {
    P005_sections_array_flat_T_TM_to_string,
    check_P005_sections_array_flat_T_TM_string,
    string_to_P005_sections_array_flat_T_TM,
    is_P005_sections_array_flat_T_TM_double_conversion_allowed,
    P005_sections_array_flat_T_TM_to_double,
    is_P005_sections_array_flat_T_TM_long_convertion_allowed,
    P005_sections_array_flat_T_TM_to_long,
    compare_P005_sections_array_flat_T_TM,
    get_P005_sections_array_flat_T_TM_signature,
    set_P005_sections_array_flat_T_TM_default_value,
    sizeof(P005_sections_array_flat_T_TM)
};

/****************************************************************
 ** P005_OBU_sectionlist_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_OBU_sectionlist_array_T_TMVTable;

int P005_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_7_33_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_OBU_sectionlist_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_OBU_sectionlist_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_7_33(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_OBU_sectionlist_array_T_TM_double_conversion_allowed()
{
    if (pSimP005_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP005_OBU_sectionlist_array_T_TMVTable);
    }
    return is_array_int_7_33_double_conversion_allowed();
}

int is_P005_OBU_sectionlist_array_T_TM_long_convertion_allowed()
{
    if (pSimP005_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP005_OBU_sectionlist_array_T_TMVTable);
    }
    return is_array_int_7_33_long_convertion_allowed();
}

void compare_P005_OBU_sectionlist_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP005_OBU_sectionlist_array_T_TMVTable->m_version >= Scv612
        && pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_OBU_sectionlist_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_7_33(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return array_int_7_33_to_double(pValue, nRetValue);
}

int P005_OBU_sectionlist_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP005_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP005_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return array_int_7_33_to_long(pValue, nRetValue);
}

int get_P005_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_7_33_signature(pfnStrAppend, pData);
}

int set_P005_OBU_sectionlist_array_T_TM_default_value(void *pValue)
{
    return set_array_int_7_33_default_value(pValue);
}

int check_P005_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr)
{
    static P005_OBU_sectionlist_array_T_TM rTemp;
    return string_to_P005_OBU_sectionlist_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_OBU_sectionlist_array_T_TM_Utils = {
    P005_OBU_sectionlist_array_T_TM_to_string,
    check_P005_OBU_sectionlist_array_T_TM_string,
    string_to_P005_OBU_sectionlist_array_T_TM,
    is_P005_OBU_sectionlist_array_T_TM_double_conversion_allowed,
    P005_OBU_sectionlist_array_T_TM_to_double,
    is_P005_OBU_sectionlist_array_T_TM_long_convertion_allowed,
    P005_OBU_sectionlist_array_T_TM_to_long,
    compare_P005_OBU_sectionlist_array_T_TM,
    get_P005_OBU_sectionlist_array_T_TM_signature,
    set_P005_OBU_sectionlist_array_T_TM_default_value,
    sizeof(P005_OBU_sectionlist_array_T_TM)
};

/****************************************************************
 ** P005_section_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_section_array_T_TMVTable;

int P005_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_section_array_T_TMVTable != NULL
        && pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_section_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_7_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_section_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_section_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_section_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_7(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_section_array_T_TM_double_conversion_allowed()
{
    if (pSimP005_section_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP005_section_array_T_TMVTable);
    }
    return is_array_int_7_double_conversion_allowed();
}

int is_P005_section_array_T_TM_long_convertion_allowed()
{
    if (pSimP005_section_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP005_section_array_T_TMVTable);
    }
    return is_array_int_7_long_convertion_allowed();
}

void compare_P005_section_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_section_array_T_TMVTable != NULL
        && pSimP005_section_array_T_TMVTable->m_version >= Scv612
        && pSimP005_section_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_section_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_section_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_section_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_7(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_section_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_section_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_section_array_T_TMVTable, nRetValue);
    }
    return array_int_7_to_double(pValue, nRetValue);
}

int P005_section_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP005_section_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP005_section_array_T_TMVTable, nRetValue);
    }
    return array_int_7_to_long(pValue, nRetValue);
}

int get_P005_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_7_signature(pfnStrAppend, pData);
}

int set_P005_section_array_T_TM_default_value(void *pValue)
{
    return set_array_int_7_default_value(pValue);
}

int check_P005_section_array_T_TM_string(const char *str, char **endptr)
{
    static P005_section_array_T_TM rTemp;
    return string_to_P005_section_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_section_array_T_TM_Utils = {
    P005_section_array_T_TM_to_string,
    check_P005_section_array_T_TM_string,
    string_to_P005_section_array_T_TM,
    is_P005_section_array_T_TM_double_conversion_allowed,
    P005_section_array_T_TM_to_double,
    is_P005_section_array_T_TM_long_convertion_allowed,
    P005_section_array_T_TM_to_long,
    compare_P005_section_array_T_TM,
    get_P005_section_array_T_TM_signature,
    set_P005_section_array_T_TM_default_value,
    sizeof(P005_section_array_T_TM)
};

/****************************************************************
 ** P005_OBU_sectionlist_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_OBU_sectionlist_int_T_TMVTable;

int P005_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__3064_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__3064(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP005_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__3064_double_conversion_allowed();
}

int is_P005_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP005_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__3064_long_convertion_allowed();
}

void compare_P005_OBU_sectionlist_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP005_OBU_sectionlist_int_T_TMVTable->m_version >= Scv612
        && pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_OBU_sectionlist_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__3064(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__3064_to_double(pValue, nRetValue);
}

int P005_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP005_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__3064_to_long(pValue, nRetValue);
}

int get_P005_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__3064_signature(pfnStrAppend, pData);
}

int set_P005_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_array__3064_default_value(pValue);
}

int check_P005_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr)
{
    static P005_OBU_sectionlist_int_T_TM rTemp;
    return string_to_P005_OBU_sectionlist_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_OBU_sectionlist_int_T_TM_Utils = {
    P005_OBU_sectionlist_int_T_TM_to_string,
    check_P005_OBU_sectionlist_int_T_TM_string,
    string_to_P005_OBU_sectionlist_int_T_TM,
    is_P005_OBU_sectionlist_int_T_TM_double_conversion_allowed,
    P005_OBU_sectionlist_int_T_TM_to_double,
    is_P005_OBU_sectionlist_int_T_TM_long_convertion_allowed,
    P005_OBU_sectionlist_int_T_TM_to_long,
    compare_P005_OBU_sectionlist_int_T_TM,
    get_P005_OBU_sectionlist_int_T_TM_signature,
    set_P005_OBU_sectionlist_int_T_TM_default_value,
    sizeof(P005_OBU_sectionlist_int_T_TM)
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
    return struct__3031_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3031(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_trackside_int_T_TMVTable);
    }
    return is_struct__3031_double_conversion_allowed();
}

int is_P041_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_trackside_int_T_TMVTable);
    }
    return is_struct__3031_long_convertion_allowed();
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
        compare_struct__3031(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__3031_to_double(pValue, nRetValue);
}

int P041_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__3031_to_long(pValue, nRetValue);
}

int get_P041_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3031_signature(pfnStrAppend, pData);
}

int set_P041_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__3031_default_value(pValue);
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
    return array__3028_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__3028(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_trackide_sectionlist_T_TMVTable);
    }
    return is_array__3028_double_conversion_allowed();
}

int is_P041_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_trackide_sectionlist_T_TMVTable);
    }
    return is_array__3028_long_convertion_allowed();
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
        compare_array__3028(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__3028_to_double(pValue, nRetValue);
}

int P041_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__3028_to_long(pValue, nRetValue);
}

int get_P041_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__3028_signature(pfnStrAppend, pData);
}

int set_P041_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_array__3028_default_value(pValue);
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
    return struct__3013_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3013(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_section_int_T_TM_double_conversion_allowed()
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_section_int_T_TMVTable);
    }
    return is_struct__3013_double_conversion_allowed();
}

int is_P041_section_int_T_TM_long_convertion_allowed()
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_section_int_T_TMVTable);
    }
    return is_struct__3013_long_convertion_allowed();
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
        compare_struct__3013(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_section_int_T_TMVTable, nRetValue);
    }
    return struct__3013_to_double(pValue, nRetValue);
}

int P041_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_section_int_T_TMVTable, nRetValue);
    }
    return struct__3013_to_long(pValue, nRetValue);
}

int get_P041_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3013_signature(pfnStrAppend, pData);
}

int set_P041_section_int_T_TM_default_value(void *pValue)
{
    return set_struct__3013_default_value(pValue);
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
    return array__3025_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__3025(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__3025_double_conversion_allowed();
}

int is_P041_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__3025_long_convertion_allowed();
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
        compare_array__3025(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__3025_to_double(pValue, nRetValue);
}

int P041_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__3025_to_long(pValue, nRetValue);
}

int get_P041_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__3025_signature(pfnStrAppend, pData);
}

int set_P041_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_array__3025_default_value(pValue);
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
 ** P065_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP065_trackside_int_T_TMVTable;

int P065_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP065_trackside_int_T_TMVTable != NULL
        && pSimP065_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP065_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2997_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P065_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP065_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP065_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2997(str, pValue, endptr);
    }
    return nRet;
}

int is_P065_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP065_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP065_trackside_int_T_TMVTable);
    }
    return is_struct__2997_double_conversion_allowed();
}

int is_P065_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP065_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP065_trackside_int_T_TMVTable);
    }
    return is_struct__2997_long_convertion_allowed();
}

void compare_P065_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP065_trackside_int_T_TMVTable != NULL
        && pSimP065_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimP065_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP065_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP065_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP065_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__2997(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P065_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP065_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP065_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__2997_to_double(pValue, nRetValue);
}

int P065_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP065_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP065_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__2997_to_long(pValue, nRetValue);
}

int get_P065_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2997_signature(pfnStrAppend, pData);
}

int set_P065_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__2997_default_value(pValue);
}

int check_P065_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static P065_trackside_int_T_TM rTemp;
    return string_to_P065_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P065_trackside_int_T_TM_Utils = {
    P065_trackside_int_T_TM_to_string,
    check_P065_trackside_int_T_TM_string,
    string_to_P065_trackside_int_T_TM,
    is_P065_trackside_int_T_TM_double_conversion_allowed,
    P065_trackside_int_T_TM_to_double,
    is_P065_trackside_int_T_TM_long_convertion_allowed,
    P065_trackside_int_T_TM_to_long,
    compare_P065_trackside_int_T_TM,
    get_P065_trackside_int_T_TM_signature,
    set_P065_trackside_int_T_TM_default_value,
    sizeof(P065_trackside_int_T_TM)
};

/****************************************************************
 ** P015_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP015_trackside_int_T_TMVTable;

int P015_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP015_trackside_int_T_TMVTable != NULL
        && pSimP015_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP015_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2970_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P015_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP015_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP015_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2970(str, pValue, endptr);
    }
    return nRet;
}

int is_P015_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP015_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP015_trackside_int_T_TMVTable);
    }
    return is_struct__2970_double_conversion_allowed();
}

int is_P015_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP015_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP015_trackside_int_T_TMVTable);
    }
    return is_struct__2970_long_convertion_allowed();
}

void compare_P015_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP015_trackside_int_T_TMVTable != NULL
        && pSimP015_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimP015_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP015_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP015_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP015_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__2970(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P015_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP015_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP015_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__2970_to_double(pValue, nRetValue);
}

int P015_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP015_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP015_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__2970_to_long(pValue, nRetValue);
}

int get_P015_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2970_signature(pfnStrAppend, pData);
}

int set_P015_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__2970_default_value(pValue);
}

int check_P015_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static P015_trackside_int_T_TM rTemp;
    return string_to_P015_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P015_trackside_int_T_TM_Utils = {
    P015_trackside_int_T_TM_to_string,
    check_P015_trackside_int_T_TM_string,
    string_to_P015_trackside_int_T_TM,
    is_P015_trackside_int_T_TM_double_conversion_allowed,
    P015_trackside_int_T_TM_to_double,
    is_P015_trackside_int_T_TM_long_convertion_allowed,
    P015_trackside_int_T_TM_to_long,
    compare_P015_trackside_int_T_TM,
    get_P015_trackside_int_T_TM_signature,
    set_P015_trackside_int_T_TM_default_value,
    sizeof(P015_trackside_int_T_TM)
};

/****************************************************************
 ** P015_trackide_sectionlist_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP015_trackide_sectionlist_T_TMVTable;

int P015_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP015_trackide_sectionlist_T_TMVTable != NULL
        && pSimP015_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP015_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__2967_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P015_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP015_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP015_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__2967(str, pValue, endptr);
    }
    return nRet;
}

int is_P015_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimP015_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP015_trackide_sectionlist_T_TMVTable);
    }
    return is_array__2967_double_conversion_allowed();
}

int is_P015_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimP015_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP015_trackide_sectionlist_T_TMVTable);
    }
    return is_array__2967_long_convertion_allowed();
}

void compare_P015_trackide_sectionlist_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP015_trackide_sectionlist_T_TMVTable != NULL
        && pSimP015_trackide_sectionlist_T_TMVTable->m_version >= Scv612
        && pSimP015_trackide_sectionlist_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP015_trackide_sectionlist_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP015_trackide_sectionlist_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP015_trackide_sectionlist_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__2967(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P015_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP015_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP015_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__2967_to_double(pValue, nRetValue);
}

int P015_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP015_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP015_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__2967_to_long(pValue, nRetValue);
}

int get_P015_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__2967_signature(pfnStrAppend, pData);
}

int set_P015_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_array__2967_default_value(pValue);
}

int check_P015_trackide_sectionlist_T_TM_string(const char *str, char **endptr)
{
    static P015_trackide_sectionlist_T_TM rTemp;
    return string_to_P015_trackide_sectionlist_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P015_trackide_sectionlist_T_TM_Utils = {
    P015_trackide_sectionlist_T_TM_to_string,
    check_P015_trackide_sectionlist_T_TM_string,
    string_to_P015_trackide_sectionlist_T_TM,
    is_P015_trackide_sectionlist_T_TM_double_conversion_allowed,
    P015_trackide_sectionlist_T_TM_to_double,
    is_P015_trackide_sectionlist_T_TM_long_convertion_allowed,
    P015_trackide_sectionlist_T_TM_to_long,
    compare_P015_trackide_sectionlist_T_TM,
    get_P015_trackide_sectionlist_T_TM_signature,
    set_P015_trackide_sectionlist_T_TM_default_value,
    sizeof(P015_trackide_sectionlist_T_TM)
};

/****************************************************************
 ** P015_section_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP015_section_int_T_TMVTable;

int P015_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP015_section_int_T_TMVTable != NULL
        && pSimP015_section_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP015_section_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2954_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P015_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP015_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP015_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2954(str, pValue, endptr);
    }
    return nRet;
}

int is_P015_section_int_T_TM_double_conversion_allowed()
{
    if (pSimP015_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP015_section_int_T_TMVTable);
    }
    return is_struct__2954_double_conversion_allowed();
}

int is_P015_section_int_T_TM_long_convertion_allowed()
{
    if (pSimP015_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP015_section_int_T_TMVTable);
    }
    return is_struct__2954_long_convertion_allowed();
}

void compare_P015_section_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP015_section_int_T_TMVTable != NULL
        && pSimP015_section_int_T_TMVTable->m_version >= Scv612
        && pSimP015_section_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP015_section_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP015_section_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP015_section_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__2954(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P015_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP015_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP015_section_int_T_TMVTable, nRetValue);
    }
    return struct__2954_to_double(pValue, nRetValue);
}

int P015_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP015_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP015_section_int_T_TMVTable, nRetValue);
    }
    return struct__2954_to_long(pValue, nRetValue);
}

int get_P015_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2954_signature(pfnStrAppend, pData);
}

int set_P015_section_int_T_TM_default_value(void *pValue)
{
    return set_struct__2954_default_value(pValue);
}

int check_P015_section_int_T_TM_string(const char *str, char **endptr)
{
    static P015_section_int_T_TM rTemp;
    return string_to_P015_section_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P015_section_int_T_TM_Utils = {
    P015_section_int_T_TM_to_string,
    check_P015_section_int_T_TM_string,
    string_to_P015_section_int_T_TM,
    is_P015_section_int_T_TM_double_conversion_allowed,
    P015_section_int_T_TM_to_double,
    is_P015_section_int_T_TM_long_convertion_allowed,
    P015_section_int_T_TM_to_long,
    compare_P015_section_int_T_TM,
    get_P015_section_int_T_TM_signature,
    set_P015_section_int_T_TM_default_value,
    sizeof(P015_section_int_T_TM)
};

/****************************************************************
 ** P015_sections_array_flat_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP015_sections_array_flat_T_TMVTable;

int P015_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP015_sections_array_flat_T_TMVTable != NULL
        && pSimP015_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP015_sections_array_flat_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_128_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P015_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP015_sections_array_flat_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP015_sections_array_flat_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_128(str, pValue, endptr);
    }
    return nRet;
}

int is_P015_sections_array_flat_T_TM_double_conversion_allowed()
{
    if (pSimP015_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP015_sections_array_flat_T_TMVTable);
    }
    return is_array_int_128_double_conversion_allowed();
}

int is_P015_sections_array_flat_T_TM_long_convertion_allowed()
{
    if (pSimP015_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP015_sections_array_flat_T_TMVTable);
    }
    return is_array_int_128_long_convertion_allowed();
}

void compare_P015_sections_array_flat_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP015_sections_array_flat_T_TMVTable != NULL
        && pSimP015_sections_array_flat_T_TMVTable->m_version >= Scv612
        && pSimP015_sections_array_flat_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP015_sections_array_flat_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP015_sections_array_flat_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP015_sections_array_flat_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_128(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P015_sections_array_flat_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP015_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP015_sections_array_flat_T_TMVTable, nRetValue);
    }
    return array_int_128_to_double(pValue, nRetValue);
}

int P015_sections_array_flat_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP015_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP015_sections_array_flat_T_TMVTable, nRetValue);
    }
    return array_int_128_to_long(pValue, nRetValue);
}

int get_P015_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_128_signature(pfnStrAppend, pData);
}

int set_P015_sections_array_flat_T_TM_default_value(void *pValue)
{
    return set_array_int_128_default_value(pValue);
}

int check_P015_sections_array_flat_T_TM_string(const char *str, char **endptr)
{
    static P015_sections_array_flat_T_TM rTemp;
    return string_to_P015_sections_array_flat_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P015_sections_array_flat_T_TM_Utils = {
    P015_sections_array_flat_T_TM_to_string,
    check_P015_sections_array_flat_T_TM_string,
    string_to_P015_sections_array_flat_T_TM,
    is_P015_sections_array_flat_T_TM_double_conversion_allowed,
    P015_sections_array_flat_T_TM_to_double,
    is_P015_sections_array_flat_T_TM_long_convertion_allowed,
    P015_sections_array_flat_T_TM_to_long,
    compare_P015_sections_array_flat_T_TM,
    get_P015_sections_array_flat_T_TM_signature,
    set_P015_sections_array_flat_T_TM_default_value,
    sizeof(P015_sections_array_flat_T_TM)
};

/****************************************************************
 ** P015_OBU_sectionlist_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP015_OBU_sectionlist_array_T_TMVTable;

int P015_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP015_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP015_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP015_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_4_32_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P015_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP015_OBU_sectionlist_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP015_OBU_sectionlist_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_4_32(str, pValue, endptr);
    }
    return nRet;
}

int is_P015_OBU_sectionlist_array_T_TM_double_conversion_allowed()
{
    if (pSimP015_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP015_OBU_sectionlist_array_T_TMVTable);
    }
    return is_array_int_4_32_double_conversion_allowed();
}

int is_P015_OBU_sectionlist_array_T_TM_long_convertion_allowed()
{
    if (pSimP015_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP015_OBU_sectionlist_array_T_TMVTable);
    }
    return is_array_int_4_32_long_convertion_allowed();
}

void compare_P015_OBU_sectionlist_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP015_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimP015_OBU_sectionlist_array_T_TMVTable->m_version >= Scv612
        && pSimP015_OBU_sectionlist_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP015_OBU_sectionlist_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP015_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP015_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_4_32(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P015_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP015_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP015_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return array_int_4_32_to_double(pValue, nRetValue);
}

int P015_OBU_sectionlist_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP015_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP015_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return array_int_4_32_to_long(pValue, nRetValue);
}

int get_P015_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_4_32_signature(pfnStrAppend, pData);
}

int set_P015_OBU_sectionlist_array_T_TM_default_value(void *pValue)
{
    return set_array_int_4_32_default_value(pValue);
}

int check_P015_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr)
{
    static P015_OBU_sectionlist_array_T_TM rTemp;
    return string_to_P015_OBU_sectionlist_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P015_OBU_sectionlist_array_T_TM_Utils = {
    P015_OBU_sectionlist_array_T_TM_to_string,
    check_P015_OBU_sectionlist_array_T_TM_string,
    string_to_P015_OBU_sectionlist_array_T_TM,
    is_P015_OBU_sectionlist_array_T_TM_double_conversion_allowed,
    P015_OBU_sectionlist_array_T_TM_to_double,
    is_P015_OBU_sectionlist_array_T_TM_long_convertion_allowed,
    P015_OBU_sectionlist_array_T_TM_to_long,
    compare_P015_OBU_sectionlist_array_T_TM,
    get_P015_OBU_sectionlist_array_T_TM_signature,
    set_P015_OBU_sectionlist_array_T_TM_default_value,
    sizeof(P015_OBU_sectionlist_array_T_TM)
};

/****************************************************************
 ** P015_section_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP015_section_array_T_TMVTable;

int P015_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP015_section_array_T_TMVTable != NULL
        && pSimP015_section_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP015_section_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_4_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P015_section_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP015_section_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP015_section_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_4(str, pValue, endptr);
    }
    return nRet;
}

int is_P015_section_array_T_TM_double_conversion_allowed()
{
    if (pSimP015_section_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP015_section_array_T_TMVTable);
    }
    return is_array_int_4_double_conversion_allowed();
}

int is_P015_section_array_T_TM_long_convertion_allowed()
{
    if (pSimP015_section_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP015_section_array_T_TMVTable);
    }
    return is_array_int_4_long_convertion_allowed();
}

void compare_P015_section_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP015_section_array_T_TMVTable != NULL
        && pSimP015_section_array_T_TMVTable->m_version >= Scv612
        && pSimP015_section_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP015_section_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP015_section_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP015_section_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_4(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P015_section_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP015_section_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP015_section_array_T_TMVTable, nRetValue);
    }
    return array_int_4_to_double(pValue, nRetValue);
}

int P015_section_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP015_section_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP015_section_array_T_TMVTable, nRetValue);
    }
    return array_int_4_to_long(pValue, nRetValue);
}

int get_P015_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_4_signature(pfnStrAppend, pData);
}

int set_P015_section_array_T_TM_default_value(void *pValue)
{
    return set_array_int_4_default_value(pValue);
}

int check_P015_section_array_T_TM_string(const char *str, char **endptr)
{
    static P015_section_array_T_TM rTemp;
    return string_to_P015_section_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P015_section_array_T_TM_Utils = {
    P015_section_array_T_TM_to_string,
    check_P015_section_array_T_TM_string,
    string_to_P015_section_array_T_TM,
    is_P015_section_array_T_TM_double_conversion_allowed,
    P015_section_array_T_TM_to_double,
    is_P015_section_array_T_TM_long_convertion_allowed,
    P015_section_array_T_TM_to_long,
    compare_P015_section_array_T_TM,
    get_P015_section_array_T_TM_signature,
    set_P015_section_array_T_TM_default_value,
    sizeof(P015_section_array_T_TM)
};

/****************************************************************
 ** P015_OBU_sectionlist_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP015_OBU_sectionlist_int_T_TMVTable;

int P015_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP015_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP015_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP015_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__2967_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P015_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP015_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP015_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__2967(str, pValue, endptr);
    }
    return nRet;
}

int is_P015_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimP015_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP015_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__2967_double_conversion_allowed();
}

int is_P015_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimP015_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP015_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__2967_long_convertion_allowed();
}

void compare_P015_OBU_sectionlist_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP015_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimP015_OBU_sectionlist_int_T_TMVTable->m_version >= Scv612
        && pSimP015_OBU_sectionlist_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP015_OBU_sectionlist_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP015_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP015_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__2967(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P015_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP015_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP015_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__2967_to_double(pValue, nRetValue);
}

int P015_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP015_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP015_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__2967_to_long(pValue, nRetValue);
}

int get_P015_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__2967_signature(pfnStrAppend, pData);
}

int set_P015_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_array__2967_default_value(pValue);
}

int check_P015_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr)
{
    static P015_OBU_sectionlist_int_T_TM rTemp;
    return string_to_P015_OBU_sectionlist_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P015_OBU_sectionlist_int_T_TM_Utils = {
    P015_OBU_sectionlist_int_T_TM_to_string,
    check_P015_OBU_sectionlist_int_T_TM_string,
    string_to_P015_OBU_sectionlist_int_T_TM,
    is_P015_OBU_sectionlist_int_T_TM_double_conversion_allowed,
    P015_OBU_sectionlist_int_T_TM_to_double,
    is_P015_OBU_sectionlist_int_T_TM_long_convertion_allowed,
    P015_OBU_sectionlist_int_T_TM_to_long,
    compare_P015_OBU_sectionlist_int_T_TM,
    get_P015_OBU_sectionlist_int_T_TM_signature,
    set_P015_OBU_sectionlist_int_T_TM_default_value,
    sizeof(P015_OBU_sectionlist_int_T_TM)
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
    return array__2943_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__2943(str, pValue, endptr);
    }
    return nRet;
}

int is_Metadata_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__2943_double_conversion_allowed();
}

int is_Metadata_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__2943_long_convertion_allowed();
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
        compare_array__2943(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__2943_to_double(pValue, nRetValue);
}

int Metadata_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__2943_to_long(pValue, nRetValue);
}

int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__2943_signature(pfnStrAppend, pData);
}

int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_array__2943_default_value(pValue);
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
    return struct__2935_to_string(pValue, pfnStrAppend, pData);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2935(str, pValue, endptr);
    }
    return nRet;
}

int is_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__2935_double_conversion_allowed();
}

int is_MetadataElement_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__2935_long_convertion_allowed();
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
        compare_struct__2935(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2935_to_double(pValue, nRetValue);
}

int MetadataElement_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2935_to_long(pValue, nRetValue);
}

int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2935_signature(pfnStrAppend, pData);
}

int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__2935_default_value(pValue);
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
 ** CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimCompressedPackets_T_Common_Types_PkgVTable;

int CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__2946_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__2946(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__2946_double_conversion_allowed();
}

int is_CompressedPackets_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__2946_long_convertion_allowed();
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
        compare_struct__2946(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2946_to_double(pValue, nRetValue);
}

int CompressedPackets_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__2946_to_long(pValue, nRetValue);
}

int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__2946_signature(pfnStrAppend, pData);
}

int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__2946_default_value(pValue);
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
 ** P027V1_trackside_int_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_trackside_int_T_TM_baseline2VTable;

int P027V1_trackside_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL
        && pSimP027V1_trackside_int_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_trackside_int_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__3150_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3150(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackside_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__3150_double_conversion_allowed();
}

int is_P027V1_trackside_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__3150_long_convertion_allowed();
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
        compare_struct__3150(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__3150_to_double(pValue, nRetValue);
}

int P027V1_trackside_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__3150_to_long(pValue, nRetValue);
}

int get_P027V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3150_signature(pfnStrAppend, pData);
}

int set_P027V1_trackside_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__3150_default_value(pValue);
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
    return array__3127_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackside_qdifflist_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__3127(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackside_qdifflist_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable);
    }
    return is_array__3127_double_conversion_allowed();
}

int is_P027V1_trackside_qdifflist_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable);
    }
    return is_array__3127_long_convertion_allowed();
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
        compare_array__3127(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_qdifflist_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable, nRetValue);
    }
    return array__3127_to_double(pValue, nRetValue);
}

int P027V1_trackside_qdifflist_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable, nRetValue);
    }
    return array__3127_to_long(pValue, nRetValue);
}

int get_P027V1_trackside_qdifflist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__3127_signature(pfnStrAppend, pData);
}

int set_P027V1_trackside_qdifflist_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__3127_default_value(pValue);
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
    return struct__3122_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_int_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_int_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3122(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_int_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_int_qdiff_T_TM_baseline2VTable);
    }
    return is_struct__3122_double_conversion_allowed();
}

int is_P027V1_section_int_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_int_qdiff_T_TM_baseline2VTable);
    }
    return is_struct__3122_long_convertion_allowed();
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
        compare_struct__3122(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_int_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return struct__3122_to_double(pValue, nRetValue);
}

int P027V1_section_int_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return struct__3122_to_long(pValue, nRetValue);
}

int get_P027V1_section_int_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3122_signature(pfnStrAppend, pData);
}

int set_P027V1_section_int_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__3122_default_value(pValue);
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
    return array__3147_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackside_sectionlist_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__3147(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackside_sectionlist_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable);
    }
    return is_array__3147_double_conversion_allowed();
}

int is_P027V1_trackside_sectionlist_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable);
    }
    return is_array__3147_long_convertion_allowed();
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
        compare_array__3147(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_sectionlist_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable, nRetValue);
    }
    return array__3147_to_double(pValue, nRetValue);
}

int P027V1_trackside_sectionlist_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable, nRetValue);
    }
    return array__3147_to_long(pValue, nRetValue);
}

int get_P027V1_trackside_sectionlist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__3147_signature(pfnStrAppend, pData);
}

int set_P027V1_trackside_sectionlist_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__3147_default_value(pValue);
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
    return struct__3130_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3130(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_int_T_TM_baseline2VTable);
    }
    return is_struct__3130_double_conversion_allowed();
}

int is_P027V1_section_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_int_T_TM_baseline2VTable);
    }
    return is_struct__3130_long_convertion_allowed();
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
        compare_struct__3130(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__3130_to_double(pValue, nRetValue);
}

int P027V1_section_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__3130_to_long(pValue, nRetValue);
}

int get_P027V1_section_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3130_signature(pfnStrAppend, pData);
}

int set_P027V1_section_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__3130_default_value(pValue);
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
    return array__3144_to_string(pValue, pfnStrAppend, pData);
}

int string_to__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__3144(str, pValue, endptr);
    }
    return nRet;
}

int is__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable);
    }
    return is_array__3144_double_conversion_allowed();
}

int is__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable);
    }
    return is_array__3144_long_convertion_allowed();
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
        compare_array__3144(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable, nRetValue);
    }
    return array__3144_to_double(pValue, nRetValue);
}

int _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable, nRetValue);
    }
    return array__3144_to_long(pValue, nRetValue);
}

int get__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__3144_signature(pfnStrAppend, pData);
}

int set__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__3144_default_value(pValue);
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
    return array__3127_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__3127(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable);
    }
    return is_array__3127_double_conversion_allowed();
}

int is_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable);
    }
    return is_array__3127_long_convertion_allowed();
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
        compare_array__3127(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array__3127_to_double(pValue, nRetValue);
}

int P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array__3127_to_long(pValue, nRetValue);
}

int get_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__3127_signature(pfnStrAppend, pData);
}

int set_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__3127_default_value(pValue);
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
 ** P003V1_trackside_int_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimP003V1_trackside_int_T_TM_baseline2VTable;

int P003V1_trackside_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL
        && pSimP003V1_trackside_int_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP003V1_trackside_int_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__3090_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P003V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP003V1_trackside_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3090(str, pValue, endptr);
    }
    return nRet;
}

int is_P003V1_trackside_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP003V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__3090_double_conversion_allowed();
}

int is_P003V1_trackside_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP003V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__3090_long_convertion_allowed();
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
        compare_struct__3090(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P003V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP003V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__3090_to_double(pValue, nRetValue);
}

int P003V1_trackside_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP003V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__3090_to_long(pValue, nRetValue);
}

int get_P003V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3090_signature(pfnStrAppend, pData);
}

int set_P003V1_trackside_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__3090_default_value(pValue);
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
