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
 ** UAB_struct__2619 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__2619VTable;

static SimFieldUtils UAB_struct__2619_fields[] = {
    {"L_SECTION", offsetof(UAB_struct__2619,L_SECTION), &_Type_kcg_int_Utils},
    {"Q_SECTIONTIMER", offsetof(UAB_struct__2619,Q_SECTIONTIMER), &_Type_kcg_int_Utils},
    {"T_SECTIONTIMER", offsetof(UAB_struct__2619,T_SECTIONTIMER), &_Type_kcg_int_Utils},
    {"D_SECTIONTIMERSTOPLOC", offsetof(UAB_struct__2619,D_SECTIONTIMERSTOPLOC), &_Type_kcg_int_Utils},
};

int UAB_struct__2619_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__2619VTable != NULL
        && pSimUAB_struct__2619VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__2619VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__2619_fields, 4, pfnStrAppend, pData);
}

int string_to_UAB_struct__2619(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__2619VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__2619VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__2619_fields, 4, endptr);
    }
    return nRet;
}

int is_UAB_struct__2619_double_conversion_allowed()
{
    if (pSimUAB_struct__2619VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__2619VTable);
    }
    return 0;
}

int is_UAB_struct__2619_long_convertion_allowed()
{
    if (pSimUAB_struct__2619VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__2619VTable);
    }
    return 0;
}

void compare_UAB_struct__2619(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__2619VTable != NULL
        && pSimUAB_struct__2619VTable->m_version >= Scv612
        && pSimUAB_struct__2619VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__2619VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__2619VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__2619VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__2619_fields, 4, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__2619_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__2619VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__2619VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__2619_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__2619VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__2619VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__2619_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__2619_fields, 4, pfnStrAppend, pData);
}

int set_UAB_struct__2619_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((UAB_struct__2619*)pValue)->L_SECTION));
    set_kcg_int_default_value(&(((UAB_struct__2619*)pValue)->Q_SECTIONTIMER));
    set_kcg_int_default_value(&(((UAB_struct__2619*)pValue)->T_SECTIONTIMER));
    set_kcg_int_default_value(&(((UAB_struct__2619*)pValue)->D_SECTIONTIMERSTOPLOC));
    return 1;
}

int check_UAB_struct__2619_string(const char *str, char **endptr)
{
    static UAB_struct__2619 rTemp;
    return string_to_UAB_struct__2619(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__2619_Utils = {
    UAB_struct__2619_to_string,
    check_UAB_struct__2619_string,
    string_to_UAB_struct__2619,
    is_UAB_struct__2619_double_conversion_allowed,
    UAB_struct__2619_to_double,
    is_UAB_struct__2619_long_convertion_allowed,
    UAB_struct__2619_to_long,
    compare_UAB_struct__2619,
    get_UAB_struct__2619_signature,
    set_UAB_struct__2619_default_value,
    sizeof(UAB_struct__2619)
};

/****************************************************************
 ** UAB_array__2626 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array__2626VTable;

int UAB_array__2626_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array__2626VTable != NULL
        && pSimUAB_array__2626VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array__2626VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, UAB_struct__2619_to_string, 32, sizeof(UAB_struct__2619), pfnStrAppend, pData);
}

int string_to_UAB_array__2626(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array__2626VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array__2626VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_UAB_struct__2619_Utils, 32, sizeof(UAB_struct__2619), endptr);
    }
    return nRet;
}

int is_UAB_array__2626_double_conversion_allowed()
{
    if (pSimUAB_array__2626VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array__2626VTable);
    }
    return 0;
}

int is_UAB_array__2626_long_convertion_allowed()
{
    if (pSimUAB_array__2626VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array__2626VTable);
    }
    return 0;
}

void compare_UAB_array__2626(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array__2626VTable != NULL
        && pSimUAB_array__2626VTable->m_version >= Scv612
        && pSimUAB_array__2626VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array__2626VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array__2626VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array__2626VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_UAB_struct__2619, 32, sizeof(UAB_struct__2619), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_array__2626_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array__2626VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array__2626VTable, nRetValue);
    }
    return 0;
}

int UAB_array__2626_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array__2626VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array__2626VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array__2626_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_UAB_struct__2619_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_UAB_array__2626_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_UAB_struct__2619_default_value(&((UAB_struct__2619*)pValue)[i]);
    return 1;
}

int check_UAB_array__2626_string(const char *str, char **endptr)
{
    static UAB_array__2626 rTemp;
    return string_to_UAB_array__2626(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array__2626_Utils = {
    UAB_array__2626_to_string,
    check_UAB_array__2626_string,
    string_to_UAB_array__2626,
    is_UAB_array__2626_double_conversion_allowed,
    UAB_array__2626_to_double,
    is_UAB_array__2626_long_convertion_allowed,
    UAB_array__2626_to_long,
    compare_UAB_array__2626,
    get_UAB_array__2626_signature,
    set_UAB_array__2626_default_value,
    sizeof(UAB_array__2626)
};

/****************************************************************
 ** UAB_struct__2629 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__2629VTable;

static SimFieldUtils UAB_struct__2629_fields[] = {
    {"valid", offsetof(UAB_struct__2629,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(UAB_struct__2629,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(UAB_struct__2629,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(UAB_struct__2629,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(UAB_struct__2629,Q_SCALE), &_Type_kcg_int_Utils},
    {"V_LOA", offsetof(UAB_struct__2629,V_LOA), &_Type_kcg_int_Utils},
    {"T_LOA", offsetof(UAB_struct__2629,T_LOA), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(UAB_struct__2629,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(UAB_struct__2629,SECTIONS), &_Type_UAB_array__2626_Utils},
    {"L_ENDSECTION", offsetof(UAB_struct__2629,L_ENDSECTION), &_Type_kcg_int_Utils},
    {"Q_SECTIONTIMER", offsetof(UAB_struct__2629,Q_SECTIONTIMER), &_Type_kcg_int_Utils},
    {"T_SECTIONTIMER", offsetof(UAB_struct__2629,T_SECTIONTIMER), &_Type_kcg_int_Utils},
    {"D_SECTIONTIMERSTOPLOC", offsetof(UAB_struct__2629,D_SECTIONTIMERSTOPLOC), &_Type_kcg_int_Utils},
    {"Q_ENDTIMER", offsetof(UAB_struct__2629,Q_ENDTIMER), &_Type_kcg_int_Utils},
    {"T_ENDTIMER", offsetof(UAB_struct__2629,T_ENDTIMER), &_Type_kcg_int_Utils},
    {"D_ENDTIMERSTARTLOC", offsetof(UAB_struct__2629,D_ENDTIMERSTARTLOC), &_Type_kcg_int_Utils},
    {"Q_DANGERPOINT", offsetof(UAB_struct__2629,Q_DANGERPOINT), &_Type_kcg_int_Utils},
    {"D_DP", offsetof(UAB_struct__2629,D_DP), &_Type_kcg_int_Utils},
    {"V_RELEASEDP", offsetof(UAB_struct__2629,V_RELEASEDP), &_Type_kcg_int_Utils},
    {"Q_OVERLAP", offsetof(UAB_struct__2629,Q_OVERLAP), &_Type_kcg_int_Utils},
    {"D_STARTOL", offsetof(UAB_struct__2629,D_STARTOL), &_Type_kcg_int_Utils},
    {"T_OL", offsetof(UAB_struct__2629,T_OL), &_Type_kcg_int_Utils},
    {"D_OL", offsetof(UAB_struct__2629,D_OL), &_Type_kcg_int_Utils},
    {"V_RELEASEOL", offsetof(UAB_struct__2629,V_RELEASEOL), &_Type_kcg_int_Utils},
};

int UAB_struct__2629_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__2629VTable != NULL
        && pSimUAB_struct__2629VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__2629VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__2629_fields, 24, pfnStrAppend, pData);
}

int string_to_UAB_struct__2629(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__2629VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__2629VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__2629_fields, 24, endptr);
    }
    return nRet;
}

int is_UAB_struct__2629_double_conversion_allowed()
{
    if (pSimUAB_struct__2629VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__2629VTable);
    }
    return 0;
}

int is_UAB_struct__2629_long_convertion_allowed()
{
    if (pSimUAB_struct__2629VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__2629VTable);
    }
    return 0;
}

void compare_UAB_struct__2629(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__2629VTable != NULL
        && pSimUAB_struct__2629VTable->m_version >= Scv612
        && pSimUAB_struct__2629VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__2629VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__2629VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__2629VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__2629_fields, 24, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__2629_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__2629VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__2629VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__2629_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__2629VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__2629VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__2629_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__2629_fields, 24, pfnStrAppend, pData);
}

int set_UAB_struct__2629_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((UAB_struct__2629*)pValue)->valid));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->V_LOA));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->T_LOA));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->N_ITER));
    set_UAB_array__2626_default_value(&(((UAB_struct__2629*)pValue)->SECTIONS));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->L_ENDSECTION));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->Q_SECTIONTIMER));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->T_SECTIONTIMER));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->D_SECTIONTIMERSTOPLOC));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->Q_ENDTIMER));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->T_ENDTIMER));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->D_ENDTIMERSTARTLOC));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->Q_DANGERPOINT));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->D_DP));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->V_RELEASEDP));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->Q_OVERLAP));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->D_STARTOL));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->T_OL));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->D_OL));
    set_kcg_int_default_value(&(((UAB_struct__2629*)pValue)->V_RELEASEOL));
    return 1;
}

int check_UAB_struct__2629_string(const char *str, char **endptr)
{
    static UAB_struct__2629 rTemp;
    return string_to_UAB_struct__2629(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__2629_Utils = {
    UAB_struct__2629_to_string,
    check_UAB_struct__2629_string,
    string_to_UAB_struct__2629,
    is_UAB_struct__2629_double_conversion_allowed,
    UAB_struct__2629_to_double,
    is_UAB_struct__2629_long_convertion_allowed,
    UAB_struct__2629_to_long,
    compare_UAB_struct__2629,
    get_UAB_struct__2629_signature,
    set_UAB_struct__2629_default_value,
    sizeof(UAB_struct__2629)
};

/****************************************************************
 ** UAB_array_int_500 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_500VTable;

int UAB_array_int_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_500VTable != NULL
        && pSimUAB_array_int_500VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_500VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 500, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_UAB_array_int_500(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_500VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_500VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 500, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_UAB_array_int_500_double_conversion_allowed()
{
    if (pSimUAB_array_int_500VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_500VTable);
    }
    return 0;
}

int is_UAB_array_int_500_long_convertion_allowed()
{
    if (pSimUAB_array_int_500VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_500VTable);
    }
    return 0;
}

void compare_UAB_array_int_500(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_500VTable != NULL
        && pSimUAB_array_int_500VTable->m_version >= Scv612
        && pSimUAB_array_int_500VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_500VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_500VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_500VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int UAB_array_int_500_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_500VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_500VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_500_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_500VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_500VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_UAB_array_int_500_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 500; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_500_string(const char *str, char **endptr)
{
    static UAB_array_int_500 rTemp;
    return string_to_UAB_array_int_500(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_500_Utils = {
    UAB_array_int_500_to_string,
    check_UAB_array_int_500_string,
    string_to_UAB_array_int_500,
    is_UAB_array_int_500_double_conversion_allowed,
    UAB_array_int_500_to_double,
    is_UAB_array_int_500_long_convertion_allowed,
    UAB_array_int_500_to_long,
    compare_UAB_array_int_500,
    get_UAB_array_int_500_signature,
    set_UAB_array_int_500_default_value,
    sizeof(UAB_array_int_500)
};

/****************************************************************
 ** UAB_struct__2659 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__2659VTable;

static SimFieldUtils UAB_struct__2659_fields[] = {
    {"nid_packet", offsetof(UAB_struct__2659,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(UAB_struct__2659,q_dir), &_Type_UAB_Q_DIR_Utils},
    {"valid", offsetof(UAB_struct__2659,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(UAB_struct__2659,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(UAB_struct__2659,endAddress), &_Type_kcg_int_Utils},
};

int UAB_struct__2659_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__2659VTable != NULL
        && pSimUAB_struct__2659VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__2659VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__2659_fields, 5, pfnStrAppend, pData);
}

int string_to_UAB_struct__2659(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__2659VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__2659VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__2659_fields, 5, endptr);
    }
    return nRet;
}

int is_UAB_struct__2659_double_conversion_allowed()
{
    if (pSimUAB_struct__2659VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__2659VTable);
    }
    return 0;
}

int is_UAB_struct__2659_long_convertion_allowed()
{
    if (pSimUAB_struct__2659VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__2659VTable);
    }
    return 0;
}

void compare_UAB_struct__2659(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__2659VTable != NULL
        && pSimUAB_struct__2659VTable->m_version >= Scv612
        && pSimUAB_struct__2659VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__2659VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__2659VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__2659VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__2659_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__2659_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__2659VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__2659VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__2659_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__2659VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__2659VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__2659_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__2659_fields, 5, pfnStrAppend, pData);
}

int set_UAB_struct__2659_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((UAB_struct__2659*)pValue)->nid_packet));
    set_UAB_Q_DIR_default_value(&(((UAB_struct__2659*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((UAB_struct__2659*)pValue)->valid));
    set_kcg_int_default_value(&(((UAB_struct__2659*)pValue)->startAddress));
    set_kcg_int_default_value(&(((UAB_struct__2659*)pValue)->endAddress));
    return 1;
}

int check_UAB_struct__2659_string(const char *str, char **endptr)
{
    static UAB_struct__2659 rTemp;
    return string_to_UAB_struct__2659(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__2659_Utils = {
    UAB_struct__2659_to_string,
    check_UAB_struct__2659_string,
    string_to_UAB_struct__2659,
    is_UAB_struct__2659_double_conversion_allowed,
    UAB_struct__2659_to_double,
    is_UAB_struct__2659_long_convertion_allowed,
    UAB_struct__2659_to_long,
    compare_UAB_struct__2659,
    get_UAB_struct__2659_signature,
    set_UAB_struct__2659_default_value,
    sizeof(UAB_struct__2659)
};

/****************************************************************
 ** UAB_array_int_4 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_4VTable;

int UAB_array_int_4_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_4VTable != NULL
        && pSimUAB_array_int_4VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_4VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 4, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_UAB_array_int_4(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_4VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_4VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 4, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_UAB_array_int_4_double_conversion_allowed()
{
    if (pSimUAB_array_int_4VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_4VTable);
    }
    return 0;
}

int is_UAB_array_int_4_long_convertion_allowed()
{
    if (pSimUAB_array_int_4VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_4VTable);
    }
    return 0;
}

void compare_UAB_array_int_4(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_4VTable != NULL
        && pSimUAB_array_int_4VTable->m_version >= Scv612
        && pSimUAB_array_int_4VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_4VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_4VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_4VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int UAB_array_int_4_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_4VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_4VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_4_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_4VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_4VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_4_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_UAB_array_int_4_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 4; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_4_string(const char *str, char **endptr)
{
    static UAB_array_int_4 rTemp;
    return string_to_UAB_array_int_4(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_4_Utils = {
    UAB_array_int_4_to_string,
    check_UAB_array_int_4_string,
    string_to_UAB_array_int_4,
    is_UAB_array_int_4_double_conversion_allowed,
    UAB_array_int_4_to_double,
    is_UAB_array_int_4_long_convertion_allowed,
    UAB_array_int_4_to_long,
    compare_UAB_array_int_4,
    get_UAB_array_int_4_signature,
    set_UAB_array_int_4_default_value,
    sizeof(UAB_array_int_4)
};

/****************************************************************
 ** UAB_array_int_4_32 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_4_32VTable;

int UAB_array_int_4_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_4_32VTable != NULL
        && pSimUAB_array_int_4_32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_4_32VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, UAB_array_int_4_to_string, 32, sizeof(UAB_array_int_4), pfnStrAppend, pData);
}

int string_to_UAB_array_int_4_32(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_4_32VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_4_32VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_UAB_array_int_4_Utils, 32, sizeof(UAB_array_int_4), endptr);
    }
    return nRet;
}

int is_UAB_array_int_4_32_double_conversion_allowed()
{
    if (pSimUAB_array_int_4_32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_4_32VTable);
    }
    return 0;
}

int is_UAB_array_int_4_32_long_convertion_allowed()
{
    if (pSimUAB_array_int_4_32VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_4_32VTable);
    }
    return 0;
}

void compare_UAB_array_int_4_32(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_4_32VTable != NULL
        && pSimUAB_array_int_4_32VTable->m_version >= Scv612
        && pSimUAB_array_int_4_32VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_4_32VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_4_32VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_4_32VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_UAB_array_int_4, 32, sizeof(UAB_array_int_4), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_array_int_4_32_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_4_32VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_4_32VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_4_32_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_4_32VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_4_32VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_4_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_UAB_array_int_4_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_UAB_array_int_4_32_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_UAB_array_int_4_default_value(&((UAB_array_int_4*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_4_32_string(const char *str, char **endptr)
{
    static UAB_array_int_4_32 rTemp;
    return string_to_UAB_array_int_4_32(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_4_32_Utils = {
    UAB_array_int_4_32_to_string,
    check_UAB_array_int_4_32_string,
    string_to_UAB_array_int_4_32,
    is_UAB_array_int_4_32_double_conversion_allowed,
    UAB_array_int_4_32_to_double,
    is_UAB_array_int_4_32_long_convertion_allowed,
    UAB_array_int_4_32_to_long,
    compare_UAB_array_int_4_32,
    get_UAB_array_int_4_32_signature,
    set_UAB_array_int_4_32_default_value,
    sizeof(UAB_array_int_4_32)
};

/****************************************************************
 ** UAB_array_int_128 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_128VTable;

int UAB_array_int_128_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_128VTable != NULL
        && pSimUAB_array_int_128VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_128VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 128, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_UAB_array_int_128(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_128VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_128VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 128, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_UAB_array_int_128_double_conversion_allowed()
{
    if (pSimUAB_array_int_128VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_128VTable);
    }
    return 0;
}

int is_UAB_array_int_128_long_convertion_allowed()
{
    if (pSimUAB_array_int_128VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_128VTable);
    }
    return 0;
}

void compare_UAB_array_int_128(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_128VTable != NULL
        && pSimUAB_array_int_128VTable->m_version >= Scv612
        && pSimUAB_array_int_128VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_128VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_128VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_128VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int UAB_array_int_128_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_128VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_128VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_128_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_128VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_128VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_128_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_UAB_array_int_128_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 128; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_128_string(const char *str, char **endptr)
{
    static UAB_array_int_128 rTemp;
    return string_to_UAB_array_int_128(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_128_Utils = {
    UAB_array_int_128_to_string,
    check_UAB_array_int_128_string,
    string_to_UAB_array_int_128,
    is_UAB_array_int_128_double_conversion_allowed,
    UAB_array_int_128_to_double,
    is_UAB_array_int_128_long_convertion_allowed,
    UAB_array_int_128_to_long,
    compare_UAB_array_int_128,
    get_UAB_array_int_128_signature,
    set_UAB_array_int_128_default_value,
    sizeof(UAB_array_int_128)
};

/****************************************************************
 ** UAB_array__2676 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array__2676VTable;

int UAB_array__2676_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array__2676VTable != NULL
        && pSimUAB_array__2676VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array__2676VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, UAB_struct__2659_to_string, 30, sizeof(UAB_struct__2659), pfnStrAppend, pData);
}

int string_to_UAB_array__2676(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array__2676VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array__2676VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_UAB_struct__2659_Utils, 30, sizeof(UAB_struct__2659), endptr);
    }
    return nRet;
}

int is_UAB_array__2676_double_conversion_allowed()
{
    if (pSimUAB_array__2676VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array__2676VTable);
    }
    return 0;
}

int is_UAB_array__2676_long_convertion_allowed()
{
    if (pSimUAB_array__2676VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array__2676VTable);
    }
    return 0;
}

void compare_UAB_array__2676(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array__2676VTable != NULL
        && pSimUAB_array__2676VTable->m_version >= Scv612
        && pSimUAB_array__2676VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array__2676VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array__2676VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array__2676VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_UAB_struct__2659, 30, sizeof(UAB_struct__2659), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_array__2676_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array__2676VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array__2676VTable, nRetValue);
    }
    return 0;
}

int UAB_array__2676_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array__2676VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array__2676VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array__2676_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_UAB_struct__2659_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_UAB_array__2676_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_UAB_struct__2659_default_value(&((UAB_struct__2659*)pValue)[i]);
    return 1;
}

int check_UAB_array__2676_string(const char *str, char **endptr)
{
    static UAB_array__2676 rTemp;
    return string_to_UAB_array__2676(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array__2676_Utils = {
    UAB_array__2676_to_string,
    check_UAB_array__2676_string,
    string_to_UAB_array__2676,
    is_UAB_array__2676_double_conversion_allowed,
    UAB_array__2676_to_double,
    is_UAB_array__2676_long_convertion_allowed,
    UAB_array__2676_to_long,
    compare_UAB_array__2676,
    get_UAB_array__2676_signature,
    set_UAB_array__2676_default_value,
    sizeof(UAB_array__2676)
};

/****************************************************************
 ** UAB_struct__2679 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__2679VTable;

static SimFieldUtils UAB_struct__2679_fields[] = {
    {"PacketHeaders", offsetof(UAB_struct__2679,PacketHeaders), &_Type_UAB_array__2676_Utils},
    {"PacketData", offsetof(UAB_struct__2679,PacketData), &_Type_UAB_array_int_500_Utils},
};

int UAB_struct__2679_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__2679VTable != NULL
        && pSimUAB_struct__2679VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__2679VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__2679_fields, 2, pfnStrAppend, pData);
}

int string_to_UAB_struct__2679(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__2679VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__2679VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__2679_fields, 2, endptr);
    }
    return nRet;
}

int is_UAB_struct__2679_double_conversion_allowed()
{
    if (pSimUAB_struct__2679VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__2679VTable);
    }
    return 0;
}

int is_UAB_struct__2679_long_convertion_allowed()
{
    if (pSimUAB_struct__2679VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__2679VTable);
    }
    return 0;
}

void compare_UAB_struct__2679(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__2679VTable != NULL
        && pSimUAB_struct__2679VTable->m_version >= Scv612
        && pSimUAB_struct__2679VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__2679VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__2679VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__2679VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__2679_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__2679_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__2679VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__2679VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__2679_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__2679VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__2679VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__2679_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__2679_fields, 2, pfnStrAppend, pData);
}

int set_UAB_struct__2679_default_value(void *pValue)
{
    set_UAB_array__2676_default_value(&(((UAB_struct__2679*)pValue)->PacketHeaders));
    set_UAB_array_int_500_default_value(&(((UAB_struct__2679*)pValue)->PacketData));
    return 1;
}

int check_UAB_struct__2679_string(const char *str, char **endptr)
{
    static UAB_struct__2679 rTemp;
    return string_to_UAB_struct__2679(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__2679_Utils = {
    UAB_struct__2679_to_string,
    check_UAB_struct__2679_string,
    string_to_UAB_struct__2679,
    is_UAB_struct__2679_double_conversion_allowed,
    UAB_struct__2679_to_double,
    is_UAB_struct__2679_long_convertion_allowed,
    UAB_struct__2679_to_long,
    compare_UAB_struct__2679,
    get_UAB_struct__2679_signature,
    set_UAB_struct__2679_default_value,
    sizeof(UAB_struct__2679)
};

/****************************************************************
 ** UAB_struct__2684 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__2684VTable;

static SimFieldUtils UAB_struct__2684_fields[] = {
    {"valid", offsetof(UAB_struct__2684,valid), &_Type_kcg_bool_Utils},
    {"l_section", offsetof(UAB_struct__2684,l_section), &_Type_kcg_int_Utils},
    {"q_sectiontimer", offsetof(UAB_struct__2684,q_sectiontimer), &_Type_UAB_Q_SECTIONTIMER_Utils},
    {"t_sectiontimer", offsetof(UAB_struct__2684,t_sectiontimer), &_Type_kcg_int_Utils},
    {"d_sectiontimerstoploc", offsetof(UAB_struct__2684,d_sectiontimerstoploc), &_Type_kcg_int_Utils},
};

int UAB_struct__2684_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__2684VTable != NULL
        && pSimUAB_struct__2684VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__2684VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__2684_fields, 5, pfnStrAppend, pData);
}

int string_to_UAB_struct__2684(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__2684VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__2684VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__2684_fields, 5, endptr);
    }
    return nRet;
}

int is_UAB_struct__2684_double_conversion_allowed()
{
    if (pSimUAB_struct__2684VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__2684VTable);
    }
    return 0;
}

int is_UAB_struct__2684_long_convertion_allowed()
{
    if (pSimUAB_struct__2684VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__2684VTable);
    }
    return 0;
}

void compare_UAB_struct__2684(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__2684VTable != NULL
        && pSimUAB_struct__2684VTable->m_version >= Scv612
        && pSimUAB_struct__2684VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__2684VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__2684VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__2684VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__2684_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__2684_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__2684VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__2684VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__2684_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__2684VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__2684VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__2684_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__2684_fields, 5, pfnStrAppend, pData);
}

int set_UAB_struct__2684_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((UAB_struct__2684*)pValue)->valid));
    set_kcg_int_default_value(&(((UAB_struct__2684*)pValue)->l_section));
    set_UAB_Q_SECTIONTIMER_default_value(&(((UAB_struct__2684*)pValue)->q_sectiontimer));
    set_kcg_int_default_value(&(((UAB_struct__2684*)pValue)->t_sectiontimer));
    set_kcg_int_default_value(&(((UAB_struct__2684*)pValue)->d_sectiontimerstoploc));
    return 1;
}

int check_UAB_struct__2684_string(const char *str, char **endptr)
{
    static UAB_struct__2684 rTemp;
    return string_to_UAB_struct__2684(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__2684_Utils = {
    UAB_struct__2684_to_string,
    check_UAB_struct__2684_string,
    string_to_UAB_struct__2684,
    is_UAB_struct__2684_double_conversion_allowed,
    UAB_struct__2684_to_double,
    is_UAB_struct__2684_long_convertion_allowed,
    UAB_struct__2684_to_long,
    compare_UAB_struct__2684,
    get_UAB_struct__2684_signature,
    set_UAB_struct__2684_default_value,
    sizeof(UAB_struct__2684)
};

/****************************************************************
 ** UAB_array__2692 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array__2692VTable;

int UAB_array__2692_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array__2692VTable != NULL
        && pSimUAB_array__2692VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array__2692VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, UAB_struct__2684_to_string, 32, sizeof(UAB_struct__2684), pfnStrAppend, pData);
}

int string_to_UAB_array__2692(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array__2692VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array__2692VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_UAB_struct__2684_Utils, 32, sizeof(UAB_struct__2684), endptr);
    }
    return nRet;
}

int is_UAB_array__2692_double_conversion_allowed()
{
    if (pSimUAB_array__2692VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array__2692VTable);
    }
    return 0;
}

int is_UAB_array__2692_long_convertion_allowed()
{
    if (pSimUAB_array__2692VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array__2692VTable);
    }
    return 0;
}

void compare_UAB_array__2692(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array__2692VTable != NULL
        && pSimUAB_array__2692VTable->m_version >= Scv612
        && pSimUAB_array__2692VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array__2692VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array__2692VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array__2692VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_UAB_struct__2684, 32, sizeof(UAB_struct__2684), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_array__2692_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array__2692VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array__2692VTable, nRetValue);
    }
    return 0;
}

int UAB_array__2692_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array__2692VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array__2692VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array__2692_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_UAB_struct__2684_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_UAB_array__2692_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_UAB_struct__2684_default_value(&((UAB_struct__2684*)pValue)[i]);
    return 1;
}

int check_UAB_array__2692_string(const char *str, char **endptr)
{
    static UAB_array__2692 rTemp;
    return string_to_UAB_array__2692(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array__2692_Utils = {
    UAB_array__2692_to_string,
    check_UAB_array__2692_string,
    string_to_UAB_array__2692,
    is_UAB_array__2692_double_conversion_allowed,
    UAB_array__2692_to_double,
    is_UAB_array__2692_long_convertion_allowed,
    UAB_array__2692_to_long,
    compare_UAB_array__2692,
    get_UAB_array__2692_signature,
    set_UAB_array__2692_default_value,
    sizeof(UAB_array__2692)
};

/****************************************************************
 ** UAB_struct__2695 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__2695VTable;

static SimFieldUtils UAB_struct__2695_fields[] = {
    {"valid", offsetof(UAB_struct__2695,valid), &_Type_kcg_bool_Utils},
    {"q_dir", offsetof(UAB_struct__2695,q_dir), &_Type_UAB_Q_DIR_Utils},
    {"q_scale", offsetof(UAB_struct__2695,q_scale), &_Type_UAB_Q_SCALE_Utils},
    {"v_loa", offsetof(UAB_struct__2695,v_loa), &_Type_kcg_int_Utils},
    {"t_loa", offsetof(UAB_struct__2695,t_loa), &_Type_kcg_int_Utils},
    {"n_iter", offsetof(UAB_struct__2695,n_iter), &_Type_kcg_int_Utils},
    {"sections", offsetof(UAB_struct__2695,sections), &_Type_UAB_array__2692_Utils},
    {"l_endsection", offsetof(UAB_struct__2695,l_endsection), &_Type_kcg_int_Utils},
    {"q_sectiontimer", offsetof(UAB_struct__2695,q_sectiontimer), &_Type_UAB_Q_SECTIONTIMER_Utils},
    {"t_sectiontimer", offsetof(UAB_struct__2695,t_sectiontimer), &_Type_kcg_int_Utils},
    {"d_sectiontimerstoploc", offsetof(UAB_struct__2695,d_sectiontimerstoploc), &_Type_kcg_int_Utils},
    {"q_endtimer", offsetof(UAB_struct__2695,q_endtimer), &_Type_UAB_Q_ENDTIMER_Utils},
    {"t_endtimer", offsetof(UAB_struct__2695,t_endtimer), &_Type_kcg_int_Utils},
    {"d_endtimerstartloc", offsetof(UAB_struct__2695,d_endtimerstartloc), &_Type_kcg_int_Utils},
    {"q_dangerpoint", offsetof(UAB_struct__2695,q_dangerpoint), &_Type_UAB_Q_DANGERPOINT_Utils},
    {"d_dp", offsetof(UAB_struct__2695,d_dp), &_Type_kcg_int_Utils},
    {"v_releasedp", offsetof(UAB_struct__2695,v_releasedp), &_Type_kcg_int_Utils},
    {"q_overlap", offsetof(UAB_struct__2695,q_overlap), &_Type_UAB_Q_OVERLAP_Utils},
    {"d_startol", offsetof(UAB_struct__2695,d_startol), &_Type_kcg_int_Utils},
    {"t_ol", offsetof(UAB_struct__2695,t_ol), &_Type_kcg_int_Utils},
    {"d_ol", offsetof(UAB_struct__2695,d_ol), &_Type_kcg_int_Utils},
    {"v_releaseol", offsetof(UAB_struct__2695,v_releaseol), &_Type_kcg_int_Utils},
};

int UAB_struct__2695_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__2695VTable != NULL
        && pSimUAB_struct__2695VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__2695VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__2695_fields, 22, pfnStrAppend, pData);
}

int string_to_UAB_struct__2695(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__2695VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__2695VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__2695_fields, 22, endptr);
    }
    return nRet;
}

int is_UAB_struct__2695_double_conversion_allowed()
{
    if (pSimUAB_struct__2695VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__2695VTable);
    }
    return 0;
}

int is_UAB_struct__2695_long_convertion_allowed()
{
    if (pSimUAB_struct__2695VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__2695VTable);
    }
    return 0;
}

void compare_UAB_struct__2695(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__2695VTable != NULL
        && pSimUAB_struct__2695VTable->m_version >= Scv612
        && pSimUAB_struct__2695VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__2695VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__2695VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__2695VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__2695_fields, 22, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__2695_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__2695VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__2695VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__2695_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__2695VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__2695VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__2695_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__2695_fields, 22, pfnStrAppend, pData);
}

int set_UAB_struct__2695_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((UAB_struct__2695*)pValue)->valid));
    set_UAB_Q_DIR_default_value(&(((UAB_struct__2695*)pValue)->q_dir));
    set_UAB_Q_SCALE_default_value(&(((UAB_struct__2695*)pValue)->q_scale));
    set_kcg_int_default_value(&(((UAB_struct__2695*)pValue)->v_loa));
    set_kcg_int_default_value(&(((UAB_struct__2695*)pValue)->t_loa));
    set_kcg_int_default_value(&(((UAB_struct__2695*)pValue)->n_iter));
    set_UAB_array__2692_default_value(&(((UAB_struct__2695*)pValue)->sections));
    set_kcg_int_default_value(&(((UAB_struct__2695*)pValue)->l_endsection));
    set_UAB_Q_SECTIONTIMER_default_value(&(((UAB_struct__2695*)pValue)->q_sectiontimer));
    set_kcg_int_default_value(&(((UAB_struct__2695*)pValue)->t_sectiontimer));
    set_kcg_int_default_value(&(((UAB_struct__2695*)pValue)->d_sectiontimerstoploc));
    set_UAB_Q_ENDTIMER_default_value(&(((UAB_struct__2695*)pValue)->q_endtimer));
    set_kcg_int_default_value(&(((UAB_struct__2695*)pValue)->t_endtimer));
    set_kcg_int_default_value(&(((UAB_struct__2695*)pValue)->d_endtimerstartloc));
    set_UAB_Q_DANGERPOINT_default_value(&(((UAB_struct__2695*)pValue)->q_dangerpoint));
    set_kcg_int_default_value(&(((UAB_struct__2695*)pValue)->d_dp));
    set_kcg_int_default_value(&(((UAB_struct__2695*)pValue)->v_releasedp));
    set_UAB_Q_OVERLAP_default_value(&(((UAB_struct__2695*)pValue)->q_overlap));
    set_kcg_int_default_value(&(((UAB_struct__2695*)pValue)->d_startol));
    set_kcg_int_default_value(&(((UAB_struct__2695*)pValue)->t_ol));
    set_kcg_int_default_value(&(((UAB_struct__2695*)pValue)->d_ol));
    set_kcg_int_default_value(&(((UAB_struct__2695*)pValue)->v_releaseol));
    return 1;
}

int check_UAB_struct__2695_string(const char *str, char **endptr)
{
    static UAB_struct__2695 rTemp;
    return string_to_UAB_struct__2695(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__2695_Utils = {
    UAB_struct__2695_to_string,
    check_UAB_struct__2695_string,
    string_to_UAB_struct__2695,
    is_UAB_struct__2695_double_conversion_allowed,
    UAB_struct__2695_to_double,
    is_UAB_struct__2695_long_convertion_allowed,
    UAB_struct__2695_to_long,
    compare_UAB_struct__2695,
    get_UAB_struct__2695_signature,
    set_UAB_struct__2695_default_value,
    sizeof(UAB_struct__2695)
};

/****************************************************************
 ** UAB_array_int_15 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_15VTable;

int UAB_array_int_15_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_15VTable != NULL
        && pSimUAB_array_int_15VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_15VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 15, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_UAB_array_int_15(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_15VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_15VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 15, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_UAB_array_int_15_double_conversion_allowed()
{
    if (pSimUAB_array_int_15VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_15VTable);
    }
    return 0;
}

int is_UAB_array_int_15_long_convertion_allowed()
{
    if (pSimUAB_array_int_15VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_15VTable);
    }
    return 0;
}

void compare_UAB_array_int_15(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_15VTable != NULL
        && pSimUAB_array_int_15VTable->m_version >= Scv612
        && pSimUAB_array_int_15VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_15VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_15VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_15VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int UAB_array_int_15_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_15VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_15VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_15_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_15VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_15VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_15_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_UAB_array_int_15_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 15; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_15_string(const char *str, char **endptr)
{
    static UAB_array_int_15 rTemp;
    return string_to_UAB_array_int_15(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_15_Utils = {
    UAB_array_int_15_to_string,
    check_UAB_array_int_15_string,
    string_to_UAB_array_int_15,
    is_UAB_array_int_15_double_conversion_allowed,
    UAB_array_int_15_to_double,
    is_UAB_array_int_15_long_convertion_allowed,
    UAB_array_int_15_to_long,
    compare_UAB_array_int_15,
    get_UAB_array_int_15_signature,
    set_UAB_array_int_15_default_value,
    sizeof(UAB_array_int_15)
};

/****************************************************************
 ** UAB_array_int_6 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_6VTable;

int UAB_array_int_6_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_6VTable != NULL
        && pSimUAB_array_int_6VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_6VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 6, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_UAB_array_int_6(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_6VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_6VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 6, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_UAB_array_int_6_double_conversion_allowed()
{
    if (pSimUAB_array_int_6VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_6VTable);
    }
    return 0;
}

int is_UAB_array_int_6_long_convertion_allowed()
{
    if (pSimUAB_array_int_6VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_6VTable);
    }
    return 0;
}

void compare_UAB_array_int_6(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_6VTable != NULL
        && pSimUAB_array_int_6VTable->m_version >= Scv612
        && pSimUAB_array_int_6VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_6VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_6VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_6VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int UAB_array_int_6_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_6VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_6VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_6_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_6VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_6VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_6_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_UAB_array_int_6_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 6; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_6_string(const char *str, char **endptr)
{
    static UAB_array_int_6 rTemp;
    return string_to_UAB_array_int_6(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_6_Utils = {
    UAB_array_int_6_to_string,
    check_UAB_array_int_6_string,
    string_to_UAB_array_int_6,
    is_UAB_array_int_6_double_conversion_allowed,
    UAB_array_int_6_to_double,
    is_UAB_array_int_6_long_convertion_allowed,
    UAB_array_int_6_to_long,
    compare_UAB_array_int_6,
    get_UAB_array_int_6_signature,
    set_UAB_array_int_6_default_value,
    sizeof(UAB_array_int_6)
};

/****************************************************************
 ** UAB_array_int_350 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_350VTable;

int UAB_array_int_350_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_350VTable != NULL
        && pSimUAB_array_int_350VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_350VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 350, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_UAB_array_int_350(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_350VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_350VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 350, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_UAB_array_int_350_double_conversion_allowed()
{
    if (pSimUAB_array_int_350VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_350VTable);
    }
    return 0;
}

int is_UAB_array_int_350_long_convertion_allowed()
{
    if (pSimUAB_array_int_350VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_350VTable);
    }
    return 0;
}

void compare_UAB_array_int_350(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_350VTable != NULL
        && pSimUAB_array_int_350VTable->m_version >= Scv612
        && pSimUAB_array_int_350VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_350VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_350VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_350VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int UAB_array_int_350_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_350VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_350VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_350_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_350VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_350VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_350_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_UAB_array_int_350_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 350; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_350_string(const char *str, char **endptr)
{
    static UAB_array_int_350 rTemp;
    return string_to_UAB_array_int_350(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_350_Utils = {
    UAB_array_int_350_to_string,
    check_UAB_array_int_350_string,
    string_to_UAB_array_int_350,
    is_UAB_array_int_350_double_conversion_allowed,
    UAB_array_int_350_to_double,
    is_UAB_array_int_350_long_convertion_allowed,
    UAB_array_int_350_to_long,
    compare_UAB_array_int_350,
    get_UAB_array_int_350_signature,
    set_UAB_array_int_350_default_value,
    sizeof(UAB_array_int_350)
};

/****************************************************************
 ** UAB_NID_PACKET 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_NID_PACKETVTable;

int UAB_NID_PACKET_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_NID_PACKETVTable != NULL
        && pSimUAB_NID_PACKETVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_NID_PACKETVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_NID_PACKET(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_NID_PACKETVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_NID_PACKETVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_NID_PACKET_double_conversion_allowed()
{
    if (pSimUAB_NID_PACKETVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_NID_PACKETVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_NID_PACKET_long_convertion_allowed()
{
    if (pSimUAB_NID_PACKETVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_NID_PACKETVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_NID_PACKET(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_NID_PACKETVTable != NULL
        && pSimUAB_NID_PACKETVTable->m_version >= Scv612
        && pSimUAB_NID_PACKETVTable->m_pfnCompare != NULL) {
        if (pSimUAB_NID_PACKETVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_NID_PACKETVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_NID_PACKETVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_NID_PACKET_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_NID_PACKETVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_NID_PACKETVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_NID_PACKET_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_NID_PACKETVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_NID_PACKETVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_NID_PACKET_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_NID_PACKET_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_NID_PACKET_string(const char *str, char **endptr)
{
    static UAB_NID_PACKET rTemp;
    return string_to_UAB_NID_PACKET(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_NID_PACKET_Utils = {
    UAB_NID_PACKET_to_string,
    check_UAB_NID_PACKET_string,
    string_to_UAB_NID_PACKET,
    is_UAB_NID_PACKET_double_conversion_allowed,
    UAB_NID_PACKET_to_double,
    is_UAB_NID_PACKET_long_convertion_allowed,
    UAB_NID_PACKET_to_long,
    compare_UAB_NID_PACKET,
    get_UAB_NID_PACKET_signature,
    set_UAB_NID_PACKET_default_value,
    sizeof(UAB_NID_PACKET)
};

/****************************************************************
 ** UAB_Q_DIR 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_Q_DIRVTable;

static SimEnumValUtils UAB_Q_DIR_values[] = {
    { "Q_DIR_Reverse", UAB_Q_DIR_Reverse},
    { "Q_DIR_Reverse", UAB_Q_DIR_Reverse},
    { "Q_DIR_Nominal", UAB_Q_DIR_Nominal},
    { "Q_DIR_Nominal", UAB_Q_DIR_Nominal},
    { "Q_DIR_Both_directions", UAB_Q_DIR_Both_directions},
    { "Q_DIR_Both_directions", UAB_Q_DIR_Both_directions},
};
const int UAB_Q_DIR_nb_values = 6;

int UAB_Q_DIR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_Q_DIRVTable != NULL
        && pSimUAB_Q_DIRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_Q_DIRVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(UAB_Q_DIR*)pValue, UAB_Q_DIR_values, UAB_Q_DIR_nb_values, pfnStrAppend, pData); 
}

int string_to_UAB_Q_DIR(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_Q_DIRVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_Q_DIRVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, UAB_Q_DIR_values, UAB_Q_DIR_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(UAB_Q_DIR*)pValue = nTemp;
    }
    return nRet;
}

int is_UAB_Q_DIR_double_conversion_allowed()
{
    if (pSimUAB_Q_DIRVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_Q_DIRVTable);
    }
    return 1;
}

int is_UAB_Q_DIR_long_convertion_allowed()
{
    if (pSimUAB_Q_DIRVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_Q_DIRVTable);
    }
    return 1;
}

void compare_UAB_Q_DIR(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_Q_DIRVTable != NULL
        && pSimUAB_Q_DIRVTable->m_version >= Scv612
        && pSimUAB_Q_DIRVTable->m_pfnCompare != NULL) {
        if (pSimUAB_Q_DIRVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_Q_DIRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_Q_DIRVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(UAB_Q_DIR*)pValue1), (int)(*(UAB_Q_DIR*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_Q_DIR_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_Q_DIRVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_Q_DIRVTable, nRetValue);
    }
    *nRetValue = (double)*((UAB_Q_DIR*)pValue);
    return 1;
}

int UAB_Q_DIR_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_Q_DIRVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_Q_DIRVTable, nRetValue);
    }
    *nRetValue = (long)*((UAB_Q_DIR*)pValue);
    return 1;
}

int get_UAB_Q_DIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(UAB_Q_DIR_values, UAB_Q_DIR_nb_values, pfnStrAppend, pData);
}

int set_UAB_Q_DIR_default_value(void *pValue)
{
    *(UAB_Q_DIR*)pValue = UAB_Q_DIR_Reverse;
    return 1;
}

int check_UAB_Q_DIR_string(const char *str, char **endptr)
{
    static UAB_Q_DIR rTemp;
    return string_to_UAB_Q_DIR(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_Q_DIR_Utils = {
    UAB_Q_DIR_to_string,
    check_UAB_Q_DIR_string,
    string_to_UAB_Q_DIR,
    is_UAB_Q_DIR_double_conversion_allowed,
    UAB_Q_DIR_to_double,
    is_UAB_Q_DIR_long_convertion_allowed,
    UAB_Q_DIR_to_long,
    compare_UAB_Q_DIR,
    get_UAB_Q_DIR_signature,
    set_UAB_Q_DIR_default_value,
    sizeof(UAB_Q_DIR)
};

/****************************************************************
 ** UAB_D_DP 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_D_DPVTable;

int UAB_D_DP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_D_DPVTable != NULL
        && pSimUAB_D_DPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_D_DPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_D_DP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_D_DPVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_D_DPVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_D_DP_double_conversion_allowed()
{
    if (pSimUAB_D_DPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_D_DPVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_D_DP_long_convertion_allowed()
{
    if (pSimUAB_D_DPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_D_DPVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_D_DP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_D_DPVTable != NULL
        && pSimUAB_D_DPVTable->m_version >= Scv612
        && pSimUAB_D_DPVTable->m_pfnCompare != NULL) {
        if (pSimUAB_D_DPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_D_DPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_D_DPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_D_DP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_D_DPVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_D_DPVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_D_DP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_D_DPVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_D_DPVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_D_DP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_D_DP_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_D_DP_string(const char *str, char **endptr)
{
    static UAB_D_DP rTemp;
    return string_to_UAB_D_DP(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_D_DP_Utils = {
    UAB_D_DP_to_string,
    check_UAB_D_DP_string,
    string_to_UAB_D_DP,
    is_UAB_D_DP_double_conversion_allowed,
    UAB_D_DP_to_double,
    is_UAB_D_DP_long_convertion_allowed,
    UAB_D_DP_to_long,
    compare_UAB_D_DP,
    get_UAB_D_DP_signature,
    set_UAB_D_DP_default_value,
    sizeof(UAB_D_DP)
};

/****************************************************************
 ** UAB_D_OL 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_D_OLVTable;

int UAB_D_OL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_D_OLVTable != NULL
        && pSimUAB_D_OLVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_D_OLVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_D_OL(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_D_OLVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_D_OLVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_D_OL_double_conversion_allowed()
{
    if (pSimUAB_D_OLVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_D_OLVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_D_OL_long_convertion_allowed()
{
    if (pSimUAB_D_OLVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_D_OLVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_D_OL(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_D_OLVTable != NULL
        && pSimUAB_D_OLVTable->m_version >= Scv612
        && pSimUAB_D_OLVTable->m_pfnCompare != NULL) {
        if (pSimUAB_D_OLVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_D_OLVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_D_OLVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_D_OL_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_D_OLVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_D_OLVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_D_OL_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_D_OLVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_D_OLVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_D_OL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_D_OL_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_D_OL_string(const char *str, char **endptr)
{
    static UAB_D_OL rTemp;
    return string_to_UAB_D_OL(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_D_OL_Utils = {
    UAB_D_OL_to_string,
    check_UAB_D_OL_string,
    string_to_UAB_D_OL,
    is_UAB_D_OL_double_conversion_allowed,
    UAB_D_OL_to_double,
    is_UAB_D_OL_long_convertion_allowed,
    UAB_D_OL_to_long,
    compare_UAB_D_OL,
    get_UAB_D_OL_signature,
    set_UAB_D_OL_default_value,
    sizeof(UAB_D_OL)
};

/****************************************************************
 ** UAB_V_LOA 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_V_LOAVTable;

int UAB_V_LOA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_V_LOAVTable != NULL
        && pSimUAB_V_LOAVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_V_LOAVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_V_LOA(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_V_LOAVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_V_LOAVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_V_LOA_double_conversion_allowed()
{
    if (pSimUAB_V_LOAVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_V_LOAVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_V_LOA_long_convertion_allowed()
{
    if (pSimUAB_V_LOAVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_V_LOAVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_V_LOA(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_V_LOAVTable != NULL
        && pSimUAB_V_LOAVTable->m_version >= Scv612
        && pSimUAB_V_LOAVTable->m_pfnCompare != NULL) {
        if (pSimUAB_V_LOAVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_V_LOAVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_V_LOAVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_V_LOA_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_V_LOAVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_V_LOAVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_V_LOA_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_V_LOAVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_V_LOAVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_V_LOA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_V_LOA_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_V_LOA_string(const char *str, char **endptr)
{
    static UAB_V_LOA rTemp;
    return string_to_UAB_V_LOA(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_V_LOA_Utils = {
    UAB_V_LOA_to_string,
    check_UAB_V_LOA_string,
    string_to_UAB_V_LOA,
    is_UAB_V_LOA_double_conversion_allowed,
    UAB_V_LOA_to_double,
    is_UAB_V_LOA_long_convertion_allowed,
    UAB_V_LOA_to_long,
    compare_UAB_V_LOA,
    get_UAB_V_LOA_signature,
    set_UAB_V_LOA_default_value,
    sizeof(UAB_V_LOA)
};

/****************************************************************
 ** UAB_T_ENDTIMER 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_T_ENDTIMERVTable;

int UAB_T_ENDTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_T_ENDTIMERVTable != NULL
        && pSimUAB_T_ENDTIMERVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_T_ENDTIMERVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_T_ENDTIMER(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_T_ENDTIMERVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_T_ENDTIMERVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_T_ENDTIMER_double_conversion_allowed()
{
    if (pSimUAB_T_ENDTIMERVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_T_ENDTIMERVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_T_ENDTIMER_long_convertion_allowed()
{
    if (pSimUAB_T_ENDTIMERVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_T_ENDTIMERVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_T_ENDTIMER(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_T_ENDTIMERVTable != NULL
        && pSimUAB_T_ENDTIMERVTable->m_version >= Scv612
        && pSimUAB_T_ENDTIMERVTable->m_pfnCompare != NULL) {
        if (pSimUAB_T_ENDTIMERVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_T_ENDTIMERVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_T_ENDTIMERVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_T_ENDTIMER_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_T_ENDTIMERVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_T_ENDTIMERVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_T_ENDTIMER_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_T_ENDTIMERVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_T_ENDTIMERVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_T_ENDTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_T_ENDTIMER_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_T_ENDTIMER_string(const char *str, char **endptr)
{
    static UAB_T_ENDTIMER rTemp;
    return string_to_UAB_T_ENDTIMER(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_T_ENDTIMER_Utils = {
    UAB_T_ENDTIMER_to_string,
    check_UAB_T_ENDTIMER_string,
    string_to_UAB_T_ENDTIMER,
    is_UAB_T_ENDTIMER_double_conversion_allowed,
    UAB_T_ENDTIMER_to_double,
    is_UAB_T_ENDTIMER_long_convertion_allowed,
    UAB_T_ENDTIMER_to_long,
    compare_UAB_T_ENDTIMER,
    get_UAB_T_ENDTIMER_signature,
    set_UAB_T_ENDTIMER_default_value,
    sizeof(UAB_T_ENDTIMER)
};

/****************************************************************
 ** UAB_L_SECTION 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_L_SECTIONVTable;

int UAB_L_SECTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_L_SECTIONVTable != NULL
        && pSimUAB_L_SECTIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_L_SECTIONVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_L_SECTION(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_L_SECTIONVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_L_SECTIONVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_L_SECTION_double_conversion_allowed()
{
    if (pSimUAB_L_SECTIONVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_L_SECTIONVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_L_SECTION_long_convertion_allowed()
{
    if (pSimUAB_L_SECTIONVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_L_SECTIONVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_L_SECTION(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_L_SECTIONVTable != NULL
        && pSimUAB_L_SECTIONVTable->m_version >= Scv612
        && pSimUAB_L_SECTIONVTable->m_pfnCompare != NULL) {
        if (pSimUAB_L_SECTIONVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_L_SECTIONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_L_SECTIONVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_L_SECTION_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_L_SECTIONVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_L_SECTIONVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_L_SECTION_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_L_SECTIONVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_L_SECTIONVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_L_SECTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_L_SECTION_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_L_SECTION_string(const char *str, char **endptr)
{
    static UAB_L_SECTION rTemp;
    return string_to_UAB_L_SECTION(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_L_SECTION_Utils = {
    UAB_L_SECTION_to_string,
    check_UAB_L_SECTION_string,
    string_to_UAB_L_SECTION,
    is_UAB_L_SECTION_double_conversion_allowed,
    UAB_L_SECTION_to_double,
    is_UAB_L_SECTION_long_convertion_allowed,
    UAB_L_SECTION_to_long,
    compare_UAB_L_SECTION,
    get_UAB_L_SECTION_signature,
    set_UAB_L_SECTION_default_value,
    sizeof(UAB_L_SECTION)
};

/****************************************************************
 ** UAB_Q_SECTIONTIMER 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_Q_SECTIONTIMERVTable;

static SimEnumValUtils UAB_Q_SECTIONTIMER_values[] = {
    { "Q_SECTIONTIMER_No_Section_Timer_information", UAB_Q_SECTIONTIMER_No_Section_Timer_information},
    { "Q_SECTIONTIMER_No_Section_Timer_information", UAB_Q_SECTIONTIMER_No_Section_Timer_information},
    { "Q_SECTIONTIMER_Section_Timer_information_to_follow", UAB_Q_SECTIONTIMER_Section_Timer_information_to_follow},
    { "Q_SECTIONTIMER_Section_Timer_information_to_follow", UAB_Q_SECTIONTIMER_Section_Timer_information_to_follow},
};
const int UAB_Q_SECTIONTIMER_nb_values = 4;

int UAB_Q_SECTIONTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_Q_SECTIONTIMERVTable != NULL
        && pSimUAB_Q_SECTIONTIMERVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_Q_SECTIONTIMERVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(UAB_Q_SECTIONTIMER*)pValue, UAB_Q_SECTIONTIMER_values, UAB_Q_SECTIONTIMER_nb_values, pfnStrAppend, pData); 
}

int string_to_UAB_Q_SECTIONTIMER(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_Q_SECTIONTIMERVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_Q_SECTIONTIMERVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, UAB_Q_SECTIONTIMER_values, UAB_Q_SECTIONTIMER_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(UAB_Q_SECTIONTIMER*)pValue = nTemp;
    }
    return nRet;
}

int is_UAB_Q_SECTIONTIMER_double_conversion_allowed()
{
    if (pSimUAB_Q_SECTIONTIMERVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_Q_SECTIONTIMERVTable);
    }
    return 1;
}

int is_UAB_Q_SECTIONTIMER_long_convertion_allowed()
{
    if (pSimUAB_Q_SECTIONTIMERVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_Q_SECTIONTIMERVTable);
    }
    return 1;
}

void compare_UAB_Q_SECTIONTIMER(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_Q_SECTIONTIMERVTable != NULL
        && pSimUAB_Q_SECTIONTIMERVTable->m_version >= Scv612
        && pSimUAB_Q_SECTIONTIMERVTable->m_pfnCompare != NULL) {
        if (pSimUAB_Q_SECTIONTIMERVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_Q_SECTIONTIMERVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_Q_SECTIONTIMERVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(UAB_Q_SECTIONTIMER*)pValue1), (int)(*(UAB_Q_SECTIONTIMER*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_Q_SECTIONTIMER_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_Q_SECTIONTIMERVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_Q_SECTIONTIMERVTable, nRetValue);
    }
    *nRetValue = (double)*((UAB_Q_SECTIONTIMER*)pValue);
    return 1;
}

int UAB_Q_SECTIONTIMER_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_Q_SECTIONTIMERVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_Q_SECTIONTIMERVTable, nRetValue);
    }
    *nRetValue = (long)*((UAB_Q_SECTIONTIMER*)pValue);
    return 1;
}

int get_UAB_Q_SECTIONTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(UAB_Q_SECTIONTIMER_values, UAB_Q_SECTIONTIMER_nb_values, pfnStrAppend, pData);
}

int set_UAB_Q_SECTIONTIMER_default_value(void *pValue)
{
    *(UAB_Q_SECTIONTIMER*)pValue = UAB_Q_SECTIONTIMER_No_Section_Timer_information;
    return 1;
}

int check_UAB_Q_SECTIONTIMER_string(const char *str, char **endptr)
{
    static UAB_Q_SECTIONTIMER rTemp;
    return string_to_UAB_Q_SECTIONTIMER(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_Q_SECTIONTIMER_Utils = {
    UAB_Q_SECTIONTIMER_to_string,
    check_UAB_Q_SECTIONTIMER_string,
    string_to_UAB_Q_SECTIONTIMER,
    is_UAB_Q_SECTIONTIMER_double_conversion_allowed,
    UAB_Q_SECTIONTIMER_to_double,
    is_UAB_Q_SECTIONTIMER_long_convertion_allowed,
    UAB_Q_SECTIONTIMER_to_long,
    compare_UAB_Q_SECTIONTIMER,
    get_UAB_Q_SECTIONTIMER_signature,
    set_UAB_Q_SECTIONTIMER_default_value,
    sizeof(UAB_Q_SECTIONTIMER)
};

/****************************************************************
 ** UAB_T_SECTIONTIMER 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_T_SECTIONTIMERVTable;

int UAB_T_SECTIONTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_T_SECTIONTIMERVTable != NULL
        && pSimUAB_T_SECTIONTIMERVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_T_SECTIONTIMERVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_T_SECTIONTIMER(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_T_SECTIONTIMERVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_T_SECTIONTIMERVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_T_SECTIONTIMER_double_conversion_allowed()
{
    if (pSimUAB_T_SECTIONTIMERVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_T_SECTIONTIMERVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_T_SECTIONTIMER_long_convertion_allowed()
{
    if (pSimUAB_T_SECTIONTIMERVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_T_SECTIONTIMERVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_T_SECTIONTIMER(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_T_SECTIONTIMERVTable != NULL
        && pSimUAB_T_SECTIONTIMERVTable->m_version >= Scv612
        && pSimUAB_T_SECTIONTIMERVTable->m_pfnCompare != NULL) {
        if (pSimUAB_T_SECTIONTIMERVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_T_SECTIONTIMERVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_T_SECTIONTIMERVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_T_SECTIONTIMER_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_T_SECTIONTIMERVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_T_SECTIONTIMERVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_T_SECTIONTIMER_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_T_SECTIONTIMERVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_T_SECTIONTIMERVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_T_SECTIONTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_T_SECTIONTIMER_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_T_SECTIONTIMER_string(const char *str, char **endptr)
{
    static UAB_T_SECTIONTIMER rTemp;
    return string_to_UAB_T_SECTIONTIMER(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_T_SECTIONTIMER_Utils = {
    UAB_T_SECTIONTIMER_to_string,
    check_UAB_T_SECTIONTIMER_string,
    string_to_UAB_T_SECTIONTIMER,
    is_UAB_T_SECTIONTIMER_double_conversion_allowed,
    UAB_T_SECTIONTIMER_to_double,
    is_UAB_T_SECTIONTIMER_long_convertion_allowed,
    UAB_T_SECTIONTIMER_to_long,
    compare_UAB_T_SECTIONTIMER,
    get_UAB_T_SECTIONTIMER_signature,
    set_UAB_T_SECTIONTIMER_default_value,
    sizeof(UAB_T_SECTIONTIMER)
};

/****************************************************************
 ** UAB_D_SECTIONTIMERSTOPLOC 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_D_SECTIONTIMERSTOPLOCVTable;

int UAB_D_SECTIONTIMERSTOPLOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_D_SECTIONTIMERSTOPLOCVTable != NULL
        && pSimUAB_D_SECTIONTIMERSTOPLOCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_D_SECTIONTIMERSTOPLOCVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_D_SECTIONTIMERSTOPLOC(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_D_SECTIONTIMERSTOPLOCVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_D_SECTIONTIMERSTOPLOCVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_D_SECTIONTIMERSTOPLOC_double_conversion_allowed()
{
    if (pSimUAB_D_SECTIONTIMERSTOPLOCVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_D_SECTIONTIMERSTOPLOCVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_D_SECTIONTIMERSTOPLOC_long_convertion_allowed()
{
    if (pSimUAB_D_SECTIONTIMERSTOPLOCVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_D_SECTIONTIMERSTOPLOCVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_D_SECTIONTIMERSTOPLOC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_D_SECTIONTIMERSTOPLOCVTable != NULL
        && pSimUAB_D_SECTIONTIMERSTOPLOCVTable->m_version >= Scv612
        && pSimUAB_D_SECTIONTIMERSTOPLOCVTable->m_pfnCompare != NULL) {
        if (pSimUAB_D_SECTIONTIMERSTOPLOCVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_D_SECTIONTIMERSTOPLOCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_D_SECTIONTIMERSTOPLOCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_D_SECTIONTIMERSTOPLOC_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_D_SECTIONTIMERSTOPLOCVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_D_SECTIONTIMERSTOPLOCVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_D_SECTIONTIMERSTOPLOC_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_D_SECTIONTIMERSTOPLOCVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_D_SECTIONTIMERSTOPLOCVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_D_SECTIONTIMERSTOPLOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_D_SECTIONTIMERSTOPLOC_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_D_SECTIONTIMERSTOPLOC_string(const char *str, char **endptr)
{
    static UAB_D_SECTIONTIMERSTOPLOC rTemp;
    return string_to_UAB_D_SECTIONTIMERSTOPLOC(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_D_SECTIONTIMERSTOPLOC_Utils = {
    UAB_D_SECTIONTIMERSTOPLOC_to_string,
    check_UAB_D_SECTIONTIMERSTOPLOC_string,
    string_to_UAB_D_SECTIONTIMERSTOPLOC,
    is_UAB_D_SECTIONTIMERSTOPLOC_double_conversion_allowed,
    UAB_D_SECTIONTIMERSTOPLOC_to_double,
    is_UAB_D_SECTIONTIMERSTOPLOC_long_convertion_allowed,
    UAB_D_SECTIONTIMERSTOPLOC_to_long,
    compare_UAB_D_SECTIONTIMERSTOPLOC,
    get_UAB_D_SECTIONTIMERSTOPLOC_signature,
    set_UAB_D_SECTIONTIMERSTOPLOC_default_value,
    sizeof(UAB_D_SECTIONTIMERSTOPLOC)
};

/****************************************************************
 ** UAB_Q_OVERLAP 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_Q_OVERLAPVTable;

static SimEnumValUtils UAB_Q_OVERLAP_values[] = {
    { "Q_OVERLAP_No_overlap_information", UAB_Q_OVERLAP_No_overlap_information},
    { "Q_OVERLAP_No_overlap_information", UAB_Q_OVERLAP_No_overlap_information},
    { "Q_OVERLAP_Overlap_information_to_follow", UAB_Q_OVERLAP_Overlap_information_to_follow},
    { "Q_OVERLAP_Overlap_information_to_follow", UAB_Q_OVERLAP_Overlap_information_to_follow},
};
const int UAB_Q_OVERLAP_nb_values = 4;

int UAB_Q_OVERLAP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_Q_OVERLAPVTable != NULL
        && pSimUAB_Q_OVERLAPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_Q_OVERLAPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(UAB_Q_OVERLAP*)pValue, UAB_Q_OVERLAP_values, UAB_Q_OVERLAP_nb_values, pfnStrAppend, pData); 
}

int string_to_UAB_Q_OVERLAP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_Q_OVERLAPVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_Q_OVERLAPVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, UAB_Q_OVERLAP_values, UAB_Q_OVERLAP_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(UAB_Q_OVERLAP*)pValue = nTemp;
    }
    return nRet;
}

int is_UAB_Q_OVERLAP_double_conversion_allowed()
{
    if (pSimUAB_Q_OVERLAPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_Q_OVERLAPVTable);
    }
    return 1;
}

int is_UAB_Q_OVERLAP_long_convertion_allowed()
{
    if (pSimUAB_Q_OVERLAPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_Q_OVERLAPVTable);
    }
    return 1;
}

void compare_UAB_Q_OVERLAP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_Q_OVERLAPVTable != NULL
        && pSimUAB_Q_OVERLAPVTable->m_version >= Scv612
        && pSimUAB_Q_OVERLAPVTable->m_pfnCompare != NULL) {
        if (pSimUAB_Q_OVERLAPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_Q_OVERLAPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_Q_OVERLAPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(UAB_Q_OVERLAP*)pValue1), (int)(*(UAB_Q_OVERLAP*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_Q_OVERLAP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_Q_OVERLAPVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_Q_OVERLAPVTable, nRetValue);
    }
    *nRetValue = (double)*((UAB_Q_OVERLAP*)pValue);
    return 1;
}

int UAB_Q_OVERLAP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_Q_OVERLAPVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_Q_OVERLAPVTable, nRetValue);
    }
    *nRetValue = (long)*((UAB_Q_OVERLAP*)pValue);
    return 1;
}

int get_UAB_Q_OVERLAP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(UAB_Q_OVERLAP_values, UAB_Q_OVERLAP_nb_values, pfnStrAppend, pData);
}

int set_UAB_Q_OVERLAP_default_value(void *pValue)
{
    *(UAB_Q_OVERLAP*)pValue = UAB_Q_OVERLAP_No_overlap_information;
    return 1;
}

int check_UAB_Q_OVERLAP_string(const char *str, char **endptr)
{
    static UAB_Q_OVERLAP rTemp;
    return string_to_UAB_Q_OVERLAP(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_Q_OVERLAP_Utils = {
    UAB_Q_OVERLAP_to_string,
    check_UAB_Q_OVERLAP_string,
    string_to_UAB_Q_OVERLAP,
    is_UAB_Q_OVERLAP_double_conversion_allowed,
    UAB_Q_OVERLAP_to_double,
    is_UAB_Q_OVERLAP_long_convertion_allowed,
    UAB_Q_OVERLAP_to_long,
    compare_UAB_Q_OVERLAP,
    get_UAB_Q_OVERLAP_signature,
    set_UAB_Q_OVERLAP_default_value,
    sizeof(UAB_Q_OVERLAP)
};

/****************************************************************
 ** UAB_Q_DANGERPOINT 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_Q_DANGERPOINTVTable;

static SimEnumValUtils UAB_Q_DANGERPOINT_values[] = {
    { "Q_DANGERPOINT_No_danger_point_information", UAB_Q_DANGERPOINT_No_danger_point_information},
    { "Q_DANGERPOINT_No_danger_point_information", UAB_Q_DANGERPOINT_No_danger_point_information},
    { "Q_DANGERPOINT_Danger_point_information_to_follow", UAB_Q_DANGERPOINT_Danger_point_information_to_follow},
    { "Q_DANGERPOINT_Danger_point_information_to_follow", UAB_Q_DANGERPOINT_Danger_point_information_to_follow},
};
const int UAB_Q_DANGERPOINT_nb_values = 4;

int UAB_Q_DANGERPOINT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_Q_DANGERPOINTVTable != NULL
        && pSimUAB_Q_DANGERPOINTVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_Q_DANGERPOINTVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(UAB_Q_DANGERPOINT*)pValue, UAB_Q_DANGERPOINT_values, UAB_Q_DANGERPOINT_nb_values, pfnStrAppend, pData); 
}

int string_to_UAB_Q_DANGERPOINT(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_Q_DANGERPOINTVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_Q_DANGERPOINTVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, UAB_Q_DANGERPOINT_values, UAB_Q_DANGERPOINT_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(UAB_Q_DANGERPOINT*)pValue = nTemp;
    }
    return nRet;
}

int is_UAB_Q_DANGERPOINT_double_conversion_allowed()
{
    if (pSimUAB_Q_DANGERPOINTVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_Q_DANGERPOINTVTable);
    }
    return 1;
}

int is_UAB_Q_DANGERPOINT_long_convertion_allowed()
{
    if (pSimUAB_Q_DANGERPOINTVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_Q_DANGERPOINTVTable);
    }
    return 1;
}

void compare_UAB_Q_DANGERPOINT(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_Q_DANGERPOINTVTable != NULL
        && pSimUAB_Q_DANGERPOINTVTable->m_version >= Scv612
        && pSimUAB_Q_DANGERPOINTVTable->m_pfnCompare != NULL) {
        if (pSimUAB_Q_DANGERPOINTVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_Q_DANGERPOINTVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_Q_DANGERPOINTVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(UAB_Q_DANGERPOINT*)pValue1), (int)(*(UAB_Q_DANGERPOINT*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_Q_DANGERPOINT_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_Q_DANGERPOINTVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_Q_DANGERPOINTVTable, nRetValue);
    }
    *nRetValue = (double)*((UAB_Q_DANGERPOINT*)pValue);
    return 1;
}

int UAB_Q_DANGERPOINT_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_Q_DANGERPOINTVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_Q_DANGERPOINTVTable, nRetValue);
    }
    *nRetValue = (long)*((UAB_Q_DANGERPOINT*)pValue);
    return 1;
}

int get_UAB_Q_DANGERPOINT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(UAB_Q_DANGERPOINT_values, UAB_Q_DANGERPOINT_nb_values, pfnStrAppend, pData);
}

int set_UAB_Q_DANGERPOINT_default_value(void *pValue)
{
    *(UAB_Q_DANGERPOINT*)pValue = UAB_Q_DANGERPOINT_No_danger_point_information;
    return 1;
}

int check_UAB_Q_DANGERPOINT_string(const char *str, char **endptr)
{
    static UAB_Q_DANGERPOINT rTemp;
    return string_to_UAB_Q_DANGERPOINT(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_Q_DANGERPOINT_Utils = {
    UAB_Q_DANGERPOINT_to_string,
    check_UAB_Q_DANGERPOINT_string,
    string_to_UAB_Q_DANGERPOINT,
    is_UAB_Q_DANGERPOINT_double_conversion_allowed,
    UAB_Q_DANGERPOINT_to_double,
    is_UAB_Q_DANGERPOINT_long_convertion_allowed,
    UAB_Q_DANGERPOINT_to_long,
    compare_UAB_Q_DANGERPOINT,
    get_UAB_Q_DANGERPOINT_signature,
    set_UAB_Q_DANGERPOINT_default_value,
    sizeof(UAB_Q_DANGERPOINT)
};

/****************************************************************
 ** UAB_T_LOA 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_T_LOAVTable;

int UAB_T_LOA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_T_LOAVTable != NULL
        && pSimUAB_T_LOAVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_T_LOAVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_T_LOA(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_T_LOAVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_T_LOAVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_T_LOA_double_conversion_allowed()
{
    if (pSimUAB_T_LOAVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_T_LOAVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_T_LOA_long_convertion_allowed()
{
    if (pSimUAB_T_LOAVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_T_LOAVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_T_LOA(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_T_LOAVTable != NULL
        && pSimUAB_T_LOAVTable->m_version >= Scv612
        && pSimUAB_T_LOAVTable->m_pfnCompare != NULL) {
        if (pSimUAB_T_LOAVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_T_LOAVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_T_LOAVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_T_LOA_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_T_LOAVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_T_LOAVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_T_LOA_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_T_LOAVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_T_LOAVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_T_LOA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_T_LOA_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_T_LOA_string(const char *str, char **endptr)
{
    static UAB_T_LOA rTemp;
    return string_to_UAB_T_LOA(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_T_LOA_Utils = {
    UAB_T_LOA_to_string,
    check_UAB_T_LOA_string,
    string_to_UAB_T_LOA,
    is_UAB_T_LOA_double_conversion_allowed,
    UAB_T_LOA_to_double,
    is_UAB_T_LOA_long_convertion_allowed,
    UAB_T_LOA_to_long,
    compare_UAB_T_LOA,
    get_UAB_T_LOA_signature,
    set_UAB_T_LOA_default_value,
    sizeof(UAB_T_LOA)
};

/****************************************************************
 ** UAB_Q_SCALE 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_Q_SCALEVTable;

static SimEnumValUtils UAB_Q_SCALE_values[] = {
    { "Q_SCALE_10_cm_scale", UAB_Q_SCALE_10_cm_scale},
    { "Q_SCALE_10_cm_scale", UAB_Q_SCALE_10_cm_scale},
    { "Q_SCALE_1_m_scale", UAB_Q_SCALE_1_m_scale},
    { "Q_SCALE_1_m_scale", UAB_Q_SCALE_1_m_scale},
    { "Q_SCALE_10_m_scale", UAB_Q_SCALE_10_m_scale},
    { "Q_SCALE_10_m_scale", UAB_Q_SCALE_10_m_scale},
};
const int UAB_Q_SCALE_nb_values = 6;

int UAB_Q_SCALE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_Q_SCALEVTable != NULL
        && pSimUAB_Q_SCALEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_Q_SCALEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(UAB_Q_SCALE*)pValue, UAB_Q_SCALE_values, UAB_Q_SCALE_nb_values, pfnStrAppend, pData); 
}

int string_to_UAB_Q_SCALE(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_Q_SCALEVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_Q_SCALEVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, UAB_Q_SCALE_values, UAB_Q_SCALE_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(UAB_Q_SCALE*)pValue = nTemp;
    }
    return nRet;
}

int is_UAB_Q_SCALE_double_conversion_allowed()
{
    if (pSimUAB_Q_SCALEVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_Q_SCALEVTable);
    }
    return 1;
}

int is_UAB_Q_SCALE_long_convertion_allowed()
{
    if (pSimUAB_Q_SCALEVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_Q_SCALEVTable);
    }
    return 1;
}

void compare_UAB_Q_SCALE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_Q_SCALEVTable != NULL
        && pSimUAB_Q_SCALEVTable->m_version >= Scv612
        && pSimUAB_Q_SCALEVTable->m_pfnCompare != NULL) {
        if (pSimUAB_Q_SCALEVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_Q_SCALEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_Q_SCALEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(UAB_Q_SCALE*)pValue1), (int)(*(UAB_Q_SCALE*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_Q_SCALE_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_Q_SCALEVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_Q_SCALEVTable, nRetValue);
    }
    *nRetValue = (double)*((UAB_Q_SCALE*)pValue);
    return 1;
}

int UAB_Q_SCALE_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_Q_SCALEVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_Q_SCALEVTable, nRetValue);
    }
    *nRetValue = (long)*((UAB_Q_SCALE*)pValue);
    return 1;
}

int get_UAB_Q_SCALE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(UAB_Q_SCALE_values, UAB_Q_SCALE_nb_values, pfnStrAppend, pData);
}

int set_UAB_Q_SCALE_default_value(void *pValue)
{
    *(UAB_Q_SCALE*)pValue = UAB_Q_SCALE_10_cm_scale;
    return 1;
}

int check_UAB_Q_SCALE_string(const char *str, char **endptr)
{
    static UAB_Q_SCALE rTemp;
    return string_to_UAB_Q_SCALE(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_Q_SCALE_Utils = {
    UAB_Q_SCALE_to_string,
    check_UAB_Q_SCALE_string,
    string_to_UAB_Q_SCALE,
    is_UAB_Q_SCALE_double_conversion_allowed,
    UAB_Q_SCALE_to_double,
    is_UAB_Q_SCALE_long_convertion_allowed,
    UAB_Q_SCALE_to_long,
    compare_UAB_Q_SCALE,
    get_UAB_Q_SCALE_signature,
    set_UAB_Q_SCALE_default_value,
    sizeof(UAB_Q_SCALE)
};

/****************************************************************
 ** UAB_N_ITER 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_N_ITERVTable;

int UAB_N_ITER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_N_ITERVTable != NULL
        && pSimUAB_N_ITERVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_N_ITERVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_N_ITER(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_N_ITERVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_N_ITERVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_N_ITER_double_conversion_allowed()
{
    if (pSimUAB_N_ITERVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_N_ITERVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_N_ITER_long_convertion_allowed()
{
    if (pSimUAB_N_ITERVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_N_ITERVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_N_ITER(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_N_ITERVTable != NULL
        && pSimUAB_N_ITERVTable->m_version >= Scv612
        && pSimUAB_N_ITERVTable->m_pfnCompare != NULL) {
        if (pSimUAB_N_ITERVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_N_ITERVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_N_ITERVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_N_ITER_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_N_ITERVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_N_ITERVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_N_ITER_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_N_ITERVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_N_ITERVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_N_ITER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_N_ITER_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_N_ITER_string(const char *str, char **endptr)
{
    static UAB_N_ITER rTemp;
    return string_to_UAB_N_ITER(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_N_ITER_Utils = {
    UAB_N_ITER_to_string,
    check_UAB_N_ITER_string,
    string_to_UAB_N_ITER,
    is_UAB_N_ITER_double_conversion_allowed,
    UAB_N_ITER_to_double,
    is_UAB_N_ITER_long_convertion_allowed,
    UAB_N_ITER_to_long,
    compare_UAB_N_ITER,
    get_UAB_N_ITER_signature,
    set_UAB_N_ITER_default_value,
    sizeof(UAB_N_ITER)
};

/****************************************************************
 ** UAB_L_ENDSECTION 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_L_ENDSECTIONVTable;

int UAB_L_ENDSECTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_L_ENDSECTIONVTable != NULL
        && pSimUAB_L_ENDSECTIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_L_ENDSECTIONVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_L_ENDSECTION(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_L_ENDSECTIONVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_L_ENDSECTIONVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_L_ENDSECTION_double_conversion_allowed()
{
    if (pSimUAB_L_ENDSECTIONVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_L_ENDSECTIONVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_L_ENDSECTION_long_convertion_allowed()
{
    if (pSimUAB_L_ENDSECTIONVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_L_ENDSECTIONVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_L_ENDSECTION(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_L_ENDSECTIONVTable != NULL
        && pSimUAB_L_ENDSECTIONVTable->m_version >= Scv612
        && pSimUAB_L_ENDSECTIONVTable->m_pfnCompare != NULL) {
        if (pSimUAB_L_ENDSECTIONVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_L_ENDSECTIONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_L_ENDSECTIONVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_L_ENDSECTION_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_L_ENDSECTIONVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_L_ENDSECTIONVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_L_ENDSECTION_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_L_ENDSECTIONVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_L_ENDSECTIONVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_L_ENDSECTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_L_ENDSECTION_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_L_ENDSECTION_string(const char *str, char **endptr)
{
    static UAB_L_ENDSECTION rTemp;
    return string_to_UAB_L_ENDSECTION(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_L_ENDSECTION_Utils = {
    UAB_L_ENDSECTION_to_string,
    check_UAB_L_ENDSECTION_string,
    string_to_UAB_L_ENDSECTION,
    is_UAB_L_ENDSECTION_double_conversion_allowed,
    UAB_L_ENDSECTION_to_double,
    is_UAB_L_ENDSECTION_long_convertion_allowed,
    UAB_L_ENDSECTION_to_long,
    compare_UAB_L_ENDSECTION,
    get_UAB_L_ENDSECTION_signature,
    set_UAB_L_ENDSECTION_default_value,
    sizeof(UAB_L_ENDSECTION)
};

/****************************************************************
 ** UAB_Q_ENDTIMER 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_Q_ENDTIMERVTable;

static SimEnumValUtils UAB_Q_ENDTIMER_values[] = {
    { "Q_ENDTIMER_No_End_section_timer_information", UAB_Q_ENDTIMER_No_End_section_timer_information},
    { "Q_ENDTIMER_No_End_section_timer_information", UAB_Q_ENDTIMER_No_End_section_timer_information},
    { "Q_ENDTIMER_End_section_timer_information_to_follow", UAB_Q_ENDTIMER_End_section_timer_information_to_follow},
    { "Q_ENDTIMER_End_section_timer_information_to_follow", UAB_Q_ENDTIMER_End_section_timer_information_to_follow},
};
const int UAB_Q_ENDTIMER_nb_values = 4;

int UAB_Q_ENDTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_Q_ENDTIMERVTable != NULL
        && pSimUAB_Q_ENDTIMERVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_Q_ENDTIMERVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(UAB_Q_ENDTIMER*)pValue, UAB_Q_ENDTIMER_values, UAB_Q_ENDTIMER_nb_values, pfnStrAppend, pData); 
}

int string_to_UAB_Q_ENDTIMER(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_Q_ENDTIMERVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_Q_ENDTIMERVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, UAB_Q_ENDTIMER_values, UAB_Q_ENDTIMER_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(UAB_Q_ENDTIMER*)pValue = nTemp;
    }
    return nRet;
}

int is_UAB_Q_ENDTIMER_double_conversion_allowed()
{
    if (pSimUAB_Q_ENDTIMERVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_Q_ENDTIMERVTable);
    }
    return 1;
}

int is_UAB_Q_ENDTIMER_long_convertion_allowed()
{
    if (pSimUAB_Q_ENDTIMERVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_Q_ENDTIMERVTable);
    }
    return 1;
}

void compare_UAB_Q_ENDTIMER(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_Q_ENDTIMERVTable != NULL
        && pSimUAB_Q_ENDTIMERVTable->m_version >= Scv612
        && pSimUAB_Q_ENDTIMERVTable->m_pfnCompare != NULL) {
        if (pSimUAB_Q_ENDTIMERVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_Q_ENDTIMERVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_Q_ENDTIMERVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(UAB_Q_ENDTIMER*)pValue1), (int)(*(UAB_Q_ENDTIMER*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_Q_ENDTIMER_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_Q_ENDTIMERVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_Q_ENDTIMERVTable, nRetValue);
    }
    *nRetValue = (double)*((UAB_Q_ENDTIMER*)pValue);
    return 1;
}

int UAB_Q_ENDTIMER_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_Q_ENDTIMERVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_Q_ENDTIMERVTable, nRetValue);
    }
    *nRetValue = (long)*((UAB_Q_ENDTIMER*)pValue);
    return 1;
}

int get_UAB_Q_ENDTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(UAB_Q_ENDTIMER_values, UAB_Q_ENDTIMER_nb_values, pfnStrAppend, pData);
}

int set_UAB_Q_ENDTIMER_default_value(void *pValue)
{
    *(UAB_Q_ENDTIMER*)pValue = UAB_Q_ENDTIMER_No_End_section_timer_information;
    return 1;
}

int check_UAB_Q_ENDTIMER_string(const char *str, char **endptr)
{
    static UAB_Q_ENDTIMER rTemp;
    return string_to_UAB_Q_ENDTIMER(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_Q_ENDTIMER_Utils = {
    UAB_Q_ENDTIMER_to_string,
    check_UAB_Q_ENDTIMER_string,
    string_to_UAB_Q_ENDTIMER,
    is_UAB_Q_ENDTIMER_double_conversion_allowed,
    UAB_Q_ENDTIMER_to_double,
    is_UAB_Q_ENDTIMER_long_convertion_allowed,
    UAB_Q_ENDTIMER_to_long,
    compare_UAB_Q_ENDTIMER,
    get_UAB_Q_ENDTIMER_signature,
    set_UAB_Q_ENDTIMER_default_value,
    sizeof(UAB_Q_ENDTIMER)
};

/****************************************************************
 ** UAB_D_ENDTIMERSTARTLOC 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_D_ENDTIMERSTARTLOCVTable;

int UAB_D_ENDTIMERSTARTLOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_D_ENDTIMERSTARTLOCVTable != NULL
        && pSimUAB_D_ENDTIMERSTARTLOCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_D_ENDTIMERSTARTLOCVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_D_ENDTIMERSTARTLOC(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_D_ENDTIMERSTARTLOCVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_D_ENDTIMERSTARTLOCVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_D_ENDTIMERSTARTLOC_double_conversion_allowed()
{
    if (pSimUAB_D_ENDTIMERSTARTLOCVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_D_ENDTIMERSTARTLOCVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_D_ENDTIMERSTARTLOC_long_convertion_allowed()
{
    if (pSimUAB_D_ENDTIMERSTARTLOCVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_D_ENDTIMERSTARTLOCVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_D_ENDTIMERSTARTLOC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_D_ENDTIMERSTARTLOCVTable != NULL
        && pSimUAB_D_ENDTIMERSTARTLOCVTable->m_version >= Scv612
        && pSimUAB_D_ENDTIMERSTARTLOCVTable->m_pfnCompare != NULL) {
        if (pSimUAB_D_ENDTIMERSTARTLOCVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_D_ENDTIMERSTARTLOCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_D_ENDTIMERSTARTLOCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_D_ENDTIMERSTARTLOC_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_D_ENDTIMERSTARTLOCVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_D_ENDTIMERSTARTLOCVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_D_ENDTIMERSTARTLOC_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_D_ENDTIMERSTARTLOCVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_D_ENDTIMERSTARTLOCVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_D_ENDTIMERSTARTLOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_D_ENDTIMERSTARTLOC_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_D_ENDTIMERSTARTLOC_string(const char *str, char **endptr)
{
    static UAB_D_ENDTIMERSTARTLOC rTemp;
    return string_to_UAB_D_ENDTIMERSTARTLOC(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_D_ENDTIMERSTARTLOC_Utils = {
    UAB_D_ENDTIMERSTARTLOC_to_string,
    check_UAB_D_ENDTIMERSTARTLOC_string,
    string_to_UAB_D_ENDTIMERSTARTLOC,
    is_UAB_D_ENDTIMERSTARTLOC_double_conversion_allowed,
    UAB_D_ENDTIMERSTARTLOC_to_double,
    is_UAB_D_ENDTIMERSTARTLOC_long_convertion_allowed,
    UAB_D_ENDTIMERSTARTLOC_to_long,
    compare_UAB_D_ENDTIMERSTARTLOC,
    get_UAB_D_ENDTIMERSTARTLOC_signature,
    set_UAB_D_ENDTIMERSTARTLOC_default_value,
    sizeof(UAB_D_ENDTIMERSTARTLOC)
};

/****************************************************************
 ** UAB_V_RELEASEDP 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_V_RELEASEDPVTable;

int UAB_V_RELEASEDP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_V_RELEASEDPVTable != NULL
        && pSimUAB_V_RELEASEDPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_V_RELEASEDPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_V_RELEASEDP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_V_RELEASEDPVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_V_RELEASEDPVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_V_RELEASEDP_double_conversion_allowed()
{
    if (pSimUAB_V_RELEASEDPVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_V_RELEASEDPVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_V_RELEASEDP_long_convertion_allowed()
{
    if (pSimUAB_V_RELEASEDPVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_V_RELEASEDPVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_V_RELEASEDP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_V_RELEASEDPVTable != NULL
        && pSimUAB_V_RELEASEDPVTable->m_version >= Scv612
        && pSimUAB_V_RELEASEDPVTable->m_pfnCompare != NULL) {
        if (pSimUAB_V_RELEASEDPVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_V_RELEASEDPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_V_RELEASEDPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_V_RELEASEDP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_V_RELEASEDPVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_V_RELEASEDPVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_V_RELEASEDP_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_V_RELEASEDPVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_V_RELEASEDPVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_V_RELEASEDP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_V_RELEASEDP_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_V_RELEASEDP_string(const char *str, char **endptr)
{
    static UAB_V_RELEASEDP rTemp;
    return string_to_UAB_V_RELEASEDP(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_V_RELEASEDP_Utils = {
    UAB_V_RELEASEDP_to_string,
    check_UAB_V_RELEASEDP_string,
    string_to_UAB_V_RELEASEDP,
    is_UAB_V_RELEASEDP_double_conversion_allowed,
    UAB_V_RELEASEDP_to_double,
    is_UAB_V_RELEASEDP_long_convertion_allowed,
    UAB_V_RELEASEDP_to_long,
    compare_UAB_V_RELEASEDP,
    get_UAB_V_RELEASEDP_signature,
    set_UAB_V_RELEASEDP_default_value,
    sizeof(UAB_V_RELEASEDP)
};

/****************************************************************
 ** UAB_D_STARTOL 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_D_STARTOLVTable;

int UAB_D_STARTOL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_D_STARTOLVTable != NULL
        && pSimUAB_D_STARTOLVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_D_STARTOLVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_D_STARTOL(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_D_STARTOLVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_D_STARTOLVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_D_STARTOL_double_conversion_allowed()
{
    if (pSimUAB_D_STARTOLVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_D_STARTOLVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_D_STARTOL_long_convertion_allowed()
{
    if (pSimUAB_D_STARTOLVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_D_STARTOLVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_D_STARTOL(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_D_STARTOLVTable != NULL
        && pSimUAB_D_STARTOLVTable->m_version >= Scv612
        && pSimUAB_D_STARTOLVTable->m_pfnCompare != NULL) {
        if (pSimUAB_D_STARTOLVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_D_STARTOLVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_D_STARTOLVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_D_STARTOL_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_D_STARTOLVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_D_STARTOLVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_D_STARTOL_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_D_STARTOLVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_D_STARTOLVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_D_STARTOL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_D_STARTOL_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_D_STARTOL_string(const char *str, char **endptr)
{
    static UAB_D_STARTOL rTemp;
    return string_to_UAB_D_STARTOL(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_D_STARTOL_Utils = {
    UAB_D_STARTOL_to_string,
    check_UAB_D_STARTOL_string,
    string_to_UAB_D_STARTOL,
    is_UAB_D_STARTOL_double_conversion_allowed,
    UAB_D_STARTOL_to_double,
    is_UAB_D_STARTOL_long_convertion_allowed,
    UAB_D_STARTOL_to_long,
    compare_UAB_D_STARTOL,
    get_UAB_D_STARTOL_signature,
    set_UAB_D_STARTOL_default_value,
    sizeof(UAB_D_STARTOL)
};

/****************************************************************
 ** UAB_T_OL 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_T_OLVTable;

int UAB_T_OL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_T_OLVTable != NULL
        && pSimUAB_T_OLVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_T_OLVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_T_OL(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_T_OLVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_T_OLVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_T_OL_double_conversion_allowed()
{
    if (pSimUAB_T_OLVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_T_OLVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_T_OL_long_convertion_allowed()
{
    if (pSimUAB_T_OLVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_T_OLVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_T_OL(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_T_OLVTable != NULL
        && pSimUAB_T_OLVTable->m_version >= Scv612
        && pSimUAB_T_OLVTable->m_pfnCompare != NULL) {
        if (pSimUAB_T_OLVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_T_OLVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_T_OLVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_T_OL_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_T_OLVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_T_OLVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_T_OL_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_T_OLVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_T_OLVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_T_OL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_T_OL_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_T_OL_string(const char *str, char **endptr)
{
    static UAB_T_OL rTemp;
    return string_to_UAB_T_OL(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_T_OL_Utils = {
    UAB_T_OL_to_string,
    check_UAB_T_OL_string,
    string_to_UAB_T_OL,
    is_UAB_T_OL_double_conversion_allowed,
    UAB_T_OL_to_double,
    is_UAB_T_OL_long_convertion_allowed,
    UAB_T_OL_to_long,
    compare_UAB_T_OL,
    get_UAB_T_OL_signature,
    set_UAB_T_OL_default_value,
    sizeof(UAB_T_OL)
};

/****************************************************************
 ** UAB_V_RELEASEOL 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_V_RELEASEOLVTable;

int UAB_V_RELEASEOL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_V_RELEASEOLVTable != NULL
        && pSimUAB_V_RELEASEOLVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_V_RELEASEOLVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_V_RELEASEOL(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_V_RELEASEOLVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_V_RELEASEOLVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_V_RELEASEOL_double_conversion_allowed()
{
    if (pSimUAB_V_RELEASEOLVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_V_RELEASEOLVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_V_RELEASEOL_long_convertion_allowed()
{
    if (pSimUAB_V_RELEASEOLVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_V_RELEASEOLVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_V_RELEASEOL(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_V_RELEASEOLVTable != NULL
        && pSimUAB_V_RELEASEOLVTable->m_version >= Scv612
        && pSimUAB_V_RELEASEOLVTable->m_pfnCompare != NULL) {
        if (pSimUAB_V_RELEASEOLVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_V_RELEASEOLVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_V_RELEASEOLVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_V_RELEASEOL_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_V_RELEASEOLVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_V_RELEASEOLVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_V_RELEASEOL_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_V_RELEASEOLVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_V_RELEASEOLVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_V_RELEASEOL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_V_RELEASEOL_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_V_RELEASEOL_string(const char *str, char **endptr)
{
    static UAB_V_RELEASEOL rTemp;
    return string_to_UAB_V_RELEASEOL(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_V_RELEASEOL_Utils = {
    UAB_V_RELEASEOL_to_string,
    check_UAB_V_RELEASEOL_string,
    string_to_UAB_V_RELEASEOL,
    is_UAB_V_RELEASEOL_double_conversion_allowed,
    UAB_V_RELEASEOL_to_double,
    is_UAB_V_RELEASEOL_long_convertion_allowed,
    UAB_V_RELEASEOL_to_long,
    compare_UAB_V_RELEASEOL,
    get_UAB_V_RELEASEOL_signature,
    set_UAB_V_RELEASEOL_default_value,
    sizeof(UAB_V_RELEASEOL)
};

/****************************************************************
 ** UAB_Array06_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_Array06_TMVTable;

int UAB_Array06_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_Array06_TMVTable != NULL
        && pSimUAB_Array06_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_Array06_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array_int_6_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_Array06_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_Array06_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_Array06_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array_int_6(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_Array06_TM_double_conversion_allowed()
{
    if (pSimUAB_Array06_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_Array06_TMVTable);
    }
    return is_UAB_array_int_6_double_conversion_allowed();
}

int is_UAB_Array06_TM_long_convertion_allowed()
{
    if (pSimUAB_Array06_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_Array06_TMVTable);
    }
    return is_UAB_array_int_6_long_convertion_allowed();
}

void compare_UAB_Array06_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_Array06_TMVTable != NULL
        && pSimUAB_Array06_TMVTable->m_version >= Scv612
        && pSimUAB_Array06_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_Array06_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_Array06_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_Array06_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array_int_6(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_Array06_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_Array06_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_Array06_TMVTable, nRetValue);
    }
    return UAB_array_int_6_to_double(pValue, nRetValue);
}

int UAB_Array06_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_Array06_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_Array06_TMVTable, nRetValue);
    }
    return UAB_array_int_6_to_long(pValue, nRetValue);
}

int get_UAB_Array06_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array_int_6_signature(pfnStrAppend, pData);
}

int set_UAB_Array06_TM_default_value(void *pValue)
{
    return set_UAB_array_int_6_default_value(pValue);
}

int check_UAB_Array06_TM_string(const char *str, char **endptr)
{
    static UAB_Array06_TM rTemp;
    return string_to_UAB_Array06_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_Array06_TM_Utils = {
    UAB_Array06_TM_to_string,
    check_UAB_Array06_TM_string,
    string_to_UAB_Array06_TM,
    is_UAB_Array06_TM_double_conversion_allowed,
    UAB_Array06_TM_to_double,
    is_UAB_Array06_TM_long_convertion_allowed,
    UAB_Array06_TM_to_long,
    compare_UAB_Array06_TM,
    get_UAB_Array06_TM_signature,
    set_UAB_Array06_TM_default_value,
    sizeof(UAB_Array06_TM)
};

/****************************************************************
 ** UAB_P015_section_enum_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P015_section_enum_T_TMVTable;

int UAB_P015_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P015_section_enum_T_TMVTable != NULL
        && pSimUAB_P015_section_enum_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P015_section_enum_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__2684_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P015_section_enum_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P015_section_enum_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P015_section_enum_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__2684(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P015_section_enum_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P015_section_enum_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P015_section_enum_T_TMVTable);
    }
    return is_UAB_struct__2684_double_conversion_allowed();
}

int is_UAB_P015_section_enum_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P015_section_enum_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P015_section_enum_T_TMVTable);
    }
    return is_UAB_struct__2684_long_convertion_allowed();
}

void compare_UAB_P015_section_enum_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P015_section_enum_T_TMVTable != NULL
        && pSimUAB_P015_section_enum_T_TMVTable->m_version >= Scv612
        && pSimUAB_P015_section_enum_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P015_section_enum_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P015_section_enum_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P015_section_enum_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__2684(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P015_section_enum_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P015_section_enum_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P015_section_enum_T_TMVTable, nRetValue);
    }
    return UAB_struct__2684_to_double(pValue, nRetValue);
}

int UAB_P015_section_enum_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P015_section_enum_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P015_section_enum_T_TMVTable, nRetValue);
    }
    return UAB_struct__2684_to_long(pValue, nRetValue);
}

int get_UAB_P015_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__2684_signature(pfnStrAppend, pData);
}

int set_UAB_P015_section_enum_T_TM_default_value(void *pValue)
{
    return set_UAB_struct__2684_default_value(pValue);
}

int check_UAB_P015_section_enum_T_TM_string(const char *str, char **endptr)
{
    static UAB_P015_section_enum_T_TM rTemp;
    return string_to_UAB_P015_section_enum_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P015_section_enum_T_TM_Utils = {
    UAB_P015_section_enum_T_TM_to_string,
    check_UAB_P015_section_enum_T_TM_string,
    string_to_UAB_P015_section_enum_T_TM,
    is_UAB_P015_section_enum_T_TM_double_conversion_allowed,
    UAB_P015_section_enum_T_TM_to_double,
    is_UAB_P015_section_enum_T_TM_long_convertion_allowed,
    UAB_P015_section_enum_T_TM_to_long,
    compare_UAB_P015_section_enum_T_TM,
    get_UAB_P015_section_enum_T_TM_signature,
    set_UAB_P015_section_enum_T_TM_default_value,
    sizeof(UAB_P015_section_enum_T_TM)
};

/****************************************************************
 ** UAB_P015_sections_array_flat_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P015_sections_array_flat_T_TMVTable;

int UAB_P015_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P015_sections_array_flat_T_TMVTable != NULL
        && pSimUAB_P015_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P015_sections_array_flat_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array_int_128_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P015_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P015_sections_array_flat_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P015_sections_array_flat_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array_int_128(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P015_sections_array_flat_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P015_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P015_sections_array_flat_T_TMVTable);
    }
    return is_UAB_array_int_128_double_conversion_allowed();
}

int is_UAB_P015_sections_array_flat_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P015_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P015_sections_array_flat_T_TMVTable);
    }
    return is_UAB_array_int_128_long_convertion_allowed();
}

void compare_UAB_P015_sections_array_flat_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P015_sections_array_flat_T_TMVTable != NULL
        && pSimUAB_P015_sections_array_flat_T_TMVTable->m_version >= Scv612
        && pSimUAB_P015_sections_array_flat_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P015_sections_array_flat_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P015_sections_array_flat_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P015_sections_array_flat_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array_int_128(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P015_sections_array_flat_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P015_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P015_sections_array_flat_T_TMVTable, nRetValue);
    }
    return UAB_array_int_128_to_double(pValue, nRetValue);
}

int UAB_P015_sections_array_flat_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P015_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P015_sections_array_flat_T_TMVTable, nRetValue);
    }
    return UAB_array_int_128_to_long(pValue, nRetValue);
}

int get_UAB_P015_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array_int_128_signature(pfnStrAppend, pData);
}

int set_UAB_P015_sections_array_flat_T_TM_default_value(void *pValue)
{
    return set_UAB_array_int_128_default_value(pValue);
}

int check_UAB_P015_sections_array_flat_T_TM_string(const char *str, char **endptr)
{
    static UAB_P015_sections_array_flat_T_TM rTemp;
    return string_to_UAB_P015_sections_array_flat_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P015_sections_array_flat_T_TM_Utils = {
    UAB_P015_sections_array_flat_T_TM_to_string,
    check_UAB_P015_sections_array_flat_T_TM_string,
    string_to_UAB_P015_sections_array_flat_T_TM,
    is_UAB_P015_sections_array_flat_T_TM_double_conversion_allowed,
    UAB_P015_sections_array_flat_T_TM_to_double,
    is_UAB_P015_sections_array_flat_T_TM_long_convertion_allowed,
    UAB_P015_sections_array_flat_T_TM_to_long,
    compare_UAB_P015_sections_array_flat_T_TM,
    get_UAB_P015_sections_array_flat_T_TM_signature,
    set_UAB_P015_sections_array_flat_T_TM_default_value,
    sizeof(UAB_P015_sections_array_flat_T_TM)
};

/****************************************************************
 ** UAB_P015_OBU_sectionlist_enum_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable;

int UAB_P015_OBU_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable != NULL
        && pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array__2692_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P015_OBU_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array__2692(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P015_OBU_sectionlist_enum_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable);
    }
    return is_UAB_array__2692_double_conversion_allowed();
}

int is_UAB_P015_OBU_sectionlist_enum_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable);
    }
    return is_UAB_array__2692_long_convertion_allowed();
}

void compare_UAB_P015_OBU_sectionlist_enum_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable != NULL
        && pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable->m_version >= Scv612
        && pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array__2692(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P015_OBU_sectionlist_enum_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable, nRetValue);
    }
    return UAB_array__2692_to_double(pValue, nRetValue);
}

int UAB_P015_OBU_sectionlist_enum_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P015_OBU_sectionlist_enum_T_TMVTable, nRetValue);
    }
    return UAB_array__2692_to_long(pValue, nRetValue);
}

int get_UAB_P015_OBU_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array__2692_signature(pfnStrAppend, pData);
}

int set_UAB_P015_OBU_sectionlist_enum_T_TM_default_value(void *pValue)
{
    return set_UAB_array__2692_default_value(pValue);
}

int check_UAB_P015_OBU_sectionlist_enum_T_TM_string(const char *str, char **endptr)
{
    static UAB_P015_OBU_sectionlist_enum_T_TM rTemp;
    return string_to_UAB_P015_OBU_sectionlist_enum_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P015_OBU_sectionlist_enum_T_TM_Utils = {
    UAB_P015_OBU_sectionlist_enum_T_TM_to_string,
    check_UAB_P015_OBU_sectionlist_enum_T_TM_string,
    string_to_UAB_P015_OBU_sectionlist_enum_T_TM,
    is_UAB_P015_OBU_sectionlist_enum_T_TM_double_conversion_allowed,
    UAB_P015_OBU_sectionlist_enum_T_TM_to_double,
    is_UAB_P015_OBU_sectionlist_enum_T_TM_long_convertion_allowed,
    UAB_P015_OBU_sectionlist_enum_T_TM_to_long,
    compare_UAB_P015_OBU_sectionlist_enum_T_TM,
    get_UAB_P015_OBU_sectionlist_enum_T_TM_signature,
    set_UAB_P015_OBU_sectionlist_enum_T_TM_default_value,
    sizeof(UAB_P015_OBU_sectionlist_enum_T_TM)
};

/****************************************************************
 ** UAB_Array15_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_Array15_TMVTable;

int UAB_Array15_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_Array15_TMVTable != NULL
        && pSimUAB_Array15_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_Array15_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array_int_15_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_Array15_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_Array15_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_Array15_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array_int_15(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_Array15_TM_double_conversion_allowed()
{
    if (pSimUAB_Array15_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_Array15_TMVTable);
    }
    return is_UAB_array_int_15_double_conversion_allowed();
}

int is_UAB_Array15_TM_long_convertion_allowed()
{
    if (pSimUAB_Array15_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_Array15_TMVTable);
    }
    return is_UAB_array_int_15_long_convertion_allowed();
}

void compare_UAB_Array15_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_Array15_TMVTable != NULL
        && pSimUAB_Array15_TMVTable->m_version >= Scv612
        && pSimUAB_Array15_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_Array15_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_Array15_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_Array15_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array_int_15(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_Array15_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_Array15_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_Array15_TMVTable, nRetValue);
    }
    return UAB_array_int_15_to_double(pValue, nRetValue);
}

int UAB_Array15_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_Array15_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_Array15_TMVTable, nRetValue);
    }
    return UAB_array_int_15_to_long(pValue, nRetValue);
}

int get_UAB_Array15_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array_int_15_signature(pfnStrAppend, pData);
}

int set_UAB_Array15_TM_default_value(void *pValue)
{
    return set_UAB_array_int_15_default_value(pValue);
}

int check_UAB_Array15_TM_string(const char *str, char **endptr)
{
    static UAB_Array15_TM rTemp;
    return string_to_UAB_Array15_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_Array15_TM_Utils = {
    UAB_Array15_TM_to_string,
    check_UAB_Array15_TM_string,
    string_to_UAB_Array15_TM,
    is_UAB_Array15_TM_double_conversion_allowed,
    UAB_Array15_TM_to_double,
    is_UAB_Array15_TM_long_convertion_allowed,
    UAB_Array15_TM_to_long,
    compare_UAB_Array15_TM,
    get_UAB_Array15_TM_signature,
    set_UAB_Array15_TM_default_value,
    sizeof(UAB_Array15_TM)
};

/****************************************************************
 ** UAB_P015_OBU_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P015_OBU_T_TMVTable;

int UAB_P015_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P015_OBU_T_TMVTable != NULL
        && pSimUAB_P015_OBU_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P015_OBU_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__2695_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P015_OBU_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P015_OBU_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P015_OBU_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__2695(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P015_OBU_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P015_OBU_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P015_OBU_T_TMVTable);
    }
    return is_UAB_struct__2695_double_conversion_allowed();
}

int is_UAB_P015_OBU_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P015_OBU_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P015_OBU_T_TMVTable);
    }
    return is_UAB_struct__2695_long_convertion_allowed();
}

void compare_UAB_P015_OBU_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P015_OBU_T_TMVTable != NULL
        && pSimUAB_P015_OBU_T_TMVTable->m_version >= Scv612
        && pSimUAB_P015_OBU_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P015_OBU_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P015_OBU_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P015_OBU_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__2695(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P015_OBU_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P015_OBU_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P015_OBU_T_TMVTable, nRetValue);
    }
    return UAB_struct__2695_to_double(pValue, nRetValue);
}

int UAB_P015_OBU_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P015_OBU_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P015_OBU_T_TMVTable, nRetValue);
    }
    return UAB_struct__2695_to_long(pValue, nRetValue);
}

int get_UAB_P015_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__2695_signature(pfnStrAppend, pData);
}

int set_UAB_P015_OBU_T_TM_default_value(void *pValue)
{
    return set_UAB_struct__2695_default_value(pValue);
}

int check_UAB_P015_OBU_T_TM_string(const char *str, char **endptr)
{
    static UAB_P015_OBU_T_TM rTemp;
    return string_to_UAB_P015_OBU_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P015_OBU_T_TM_Utils = {
    UAB_P015_OBU_T_TM_to_string,
    check_UAB_P015_OBU_T_TM_string,
    string_to_UAB_P015_OBU_T_TM,
    is_UAB_P015_OBU_T_TM_double_conversion_allowed,
    UAB_P015_OBU_T_TM_to_double,
    is_UAB_P015_OBU_T_TM_long_convertion_allowed,
    UAB_P015_OBU_T_TM_to_long,
    compare_UAB_P015_OBU_T_TM,
    get_UAB_P015_OBU_T_TM_signature,
    set_UAB_P015_OBU_T_TM_default_value,
    sizeof(UAB_P015_OBU_T_TM)
};

/****************************************************************
 ** UAB_P015_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P015_trackside_int_T_TMVTable;

int UAB_P015_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P015_trackside_int_T_TMVTable != NULL
        && pSimUAB_P015_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P015_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__2629_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P015_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P015_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P015_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__2629(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P015_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P015_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P015_trackside_int_T_TMVTable);
    }
    return is_UAB_struct__2629_double_conversion_allowed();
}

int is_UAB_P015_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P015_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P015_trackside_int_T_TMVTable);
    }
    return is_UAB_struct__2629_long_convertion_allowed();
}

void compare_UAB_P015_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P015_trackside_int_T_TMVTable != NULL
        && pSimUAB_P015_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimUAB_P015_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P015_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P015_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P015_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__2629(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P015_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P015_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P015_trackside_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__2629_to_double(pValue, nRetValue);
}

int UAB_P015_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P015_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P015_trackside_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__2629_to_long(pValue, nRetValue);
}

int get_UAB_P015_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__2629_signature(pfnStrAppend, pData);
}

int set_UAB_P015_trackside_int_T_TM_default_value(void *pValue)
{
    return set_UAB_struct__2629_default_value(pValue);
}

int check_UAB_P015_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static UAB_P015_trackside_int_T_TM rTemp;
    return string_to_UAB_P015_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P015_trackside_int_T_TM_Utils = {
    UAB_P015_trackside_int_T_TM_to_string,
    check_UAB_P015_trackside_int_T_TM_string,
    string_to_UAB_P015_trackside_int_T_TM,
    is_UAB_P015_trackside_int_T_TM_double_conversion_allowed,
    UAB_P015_trackside_int_T_TM_to_double,
    is_UAB_P015_trackside_int_T_TM_long_convertion_allowed,
    UAB_P015_trackside_int_T_TM_to_long,
    compare_UAB_P015_trackside_int_T_TM,
    get_UAB_P015_trackside_int_T_TM_signature,
    set_UAB_P015_trackside_int_T_TM_default_value,
    sizeof(UAB_P015_trackside_int_T_TM)
};

/****************************************************************
 ** UAB_P015_trackide_sectionlist_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P015_trackide_sectionlist_T_TMVTable;

int UAB_P015_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P015_trackide_sectionlist_T_TMVTable != NULL
        && pSimUAB_P015_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P015_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array__2626_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P015_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P015_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P015_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array__2626(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P015_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P015_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P015_trackide_sectionlist_T_TMVTable);
    }
    return is_UAB_array__2626_double_conversion_allowed();
}

int is_UAB_P015_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P015_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P015_trackide_sectionlist_T_TMVTable);
    }
    return is_UAB_array__2626_long_convertion_allowed();
}

void compare_UAB_P015_trackide_sectionlist_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P015_trackide_sectionlist_T_TMVTable != NULL
        && pSimUAB_P015_trackide_sectionlist_T_TMVTable->m_version >= Scv612
        && pSimUAB_P015_trackide_sectionlist_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P015_trackide_sectionlist_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P015_trackide_sectionlist_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P015_trackide_sectionlist_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array__2626(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P015_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P015_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P015_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return UAB_array__2626_to_double(pValue, nRetValue);
}

int UAB_P015_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P015_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P015_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return UAB_array__2626_to_long(pValue, nRetValue);
}

int get_UAB_P015_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array__2626_signature(pfnStrAppend, pData);
}

int set_UAB_P015_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_UAB_array__2626_default_value(pValue);
}

int check_UAB_P015_trackide_sectionlist_T_TM_string(const char *str, char **endptr)
{
    static UAB_P015_trackide_sectionlist_T_TM rTemp;
    return string_to_UAB_P015_trackide_sectionlist_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P015_trackide_sectionlist_T_TM_Utils = {
    UAB_P015_trackide_sectionlist_T_TM_to_string,
    check_UAB_P015_trackide_sectionlist_T_TM_string,
    string_to_UAB_P015_trackide_sectionlist_T_TM,
    is_UAB_P015_trackide_sectionlist_T_TM_double_conversion_allowed,
    UAB_P015_trackide_sectionlist_T_TM_to_double,
    is_UAB_P015_trackide_sectionlist_T_TM_long_convertion_allowed,
    UAB_P015_trackide_sectionlist_T_TM_to_long,
    compare_UAB_P015_trackide_sectionlist_T_TM,
    get_UAB_P015_trackide_sectionlist_T_TM_signature,
    set_UAB_P015_trackide_sectionlist_T_TM_default_value,
    sizeof(UAB_P015_trackide_sectionlist_T_TM)
};

/****************************************************************
 ** UAB_P015_section_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P015_section_int_T_TMVTable;

int UAB_P015_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P015_section_int_T_TMVTable != NULL
        && pSimUAB_P015_section_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P015_section_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__2619_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P015_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P015_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P015_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__2619(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P015_section_int_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P015_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P015_section_int_T_TMVTable);
    }
    return is_UAB_struct__2619_double_conversion_allowed();
}

int is_UAB_P015_section_int_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P015_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P015_section_int_T_TMVTable);
    }
    return is_UAB_struct__2619_long_convertion_allowed();
}

void compare_UAB_P015_section_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P015_section_int_T_TMVTable != NULL
        && pSimUAB_P015_section_int_T_TMVTable->m_version >= Scv612
        && pSimUAB_P015_section_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P015_section_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P015_section_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P015_section_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__2619(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P015_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P015_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P015_section_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__2619_to_double(pValue, nRetValue);
}

int UAB_P015_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P015_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P015_section_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__2619_to_long(pValue, nRetValue);
}

int get_UAB_P015_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__2619_signature(pfnStrAppend, pData);
}

int set_UAB_P015_section_int_T_TM_default_value(void *pValue)
{
    return set_UAB_struct__2619_default_value(pValue);
}

int check_UAB_P015_section_int_T_TM_string(const char *str, char **endptr)
{
    static UAB_P015_section_int_T_TM rTemp;
    return string_to_UAB_P015_section_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P015_section_int_T_TM_Utils = {
    UAB_P015_section_int_T_TM_to_string,
    check_UAB_P015_section_int_T_TM_string,
    string_to_UAB_P015_section_int_T_TM,
    is_UAB_P015_section_int_T_TM_double_conversion_allowed,
    UAB_P015_section_int_T_TM_to_double,
    is_UAB_P015_section_int_T_TM_long_convertion_allowed,
    UAB_P015_section_int_T_TM_to_long,
    compare_UAB_P015_section_int_T_TM,
    get_UAB_P015_section_int_T_TM_signature,
    set_UAB_P015_section_int_T_TM_default_value,
    sizeof(UAB_P015_section_int_T_TM)
};

/****************************************************************
 ** UAB_P015_OBU_sectionlist_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P015_OBU_sectionlist_array_T_TMVTable;

int UAB_P015_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P015_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimUAB_P015_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P015_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array_int_4_32_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P015_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P015_OBU_sectionlist_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P015_OBU_sectionlist_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array_int_4_32(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P015_OBU_sectionlist_array_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P015_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P015_OBU_sectionlist_array_T_TMVTable);
    }
    return is_UAB_array_int_4_32_double_conversion_allowed();
}

int is_UAB_P015_OBU_sectionlist_array_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P015_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P015_OBU_sectionlist_array_T_TMVTable);
    }
    return is_UAB_array_int_4_32_long_convertion_allowed();
}

void compare_UAB_P015_OBU_sectionlist_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P015_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimUAB_P015_OBU_sectionlist_array_T_TMVTable->m_version >= Scv612
        && pSimUAB_P015_OBU_sectionlist_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P015_OBU_sectionlist_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P015_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P015_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array_int_4_32(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P015_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P015_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P015_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return UAB_array_int_4_32_to_double(pValue, nRetValue);
}

int UAB_P015_OBU_sectionlist_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P015_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P015_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return UAB_array_int_4_32_to_long(pValue, nRetValue);
}

int get_UAB_P015_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array_int_4_32_signature(pfnStrAppend, pData);
}

int set_UAB_P015_OBU_sectionlist_array_T_TM_default_value(void *pValue)
{
    return set_UAB_array_int_4_32_default_value(pValue);
}

int check_UAB_P015_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr)
{
    static UAB_P015_OBU_sectionlist_array_T_TM rTemp;
    return string_to_UAB_P015_OBU_sectionlist_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P015_OBU_sectionlist_array_T_TM_Utils = {
    UAB_P015_OBU_sectionlist_array_T_TM_to_string,
    check_UAB_P015_OBU_sectionlist_array_T_TM_string,
    string_to_UAB_P015_OBU_sectionlist_array_T_TM,
    is_UAB_P015_OBU_sectionlist_array_T_TM_double_conversion_allowed,
    UAB_P015_OBU_sectionlist_array_T_TM_to_double,
    is_UAB_P015_OBU_sectionlist_array_T_TM_long_convertion_allowed,
    UAB_P015_OBU_sectionlist_array_T_TM_to_long,
    compare_UAB_P015_OBU_sectionlist_array_T_TM,
    get_UAB_P015_OBU_sectionlist_array_T_TM_signature,
    set_UAB_P015_OBU_sectionlist_array_T_TM_default_value,
    sizeof(UAB_P015_OBU_sectionlist_array_T_TM)
};

/****************************************************************
 ** UAB_P015_section_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P015_section_array_T_TMVTable;

int UAB_P015_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P015_section_array_T_TMVTable != NULL
        && pSimUAB_P015_section_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P015_section_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array_int_4_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P015_section_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P015_section_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P015_section_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array_int_4(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P015_section_array_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P015_section_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P015_section_array_T_TMVTable);
    }
    return is_UAB_array_int_4_double_conversion_allowed();
}

int is_UAB_P015_section_array_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P015_section_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P015_section_array_T_TMVTable);
    }
    return is_UAB_array_int_4_long_convertion_allowed();
}

void compare_UAB_P015_section_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P015_section_array_T_TMVTable != NULL
        && pSimUAB_P015_section_array_T_TMVTable->m_version >= Scv612
        && pSimUAB_P015_section_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P015_section_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P015_section_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P015_section_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array_int_4(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P015_section_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P015_section_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P015_section_array_T_TMVTable, nRetValue);
    }
    return UAB_array_int_4_to_double(pValue, nRetValue);
}

int UAB_P015_section_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P015_section_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P015_section_array_T_TMVTable, nRetValue);
    }
    return UAB_array_int_4_to_long(pValue, nRetValue);
}

int get_UAB_P015_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array_int_4_signature(pfnStrAppend, pData);
}

int set_UAB_P015_section_array_T_TM_default_value(void *pValue)
{
    return set_UAB_array_int_4_default_value(pValue);
}

int check_UAB_P015_section_array_T_TM_string(const char *str, char **endptr)
{
    static UAB_P015_section_array_T_TM rTemp;
    return string_to_UAB_P015_section_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P015_section_array_T_TM_Utils = {
    UAB_P015_section_array_T_TM_to_string,
    check_UAB_P015_section_array_T_TM_string,
    string_to_UAB_P015_section_array_T_TM,
    is_UAB_P015_section_array_T_TM_double_conversion_allowed,
    UAB_P015_section_array_T_TM_to_double,
    is_UAB_P015_section_array_T_TM_long_convertion_allowed,
    UAB_P015_section_array_T_TM_to_long,
    compare_UAB_P015_section_array_T_TM,
    get_UAB_P015_section_array_T_TM_signature,
    set_UAB_P015_section_array_T_TM_default_value,
    sizeof(UAB_P015_section_array_T_TM)
};

/****************************************************************
 ** UAB_P015_OBU_sectionlist_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P015_OBU_sectionlist_int_T_TMVTable;

int UAB_P015_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P015_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimUAB_P015_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P015_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array__2626_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P015_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P015_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P015_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array__2626(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P015_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P015_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P015_OBU_sectionlist_int_T_TMVTable);
    }
    return is_UAB_array__2626_double_conversion_allowed();
}

int is_UAB_P015_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P015_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P015_OBU_sectionlist_int_T_TMVTable);
    }
    return is_UAB_array__2626_long_convertion_allowed();
}

void compare_UAB_P015_OBU_sectionlist_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P015_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimUAB_P015_OBU_sectionlist_int_T_TMVTable->m_version >= Scv612
        && pSimUAB_P015_OBU_sectionlist_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P015_OBU_sectionlist_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P015_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P015_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array__2626(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P015_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P015_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P015_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return UAB_array__2626_to_double(pValue, nRetValue);
}

int UAB_P015_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P015_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P015_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return UAB_array__2626_to_long(pValue, nRetValue);
}

int get_UAB_P015_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array__2626_signature(pfnStrAppend, pData);
}

int set_UAB_P015_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_UAB_array__2626_default_value(pValue);
}

int check_UAB_P015_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr)
{
    static UAB_P015_OBU_sectionlist_int_T_TM rTemp;
    return string_to_UAB_P015_OBU_sectionlist_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P015_OBU_sectionlist_int_T_TM_Utils = {
    UAB_P015_OBU_sectionlist_int_T_TM_to_string,
    check_UAB_P015_OBU_sectionlist_int_T_TM_string,
    string_to_UAB_P015_OBU_sectionlist_int_T_TM,
    is_UAB_P015_OBU_sectionlist_int_T_TM_double_conversion_allowed,
    UAB_P015_OBU_sectionlist_int_T_TM_to_double,
    is_UAB_P015_OBU_sectionlist_int_T_TM_long_convertion_allowed,
    UAB_P015_OBU_sectionlist_int_T_TM_to_long,
    compare_UAB_P015_OBU_sectionlist_int_T_TM,
    get_UAB_P015_OBU_sectionlist_int_T_TM_signature,
    set_UAB_P015_OBU_sectionlist_int_T_TM_default_value,
    sizeof(UAB_P015_OBU_sectionlist_int_T_TM)
};

/****************************************************************
 ** UAB_nid_packet_meta_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_nid_packet_meta_TMVTable;

int UAB_nid_packet_meta_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_nid_packet_meta_TMVTable != NULL
        && pSimUAB_nid_packet_meta_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_nid_packet_meta_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_nid_packet_meta_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_nid_packet_meta_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_nid_packet_meta_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_nid_packet_meta_TM_double_conversion_allowed()
{
    if (pSimUAB_nid_packet_meta_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_nid_packet_meta_TMVTable);
    }
    return is_kcg_int_double_conversion_allowed();
}

int is_UAB_nid_packet_meta_TM_long_convertion_allowed()
{
    if (pSimUAB_nid_packet_meta_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_nid_packet_meta_TMVTable);
    }
    return is_kcg_int_long_convertion_allowed();
}

void compare_UAB_nid_packet_meta_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_nid_packet_meta_TMVTable != NULL
        && pSimUAB_nid_packet_meta_TMVTable->m_version >= Scv612
        && pSimUAB_nid_packet_meta_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_nid_packet_meta_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_nid_packet_meta_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_nid_packet_meta_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_nid_packet_meta_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_nid_packet_meta_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_nid_packet_meta_TMVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int UAB_nid_packet_meta_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_nid_packet_meta_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_nid_packet_meta_TMVTable, nRetValue);
    }
    return kcg_int_to_long(pValue, nRetValue);
}

int get_UAB_nid_packet_meta_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_UAB_nid_packet_meta_TM_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_UAB_nid_packet_meta_TM_string(const char *str, char **endptr)
{
    static UAB_nid_packet_meta_TM rTemp;
    return string_to_UAB_nid_packet_meta_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_nid_packet_meta_TM_Utils = {
    UAB_nid_packet_meta_TM_to_string,
    check_UAB_nid_packet_meta_TM_string,
    string_to_UAB_nid_packet_meta_TM,
    is_UAB_nid_packet_meta_TM_double_conversion_allowed,
    UAB_nid_packet_meta_TM_to_double,
    is_UAB_nid_packet_meta_TM_long_convertion_allowed,
    UAB_nid_packet_meta_TM_to_long,
    compare_UAB_nid_packet_meta_TM,
    get_UAB_nid_packet_meta_TM_signature,
    set_UAB_nid_packet_meta_TM_default_value,
    sizeof(UAB_nid_packet_meta_TM)
};

/****************************************************************
 ** UAB_MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_MetadataElement_T_Common_Types_PkgVTable;

int UAB_MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_MetadataElement_T_Common_Types_PkgVTable != NULL
        && pSimUAB_MetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_MetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__2659_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_MetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_MetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__2659(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimUAB_MetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_MetadataElement_T_Common_Types_PkgVTable);
    }
    return is_UAB_struct__2659_double_conversion_allowed();
}

int is_UAB_MetadataElement_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimUAB_MetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_MetadataElement_T_Common_Types_PkgVTable);
    }
    return is_UAB_struct__2659_long_convertion_allowed();
}

void compare_UAB_MetadataElement_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_MetadataElement_T_Common_Types_PkgVTable != NULL
        && pSimUAB_MetadataElement_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimUAB_MetadataElement_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimUAB_MetadataElement_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_MetadataElement_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_MetadataElement_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__2659(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_MetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_MetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return UAB_struct__2659_to_double(pValue, nRetValue);
}

int UAB_MetadataElement_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_MetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_MetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return UAB_struct__2659_to_long(pValue, nRetValue);
}

int get_UAB_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__2659_signature(pfnStrAppend, pData);
}

int set_UAB_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_UAB_struct__2659_default_value(pValue);
}

int check_UAB_MetadataElement_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static UAB_MetadataElement_T_Common_Types_Pkg rTemp;
    return string_to_UAB_MetadataElement_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_MetadataElement_T_Common_Types_Pkg_Utils = {
    UAB_MetadataElement_T_Common_Types_Pkg_to_string,
    check_UAB_MetadataElement_T_Common_Types_Pkg_string,
    string_to_UAB_MetadataElement_T_Common_Types_Pkg,
    is_UAB_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed,
    UAB_MetadataElement_T_Common_Types_Pkg_to_double,
    is_UAB_MetadataElement_T_Common_Types_Pkg_long_convertion_allowed,
    UAB_MetadataElement_T_Common_Types_Pkg_to_long,
    compare_UAB_MetadataElement_T_Common_Types_Pkg,
    get_UAB_MetadataElement_T_Common_Types_Pkg_signature,
    set_UAB_MetadataElement_T_Common_Types_Pkg_default_value,
    sizeof(UAB_MetadataElement_T_Common_Types_Pkg)
};

/****************************************************************
 ** UAB_Metadata_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_Metadata_T_Common_Types_PkgVTable;

int UAB_Metadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_Metadata_T_Common_Types_PkgVTable != NULL
        && pSimUAB_Metadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_Metadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array__2676_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_Metadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_Metadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array__2676(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_Metadata_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimUAB_Metadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_Metadata_T_Common_Types_PkgVTable);
    }
    return is_UAB_array__2676_double_conversion_allowed();
}

int is_UAB_Metadata_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimUAB_Metadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_Metadata_T_Common_Types_PkgVTable);
    }
    return is_UAB_array__2676_long_convertion_allowed();
}

void compare_UAB_Metadata_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_Metadata_T_Common_Types_PkgVTable != NULL
        && pSimUAB_Metadata_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimUAB_Metadata_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimUAB_Metadata_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_Metadata_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_Metadata_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array__2676(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_Metadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_Metadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return UAB_array__2676_to_double(pValue, nRetValue);
}

int UAB_Metadata_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_Metadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_Metadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return UAB_array__2676_to_long(pValue, nRetValue);
}

int get_UAB_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array__2676_signature(pfnStrAppend, pData);
}

int set_UAB_Metadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_UAB_array__2676_default_value(pValue);
}

int check_UAB_Metadata_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static UAB_Metadata_T_Common_Types_Pkg rTemp;
    return string_to_UAB_Metadata_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_Metadata_T_Common_Types_Pkg_Utils = {
    UAB_Metadata_T_Common_Types_Pkg_to_string,
    check_UAB_Metadata_T_Common_Types_Pkg_string,
    string_to_UAB_Metadata_T_Common_Types_Pkg,
    is_UAB_Metadata_T_Common_Types_Pkg_double_conversion_allowed,
    UAB_Metadata_T_Common_Types_Pkg_to_double,
    is_UAB_Metadata_T_Common_Types_Pkg_long_convertion_allowed,
    UAB_Metadata_T_Common_Types_Pkg_to_long,
    compare_UAB_Metadata_T_Common_Types_Pkg,
    get_UAB_Metadata_T_Common_Types_Pkg_signature,
    set_UAB_Metadata_T_Common_Types_Pkg_default_value,
    sizeof(UAB_Metadata_T_Common_Types_Pkg)
};

/****************************************************************
 ** UAB_CompressedPacketData_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable;

int UAB_CompressedPacketData_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable != NULL
        && pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array_int_500_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_CompressedPacketData_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array_int_500(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_CompressedPacketData_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable);
    }
    return is_UAB_array_int_500_double_conversion_allowed();
}

int is_UAB_CompressedPacketData_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable);
    }
    return is_UAB_array_int_500_long_convertion_allowed();
}

void compare_UAB_CompressedPacketData_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable != NULL
        && pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array_int_500(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_CompressedPacketData_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable, nRetValue);
    }
    return UAB_array_int_500_to_double(pValue, nRetValue);
}

int UAB_CompressedPacketData_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_CompressedPacketData_T_Common_Types_PkgVTable, nRetValue);
    }
    return UAB_array_int_500_to_long(pValue, nRetValue);
}

int get_UAB_CompressedPacketData_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array_int_500_signature(pfnStrAppend, pData);
}

int set_UAB_CompressedPacketData_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_UAB_array_int_500_default_value(pValue);
}

int check_UAB_CompressedPacketData_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static UAB_CompressedPacketData_T_Common_Types_Pkg rTemp;
    return string_to_UAB_CompressedPacketData_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_CompressedPacketData_T_Common_Types_Pkg_Utils = {
    UAB_CompressedPacketData_T_Common_Types_Pkg_to_string,
    check_UAB_CompressedPacketData_T_Common_Types_Pkg_string,
    string_to_UAB_CompressedPacketData_T_Common_Types_Pkg,
    is_UAB_CompressedPacketData_T_Common_Types_Pkg_double_conversion_allowed,
    UAB_CompressedPacketData_T_Common_Types_Pkg_to_double,
    is_UAB_CompressedPacketData_T_Common_Types_Pkg_long_convertion_allowed,
    UAB_CompressedPacketData_T_Common_Types_Pkg_to_long,
    compare_UAB_CompressedPacketData_T_Common_Types_Pkg,
    get_UAB_CompressedPacketData_T_Common_Types_Pkg_signature,
    set_UAB_CompressedPacketData_T_Common_Types_Pkg_default_value,
    sizeof(UAB_CompressedPacketData_T_Common_Types_Pkg)
};

/****************************************************************
 ** UAB_CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_CompressedPackets_T_Common_Types_PkgVTable;

int UAB_CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_CompressedPackets_T_Common_Types_PkgVTable != NULL
        && pSimUAB_CompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_CompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__2679_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_CompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_CompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__2679(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimUAB_CompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_CompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_UAB_struct__2679_double_conversion_allowed();
}

int is_UAB_CompressedPackets_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimUAB_CompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_CompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_UAB_struct__2679_long_convertion_allowed();
}

void compare_UAB_CompressedPackets_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_CompressedPackets_T_Common_Types_PkgVTable != NULL
        && pSimUAB_CompressedPackets_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimUAB_CompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimUAB_CompressedPackets_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_CompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_CompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__2679(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_CompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_CompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return UAB_struct__2679_to_double(pValue, nRetValue);
}

int UAB_CompressedPackets_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_CompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_CompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return UAB_struct__2679_to_long(pValue, nRetValue);
}

int get_UAB_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__2679_signature(pfnStrAppend, pData);
}

int set_UAB_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_UAB_struct__2679_default_value(pValue);
}

int check_UAB_CompressedPackets_T_Common_Types_Pkg_string(const char *str, char **endptr)
{
    static UAB_CompressedPackets_T_Common_Types_Pkg rTemp;
    return string_to_UAB_CompressedPackets_T_Common_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_CompressedPackets_T_Common_Types_Pkg_Utils = {
    UAB_CompressedPackets_T_Common_Types_Pkg_to_string,
    check_UAB_CompressedPackets_T_Common_Types_Pkg_string,
    string_to_UAB_CompressedPackets_T_Common_Types_Pkg,
    is_UAB_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed,
    UAB_CompressedPackets_T_Common_Types_Pkg_to_double,
    is_UAB_CompressedPackets_T_Common_Types_Pkg_long_convertion_allowed,
    UAB_CompressedPackets_T_Common_Types_Pkg_to_long,
    compare_UAB_CompressedPackets_T_Common_Types_Pkg,
    get_UAB_CompressedPackets_T_Common_Types_Pkg_signature,
    set_UAB_CompressedPackets_T_Common_Types_Pkg_default_value,
    sizeof(UAB_CompressedPackets_T_Common_Types_Pkg)
};

#include "C:/Program Files/Esterel Technologies/SCADE R16.1/SCADE/lib/kcg_conv.c"
