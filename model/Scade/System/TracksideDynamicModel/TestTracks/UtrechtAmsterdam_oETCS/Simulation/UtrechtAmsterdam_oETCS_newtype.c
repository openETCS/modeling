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
 ** struct__6048 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6048VTable;

static SimFieldUtils struct__6048_fields[] = {
    {"radioDevice", offsetof(struct__6048,radioDevice), &_Type_kcg_int_Utils},
    {"receivedSystemTime", offsetof(struct__6048,receivedSystemTime), &_Type_kcg_int_Utils},
    {"nid_message", offsetof(struct__6048,nid_message), &_Type_kcg_int_Utils},
    {"t_train", offsetof(struct__6048,t_train), &_Type_kcg_real_Utils},
    {"m_ack", offsetof(struct__6048,m_ack), &_Type_M_ACK_Utils},
    {"nid_lrbg", offsetof(struct__6048,nid_lrbg), &_Type_kcg_int_Utils},
    {"t_train_reference", offsetof(struct__6048,t_train_reference), &_Type_kcg_real_Utils},
    {"nid_em", offsetof(struct__6048,nid_em), &_Type_kcg_int_Utils},
    {"q_scale", offsetof(struct__6048,q_scale), &_Type_Q_SCALE_Utils},
    {"d_sr", offsetof(struct__6048,d_sr), &_Type_kcg_int_Utils},
    {"t_sh_rqst", offsetof(struct__6048,t_sh_rqst), &_Type_kcg_real_Utils},
    {"d_ref", offsetof(struct__6048,d_ref), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__6048,q_dir), &_Type_Q_DIR_Utils},
    {"d_emergencystop", offsetof(struct__6048,d_emergencystop), &_Type_kcg_int_Utils},
    {"m_version", offsetof(struct__6048,m_version), &_Type_M_VERSION_Utils},
};

int struct__6048_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6048VTable != NULL
        && pSimstruct__6048VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6048VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6048_fields, 15, pfnStrAppend, pData);
}

int string_to_struct__6048(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6048VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6048VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6048_fields, 15, endptr);
    }
    return nRet;
}

int is_struct__6048_double_conversion_allowed()
{
    if (pSimstruct__6048VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6048VTable);
    }
    return 0;
}

int is_struct__6048_long_convertion_allowed()
{
    if (pSimstruct__6048VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6048VTable);
    }
    return 0;
}

void compare_struct__6048(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6048VTable != NULL
        && pSimstruct__6048VTable->m_version >= Scv612
        && pSimstruct__6048VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6048VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6048VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6048VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6048_fields, 15, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6048_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6048VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6048VTable, nRetValue);
    }
    return 0;
}

int struct__6048_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6048VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6048VTable, nRetValue);
    }
    return 0;
}

int get_struct__6048_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6048_fields, 15, pfnStrAppend, pData);
}

int set_struct__6048_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__6048*)pValue)->radioDevice));
    set_kcg_int_default_value(&(((struct__6048*)pValue)->receivedSystemTime));
    set_kcg_int_default_value(&(((struct__6048*)pValue)->nid_message));
    set_kcg_real_default_value(&(((struct__6048*)pValue)->t_train));
    set_M_ACK_default_value(&(((struct__6048*)pValue)->m_ack));
    set_kcg_int_default_value(&(((struct__6048*)pValue)->nid_lrbg));
    set_kcg_real_default_value(&(((struct__6048*)pValue)->t_train_reference));
    set_kcg_int_default_value(&(((struct__6048*)pValue)->nid_em));
    set_Q_SCALE_default_value(&(((struct__6048*)pValue)->q_scale));
    set_kcg_int_default_value(&(((struct__6048*)pValue)->d_sr));
    set_kcg_real_default_value(&(((struct__6048*)pValue)->t_sh_rqst));
    set_kcg_int_default_value(&(((struct__6048*)pValue)->d_ref));
    set_Q_DIR_default_value(&(((struct__6048*)pValue)->q_dir));
    set_kcg_int_default_value(&(((struct__6048*)pValue)->d_emergencystop));
    set_M_VERSION_default_value(&(((struct__6048*)pValue)->m_version));
    return 1;
}

int check_struct__6048_string(const char *str, char **endptr)
{
    static struct__6048 rTemp;
    return string_to_struct__6048(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6048_Utils = {
    struct__6048_to_string,
    check_struct__6048_string,
    string_to_struct__6048,
    is_struct__6048_double_conversion_allowed,
    struct__6048_to_double,
    is_struct__6048_long_convertion_allowed,
    struct__6048_to_long,
    compare_struct__6048,
    get_struct__6048_signature,
    set_struct__6048_default_value,
    sizeof(struct__6048)
};

/****************************************************************
 ** struct__6066 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6066VTable;

static SimFieldUtils struct__6066_fields[] = {
    {"valid", offsetof(struct__6066,valid), &_Type_kcg_bool_Utils},
    {"nid_message", offsetof(struct__6066,nid_message), &_Type_kcg_int_Utils},
    {"l_message", offsetof(struct__6066,l_message), &_Type_kcg_int_Utils},
    {"t_train", offsetof(struct__6066,t_train), &_Type_kcg_real_Utils},
    {"m_ack", offsetof(struct__6066,m_ack), &_Type_M_ACK_Utils},
    {"nid_lrbg", offsetof(struct__6066,nid_lrbg), &_Type_kcg_int_Utils},
};

int struct__6066_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6066VTable != NULL
        && pSimstruct__6066VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6066VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6066_fields, 6, pfnStrAppend, pData);
}

int string_to_struct__6066(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6066VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6066VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6066_fields, 6, endptr);
    }
    return nRet;
}

int is_struct__6066_double_conversion_allowed()
{
    if (pSimstruct__6066VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6066VTable);
    }
    return 0;
}

int is_struct__6066_long_convertion_allowed()
{
    if (pSimstruct__6066VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6066VTable);
    }
    return 0;
}

void compare_struct__6066(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6066VTable != NULL
        && pSimstruct__6066VTable->m_version >= Scv612
        && pSimstruct__6066VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6066VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6066VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6066VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6066_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6066_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6066VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6066VTable, nRetValue);
    }
    return 0;
}

int struct__6066_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6066VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6066VTable, nRetValue);
    }
    return 0;
}

int get_struct__6066_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6066_fields, 6, pfnStrAppend, pData);
}

int set_struct__6066_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__6066*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6066*)pValue)->nid_message));
    set_kcg_int_default_value(&(((struct__6066*)pValue)->l_message));
    set_kcg_real_default_value(&(((struct__6066*)pValue)->t_train));
    set_M_ACK_default_value(&(((struct__6066*)pValue)->m_ack));
    set_kcg_int_default_value(&(((struct__6066*)pValue)->nid_lrbg));
    return 1;
}

int check_struct__6066_string(const char *str, char **endptr)
{
    static struct__6066 rTemp;
    return string_to_struct__6066(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6066_Utils = {
    struct__6066_to_string,
    check_struct__6066_string,
    string_to_struct__6066,
    is_struct__6066_double_conversion_allowed,
    struct__6066_to_double,
    is_struct__6066_long_convertion_allowed,
    struct__6066_to_long,
    compare_struct__6066,
    get_struct__6066_signature,
    set_struct__6066_default_value,
    sizeof(struct__6066)
};

/****************************************************************
 ** struct__6075 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6075VTable;

static SimFieldUtils struct__6075_fields[] = {
    {"valid", offsetof(struct__6075,valid), &_Type_kcg_bool_Utils},
    {"nid_message", offsetof(struct__6075,nid_message), &_Type_kcg_int_Utils},
    {"l_message", offsetof(struct__6075,l_message), &_Type_kcg_int_Utils},
    {"t_train", offsetof(struct__6075,t_train), &_Type_kcg_real_Utils},
    {"m_ack", offsetof(struct__6075,m_ack), &_Type_M_ACK_Utils},
    {"nid_lrbg", offsetof(struct__6075,nid_lrbg), &_Type_kcg_int_Utils},
    {"t_train_received", offsetof(struct__6075,t_train_received), &_Type_kcg_real_Utils},
};

int struct__6075_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6075VTable != NULL
        && pSimstruct__6075VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6075VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6075_fields, 7, pfnStrAppend, pData);
}

int string_to_struct__6075(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6075VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6075VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6075_fields, 7, endptr);
    }
    return nRet;
}

int is_struct__6075_double_conversion_allowed()
{
    if (pSimstruct__6075VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6075VTable);
    }
    return 0;
}

int is_struct__6075_long_convertion_allowed()
{
    if (pSimstruct__6075VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6075VTable);
    }
    return 0;
}

void compare_struct__6075(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6075VTable != NULL
        && pSimstruct__6075VTable->m_version >= Scv612
        && pSimstruct__6075VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6075VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6075VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6075VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6075_fields, 7, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6075_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6075VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6075VTable, nRetValue);
    }
    return 0;
}

int struct__6075_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6075VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6075VTable, nRetValue);
    }
    return 0;
}

int get_struct__6075_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6075_fields, 7, pfnStrAppend, pData);
}

int set_struct__6075_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__6075*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6075*)pValue)->nid_message));
    set_kcg_int_default_value(&(((struct__6075*)pValue)->l_message));
    set_kcg_real_default_value(&(((struct__6075*)pValue)->t_train));
    set_M_ACK_default_value(&(((struct__6075*)pValue)->m_ack));
    set_kcg_int_default_value(&(((struct__6075*)pValue)->nid_lrbg));
    set_kcg_real_default_value(&(((struct__6075*)pValue)->t_train_received));
    return 1;
}

int check_struct__6075_string(const char *str, char **endptr)
{
    static struct__6075 rTemp;
    return string_to_struct__6075(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6075_Utils = {
    struct__6075_to_string,
    check_struct__6075_string,
    string_to_struct__6075,
    is_struct__6075_double_conversion_allowed,
    struct__6075_to_double,
    is_struct__6075_long_convertion_allowed,
    struct__6075_to_long,
    compare_struct__6075,
    get_struct__6075_signature,
    set_struct__6075_default_value,
    sizeof(struct__6075)
};

/****************************************************************
 ** struct__6085 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6085VTable;

static SimFieldUtils struct__6085_fields[] = {
    {"valid", offsetof(struct__6085,valid), &_Type_kcg_bool_Utils},
    {"nid_message", offsetof(struct__6085,nid_message), &_Type_kcg_int_Utils},
    {"l_message", offsetof(struct__6085,l_message), &_Type_kcg_int_Utils},
    {"t_train", offsetof(struct__6085,t_train), &_Type_kcg_real_Utils},
    {"m_ack", offsetof(struct__6085,m_ack), &_Type_M_ACK_Utils},
    {"nid_lrbg", offsetof(struct__6085,nid_lrbg), &_Type_kcg_int_Utils},
    {"nid_em", offsetof(struct__6085,nid_em), &_Type_kcg_int_Utils},
    {"q_scale", offsetof(struct__6085,q_scale), &_Type_Q_SCALE_Utils},
    {"d_ref", offsetof(struct__6085,d_ref), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__6085,q_dir), &_Type_Q_DIR_Utils},
    {"d_emergencystop", offsetof(struct__6085,d_emergencystop), &_Type_kcg_int_Utils},
};

int struct__6085_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6085VTable != NULL
        && pSimstruct__6085VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6085VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6085_fields, 11, pfnStrAppend, pData);
}

int string_to_struct__6085(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6085VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6085VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6085_fields, 11, endptr);
    }
    return nRet;
}

int is_struct__6085_double_conversion_allowed()
{
    if (pSimstruct__6085VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6085VTable);
    }
    return 0;
}

int is_struct__6085_long_convertion_allowed()
{
    if (pSimstruct__6085VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6085VTable);
    }
    return 0;
}

void compare_struct__6085(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6085VTable != NULL
        && pSimstruct__6085VTable->m_version >= Scv612
        && pSimstruct__6085VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6085VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6085VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6085VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6085_fields, 11, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6085_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6085VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6085VTable, nRetValue);
    }
    return 0;
}

int struct__6085_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6085VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6085VTable, nRetValue);
    }
    return 0;
}

int get_struct__6085_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6085_fields, 11, pfnStrAppend, pData);
}

int set_struct__6085_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__6085*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6085*)pValue)->nid_message));
    set_kcg_int_default_value(&(((struct__6085*)pValue)->l_message));
    set_kcg_real_default_value(&(((struct__6085*)pValue)->t_train));
    set_M_ACK_default_value(&(((struct__6085*)pValue)->m_ack));
    set_kcg_int_default_value(&(((struct__6085*)pValue)->nid_lrbg));
    set_kcg_int_default_value(&(((struct__6085*)pValue)->nid_em));
    set_Q_SCALE_default_value(&(((struct__6085*)pValue)->q_scale));
    set_kcg_int_default_value(&(((struct__6085*)pValue)->d_ref));
    set_Q_DIR_default_value(&(((struct__6085*)pValue)->q_dir));
    set_kcg_int_default_value(&(((struct__6085*)pValue)->d_emergencystop));
    return 1;
}

int check_struct__6085_string(const char *str, char **endptr)
{
    static struct__6085 rTemp;
    return string_to_struct__6085(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6085_Utils = {
    struct__6085_to_string,
    check_struct__6085_string,
    string_to_struct__6085,
    is_struct__6085_double_conversion_allowed,
    struct__6085_to_double,
    is_struct__6085_long_convertion_allowed,
    struct__6085_to_long,
    compare_struct__6085,
    get_struct__6085_signature,
    set_struct__6085_default_value,
    sizeof(struct__6085)
};

/****************************************************************
 ** struct__6099 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6099VTable;

static SimFieldUtils struct__6099_fields[] = {
    {"valid", offsetof(struct__6099,valid), &_Type_kcg_bool_Utils},
    {"nid_message", offsetof(struct__6099,nid_message), &_Type_kcg_int_Utils},
    {"l_message", offsetof(struct__6099,l_message), &_Type_kcg_int_Utils},
    {"t_train", offsetof(struct__6099,t_train), &_Type_kcg_real_Utils},
    {"m_ack", offsetof(struct__6099,m_ack), &_Type_M_ACK_Utils},
    {"nid_lrbg", offsetof(struct__6099,nid_lrbg), &_Type_kcg_int_Utils},
    {"m_version", offsetof(struct__6099,m_version), &_Type_M_VERSION_Utils},
};

int struct__6099_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6099VTable != NULL
        && pSimstruct__6099VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6099VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6099_fields, 7, pfnStrAppend, pData);
}

int string_to_struct__6099(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6099VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6099VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6099_fields, 7, endptr);
    }
    return nRet;
}

int is_struct__6099_double_conversion_allowed()
{
    if (pSimstruct__6099VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6099VTable);
    }
    return 0;
}

int is_struct__6099_long_convertion_allowed()
{
    if (pSimstruct__6099VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6099VTable);
    }
    return 0;
}

void compare_struct__6099(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6099VTable != NULL
        && pSimstruct__6099VTable->m_version >= Scv612
        && pSimstruct__6099VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6099VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6099VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6099VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6099_fields, 7, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6099_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6099VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6099VTable, nRetValue);
    }
    return 0;
}

int struct__6099_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6099VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6099VTable, nRetValue);
    }
    return 0;
}

int get_struct__6099_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6099_fields, 7, pfnStrAppend, pData);
}

int set_struct__6099_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__6099*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6099*)pValue)->nid_message));
    set_kcg_int_default_value(&(((struct__6099*)pValue)->l_message));
    set_kcg_real_default_value(&(((struct__6099*)pValue)->t_train));
    set_M_ACK_default_value(&(((struct__6099*)pValue)->m_ack));
    set_kcg_int_default_value(&(((struct__6099*)pValue)->nid_lrbg));
    set_M_VERSION_default_value(&(((struct__6099*)pValue)->m_version));
    return 1;
}

int check_struct__6099_string(const char *str, char **endptr)
{
    static struct__6099 rTemp;
    return string_to_struct__6099(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6099_Utils = {
    struct__6099_to_string,
    check_struct__6099_string,
    string_to_struct__6099,
    is_struct__6099_double_conversion_allowed,
    struct__6099_to_double,
    is_struct__6099_long_convertion_allowed,
    struct__6099_to_long,
    compare_struct__6099,
    get_struct__6099_signature,
    set_struct__6099_default_value,
    sizeof(struct__6099)
};

/****************************************************************
 ** struct__6109 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6109VTable;

static SimFieldUtils struct__6109_fields[] = {
    {"valid", offsetof(struct__6109,valid), &_Type_kcg_bool_Utils},
    {"nid_message", offsetof(struct__6109,nid_message), &_Type_kcg_int_Utils},
    {"l_message", offsetof(struct__6109,l_message), &_Type_kcg_int_Utils},
    {"t_train", offsetof(struct__6109,t_train), &_Type_kcg_real_Utils},
    {"field1", offsetof(struct__6109,field1), &_Type_kcg_int_Utils},
    {"field2", offsetof(struct__6109,field2), &_Type_kcg_int_Utils},
    {"field3", offsetof(struct__6109,field3), &_Type_kcg_int_Utils},
    {"field4", offsetof(struct__6109,field4), &_Type_kcg_int_Utils},
    {"field5", offsetof(struct__6109,field5), &_Type_kcg_int_Utils},
    {"field6", offsetof(struct__6109,field6), &_Type_kcg_int_Utils},
    {"field7", offsetof(struct__6109,field7), &_Type_kcg_int_Utils},
    {"field8", offsetof(struct__6109,field8), &_Type_kcg_int_Utils},
};

int struct__6109_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6109VTable != NULL
        && pSimstruct__6109VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6109VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6109_fields, 12, pfnStrAppend, pData);
}

int string_to_struct__6109(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6109VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6109VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6109_fields, 12, endptr);
    }
    return nRet;
}

int is_struct__6109_double_conversion_allowed()
{
    if (pSimstruct__6109VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6109VTable);
    }
    return 0;
}

int is_struct__6109_long_convertion_allowed()
{
    if (pSimstruct__6109VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6109VTable);
    }
    return 0;
}

void compare_struct__6109(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6109VTable != NULL
        && pSimstruct__6109VTable->m_version >= Scv612
        && pSimstruct__6109VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6109VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6109VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6109VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6109_fields, 12, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6109_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6109VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6109VTable, nRetValue);
    }
    return 0;
}

int struct__6109_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6109VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6109VTable, nRetValue);
    }
    return 0;
}

int get_struct__6109_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6109_fields, 12, pfnStrAppend, pData);
}

int set_struct__6109_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__6109*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6109*)pValue)->nid_message));
    set_kcg_int_default_value(&(((struct__6109*)pValue)->l_message));
    set_kcg_real_default_value(&(((struct__6109*)pValue)->t_train));
    set_kcg_int_default_value(&(((struct__6109*)pValue)->field1));
    set_kcg_int_default_value(&(((struct__6109*)pValue)->field2));
    set_kcg_int_default_value(&(((struct__6109*)pValue)->field3));
    set_kcg_int_default_value(&(((struct__6109*)pValue)->field4));
    set_kcg_int_default_value(&(((struct__6109*)pValue)->field5));
    set_kcg_int_default_value(&(((struct__6109*)pValue)->field6));
    set_kcg_int_default_value(&(((struct__6109*)pValue)->field7));
    set_kcg_int_default_value(&(((struct__6109*)pValue)->field8));
    return 1;
}

int check_struct__6109_string(const char *str, char **endptr)
{
    static struct__6109 rTemp;
    return string_to_struct__6109(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6109_Utils = {
    struct__6109_to_string,
    check_struct__6109_string,
    string_to_struct__6109,
    is_struct__6109_double_conversion_allowed,
    struct__6109_to_double,
    is_struct__6109_long_convertion_allowed,
    struct__6109_to_long,
    compare_struct__6109,
    get_struct__6109_signature,
    set_struct__6109_default_value,
    sizeof(struct__6109)
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
 ** struct__6127 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6127VTable;

static SimFieldUtils struct__6127_fields[] = {
    {"nid_packet", offsetof(struct__6127,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__6127,q_dir), &_Type_Q_DIR_Utils},
    {"valid", offsetof(struct__6127,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(struct__6127,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(struct__6127,endAddress), &_Type_kcg_int_Utils},
};

int struct__6127_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6127VTable != NULL
        && pSimstruct__6127VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6127VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6127_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__6127(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6127VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6127VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6127_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__6127_double_conversion_allowed()
{
    if (pSimstruct__6127VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6127VTable);
    }
    return 0;
}

int is_struct__6127_long_convertion_allowed()
{
    if (pSimstruct__6127VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6127VTable);
    }
    return 0;
}

void compare_struct__6127(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6127VTable != NULL
        && pSimstruct__6127VTable->m_version >= Scv612
        && pSimstruct__6127VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6127VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6127VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6127VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6127_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6127_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6127VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6127VTable, nRetValue);
    }
    return 0;
}

int struct__6127_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6127VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6127VTable, nRetValue);
    }
    return 0;
}

int get_struct__6127_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6127_fields, 5, pfnStrAppend, pData);
}

int set_struct__6127_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__6127*)pValue)->nid_packet));
    set_Q_DIR_default_value(&(((struct__6127*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((struct__6127*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6127*)pValue)->startAddress));
    set_kcg_int_default_value(&(((struct__6127*)pValue)->endAddress));
    return 1;
}

int check_struct__6127_string(const char *str, char **endptr)
{
    static struct__6127 rTemp;
    return string_to_struct__6127(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6127_Utils = {
    struct__6127_to_string,
    check_struct__6127_string,
    string_to_struct__6127,
    is_struct__6127_double_conversion_allowed,
    struct__6127_to_double,
    is_struct__6127_long_convertion_allowed,
    struct__6127_to_long,
    compare_struct__6127,
    get_struct__6127_signature,
    set_struct__6127_default_value,
    sizeof(struct__6127)
};

/****************************************************************
 ** array__6135 
 ****************************************************************/

struct SimTypeVTable *pSimarray__6135VTable;

int array__6135_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__6135VTable != NULL
        && pSimarray__6135VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__6135VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__6127_to_string, 30, sizeof(struct__6127), pfnStrAppend, pData);
}

int string_to_array__6135(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__6135VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__6135VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__6127_Utils, 30, sizeof(struct__6127), endptr);
    }
    return nRet;
}

int is_array__6135_double_conversion_allowed()
{
    if (pSimarray__6135VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__6135VTable);
    }
    return 0;
}

int is_array__6135_long_convertion_allowed()
{
    if (pSimarray__6135VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__6135VTable);
    }
    return 0;
}

void compare_array__6135(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__6135VTable != NULL
        && pSimarray__6135VTable->m_version >= Scv612
        && pSimarray__6135VTable->m_pfnCompare != NULL) {
        if (pSimarray__6135VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__6135VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__6135VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__6127, 30, sizeof(struct__6127), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__6135_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__6135VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__6135VTable, nRetValue);
    }
    return 0;
}

int array__6135_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__6135VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__6135VTable, nRetValue);
    }
    return 0;
}

int get_array__6135_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__6127_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__6135_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_struct__6127_default_value(&((struct__6127*)pValue)[i]);
    return 1;
}

int check_array__6135_string(const char *str, char **endptr)
{
    static array__6135 rTemp;
    return string_to_array__6135(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__6135_Utils = {
    array__6135_to_string,
    check_array__6135_string,
    string_to_array__6135,
    is_array__6135_double_conversion_allowed,
    array__6135_to_double,
    is_array__6135_long_convertion_allowed,
    array__6135_to_long,
    compare_array__6135,
    get_array__6135_signature,
    set_array__6135_default_value,
    sizeof(array__6135)
};

/****************************************************************
 ** struct__6138 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6138VTable;

static SimFieldUtils struct__6138_fields[] = {
    {"PacketHeaders", offsetof(struct__6138,PacketHeaders), &_Type_array__6135_Utils},
    {"PacketData", offsetof(struct__6138,PacketData), &_Type_array_int_500_Utils},
};

int struct__6138_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6138VTable != NULL
        && pSimstruct__6138VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6138VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6138_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__6138(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6138VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6138VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6138_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__6138_double_conversion_allowed()
{
    if (pSimstruct__6138VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6138VTable);
    }
    return 0;
}

int is_struct__6138_long_convertion_allowed()
{
    if (pSimstruct__6138VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6138VTable);
    }
    return 0;
}

void compare_struct__6138(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6138VTable != NULL
        && pSimstruct__6138VTable->m_version >= Scv612
        && pSimstruct__6138VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6138VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6138VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6138VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6138_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6138_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6138VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6138VTable, nRetValue);
    }
    return 0;
}

int struct__6138_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6138VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6138VTable, nRetValue);
    }
    return 0;
}

int get_struct__6138_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6138_fields, 2, pfnStrAppend, pData);
}

int set_struct__6138_default_value(void *pValue)
{
    set_array__6135_default_value(&(((struct__6138*)pValue)->PacketHeaders));
    set_array_int_500_default_value(&(((struct__6138*)pValue)->PacketData));
    return 1;
}

int check_struct__6138_string(const char *str, char **endptr)
{
    static struct__6138 rTemp;
    return string_to_struct__6138(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6138_Utils = {
    struct__6138_to_string,
    check_struct__6138_string,
    string_to_struct__6138,
    is_struct__6138_double_conversion_allowed,
    struct__6138_to_double,
    is_struct__6138_long_convertion_allowed,
    struct__6138_to_long,
    compare_struct__6138,
    get_struct__6138_signature,
    set_struct__6138_default_value,
    sizeof(struct__6138)
};

/****************************************************************
 ** struct__6143 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6143VTable;

static SimFieldUtils struct__6143_fields[] = {
    {"radioDevice", offsetof(struct__6143,radioDevice), &_Type_kcg_int_Utils},
    {"receivedSystemTime", offsetof(struct__6143,receivedSystemTime), &_Type_kcg_int_Utils},
    {"nid_message", offsetof(struct__6143,nid_message), &_Type_kcg_int_Utils},
    {"t_train", offsetof(struct__6143,t_train), &_Type_kcg_int_Utils},
    {"m_ack", offsetof(struct__6143,m_ack), &_Type_kcg_int_Utils},
    {"nid_lrbg", offsetof(struct__6143,nid_lrbg), &_Type_kcg_int_Utils},
    {"t_train_reference", offsetof(struct__6143,t_train_reference), &_Type_kcg_int_Utils},
    {"nid_em", offsetof(struct__6143,nid_em), &_Type_kcg_int_Utils},
    {"q_scale", offsetof(struct__6143,q_scale), &_Type_kcg_int_Utils},
    {"d_sr", offsetof(struct__6143,d_sr), &_Type_kcg_int_Utils},
    {"t_sh_rqst", offsetof(struct__6143,t_sh_rqst), &_Type_kcg_int_Utils},
    {"d_ref", offsetof(struct__6143,d_ref), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__6143,q_dir), &_Type_kcg_int_Utils},
    {"d_emergencystop", offsetof(struct__6143,d_emergencystop), &_Type_kcg_int_Utils},
    {"m_version", offsetof(struct__6143,m_version), &_Type_kcg_int_Utils},
};

int struct__6143_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6143VTable != NULL
        && pSimstruct__6143VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6143VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6143_fields, 15, pfnStrAppend, pData);
}

int string_to_struct__6143(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6143VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6143VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6143_fields, 15, endptr);
    }
    return nRet;
}

int is_struct__6143_double_conversion_allowed()
{
    if (pSimstruct__6143VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6143VTable);
    }
    return 0;
}

int is_struct__6143_long_convertion_allowed()
{
    if (pSimstruct__6143VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6143VTable);
    }
    return 0;
}

void compare_struct__6143(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6143VTable != NULL
        && pSimstruct__6143VTable->m_version >= Scv612
        && pSimstruct__6143VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6143VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6143VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6143VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6143_fields, 15, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6143_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6143VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6143VTable, nRetValue);
    }
    return 0;
}

int struct__6143_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6143VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6143VTable, nRetValue);
    }
    return 0;
}

int get_struct__6143_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6143_fields, 15, pfnStrAppend, pData);
}

int set_struct__6143_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__6143*)pValue)->radioDevice));
    set_kcg_int_default_value(&(((struct__6143*)pValue)->receivedSystemTime));
    set_kcg_int_default_value(&(((struct__6143*)pValue)->nid_message));
    set_kcg_int_default_value(&(((struct__6143*)pValue)->t_train));
    set_kcg_int_default_value(&(((struct__6143*)pValue)->m_ack));
    set_kcg_int_default_value(&(((struct__6143*)pValue)->nid_lrbg));
    set_kcg_int_default_value(&(((struct__6143*)pValue)->t_train_reference));
    set_kcg_int_default_value(&(((struct__6143*)pValue)->nid_em));
    set_kcg_int_default_value(&(((struct__6143*)pValue)->q_scale));
    set_kcg_int_default_value(&(((struct__6143*)pValue)->d_sr));
    set_kcg_int_default_value(&(((struct__6143*)pValue)->t_sh_rqst));
    set_kcg_int_default_value(&(((struct__6143*)pValue)->d_ref));
    set_kcg_int_default_value(&(((struct__6143*)pValue)->q_dir));
    set_kcg_int_default_value(&(((struct__6143*)pValue)->d_emergencystop));
    set_kcg_int_default_value(&(((struct__6143*)pValue)->m_version));
    return 1;
}

int check_struct__6143_string(const char *str, char **endptr)
{
    static struct__6143 rTemp;
    return string_to_struct__6143(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6143_Utils = {
    struct__6143_to_string,
    check_struct__6143_string,
    string_to_struct__6143,
    is_struct__6143_double_conversion_allowed,
    struct__6143_to_double,
    is_struct__6143_long_convertion_allowed,
    struct__6143_to_long,
    compare_struct__6143,
    get_struct__6143_signature,
    set_struct__6143_default_value,
    sizeof(struct__6143)
};

/****************************************************************
 ** struct__6161 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6161VTable;

static SimFieldUtils struct__6161_fields[] = {
    {"Header", offsetof(struct__6161,Header), &_Type_struct__6143_Utils},
    {"Messages", offsetof(struct__6161,Messages), &_Type_struct__6138_Utils},
};

int struct__6161_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6161VTable != NULL
        && pSimstruct__6161VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6161VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6161_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__6161(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6161VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6161VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6161_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__6161_double_conversion_allowed()
{
    if (pSimstruct__6161VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6161VTable);
    }
    return 0;
}

int is_struct__6161_long_convertion_allowed()
{
    if (pSimstruct__6161VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6161VTable);
    }
    return 0;
}

void compare_struct__6161(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6161VTable != NULL
        && pSimstruct__6161VTable->m_version >= Scv612
        && pSimstruct__6161VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6161VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6161VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6161VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6161_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6161_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6161VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6161VTable, nRetValue);
    }
    return 0;
}

int struct__6161_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6161VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6161VTable, nRetValue);
    }
    return 0;
}

int get_struct__6161_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6161_fields, 2, pfnStrAppend, pData);
}

int set_struct__6161_default_value(void *pValue)
{
    set_struct__6143_default_value(&(((struct__6161*)pValue)->Header));
    set_struct__6138_default_value(&(((struct__6161*)pValue)->Messages));
    return 1;
}

int check_struct__6161_string(const char *str, char **endptr)
{
    static struct__6161 rTemp;
    return string_to_struct__6161(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6161_Utils = {
    struct__6161_to_string,
    check_struct__6161_string,
    string_to_struct__6161,
    is_struct__6161_double_conversion_allowed,
    struct__6161_to_double,
    is_struct__6161_long_convertion_allowed,
    struct__6161_to_long,
    compare_struct__6161,
    get_struct__6161_signature,
    set_struct__6161_default_value,
    sizeof(struct__6161)
};

/****************************************************************
 ** struct__6166 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6166VTable;

static SimFieldUtils struct__6166_fields[] = {
    {"message", offsetof(struct__6166,message), &_Type_struct__6109_Utils},
    {"packets", offsetof(struct__6166,packets), &_Type_struct__6138_Utils},
    {"trigger", offsetof(struct__6166,trigger), &_Type_kcg_int_Utils},
    {"message_sent", offsetof(struct__6166,message_sent), &_Type_kcg_bool_Utils},
};

int struct__6166_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6166VTable != NULL
        && pSimstruct__6166VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6166VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6166_fields, 4, pfnStrAppend, pData);
}

int string_to_struct__6166(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6166VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6166VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6166_fields, 4, endptr);
    }
    return nRet;
}

int is_struct__6166_double_conversion_allowed()
{
    if (pSimstruct__6166VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6166VTable);
    }
    return 0;
}

int is_struct__6166_long_convertion_allowed()
{
    if (pSimstruct__6166VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6166VTable);
    }
    return 0;
}

void compare_struct__6166(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6166VTable != NULL
        && pSimstruct__6166VTable->m_version >= Scv612
        && pSimstruct__6166VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6166VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6166VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6166VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6166_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6166_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6166VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6166VTable, nRetValue);
    }
    return 0;
}

int struct__6166_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6166VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6166VTable, nRetValue);
    }
    return 0;
}

int get_struct__6166_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6166_fields, 4, pfnStrAppend, pData);
}

int set_struct__6166_default_value(void *pValue)
{
    set_struct__6109_default_value(&(((struct__6166*)pValue)->message));
    set_struct__6138_default_value(&(((struct__6166*)pValue)->packets));
    set_kcg_int_default_value(&(((struct__6166*)pValue)->trigger));
    set_kcg_bool_default_value(&(((struct__6166*)pValue)->message_sent));
    return 1;
}

int check_struct__6166_string(const char *str, char **endptr)
{
    static struct__6166 rTemp;
    return string_to_struct__6166(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6166_Utils = {
    struct__6166_to_string,
    check_struct__6166_string,
    string_to_struct__6166,
    is_struct__6166_double_conversion_allowed,
    struct__6166_to_double,
    is_struct__6166_long_convertion_allowed,
    struct__6166_to_long,
    compare_struct__6166,
    get_struct__6166_signature,
    set_struct__6166_default_value,
    sizeof(struct__6166)
};

/****************************************************************
 ** struct__6173 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6173VTable;

static SimFieldUtils struct__6173_fields[] = {
    {"valid", offsetof(struct__6173,valid), &_Type_kcg_bool_Utils},
    {"nid_message", offsetof(struct__6173,nid_message), &_Type_kcg_int_Utils},
    {"l_message", offsetof(struct__6173,l_message), &_Type_kcg_int_Utils},
    {"t_train", offsetof(struct__6173,t_train), &_Type_kcg_int_Utils},
    {"m_ack", offsetof(struct__6173,m_ack), &_Type_kcg_int_Utils},
    {"nid_lrbg", offsetof(struct__6173,nid_lrbg), &_Type_kcg_int_Utils},
    {"nid_em", offsetof(struct__6173,nid_em), &_Type_kcg_int_Utils},
    {"q_scale", offsetof(struct__6173,q_scale), &_Type_kcg_int_Utils},
    {"d_ref", offsetof(struct__6173,d_ref), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__6173,q_dir), &_Type_kcg_int_Utils},
    {"d_emergencystop", offsetof(struct__6173,d_emergencystop), &_Type_kcg_int_Utils},
};

int struct__6173_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6173VTable != NULL
        && pSimstruct__6173VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6173VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6173_fields, 11, pfnStrAppend, pData);
}

int string_to_struct__6173(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6173VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6173VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6173_fields, 11, endptr);
    }
    return nRet;
}

int is_struct__6173_double_conversion_allowed()
{
    if (pSimstruct__6173VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6173VTable);
    }
    return 0;
}

int is_struct__6173_long_convertion_allowed()
{
    if (pSimstruct__6173VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6173VTable);
    }
    return 0;
}

void compare_struct__6173(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6173VTable != NULL
        && pSimstruct__6173VTable->m_version >= Scv612
        && pSimstruct__6173VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6173VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6173VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6173VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6173_fields, 11, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6173_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6173VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6173VTable, nRetValue);
    }
    return 0;
}

int struct__6173_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6173VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6173VTable, nRetValue);
    }
    return 0;
}

int get_struct__6173_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6173_fields, 11, pfnStrAppend, pData);
}

int set_struct__6173_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__6173*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6173*)pValue)->nid_message));
    set_kcg_int_default_value(&(((struct__6173*)pValue)->l_message));
    set_kcg_int_default_value(&(((struct__6173*)pValue)->t_train));
    set_kcg_int_default_value(&(((struct__6173*)pValue)->m_ack));
    set_kcg_int_default_value(&(((struct__6173*)pValue)->nid_lrbg));
    set_kcg_int_default_value(&(((struct__6173*)pValue)->nid_em));
    set_kcg_int_default_value(&(((struct__6173*)pValue)->q_scale));
    set_kcg_int_default_value(&(((struct__6173*)pValue)->d_ref));
    set_kcg_int_default_value(&(((struct__6173*)pValue)->q_dir));
    set_kcg_int_default_value(&(((struct__6173*)pValue)->d_emergencystop));
    return 1;
}

int check_struct__6173_string(const char *str, char **endptr)
{
    static struct__6173 rTemp;
    return string_to_struct__6173(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6173_Utils = {
    struct__6173_to_string,
    check_struct__6173_string,
    string_to_struct__6173,
    is_struct__6173_double_conversion_allowed,
    struct__6173_to_double,
    is_struct__6173_long_convertion_allowed,
    struct__6173_to_long,
    compare_struct__6173,
    get_struct__6173_signature,
    set_struct__6173_default_value,
    sizeof(struct__6173)
};

/****************************************************************
 ** struct__6187 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6187VTable;

static SimFieldUtils struct__6187_fields[] = {
    {"valid", offsetof(struct__6187,valid), &_Type_kcg_bool_Utils},
    {"nid_message", offsetof(struct__6187,nid_message), &_Type_kcg_int_Utils},
    {"l_message", offsetof(struct__6187,l_message), &_Type_kcg_int_Utils},
    {"t_train", offsetof(struct__6187,t_train), &_Type_kcg_int_Utils},
    {"m_ack", offsetof(struct__6187,m_ack), &_Type_kcg_int_Utils},
    {"nid_lrbg", offsetof(struct__6187,nid_lrbg), &_Type_kcg_int_Utils},
};

int struct__6187_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6187VTable != NULL
        && pSimstruct__6187VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6187VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6187_fields, 6, pfnStrAppend, pData);
}

int string_to_struct__6187(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6187VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6187VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6187_fields, 6, endptr);
    }
    return nRet;
}

int is_struct__6187_double_conversion_allowed()
{
    if (pSimstruct__6187VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6187VTable);
    }
    return 0;
}

int is_struct__6187_long_convertion_allowed()
{
    if (pSimstruct__6187VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6187VTable);
    }
    return 0;
}

void compare_struct__6187(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6187VTable != NULL
        && pSimstruct__6187VTable->m_version >= Scv612
        && pSimstruct__6187VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6187VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6187VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6187VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6187_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6187_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6187VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6187VTable, nRetValue);
    }
    return 0;
}

int struct__6187_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6187VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6187VTable, nRetValue);
    }
    return 0;
}

int get_struct__6187_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6187_fields, 6, pfnStrAppend, pData);
}

int set_struct__6187_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__6187*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6187*)pValue)->nid_message));
    set_kcg_int_default_value(&(((struct__6187*)pValue)->l_message));
    set_kcg_int_default_value(&(((struct__6187*)pValue)->t_train));
    set_kcg_int_default_value(&(((struct__6187*)pValue)->m_ack));
    set_kcg_int_default_value(&(((struct__6187*)pValue)->nid_lrbg));
    return 1;
}

int check_struct__6187_string(const char *str, char **endptr)
{
    static struct__6187 rTemp;
    return string_to_struct__6187(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6187_Utils = {
    struct__6187_to_string,
    check_struct__6187_string,
    string_to_struct__6187,
    is_struct__6187_double_conversion_allowed,
    struct__6187_to_double,
    is_struct__6187_long_convertion_allowed,
    struct__6187_to_long,
    compare_struct__6187,
    get_struct__6187_signature,
    set_struct__6187_default_value,
    sizeof(struct__6187)
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
 ** struct__6199 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6199VTable;

static SimFieldUtils struct__6199_fields[] = {
    {"L_SECTION", offsetof(struct__6199,L_SECTION), &_Type_kcg_int_Utils},
    {"Q_SECTIONTIMER", offsetof(struct__6199,Q_SECTIONTIMER), &_Type_kcg_int_Utils},
    {"T_SECTIONTIMER", offsetof(struct__6199,T_SECTIONTIMER), &_Type_kcg_int_Utils},
    {"D_SECTIONTIMERSTOPLOC", offsetof(struct__6199,D_SECTIONTIMERSTOPLOC), &_Type_kcg_int_Utils},
};

int struct__6199_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6199VTable != NULL
        && pSimstruct__6199VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6199VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6199_fields, 4, pfnStrAppend, pData);
}

int string_to_struct__6199(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6199VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6199VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6199_fields, 4, endptr);
    }
    return nRet;
}

int is_struct__6199_double_conversion_allowed()
{
    if (pSimstruct__6199VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6199VTable);
    }
    return 0;
}

int is_struct__6199_long_convertion_allowed()
{
    if (pSimstruct__6199VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6199VTable);
    }
    return 0;
}

void compare_struct__6199(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6199VTable != NULL
        && pSimstruct__6199VTable->m_version >= Scv612
        && pSimstruct__6199VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6199VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6199VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6199VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6199_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6199_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6199VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6199VTable, nRetValue);
    }
    return 0;
}

int struct__6199_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6199VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6199VTable, nRetValue);
    }
    return 0;
}

int get_struct__6199_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6199_fields, 4, pfnStrAppend, pData);
}

int set_struct__6199_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__6199*)pValue)->L_SECTION));
    set_kcg_int_default_value(&(((struct__6199*)pValue)->Q_SECTIONTIMER));
    set_kcg_int_default_value(&(((struct__6199*)pValue)->T_SECTIONTIMER));
    set_kcg_int_default_value(&(((struct__6199*)pValue)->D_SECTIONTIMERSTOPLOC));
    return 1;
}

int check_struct__6199_string(const char *str, char **endptr)
{
    static struct__6199 rTemp;
    return string_to_struct__6199(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6199_Utils = {
    struct__6199_to_string,
    check_struct__6199_string,
    string_to_struct__6199,
    is_struct__6199_double_conversion_allowed,
    struct__6199_to_double,
    is_struct__6199_long_convertion_allowed,
    struct__6199_to_long,
    compare_struct__6199,
    get_struct__6199_signature,
    set_struct__6199_default_value,
    sizeof(struct__6199)
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
 ** array__6212 
 ****************************************************************/

struct SimTypeVTable *pSimarray__6212VTable;

int array__6212_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__6212VTable != NULL
        && pSimarray__6212VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__6212VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__6199_to_string, 32, sizeof(struct__6199), pfnStrAppend, pData);
}

int string_to_array__6212(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__6212VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__6212VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__6199_Utils, 32, sizeof(struct__6199), endptr);
    }
    return nRet;
}

int is_array__6212_double_conversion_allowed()
{
    if (pSimarray__6212VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__6212VTable);
    }
    return 0;
}

int is_array__6212_long_convertion_allowed()
{
    if (pSimarray__6212VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__6212VTable);
    }
    return 0;
}

void compare_array__6212(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__6212VTable != NULL
        && pSimarray__6212VTable->m_version >= Scv612
        && pSimarray__6212VTable->m_pfnCompare != NULL) {
        if (pSimarray__6212VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__6212VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__6212VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__6199, 32, sizeof(struct__6199), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__6212_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__6212VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__6212VTable, nRetValue);
    }
    return 0;
}

int array__6212_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__6212VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__6212VTable, nRetValue);
    }
    return 0;
}

int get_array__6212_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__6199_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__6212_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__6199_default_value(&((struct__6199*)pValue)[i]);
    return 1;
}

int check_array__6212_string(const char *str, char **endptr)
{
    static array__6212 rTemp;
    return string_to_array__6212(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__6212_Utils = {
    array__6212_to_string,
    check_array__6212_string,
    string_to_array__6212,
    is_array__6212_double_conversion_allowed,
    array__6212_to_double,
    is_array__6212_long_convertion_allowed,
    array__6212_to_long,
    compare_array__6212,
    get_array__6212_signature,
    set_array__6212_default_value,
    sizeof(array__6212)
};

/****************************************************************
 ** struct__6215 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6215VTable;

static SimFieldUtils struct__6215_fields[] = {
    {"valid", offsetof(struct__6215,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__6215,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__6215,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__6215,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__6215,Q_SCALE), &_Type_kcg_int_Utils},
    {"V_LOA", offsetof(struct__6215,V_LOA), &_Type_kcg_int_Utils},
    {"T_LOA", offsetof(struct__6215,T_LOA), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__6215,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__6215,SECTIONS), &_Type_array__6212_Utils},
    {"L_ENDSECTION", offsetof(struct__6215,L_ENDSECTION), &_Type_kcg_int_Utils},
    {"Q_SECTIONTIMER", offsetof(struct__6215,Q_SECTIONTIMER), &_Type_kcg_int_Utils},
    {"D_SECTIONTIMERSTOPLOC", offsetof(struct__6215,D_SECTIONTIMERSTOPLOC), &_Type_kcg_int_Utils},
    {"Q_ENDTIMER", offsetof(struct__6215,Q_ENDTIMER), &_Type_kcg_int_Utils},
    {"T_ENDTIMER", offsetof(struct__6215,T_ENDTIMER), &_Type_kcg_int_Utils},
    {"D_ENDTIMERSTARTLOC", offsetof(struct__6215,D_ENDTIMERSTARTLOC), &_Type_kcg_int_Utils},
    {"Q_DANGERPOINT", offsetof(struct__6215,Q_DANGERPOINT), &_Type_kcg_int_Utils},
    {"D_DP", offsetof(struct__6215,D_DP), &_Type_kcg_int_Utils},
    {"V_RELEASEDP", offsetof(struct__6215,V_RELEASEDP), &_Type_kcg_int_Utils},
    {"Q_OVERLAP", offsetof(struct__6215,Q_OVERLAP), &_Type_kcg_int_Utils},
    {"D_STARTOL", offsetof(struct__6215,D_STARTOL), &_Type_kcg_int_Utils},
    {"T_OL", offsetof(struct__6215,T_OL), &_Type_kcg_int_Utils},
    {"D_OL", offsetof(struct__6215,D_OL), &_Type_kcg_int_Utils},
    {"V_RELEASEOL", offsetof(struct__6215,V_RELEASEOL), &_Type_kcg_int_Utils},
};

int struct__6215_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6215VTable != NULL
        && pSimstruct__6215VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6215VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6215_fields, 23, pfnStrAppend, pData);
}

int string_to_struct__6215(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6215VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6215VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6215_fields, 23, endptr);
    }
    return nRet;
}

int is_struct__6215_double_conversion_allowed()
{
    if (pSimstruct__6215VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6215VTable);
    }
    return 0;
}

int is_struct__6215_long_convertion_allowed()
{
    if (pSimstruct__6215VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6215VTable);
    }
    return 0;
}

void compare_struct__6215(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6215VTable != NULL
        && pSimstruct__6215VTable->m_version >= Scv612
        && pSimstruct__6215VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6215VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6215VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6215VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6215_fields, 23, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6215_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6215VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6215VTable, nRetValue);
    }
    return 0;
}

int struct__6215_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6215VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6215VTable, nRetValue);
    }
    return 0;
}

int get_struct__6215_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6215_fields, 23, pfnStrAppend, pData);
}

int set_struct__6215_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__6215*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->V_LOA));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->T_LOA));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->N_ITER));
    set_array__6212_default_value(&(((struct__6215*)pValue)->SECTIONS));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->L_ENDSECTION));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->Q_SECTIONTIMER));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->D_SECTIONTIMERSTOPLOC));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->Q_ENDTIMER));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->T_ENDTIMER));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->D_ENDTIMERSTARTLOC));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->Q_DANGERPOINT));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->D_DP));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->V_RELEASEDP));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->Q_OVERLAP));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->D_STARTOL));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->T_OL));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->D_OL));
    set_kcg_int_default_value(&(((struct__6215*)pValue)->V_RELEASEOL));
    return 1;
}

int check_struct__6215_string(const char *str, char **endptr)
{
    static struct__6215 rTemp;
    return string_to_struct__6215(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6215_Utils = {
    struct__6215_to_string,
    check_struct__6215_string,
    string_to_struct__6215,
    is_struct__6215_double_conversion_allowed,
    struct__6215_to_double,
    is_struct__6215_long_convertion_allowed,
    struct__6215_to_long,
    compare_struct__6215,
    get_struct__6215_signature,
    set_struct__6215_default_value,
    sizeof(struct__6215)
};

/****************************************************************
 ** struct__6241 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6241VTable;

static SimFieldUtils struct__6241_fields[] = {
    {"valid", offsetof(struct__6241,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__6241,NID_PACKET), &_Type_kcg_int_Utils},
};

int struct__6241_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6241VTable != NULL
        && pSimstruct__6241VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6241VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6241_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__6241(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6241VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6241VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6241_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__6241_double_conversion_allowed()
{
    if (pSimstruct__6241VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6241VTable);
    }
    return 0;
}

int is_struct__6241_long_convertion_allowed()
{
    if (pSimstruct__6241VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6241VTable);
    }
    return 0;
}

void compare_struct__6241(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6241VTable != NULL
        && pSimstruct__6241VTable->m_version >= Scv612
        && pSimstruct__6241VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6241VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6241VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6241VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6241_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6241_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6241VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6241VTable, nRetValue);
    }
    return 0;
}

int struct__6241_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6241VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6241VTable, nRetValue);
    }
    return 0;
}

int get_struct__6241_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6241_fields, 2, pfnStrAppend, pData);
}

int set_struct__6241_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__6241*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6241*)pValue)->NID_PACKET));
    return 1;
}

int check_struct__6241_string(const char *str, char **endptr)
{
    static struct__6241 rTemp;
    return string_to_struct__6241(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6241_Utils = {
    struct__6241_to_string,
    check_struct__6241_string,
    string_to_struct__6241,
    is_struct__6241_double_conversion_allowed,
    struct__6241_to_double,
    is_struct__6241_long_convertion_allowed,
    struct__6241_to_long,
    compare_struct__6241,
    get_struct__6241_signature,
    set_struct__6241_default_value,
    sizeof(struct__6241)
};

/****************************************************************
 ** struct__6246 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6246VTable;

static SimFieldUtils struct__6246_fields[] = {
    {"valid", offsetof(struct__6246,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__6246,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__6246,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__6246,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__6246,Q_SCALE), &_Type_kcg_int_Utils},
    {"NID_TSR", offsetof(struct__6246,NID_TSR), &_Type_kcg_int_Utils},
    {"D_TSR", offsetof(struct__6246,D_TSR), &_Type_kcg_int_Utils},
    {"L_TSR", offsetof(struct__6246,L_TSR), &_Type_kcg_int_Utils},
    {"Q_FRONT", offsetof(struct__6246,Q_FRONT), &_Type_kcg_int_Utils},
    {"V_TSR", offsetof(struct__6246,V_TSR), &_Type_kcg_int_Utils},
};

int struct__6246_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6246VTable != NULL
        && pSimstruct__6246VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6246VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6246_fields, 10, pfnStrAppend, pData);
}

int string_to_struct__6246(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6246VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6246VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6246_fields, 10, endptr);
    }
    return nRet;
}

int is_struct__6246_double_conversion_allowed()
{
    if (pSimstruct__6246VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6246VTable);
    }
    return 0;
}

int is_struct__6246_long_convertion_allowed()
{
    if (pSimstruct__6246VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6246VTable);
    }
    return 0;
}

void compare_struct__6246(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6246VTable != NULL
        && pSimstruct__6246VTable->m_version >= Scv612
        && pSimstruct__6246VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6246VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6246VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6246VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6246_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6246_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6246VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6246VTable, nRetValue);
    }
    return 0;
}

int struct__6246_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6246VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6246VTable, nRetValue);
    }
    return 0;
}

int get_struct__6246_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6246_fields, 10, pfnStrAppend, pData);
}

int set_struct__6246_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__6246*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6246*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__6246*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__6246*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__6246*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__6246*)pValue)->NID_TSR));
    set_kcg_int_default_value(&(((struct__6246*)pValue)->D_TSR));
    set_kcg_int_default_value(&(((struct__6246*)pValue)->L_TSR));
    set_kcg_int_default_value(&(((struct__6246*)pValue)->Q_FRONT));
    set_kcg_int_default_value(&(((struct__6246*)pValue)->V_TSR));
    return 1;
}

int check_struct__6246_string(const char *str, char **endptr)
{
    static struct__6246 rTemp;
    return string_to_struct__6246(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6246_Utils = {
    struct__6246_to_string,
    check_struct__6246_string,
    string_to_struct__6246,
    is_struct__6246_double_conversion_allowed,
    struct__6246_to_double,
    is_struct__6246_long_convertion_allowed,
    struct__6246_to_long,
    compare_struct__6246,
    get_struct__6246_signature,
    set_struct__6246_default_value,
    sizeof(struct__6246)
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
 ** struct__6262 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6262VTable;

static SimFieldUtils struct__6262_fields[] = {
    {"D_LINK", offsetof(struct__6262,D_LINK), &_Type_kcg_int_Utils},
    {"Q_NEWCOUNTRY", offsetof(struct__6262,Q_NEWCOUNTRY), &_Type_kcg_int_Utils},
    {"NID_C", offsetof(struct__6262,NID_C), &_Type_kcg_int_Utils},
    {"NID_BG", offsetof(struct__6262,NID_BG), &_Type_kcg_int_Utils},
    {"Q_LINKORIENTATION", offsetof(struct__6262,Q_LINKORIENTATION), &_Type_kcg_int_Utils},
    {"Q_LINKREACTION", offsetof(struct__6262,Q_LINKREACTION), &_Type_kcg_int_Utils},
    {"Q_LOCACC", offsetof(struct__6262,Q_LOCACC), &_Type_kcg_int_Utils},
};

int struct__6262_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6262VTable != NULL
        && pSimstruct__6262VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6262VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6262_fields, 7, pfnStrAppend, pData);
}

int string_to_struct__6262(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6262VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6262VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6262_fields, 7, endptr);
    }
    return nRet;
}

int is_struct__6262_double_conversion_allowed()
{
    if (pSimstruct__6262VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6262VTable);
    }
    return 0;
}

int is_struct__6262_long_convertion_allowed()
{
    if (pSimstruct__6262VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6262VTable);
    }
    return 0;
}

void compare_struct__6262(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6262VTable != NULL
        && pSimstruct__6262VTable->m_version >= Scv612
        && pSimstruct__6262VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6262VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6262VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6262VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6262_fields, 7, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6262_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6262VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6262VTable, nRetValue);
    }
    return 0;
}

int struct__6262_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6262VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6262VTable, nRetValue);
    }
    return 0;
}

int get_struct__6262_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6262_fields, 7, pfnStrAppend, pData);
}

int set_struct__6262_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__6262*)pValue)->D_LINK));
    set_kcg_int_default_value(&(((struct__6262*)pValue)->Q_NEWCOUNTRY));
    set_kcg_int_default_value(&(((struct__6262*)pValue)->NID_C));
    set_kcg_int_default_value(&(((struct__6262*)pValue)->NID_BG));
    set_kcg_int_default_value(&(((struct__6262*)pValue)->Q_LINKORIENTATION));
    set_kcg_int_default_value(&(((struct__6262*)pValue)->Q_LINKREACTION));
    set_kcg_int_default_value(&(((struct__6262*)pValue)->Q_LOCACC));
    return 1;
}

int check_struct__6262_string(const char *str, char **endptr)
{
    static struct__6262 rTemp;
    return string_to_struct__6262(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6262_Utils = {
    struct__6262_to_string,
    check_struct__6262_string,
    string_to_struct__6262,
    is_struct__6262_double_conversion_allowed,
    struct__6262_to_double,
    is_struct__6262_long_convertion_allowed,
    struct__6262_to_long,
    compare_struct__6262,
    get_struct__6262_signature,
    set_struct__6262_default_value,
    sizeof(struct__6262)
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
 ** array__6278 
 ****************************************************************/

struct SimTypeVTable *pSimarray__6278VTable;

int array__6278_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__6278VTable != NULL
        && pSimarray__6278VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__6278VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__6262_to_string, 33, sizeof(struct__6262), pfnStrAppend, pData);
}

int string_to_array__6278(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__6278VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__6278VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__6262_Utils, 33, sizeof(struct__6262), endptr);
    }
    return nRet;
}

int is_array__6278_double_conversion_allowed()
{
    if (pSimarray__6278VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__6278VTable);
    }
    return 0;
}

int is_array__6278_long_convertion_allowed()
{
    if (pSimarray__6278VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__6278VTable);
    }
    return 0;
}

void compare_array__6278(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__6278VTable != NULL
        && pSimarray__6278VTable->m_version >= Scv612
        && pSimarray__6278VTable->m_pfnCompare != NULL) {
        if (pSimarray__6278VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__6278VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__6278VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__6262, 33, sizeof(struct__6262), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__6278_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__6278VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__6278VTable, nRetValue);
    }
    return 0;
}

int array__6278_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__6278VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__6278VTable, nRetValue);
    }
    return 0;
}

int get_array__6278_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__6262_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__6278_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__6262_default_value(&((struct__6262*)pValue)[i]);
    return 1;
}

int check_array__6278_string(const char *str, char **endptr)
{
    static array__6278 rTemp;
    return string_to_array__6278(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__6278_Utils = {
    array__6278_to_string,
    check_array__6278_string,
    string_to_array__6278,
    is_array__6278_double_conversion_allowed,
    array__6278_to_double,
    is_array__6278_long_convertion_allowed,
    array__6278_to_long,
    compare_array__6278,
    get_array__6278_signature,
    set_array__6278_default_value,
    sizeof(array__6278)
};

/****************************************************************
 ** array__6281 
 ****************************************************************/

struct SimTypeVTable *pSimarray__6281VTable;

int array__6281_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__6281VTable != NULL
        && pSimarray__6281VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__6281VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__6262_to_string, 32, sizeof(struct__6262), pfnStrAppend, pData);
}

int string_to_array__6281(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__6281VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__6281VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__6262_Utils, 32, sizeof(struct__6262), endptr);
    }
    return nRet;
}

int is_array__6281_double_conversion_allowed()
{
    if (pSimarray__6281VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__6281VTable);
    }
    return 0;
}

int is_array__6281_long_convertion_allowed()
{
    if (pSimarray__6281VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__6281VTable);
    }
    return 0;
}

void compare_array__6281(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__6281VTable != NULL
        && pSimarray__6281VTable->m_version >= Scv612
        && pSimarray__6281VTable->m_pfnCompare != NULL) {
        if (pSimarray__6281VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__6281VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__6281VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__6262, 32, sizeof(struct__6262), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__6281_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__6281VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__6281VTable, nRetValue);
    }
    return 0;
}

int array__6281_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__6281VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__6281VTable, nRetValue);
    }
    return 0;
}

int get_array__6281_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__6262_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__6281_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__6262_default_value(&((struct__6262*)pValue)[i]);
    return 1;
}

int check_array__6281_string(const char *str, char **endptr)
{
    static array__6281 rTemp;
    return string_to_array__6281(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__6281_Utils = {
    array__6281_to_string,
    check_array__6281_string,
    string_to_array__6281,
    is_array__6281_double_conversion_allowed,
    array__6281_to_double,
    is_array__6281_long_convertion_allowed,
    array__6281_to_long,
    compare_array__6281,
    get_array__6281_signature,
    set_array__6281_default_value,
    sizeof(array__6281)
};

/****************************************************************
 ** struct__6284 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6284VTable;

static SimFieldUtils struct__6284_fields[] = {
    {"valid", offsetof(struct__6284,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__6284,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__6284,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__6284,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__6284,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_LINK", offsetof(struct__6284,D_LINK), &_Type_kcg_int_Utils},
    {"Q_NEWCOUNTRY", offsetof(struct__6284,Q_NEWCOUNTRY), &_Type_kcg_int_Utils},
    {"NID_C", offsetof(struct__6284,NID_C), &_Type_kcg_int_Utils},
    {"NID_BG", offsetof(struct__6284,NID_BG), &_Type_kcg_int_Utils},
    {"Q_LINKORIENTATION", offsetof(struct__6284,Q_LINKORIENTATION), &_Type_kcg_int_Utils},
    {"Q_LINKREACTION", offsetof(struct__6284,Q_LINKREACTION), &_Type_kcg_int_Utils},
    {"Q_LOCACC", offsetof(struct__6284,Q_LOCACC), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__6284,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__6284,SECTIONS), &_Type_array__6281_Utils},
};

int struct__6284_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6284VTable != NULL
        && pSimstruct__6284VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6284VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6284_fields, 14, pfnStrAppend, pData);
}

int string_to_struct__6284(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6284VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6284VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6284_fields, 14, endptr);
    }
    return nRet;
}

int is_struct__6284_double_conversion_allowed()
{
    if (pSimstruct__6284VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6284VTable);
    }
    return 0;
}

int is_struct__6284_long_convertion_allowed()
{
    if (pSimstruct__6284VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6284VTable);
    }
    return 0;
}

void compare_struct__6284(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6284VTable != NULL
        && pSimstruct__6284VTable->m_version >= Scv612
        && pSimstruct__6284VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6284VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6284VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6284VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6284_fields, 14, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6284_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6284VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6284VTable, nRetValue);
    }
    return 0;
}

int struct__6284_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6284VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6284VTable, nRetValue);
    }
    return 0;
}

int get_struct__6284_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6284_fields, 14, pfnStrAppend, pData);
}

int set_struct__6284_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__6284*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6284*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__6284*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__6284*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__6284*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__6284*)pValue)->D_LINK));
    set_kcg_int_default_value(&(((struct__6284*)pValue)->Q_NEWCOUNTRY));
    set_kcg_int_default_value(&(((struct__6284*)pValue)->NID_C));
    set_kcg_int_default_value(&(((struct__6284*)pValue)->NID_BG));
    set_kcg_int_default_value(&(((struct__6284*)pValue)->Q_LINKORIENTATION));
    set_kcg_int_default_value(&(((struct__6284*)pValue)->Q_LINKREACTION));
    set_kcg_int_default_value(&(((struct__6284*)pValue)->Q_LOCACC));
    set_kcg_int_default_value(&(((struct__6284*)pValue)->N_ITER));
    set_array__6281_default_value(&(((struct__6284*)pValue)->SECTIONS));
    return 1;
}

int check_struct__6284_string(const char *str, char **endptr)
{
    static struct__6284 rTemp;
    return string_to_struct__6284(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6284_Utils = {
    struct__6284_to_string,
    check_struct__6284_string,
    string_to_struct__6284,
    is_struct__6284_double_conversion_allowed,
    struct__6284_to_double,
    is_struct__6284_long_convertion_allowed,
    struct__6284_to_long,
    compare_struct__6284,
    get_struct__6284_signature,
    set_struct__6284_default_value,
    sizeof(struct__6284)
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
 ** struct__6304 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6304VTable;

static SimFieldUtils struct__6304_fields[] = {
    {"NC_DIFF", offsetof(struct__6304,NC_DIFF), &_Type_kcg_int_Utils},
    {"V_DIFF", offsetof(struct__6304,V_DIFF), &_Type_kcg_int_Utils},
};

int struct__6304_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6304VTable != NULL
        && pSimstruct__6304VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6304VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6304_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__6304(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6304VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6304VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6304_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__6304_double_conversion_allowed()
{
    if (pSimstruct__6304VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6304VTable);
    }
    return 0;
}

int is_struct__6304_long_convertion_allowed()
{
    if (pSimstruct__6304VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6304VTable);
    }
    return 0;
}

void compare_struct__6304(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6304VTable != NULL
        && pSimstruct__6304VTable->m_version >= Scv612
        && pSimstruct__6304VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6304VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6304VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6304VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6304_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6304_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6304VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6304VTable, nRetValue);
    }
    return 0;
}

int struct__6304_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6304VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6304VTable, nRetValue);
    }
    return 0;
}

int get_struct__6304_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6304_fields, 2, pfnStrAppend, pData);
}

int set_struct__6304_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__6304*)pValue)->NC_DIFF));
    set_kcg_int_default_value(&(((struct__6304*)pValue)->V_DIFF));
    return 1;
}

int check_struct__6304_string(const char *str, char **endptr)
{
    static struct__6304 rTemp;
    return string_to_struct__6304(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6304_Utils = {
    struct__6304_to_string,
    check_struct__6304_string,
    string_to_struct__6304,
    is_struct__6304_double_conversion_allowed,
    struct__6304_to_double,
    is_struct__6304_long_convertion_allowed,
    struct__6304_to_long,
    compare_struct__6304,
    get_struct__6304_signature,
    set_struct__6304_default_value,
    sizeof(struct__6304)
};

/****************************************************************
 ** array__6309 
 ****************************************************************/

struct SimTypeVTable *pSimarray__6309VTable;

int array__6309_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__6309VTable != NULL
        && pSimarray__6309VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__6309VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__6304_to_string, 32, sizeof(struct__6304), pfnStrAppend, pData);
}

int string_to_array__6309(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__6309VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__6309VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__6304_Utils, 32, sizeof(struct__6304), endptr);
    }
    return nRet;
}

int is_array__6309_double_conversion_allowed()
{
    if (pSimarray__6309VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__6309VTable);
    }
    return 0;
}

int is_array__6309_long_convertion_allowed()
{
    if (pSimarray__6309VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__6309VTable);
    }
    return 0;
}

void compare_array__6309(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__6309VTable != NULL
        && pSimarray__6309VTable->m_version >= Scv612
        && pSimarray__6309VTable->m_pfnCompare != NULL) {
        if (pSimarray__6309VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__6309VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__6309VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__6304, 32, sizeof(struct__6304), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__6309_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__6309VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__6309VTable, nRetValue);
    }
    return 0;
}

int array__6309_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__6309VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__6309VTable, nRetValue);
    }
    return 0;
}

int get_array__6309_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__6304_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__6309_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__6304_default_value(&((struct__6304*)pValue)[i]);
    return 1;
}

int check_array__6309_string(const char *str, char **endptr)
{
    static array__6309 rTemp;
    return string_to_array__6309(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__6309_Utils = {
    array__6309_to_string,
    check_array__6309_string,
    string_to_array__6309,
    is_array__6309_double_conversion_allowed,
    array__6309_to_double,
    is_array__6309_long_convertion_allowed,
    array__6309_to_long,
    compare_array__6309,
    get_array__6309_signature,
    set_array__6309_default_value,
    sizeof(array__6309)
};

/****************************************************************
 ** struct__6312 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6312VTable;

static SimFieldUtils struct__6312_fields[] = {
    {"D_STATIC", offsetof(struct__6312,D_STATIC), &_Type_kcg_int_Utils},
    {"V_STATIC", offsetof(struct__6312,V_STATIC), &_Type_kcg_int_Utils},
    {"Q_FRONT", offsetof(struct__6312,Q_FRONT), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__6312,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS_q_diff", offsetof(struct__6312,SECTIONS_q_diff), &_Type_array__6309_Utils},
};

int struct__6312_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6312VTable != NULL
        && pSimstruct__6312VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6312VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6312_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__6312(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6312VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6312VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6312_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__6312_double_conversion_allowed()
{
    if (pSimstruct__6312VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6312VTable);
    }
    return 0;
}

int is_struct__6312_long_convertion_allowed()
{
    if (pSimstruct__6312VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6312VTable);
    }
    return 0;
}

void compare_struct__6312(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6312VTable != NULL
        && pSimstruct__6312VTable->m_version >= Scv612
        && pSimstruct__6312VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6312VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6312VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6312VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6312_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6312_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6312VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6312VTable, nRetValue);
    }
    return 0;
}

int struct__6312_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6312VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6312VTable, nRetValue);
    }
    return 0;
}

int get_struct__6312_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6312_fields, 5, pfnStrAppend, pData);
}

int set_struct__6312_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__6312*)pValue)->D_STATIC));
    set_kcg_int_default_value(&(((struct__6312*)pValue)->V_STATIC));
    set_kcg_int_default_value(&(((struct__6312*)pValue)->Q_FRONT));
    set_kcg_int_default_value(&(((struct__6312*)pValue)->N_ITER));
    set_array__6309_default_value(&(((struct__6312*)pValue)->SECTIONS_q_diff));
    return 1;
}

int check_struct__6312_string(const char *str, char **endptr)
{
    static struct__6312 rTemp;
    return string_to_struct__6312(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6312_Utils = {
    struct__6312_to_string,
    check_struct__6312_string,
    string_to_struct__6312,
    is_struct__6312_double_conversion_allowed,
    struct__6312_to_double,
    is_struct__6312_long_convertion_allowed,
    struct__6312_to_long,
    compare_struct__6312,
    get_struct__6312_signature,
    set_struct__6312_default_value,
    sizeof(struct__6312)
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
 ** array__6326 
 ****************************************************************/

struct SimTypeVTable *pSimarray__6326VTable;

int array__6326_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__6326VTable != NULL
        && pSimarray__6326VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__6326VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__6312_to_string, 33, sizeof(struct__6312), pfnStrAppend, pData);
}

int string_to_array__6326(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__6326VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__6326VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__6312_Utils, 33, sizeof(struct__6312), endptr);
    }
    return nRet;
}

int is_array__6326_double_conversion_allowed()
{
    if (pSimarray__6326VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__6326VTable);
    }
    return 0;
}

int is_array__6326_long_convertion_allowed()
{
    if (pSimarray__6326VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__6326VTable);
    }
    return 0;
}

void compare_array__6326(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__6326VTable != NULL
        && pSimarray__6326VTable->m_version >= Scv612
        && pSimarray__6326VTable->m_pfnCompare != NULL) {
        if (pSimarray__6326VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__6326VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__6326VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__6312, 33, sizeof(struct__6312), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__6326_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__6326VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__6326VTable, nRetValue);
    }
    return 0;
}

int array__6326_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__6326VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__6326VTable, nRetValue);
    }
    return 0;
}

int get_array__6326_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__6312_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__6326_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__6312_default_value(&((struct__6312*)pValue)[i]);
    return 1;
}

int check_array__6326_string(const char *str, char **endptr)
{
    static array__6326 rTemp;
    return string_to_array__6326(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__6326_Utils = {
    array__6326_to_string,
    check_array__6326_string,
    string_to_array__6326,
    is_array__6326_double_conversion_allowed,
    array__6326_to_double,
    is_array__6326_long_convertion_allowed,
    array__6326_to_long,
    compare_array__6326,
    get_array__6326_signature,
    set_array__6326_default_value,
    sizeof(array__6326)
};

/****************************************************************
 ** array__6329 
 ****************************************************************/

struct SimTypeVTable *pSimarray__6329VTable;

int array__6329_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__6329VTable != NULL
        && pSimarray__6329VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__6329VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__6312_to_string, 32, sizeof(struct__6312), pfnStrAppend, pData);
}

int string_to_array__6329(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__6329VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__6329VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__6312_Utils, 32, sizeof(struct__6312), endptr);
    }
    return nRet;
}

int is_array__6329_double_conversion_allowed()
{
    if (pSimarray__6329VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__6329VTable);
    }
    return 0;
}

int is_array__6329_long_convertion_allowed()
{
    if (pSimarray__6329VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__6329VTable);
    }
    return 0;
}

void compare_array__6329(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__6329VTable != NULL
        && pSimarray__6329VTable->m_version >= Scv612
        && pSimarray__6329VTable->m_pfnCompare != NULL) {
        if (pSimarray__6329VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__6329VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__6329VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__6312, 32, sizeof(struct__6312), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__6329_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__6329VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__6329VTable, nRetValue);
    }
    return 0;
}

int array__6329_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__6329VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__6329VTable, nRetValue);
    }
    return 0;
}

int get_array__6329_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__6312_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__6329_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__6312_default_value(&((struct__6312*)pValue)[i]);
    return 1;
}

int check_array__6329_string(const char *str, char **endptr)
{
    static array__6329 rTemp;
    return string_to_array__6329(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__6329_Utils = {
    array__6329_to_string,
    check_array__6329_string,
    string_to_array__6329,
    is_array__6329_double_conversion_allowed,
    array__6329_to_double,
    is_array__6329_long_convertion_allowed,
    array__6329_to_long,
    compare_array__6329,
    get_array__6329_signature,
    set_array__6329_default_value,
    sizeof(array__6329)
};

/****************************************************************
 ** struct__6332 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6332VTable;

static SimFieldUtils struct__6332_fields[] = {
    {"valid", offsetof(struct__6332,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__6332,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__6332,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__6332,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__6332,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_STATIC", offsetof(struct__6332,D_STATIC), &_Type_kcg_int_Utils},
    {"V_STATIC", offsetof(struct__6332,V_STATIC), &_Type_kcg_int_Utils},
    {"Q_FRONT", offsetof(struct__6332,Q_FRONT), &_Type_kcg_int_Utils},
    {"N_ITER_n", offsetof(struct__6332,N_ITER_n), &_Type_kcg_int_Utils},
    {"SECTIONS_q_diff", offsetof(struct__6332,SECTIONS_q_diff), &_Type_array__6309_Utils},
    {"N_ITER_k", offsetof(struct__6332,N_ITER_k), &_Type_kcg_int_Utils},
    {"SECTIONS_SSP", offsetof(struct__6332,SECTIONS_SSP), &_Type_array__6329_Utils},
};

int struct__6332_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6332VTable != NULL
        && pSimstruct__6332VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6332VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6332_fields, 12, pfnStrAppend, pData);
}

int string_to_struct__6332(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6332VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6332VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6332_fields, 12, endptr);
    }
    return nRet;
}

int is_struct__6332_double_conversion_allowed()
{
    if (pSimstruct__6332VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6332VTable);
    }
    return 0;
}

int is_struct__6332_long_convertion_allowed()
{
    if (pSimstruct__6332VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6332VTable);
    }
    return 0;
}

void compare_struct__6332(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6332VTable != NULL
        && pSimstruct__6332VTable->m_version >= Scv612
        && pSimstruct__6332VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6332VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6332VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6332VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6332_fields, 12, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6332_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6332VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6332VTable, nRetValue);
    }
    return 0;
}

int struct__6332_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6332VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6332VTable, nRetValue);
    }
    return 0;
}

int get_struct__6332_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6332_fields, 12, pfnStrAppend, pData);
}

int set_struct__6332_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__6332*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6332*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__6332*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__6332*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__6332*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__6332*)pValue)->D_STATIC));
    set_kcg_int_default_value(&(((struct__6332*)pValue)->V_STATIC));
    set_kcg_int_default_value(&(((struct__6332*)pValue)->Q_FRONT));
    set_kcg_int_default_value(&(((struct__6332*)pValue)->N_ITER_n));
    set_array__6309_default_value(&(((struct__6332*)pValue)->SECTIONS_q_diff));
    set_kcg_int_default_value(&(((struct__6332*)pValue)->N_ITER_k));
    set_array__6329_default_value(&(((struct__6332*)pValue)->SECTIONS_SSP));
    return 1;
}

int check_struct__6332_string(const char *str, char **endptr)
{
    static struct__6332 rTemp;
    return string_to_struct__6332(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6332_Utils = {
    struct__6332_to_string,
    check_struct__6332_string,
    string_to_struct__6332,
    is_struct__6332_double_conversion_allowed,
    struct__6332_to_double,
    is_struct__6332_long_convertion_allowed,
    struct__6332_to_long,
    compare_struct__6332,
    get_struct__6332_signature,
    set_struct__6332_default_value,
    sizeof(struct__6332)
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
 ** struct__6350 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6350VTable;

static SimFieldUtils struct__6350_fields[] = {
    {"D_GRADIENT", offsetof(struct__6350,D_GRADIENT), &_Type_kcg_int_Utils},
    {"Q_GDIR", offsetof(struct__6350,Q_GDIR), &_Type_kcg_int_Utils},
    {"G_A", offsetof(struct__6350,G_A), &_Type_kcg_int_Utils},
};

int struct__6350_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6350VTable != NULL
        && pSimstruct__6350VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6350VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6350_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__6350(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6350VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6350VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6350_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__6350_double_conversion_allowed()
{
    if (pSimstruct__6350VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6350VTable);
    }
    return 0;
}

int is_struct__6350_long_convertion_allowed()
{
    if (pSimstruct__6350VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6350VTable);
    }
    return 0;
}

void compare_struct__6350(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6350VTable != NULL
        && pSimstruct__6350VTable->m_version >= Scv612
        && pSimstruct__6350VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6350VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6350VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6350VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6350_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6350_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6350VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6350VTable, nRetValue);
    }
    return 0;
}

int struct__6350_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6350VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6350VTable, nRetValue);
    }
    return 0;
}

int get_struct__6350_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6350_fields, 3, pfnStrAppend, pData);
}

int set_struct__6350_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__6350*)pValue)->D_GRADIENT));
    set_kcg_int_default_value(&(((struct__6350*)pValue)->Q_GDIR));
    set_kcg_int_default_value(&(((struct__6350*)pValue)->G_A));
    return 1;
}

int check_struct__6350_string(const char *str, char **endptr)
{
    static struct__6350 rTemp;
    return string_to_struct__6350(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6350_Utils = {
    struct__6350_to_string,
    check_struct__6350_string,
    string_to_struct__6350,
    is_struct__6350_double_conversion_allowed,
    struct__6350_to_double,
    is_struct__6350_long_convertion_allowed,
    struct__6350_to_long,
    compare_struct__6350,
    get_struct__6350_signature,
    set_struct__6350_default_value,
    sizeof(struct__6350)
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
 ** array__6362 
 ****************************************************************/

struct SimTypeVTable *pSimarray__6362VTable;

int array__6362_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__6362VTable != NULL
        && pSimarray__6362VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__6362VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__6350_to_string, 33, sizeof(struct__6350), pfnStrAppend, pData);
}

int string_to_array__6362(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__6362VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__6362VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__6350_Utils, 33, sizeof(struct__6350), endptr);
    }
    return nRet;
}

int is_array__6362_double_conversion_allowed()
{
    if (pSimarray__6362VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__6362VTable);
    }
    return 0;
}

int is_array__6362_long_convertion_allowed()
{
    if (pSimarray__6362VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__6362VTable);
    }
    return 0;
}

void compare_array__6362(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__6362VTable != NULL
        && pSimarray__6362VTable->m_version >= Scv612
        && pSimarray__6362VTable->m_pfnCompare != NULL) {
        if (pSimarray__6362VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__6362VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__6362VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__6350, 33, sizeof(struct__6350), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__6362_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__6362VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__6362VTable, nRetValue);
    }
    return 0;
}

int array__6362_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__6362VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__6362VTable, nRetValue);
    }
    return 0;
}

int get_array__6362_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__6350_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__6362_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__6350_default_value(&((struct__6350*)pValue)[i]);
    return 1;
}

int check_array__6362_string(const char *str, char **endptr)
{
    static array__6362 rTemp;
    return string_to_array__6362(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__6362_Utils = {
    array__6362_to_string,
    check_array__6362_string,
    string_to_array__6362,
    is_array__6362_double_conversion_allowed,
    array__6362_to_double,
    is_array__6362_long_convertion_allowed,
    array__6362_to_long,
    compare_array__6362,
    get_array__6362_signature,
    set_array__6362_default_value,
    sizeof(array__6362)
};

/****************************************************************
 ** array__6365 
 ****************************************************************/

struct SimTypeVTable *pSimarray__6365VTable;

int array__6365_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__6365VTable != NULL
        && pSimarray__6365VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__6365VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__6350_to_string, 32, sizeof(struct__6350), pfnStrAppend, pData);
}

int string_to_array__6365(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__6365VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__6365VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__6350_Utils, 32, sizeof(struct__6350), endptr);
    }
    return nRet;
}

int is_array__6365_double_conversion_allowed()
{
    if (pSimarray__6365VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__6365VTable);
    }
    return 0;
}

int is_array__6365_long_convertion_allowed()
{
    if (pSimarray__6365VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__6365VTable);
    }
    return 0;
}

void compare_array__6365(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__6365VTable != NULL
        && pSimarray__6365VTable->m_version >= Scv612
        && pSimarray__6365VTable->m_pfnCompare != NULL) {
        if (pSimarray__6365VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__6365VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__6365VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__6350, 32, sizeof(struct__6350), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__6365_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__6365VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__6365VTable, nRetValue);
    }
    return 0;
}

int array__6365_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__6365VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__6365VTable, nRetValue);
    }
    return 0;
}

int get_array__6365_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__6350_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__6365_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__6350_default_value(&((struct__6350*)pValue)[i]);
    return 1;
}

int check_array__6365_string(const char *str, char **endptr)
{
    static array__6365 rTemp;
    return string_to_array__6365(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__6365_Utils = {
    array__6365_to_string,
    check_array__6365_string,
    string_to_array__6365,
    is_array__6365_double_conversion_allowed,
    array__6365_to_double,
    is_array__6365_long_convertion_allowed,
    array__6365_to_long,
    compare_array__6365,
    get_array__6365_signature,
    set_array__6365_default_value,
    sizeof(array__6365)
};

/****************************************************************
 ** struct__6368 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6368VTable;

static SimFieldUtils struct__6368_fields[] = {
    {"valid", offsetof(struct__6368,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__6368,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__6368,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__6368,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__6368,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_GRADIENT", offsetof(struct__6368,D_GRADIENT), &_Type_kcg_int_Utils},
    {"Q_GDIR", offsetof(struct__6368,Q_GDIR), &_Type_kcg_int_Utils},
    {"G_A", offsetof(struct__6368,G_A), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__6368,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__6368,SECTIONS), &_Type_array__6365_Utils},
};

int struct__6368_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6368VTable != NULL
        && pSimstruct__6368VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6368VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6368_fields, 10, pfnStrAppend, pData);
}

int string_to_struct__6368(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6368VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6368VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6368_fields, 10, endptr);
    }
    return nRet;
}

int is_struct__6368_double_conversion_allowed()
{
    if (pSimstruct__6368VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6368VTable);
    }
    return 0;
}

int is_struct__6368_long_convertion_allowed()
{
    if (pSimstruct__6368VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6368VTable);
    }
    return 0;
}

void compare_struct__6368(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6368VTable != NULL
        && pSimstruct__6368VTable->m_version >= Scv612
        && pSimstruct__6368VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6368VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6368VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6368VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6368_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6368_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6368VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6368VTable, nRetValue);
    }
    return 0;
}

int struct__6368_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6368VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6368VTable, nRetValue);
    }
    return 0;
}

int get_struct__6368_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6368_fields, 10, pfnStrAppend, pData);
}

int set_struct__6368_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__6368*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6368*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__6368*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__6368*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__6368*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__6368*)pValue)->D_GRADIENT));
    set_kcg_int_default_value(&(((struct__6368*)pValue)->Q_GDIR));
    set_kcg_int_default_value(&(((struct__6368*)pValue)->G_A));
    set_kcg_int_default_value(&(((struct__6368*)pValue)->N_ITER));
    set_array__6365_default_value(&(((struct__6368*)pValue)->SECTIONS));
    return 1;
}

int check_struct__6368_string(const char *str, char **endptr)
{
    static struct__6368 rTemp;
    return string_to_struct__6368(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6368_Utils = {
    struct__6368_to_string,
    check_struct__6368_string,
    string_to_struct__6368,
    is_struct__6368_double_conversion_allowed,
    struct__6368_to_double,
    is_struct__6368_long_convertion_allowed,
    struct__6368_to_long,
    compare_struct__6368,
    get_struct__6368_signature,
    set_struct__6368_default_value,
    sizeof(struct__6368)
};

/****************************************************************
 ** struct__6381 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6381VTable;

static SimFieldUtils struct__6381_fields[] = {
    {"M_LEVELTR", offsetof(struct__6381,M_LEVELTR), &_Type_kcg_int_Utils},
    {"NID_NTC", offsetof(struct__6381,NID_NTC), &_Type_kcg_int_Utils},
    {"L_ACKLEVELTR", offsetof(struct__6381,L_ACKLEVELTR), &_Type_kcg_int_Utils},
};

int struct__6381_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6381VTable != NULL
        && pSimstruct__6381VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6381VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6381_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__6381(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6381VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6381VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6381_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__6381_double_conversion_allowed()
{
    if (pSimstruct__6381VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6381VTable);
    }
    return 0;
}

int is_struct__6381_long_convertion_allowed()
{
    if (pSimstruct__6381VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6381VTable);
    }
    return 0;
}

void compare_struct__6381(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6381VTable != NULL
        && pSimstruct__6381VTable->m_version >= Scv612
        && pSimstruct__6381VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6381VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6381VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6381VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6381_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6381_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6381VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6381VTable, nRetValue);
    }
    return 0;
}

int struct__6381_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6381VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6381VTable, nRetValue);
    }
    return 0;
}

int get_struct__6381_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6381_fields, 3, pfnStrAppend, pData);
}

int set_struct__6381_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__6381*)pValue)->M_LEVELTR));
    set_kcg_int_default_value(&(((struct__6381*)pValue)->NID_NTC));
    set_kcg_int_default_value(&(((struct__6381*)pValue)->L_ACKLEVELTR));
    return 1;
}

int check_struct__6381_string(const char *str, char **endptr)
{
    static struct__6381 rTemp;
    return string_to_struct__6381(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6381_Utils = {
    struct__6381_to_string,
    check_struct__6381_string,
    string_to_struct__6381,
    is_struct__6381_double_conversion_allowed,
    struct__6381_to_double,
    is_struct__6381_long_convertion_allowed,
    struct__6381_to_long,
    compare_struct__6381,
    get_struct__6381_signature,
    set_struct__6381_default_value,
    sizeof(struct__6381)
};

/****************************************************************
 ** array__6387 
 ****************************************************************/

struct SimTypeVTable *pSimarray__6387VTable;

int array__6387_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__6387VTable != NULL
        && pSimarray__6387VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__6387VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__6381_to_string, 33, sizeof(struct__6381), pfnStrAppend, pData);
}

int string_to_array__6387(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__6387VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__6387VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__6381_Utils, 33, sizeof(struct__6381), endptr);
    }
    return nRet;
}

int is_array__6387_double_conversion_allowed()
{
    if (pSimarray__6387VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__6387VTable);
    }
    return 0;
}

int is_array__6387_long_convertion_allowed()
{
    if (pSimarray__6387VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__6387VTable);
    }
    return 0;
}

void compare_array__6387(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__6387VTable != NULL
        && pSimarray__6387VTable->m_version >= Scv612
        && pSimarray__6387VTable->m_pfnCompare != NULL) {
        if (pSimarray__6387VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__6387VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__6387VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__6381, 33, sizeof(struct__6381), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__6387_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__6387VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__6387VTable, nRetValue);
    }
    return 0;
}

int array__6387_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__6387VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__6387VTable, nRetValue);
    }
    return 0;
}

int get_array__6387_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__6381_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__6387_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__6381_default_value(&((struct__6381*)pValue)[i]);
    return 1;
}

int check_array__6387_string(const char *str, char **endptr)
{
    static array__6387 rTemp;
    return string_to_array__6387(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__6387_Utils = {
    array__6387_to_string,
    check_array__6387_string,
    string_to_array__6387,
    is_array__6387_double_conversion_allowed,
    array__6387_to_double,
    is_array__6387_long_convertion_allowed,
    array__6387_to_long,
    compare_array__6387,
    get_array__6387_signature,
    set_array__6387_default_value,
    sizeof(array__6387)
};

/****************************************************************
 ** array__6390 
 ****************************************************************/

struct SimTypeVTable *pSimarray__6390VTable;

int array__6390_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__6390VTable != NULL
        && pSimarray__6390VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__6390VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__6381_to_string, 32, sizeof(struct__6381), pfnStrAppend, pData);
}

int string_to_array__6390(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__6390VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__6390VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__6381_Utils, 32, sizeof(struct__6381), endptr);
    }
    return nRet;
}

int is_array__6390_double_conversion_allowed()
{
    if (pSimarray__6390VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__6390VTable);
    }
    return 0;
}

int is_array__6390_long_convertion_allowed()
{
    if (pSimarray__6390VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__6390VTable);
    }
    return 0;
}

void compare_array__6390(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__6390VTable != NULL
        && pSimarray__6390VTable->m_version >= Scv612
        && pSimarray__6390VTable->m_pfnCompare != NULL) {
        if (pSimarray__6390VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__6390VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__6390VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__6381, 32, sizeof(struct__6381), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__6390_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__6390VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__6390VTable, nRetValue);
    }
    return 0;
}

int array__6390_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__6390VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__6390VTable, nRetValue);
    }
    return 0;
}

int get_array__6390_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__6381_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__6390_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__6381_default_value(&((struct__6381*)pValue)[i]);
    return 1;
}

int check_array__6390_string(const char *str, char **endptr)
{
    static array__6390 rTemp;
    return string_to_array__6390(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__6390_Utils = {
    array__6390_to_string,
    check_array__6390_string,
    string_to_array__6390,
    is_array__6390_double_conversion_allowed,
    array__6390_to_double,
    is_array__6390_long_convertion_allowed,
    array__6390_to_long,
    compare_array__6390,
    get_array__6390_signature,
    set_array__6390_default_value,
    sizeof(array__6390)
};

/****************************************************************
 ** struct__6393 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6393VTable;

static SimFieldUtils struct__6393_fields[] = {
    {"valid", offsetof(struct__6393,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__6393,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__6393,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__6393,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__6393,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_LEVELTR", offsetof(struct__6393,D_LEVELTR), &_Type_kcg_int_Utils},
    {"M_LEVELTR", offsetof(struct__6393,M_LEVELTR), &_Type_kcg_int_Utils},
    {"NID_NTC", offsetof(struct__6393,NID_NTC), &_Type_kcg_int_Utils},
    {"L_ACKLEVELTR", offsetof(struct__6393,L_ACKLEVELTR), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__6393,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__6393,SECTIONS), &_Type_array__6390_Utils},
};

int struct__6393_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6393VTable != NULL
        && pSimstruct__6393VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6393VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6393_fields, 11, pfnStrAppend, pData);
}

int string_to_struct__6393(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6393VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6393VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6393_fields, 11, endptr);
    }
    return nRet;
}

int is_struct__6393_double_conversion_allowed()
{
    if (pSimstruct__6393VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6393VTable);
    }
    return 0;
}

int is_struct__6393_long_convertion_allowed()
{
    if (pSimstruct__6393VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6393VTable);
    }
    return 0;
}

void compare_struct__6393(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6393VTable != NULL
        && pSimstruct__6393VTable->m_version >= Scv612
        && pSimstruct__6393VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6393VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6393VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6393VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6393_fields, 11, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6393_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6393VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6393VTable, nRetValue);
    }
    return 0;
}

int struct__6393_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6393VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6393VTable, nRetValue);
    }
    return 0;
}

int get_struct__6393_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6393_fields, 11, pfnStrAppend, pData);
}

int set_struct__6393_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__6393*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6393*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__6393*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__6393*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__6393*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__6393*)pValue)->D_LEVELTR));
    set_kcg_int_default_value(&(((struct__6393*)pValue)->M_LEVELTR));
    set_kcg_int_default_value(&(((struct__6393*)pValue)->NID_NTC));
    set_kcg_int_default_value(&(((struct__6393*)pValue)->L_ACKLEVELTR));
    set_kcg_int_default_value(&(((struct__6393*)pValue)->N_ITER));
    set_array__6390_default_value(&(((struct__6393*)pValue)->SECTIONS));
    return 1;
}

int check_struct__6393_string(const char *str, char **endptr)
{
    static struct__6393 rTemp;
    return string_to_struct__6393(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6393_Utils = {
    struct__6393_to_string,
    check_struct__6393_string,
    string_to_struct__6393,
    is_struct__6393_double_conversion_allowed,
    struct__6393_to_double,
    is_struct__6393_long_convertion_allowed,
    struct__6393_to_long,
    compare_struct__6393,
    get_struct__6393_signature,
    set_struct__6393_default_value,
    sizeof(struct__6393)
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
 ** struct__6410 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__6410VTable;

static SimFieldUtils struct__6410_fields[] = {
    {"valid", offsetof(struct__6410,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__6410,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__6410,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__6410,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__6410,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_VALIDNV", offsetof(struct__6410,D_VALIDNV), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__6410,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__6410,SECTIONS), &_Type_array_int_32_Utils},
    {"V_NVSHUNT", offsetof(struct__6410,V_NVSHUNT), &_Type_kcg_int_Utils},
    {"V_NVSTFF", offsetof(struct__6410,V_NVSTFF), &_Type_kcg_int_Utils},
    {"V_NVONSIGHT", offsetof(struct__6410,V_NVONSIGHT), &_Type_kcg_int_Utils},
    {"V_NVUNFIT", offsetof(struct__6410,V_NVUNFIT), &_Type_kcg_int_Utils},
    {"V_NVREL", offsetof(struct__6410,V_NVREL), &_Type_kcg_int_Utils},
    {"D_NVROLL", offsetof(struct__6410,D_NVROLL), &_Type_kcg_int_Utils},
    {"Q_NVSRBKTRG", offsetof(struct__6410,Q_NVSRBKTRG), &_Type_kcg_int_Utils},
    {"Q_NVEMRRLS", offsetof(struct__6410,Q_NVEMRRLS), &_Type_kcg_int_Utils},
    {"V_NVALLOWOVTRP", offsetof(struct__6410,V_NVALLOWOVTRP), &_Type_kcg_int_Utils},
    {"V_NVSUPOVTRP", offsetof(struct__6410,V_NVSUPOVTRP), &_Type_kcg_int_Utils},
    {"D_NVOVTRP", offsetof(struct__6410,D_NVOVTRP), &_Type_kcg_int_Utils},
    {"T_NVOVTRP", offsetof(struct__6410,T_NVOVTRP), &_Type_kcg_int_Utils},
    {"D_NVPOTRP", offsetof(struct__6410,D_NVPOTRP), &_Type_kcg_int_Utils},
    {"M_NVCONTACT", offsetof(struct__6410,M_NVCONTACT), &_Type_kcg_int_Utils},
    {"T_NVCONTACT", offsetof(struct__6410,T_NVCONTACT), &_Type_kcg_int_Utils},
    {"M_NVDERUN", offsetof(struct__6410,M_NVDERUN), &_Type_kcg_int_Utils},
    {"D_NVSTFF", offsetof(struct__6410,D_NVSTFF), &_Type_kcg_int_Utils},
    {"Q_NVDRIVER_ADHES", offsetof(struct__6410,Q_NVDRIVER_ADHES), &_Type_kcg_int_Utils},
};

int struct__6410_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__6410VTable != NULL
        && pSimstruct__6410VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__6410VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__6410_fields, 26, pfnStrAppend, pData);
}

int string_to_struct__6410(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__6410VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__6410VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__6410_fields, 26, endptr);
    }
    return nRet;
}

int is_struct__6410_double_conversion_allowed()
{
    if (pSimstruct__6410VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__6410VTable);
    }
    return 0;
}

int is_struct__6410_long_convertion_allowed()
{
    if (pSimstruct__6410VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__6410VTable);
    }
    return 0;
}

void compare_struct__6410(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__6410VTable != NULL
        && pSimstruct__6410VTable->m_version >= Scv612
        && pSimstruct__6410VTable->m_pfnCompare != NULL) {
        if (pSimstruct__6410VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__6410VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__6410VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__6410_fields, 26, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__6410_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__6410VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__6410VTable, nRetValue);
    }
    return 0;
}

int struct__6410_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__6410VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__6410VTable, nRetValue);
    }
    return 0;
}

int get_struct__6410_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__6410_fields, 26, pfnStrAppend, pData);
}

int set_struct__6410_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__6410*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->D_VALIDNV));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->N_ITER));
    set_array_int_32_default_value(&(((struct__6410*)pValue)->SECTIONS));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->V_NVSHUNT));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->V_NVSTFF));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->V_NVONSIGHT));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->V_NVUNFIT));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->V_NVREL));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->D_NVROLL));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->Q_NVSRBKTRG));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->Q_NVEMRRLS));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->V_NVALLOWOVTRP));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->V_NVSUPOVTRP));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->D_NVOVTRP));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->T_NVOVTRP));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->D_NVPOTRP));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->M_NVCONTACT));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->T_NVCONTACT));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->M_NVDERUN));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->D_NVSTFF));
    set_kcg_int_default_value(&(((struct__6410*)pValue)->Q_NVDRIVER_ADHES));
    return 1;
}

int check_struct__6410_string(const char *str, char **endptr)
{
    static struct__6410 rTemp;
    return string_to_struct__6410(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__6410_Utils = {
    struct__6410_to_string,
    check_struct__6410_string,
    string_to_struct__6410,
    is_struct__6410_double_conversion_allowed,
    struct__6410_to_double,
    is_struct__6410_long_convertion_allowed,
    struct__6410_to_long,
    compare_struct__6410,
    get_struct__6410_signature,
    set_struct__6410_default_value,
    sizeof(struct__6410)
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
 ** array__6457 
 ****************************************************************/

struct SimTypeVTable *pSimarray__6457VTable;

int array__6457_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__6457VTable != NULL
        && pSimarray__6457VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__6457VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__6350_to_string, 1, sizeof(struct__6350), pfnStrAppend, pData);
}

int string_to_array__6457(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__6457VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__6457VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__6350_Utils, 1, sizeof(struct__6350), endptr);
    }
    return nRet;
}

int is_array__6457_double_conversion_allowed()
{
    if (pSimarray__6457VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__6457VTable);
    }
    return 0;
}

int is_array__6457_long_convertion_allowed()
{
    if (pSimarray__6457VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__6457VTable);
    }
    return 0;
}

void compare_array__6457(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__6457VTable != NULL
        && pSimarray__6457VTable->m_version >= Scv612
        && pSimarray__6457VTable->m_pfnCompare != NULL) {
        if (pSimarray__6457VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__6457VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__6457VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__6350, 1, sizeof(struct__6350), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__6457_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__6457VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__6457VTable, nRetValue);
    }
    return 0;
}

int array__6457_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__6457VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__6457VTable, nRetValue);
    }
    return 0;
}

int get_array__6457_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__6350_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__6457_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__6350_default_value(&((struct__6350*)pValue)[i]);
    return 1;
}

int check_array__6457_string(const char *str, char **endptr)
{
    static array__6457 rTemp;
    return string_to_array__6457(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__6457_Utils = {
    array__6457_to_string,
    check_array__6457_string,
    string_to_array__6457,
    is_array__6457_double_conversion_allowed,
    array__6457_to_double,
    is_array__6457_long_convertion_allowed,
    array__6457_to_long,
    compare_array__6457,
    get_array__6457_signature,
    set_array__6457_default_value,
    sizeof(array__6457)
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
 ** array__6466 
 ****************************************************************/

struct SimTypeVTable *pSimarray__6466VTable;

int array__6466_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__6466VTable != NULL
        && pSimarray__6466VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__6466VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__6312_to_string, 1, sizeof(struct__6312), pfnStrAppend, pData);
}

int string_to_array__6466(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__6466VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__6466VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__6312_Utils, 1, sizeof(struct__6312), endptr);
    }
    return nRet;
}

int is_array__6466_double_conversion_allowed()
{
    if (pSimarray__6466VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__6466VTable);
    }
    return 0;
}

int is_array__6466_long_convertion_allowed()
{
    if (pSimarray__6466VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__6466VTable);
    }
    return 0;
}

void compare_array__6466(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__6466VTable != NULL
        && pSimarray__6466VTable->m_version >= Scv612
        && pSimarray__6466VTable->m_pfnCompare != NULL) {
        if (pSimarray__6466VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__6466VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__6466VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__6312, 1, sizeof(struct__6312), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__6466_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__6466VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__6466VTable, nRetValue);
    }
    return 0;
}

int array__6466_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__6466VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__6466VTable, nRetValue);
    }
    return 0;
}

int get_array__6466_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__6312_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__6466_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__6312_default_value(&((struct__6312*)pValue)[i]);
    return 1;
}

int check_array__6466_string(const char *str, char **endptr)
{
    static array__6466 rTemp;
    return string_to_array__6466(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__6466_Utils = {
    array__6466_to_string,
    check_array__6466_string,
    string_to_array__6466,
    is_array__6466_double_conversion_allowed,
    array__6466_to_double,
    is_array__6466_long_convertion_allowed,
    array__6466_to_long,
    compare_array__6466,
    get_array__6466_signature,
    set_array__6466_default_value,
    sizeof(array__6466)
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
 ** array__6502 
 ****************************************************************/

struct SimTypeVTable *pSimarray__6502VTable;

int array__6502_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__6502VTable != NULL
        && pSimarray__6502VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__6502VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__6262_to_string, 1, sizeof(struct__6262), pfnStrAppend, pData);
}

int string_to_array__6502(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__6502VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__6502VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__6262_Utils, 1, sizeof(struct__6262), endptr);
    }
    return nRet;
}

int is_array__6502_double_conversion_allowed()
{
    if (pSimarray__6502VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__6502VTable);
    }
    return 0;
}

int is_array__6502_long_convertion_allowed()
{
    if (pSimarray__6502VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__6502VTable);
    }
    return 0;
}

void compare_array__6502(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__6502VTable != NULL
        && pSimarray__6502VTable->m_version >= Scv612
        && pSimarray__6502VTable->m_pfnCompare != NULL) {
        if (pSimarray__6502VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__6502VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__6502VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__6262, 1, sizeof(struct__6262), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__6502_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__6502VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__6502VTable, nRetValue);
    }
    return 0;
}

int array__6502_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__6502VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__6502VTable, nRetValue);
    }
    return 0;
}

int get_array__6502_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__6262_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__6502_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__6262_default_value(&((struct__6262*)pValue)[i]);
    return 1;
}

int check_array__6502_string(const char *str, char **endptr)
{
    static array__6502 rTemp;
    return string_to_array__6502(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__6502_Utils = {
    array__6502_to_string,
    check_array__6502_string,
    string_to_array__6502,
    is_array__6502_double_conversion_allowed,
    array__6502_to_double,
    is_array__6502_long_convertion_allowed,
    array__6502_to_long,
    compare_array__6502,
    get_array__6502_signature,
    set_array__6502_default_value,
    sizeof(array__6502)
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
 ** array__6514 
 ****************************************************************/

struct SimTypeVTable *pSimarray__6514VTable;

int array__6514_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__6514VTable != NULL
        && pSimarray__6514VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__6514VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__6381_to_string, 1, sizeof(struct__6381), pfnStrAppend, pData);
}

int string_to_array__6514(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__6514VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__6514VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__6381_Utils, 1, sizeof(struct__6381), endptr);
    }
    return nRet;
}

int is_array__6514_double_conversion_allowed()
{
    if (pSimarray__6514VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__6514VTable);
    }
    return 0;
}

int is_array__6514_long_convertion_allowed()
{
    if (pSimarray__6514VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__6514VTable);
    }
    return 0;
}

void compare_array__6514(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__6514VTable != NULL
        && pSimarray__6514VTable->m_version >= Scv612
        && pSimarray__6514VTable->m_pfnCompare != NULL) {
        if (pSimarray__6514VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__6514VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__6514VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__6381, 1, sizeof(struct__6381), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__6514_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__6514VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__6514VTable, nRetValue);
    }
    return 0;
}

int array__6514_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__6514VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__6514VTable, nRetValue);
    }
    return 0;
}

int get_array__6514_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__6381_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__6514_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__6381_default_value(&((struct__6381*)pValue)[i]);
    return 1;
}

int check_array__6514_string(const char *str, char **endptr)
{
    static array__6514 rTemp;
    return string_to_array__6514(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__6514_Utils = {
    array__6514_to_string,
    check_array__6514_string,
    string_to_array__6514,
    is_array__6514_double_conversion_allowed,
    array__6514_to_double,
    is_array__6514_long_convertion_allowed,
    array__6514_to_long,
    compare_array__6514,
    get_array__6514_signature,
    set_array__6514_default_value,
    sizeof(array__6514)
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
 ** array_int_351 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_351VTable;

int array_int_351_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_351VTable != NULL
        && pSimarray_int_351VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_351VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 351, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_351(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_351VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_351VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 351, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_351_double_conversion_allowed()
{
    if (pSimarray_int_351VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_351VTable);
    }
    return 0;
}

int is_array_int_351_long_convertion_allowed()
{
    if (pSimarray_int_351VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_351VTable);
    }
    return 0;
}

void compare_array_int_351(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_351VTable != NULL
        && pSimarray_int_351VTable->m_version >= Scv612
        && pSimarray_int_351VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_351VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_351VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_351VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 351, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_351_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_351VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_351VTable, nRetValue);
    }
    return 0;
}

int array_int_351_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_351VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_351VTable, nRetValue);
    }
    return 0;
}

int get_array_int_351_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 351; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_351_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 351; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_351_string(const char *str, char **endptr)
{
    static array_int_351 rTemp;
    return string_to_array_int_351(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_351_Utils = {
    array_int_351_to_string,
    check_array_int_351_string,
    string_to_array_int_351,
    is_array_int_351_double_conversion_allowed,
    array_int_351_to_double,
    is_array_int_351_long_convertion_allowed,
    array_int_351_to_long,
    compare_array_int_351,
    get_array_int_351_signature,
    set_array_int_351_default_value,
    sizeof(array_int_351)
};

/****************************************************************
 ** array_int_20 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_20VTable;

int array_int_20_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_20VTable != NULL
        && pSimarray_int_20VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_20VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 20, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_20(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_20VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_20VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 20, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_20_double_conversion_allowed()
{
    if (pSimarray_int_20VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_20VTable);
    }
    return 0;
}

int is_array_int_20_long_convertion_allowed()
{
    if (pSimarray_int_20VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_20VTable);
    }
    return 0;
}

void compare_array_int_20(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_20VTable != NULL
        && pSimarray_int_20VTable->m_version >= Scv612
        && pSimarray_int_20VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_20VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_20VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_20VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 20, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_20_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_20VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_20VTable, nRetValue);
    }
    return 0;
}

int array_int_20_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_20VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_20VTable, nRetValue);
    }
    return 0;
}

int get_array_int_20_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 20; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_20_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 20; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_20_string(const char *str, char **endptr)
{
    static array_int_20 rTemp;
    return string_to_array_int_20(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_20_Utils = {
    array_int_20_to_string,
    check_array_int_20_string,
    string_to_array_int_20,
    is_array_int_20_double_conversion_allowed,
    array_int_20_to_double,
    is_array_int_20_long_convertion_allowed,
    array_int_20_to_long,
    compare_array_int_20,
    get_array_int_20_signature,
    set_array_int_20_default_value,
    sizeof(array_int_20)
};

/****************************************************************
 ** array_int_149 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_149VTable;

int array_int_149_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_149VTable != NULL
        && pSimarray_int_149VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_149VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 149, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_149(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_149VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_149VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 149, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_149_double_conversion_allowed()
{
    if (pSimarray_int_149VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_149VTable);
    }
    return 0;
}

int is_array_int_149_long_convertion_allowed()
{
    if (pSimarray_int_149VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_149VTable);
    }
    return 0;
}

void compare_array_int_149(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_149VTable != NULL
        && pSimarray_int_149VTable->m_version >= Scv612
        && pSimarray_int_149VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_149VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_149VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_149VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 149, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_149_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_149VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_149VTable, nRetValue);
    }
    return 0;
}

int array_int_149_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_149VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_149VTable, nRetValue);
    }
    return 0;
}

int get_array_int_149_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 149; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_149_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 149; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_149_string(const char *str, char **endptr)
{
    static array_int_149 rTemp;
    return string_to_array_int_149(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_149_Utils = {
    array_int_149_to_string,
    check_array_int_149_string,
    string_to_array_int_149,
    is_array_int_149_double_conversion_allowed,
    array_int_149_to_double,
    is_array_int_149_long_convertion_allowed,
    array_int_149_to_long,
    compare_array_int_149,
    get_array_int_149_signature,
    set_array_int_149_default_value,
    sizeof(array_int_149)
};

/****************************************************************
 ** array_int_14 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_14VTable;

int array_int_14_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_14VTable != NULL
        && pSimarray_int_14VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_14VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 14, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_14(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_14VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_14VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 14, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_14_double_conversion_allowed()
{
    if (pSimarray_int_14VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int_14VTable);
    }
    return 0;
}

int is_array_int_14_long_convertion_allowed()
{
    if (pSimarray_int_14VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray_int_14VTable);
    }
    return 0;
}

void compare_array_int_14(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_14VTable != NULL
        && pSimarray_int_14VTable->m_version >= Scv612
        && pSimarray_int_14VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_14VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_14VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_14VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 14, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_14_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_14VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_14VTable, nRetValue);
    }
    return 0;
}

int array_int_14_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray_int_14VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int_14VTable, nRetValue);
    }
    return 0;
}

int get_array_int_14_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 14; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_14_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 14; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_14_string(const char *str, char **endptr)
{
    static array_int_14 rTemp;
    return string_to_array_int_14(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_14_Utils = {
    array_int_14_to_string,
    check_array_int_14_string,
    string_to_array_int_14,
    is_array_int_14_double_conversion_allowed,
    array_int_14_to_double,
    is_array_int_14_long_convertion_allowed,
    array_int_14_to_long,
    compare_array_int_14,
    get_array_int_14_signature,
    set_array_int_14_default_value,
    sizeof(array_int_14)
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
 ** L_MESSAGE 
 ****************************************************************/

struct SimTypeVTable *pSimL_MESSAGEVTable;

int L_MESSAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimL_MESSAGEVTable != NULL
        && pSimL_MESSAGEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimL_MESSAGEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_L_MESSAGE(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimL_MESSAGEVTable != NULL) {
        nRet=string_to_VTable(str, pSimL_MESSAGEVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_L_MESSAGE_double_conversion_allowed()
{
    if (pSimL_MESSAGEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimL_MESSAGEVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_L_MESSAGE_long_convertion_allowed()
{
    if (pSimL_MESSAGEVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimL_MESSAGEVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_L_MESSAGE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimL_MESSAGEVTable != NULL
        && pSimL_MESSAGEVTable->m_version >= Scv612
        && pSimL_MESSAGEVTable->m_pfnCompare != NULL) {
        if (pSimL_MESSAGEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimL_MESSAGEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimL_MESSAGEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int L_MESSAGE_to_double(const void *pValue, double *nRetValue)
{
    if (pSimL_MESSAGEVTable != NULL) {
        return VTable_to_double(pValue, pSimL_MESSAGEVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int L_MESSAGE_to_long(const void *pValue, long *nRetValue)
{
    if (pSimL_MESSAGEVTable != NULL) {
        return VTable_to_long(pValue, pSimL_MESSAGEVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_L_MESSAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_L_MESSAGE_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_L_MESSAGE_string(const char *str, char **endptr)
{
    static L_MESSAGE rTemp;
    return string_to_L_MESSAGE(str, &rTemp, endptr);
}

SimTypeUtils _Type_L_MESSAGE_Utils = {
    L_MESSAGE_to_string,
    check_L_MESSAGE_string,
    string_to_L_MESSAGE,
    is_L_MESSAGE_double_conversion_allowed,
    L_MESSAGE_to_double,
    is_L_MESSAGE_long_convertion_allowed,
    L_MESSAGE_to_long,
    compare_L_MESSAGE,
    get_L_MESSAGE_signature,
    set_L_MESSAGE_default_value,
    sizeof(L_MESSAGE)
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
 ** M_ACK 
 ****************************************************************/

struct SimTypeVTable *pSimM_ACKVTable;

static SimEnumValUtils M_ACK_values[] = {
    { "M_ACK_No_acknowledgement_required", M_ACK_No_acknowledgement_required},
    { "M_ACK_No_acknowledgement_required", M_ACK_No_acknowledgement_required},
    { "M_ACK_Acknowledgement_required", M_ACK_Acknowledgement_required},
    { "M_ACK_Acknowledgement_required", M_ACK_Acknowledgement_required},
};
const int M_ACK_nb_values = 4;

int M_ACK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_ACKVTable != NULL
        && pSimM_ACKVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_ACKVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_ACK*)pValue, M_ACK_values, M_ACK_nb_values, pfnStrAppend, pData); 
}

int string_to_M_ACK(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_ACKVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_ACKVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_ACK_values, M_ACK_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_ACK*)pValue = nTemp;
    }
    return nRet;
}

int is_M_ACK_double_conversion_allowed()
{
    if (pSimM_ACKVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_ACKVTable);
    }
    return 1;
}

int is_M_ACK_long_convertion_allowed()
{
    if (pSimM_ACKVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_ACKVTable);
    }
    return 1;
}

void compare_M_ACK(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_ACKVTable != NULL
        && pSimM_ACKVTable->m_version >= Scv612
        && pSimM_ACKVTable->m_pfnCompare != NULL) {
        if (pSimM_ACKVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_ACKVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_ACKVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_ACK*)pValue1), (int)(*(M_ACK*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_ACK_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_ACKVTable != NULL) {
        return VTable_to_double(pValue, pSimM_ACKVTable, nRetValue);
    }
    *nRetValue = (double)*((M_ACK*)pValue);
    return 1;
}

int M_ACK_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_ACKVTable != NULL) {
        return VTable_to_long(pValue, pSimM_ACKVTable, nRetValue);
    }
    *nRetValue = (long)*((M_ACK*)pValue);
    return 1;
}

int get_M_ACK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_ACK_values, M_ACK_nb_values, pfnStrAppend, pData);
}

int set_M_ACK_default_value(void *pValue)
{
    *(M_ACK*)pValue = M_ACK_No_acknowledgement_required;
    return 1;
}

int check_M_ACK_string(const char *str, char **endptr)
{
    static M_ACK rTemp;
    return string_to_M_ACK(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_ACK_Utils = {
    M_ACK_to_string,
    check_M_ACK_string,
    string_to_M_ACK,
    is_M_ACK_double_conversion_allowed,
    M_ACK_to_double,
    is_M_ACK_long_convertion_allowed,
    M_ACK_to_long,
    compare_M_ACK,
    get_M_ACK_signature,
    set_M_ACK_default_value,
    sizeof(M_ACK)
};

/****************************************************************
 ** NID_LRBG 
 ****************************************************************/

struct SimTypeVTable *pSimNID_LRBGVTable;

int NID_LRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_LRBGVTable != NULL
        && pSimNID_LRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_LRBGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_LRBG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_LRBGVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_LRBGVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_LRBG_double_conversion_allowed()
{
    if (pSimNID_LRBGVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_LRBGVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_LRBG_long_convertion_allowed()
{
    if (pSimNID_LRBGVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_LRBGVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_LRBG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_LRBGVTable != NULL
        && pSimNID_LRBGVTable->m_version >= Scv612
        && pSimNID_LRBGVTable->m_pfnCompare != NULL) {
        if (pSimNID_LRBGVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_LRBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_LRBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_LRBG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_LRBGVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_LRBGVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int NID_LRBG_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_LRBGVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_LRBGVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_NID_LRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_LRBG_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_LRBG_string(const char *str, char **endptr)
{
    static NID_LRBG rTemp;
    return string_to_NID_LRBG(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_LRBG_Utils = {
    NID_LRBG_to_string,
    check_NID_LRBG_string,
    string_to_NID_LRBG,
    is_NID_LRBG_double_conversion_allowed,
    NID_LRBG_to_double,
    is_NID_LRBG_long_convertion_allowed,
    NID_LRBG_to_long,
    compare_NID_LRBG,
    get_NID_LRBG_signature,
    set_NID_LRBG_default_value,
    sizeof(NID_LRBG)
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
 ** D_SR 
 ****************************************************************/

struct SimTypeVTable *pSimD_SRVTable;

int D_SR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_SRVTable != NULL
        && pSimD_SRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_SRVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_SR(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_SRVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_SRVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_SR_double_conversion_allowed()
{
    if (pSimD_SRVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_SRVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_D_SR_long_convertion_allowed()
{
    if (pSimD_SRVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimD_SRVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_D_SR(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_SRVTable != NULL
        && pSimD_SRVTable->m_version >= Scv612
        && pSimD_SRVTable->m_pfnCompare != NULL) {
        if (pSimD_SRVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_SRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_SRVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_SR_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_SRVTable != NULL) {
        return VTable_to_double(pValue, pSimD_SRVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int D_SR_to_long(const void *pValue, long *nRetValue)
{
    if (pSimD_SRVTable != NULL) {
        return VTable_to_long(pValue, pSimD_SRVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_D_SR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_SR_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_SR_string(const char *str, char **endptr)
{
    static D_SR rTemp;
    return string_to_D_SR(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_SR_Utils = {
    D_SR_to_string,
    check_D_SR_string,
    string_to_D_SR,
    is_D_SR_double_conversion_allowed,
    D_SR_to_double,
    is_D_SR_long_convertion_allowed,
    D_SR_to_long,
    compare_D_SR,
    get_D_SR_signature,
    set_D_SR_default_value,
    sizeof(D_SR)
};

/****************************************************************
 ** D_REF 
 ****************************************************************/

struct SimTypeVTable *pSimD_REFVTable;

int D_REF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_REFVTable != NULL
        && pSimD_REFVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_REFVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_REF(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_REFVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_REFVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_REF_double_conversion_allowed()
{
    if (pSimD_REFVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_REFVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_D_REF_long_convertion_allowed()
{
    if (pSimD_REFVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimD_REFVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_D_REF(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_REFVTable != NULL
        && pSimD_REFVTable->m_version >= Scv612
        && pSimD_REFVTable->m_pfnCompare != NULL) {
        if (pSimD_REFVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_REFVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_REFVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_REF_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_REFVTable != NULL) {
        return VTable_to_double(pValue, pSimD_REFVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int D_REF_to_long(const void *pValue, long *nRetValue)
{
    if (pSimD_REFVTable != NULL) {
        return VTable_to_long(pValue, pSimD_REFVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_D_REF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_REF_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_REF_string(const char *str, char **endptr)
{
    static D_REF rTemp;
    return string_to_D_REF(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_REF_Utils = {
    D_REF_to_string,
    check_D_REF_string,
    string_to_D_REF,
    is_D_REF_double_conversion_allowed,
    D_REF_to_double,
    is_D_REF_long_convertion_allowed,
    D_REF_to_long,
    compare_D_REF,
    get_D_REF_signature,
    set_D_REF_default_value,
    sizeof(D_REF)
};

/****************************************************************
 ** D_EMERGENCYSTOP 
 ****************************************************************/

struct SimTypeVTable *pSimD_EMERGENCYSTOPVTable;

int D_EMERGENCYSTOP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_EMERGENCYSTOPVTable != NULL
        && pSimD_EMERGENCYSTOPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_EMERGENCYSTOPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_EMERGENCYSTOP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_EMERGENCYSTOPVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_EMERGENCYSTOP_double_conversion_allowed()
{
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_EMERGENCYSTOPVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_D_EMERGENCYSTOP_long_convertion_allowed()
{
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimD_EMERGENCYSTOPVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_D_EMERGENCYSTOP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_EMERGENCYSTOPVTable != NULL
        && pSimD_EMERGENCYSTOPVTable->m_version >= Scv612
        && pSimD_EMERGENCYSTOPVTable->m_pfnCompare != NULL) {
        if (pSimD_EMERGENCYSTOPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_EMERGENCYSTOPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_EMERGENCYSTOPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_EMERGENCYSTOP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        return VTable_to_double(pValue, pSimD_EMERGENCYSTOPVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int D_EMERGENCYSTOP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimD_EMERGENCYSTOPVTable != NULL) {
        return VTable_to_long(pValue, pSimD_EMERGENCYSTOPVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_D_EMERGENCYSTOP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_EMERGENCYSTOP_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_EMERGENCYSTOP_string(const char *str, char **endptr)
{
    static D_EMERGENCYSTOP rTemp;
    return string_to_D_EMERGENCYSTOP(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_EMERGENCYSTOP_Utils = {
    D_EMERGENCYSTOP_to_string,
    check_D_EMERGENCYSTOP_string,
    string_to_D_EMERGENCYSTOP,
    is_D_EMERGENCYSTOP_double_conversion_allowed,
    D_EMERGENCYSTOP_to_double,
    is_D_EMERGENCYSTOP_long_convertion_allowed,
    D_EMERGENCYSTOP_to_long,
    compare_D_EMERGENCYSTOP,
    get_D_EMERGENCYSTOP_signature,
    set_D_EMERGENCYSTOP_default_value,
    sizeof(D_EMERGENCYSTOP)
};

/****************************************************************
 ** M_VERSION 
 ****************************************************************/

struct SimTypeVTable *pSimM_VERSIONVTable;

static SimEnumValUtils M_VERSION_values[] = {
    { "M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS", M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS},
    { "M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS", M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS},
    { "M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0", M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0},
    { "M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0", M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0},
    { "M_VERSION_Version_1_1_introduced_in_SRS_3_3_0", M_VERSION_Version_1_1_introduced_in_SRS_3_3_0},
    { "M_VERSION_Version_1_1_introduced_in_SRS_3_3_0", M_VERSION_Version_1_1_introduced_in_SRS_3_3_0},
    { "M_VERSION_Version_2_0_introduced_in_SRS_3_3_0", M_VERSION_Version_2_0_introduced_in_SRS_3_3_0},
    { "M_VERSION_Version_2_0_introduced_in_SRS_3_3_0", M_VERSION_Version_2_0_introduced_in_SRS_3_3_0},
};
const int M_VERSION_nb_values = 8;

int M_VERSION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_VERSIONVTable != NULL
        && pSimM_VERSIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_VERSIONVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_VERSION*)pValue, M_VERSION_values, M_VERSION_nb_values, pfnStrAppend, pData); 
}

int string_to_M_VERSION(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_VERSIONVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_VERSIONVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_VERSION_values, M_VERSION_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_VERSION*)pValue = nTemp;
    }
    return nRet;
}

int is_M_VERSION_double_conversion_allowed()
{
    if (pSimM_VERSIONVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_VERSIONVTable);
    }
    return 1;
}

int is_M_VERSION_long_convertion_allowed()
{
    if (pSimM_VERSIONVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_VERSIONVTable);
    }
    return 1;
}

void compare_M_VERSION(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_VERSIONVTable != NULL
        && pSimM_VERSIONVTable->m_version >= Scv612
        && pSimM_VERSIONVTable->m_pfnCompare != NULL) {
        if (pSimM_VERSIONVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_VERSIONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_VERSIONVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_VERSION*)pValue1), (int)(*(M_VERSION*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_VERSION_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_VERSIONVTable != NULL) {
        return VTable_to_double(pValue, pSimM_VERSIONVTable, nRetValue);
    }
    *nRetValue = (double)*((M_VERSION*)pValue);
    return 1;
}

int M_VERSION_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_VERSIONVTable != NULL) {
        return VTable_to_long(pValue, pSimM_VERSIONVTable, nRetValue);
    }
    *nRetValue = (long)*((M_VERSION*)pValue);
    return 1;
}

int get_M_VERSION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_VERSION_values, M_VERSION_nb_values, pfnStrAppend, pData);
}

int set_M_VERSION_default_value(void *pValue)
{
    *(M_VERSION*)pValue = M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    return 1;
}

int check_M_VERSION_string(const char *str, char **endptr)
{
    static M_VERSION rTemp;
    return string_to_M_VERSION(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_VERSION_Utils = {
    M_VERSION_to_string,
    check_M_VERSION_string,
    string_to_M_VERSION,
    is_M_VERSION_double_conversion_allowed,
    M_VERSION_to_double,
    is_M_VERSION_long_convertion_allowed,
    M_VERSION_to_long,
    compare_M_VERSION,
    get_M_VERSION_signature,
    set_M_VERSION_default_value,
    sizeof(M_VERSION)
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
    return struct__6368_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6368(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_trackside_int_T_TMVTable);
    }
    return is_struct__6368_double_conversion_allowed();
}

int is_P021_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_trackside_int_T_TMVTable);
    }
    return is_struct__6368_long_convertion_allowed();
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
        compare_struct__6368(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__6368_to_double(pValue, nRetValue);
}

int P021_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__6368_to_long(pValue, nRetValue);
}

int get_P021_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6368_signature(pfnStrAppend, pData);
}

int set_P021_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__6368_default_value(pValue);
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
    return array__6365_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__6365(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_trackide_sectionlist_T_TMVTable);
    }
    return is_array__6365_double_conversion_allowed();
}

int is_P021_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_trackide_sectionlist_T_TMVTable);
    }
    return is_array__6365_long_convertion_allowed();
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
        compare_array__6365(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__6365_to_double(pValue, nRetValue);
}

int P021_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__6365_to_long(pValue, nRetValue);
}

int get_P021_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__6365_signature(pfnStrAppend, pData);
}

int set_P021_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_array__6365_default_value(pValue);
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
    return struct__6350_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6350(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_section_int_T_TM_double_conversion_allowed()
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_section_int_T_TMVTable);
    }
    return is_struct__6350_double_conversion_allowed();
}

int is_P021_section_int_T_TM_long_convertion_allowed()
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_section_int_T_TMVTable);
    }
    return is_struct__6350_long_convertion_allowed();
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
        compare_struct__6350(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_section_int_T_TMVTable, nRetValue);
    }
    return struct__6350_to_double(pValue, nRetValue);
}

int P021_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_section_int_T_TMVTable, nRetValue);
    }
    return struct__6350_to_long(pValue, nRetValue);
}

int get_P021_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6350_signature(pfnStrAppend, pData);
}

int set_P021_section_int_T_TM_default_value(void *pValue)
{
    return set_struct__6350_default_value(pValue);
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
    return array__6362_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P021_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP021_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__6362(str, pValue, endptr);
    }
    return nRet;
}

int is_P021_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP021_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__6362_double_conversion_allowed();
}

int is_P021_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP021_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__6362_long_convertion_allowed();
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
        compare_array__6362(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P021_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP021_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__6362_to_double(pValue, nRetValue);
}

int P021_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP021_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP021_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__6362_to_long(pValue, nRetValue);
}

int get_P021_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__6362_signature(pfnStrAppend, pData);
}

int set_P021_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_array__6362_default_value(pValue);
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
    return struct__6284_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6284(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP005_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP005_trackside_int_T_TMVTable);
    }
    return is_struct__6284_double_conversion_allowed();
}

int is_P005_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP005_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP005_trackside_int_T_TMVTable);
    }
    return is_struct__6284_long_convertion_allowed();
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
        compare_struct__6284(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__6284_to_double(pValue, nRetValue);
}

int P005_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP005_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP005_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__6284_to_long(pValue, nRetValue);
}

int get_P005_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6284_signature(pfnStrAppend, pData);
}

int set_P005_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__6284_default_value(pValue);
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
    return array__6281_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__6281(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP005_trackide_sectionlist_T_TMVTable);
    }
    return is_array__6281_double_conversion_allowed();
}

int is_P005_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP005_trackide_sectionlist_T_TMVTable);
    }
    return is_array__6281_long_convertion_allowed();
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
        compare_array__6281(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__6281_to_double(pValue, nRetValue);
}

int P005_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP005_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP005_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__6281_to_long(pValue, nRetValue);
}

int get_P005_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__6281_signature(pfnStrAppend, pData);
}

int set_P005_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_array__6281_default_value(pValue);
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
    return struct__6262_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6262(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_section_int_T_TM_double_conversion_allowed()
{
    if (pSimP005_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP005_section_int_T_TMVTable);
    }
    return is_struct__6262_double_conversion_allowed();
}

int is_P005_section_int_T_TM_long_convertion_allowed()
{
    if (pSimP005_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP005_section_int_T_TMVTable);
    }
    return is_struct__6262_long_convertion_allowed();
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
        compare_struct__6262(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_section_int_T_TMVTable, nRetValue);
    }
    return struct__6262_to_double(pValue, nRetValue);
}

int P005_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP005_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP005_section_int_T_TMVTable, nRetValue);
    }
    return struct__6262_to_long(pValue, nRetValue);
}

int get_P005_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6262_signature(pfnStrAppend, pData);
}

int set_P005_section_int_T_TM_default_value(void *pValue)
{
    return set_struct__6262_default_value(pValue);
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
    return array__6278_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__6278(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP005_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__6278_double_conversion_allowed();
}

int is_P005_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP005_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__6278_long_convertion_allowed();
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
        compare_array__6278(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__6278_to_double(pValue, nRetValue);
}

int P005_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP005_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP005_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__6278_to_long(pValue, nRetValue);
}

int get_P005_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__6278_signature(pfnStrAppend, pData);
}

int set_P005_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_array__6278_default_value(pValue);
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
    return struct__6393_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6393(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_trackside_int_T_TMVTable);
    }
    return is_struct__6393_double_conversion_allowed();
}

int is_P041_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_trackside_int_T_TMVTable);
    }
    return is_struct__6393_long_convertion_allowed();
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
        compare_struct__6393(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__6393_to_double(pValue, nRetValue);
}

int P041_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__6393_to_long(pValue, nRetValue);
}

int get_P041_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6393_signature(pfnStrAppend, pData);
}

int set_P041_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__6393_default_value(pValue);
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
    return array__6390_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__6390(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_trackide_sectionlist_T_TMVTable);
    }
    return is_array__6390_double_conversion_allowed();
}

int is_P041_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_trackide_sectionlist_T_TMVTable);
    }
    return is_array__6390_long_convertion_allowed();
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
        compare_array__6390(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__6390_to_double(pValue, nRetValue);
}

int P041_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__6390_to_long(pValue, nRetValue);
}

int get_P041_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__6390_signature(pfnStrAppend, pData);
}

int set_P041_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_array__6390_default_value(pValue);
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
    return struct__6381_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6381(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_section_int_T_TM_double_conversion_allowed()
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_section_int_T_TMVTable);
    }
    return is_struct__6381_double_conversion_allowed();
}

int is_P041_section_int_T_TM_long_convertion_allowed()
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_section_int_T_TMVTable);
    }
    return is_struct__6381_long_convertion_allowed();
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
        compare_struct__6381(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_section_int_T_TMVTable, nRetValue);
    }
    return struct__6381_to_double(pValue, nRetValue);
}

int P041_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_section_int_T_TMVTable, nRetValue);
    }
    return struct__6381_to_long(pValue, nRetValue);
}

int get_P041_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6381_signature(pfnStrAppend, pData);
}

int set_P041_section_int_T_TM_default_value(void *pValue)
{
    return set_struct__6381_default_value(pValue);
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
    return array__6387_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P041_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP041_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__6387(str, pValue, endptr);
    }
    return nRet;
}

int is_P041_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP041_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__6387_double_conversion_allowed();
}

int is_P041_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP041_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__6387_long_convertion_allowed();
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
        compare_array__6387(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P041_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP041_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__6387_to_double(pValue, nRetValue);
}

int P041_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP041_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__6387_to_long(pValue, nRetValue);
}

int get_P041_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__6387_signature(pfnStrAppend, pData);
}

int set_P041_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_array__6387_default_value(pValue);
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
    return struct__6246_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P065_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP065_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP065_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6246(str, pValue, endptr);
    }
    return nRet;
}

int is_P065_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP065_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP065_trackside_int_T_TMVTable);
    }
    return is_struct__6246_double_conversion_allowed();
}

int is_P065_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP065_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP065_trackside_int_T_TMVTable);
    }
    return is_struct__6246_long_convertion_allowed();
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
        compare_struct__6246(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P065_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP065_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP065_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__6246_to_double(pValue, nRetValue);
}

int P065_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP065_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP065_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__6246_to_long(pValue, nRetValue);
}

int get_P065_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6246_signature(pfnStrAppend, pData);
}

int set_P065_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__6246_default_value(pValue);
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
 ** P255_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP255_trackside_int_T_TMVTable;

int P255_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP255_trackside_int_T_TMVTable != NULL
        && pSimP255_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP255_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__6241_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P255_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP255_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP255_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6241(str, pValue, endptr);
    }
    return nRet;
}

int is_P255_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP255_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP255_trackside_int_T_TMVTable);
    }
    return is_struct__6241_double_conversion_allowed();
}

int is_P255_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP255_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP255_trackside_int_T_TMVTable);
    }
    return is_struct__6241_long_convertion_allowed();
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
        compare_struct__6241(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P255_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP255_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP255_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__6241_to_double(pValue, nRetValue);
}

int P255_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP255_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP255_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__6241_to_long(pValue, nRetValue);
}

int get_P255_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6241_signature(pfnStrAppend, pData);
}

int set_P255_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__6241_default_value(pValue);
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
 ** P015_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP015_trackside_int_T_TMVTable;

int P015_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP015_trackside_int_T_TMVTable != NULL
        && pSimP015_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP015_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__6215_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P015_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP015_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP015_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6215(str, pValue, endptr);
    }
    return nRet;
}

int is_P015_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP015_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP015_trackside_int_T_TMVTable);
    }
    return is_struct__6215_double_conversion_allowed();
}

int is_P015_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP015_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP015_trackside_int_T_TMVTable);
    }
    return is_struct__6215_long_convertion_allowed();
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
        compare_struct__6215(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P015_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP015_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP015_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__6215_to_double(pValue, nRetValue);
}

int P015_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP015_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP015_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__6215_to_long(pValue, nRetValue);
}

int get_P015_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6215_signature(pfnStrAppend, pData);
}

int set_P015_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__6215_default_value(pValue);
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
    return array__6212_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P015_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP015_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP015_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__6212(str, pValue, endptr);
    }
    return nRet;
}

int is_P015_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimP015_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP015_trackide_sectionlist_T_TMVTable);
    }
    return is_array__6212_double_conversion_allowed();
}

int is_P015_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimP015_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP015_trackide_sectionlist_T_TMVTable);
    }
    return is_array__6212_long_convertion_allowed();
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
        compare_array__6212(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P015_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP015_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP015_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__6212_to_double(pValue, nRetValue);
}

int P015_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP015_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP015_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__6212_to_long(pValue, nRetValue);
}

int get_P015_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__6212_signature(pfnStrAppend, pData);
}

int set_P015_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_array__6212_default_value(pValue);
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
    return struct__6199_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P015_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP015_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP015_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6199(str, pValue, endptr);
    }
    return nRet;
}

int is_P015_section_int_T_TM_double_conversion_allowed()
{
    if (pSimP015_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP015_section_int_T_TMVTable);
    }
    return is_struct__6199_double_conversion_allowed();
}

int is_P015_section_int_T_TM_long_convertion_allowed()
{
    if (pSimP015_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP015_section_int_T_TMVTable);
    }
    return is_struct__6199_long_convertion_allowed();
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
        compare_struct__6199(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P015_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP015_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP015_section_int_T_TMVTable, nRetValue);
    }
    return struct__6199_to_double(pValue, nRetValue);
}

int P015_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP015_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP015_section_int_T_TMVTable, nRetValue);
    }
    return struct__6199_to_long(pValue, nRetValue);
}

int get_P015_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6199_signature(pfnStrAppend, pData);
}

int set_P015_section_int_T_TM_default_value(void *pValue)
{
    return set_struct__6199_default_value(pValue);
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
    return array__6212_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P015_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP015_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP015_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__6212(str, pValue, endptr);
    }
    return nRet;
}

int is_P015_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimP015_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP015_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__6212_double_conversion_allowed();
}

int is_P015_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimP015_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP015_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__6212_long_convertion_allowed();
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
        compare_array__6212(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P015_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP015_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP015_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__6212_to_double(pValue, nRetValue);
}

int P015_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP015_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP015_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__6212_to_long(pValue, nRetValue);
}

int get_P015_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__6212_signature(pfnStrAppend, pData);
}

int set_P015_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_array__6212_default_value(pValue);
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
 ** _3_Radio_TrackTrain_Header_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSim_3_Radio_TrackTrain_Header_T_TMVTable;

int _3_Radio_TrackTrain_Header_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSim_3_Radio_TrackTrain_Header_T_TMVTable != NULL
        && pSim_3_Radio_TrackTrain_Header_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_3_Radio_TrackTrain_Header_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__6143_to_string(pValue, pfnStrAppend, pData);
}

int string_to__3_Radio_TrackTrain_Header_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSim_3_Radio_TrackTrain_Header_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSim_3_Radio_TrackTrain_Header_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6143(str, pValue, endptr);
    }
    return nRet;
}

int is__3_Radio_TrackTrain_Header_T_TM_double_conversion_allowed()
{
    if (pSim_3_Radio_TrackTrain_Header_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_3_Radio_TrackTrain_Header_T_TMVTable);
    }
    return is_struct__6143_double_conversion_allowed();
}

int is__3_Radio_TrackTrain_Header_T_TM_long_convertion_allowed()
{
    if (pSim_3_Radio_TrackTrain_Header_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSim_3_Radio_TrackTrain_Header_T_TMVTable);
    }
    return is_struct__6143_long_convertion_allowed();
}

void compare__3_Radio_TrackTrain_Header_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSim_3_Radio_TrackTrain_Header_T_TMVTable != NULL
        && pSim_3_Radio_TrackTrain_Header_T_TMVTable->m_version >= Scv612
        && pSim_3_Radio_TrackTrain_Header_T_TMVTable->m_pfnCompare != NULL) {
        if (pSim_3_Radio_TrackTrain_Header_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSim_3_Radio_TrackTrain_Header_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSim_3_Radio_TrackTrain_Header_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__6143(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int _3_Radio_TrackTrain_Header_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSim_3_Radio_TrackTrain_Header_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSim_3_Radio_TrackTrain_Header_T_TMVTable, nRetValue);
    }
    return struct__6143_to_double(pValue, nRetValue);
}

int _3_Radio_TrackTrain_Header_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSim_3_Radio_TrackTrain_Header_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSim_3_Radio_TrackTrain_Header_T_TMVTable, nRetValue);
    }
    return struct__6143_to_long(pValue, nRetValue);
}

int get__3_Radio_TrackTrain_Header_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6143_signature(pfnStrAppend, pData);
}

int set__3_Radio_TrackTrain_Header_T_TM_default_value(void *pValue)
{
    return set_struct__6143_default_value(pValue);
}

int check__3_Radio_TrackTrain_Header_T_TM_string(const char *str, char **endptr)
{
    static _3_Radio_TrackTrain_Header_T_TM rTemp;
    return string_to__3_Radio_TrackTrain_Header_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type__3_Radio_TrackTrain_Header_T_TM_Utils = {
    _3_Radio_TrackTrain_Header_T_TM_to_string,
    check__3_Radio_TrackTrain_Header_T_TM_string,
    string_to__3_Radio_TrackTrain_Header_T_TM,
    is__3_Radio_TrackTrain_Header_T_TM_double_conversion_allowed,
    _3_Radio_TrackTrain_Header_T_TM_to_double,
    is__3_Radio_TrackTrain_Header_T_TM_long_convertion_allowed,
    _3_Radio_TrackTrain_Header_T_TM_to_long,
    compare__3_Radio_TrackTrain_Header_T_TM,
    get__3_Radio_TrackTrain_Header_T_TM_signature,
    set__3_Radio_TrackTrain_Header_T_TM_default_value,
    sizeof(_3_Radio_TrackTrain_Header_T_TM)
};

/****************************************************************
 ** CompressedRadioMessage_TM 
 ****************************************************************/

struct SimTypeVTable *pSimCompressedRadioMessage_TMVTable;

int CompressedRadioMessage_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCompressedRadioMessage_TMVTable != NULL
        && pSimCompressedRadioMessage_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedRadioMessage_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__6161_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedRadioMessage_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedRadioMessage_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedRadioMessage_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6161(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedRadioMessage_TM_double_conversion_allowed()
{
    if (pSimCompressedRadioMessage_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedRadioMessage_TMVTable);
    }
    return is_struct__6161_double_conversion_allowed();
}

int is_CompressedRadioMessage_TM_long_convertion_allowed()
{
    if (pSimCompressedRadioMessage_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimCompressedRadioMessage_TMVTable);
    }
    return is_struct__6161_long_convertion_allowed();
}

void compare_CompressedRadioMessage_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCompressedRadioMessage_TMVTable != NULL
        && pSimCompressedRadioMessage_TMVTable->m_version >= Scv612
        && pSimCompressedRadioMessage_TMVTable->m_pfnCompare != NULL) {
        if (pSimCompressedRadioMessage_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCompressedRadioMessage_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCompressedRadioMessage_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__6161(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedRadioMessage_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedRadioMessage_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedRadioMessage_TMVTable, nRetValue);
    }
    return struct__6161_to_double(pValue, nRetValue);
}

int CompressedRadioMessage_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimCompressedRadioMessage_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedRadioMessage_TMVTable, nRetValue);
    }
    return struct__6161_to_long(pValue, nRetValue);
}

int get_CompressedRadioMessage_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6161_signature(pfnStrAppend, pData);
}

int set_CompressedRadioMessage_TM_default_value(void *pValue)
{
    return set_struct__6161_default_value(pValue);
}

int check_CompressedRadioMessage_TM_string(const char *str, char **endptr)
{
    static CompressedRadioMessage_TM rTemp;
    return string_to_CompressedRadioMessage_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_CompressedRadioMessage_TM_Utils = {
    CompressedRadioMessage_TM_to_string,
    check_CompressedRadioMessage_TM_string,
    string_to_CompressedRadioMessage_TM,
    is_CompressedRadioMessage_TM_double_conversion_allowed,
    CompressedRadioMessage_TM_to_double,
    is_CompressedRadioMessage_TM_long_convertion_allowed,
    CompressedRadioMessage_TM_to_long,
    compare_CompressedRadioMessage_TM,
    get_CompressedRadioMessage_TM_signature,
    set_CompressedRadioMessage_TM_default_value,
    sizeof(CompressedRadioMessage_TM)
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
    return array__6135_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__6135(str, pValue, endptr);
    }
    return nRet;
}

int is_Metadata_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__6135_double_conversion_allowed();
}

int is_Metadata_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__6135_long_convertion_allowed();
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
        compare_array__6135(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__6135_to_double(pValue, nRetValue);
}

int Metadata_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__6135_to_long(pValue, nRetValue);
}

int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__6135_signature(pfnStrAppend, pData);
}

int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_array__6135_default_value(pValue);
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
    return struct__6127_to_string(pValue, pfnStrAppend, pData);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6127(str, pValue, endptr);
    }
    return nRet;
}

int is_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__6127_double_conversion_allowed();
}

int is_MetadataElement_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__6127_long_convertion_allowed();
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
        compare_struct__6127(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__6127_to_double(pValue, nRetValue);
}

int MetadataElement_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__6127_to_long(pValue, nRetValue);
}

int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6127_signature(pfnStrAppend, pData);
}

int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__6127_default_value(pValue);
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
    return struct__6138_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6138(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__6138_double_conversion_allowed();
}

int is_CompressedPackets_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__6138_long_convertion_allowed();
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
        compare_struct__6138(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__6138_to_double(pValue, nRetValue);
}

int CompressedPackets_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__6138_to_long(pValue, nRetValue);
}

int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6138_signature(pfnStrAppend, pData);
}

int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__6138_default_value(pValue);
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
    return struct__6332_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6332(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackside_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__6332_double_conversion_allowed();
}

int is_P027V1_trackside_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__6332_long_convertion_allowed();
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
        compare_struct__6332(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__6332_to_double(pValue, nRetValue);
}

int P027V1_trackside_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__6332_to_long(pValue, nRetValue);
}

int get_P027V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6332_signature(pfnStrAppend, pData);
}

int set_P027V1_trackside_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__6332_default_value(pValue);
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
    return array__6309_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackside_qdifflist_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__6309(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackside_qdifflist_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable);
    }
    return is_array__6309_double_conversion_allowed();
}

int is_P027V1_trackside_qdifflist_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable);
    }
    return is_array__6309_long_convertion_allowed();
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
        compare_array__6309(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_qdifflist_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable, nRetValue);
    }
    return array__6309_to_double(pValue, nRetValue);
}

int P027V1_trackside_qdifflist_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_trackside_qdifflist_T_TM_baseline2VTable, nRetValue);
    }
    return array__6309_to_long(pValue, nRetValue);
}

int get_P027V1_trackside_qdifflist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__6309_signature(pfnStrAppend, pData);
}

int set_P027V1_trackside_qdifflist_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__6309_default_value(pValue);
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
    return struct__6304_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_int_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_int_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6304(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_int_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_int_qdiff_T_TM_baseline2VTable);
    }
    return is_struct__6304_double_conversion_allowed();
}

int is_P027V1_section_int_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_int_qdiff_T_TM_baseline2VTable);
    }
    return is_struct__6304_long_convertion_allowed();
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
        compare_struct__6304(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_int_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return struct__6304_to_double(pValue, nRetValue);
}

int P027V1_section_int_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return struct__6304_to_long(pValue, nRetValue);
}

int get_P027V1_section_int_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6304_signature(pfnStrAppend, pData);
}

int set_P027V1_section_int_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__6304_default_value(pValue);
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
    return array__6329_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackside_sectionlist_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__6329(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackside_sectionlist_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable);
    }
    return is_array__6329_double_conversion_allowed();
}

int is_P027V1_trackside_sectionlist_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable);
    }
    return is_array__6329_long_convertion_allowed();
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
        compare_array__6329(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_sectionlist_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable, nRetValue);
    }
    return array__6329_to_double(pValue, nRetValue);
}

int P027V1_trackside_sectionlist_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_trackside_sectionlist_T_TM_baseline2VTable, nRetValue);
    }
    return array__6329_to_long(pValue, nRetValue);
}

int get_P027V1_trackside_sectionlist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__6329_signature(pfnStrAppend, pData);
}

int set_P027V1_trackside_sectionlist_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__6329_default_value(pValue);
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
    return struct__6312_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6312(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_section_int_T_TM_baseline2VTable);
    }
    return is_struct__6312_double_conversion_allowed();
}

int is_P027V1_section_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_section_int_T_TM_baseline2VTable);
    }
    return is_struct__6312_long_convertion_allowed();
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
        compare_struct__6312(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__6312_to_double(pValue, nRetValue);
}

int P027V1_section_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_section_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_section_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__6312_to_long(pValue, nRetValue);
}

int get_P027V1_section_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6312_signature(pfnStrAppend, pData);
}

int set_P027V1_section_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__6312_default_value(pValue);
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
    return array__6326_to_string(pValue, pfnStrAppend, pData);
}

int string_to__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__6326(str, pValue, endptr);
    }
    return nRet;
}

int is__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable);
    }
    return is_array__6326_double_conversion_allowed();
}

int is__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable);
    }
    return is_array__6326_long_convertion_allowed();
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
        compare_array__6326(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable, nRetValue);
    }
    return array__6326_to_double(pValue, nRetValue);
}

int _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSim_2_P027V1_OBU_sectionlist_int_T_TM_baseline2VTable, nRetValue);
    }
    return array__6326_to_long(pValue, nRetValue);
}

int get__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__6326_signature(pfnStrAppend, pData);
}

int set__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__6326_default_value(pValue);
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
    return array__6309_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__6309(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable);
    }
    return is_array__6309_double_conversion_allowed();
}

int is_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable);
    }
    return is_array__6309_long_convertion_allowed();
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
        compare_array__6309(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array__6309_to_double(pValue, nRetValue);
}

int P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2VTable, nRetValue);
    }
    return array__6309_to_long(pValue, nRetValue);
}

int get_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__6309_signature(pfnStrAppend, pData);
}

int set_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_default_value(void *pValue)
{
    return set_array__6309_default_value(pValue);
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
    return struct__6410_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P003V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimP003V1_trackside_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6410(str, pValue, endptr);
    }
    return nRet;
}

int is_P003V1_trackside_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP003V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__6410_double_conversion_allowed();
}

int is_P003V1_trackside_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP003V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_struct__6410_long_convertion_allowed();
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
        compare_struct__6410(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P003V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimP003V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__6410_to_double(pValue, nRetValue);
}

int P003V1_trackside_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimP003V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return struct__6410_to_long(pValue, nRetValue);
}

int get_P003V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6410_signature(pfnStrAppend, pData);
}

int set_P003V1_trackside_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_struct__6410_default_value(pValue);
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
 ** M_003_int_T_TM_radio_messages 
 ****************************************************************/

struct SimTypeVTable *pSimM_003_int_T_TM_radio_messagesVTable;

int M_003_int_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_003_int_T_TM_radio_messagesVTable != NULL
        && pSimM_003_int_T_TM_radio_messagesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_003_int_T_TM_radio_messagesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__6187_to_string(pValue, pfnStrAppend, pData);
}

int string_to_M_003_int_T_TM_radio_messages(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_003_int_T_TM_radio_messagesVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_003_int_T_TM_radio_messagesVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6187(str, pValue, endptr);
    }
    return nRet;
}

int is_M_003_int_T_TM_radio_messages_double_conversion_allowed()
{
    if (pSimM_003_int_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_003_int_T_TM_radio_messagesVTable);
    }
    return is_struct__6187_double_conversion_allowed();
}

int is_M_003_int_T_TM_radio_messages_long_convertion_allowed()
{
    if (pSimM_003_int_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_003_int_T_TM_radio_messagesVTable);
    }
    return is_struct__6187_long_convertion_allowed();
}

void compare_M_003_int_T_TM_radio_messages(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_003_int_T_TM_radio_messagesVTable != NULL
        && pSimM_003_int_T_TM_radio_messagesVTable->m_version >= Scv612
        && pSimM_003_int_T_TM_radio_messagesVTable->m_pfnCompare != NULL) {
        if (pSimM_003_int_T_TM_radio_messagesVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_003_int_T_TM_radio_messagesVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_003_int_T_TM_radio_messagesVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__6187(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_003_int_T_TM_radio_messages_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_003_int_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_double(pValue, pSimM_003_int_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6187_to_double(pValue, nRetValue);
}

int M_003_int_T_TM_radio_messages_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_003_int_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_long(pValue, pSimM_003_int_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6187_to_long(pValue, nRetValue);
}

int get_M_003_int_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6187_signature(pfnStrAppend, pData);
}

int set_M_003_int_T_TM_radio_messages_default_value(void *pValue)
{
    return set_struct__6187_default_value(pValue);
}

int check_M_003_int_T_TM_radio_messages_string(const char *str, char **endptr)
{
    static M_003_int_T_TM_radio_messages rTemp;
    return string_to_M_003_int_T_TM_radio_messages(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_003_int_T_TM_radio_messages_Utils = {
    M_003_int_T_TM_radio_messages_to_string,
    check_M_003_int_T_TM_radio_messages_string,
    string_to_M_003_int_T_TM_radio_messages,
    is_M_003_int_T_TM_radio_messages_double_conversion_allowed,
    M_003_int_T_TM_radio_messages_to_double,
    is_M_003_int_T_TM_radio_messages_long_convertion_allowed,
    M_003_int_T_TM_radio_messages_to_long,
    compare_M_003_int_T_TM_radio_messages,
    get_M_003_int_T_TM_radio_messages_signature,
    set_M_003_int_T_TM_radio_messages_default_value,
    sizeof(M_003_int_T_TM_radio_messages)
};

/****************************************************************
 ** M_TrackTrain_Radio_T_TM_radio_messages 
 ****************************************************************/

struct SimTypeVTable *pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable;

int M_TrackTrain_Radio_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable != NULL
        && pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__6109_to_string(pValue, pfnStrAppend, pData);
}

int string_to_M_TrackTrain_Radio_T_TM_radio_messages(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6109(str, pValue, endptr);
    }
    return nRet;
}

int is_M_TrackTrain_Radio_T_TM_radio_messages_double_conversion_allowed()
{
    if (pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable);
    }
    return is_struct__6109_double_conversion_allowed();
}

int is_M_TrackTrain_Radio_T_TM_radio_messages_long_convertion_allowed()
{
    if (pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable);
    }
    return is_struct__6109_long_convertion_allowed();
}

void compare_M_TrackTrain_Radio_T_TM_radio_messages(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable != NULL
        && pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable->m_version >= Scv612
        && pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable->m_pfnCompare != NULL) {
        if (pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__6109(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_TrackTrain_Radio_T_TM_radio_messages_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_double(pValue, pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6109_to_double(pValue, nRetValue);
}

int M_TrackTrain_Radio_T_TM_radio_messages_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_long(pValue, pSimM_TrackTrain_Radio_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6109_to_long(pValue, nRetValue);
}

int get_M_TrackTrain_Radio_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6109_signature(pfnStrAppend, pData);
}

int set_M_TrackTrain_Radio_T_TM_radio_messages_default_value(void *pValue)
{
    return set_struct__6109_default_value(pValue);
}

int check_M_TrackTrain_Radio_T_TM_radio_messages_string(const char *str, char **endptr)
{
    static M_TrackTrain_Radio_T_TM_radio_messages rTemp;
    return string_to_M_TrackTrain_Radio_T_TM_radio_messages(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils = {
    M_TrackTrain_Radio_T_TM_radio_messages_to_string,
    check_M_TrackTrain_Radio_T_TM_radio_messages_string,
    string_to_M_TrackTrain_Radio_T_TM_radio_messages,
    is_M_TrackTrain_Radio_T_TM_radio_messages_double_conversion_allowed,
    M_TrackTrain_Radio_T_TM_radio_messages_to_double,
    is_M_TrackTrain_Radio_T_TM_radio_messages_long_convertion_allowed,
    M_TrackTrain_Radio_T_TM_radio_messages_to_long,
    compare_M_TrackTrain_Radio_T_TM_radio_messages,
    get_M_TrackTrain_Radio_T_TM_radio_messages_signature,
    set_M_TrackTrain_Radio_T_TM_radio_messages_default_value,
    sizeof(M_TrackTrain_Radio_T_TM_radio_messages)
};

/****************************************************************
 ** M_015_int_T_TM_radio_messages 
 ****************************************************************/

struct SimTypeVTable *pSimM_015_int_T_TM_radio_messagesVTable;

int M_015_int_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_015_int_T_TM_radio_messagesVTable != NULL
        && pSimM_015_int_T_TM_radio_messagesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_015_int_T_TM_radio_messagesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__6173_to_string(pValue, pfnStrAppend, pData);
}

int string_to_M_015_int_T_TM_radio_messages(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_015_int_T_TM_radio_messagesVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_015_int_T_TM_radio_messagesVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6173(str, pValue, endptr);
    }
    return nRet;
}

int is_M_015_int_T_TM_radio_messages_double_conversion_allowed()
{
    if (pSimM_015_int_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_015_int_T_TM_radio_messagesVTable);
    }
    return is_struct__6173_double_conversion_allowed();
}

int is_M_015_int_T_TM_radio_messages_long_convertion_allowed()
{
    if (pSimM_015_int_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_015_int_T_TM_radio_messagesVTable);
    }
    return is_struct__6173_long_convertion_allowed();
}

void compare_M_015_int_T_TM_radio_messages(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_015_int_T_TM_radio_messagesVTable != NULL
        && pSimM_015_int_T_TM_radio_messagesVTable->m_version >= Scv612
        && pSimM_015_int_T_TM_radio_messagesVTable->m_pfnCompare != NULL) {
        if (pSimM_015_int_T_TM_radio_messagesVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_015_int_T_TM_radio_messagesVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_015_int_T_TM_radio_messagesVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__6173(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_015_int_T_TM_radio_messages_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_015_int_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_double(pValue, pSimM_015_int_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6173_to_double(pValue, nRetValue);
}

int M_015_int_T_TM_radio_messages_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_015_int_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_long(pValue, pSimM_015_int_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6173_to_long(pValue, nRetValue);
}

int get_M_015_int_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6173_signature(pfnStrAppend, pData);
}

int set_M_015_int_T_TM_radio_messages_default_value(void *pValue)
{
    return set_struct__6173_default_value(pValue);
}

int check_M_015_int_T_TM_radio_messages_string(const char *str, char **endptr)
{
    static M_015_int_T_TM_radio_messages rTemp;
    return string_to_M_015_int_T_TM_radio_messages(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_015_int_T_TM_radio_messages_Utils = {
    M_015_int_T_TM_radio_messages_to_string,
    check_M_015_int_T_TM_radio_messages_string,
    string_to_M_015_int_T_TM_radio_messages,
    is_M_015_int_T_TM_radio_messages_double_conversion_allowed,
    M_015_int_T_TM_radio_messages_to_double,
    is_M_015_int_T_TM_radio_messages_long_convertion_allowed,
    M_015_int_T_TM_radio_messages_to_long,
    compare_M_015_int_T_TM_radio_messages,
    get_M_015_int_T_TM_radio_messages_signature,
    set_M_015_int_T_TM_radio_messages_default_value,
    sizeof(M_015_int_T_TM_radio_messages)
};

/****************************************************************
 ** M_032_T_TM_radio_messages 
 ****************************************************************/

struct SimTypeVTable *pSimM_032_T_TM_radio_messagesVTable;

int M_032_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_032_T_TM_radio_messagesVTable != NULL
        && pSimM_032_T_TM_radio_messagesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_032_T_TM_radio_messagesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__6099_to_string(pValue, pfnStrAppend, pData);
}

int string_to_M_032_T_TM_radio_messages(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_032_T_TM_radio_messagesVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_032_T_TM_radio_messagesVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6099(str, pValue, endptr);
    }
    return nRet;
}

int is_M_032_T_TM_radio_messages_double_conversion_allowed()
{
    if (pSimM_032_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_032_T_TM_radio_messagesVTable);
    }
    return is_struct__6099_double_conversion_allowed();
}

int is_M_032_T_TM_radio_messages_long_convertion_allowed()
{
    if (pSimM_032_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_032_T_TM_radio_messagesVTable);
    }
    return is_struct__6099_long_convertion_allowed();
}

void compare_M_032_T_TM_radio_messages(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_032_T_TM_radio_messagesVTable != NULL
        && pSimM_032_T_TM_radio_messagesVTable->m_version >= Scv612
        && pSimM_032_T_TM_radio_messagesVTable->m_pfnCompare != NULL) {
        if (pSimM_032_T_TM_radio_messagesVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_032_T_TM_radio_messagesVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_032_T_TM_radio_messagesVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__6099(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_032_T_TM_radio_messages_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_032_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_double(pValue, pSimM_032_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6099_to_double(pValue, nRetValue);
}

int M_032_T_TM_radio_messages_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_032_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_long(pValue, pSimM_032_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6099_to_long(pValue, nRetValue);
}

int get_M_032_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6099_signature(pfnStrAppend, pData);
}

int set_M_032_T_TM_radio_messages_default_value(void *pValue)
{
    return set_struct__6099_default_value(pValue);
}

int check_M_032_T_TM_radio_messages_string(const char *str, char **endptr)
{
    static M_032_T_TM_radio_messages rTemp;
    return string_to_M_032_T_TM_radio_messages(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_032_T_TM_radio_messages_Utils = {
    M_032_T_TM_radio_messages_to_string,
    check_M_032_T_TM_radio_messages_string,
    string_to_M_032_T_TM_radio_messages,
    is_M_032_T_TM_radio_messages_double_conversion_allowed,
    M_032_T_TM_radio_messages_to_double,
    is_M_032_T_TM_radio_messages_long_convertion_allowed,
    M_032_T_TM_radio_messages_to_long,
    compare_M_032_T_TM_radio_messages,
    get_M_032_T_TM_radio_messages_signature,
    set_M_032_T_TM_radio_messages_default_value,
    sizeof(M_032_T_TM_radio_messages)
};

/****************************************************************
 ** M_024_T_TM_radio_messages 
 ****************************************************************/

struct SimTypeVTable *pSimM_024_T_TM_radio_messagesVTable;

int M_024_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_024_T_TM_radio_messagesVTable != NULL
        && pSimM_024_T_TM_radio_messagesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_024_T_TM_radio_messagesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__6066_to_string(pValue, pfnStrAppend, pData);
}

int string_to_M_024_T_TM_radio_messages(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_024_T_TM_radio_messagesVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_024_T_TM_radio_messagesVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6066(str, pValue, endptr);
    }
    return nRet;
}

int is_M_024_T_TM_radio_messages_double_conversion_allowed()
{
    if (pSimM_024_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_024_T_TM_radio_messagesVTable);
    }
    return is_struct__6066_double_conversion_allowed();
}

int is_M_024_T_TM_radio_messages_long_convertion_allowed()
{
    if (pSimM_024_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_024_T_TM_radio_messagesVTable);
    }
    return is_struct__6066_long_convertion_allowed();
}

void compare_M_024_T_TM_radio_messages(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_024_T_TM_radio_messagesVTable != NULL
        && pSimM_024_T_TM_radio_messagesVTable->m_version >= Scv612
        && pSimM_024_T_TM_radio_messagesVTable->m_pfnCompare != NULL) {
        if (pSimM_024_T_TM_radio_messagesVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_024_T_TM_radio_messagesVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_024_T_TM_radio_messagesVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__6066(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_024_T_TM_radio_messages_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_024_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_double(pValue, pSimM_024_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6066_to_double(pValue, nRetValue);
}

int M_024_T_TM_radio_messages_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_024_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_long(pValue, pSimM_024_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6066_to_long(pValue, nRetValue);
}

int get_M_024_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6066_signature(pfnStrAppend, pData);
}

int set_M_024_T_TM_radio_messages_default_value(void *pValue)
{
    return set_struct__6066_default_value(pValue);
}

int check_M_024_T_TM_radio_messages_string(const char *str, char **endptr)
{
    static M_024_T_TM_radio_messages rTemp;
    return string_to_M_024_T_TM_radio_messages(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_024_T_TM_radio_messages_Utils = {
    M_024_T_TM_radio_messages_to_string,
    check_M_024_T_TM_radio_messages_string,
    string_to_M_024_T_TM_radio_messages,
    is_M_024_T_TM_radio_messages_double_conversion_allowed,
    M_024_T_TM_radio_messages_to_double,
    is_M_024_T_TM_radio_messages_long_convertion_allowed,
    M_024_T_TM_radio_messages_to_long,
    compare_M_024_T_TM_radio_messages,
    get_M_024_T_TM_radio_messages_signature,
    set_M_024_T_TM_radio_messages_default_value,
    sizeof(M_024_T_TM_radio_messages)
};

/****************************************************************
 ** M_015_T_TM_radio_messages 
 ****************************************************************/

struct SimTypeVTable *pSimM_015_T_TM_radio_messagesVTable;

int M_015_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_015_T_TM_radio_messagesVTable != NULL
        && pSimM_015_T_TM_radio_messagesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_015_T_TM_radio_messagesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__6085_to_string(pValue, pfnStrAppend, pData);
}

int string_to_M_015_T_TM_radio_messages(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_015_T_TM_radio_messagesVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_015_T_TM_radio_messagesVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6085(str, pValue, endptr);
    }
    return nRet;
}

int is_M_015_T_TM_radio_messages_double_conversion_allowed()
{
    if (pSimM_015_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_015_T_TM_radio_messagesVTable);
    }
    return is_struct__6085_double_conversion_allowed();
}

int is_M_015_T_TM_radio_messages_long_convertion_allowed()
{
    if (pSimM_015_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_015_T_TM_radio_messagesVTable);
    }
    return is_struct__6085_long_convertion_allowed();
}

void compare_M_015_T_TM_radio_messages(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_015_T_TM_radio_messagesVTable != NULL
        && pSimM_015_T_TM_radio_messagesVTable->m_version >= Scv612
        && pSimM_015_T_TM_radio_messagesVTable->m_pfnCompare != NULL) {
        if (pSimM_015_T_TM_radio_messagesVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_015_T_TM_radio_messagesVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_015_T_TM_radio_messagesVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__6085(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_015_T_TM_radio_messages_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_015_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_double(pValue, pSimM_015_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6085_to_double(pValue, nRetValue);
}

int M_015_T_TM_radio_messages_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_015_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_long(pValue, pSimM_015_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6085_to_long(pValue, nRetValue);
}

int get_M_015_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6085_signature(pfnStrAppend, pData);
}

int set_M_015_T_TM_radio_messages_default_value(void *pValue)
{
    return set_struct__6085_default_value(pValue);
}

int check_M_015_T_TM_radio_messages_string(const char *str, char **endptr)
{
    static M_015_T_TM_radio_messages rTemp;
    return string_to_M_015_T_TM_radio_messages(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_015_T_TM_radio_messages_Utils = {
    M_015_T_TM_radio_messages_to_string,
    check_M_015_T_TM_radio_messages_string,
    string_to_M_015_T_TM_radio_messages,
    is_M_015_T_TM_radio_messages_double_conversion_allowed,
    M_015_T_TM_radio_messages_to_double,
    is_M_015_T_TM_radio_messages_long_convertion_allowed,
    M_015_T_TM_radio_messages_to_long,
    compare_M_015_T_TM_radio_messages,
    get_M_015_T_TM_radio_messages_signature,
    set_M_015_T_TM_radio_messages_default_value,
    sizeof(M_015_T_TM_radio_messages)
};

/****************************************************************
 ** M_008_T_TM_radio_messages 
 ****************************************************************/

struct SimTypeVTable *pSimM_008_T_TM_radio_messagesVTable;

int M_008_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_008_T_TM_radio_messagesVTable != NULL
        && pSimM_008_T_TM_radio_messagesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_008_T_TM_radio_messagesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__6075_to_string(pValue, pfnStrAppend, pData);
}

int string_to_M_008_T_TM_radio_messages(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_008_T_TM_radio_messagesVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_008_T_TM_radio_messagesVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6075(str, pValue, endptr);
    }
    return nRet;
}

int is_M_008_T_TM_radio_messages_double_conversion_allowed()
{
    if (pSimM_008_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_008_T_TM_radio_messagesVTable);
    }
    return is_struct__6075_double_conversion_allowed();
}

int is_M_008_T_TM_radio_messages_long_convertion_allowed()
{
    if (pSimM_008_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_008_T_TM_radio_messagesVTable);
    }
    return is_struct__6075_long_convertion_allowed();
}

void compare_M_008_T_TM_radio_messages(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_008_T_TM_radio_messagesVTable != NULL
        && pSimM_008_T_TM_radio_messagesVTable->m_version >= Scv612
        && pSimM_008_T_TM_radio_messagesVTable->m_pfnCompare != NULL) {
        if (pSimM_008_T_TM_radio_messagesVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_008_T_TM_radio_messagesVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_008_T_TM_radio_messagesVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__6075(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_008_T_TM_radio_messages_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_008_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_double(pValue, pSimM_008_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6075_to_double(pValue, nRetValue);
}

int M_008_T_TM_radio_messages_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_008_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_long(pValue, pSimM_008_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6075_to_long(pValue, nRetValue);
}

int get_M_008_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6075_signature(pfnStrAppend, pData);
}

int set_M_008_T_TM_radio_messages_default_value(void *pValue)
{
    return set_struct__6075_default_value(pValue);
}

int check_M_008_T_TM_radio_messages_string(const char *str, char **endptr)
{
    static M_008_T_TM_radio_messages rTemp;
    return string_to_M_008_T_TM_radio_messages(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_008_T_TM_radio_messages_Utils = {
    M_008_T_TM_radio_messages_to_string,
    check_M_008_T_TM_radio_messages_string,
    string_to_M_008_T_TM_radio_messages,
    is_M_008_T_TM_radio_messages_double_conversion_allowed,
    M_008_T_TM_radio_messages_to_double,
    is_M_008_T_TM_radio_messages_long_convertion_allowed,
    M_008_T_TM_radio_messages_to_long,
    compare_M_008_T_TM_radio_messages,
    get_M_008_T_TM_radio_messages_signature,
    set_M_008_T_TM_radio_messages_default_value,
    sizeof(M_008_T_TM_radio_messages)
};

/****************************************************************
 ** M_003_T_TM_radio_messages 
 ****************************************************************/

struct SimTypeVTable *pSimM_003_T_TM_radio_messagesVTable;

int M_003_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_003_T_TM_radio_messagesVTable != NULL
        && pSimM_003_T_TM_radio_messagesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_003_T_TM_radio_messagesVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__6066_to_string(pValue, pfnStrAppend, pData);
}

int string_to_M_003_T_TM_radio_messages(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_003_T_TM_radio_messagesVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_003_T_TM_radio_messagesVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6066(str, pValue, endptr);
    }
    return nRet;
}

int is_M_003_T_TM_radio_messages_double_conversion_allowed()
{
    if (pSimM_003_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimM_003_T_TM_radio_messagesVTable);
    }
    return is_struct__6066_double_conversion_allowed();
}

int is_M_003_T_TM_radio_messages_long_convertion_allowed()
{
    if (pSimM_003_T_TM_radio_messagesVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimM_003_T_TM_radio_messagesVTable);
    }
    return is_struct__6066_long_convertion_allowed();
}

void compare_M_003_T_TM_radio_messages(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_003_T_TM_radio_messagesVTable != NULL
        && pSimM_003_T_TM_radio_messagesVTable->m_version >= Scv612
        && pSimM_003_T_TM_radio_messagesVTable->m_pfnCompare != NULL) {
        if (pSimM_003_T_TM_radio_messagesVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_003_T_TM_radio_messagesVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_003_T_TM_radio_messagesVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__6066(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_003_T_TM_radio_messages_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_003_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_double(pValue, pSimM_003_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6066_to_double(pValue, nRetValue);
}

int M_003_T_TM_radio_messages_to_long(const void *pValue, long *nRetValue)
{
    if (pSimM_003_T_TM_radio_messagesVTable != NULL) {
        return VTable_to_long(pValue, pSimM_003_T_TM_radio_messagesVTable, nRetValue);
    }
    return struct__6066_to_long(pValue, nRetValue);
}

int get_M_003_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6066_signature(pfnStrAppend, pData);
}

int set_M_003_T_TM_radio_messages_default_value(void *pValue)
{
    return set_struct__6066_default_value(pValue);
}

int check_M_003_T_TM_radio_messages_string(const char *str, char **endptr)
{
    static M_003_T_TM_radio_messages rTemp;
    return string_to_M_003_T_TM_radio_messages(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_003_T_TM_radio_messages_Utils = {
    M_003_T_TM_radio_messages_to_string,
    check_M_003_T_TM_radio_messages_string,
    string_to_M_003_T_TM_radio_messages,
    is_M_003_T_TM_radio_messages_double_conversion_allowed,
    M_003_T_TM_radio_messages_to_double,
    is_M_003_T_TM_radio_messages_long_convertion_allowed,
    M_003_T_TM_radio_messages_to_long,
    compare_M_003_T_TM_radio_messages,
    get_M_003_T_TM_radio_messages_signature,
    set_M_003_T_TM_radio_messages_default_value,
    sizeof(M_003_T_TM_radio_messages)
};

/****************************************************************
 ** R_data_internal_T_InfraLib 
 ****************************************************************/

struct SimTypeVTable *pSimR_data_internal_T_InfraLibVTable;

int R_data_internal_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimR_data_internal_T_InfraLibVTable != NULL
        && pSimR_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimR_data_internal_T_InfraLibVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__6166_to_string(pValue, pfnStrAppend, pData);
}

int string_to_R_data_internal_T_InfraLib(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimR_data_internal_T_InfraLibVTable != NULL) {
        nRet=string_to_VTable(str, pSimR_data_internal_T_InfraLibVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6166(str, pValue, endptr);
    }
    return nRet;
}

int is_R_data_internal_T_InfraLib_double_conversion_allowed()
{
    if (pSimR_data_internal_T_InfraLibVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimR_data_internal_T_InfraLibVTable);
    }
    return is_struct__6166_double_conversion_allowed();
}

int is_R_data_internal_T_InfraLib_long_convertion_allowed()
{
    if (pSimR_data_internal_T_InfraLibVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimR_data_internal_T_InfraLibVTable);
    }
    return is_struct__6166_long_convertion_allowed();
}

void compare_R_data_internal_T_InfraLib(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimR_data_internal_T_InfraLibVTable != NULL
        && pSimR_data_internal_T_InfraLibVTable->m_version >= Scv612
        && pSimR_data_internal_T_InfraLibVTable->m_pfnCompare != NULL) {
        if (pSimR_data_internal_T_InfraLibVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimR_data_internal_T_InfraLibVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimR_data_internal_T_InfraLibVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__6166(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int R_data_internal_T_InfraLib_to_double(const void *pValue, double *nRetValue)
{
    if (pSimR_data_internal_T_InfraLibVTable != NULL) {
        return VTable_to_double(pValue, pSimR_data_internal_T_InfraLibVTable, nRetValue);
    }
    return struct__6166_to_double(pValue, nRetValue);
}

int R_data_internal_T_InfraLib_to_long(const void *pValue, long *nRetValue)
{
    if (pSimR_data_internal_T_InfraLibVTable != NULL) {
        return VTable_to_long(pValue, pSimR_data_internal_T_InfraLibVTable, nRetValue);
    }
    return struct__6166_to_long(pValue, nRetValue);
}

int get_R_data_internal_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6166_signature(pfnStrAppend, pData);
}

int set_R_data_internal_T_InfraLib_default_value(void *pValue)
{
    return set_struct__6166_default_value(pValue);
}

int check_R_data_internal_T_InfraLib_string(const char *str, char **endptr)
{
    static R_data_internal_T_InfraLib rTemp;
    return string_to_R_data_internal_T_InfraLib(str, &rTemp, endptr);
}

SimTypeUtils _Type_R_data_internal_T_InfraLib_Utils = {
    R_data_internal_T_InfraLib_to_string,
    check_R_data_internal_T_InfraLib_string,
    string_to_R_data_internal_T_InfraLib,
    is_R_data_internal_T_InfraLib_double_conversion_allowed,
    R_data_internal_T_InfraLib_to_double,
    is_R_data_internal_T_InfraLib_long_convertion_allowed,
    R_data_internal_T_InfraLib_to_long,
    compare_R_data_internal_T_InfraLib,
    get_R_data_internal_T_InfraLib_signature,
    set_R_data_internal_T_InfraLib_default_value,
    sizeof(R_data_internal_T_InfraLib)
};

/****************************************************************
 ** Radio_TrackTrain_Header_T_Radio_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable;

int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__6048_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__6048(str, pValue, endptr);
    }
    return nRet;
}

int is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_double_conversion_allowed()
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable);
    }
    return is_struct__6048_double_conversion_allowed();
}

int is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_long_convertion_allowed()
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable);
    }
    return is_struct__6048_long_convertion_allowed();
}

void compare_Radio_TrackTrain_Header_T_Radio_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL
        && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_version >= Scv612
        && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__6048(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable, nRetValue);
    }
    return struct__6048_to_double(pValue, nRetValue);
}

int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable, nRetValue);
    }
    return struct__6048_to_long(pValue, nRetValue);
}

int get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__6048_signature(pfnStrAppend, pData);
}

int set_Radio_TrackTrain_Header_T_Radio_Types_Pkg_default_value(void *pValue)
{
    return set_struct__6048_default_value(pValue);
}

int check_Radio_TrackTrain_Header_T_Radio_Types_Pkg_string(const char *str, char **endptr)
{
    static Radio_TrackTrain_Header_T_Radio_Types_Pkg rTemp;
    return string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils = {
    Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_string,
    check_Radio_TrackTrain_Header_T_Radio_Types_Pkg_string,
    string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg,
    is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_double_conversion_allowed,
    Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_double,
    is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_long_convertion_allowed,
    Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_long,
    compare_Radio_TrackTrain_Header_T_Radio_Types_Pkg,
    get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_signature,
    set_Radio_TrackTrain_Header_T_Radio_Types_Pkg_default_value,
    sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg)
};

/****************************************************************
 ** T_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimT_internal_Type_Obu_BasicTypes_PkgVTable;

int T_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_T_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimT_internal_Type_Obu_BasicTypes_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_T_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed()
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_T_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed()
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimT_internal_Type_Obu_BasicTypes_PkgVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_T_internal_Type_Obu_BasicTypes_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL
        && pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv612
        && pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare != NULL) {
        if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int T_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimT_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int T_internal_Type_Obu_BasicTypes_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimT_internal_Type_Obu_BasicTypes_PkgVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_T_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_T_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_T_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr)
{
    static T_internal_Type_Obu_BasicTypes_Pkg rTemp;
    return string_to_T_internal_Type_Obu_BasicTypes_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils = {
    T_internal_Type_Obu_BasicTypes_Pkg_to_string,
    check_T_internal_Type_Obu_BasicTypes_Pkg_string,
    string_to_T_internal_Type_Obu_BasicTypes_Pkg,
    is_T_internal_Type_Obu_BasicTypes_Pkg_double_conversion_allowed,
    T_internal_Type_Obu_BasicTypes_Pkg_to_double,
    is_T_internal_Type_Obu_BasicTypes_Pkg_long_convertion_allowed,
    T_internal_Type_Obu_BasicTypes_Pkg_to_long,
    compare_T_internal_Type_Obu_BasicTypes_Pkg,
    get_T_internal_Type_Obu_BasicTypes_Pkg_signature,
    set_T_internal_Type_Obu_BasicTypes_Pkg_default_value,
    sizeof(T_internal_Type_Obu_BasicTypes_Pkg)
};

#include "C:/Program Files/Esterel Technologies/SCADE R16.1/SCADE/lib/kcg_conv.c"
