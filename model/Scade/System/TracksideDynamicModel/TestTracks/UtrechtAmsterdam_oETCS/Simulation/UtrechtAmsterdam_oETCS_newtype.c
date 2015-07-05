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
 ** struct__1453 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1453VTable;

static SimFieldUtils struct__1453_fields[] = {
    {"valid", offsetof(struct__1453,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__1453,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__1453,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__1453,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__1453,Q_SCALE), &_Type_kcg_int_Utils},
    {"NID_TSR", offsetof(struct__1453,NID_TSR), &_Type_kcg_int_Utils},
    {"D_TSR", offsetof(struct__1453,D_TSR), &_Type_kcg_int_Utils},
    {"L_TSR", offsetof(struct__1453,L_TSR), &_Type_kcg_int_Utils},
    {"Q_FRONT", offsetof(struct__1453,Q_FRONT), &_Type_kcg_int_Utils},
    {"V_TSR", offsetof(struct__1453,V_TSR), &_Type_kcg_int_Utils},
};

int struct__1453_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1453VTable != NULL
        && pSimstruct__1453VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1453VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1453_fields, 10, pfnStrAppend, pData);
}

int string_to_struct__1453(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1453VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1453VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1453_fields, 10, endptr);
    }
    return nRet;
}

int is_struct__1453_double_conversion_allowed()
{
    if (pSimstruct__1453VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__1453VTable);
    }
    return 0;
}

int is_struct__1453_long_convertion_allowed()
{
    if (pSimstruct__1453VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__1453VTable);
    }
    return 0;
}

void compare_struct__1453(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1453VTable != NULL
        && pSimstruct__1453VTable->m_version >= Scv612
        && pSimstruct__1453VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1453VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1453VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1453VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1453_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1453_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1453VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1453VTable, nRetValue);
    }
    return 0;
}

int struct__1453_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__1453VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__1453VTable, nRetValue);
    }
    return 0;
}

int get_struct__1453_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1453_fields, 10, pfnStrAppend, pData);
}

int set_struct__1453_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__1453*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__1453*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__1453*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__1453*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__1453*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__1453*)pValue)->NID_TSR));
    set_kcg_int_default_value(&(((struct__1453*)pValue)->D_TSR));
    set_kcg_int_default_value(&(((struct__1453*)pValue)->L_TSR));
    set_kcg_int_default_value(&(((struct__1453*)pValue)->Q_FRONT));
    set_kcg_int_default_value(&(((struct__1453*)pValue)->V_TSR));
    return 1;
}

int check_struct__1453_string(const char *str, char **endptr)
{
    static struct__1453 rTemp;
    return string_to_struct__1453(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1453_Utils = {
    struct__1453_to_string,
    check_struct__1453_string,
    string_to_struct__1453,
    is_struct__1453_double_conversion_allowed,
    struct__1453_to_double,
    is_struct__1453_long_convertion_allowed,
    struct__1453_to_long,
    compare_struct__1453,
    get_struct__1453_signature,
    set_struct__1453_default_value,
    sizeof(struct__1453)
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
 ** struct__1469 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1469VTable;

static SimFieldUtils struct__1469_fields[] = {
    {"nid_packet", offsetof(struct__1469,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__1469,q_dir), &_Type_Q_DIR_Utils},
    {"valid", offsetof(struct__1469,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(struct__1469,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(struct__1469,endAddress), &_Type_kcg_int_Utils},
};

int struct__1469_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1469VTable != NULL
        && pSimstruct__1469VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1469VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1469_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__1469(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1469VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1469VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1469_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__1469_double_conversion_allowed()
{
    if (pSimstruct__1469VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__1469VTable);
    }
    return 0;
}

int is_struct__1469_long_convertion_allowed()
{
    if (pSimstruct__1469VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__1469VTable);
    }
    return 0;
}

void compare_struct__1469(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1469VTable != NULL
        && pSimstruct__1469VTable->m_version >= Scv612
        && pSimstruct__1469VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1469VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1469VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1469VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1469_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1469_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1469VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1469VTable, nRetValue);
    }
    return 0;
}

int struct__1469_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__1469VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__1469VTable, nRetValue);
    }
    return 0;
}

int get_struct__1469_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1469_fields, 5, pfnStrAppend, pData);
}

int set_struct__1469_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__1469*)pValue)->nid_packet));
    set_Q_DIR_default_value(&(((struct__1469*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((struct__1469*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__1469*)pValue)->startAddress));
    set_kcg_int_default_value(&(((struct__1469*)pValue)->endAddress));
    return 1;
}

int check_struct__1469_string(const char *str, char **endptr)
{
    static struct__1469 rTemp;
    return string_to_struct__1469(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1469_Utils = {
    struct__1469_to_string,
    check_struct__1469_string,
    string_to_struct__1469,
    is_struct__1469_double_conversion_allowed,
    struct__1469_to_double,
    is_struct__1469_long_convertion_allowed,
    struct__1469_to_long,
    compare_struct__1469,
    get_struct__1469_signature,
    set_struct__1469_default_value,
    sizeof(struct__1469)
};

/****************************************************************
 ** array__1477 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1477VTable;

int array__1477_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1477VTable != NULL
        && pSimarray__1477VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1477VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__1469_to_string, 30, sizeof(struct__1469), pfnStrAppend, pData);
}

int string_to_array__1477(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1477VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1477VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__1469_Utils, 30, sizeof(struct__1469), endptr);
    }
    return nRet;
}

int is_array__1477_double_conversion_allowed()
{
    if (pSimarray__1477VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray__1477VTable);
    }
    return 0;
}

int is_array__1477_long_convertion_allowed()
{
    if (pSimarray__1477VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimarray__1477VTable);
    }
    return 0;
}

void compare_array__1477(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1477VTable != NULL
        && pSimarray__1477VTable->m_version >= Scv612
        && pSimarray__1477VTable->m_pfnCompare != NULL) {
        if (pSimarray__1477VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1477VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1477VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__1469, 30, sizeof(struct__1469), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1477_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1477VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1477VTable, nRetValue);
    }
    return 0;
}

int array__1477_to_long(const void *pValue, long *nRetValue)
{
    if (pSimarray__1477VTable != NULL) {
        return VTable_to_long(pValue, pSimarray__1477VTable, nRetValue);
    }
    return 0;
}

int get_array__1477_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__1469_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1477_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_struct__1469_default_value(&((struct__1469*)pValue)[i]);
    return 1;
}

int check_array__1477_string(const char *str, char **endptr)
{
    static array__1477 rTemp;
    return string_to_array__1477(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1477_Utils = {
    array__1477_to_string,
    check_array__1477_string,
    string_to_array__1477,
    is_array__1477_double_conversion_allowed,
    array__1477_to_double,
    is_array__1477_long_convertion_allowed,
    array__1477_to_long,
    compare_array__1477,
    get_array__1477_signature,
    set_array__1477_default_value,
    sizeof(array__1477)
};

/****************************************************************
 ** struct__1480 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1480VTable;

static SimFieldUtils struct__1480_fields[] = {
    {"PacketHeaders", offsetof(struct__1480,PacketHeaders), &_Type_array__1477_Utils},
    {"PacketData", offsetof(struct__1480,PacketData), &_Type_array_int_500_Utils},
};

int struct__1480_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1480VTable != NULL
        && pSimstruct__1480VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1480VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1480_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__1480(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1480VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1480VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1480_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__1480_double_conversion_allowed()
{
    if (pSimstruct__1480VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__1480VTable);
    }
    return 0;
}

int is_struct__1480_long_convertion_allowed()
{
    if (pSimstruct__1480VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__1480VTable);
    }
    return 0;
}

void compare_struct__1480(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1480VTable != NULL
        && pSimstruct__1480VTable->m_version >= Scv612
        && pSimstruct__1480VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1480VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1480VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1480VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1480_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1480_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1480VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1480VTable, nRetValue);
    }
    return 0;
}

int struct__1480_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__1480VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__1480VTable, nRetValue);
    }
    return 0;
}

int get_struct__1480_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1480_fields, 2, pfnStrAppend, pData);
}

int set_struct__1480_default_value(void *pValue)
{
    set_array__1477_default_value(&(((struct__1480*)pValue)->PacketHeaders));
    set_array_int_500_default_value(&(((struct__1480*)pValue)->PacketData));
    return 1;
}

int check_struct__1480_string(const char *str, char **endptr)
{
    static struct__1480 rTemp;
    return string_to_struct__1480(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1480_Utils = {
    struct__1480_to_string,
    check_struct__1480_string,
    string_to_struct__1480,
    is_struct__1480_double_conversion_allowed,
    struct__1480_to_double,
    is_struct__1480_long_convertion_allowed,
    struct__1480_to_long,
    compare_struct__1480,
    get_struct__1480_signature,
    set_struct__1480_default_value,
    sizeof(struct__1480)
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
 ** struct__1488 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1488VTable;

static SimFieldUtils struct__1488_fields[] = {
    {"valid", offsetof(struct__1488,valid), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(struct__1488,q_dir), &_Type_Q_DIR_Utils},
    {"q_scale", offsetof(struct__1488,q_scale), &_Type_Q_SCALE_Utils},
    {"nid_tsr", offsetof(struct__1488,nid_tsr), &_Type_kcg_int_Utils},
    {"d_tsr", offsetof(struct__1488,d_tsr), &_Type_kcg_int_Utils},
    {"l_tsr", offsetof(struct__1488,l_tsr), &_Type_kcg_int_Utils},
    {"q_front", offsetof(struct__1488,q_front), &_Type_Q_FRONT_Utils},
    {"v_tsr", offsetof(struct__1488,v_tsr), &_Type_kcg_int_Utils},
};

int struct__1488_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1488VTable != NULL
        && pSimstruct__1488VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1488VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1488_fields, 8, pfnStrAppend, pData);
}

int string_to_struct__1488(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1488VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1488VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1488_fields, 8, endptr);
    }
    return nRet;
}

int is_struct__1488_double_conversion_allowed()
{
    if (pSimstruct__1488VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstruct__1488VTable);
    }
    return 0;
}

int is_struct__1488_long_convertion_allowed()
{
    if (pSimstruct__1488VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimstruct__1488VTable);
    }
    return 0;
}

void compare_struct__1488(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1488VTable != NULL
        && pSimstruct__1488VTable->m_version >= Scv612
        && pSimstruct__1488VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1488VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1488VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1488VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1488_fields, 8, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1488_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1488VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1488VTable, nRetValue);
    }
    return 0;
}

int struct__1488_to_long(const void *pValue, long *nRetValue)
{
    if (pSimstruct__1488VTable != NULL) {
        return VTable_to_long(pValue, pSimstruct__1488VTable, nRetValue);
    }
    return 0;
}

int get_struct__1488_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1488_fields, 8, pfnStrAppend, pData);
}

int set_struct__1488_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__1488*)pValue)->valid));
    set_Q_DIR_default_value(&(((struct__1488*)pValue)->q_dir));
    set_Q_SCALE_default_value(&(((struct__1488*)pValue)->q_scale));
    set_kcg_int_default_value(&(((struct__1488*)pValue)->nid_tsr));
    set_kcg_int_default_value(&(((struct__1488*)pValue)->d_tsr));
    set_kcg_int_default_value(&(((struct__1488*)pValue)->l_tsr));
    set_Q_FRONT_default_value(&(((struct__1488*)pValue)->q_front));
    set_kcg_int_default_value(&(((struct__1488*)pValue)->v_tsr));
    return 1;
}

int check_struct__1488_string(const char *str, char **endptr)
{
    static struct__1488 rTemp;
    return string_to_struct__1488(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1488_Utils = {
    struct__1488_to_string,
    check_struct__1488_string,
    string_to_struct__1488,
    is_struct__1488_double_conversion_allowed,
    struct__1488_to_double,
    is_struct__1488_long_convertion_allowed,
    struct__1488_to_long,
    compare_struct__1488,
    get_struct__1488_signature,
    set_struct__1488_default_value,
    sizeof(struct__1488)
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
 ** NID_MN 
 ****************************************************************/

struct SimTypeVTable *pSimNID_MNVTable;

int NID_MN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_MNVTable != NULL
        && pSimNID_MNVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_MNVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_MN(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_MNVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_MNVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_MN_double_conversion_allowed()
{
    if (pSimNID_MNVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_MNVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_MN_long_convertion_allowed()
{
    if (pSimNID_MNVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_MNVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_MN(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_MNVTable != NULL
        && pSimNID_MNVTable->m_version >= Scv612
        && pSimNID_MNVTable->m_pfnCompare != NULL) {
        if (pSimNID_MNVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_MNVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_MNVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_MN_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_MNVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_MNVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int NID_MN_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_MNVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_MNVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_NID_MN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_MN_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_MN_string(const char *str, char **endptr)
{
    static NID_MN rTemp;
    return string_to_NID_MN(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_MN_Utils = {
    NID_MN_to_string,
    check_NID_MN_string,
    string_to_NID_MN,
    is_NID_MN_double_conversion_allowed,
    NID_MN_to_double,
    is_NID_MN_long_convertion_allowed,
    NID_MN_to_long,
    compare_NID_MN,
    get_NID_MN_signature,
    set_NID_MN_default_value,
    sizeof(NID_MN)
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
 ** NID_TSR 
 ****************************************************************/

struct SimTypeVTable *pSimNID_TSRVTable;

int NID_TSR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_TSRVTable != NULL
        && pSimNID_TSRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_TSRVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_TSR(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_TSRVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_TSRVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_TSR_double_conversion_allowed()
{
    if (pSimNID_TSRVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimNID_TSRVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_NID_TSR_long_convertion_allowed()
{
    if (pSimNID_TSRVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimNID_TSRVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_NID_TSR(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_TSRVTable != NULL
        && pSimNID_TSRVTable->m_version >= Scv612
        && pSimNID_TSRVTable->m_pfnCompare != NULL) {
        if (pSimNID_TSRVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_TSRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_TSRVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_TSR_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_TSRVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_TSRVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int NID_TSR_to_long(const void *pValue, long *nRetValue)
{
    if (pSimNID_TSRVTable != NULL) {
        return VTable_to_long(pValue, pSimNID_TSRVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_NID_TSR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_TSR_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_TSR_string(const char *str, char **endptr)
{
    static NID_TSR rTemp;
    return string_to_NID_TSR(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_TSR_Utils = {
    NID_TSR_to_string,
    check_NID_TSR_string,
    string_to_NID_TSR,
    is_NID_TSR_double_conversion_allowed,
    NID_TSR_to_double,
    is_NID_TSR_long_convertion_allowed,
    NID_TSR_to_long,
    compare_NID_TSR,
    get_NID_TSR_signature,
    set_NID_TSR_default_value,
    sizeof(NID_TSR)
};

/****************************************************************
 ** D_TSR 
 ****************************************************************/

struct SimTypeVTable *pSimD_TSRVTable;

int D_TSR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_TSRVTable != NULL
        && pSimD_TSRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_TSRVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_TSR(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_TSRVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_TSRVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_TSR_double_conversion_allowed()
{
    if (pSimD_TSRVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimD_TSRVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_D_TSR_long_convertion_allowed()
{
    if (pSimD_TSRVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimD_TSRVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_D_TSR(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_TSRVTable != NULL
        && pSimD_TSRVTable->m_version >= Scv612
        && pSimD_TSRVTable->m_pfnCompare != NULL) {
        if (pSimD_TSRVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_TSRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_TSRVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_TSR_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_TSRVTable != NULL) {
        return VTable_to_double(pValue, pSimD_TSRVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int D_TSR_to_long(const void *pValue, long *nRetValue)
{
    if (pSimD_TSRVTable != NULL) {
        return VTable_to_long(pValue, pSimD_TSRVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_D_TSR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_TSR_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_TSR_string(const char *str, char **endptr)
{
    static D_TSR rTemp;
    return string_to_D_TSR(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_TSR_Utils = {
    D_TSR_to_string,
    check_D_TSR_string,
    string_to_D_TSR,
    is_D_TSR_double_conversion_allowed,
    D_TSR_to_double,
    is_D_TSR_long_convertion_allowed,
    D_TSR_to_long,
    compare_D_TSR,
    get_D_TSR_signature,
    set_D_TSR_default_value,
    sizeof(D_TSR)
};

/****************************************************************
 ** L_TSR 
 ****************************************************************/

struct SimTypeVTable *pSimL_TSRVTable;

int L_TSR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimL_TSRVTable != NULL
        && pSimL_TSRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimL_TSRVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_L_TSR(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimL_TSRVTable != NULL) {
        nRet=string_to_VTable(str, pSimL_TSRVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_L_TSR_double_conversion_allowed()
{
    if (pSimL_TSRVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimL_TSRVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_L_TSR_long_convertion_allowed()
{
    if (pSimL_TSRVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimL_TSRVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_L_TSR(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimL_TSRVTable != NULL
        && pSimL_TSRVTable->m_version >= Scv612
        && pSimL_TSRVTable->m_pfnCompare != NULL) {
        if (pSimL_TSRVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimL_TSRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimL_TSRVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int L_TSR_to_double(const void *pValue, double *nRetValue)
{
    if (pSimL_TSRVTable != NULL) {
        return VTable_to_double(pValue, pSimL_TSRVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int L_TSR_to_long(const void *pValue, long *nRetValue)
{
    if (pSimL_TSRVTable != NULL) {
        return VTable_to_long(pValue, pSimL_TSRVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_L_TSR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_L_TSR_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_L_TSR_string(const char *str, char **endptr)
{
    static L_TSR rTemp;
    return string_to_L_TSR(str, &rTemp, endptr);
}

SimTypeUtils _Type_L_TSR_Utils = {
    L_TSR_to_string,
    check_L_TSR_string,
    string_to_L_TSR,
    is_L_TSR_double_conversion_allowed,
    L_TSR_to_double,
    is_L_TSR_long_convertion_allowed,
    L_TSR_to_long,
    compare_L_TSR,
    get_L_TSR_signature,
    set_L_TSR_default_value,
    sizeof(L_TSR)
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
 ** V_TSR 
 ****************************************************************/

struct SimTypeVTable *pSimV_TSRVTable;

int V_TSR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimV_TSRVTable != NULL
        && pSimV_TSRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimV_TSRVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_V_TSR(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimV_TSRVTable != NULL) {
        nRet=string_to_VTable(str, pSimV_TSRVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_V_TSR_double_conversion_allowed()
{
    if (pSimV_TSRVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimV_TSRVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_V_TSR_long_convertion_allowed()
{
    if (pSimV_TSRVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimV_TSRVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_V_TSR(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimV_TSRVTable != NULL
        && pSimV_TSRVTable->m_version >= Scv612
        && pSimV_TSRVTable->m_pfnCompare != NULL) {
        if (pSimV_TSRVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimV_TSRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimV_TSRVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int V_TSR_to_double(const void *pValue, double *nRetValue)
{
    if (pSimV_TSRVTable != NULL) {
        return VTable_to_double(pValue, pSimV_TSRVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int V_TSR_to_long(const void *pValue, long *nRetValue)
{
    if (pSimV_TSRVTable != NULL) {
        return VTable_to_long(pValue, pSimV_TSRVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_V_TSR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_V_TSR_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_V_TSR_string(const char *str, char **endptr)
{
    static V_TSR rTemp;
    return string_to_V_TSR(str, &rTemp, endptr);
}

SimTypeUtils _Type_V_TSR_Utils = {
    V_TSR_to_string,
    check_V_TSR_string,
    string_to_V_TSR,
    is_V_TSR_double_conversion_allowed,
    V_TSR_to_double,
    is_V_TSR_long_convertion_allowed,
    V_TSR_to_long,
    compare_V_TSR,
    get_V_TSR_signature,
    set_V_TSR_default_value,
    sizeof(V_TSR)
};

/****************************************************************
 ** P065_OBU_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP065_OBU_T_TMVTable;

int P065_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP065_OBU_T_TMVTable != NULL
        && pSimP065_OBU_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP065_OBU_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1488_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P065_OBU_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP065_OBU_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP065_OBU_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1488(str, pValue, endptr);
    }
    return nRet;
}

int is_P065_OBU_T_TM_double_conversion_allowed()
{
    if (pSimP065_OBU_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP065_OBU_T_TMVTable);
    }
    return is_struct__1488_double_conversion_allowed();
}

int is_P065_OBU_T_TM_long_convertion_allowed()
{
    if (pSimP065_OBU_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP065_OBU_T_TMVTable);
    }
    return is_struct__1488_long_convertion_allowed();
}

void compare_P065_OBU_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP065_OBU_T_TMVTable != NULL
        && pSimP065_OBU_T_TMVTable->m_version >= Scv612
        && pSimP065_OBU_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP065_OBU_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP065_OBU_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP065_OBU_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1488(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P065_OBU_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP065_OBU_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP065_OBU_T_TMVTable, nRetValue);
    }
    return struct__1488_to_double(pValue, nRetValue);
}

int P065_OBU_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP065_OBU_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP065_OBU_T_TMVTable, nRetValue);
    }
    return struct__1488_to_long(pValue, nRetValue);
}

int get_P065_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1488_signature(pfnStrAppend, pData);
}

int set_P065_OBU_T_TM_default_value(void *pValue)
{
    return set_struct__1488_default_value(pValue);
}

int check_P065_OBU_T_TM_string(const char *str, char **endptr)
{
    static P065_OBU_T_TM rTemp;
    return string_to_P065_OBU_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P065_OBU_T_TM_Utils = {
    P065_OBU_T_TM_to_string,
    check_P065_OBU_T_TM_string,
    string_to_P065_OBU_T_TM,
    is_P065_OBU_T_TM_double_conversion_allowed,
    P065_OBU_T_TM_to_double,
    is_P065_OBU_T_TM_long_convertion_allowed,
    P065_OBU_T_TM_to_long,
    compare_P065_OBU_T_TM,
    get_P065_OBU_T_TM_signature,
    set_P065_OBU_T_TM_default_value,
    sizeof(P065_OBU_T_TM)
};

/****************************************************************
 ** Array09_TM 
 ****************************************************************/

struct SimTypeVTable *pSimArray09_TMVTable;

int Array09_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimArray09_TMVTable != NULL
        && pSimArray09_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimArray09_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_9_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Array09_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimArray09_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimArray09_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_9(str, pValue, endptr);
    }
    return nRet;
}

int is_Array09_TM_double_conversion_allowed()
{
    if (pSimArray09_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimArray09_TMVTable);
    }
    return is_array_int_9_double_conversion_allowed();
}

int is_Array09_TM_long_convertion_allowed()
{
    if (pSimArray09_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimArray09_TMVTable);
    }
    return is_array_int_9_long_convertion_allowed();
}

void compare_Array09_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimArray09_TMVTable != NULL
        && pSimArray09_TMVTable->m_version >= Scv612
        && pSimArray09_TMVTable->m_pfnCompare != NULL) {
        if (pSimArray09_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimArray09_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimArray09_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_9(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Array09_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimArray09_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimArray09_TMVTable, nRetValue);
    }
    return array_int_9_to_double(pValue, nRetValue);
}

int Array09_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimArray09_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimArray09_TMVTable, nRetValue);
    }
    return array_int_9_to_long(pValue, nRetValue);
}

int get_Array09_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_9_signature(pfnStrAppend, pData);
}

int set_Array09_TM_default_value(void *pValue)
{
    return set_array_int_9_default_value(pValue);
}

int check_Array09_TM_string(const char *str, char **endptr)
{
    static Array09_TM rTemp;
    return string_to_Array09_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_Array09_TM_Utils = {
    Array09_TM_to_string,
    check_Array09_TM_string,
    string_to_Array09_TM,
    is_Array09_TM_double_conversion_allowed,
    Array09_TM_to_double,
    is_Array09_TM_long_convertion_allowed,
    Array09_TM_to_long,
    compare_Array09_TM,
    get_Array09_TM_signature,
    set_Array09_TM_default_value,
    sizeof(Array09_TM)
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
    return struct__1453_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P065_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP065_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP065_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1453(str, pValue, endptr);
    }
    return nRet;
}

int is_P065_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimP065_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimP065_trackside_int_T_TMVTable);
    }
    return is_struct__1453_double_conversion_allowed();
}

int is_P065_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimP065_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimP065_trackside_int_T_TMVTable);
    }
    return is_struct__1453_long_convertion_allowed();
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
        compare_struct__1453(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P065_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP065_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP065_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__1453_to_double(pValue, nRetValue);
}

int P065_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimP065_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimP065_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__1453_to_long(pValue, nRetValue);
}

int get_P065_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1453_signature(pfnStrAppend, pData);
}

int set_P065_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__1453_default_value(pValue);
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
    return struct__1469_to_string(pValue, pfnStrAppend, pData);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1469(str, pValue, endptr);
    }
    return nRet;
}

int is_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__1469_double_conversion_allowed();
}

int is_MetadataElement_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__1469_long_convertion_allowed();
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
        compare_struct__1469(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__1469_to_double(pValue, nRetValue);
}

int MetadataElement_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__1469_to_long(pValue, nRetValue);
}

int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1469_signature(pfnStrAppend, pData);
}

int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__1469_default_value(pValue);
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
    return array__1477_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__1477(str, pValue, endptr);
    }
    return nRet;
}

int is_Metadata_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__1477_double_conversion_allowed();
}

int is_Metadata_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__1477_long_convertion_allowed();
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
        compare_array__1477(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__1477_to_double(pValue, nRetValue);
}

int Metadata_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__1477_to_long(pValue, nRetValue);
}

int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__1477_signature(pfnStrAppend, pData);
}

int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_array__1477_default_value(pValue);
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
    return struct__1480_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1480(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__1480_double_conversion_allowed();
}

int is_CompressedPackets_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__1480_long_convertion_allowed();
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
        compare_struct__1480(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__1480_to_double(pValue, nRetValue);
}

int CompressedPackets_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__1480_to_long(pValue, nRetValue);
}

int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1480_signature(pfnStrAppend, pData);
}

int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__1480_default_value(pValue);
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
