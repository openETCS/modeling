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
 ** UAB_struct__21238 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21238VTable;

static SimFieldUtils UAB_struct__21238_fields[] = {
    {"TrainPos_in", offsetof(UAB_struct__21238,TrainPos_in), &_Type_kcg_real_Utils},
    {"OffsetTotal", offsetof(UAB_struct__21238,OffsetTotal), &_Type_kcg_int_Utils},
    {"TrainPosCalibrated", offsetof(UAB_struct__21238,TrainPosCalibrated), &_Type_kcg_real_Utils},
};

int UAB_struct__21238_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21238VTable != NULL
        && pSimUAB_struct__21238VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21238VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21238_fields, 3, pfnStrAppend, pData);
}

int string_to_UAB_struct__21238(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21238VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21238VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21238_fields, 3, endptr);
    }
    return nRet;
}

int is_UAB_struct__21238_double_conversion_allowed()
{
    if (pSimUAB_struct__21238VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21238VTable);
    }
    return 0;
}

int is_UAB_struct__21238_long_convertion_allowed()
{
    if (pSimUAB_struct__21238VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21238VTable);
    }
    return 0;
}

void compare_UAB_struct__21238(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21238VTable != NULL
        && pSimUAB_struct__21238VTable->m_version >= Scv612
        && pSimUAB_struct__21238VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21238VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21238VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21238VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21238_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21238_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21238VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21238VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21238_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21238VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21238VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21238_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21238_fields, 3, pfnStrAppend, pData);
}

int set_UAB_struct__21238_default_value(void *pValue)
{
    set_kcg_real_default_value(&(((UAB_struct__21238*)pValue)->TrainPos_in));
    set_kcg_int_default_value(&(((UAB_struct__21238*)pValue)->OffsetTotal));
    set_kcg_real_default_value(&(((UAB_struct__21238*)pValue)->TrainPosCalibrated));
    return 1;
}

int check_UAB_struct__21238_string(const char *str, char **endptr)
{
    static UAB_struct__21238 rTemp;
    return string_to_UAB_struct__21238(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21238_Utils = {
    UAB_struct__21238_to_string,
    check_UAB_struct__21238_string,
    string_to_UAB_struct__21238,
    is_UAB_struct__21238_double_conversion_allowed,
    UAB_struct__21238_to_double,
    is_UAB_struct__21238_long_convertion_allowed,
    UAB_struct__21238_to_long,
    compare_UAB_struct__21238,
    get_UAB_struct__21238_signature,
    set_UAB_struct__21238_default_value,
    sizeof(UAB_struct__21238)
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
 ** UAB_struct__21247 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21247VTable;

static SimFieldUtils UAB_struct__21247_fields[] = {
    {"nid_packet", offsetof(UAB_struct__21247,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(UAB_struct__21247,q_dir), &_Type_UAB_Q_DIR_Utils},
    {"valid", offsetof(UAB_struct__21247,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(UAB_struct__21247,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(UAB_struct__21247,endAddress), &_Type_kcg_int_Utils},
};

int UAB_struct__21247_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21247VTable != NULL
        && pSimUAB_struct__21247VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21247VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21247_fields, 5, pfnStrAppend, pData);
}

int string_to_UAB_struct__21247(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21247VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21247VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21247_fields, 5, endptr);
    }
    return nRet;
}

int is_UAB_struct__21247_double_conversion_allowed()
{
    if (pSimUAB_struct__21247VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21247VTable);
    }
    return 0;
}

int is_UAB_struct__21247_long_convertion_allowed()
{
    if (pSimUAB_struct__21247VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21247VTable);
    }
    return 0;
}

void compare_UAB_struct__21247(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21247VTable != NULL
        && pSimUAB_struct__21247VTable->m_version >= Scv612
        && pSimUAB_struct__21247VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21247VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21247VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21247VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21247_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21247_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21247VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21247VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21247_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21247VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21247VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21247_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21247_fields, 5, pfnStrAppend, pData);
}

int set_UAB_struct__21247_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((UAB_struct__21247*)pValue)->nid_packet));
    set_UAB_Q_DIR_default_value(&(((UAB_struct__21247*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((UAB_struct__21247*)pValue)->valid));
    set_kcg_int_default_value(&(((UAB_struct__21247*)pValue)->startAddress));
    set_kcg_int_default_value(&(((UAB_struct__21247*)pValue)->endAddress));
    return 1;
}

int check_UAB_struct__21247_string(const char *str, char **endptr)
{
    static UAB_struct__21247 rTemp;
    return string_to_UAB_struct__21247(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21247_Utils = {
    UAB_struct__21247_to_string,
    check_UAB_struct__21247_string,
    string_to_UAB_struct__21247,
    is_UAB_struct__21247_double_conversion_allowed,
    UAB_struct__21247_to_double,
    is_UAB_struct__21247_long_convertion_allowed,
    UAB_struct__21247_to_long,
    compare_UAB_struct__21247,
    get_UAB_struct__21247_signature,
    set_UAB_struct__21247_default_value,
    sizeof(UAB_struct__21247)
};

/****************************************************************
 ** UAB_array__21255 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array__21255VTable;

int UAB_array__21255_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array__21255VTable != NULL
        && pSimUAB_array__21255VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array__21255VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, UAB_struct__21247_to_string, 30, sizeof(UAB_struct__21247), pfnStrAppend, pData);
}

int string_to_UAB_array__21255(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array__21255VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array__21255VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_UAB_struct__21247_Utils, 30, sizeof(UAB_struct__21247), endptr);
    }
    return nRet;
}

int is_UAB_array__21255_double_conversion_allowed()
{
    if (pSimUAB_array__21255VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array__21255VTable);
    }
    return 0;
}

int is_UAB_array__21255_long_convertion_allowed()
{
    if (pSimUAB_array__21255VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array__21255VTable);
    }
    return 0;
}

void compare_UAB_array__21255(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array__21255VTable != NULL
        && pSimUAB_array__21255VTable->m_version >= Scv612
        && pSimUAB_array__21255VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array__21255VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array__21255VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array__21255VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_UAB_struct__21247, 30, sizeof(UAB_struct__21247), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_array__21255_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array__21255VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array__21255VTable, nRetValue);
    }
    return 0;
}

int UAB_array__21255_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array__21255VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array__21255VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array__21255_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_UAB_struct__21247_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_UAB_array__21255_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_UAB_struct__21247_default_value(&((UAB_struct__21247*)pValue)[i]);
    return 1;
}

int check_UAB_array__21255_string(const char *str, char **endptr)
{
    static UAB_array__21255 rTemp;
    return string_to_UAB_array__21255(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array__21255_Utils = {
    UAB_array__21255_to_string,
    check_UAB_array__21255_string,
    string_to_UAB_array__21255,
    is_UAB_array__21255_double_conversion_allowed,
    UAB_array__21255_to_double,
    is_UAB_array__21255_long_convertion_allowed,
    UAB_array__21255_to_long,
    compare_UAB_array__21255,
    get_UAB_array__21255_signature,
    set_UAB_array__21255_default_value,
    sizeof(UAB_array__21255)
};

/****************************************************************
 ** UAB_struct__21258 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21258VTable;

static SimFieldUtils UAB_struct__21258_fields[] = {
    {"PacketHeaders", offsetof(UAB_struct__21258,PacketHeaders), &_Type_UAB_array__21255_Utils},
    {"PacketData", offsetof(UAB_struct__21258,PacketData), &_Type_UAB_array_int_500_Utils},
};

int UAB_struct__21258_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21258VTable != NULL
        && pSimUAB_struct__21258VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21258VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21258_fields, 2, pfnStrAppend, pData);
}

int string_to_UAB_struct__21258(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21258VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21258VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21258_fields, 2, endptr);
    }
    return nRet;
}

int is_UAB_struct__21258_double_conversion_allowed()
{
    if (pSimUAB_struct__21258VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21258VTable);
    }
    return 0;
}

int is_UAB_struct__21258_long_convertion_allowed()
{
    if (pSimUAB_struct__21258VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21258VTable);
    }
    return 0;
}

void compare_UAB_struct__21258(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21258VTable != NULL
        && pSimUAB_struct__21258VTable->m_version >= Scv612
        && pSimUAB_struct__21258VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21258VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21258VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21258VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21258_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21258_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21258VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21258VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21258_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21258VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21258VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21258_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21258_fields, 2, pfnStrAppend, pData);
}

int set_UAB_struct__21258_default_value(void *pValue)
{
    set_UAB_array__21255_default_value(&(((UAB_struct__21258*)pValue)->PacketHeaders));
    set_UAB_array_int_500_default_value(&(((UAB_struct__21258*)pValue)->PacketData));
    return 1;
}

int check_UAB_struct__21258_string(const char *str, char **endptr)
{
    static UAB_struct__21258 rTemp;
    return string_to_UAB_struct__21258(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21258_Utils = {
    UAB_struct__21258_to_string,
    check_UAB_struct__21258_string,
    string_to_UAB_struct__21258,
    is_UAB_struct__21258_double_conversion_allowed,
    UAB_struct__21258_to_double,
    is_UAB_struct__21258_long_convertion_allowed,
    UAB_struct__21258_to_long,
    compare_UAB_struct__21258,
    get_UAB_struct__21258_signature,
    set_UAB_struct__21258_default_value,
    sizeof(UAB_struct__21258)
};

/****************************************************************
 ** UAB_struct__21263 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21263VTable;

static SimFieldUtils UAB_struct__21263_fields[] = {
    {"q_updown", offsetof(UAB_struct__21263,q_updown), &_Type_kcg_int_Utils},
    {"m_version", offsetof(UAB_struct__21263,m_version), &_Type_kcg_int_Utils},
    {"q_media", offsetof(UAB_struct__21263,q_media), &_Type_kcg_int_Utils},
    {"n_pig", offsetof(UAB_struct__21263,n_pig), &_Type_kcg_int_Utils},
    {"n_total", offsetof(UAB_struct__21263,n_total), &_Type_kcg_int_Utils},
    {"m_dup", offsetof(UAB_struct__21263,m_dup), &_Type_kcg_int_Utils},
    {"m_mcount", offsetof(UAB_struct__21263,m_mcount), &_Type_kcg_int_Utils},
    {"nid_c", offsetof(UAB_struct__21263,nid_c), &_Type_kcg_int_Utils},
    {"nid_bg", offsetof(UAB_struct__21263,nid_bg), &_Type_kcg_int_Utils},
    {"q_link", offsetof(UAB_struct__21263,q_link), &_Type_kcg_int_Utils},
};

int UAB_struct__21263_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21263VTable != NULL
        && pSimUAB_struct__21263VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21263VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21263_fields, 10, pfnStrAppend, pData);
}

int string_to_UAB_struct__21263(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21263VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21263VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21263_fields, 10, endptr);
    }
    return nRet;
}

int is_UAB_struct__21263_double_conversion_allowed()
{
    if (pSimUAB_struct__21263VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21263VTable);
    }
    return 0;
}

int is_UAB_struct__21263_long_convertion_allowed()
{
    if (pSimUAB_struct__21263VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21263VTable);
    }
    return 0;
}

void compare_UAB_struct__21263(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21263VTable != NULL
        && pSimUAB_struct__21263VTable->m_version >= Scv612
        && pSimUAB_struct__21263VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21263VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21263VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21263VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21263_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21263_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21263VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21263VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21263_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21263VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21263VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21263_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21263_fields, 10, pfnStrAppend, pData);
}

int set_UAB_struct__21263_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((UAB_struct__21263*)pValue)->q_updown));
    set_kcg_int_default_value(&(((UAB_struct__21263*)pValue)->m_version));
    set_kcg_int_default_value(&(((UAB_struct__21263*)pValue)->q_media));
    set_kcg_int_default_value(&(((UAB_struct__21263*)pValue)->n_pig));
    set_kcg_int_default_value(&(((UAB_struct__21263*)pValue)->n_total));
    set_kcg_int_default_value(&(((UAB_struct__21263*)pValue)->m_dup));
    set_kcg_int_default_value(&(((UAB_struct__21263*)pValue)->m_mcount));
    set_kcg_int_default_value(&(((UAB_struct__21263*)pValue)->nid_c));
    set_kcg_int_default_value(&(((UAB_struct__21263*)pValue)->nid_bg));
    set_kcg_int_default_value(&(((UAB_struct__21263*)pValue)->q_link));
    return 1;
}

int check_UAB_struct__21263_string(const char *str, char **endptr)
{
    static UAB_struct__21263 rTemp;
    return string_to_UAB_struct__21263(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21263_Utils = {
    UAB_struct__21263_to_string,
    check_UAB_struct__21263_string,
    string_to_UAB_struct__21263,
    is_UAB_struct__21263_double_conversion_allowed,
    UAB_struct__21263_to_double,
    is_UAB_struct__21263_long_convertion_allowed,
    UAB_struct__21263_to_long,
    compare_UAB_struct__21263,
    get_UAB_struct__21263_signature,
    set_UAB_struct__21263_default_value,
    sizeof(UAB_struct__21263)
};

/****************************************************************
 ** UAB_struct__21276 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21276VTable;

static SimFieldUtils UAB_struct__21276_fields[] = {
    {"Header", offsetof(UAB_struct__21276,Header), &_Type_UAB_struct__21263_Utils},
    {"Messages", offsetof(UAB_struct__21276,Messages), &_Type_UAB_struct__21258_Utils},
};

int UAB_struct__21276_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21276VTable != NULL
        && pSimUAB_struct__21276VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21276VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21276_fields, 2, pfnStrAppend, pData);
}

int string_to_UAB_struct__21276(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21276VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21276VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21276_fields, 2, endptr);
    }
    return nRet;
}

int is_UAB_struct__21276_double_conversion_allowed()
{
    if (pSimUAB_struct__21276VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21276VTable);
    }
    return 0;
}

int is_UAB_struct__21276_long_convertion_allowed()
{
    if (pSimUAB_struct__21276VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21276VTable);
    }
    return 0;
}

void compare_UAB_struct__21276(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21276VTable != NULL
        && pSimUAB_struct__21276VTable->m_version >= Scv612
        && pSimUAB_struct__21276VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21276VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21276VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21276VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21276_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21276_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21276VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21276VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21276_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21276VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21276VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21276_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21276_fields, 2, pfnStrAppend, pData);
}

int set_UAB_struct__21276_default_value(void *pValue)
{
    set_UAB_struct__21263_default_value(&(((UAB_struct__21276*)pValue)->Header));
    set_UAB_struct__21258_default_value(&(((UAB_struct__21276*)pValue)->Messages));
    return 1;
}

int check_UAB_struct__21276_string(const char *str, char **endptr)
{
    static UAB_struct__21276 rTemp;
    return string_to_UAB_struct__21276(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21276_Utils = {
    UAB_struct__21276_to_string,
    check_UAB_struct__21276_string,
    string_to_UAB_struct__21276,
    is_UAB_struct__21276_double_conversion_allowed,
    UAB_struct__21276_to_double,
    is_UAB_struct__21276_long_convertion_allowed,
    UAB_struct__21276_to_long,
    compare_UAB_struct__21276,
    get_UAB_struct__21276_signature,
    set_UAB_struct__21276_default_value,
    sizeof(UAB_struct__21276)
};

/****************************************************************
 ** UAB_struct__21281 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21281VTable;

static SimFieldUtils UAB_struct__21281_fields[] = {
    {"TrainPosRaw", offsetof(UAB_struct__21281,TrainPosRaw), &_Type_UAB_struct__21238_Utils},
    {"BG_Message", offsetof(UAB_struct__21281,BG_Message), &_Type_UAB_struct__21276_Utils},
};

int UAB_struct__21281_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21281VTable != NULL
        && pSimUAB_struct__21281VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21281VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21281_fields, 2, pfnStrAppend, pData);
}

int string_to_UAB_struct__21281(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21281VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21281VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21281_fields, 2, endptr);
    }
    return nRet;
}

int is_UAB_struct__21281_double_conversion_allowed()
{
    if (pSimUAB_struct__21281VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21281VTable);
    }
    return 0;
}

int is_UAB_struct__21281_long_convertion_allowed()
{
    if (pSimUAB_struct__21281VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21281VTable);
    }
    return 0;
}

void compare_UAB_struct__21281(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21281VTable != NULL
        && pSimUAB_struct__21281VTable->m_version >= Scv612
        && pSimUAB_struct__21281VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21281VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21281VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21281VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21281_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21281_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21281VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21281VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21281_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21281VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21281VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21281_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21281_fields, 2, pfnStrAppend, pData);
}

int set_UAB_struct__21281_default_value(void *pValue)
{
    set_UAB_struct__21238_default_value(&(((UAB_struct__21281*)pValue)->TrainPosRaw));
    set_UAB_struct__21276_default_value(&(((UAB_struct__21281*)pValue)->BG_Message));
    return 1;
}

int check_UAB_struct__21281_string(const char *str, char **endptr)
{
    static UAB_struct__21281 rTemp;
    return string_to_UAB_struct__21281(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21281_Utils = {
    UAB_struct__21281_to_string,
    check_UAB_struct__21281_string,
    string_to_UAB_struct__21281,
    is_UAB_struct__21281_double_conversion_allowed,
    UAB_struct__21281_to_double,
    is_UAB_struct__21281_long_convertion_allowed,
    UAB_struct__21281_to_long,
    compare_UAB_struct__21281,
    get_UAB_struct__21281_signature,
    set_UAB_struct__21281_default_value,
    sizeof(UAB_struct__21281)
};

/****************************************************************
 ** UAB_struct__21286 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21286VTable;

static SimFieldUtils UAB_struct__21286_fields[] = {
    {"NID_C", offsetof(UAB_struct__21286,NID_C), &_Type_kcg_int_Utils},
    {"NID_BG", offsetof(UAB_struct__21286,NID_BG), &_Type_kcg_int_Utils},
    {"Pos", offsetof(UAB_struct__21286,Pos), &_Type_kcg_int_Utils},
    {"Or_BG", offsetof(UAB_struct__21286,Or_BG), &_Type_UAB_OrBG_TM_Utils},
    {"Or_Line", offsetof(UAB_struct__21286,Or_Line), &_Type_UAB_OrLine_TM_Utils},
};

int UAB_struct__21286_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21286VTable != NULL
        && pSimUAB_struct__21286VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21286VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21286_fields, 5, pfnStrAppend, pData);
}

int string_to_UAB_struct__21286(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21286VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21286VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21286_fields, 5, endptr);
    }
    return nRet;
}

int is_UAB_struct__21286_double_conversion_allowed()
{
    if (pSimUAB_struct__21286VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21286VTable);
    }
    return 0;
}

int is_UAB_struct__21286_long_convertion_allowed()
{
    if (pSimUAB_struct__21286VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21286VTable);
    }
    return 0;
}

void compare_UAB_struct__21286(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21286VTable != NULL
        && pSimUAB_struct__21286VTable->m_version >= Scv612
        && pSimUAB_struct__21286VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21286VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21286VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21286VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21286_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21286_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21286VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21286VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21286_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21286VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21286VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21286_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21286_fields, 5, pfnStrAppend, pData);
}

int set_UAB_struct__21286_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((UAB_struct__21286*)pValue)->NID_C));
    set_kcg_int_default_value(&(((UAB_struct__21286*)pValue)->NID_BG));
    set_kcg_int_default_value(&(((UAB_struct__21286*)pValue)->Pos));
    set_UAB_OrBG_TM_default_value(&(((UAB_struct__21286*)pValue)->Or_BG));
    set_UAB_OrLine_TM_default_value(&(((UAB_struct__21286*)pValue)->Or_Line));
    return 1;
}

int check_UAB_struct__21286_string(const char *str, char **endptr)
{
    static UAB_struct__21286 rTemp;
    return string_to_UAB_struct__21286(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21286_Utils = {
    UAB_struct__21286_to_string,
    check_UAB_struct__21286_string,
    string_to_UAB_struct__21286,
    is_UAB_struct__21286_double_conversion_allowed,
    UAB_struct__21286_to_double,
    is_UAB_struct__21286_long_convertion_allowed,
    UAB_struct__21286_to_long,
    compare_UAB_struct__21286,
    get_UAB_struct__21286_signature,
    set_UAB_struct__21286_default_value,
    sizeof(UAB_struct__21286)
};

/****************************************************************
 ** UAB_struct__21294 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21294VTable;

static SimFieldUtils UAB_struct__21294_fields[] = {
    {"header", offsetof(UAB_struct__21294,header), &_Type_UAB_struct__21263_Utils},
    {"packets", offsetof(UAB_struct__21294,packets), &_Type_UAB_struct__21258_Utils},
    {"engineering_BG_location", offsetof(UAB_struct__21294,engineering_BG_location), &_Type_kcg_int_Utils},
    {"TrainPos", offsetof(UAB_struct__21294,TrainPos), &_Type_kcg_real_Utils},
    {"pig_nom_0", offsetof(UAB_struct__21294,pig_nom_0), &_Type_kcg_int_Utils},
    {"balise_passed", offsetof(UAB_struct__21294,balise_passed), &_Type_kcg_bool_Utils},
};

int UAB_struct__21294_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21294VTable != NULL
        && pSimUAB_struct__21294VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21294VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21294_fields, 6, pfnStrAppend, pData);
}

int string_to_UAB_struct__21294(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21294VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21294VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21294_fields, 6, endptr);
    }
    return nRet;
}

int is_UAB_struct__21294_double_conversion_allowed()
{
    if (pSimUAB_struct__21294VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21294VTable);
    }
    return 0;
}

int is_UAB_struct__21294_long_convertion_allowed()
{
    if (pSimUAB_struct__21294VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21294VTable);
    }
    return 0;
}

void compare_UAB_struct__21294(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21294VTable != NULL
        && pSimUAB_struct__21294VTable->m_version >= Scv612
        && pSimUAB_struct__21294VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21294VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21294VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21294VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21294_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21294_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21294VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21294VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21294_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21294VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21294VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21294_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21294_fields, 6, pfnStrAppend, pData);
}

int set_UAB_struct__21294_default_value(void *pValue)
{
    set_UAB_struct__21263_default_value(&(((UAB_struct__21294*)pValue)->header));
    set_UAB_struct__21258_default_value(&(((UAB_struct__21294*)pValue)->packets));
    set_kcg_int_default_value(&(((UAB_struct__21294*)pValue)->engineering_BG_location));
    set_kcg_real_default_value(&(((UAB_struct__21294*)pValue)->TrainPos));
    set_kcg_int_default_value(&(((UAB_struct__21294*)pValue)->pig_nom_0));
    set_kcg_bool_default_value(&(((UAB_struct__21294*)pValue)->balise_passed));
    return 1;
}

int check_UAB_struct__21294_string(const char *str, char **endptr)
{
    static UAB_struct__21294 rTemp;
    return string_to_UAB_struct__21294(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21294_Utils = {
    UAB_struct__21294_to_string,
    check_UAB_struct__21294_string,
    string_to_UAB_struct__21294,
    is_UAB_struct__21294_double_conversion_allowed,
    UAB_struct__21294_to_double,
    is_UAB_struct__21294_long_convertion_allowed,
    UAB_struct__21294_to_long,
    compare_UAB_struct__21294,
    get_UAB_struct__21294_signature,
    set_UAB_struct__21294_default_value,
    sizeof(UAB_struct__21294)
};

/****************************************************************
 ** UAB_struct__21303 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21303VTable;

static SimFieldUtils UAB_struct__21303_fields[] = {
    {"valid", offsetof(UAB_struct__21303,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(UAB_struct__21303,NID_PACKET), &_Type_kcg_int_Utils},
};

int UAB_struct__21303_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21303VTable != NULL
        && pSimUAB_struct__21303VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21303VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21303_fields, 2, pfnStrAppend, pData);
}

int string_to_UAB_struct__21303(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21303VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21303VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21303_fields, 2, endptr);
    }
    return nRet;
}

int is_UAB_struct__21303_double_conversion_allowed()
{
    if (pSimUAB_struct__21303VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21303VTable);
    }
    return 0;
}

int is_UAB_struct__21303_long_convertion_allowed()
{
    if (pSimUAB_struct__21303VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21303VTable);
    }
    return 0;
}

void compare_UAB_struct__21303(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21303VTable != NULL
        && pSimUAB_struct__21303VTable->m_version >= Scv612
        && pSimUAB_struct__21303VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21303VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21303VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21303VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21303_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21303_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21303VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21303VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21303_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21303VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21303VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21303_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21303_fields, 2, pfnStrAppend, pData);
}

int set_UAB_struct__21303_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((UAB_struct__21303*)pValue)->valid));
    set_kcg_int_default_value(&(((UAB_struct__21303*)pValue)->NID_PACKET));
    return 1;
}

int check_UAB_struct__21303_string(const char *str, char **endptr)
{
    static UAB_struct__21303 rTemp;
    return string_to_UAB_struct__21303(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21303_Utils = {
    UAB_struct__21303_to_string,
    check_UAB_struct__21303_string,
    string_to_UAB_struct__21303,
    is_UAB_struct__21303_double_conversion_allowed,
    UAB_struct__21303_to_double,
    is_UAB_struct__21303_long_convertion_allowed,
    UAB_struct__21303_to_long,
    compare_UAB_struct__21303,
    get_UAB_struct__21303_signature,
    set_UAB_struct__21303_default_value,
    sizeof(UAB_struct__21303)
};

/****************************************************************
 ** UAB_struct__21308 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21308VTable;

static SimFieldUtils UAB_struct__21308_fields[] = {
    {"valid", offsetof(UAB_struct__21308,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(UAB_struct__21308,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(UAB_struct__21308,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(UAB_struct__21308,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SRSTOP", offsetof(UAB_struct__21308,Q_SRSTOP), &_Type_kcg_int_Utils},
};

int UAB_struct__21308_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21308VTable != NULL
        && pSimUAB_struct__21308VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21308VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21308_fields, 5, pfnStrAppend, pData);
}

int string_to_UAB_struct__21308(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21308VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21308VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21308_fields, 5, endptr);
    }
    return nRet;
}

int is_UAB_struct__21308_double_conversion_allowed()
{
    if (pSimUAB_struct__21308VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21308VTable);
    }
    return 0;
}

int is_UAB_struct__21308_long_convertion_allowed()
{
    if (pSimUAB_struct__21308VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21308VTable);
    }
    return 0;
}

void compare_UAB_struct__21308(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21308VTable != NULL
        && pSimUAB_struct__21308VTable->m_version >= Scv612
        && pSimUAB_struct__21308VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21308VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21308VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21308VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21308_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21308_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21308VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21308VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21308_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21308VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21308VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21308_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21308_fields, 5, pfnStrAppend, pData);
}

int set_UAB_struct__21308_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((UAB_struct__21308*)pValue)->valid));
    set_kcg_int_default_value(&(((UAB_struct__21308*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((UAB_struct__21308*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((UAB_struct__21308*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((UAB_struct__21308*)pValue)->Q_SRSTOP));
    return 1;
}

int check_UAB_struct__21308_string(const char *str, char **endptr)
{
    static UAB_struct__21308 rTemp;
    return string_to_UAB_struct__21308(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21308_Utils = {
    UAB_struct__21308_to_string,
    check_UAB_struct__21308_string,
    string_to_UAB_struct__21308,
    is_UAB_struct__21308_double_conversion_allowed,
    UAB_struct__21308_to_double,
    is_UAB_struct__21308_long_convertion_allowed,
    UAB_struct__21308_to_long,
    compare_UAB_struct__21308,
    get_UAB_struct__21308_signature,
    set_UAB_struct__21308_default_value,
    sizeof(UAB_struct__21308)
};

/****************************************************************
 ** UAB_array_int_3 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_3VTable;

int UAB_array_int_3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_3VTable != NULL
        && pSimUAB_array_int_3VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_3VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 3, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_UAB_array_int_3(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_3VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_3VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 3, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_UAB_array_int_3_double_conversion_allowed()
{
    if (pSimUAB_array_int_3VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_3VTable);
    }
    return 0;
}

int is_UAB_array_int_3_long_convertion_allowed()
{
    if (pSimUAB_array_int_3VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_3VTable);
    }
    return 0;
}

void compare_UAB_array_int_3(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_3VTable != NULL
        && pSimUAB_array_int_3VTable->m_version >= Scv612
        && pSimUAB_array_int_3VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_3VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_3VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_3VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int UAB_array_int_3_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_3VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_3VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_3_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_3VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_3VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_UAB_array_int_3_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 3; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_3_string(const char *str, char **endptr)
{
    static UAB_array_int_3 rTemp;
    return string_to_UAB_array_int_3(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_3_Utils = {
    UAB_array_int_3_to_string,
    check_UAB_array_int_3_string,
    string_to_UAB_array_int_3,
    is_UAB_array_int_3_double_conversion_allowed,
    UAB_array_int_3_to_double,
    is_UAB_array_int_3_long_convertion_allowed,
    UAB_array_int_3_to_long,
    compare_UAB_array_int_3,
    get_UAB_array_int_3_signature,
    set_UAB_array_int_3_default_value,
    sizeof(UAB_array_int_3)
};

/****************************************************************
 ** UAB_struct__21319 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21319VTable;

static SimFieldUtils UAB_struct__21319_fields[] = {
    {"M_LEVELTR", offsetof(UAB_struct__21319,M_LEVELTR), &_Type_kcg_int_Utils},
    {"NID_NTC", offsetof(UAB_struct__21319,NID_NTC), &_Type_kcg_int_Utils},
    {"L_ACKLEVELTR", offsetof(UAB_struct__21319,L_ACKLEVELTR), &_Type_kcg_int_Utils},
};

int UAB_struct__21319_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21319VTable != NULL
        && pSimUAB_struct__21319VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21319VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21319_fields, 3, pfnStrAppend, pData);
}

int string_to_UAB_struct__21319(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21319VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21319VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21319_fields, 3, endptr);
    }
    return nRet;
}

int is_UAB_struct__21319_double_conversion_allowed()
{
    if (pSimUAB_struct__21319VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21319VTable);
    }
    return 0;
}

int is_UAB_struct__21319_long_convertion_allowed()
{
    if (pSimUAB_struct__21319VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21319VTable);
    }
    return 0;
}

void compare_UAB_struct__21319(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21319VTable != NULL
        && pSimUAB_struct__21319VTable->m_version >= Scv612
        && pSimUAB_struct__21319VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21319VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21319VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21319VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21319_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21319_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21319VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21319VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21319_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21319VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21319VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21319_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21319_fields, 3, pfnStrAppend, pData);
}

int set_UAB_struct__21319_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((UAB_struct__21319*)pValue)->M_LEVELTR));
    set_kcg_int_default_value(&(((UAB_struct__21319*)pValue)->NID_NTC));
    set_kcg_int_default_value(&(((UAB_struct__21319*)pValue)->L_ACKLEVELTR));
    return 1;
}

int check_UAB_struct__21319_string(const char *str, char **endptr)
{
    static UAB_struct__21319 rTemp;
    return string_to_UAB_struct__21319(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21319_Utils = {
    UAB_struct__21319_to_string,
    check_UAB_struct__21319_string,
    string_to_UAB_struct__21319,
    is_UAB_struct__21319_double_conversion_allowed,
    UAB_struct__21319_to_double,
    is_UAB_struct__21319_long_convertion_allowed,
    UAB_struct__21319_to_long,
    compare_UAB_struct__21319,
    get_UAB_struct__21319_signature,
    set_UAB_struct__21319_default_value,
    sizeof(UAB_struct__21319)
};

/****************************************************************
 ** UAB_array_int_3_33 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_3_33VTable;

int UAB_array_int_3_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_3_33VTable != NULL
        && pSimUAB_array_int_3_33VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_3_33VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, UAB_array_int_3_to_string, 33, sizeof(UAB_array_int_3), pfnStrAppend, pData);
}

int string_to_UAB_array_int_3_33(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_3_33VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_3_33VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_UAB_array_int_3_Utils, 33, sizeof(UAB_array_int_3), endptr);
    }
    return nRet;
}

int is_UAB_array_int_3_33_double_conversion_allowed()
{
    if (pSimUAB_array_int_3_33VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_3_33VTable);
    }
    return 0;
}

int is_UAB_array_int_3_33_long_convertion_allowed()
{
    if (pSimUAB_array_int_3_33VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_3_33VTable);
    }
    return 0;
}

void compare_UAB_array_int_3_33(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_3_33VTable != NULL
        && pSimUAB_array_int_3_33VTable->m_version >= Scv612
        && pSimUAB_array_int_3_33VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_3_33VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_3_33VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_3_33VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_UAB_array_int_3, 33, sizeof(UAB_array_int_3), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_array_int_3_33_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_3_33VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_3_33VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_3_33_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_3_33VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_3_33VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_3_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_UAB_array_int_3_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_UAB_array_int_3_33_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_UAB_array_int_3_default_value(&((UAB_array_int_3*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_3_33_string(const char *str, char **endptr)
{
    static UAB_array_int_3_33 rTemp;
    return string_to_UAB_array_int_3_33(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_3_33_Utils = {
    UAB_array_int_3_33_to_string,
    check_UAB_array_int_3_33_string,
    string_to_UAB_array_int_3_33,
    is_UAB_array_int_3_33_double_conversion_allowed,
    UAB_array_int_3_33_to_double,
    is_UAB_array_int_3_33_long_convertion_allowed,
    UAB_array_int_3_33_to_long,
    compare_UAB_array_int_3_33,
    get_UAB_array_int_3_33_signature,
    set_UAB_array_int_3_33_default_value,
    sizeof(UAB_array_int_3_33)
};

/****************************************************************
 ** UAB_array_int_99 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_99VTable;

int UAB_array_int_99_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_99VTable != NULL
        && pSimUAB_array_int_99VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_99VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 99, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_UAB_array_int_99(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_99VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_99VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 99, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_UAB_array_int_99_double_conversion_allowed()
{
    if (pSimUAB_array_int_99VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_99VTable);
    }
    return 0;
}

int is_UAB_array_int_99_long_convertion_allowed()
{
    if (pSimUAB_array_int_99VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_99VTable);
    }
    return 0;
}

void compare_UAB_array_int_99(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_99VTable != NULL
        && pSimUAB_array_int_99VTable->m_version >= Scv612
        && pSimUAB_array_int_99VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_99VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_99VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_99VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int UAB_array_int_99_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_99VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_99VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_99_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_99VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_99VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_99_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_UAB_array_int_99_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 99; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_99_string(const char *str, char **endptr)
{
    static UAB_array_int_99 rTemp;
    return string_to_UAB_array_int_99(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_99_Utils = {
    UAB_array_int_99_to_string,
    check_UAB_array_int_99_string,
    string_to_UAB_array_int_99,
    is_UAB_array_int_99_double_conversion_allowed,
    UAB_array_int_99_to_double,
    is_UAB_array_int_99_long_convertion_allowed,
    UAB_array_int_99_to_long,
    compare_UAB_array_int_99,
    get_UAB_array_int_99_signature,
    set_UAB_array_int_99_default_value,
    sizeof(UAB_array_int_99)
};

/****************************************************************
 ** UAB_array__21331 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array__21331VTable;

int UAB_array__21331_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array__21331VTable != NULL
        && pSimUAB_array__21331VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array__21331VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, UAB_struct__21319_to_string, 33, sizeof(UAB_struct__21319), pfnStrAppend, pData);
}

int string_to_UAB_array__21331(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array__21331VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array__21331VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_UAB_struct__21319_Utils, 33, sizeof(UAB_struct__21319), endptr);
    }
    return nRet;
}

int is_UAB_array__21331_double_conversion_allowed()
{
    if (pSimUAB_array__21331VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array__21331VTable);
    }
    return 0;
}

int is_UAB_array__21331_long_convertion_allowed()
{
    if (pSimUAB_array__21331VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array__21331VTable);
    }
    return 0;
}

void compare_UAB_array__21331(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array__21331VTable != NULL
        && pSimUAB_array__21331VTable->m_version >= Scv612
        && pSimUAB_array__21331VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array__21331VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array__21331VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array__21331VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_UAB_struct__21319, 33, sizeof(UAB_struct__21319), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_array__21331_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array__21331VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array__21331VTable, nRetValue);
    }
    return 0;
}

int UAB_array__21331_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array__21331VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array__21331VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array__21331_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_UAB_struct__21319_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_UAB_array__21331_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_UAB_struct__21319_default_value(&((UAB_struct__21319*)pValue)[i]);
    return 1;
}

int check_UAB_array__21331_string(const char *str, char **endptr)
{
    static UAB_array__21331 rTemp;
    return string_to_UAB_array__21331(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array__21331_Utils = {
    UAB_array__21331_to_string,
    check_UAB_array__21331_string,
    string_to_UAB_array__21331,
    is_UAB_array__21331_double_conversion_allowed,
    UAB_array__21331_to_double,
    is_UAB_array__21331_long_convertion_allowed,
    UAB_array__21331_to_long,
    compare_UAB_array__21331,
    get_UAB_array__21331_signature,
    set_UAB_array__21331_default_value,
    sizeof(UAB_array__21331)
};

/****************************************************************
 ** UAB_array__21334 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array__21334VTable;

int UAB_array__21334_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array__21334VTable != NULL
        && pSimUAB_array__21334VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array__21334VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, UAB_struct__21319_to_string, 32, sizeof(UAB_struct__21319), pfnStrAppend, pData);
}

int string_to_UAB_array__21334(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array__21334VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array__21334VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_UAB_struct__21319_Utils, 32, sizeof(UAB_struct__21319), endptr);
    }
    return nRet;
}

int is_UAB_array__21334_double_conversion_allowed()
{
    if (pSimUAB_array__21334VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array__21334VTable);
    }
    return 0;
}

int is_UAB_array__21334_long_convertion_allowed()
{
    if (pSimUAB_array__21334VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array__21334VTable);
    }
    return 0;
}

void compare_UAB_array__21334(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array__21334VTable != NULL
        && pSimUAB_array__21334VTable->m_version >= Scv612
        && pSimUAB_array__21334VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array__21334VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array__21334VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array__21334VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_UAB_struct__21319, 32, sizeof(UAB_struct__21319), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_array__21334_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array__21334VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array__21334VTable, nRetValue);
    }
    return 0;
}

int UAB_array__21334_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array__21334VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array__21334VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array__21334_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_UAB_struct__21319_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_UAB_array__21334_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_UAB_struct__21319_default_value(&((UAB_struct__21319*)pValue)[i]);
    return 1;
}

int check_UAB_array__21334_string(const char *str, char **endptr)
{
    static UAB_array__21334 rTemp;
    return string_to_UAB_array__21334(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array__21334_Utils = {
    UAB_array__21334_to_string,
    check_UAB_array__21334_string,
    string_to_UAB_array__21334,
    is_UAB_array__21334_double_conversion_allowed,
    UAB_array__21334_to_double,
    is_UAB_array__21334_long_convertion_allowed,
    UAB_array__21334_to_long,
    compare_UAB_array__21334,
    get_UAB_array__21334_signature,
    set_UAB_array__21334_default_value,
    sizeof(UAB_array__21334)
};

/****************************************************************
 ** UAB_struct__21337 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21337VTable;

static SimFieldUtils UAB_struct__21337_fields[] = {
    {"valid", offsetof(UAB_struct__21337,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(UAB_struct__21337,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(UAB_struct__21337,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(UAB_struct__21337,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(UAB_struct__21337,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_LEVELTR", offsetof(UAB_struct__21337,D_LEVELTR), &_Type_kcg_int_Utils},
    {"M_LEVELTR", offsetof(UAB_struct__21337,M_LEVELTR), &_Type_kcg_int_Utils},
    {"NID_NTC", offsetof(UAB_struct__21337,NID_NTC), &_Type_kcg_int_Utils},
    {"L_ACKLEVELTR", offsetof(UAB_struct__21337,L_ACKLEVELTR), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(UAB_struct__21337,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(UAB_struct__21337,SECTIONS), &_Type_UAB_array__21334_Utils},
};

int UAB_struct__21337_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21337VTable != NULL
        && pSimUAB_struct__21337VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21337VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21337_fields, 11, pfnStrAppend, pData);
}

int string_to_UAB_struct__21337(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21337VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21337VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21337_fields, 11, endptr);
    }
    return nRet;
}

int is_UAB_struct__21337_double_conversion_allowed()
{
    if (pSimUAB_struct__21337VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21337VTable);
    }
    return 0;
}

int is_UAB_struct__21337_long_convertion_allowed()
{
    if (pSimUAB_struct__21337VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21337VTable);
    }
    return 0;
}

void compare_UAB_struct__21337(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21337VTable != NULL
        && pSimUAB_struct__21337VTable->m_version >= Scv612
        && pSimUAB_struct__21337VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21337VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21337VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21337VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21337_fields, 11, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21337_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21337VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21337VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21337_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21337VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21337VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21337_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21337_fields, 11, pfnStrAppend, pData);
}

int set_UAB_struct__21337_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((UAB_struct__21337*)pValue)->valid));
    set_kcg_int_default_value(&(((UAB_struct__21337*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((UAB_struct__21337*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((UAB_struct__21337*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((UAB_struct__21337*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((UAB_struct__21337*)pValue)->D_LEVELTR));
    set_kcg_int_default_value(&(((UAB_struct__21337*)pValue)->M_LEVELTR));
    set_kcg_int_default_value(&(((UAB_struct__21337*)pValue)->NID_NTC));
    set_kcg_int_default_value(&(((UAB_struct__21337*)pValue)->L_ACKLEVELTR));
    set_kcg_int_default_value(&(((UAB_struct__21337*)pValue)->N_ITER));
    set_UAB_array__21334_default_value(&(((UAB_struct__21337*)pValue)->SECTIONS));
    return 1;
}

int check_UAB_struct__21337_string(const char *str, char **endptr)
{
    static UAB_struct__21337 rTemp;
    return string_to_UAB_struct__21337(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21337_Utils = {
    UAB_struct__21337_to_string,
    check_UAB_struct__21337_string,
    string_to_UAB_struct__21337,
    is_UAB_struct__21337_double_conversion_allowed,
    UAB_struct__21337_to_double,
    is_UAB_struct__21337_long_convertion_allowed,
    UAB_struct__21337_to_long,
    compare_UAB_struct__21337,
    get_UAB_struct__21337_signature,
    set_UAB_struct__21337_default_value,
    sizeof(UAB_struct__21337)
};

/****************************************************************
 ** UAB_array_int_2 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_2VTable;

int UAB_array_int_2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_2VTable != NULL
        && pSimUAB_array_int_2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 2, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_UAB_array_int_2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_2VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 2, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_UAB_array_int_2_double_conversion_allowed()
{
    if (pSimUAB_array_int_2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_2VTable);
    }
    return 0;
}

int is_UAB_array_int_2_long_convertion_allowed()
{
    if (pSimUAB_array_int_2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_2VTable);
    }
    return 0;
}

void compare_UAB_array_int_2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_2VTable != NULL
        && pSimUAB_array_int_2VTable->m_version >= Scv612
        && pSimUAB_array_int_2VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int UAB_array_int_2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_2VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_2VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_2VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_2VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_UAB_array_int_2_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 2; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_2_string(const char *str, char **endptr)
{
    static UAB_array_int_2 rTemp;
    return string_to_UAB_array_int_2(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_2_Utils = {
    UAB_array_int_2_to_string,
    check_UAB_array_int_2_string,
    string_to_UAB_array_int_2,
    is_UAB_array_int_2_double_conversion_allowed,
    UAB_array_int_2_to_double,
    is_UAB_array_int_2_long_convertion_allowed,
    UAB_array_int_2_to_long,
    compare_UAB_array_int_2,
    get_UAB_array_int_2_signature,
    set_UAB_array_int_2_default_value,
    sizeof(UAB_array_int_2)
};

/****************************************************************
 ** UAB_struct__21354 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21354VTable;

static SimFieldUtils UAB_struct__21354_fields[] = {
    {"M_LEVELTR", offsetof(UAB_struct__21354,M_LEVELTR), &_Type_kcg_int_Utils},
    {"NID_NTC", offsetof(UAB_struct__21354,NID_NTC), &_Type_kcg_int_Utils},
};

int UAB_struct__21354_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21354VTable != NULL
        && pSimUAB_struct__21354VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21354VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21354_fields, 2, pfnStrAppend, pData);
}

int string_to_UAB_struct__21354(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21354VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21354VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21354_fields, 2, endptr);
    }
    return nRet;
}

int is_UAB_struct__21354_double_conversion_allowed()
{
    if (pSimUAB_struct__21354VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21354VTable);
    }
    return 0;
}

int is_UAB_struct__21354_long_convertion_allowed()
{
    if (pSimUAB_struct__21354VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21354VTable);
    }
    return 0;
}

void compare_UAB_struct__21354(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21354VTable != NULL
        && pSimUAB_struct__21354VTable->m_version >= Scv612
        && pSimUAB_struct__21354VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21354VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21354VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21354VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21354_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21354_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21354VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21354VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21354_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21354VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21354VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21354_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21354_fields, 2, pfnStrAppend, pData);
}

int set_UAB_struct__21354_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((UAB_struct__21354*)pValue)->M_LEVELTR));
    set_kcg_int_default_value(&(((UAB_struct__21354*)pValue)->NID_NTC));
    return 1;
}

int check_UAB_struct__21354_string(const char *str, char **endptr)
{
    static UAB_struct__21354 rTemp;
    return string_to_UAB_struct__21354(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21354_Utils = {
    UAB_struct__21354_to_string,
    check_UAB_struct__21354_string,
    string_to_UAB_struct__21354,
    is_UAB_struct__21354_double_conversion_allowed,
    UAB_struct__21354_to_double,
    is_UAB_struct__21354_long_convertion_allowed,
    UAB_struct__21354_to_long,
    compare_UAB_struct__21354,
    get_UAB_struct__21354_signature,
    set_UAB_struct__21354_default_value,
    sizeof(UAB_struct__21354)
};

/****************************************************************
 ** UAB_array_int_2_33 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_2_33VTable;

int UAB_array_int_2_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_2_33VTable != NULL
        && pSimUAB_array_int_2_33VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_2_33VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, UAB_array_int_2_to_string, 33, sizeof(UAB_array_int_2), pfnStrAppend, pData);
}

int string_to_UAB_array_int_2_33(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_2_33VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_2_33VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_UAB_array_int_2_Utils, 33, sizeof(UAB_array_int_2), endptr);
    }
    return nRet;
}

int is_UAB_array_int_2_33_double_conversion_allowed()
{
    if (pSimUAB_array_int_2_33VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_2_33VTable);
    }
    return 0;
}

int is_UAB_array_int_2_33_long_convertion_allowed()
{
    if (pSimUAB_array_int_2_33VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_2_33VTable);
    }
    return 0;
}

void compare_UAB_array_int_2_33(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_2_33VTable != NULL
        && pSimUAB_array_int_2_33VTable->m_version >= Scv612
        && pSimUAB_array_int_2_33VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_2_33VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_2_33VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_2_33VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_UAB_array_int_2, 33, sizeof(UAB_array_int_2), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_array_int_2_33_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_2_33VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_2_33VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_2_33_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_2_33VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_2_33VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_2_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_UAB_array_int_2_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_UAB_array_int_2_33_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_UAB_array_int_2_default_value(&((UAB_array_int_2*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_2_33_string(const char *str, char **endptr)
{
    static UAB_array_int_2_33 rTemp;
    return string_to_UAB_array_int_2_33(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_2_33_Utils = {
    UAB_array_int_2_33_to_string,
    check_UAB_array_int_2_33_string,
    string_to_UAB_array_int_2_33,
    is_UAB_array_int_2_33_double_conversion_allowed,
    UAB_array_int_2_33_to_double,
    is_UAB_array_int_2_33_long_convertion_allowed,
    UAB_array_int_2_33_to_long,
    compare_UAB_array_int_2_33,
    get_UAB_array_int_2_33_signature,
    set_UAB_array_int_2_33_default_value,
    sizeof(UAB_array_int_2_33)
};

/****************************************************************
 ** UAB_array_int_66 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_66VTable;

int UAB_array_int_66_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_66VTable != NULL
        && pSimUAB_array_int_66VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_66VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 66, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_UAB_array_int_66(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_66VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_66VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 66, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_UAB_array_int_66_double_conversion_allowed()
{
    if (pSimUAB_array_int_66VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_66VTable);
    }
    return 0;
}

int is_UAB_array_int_66_long_convertion_allowed()
{
    if (pSimUAB_array_int_66VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_66VTable);
    }
    return 0;
}

void compare_UAB_array_int_66(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_66VTable != NULL
        && pSimUAB_array_int_66VTable->m_version >= Scv612
        && pSimUAB_array_int_66VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_66VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_66VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_66VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 66, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_array_int_66_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_66VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_66VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_66_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_66VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_66VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_66_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 66; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_UAB_array_int_66_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 66; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_66_string(const char *str, char **endptr)
{
    static UAB_array_int_66 rTemp;
    return string_to_UAB_array_int_66(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_66_Utils = {
    UAB_array_int_66_to_string,
    check_UAB_array_int_66_string,
    string_to_UAB_array_int_66,
    is_UAB_array_int_66_double_conversion_allowed,
    UAB_array_int_66_to_double,
    is_UAB_array_int_66_long_convertion_allowed,
    UAB_array_int_66_to_long,
    compare_UAB_array_int_66,
    get_UAB_array_int_66_signature,
    set_UAB_array_int_66_default_value,
    sizeof(UAB_array_int_66)
};

/****************************************************************
 ** UAB_array__21365 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array__21365VTable;

int UAB_array__21365_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array__21365VTable != NULL
        && pSimUAB_array__21365VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array__21365VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, UAB_struct__21354_to_string, 33, sizeof(UAB_struct__21354), pfnStrAppend, pData);
}

int string_to_UAB_array__21365(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array__21365VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array__21365VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_UAB_struct__21354_Utils, 33, sizeof(UAB_struct__21354), endptr);
    }
    return nRet;
}

int is_UAB_array__21365_double_conversion_allowed()
{
    if (pSimUAB_array__21365VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array__21365VTable);
    }
    return 0;
}

int is_UAB_array__21365_long_convertion_allowed()
{
    if (pSimUAB_array__21365VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array__21365VTable);
    }
    return 0;
}

void compare_UAB_array__21365(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array__21365VTable != NULL
        && pSimUAB_array__21365VTable->m_version >= Scv612
        && pSimUAB_array__21365VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array__21365VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array__21365VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array__21365VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_UAB_struct__21354, 33, sizeof(UAB_struct__21354), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_array__21365_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array__21365VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array__21365VTable, nRetValue);
    }
    return 0;
}

int UAB_array__21365_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array__21365VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array__21365VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array__21365_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_UAB_struct__21354_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_UAB_array__21365_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_UAB_struct__21354_default_value(&((UAB_struct__21354*)pValue)[i]);
    return 1;
}

int check_UAB_array__21365_string(const char *str, char **endptr)
{
    static UAB_array__21365 rTemp;
    return string_to_UAB_array__21365(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array__21365_Utils = {
    UAB_array__21365_to_string,
    check_UAB_array__21365_string,
    string_to_UAB_array__21365,
    is_UAB_array__21365_double_conversion_allowed,
    UAB_array__21365_to_double,
    is_UAB_array__21365_long_convertion_allowed,
    UAB_array__21365_to_long,
    compare_UAB_array__21365,
    get_UAB_array__21365_signature,
    set_UAB_array__21365_default_value,
    sizeof(UAB_array__21365)
};

/****************************************************************
 ** UAB_array__21368 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array__21368VTable;

int UAB_array__21368_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array__21368VTable != NULL
        && pSimUAB_array__21368VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array__21368VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, UAB_struct__21354_to_string, 32, sizeof(UAB_struct__21354), pfnStrAppend, pData);
}

int string_to_UAB_array__21368(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array__21368VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array__21368VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_UAB_struct__21354_Utils, 32, sizeof(UAB_struct__21354), endptr);
    }
    return nRet;
}

int is_UAB_array__21368_double_conversion_allowed()
{
    if (pSimUAB_array__21368VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array__21368VTable);
    }
    return 0;
}

int is_UAB_array__21368_long_convertion_allowed()
{
    if (pSimUAB_array__21368VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array__21368VTable);
    }
    return 0;
}

void compare_UAB_array__21368(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array__21368VTable != NULL
        && pSimUAB_array__21368VTable->m_version >= Scv612
        && pSimUAB_array__21368VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array__21368VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array__21368VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array__21368VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_UAB_struct__21354, 32, sizeof(UAB_struct__21354), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_array__21368_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array__21368VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array__21368VTable, nRetValue);
    }
    return 0;
}

int UAB_array__21368_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array__21368VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array__21368VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array__21368_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_UAB_struct__21354_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_UAB_array__21368_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_UAB_struct__21354_default_value(&((UAB_struct__21354*)pValue)[i]);
    return 1;
}

int check_UAB_array__21368_string(const char *str, char **endptr)
{
    static UAB_array__21368 rTemp;
    return string_to_UAB_array__21368(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array__21368_Utils = {
    UAB_array__21368_to_string,
    check_UAB_array__21368_string,
    string_to_UAB_array__21368,
    is_UAB_array__21368_double_conversion_allowed,
    UAB_array__21368_to_double,
    is_UAB_array__21368_long_convertion_allowed,
    UAB_array__21368_to_long,
    compare_UAB_array__21368,
    get_UAB_array__21368_signature,
    set_UAB_array__21368_default_value,
    sizeof(UAB_array__21368)
};

/****************************************************************
 ** UAB_struct__21371 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21371VTable;

static SimFieldUtils UAB_struct__21371_fields[] = {
    {"valid", offsetof(UAB_struct__21371,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(UAB_struct__21371,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(UAB_struct__21371,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(UAB_struct__21371,L_PACKET), &_Type_kcg_int_Utils},
    {"M_LEVELTR", offsetof(UAB_struct__21371,M_LEVELTR), &_Type_kcg_int_Utils},
    {"NID_NTC", offsetof(UAB_struct__21371,NID_NTC), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(UAB_struct__21371,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(UAB_struct__21371,SECTIONS), &_Type_UAB_array__21368_Utils},
};

int UAB_struct__21371_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21371VTable != NULL
        && pSimUAB_struct__21371VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21371VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21371_fields, 8, pfnStrAppend, pData);
}

int string_to_UAB_struct__21371(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21371VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21371VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21371_fields, 8, endptr);
    }
    return nRet;
}

int is_UAB_struct__21371_double_conversion_allowed()
{
    if (pSimUAB_struct__21371VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21371VTable);
    }
    return 0;
}

int is_UAB_struct__21371_long_convertion_allowed()
{
    if (pSimUAB_struct__21371VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21371VTable);
    }
    return 0;
}

void compare_UAB_struct__21371(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21371VTable != NULL
        && pSimUAB_struct__21371VTable->m_version >= Scv612
        && pSimUAB_struct__21371VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21371VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21371VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21371VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21371_fields, 8, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21371_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21371VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21371VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21371_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21371VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21371VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21371_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21371_fields, 8, pfnStrAppend, pData);
}

int set_UAB_struct__21371_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((UAB_struct__21371*)pValue)->valid));
    set_kcg_int_default_value(&(((UAB_struct__21371*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((UAB_struct__21371*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((UAB_struct__21371*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((UAB_struct__21371*)pValue)->M_LEVELTR));
    set_kcg_int_default_value(&(((UAB_struct__21371*)pValue)->NID_NTC));
    set_kcg_int_default_value(&(((UAB_struct__21371*)pValue)->N_ITER));
    set_UAB_array__21368_default_value(&(((UAB_struct__21371*)pValue)->SECTIONS));
    return 1;
}

int check_UAB_struct__21371_string(const char *str, char **endptr)
{
    static UAB_struct__21371 rTemp;
    return string_to_UAB_struct__21371(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21371_Utils = {
    UAB_struct__21371_to_string,
    check_UAB_struct__21371_string,
    string_to_UAB_struct__21371,
    is_UAB_struct__21371_double_conversion_allowed,
    UAB_struct__21371_to_double,
    is_UAB_struct__21371_long_convertion_allowed,
    UAB_struct__21371_to_long,
    compare_UAB_struct__21371,
    get_UAB_struct__21371_signature,
    set_UAB_struct__21371_default_value,
    sizeof(UAB_struct__21371)
};

/****************************************************************
 ** UAB_struct__21382 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21382VTable;

static SimFieldUtils UAB_struct__21382_fields[] = {
    {"valid", offsetof(UAB_struct__21382,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(UAB_struct__21382,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(UAB_struct__21382,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(UAB_struct__21382,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_RBC", offsetof(UAB_struct__21382,Q_RBC), &_Type_kcg_int_Utils},
    {"NID_C", offsetof(UAB_struct__21382,NID_C), &_Type_kcg_int_Utils},
    {"NID_RBC", offsetof(UAB_struct__21382,NID_RBC), &_Type_kcg_int_Utils},
    {"NID_RADIO", offsetof(UAB_struct__21382,NID_RADIO), &_Type_kcg_int_Utils},
    {"Q_SLEEPSESSION", offsetof(UAB_struct__21382,Q_SLEEPSESSION), &_Type_kcg_int_Utils},
};

int UAB_struct__21382_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21382VTable != NULL
        && pSimUAB_struct__21382VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21382VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21382_fields, 9, pfnStrAppend, pData);
}

int string_to_UAB_struct__21382(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21382VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21382VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21382_fields, 9, endptr);
    }
    return nRet;
}

int is_UAB_struct__21382_double_conversion_allowed()
{
    if (pSimUAB_struct__21382VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21382VTable);
    }
    return 0;
}

int is_UAB_struct__21382_long_convertion_allowed()
{
    if (pSimUAB_struct__21382VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21382VTable);
    }
    return 0;
}

void compare_UAB_struct__21382(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21382VTable != NULL
        && pSimUAB_struct__21382VTable->m_version >= Scv612
        && pSimUAB_struct__21382VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21382VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21382VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21382VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21382_fields, 9, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21382_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21382VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21382VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21382_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21382VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21382VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21382_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21382_fields, 9, pfnStrAppend, pData);
}

int set_UAB_struct__21382_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((UAB_struct__21382*)pValue)->valid));
    set_kcg_int_default_value(&(((UAB_struct__21382*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((UAB_struct__21382*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((UAB_struct__21382*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((UAB_struct__21382*)pValue)->Q_RBC));
    set_kcg_int_default_value(&(((UAB_struct__21382*)pValue)->NID_C));
    set_kcg_int_default_value(&(((UAB_struct__21382*)pValue)->NID_RBC));
    set_kcg_int_default_value(&(((UAB_struct__21382*)pValue)->NID_RADIO));
    set_kcg_int_default_value(&(((UAB_struct__21382*)pValue)->Q_SLEEPSESSION));
    return 1;
}

int check_UAB_struct__21382_string(const char *str, char **endptr)
{
    static UAB_struct__21382 rTemp;
    return string_to_UAB_struct__21382(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21382_Utils = {
    UAB_struct__21382_to_string,
    check_UAB_struct__21382_string,
    string_to_UAB_struct__21382,
    is_UAB_struct__21382_double_conversion_allowed,
    UAB_struct__21382_to_double,
    is_UAB_struct__21382_long_convertion_allowed,
    UAB_struct__21382_to_long,
    compare_UAB_struct__21382,
    get_UAB_struct__21382_signature,
    set_UAB_struct__21382_default_value,
    sizeof(UAB_struct__21382)
};

/****************************************************************
 ** UAB_array_int_32 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_32VTable;

int UAB_array_int_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_32VTable != NULL
        && pSimUAB_array_int_32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_32VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 32, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_UAB_array_int_32(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_32VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_32VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 32, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_UAB_array_int_32_double_conversion_allowed()
{
    if (pSimUAB_array_int_32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_32VTable);
    }
    return 0;
}

int is_UAB_array_int_32_long_convertion_allowed()
{
    if (pSimUAB_array_int_32VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_32VTable);
    }
    return 0;
}

void compare_UAB_array_int_32(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_32VTable != NULL
        && pSimUAB_array_int_32VTable->m_version >= Scv612
        && pSimUAB_array_int_32VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_32VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_32VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_32VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int UAB_array_int_32_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_32VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_32VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_32_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_32VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_32VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_UAB_array_int_32_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_32_string(const char *str, char **endptr)
{
    static UAB_array_int_32 rTemp;
    return string_to_UAB_array_int_32(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_32_Utils = {
    UAB_array_int_32_to_string,
    check_UAB_array_int_32_string,
    string_to_UAB_array_int_32,
    is_UAB_array_int_32_double_conversion_allowed,
    UAB_array_int_32_to_double,
    is_UAB_array_int_32_long_convertion_allowed,
    UAB_array_int_32_to_long,
    compare_UAB_array_int_32,
    get_UAB_array_int_32_signature,
    set_UAB_array_int_32_default_value,
    sizeof(UAB_array_int_32)
};

/****************************************************************
 ** UAB_struct__21397 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21397VTable;

static SimFieldUtils UAB_struct__21397_fields[] = {
    {"valid", offsetof(UAB_struct__21397,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(UAB_struct__21397,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(UAB_struct__21397,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(UAB_struct__21397,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(UAB_struct__21397,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_VALIDNV", offsetof(UAB_struct__21397,D_VALIDNV), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(UAB_struct__21397,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(UAB_struct__21397,SECTIONS), &_Type_UAB_array_int_32_Utils},
    {"V_NVSHUNT", offsetof(UAB_struct__21397,V_NVSHUNT), &_Type_kcg_int_Utils},
    {"V_NVSTFF", offsetof(UAB_struct__21397,V_NVSTFF), &_Type_kcg_int_Utils},
    {"V_NVONSIGHT", offsetof(UAB_struct__21397,V_NVONSIGHT), &_Type_kcg_int_Utils},
    {"V_NVUNFIT", offsetof(UAB_struct__21397,V_NVUNFIT), &_Type_kcg_int_Utils},
    {"V_NVREL", offsetof(UAB_struct__21397,V_NVREL), &_Type_kcg_int_Utils},
    {"D_NVROLL", offsetof(UAB_struct__21397,D_NVROLL), &_Type_kcg_int_Utils},
    {"Q_NVSRBKTRG", offsetof(UAB_struct__21397,Q_NVSRBKTRG), &_Type_kcg_int_Utils},
    {"Q_NVEMRRLS", offsetof(UAB_struct__21397,Q_NVEMRRLS), &_Type_kcg_int_Utils},
    {"V_NVALLOWOVTRP", offsetof(UAB_struct__21397,V_NVALLOWOVTRP), &_Type_kcg_int_Utils},
    {"V_NVSUPOVTRP", offsetof(UAB_struct__21397,V_NVSUPOVTRP), &_Type_kcg_int_Utils},
    {"D_NVOVTRP", offsetof(UAB_struct__21397,D_NVOVTRP), &_Type_kcg_int_Utils},
    {"T_NVOVTRP", offsetof(UAB_struct__21397,T_NVOVTRP), &_Type_kcg_int_Utils},
    {"D_NVPOTRP", offsetof(UAB_struct__21397,D_NVPOTRP), &_Type_kcg_int_Utils},
    {"M_NVCONTACT", offsetof(UAB_struct__21397,M_NVCONTACT), &_Type_kcg_int_Utils},
    {"T_NVCONTACT", offsetof(UAB_struct__21397,T_NVCONTACT), &_Type_kcg_int_Utils},
    {"M_NVDERUN", offsetof(UAB_struct__21397,M_NVDERUN), &_Type_kcg_int_Utils},
    {"D_NVSTFF", offsetof(UAB_struct__21397,D_NVSTFF), &_Type_kcg_int_Utils},
    {"Q_NVDRIVER_ADHES", offsetof(UAB_struct__21397,Q_NVDRIVER_ADHES), &_Type_kcg_int_Utils},
};

int UAB_struct__21397_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21397VTable != NULL
        && pSimUAB_struct__21397VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21397VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21397_fields, 26, pfnStrAppend, pData);
}

int string_to_UAB_struct__21397(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21397VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21397VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21397_fields, 26, endptr);
    }
    return nRet;
}

int is_UAB_struct__21397_double_conversion_allowed()
{
    if (pSimUAB_struct__21397VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21397VTable);
    }
    return 0;
}

int is_UAB_struct__21397_long_convertion_allowed()
{
    if (pSimUAB_struct__21397VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21397VTable);
    }
    return 0;
}

void compare_UAB_struct__21397(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21397VTable != NULL
        && pSimUAB_struct__21397VTable->m_version >= Scv612
        && pSimUAB_struct__21397VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21397VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21397VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21397VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21397_fields, 26, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21397_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21397VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21397VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21397_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21397VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21397VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21397_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21397_fields, 26, pfnStrAppend, pData);
}

int set_UAB_struct__21397_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((UAB_struct__21397*)pValue)->valid));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->D_VALIDNV));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->N_ITER));
    set_UAB_array_int_32_default_value(&(((UAB_struct__21397*)pValue)->SECTIONS));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->V_NVSHUNT));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->V_NVSTFF));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->V_NVONSIGHT));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->V_NVUNFIT));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->V_NVREL));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->D_NVROLL));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->Q_NVSRBKTRG));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->Q_NVEMRRLS));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->V_NVALLOWOVTRP));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->V_NVSUPOVTRP));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->D_NVOVTRP));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->T_NVOVTRP));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->D_NVPOTRP));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->M_NVCONTACT));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->T_NVCONTACT));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->M_NVDERUN));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->D_NVSTFF));
    set_kcg_int_default_value(&(((UAB_struct__21397*)pValue)->Q_NVDRIVER_ADHES));
    return 1;
}

int check_UAB_struct__21397_string(const char *str, char **endptr)
{
    static UAB_struct__21397 rTemp;
    return string_to_UAB_struct__21397(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21397_Utils = {
    UAB_struct__21397_to_string,
    check_UAB_struct__21397_string,
    string_to_UAB_struct__21397,
    is_UAB_struct__21397_double_conversion_allowed,
    UAB_struct__21397_to_double,
    is_UAB_struct__21397_long_convertion_allowed,
    UAB_struct__21397_to_long,
    compare_UAB_struct__21397,
    get_UAB_struct__21397_signature,
    set_UAB_struct__21397_default_value,
    sizeof(UAB_struct__21397)
};

/****************************************************************
 ** UAB_struct__21426 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_struct__21426VTable;

static SimFieldUtils UAB_struct__21426_fields[] = {
    {"valid", offsetof(UAB_struct__21426,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(UAB_struct__21426,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(UAB_struct__21426,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(UAB_struct__21426,L_PACKET), &_Type_kcg_int_Utils},
    {"NID_MN", offsetof(UAB_struct__21426,NID_MN), &_Type_kcg_int_Utils},
};

int UAB_struct__21426_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_struct__21426VTable != NULL
        && pSimUAB_struct__21426VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_struct__21426VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, UAB_struct__21426_fields, 5, pfnStrAppend, pData);
}

int string_to_UAB_struct__21426(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_struct__21426VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_struct__21426VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, UAB_struct__21426_fields, 5, endptr);
    }
    return nRet;
}

int is_UAB_struct__21426_double_conversion_allowed()
{
    if (pSimUAB_struct__21426VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_struct__21426VTable);
    }
    return 0;
}

int is_UAB_struct__21426_long_convertion_allowed()
{
    if (pSimUAB_struct__21426VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_struct__21426VTable);
    }
    return 0;
}

void compare_UAB_struct__21426(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_struct__21426VTable != NULL
        && pSimUAB_struct__21426VTable->m_version >= Scv612
        && pSimUAB_struct__21426VTable->m_pfnCompare != NULL) {
        if (pSimUAB_struct__21426VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_struct__21426VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_struct__21426VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, UAB_struct__21426_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_struct__21426_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_struct__21426VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_struct__21426VTable, nRetValue);
    }
    return 0;
}

int UAB_struct__21426_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_struct__21426VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_struct__21426VTable, nRetValue);
    }
    return 0;
}

int get_UAB_struct__21426_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(UAB_struct__21426_fields, 5, pfnStrAppend, pData);
}

int set_UAB_struct__21426_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((UAB_struct__21426*)pValue)->valid));
    set_kcg_int_default_value(&(((UAB_struct__21426*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((UAB_struct__21426*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((UAB_struct__21426*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((UAB_struct__21426*)pValue)->NID_MN));
    return 1;
}

int check_UAB_struct__21426_string(const char *str, char **endptr)
{
    static UAB_struct__21426 rTemp;
    return string_to_UAB_struct__21426(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_struct__21426_Utils = {
    UAB_struct__21426_to_string,
    check_UAB_struct__21426_string,
    string_to_UAB_struct__21426,
    is_UAB_struct__21426_double_conversion_allowed,
    UAB_struct__21426_to_double,
    is_UAB_struct__21426_long_convertion_allowed,
    UAB_struct__21426_to_long,
    compare_UAB_struct__21426,
    get_UAB_struct__21426_signature,
    set_UAB_struct__21426_default_value,
    sizeof(UAB_struct__21426)
};

/****************************************************************
 ** UAB_array_int_430 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_430VTable;

int UAB_array_int_430_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_430VTable != NULL
        && pSimUAB_array_int_430VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_430VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 430, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_UAB_array_int_430(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_430VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_430VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 430, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_UAB_array_int_430_double_conversion_allowed()
{
    if (pSimUAB_array_int_430VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_430VTable);
    }
    return 0;
}

int is_UAB_array_int_430_long_convertion_allowed()
{
    if (pSimUAB_array_int_430VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_430VTable);
    }
    return 0;
}

void compare_UAB_array_int_430(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_430VTable != NULL
        && pSimUAB_array_int_430VTable->m_version >= Scv612
        && pSimUAB_array_int_430VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_430VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_430VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_430VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 430, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_array_int_430_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_430VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_430VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_430_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_430VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_430VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_430_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 430; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_UAB_array_int_430_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 430; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_430_string(const char *str, char **endptr)
{
    static UAB_array_int_430 rTemp;
    return string_to_UAB_array_int_430(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_430_Utils = {
    UAB_array_int_430_to_string,
    check_UAB_array_int_430_string,
    string_to_UAB_array_int_430,
    is_UAB_array_int_430_double_conversion_allowed,
    UAB_array_int_430_to_double,
    is_UAB_array_int_430_long_convertion_allowed,
    UAB_array_int_430_to_long,
    compare_UAB_array_int_430,
    get_UAB_array_int_430_signature,
    set_UAB_array_int_430_default_value,
    sizeof(UAB_array_int_430)
};

/****************************************************************
 ** UAB_array_int_444 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_444VTable;

int UAB_array_int_444_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_444VTable != NULL
        && pSimUAB_array_int_444VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_444VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 444, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_UAB_array_int_444(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_444VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_444VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 444, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_UAB_array_int_444_double_conversion_allowed()
{
    if (pSimUAB_array_int_444VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_444VTable);
    }
    return 0;
}

int is_UAB_array_int_444_long_convertion_allowed()
{
    if (pSimUAB_array_int_444VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_444VTable);
    }
    return 0;
}

void compare_UAB_array_int_444(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_444VTable != NULL
        && pSimUAB_array_int_444VTable->m_version >= Scv612
        && pSimUAB_array_int_444VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_444VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_444VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_444VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int UAB_array_int_444_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_444VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_444VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_444_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_444VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_444VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_444_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_UAB_array_int_444_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 444; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_444_string(const char *str, char **endptr)
{
    static UAB_array_int_444 rTemp;
    return string_to_UAB_array_int_444(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_444_Utils = {
    UAB_array_int_444_to_string,
    check_UAB_array_int_444_string,
    string_to_UAB_array_int_444,
    is_UAB_array_int_444_double_conversion_allowed,
    UAB_array_int_444_to_double,
    is_UAB_array_int_444_long_convertion_allowed,
    UAB_array_int_444_to_long,
    compare_UAB_array_int_444,
    get_UAB_array_int_444_signature,
    set_UAB_array_int_444_default_value,
    sizeof(UAB_array_int_444)
};

/****************************************************************
 ** UAB_array_int_395 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_array_int_395VTable;

int UAB_array_int_395_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_array_int_395VTable != NULL
        && pSimUAB_array_int_395VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_array_int_395VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 395, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_UAB_array_int_395(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_array_int_395VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_array_int_395VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 395, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_UAB_array_int_395_double_conversion_allowed()
{
    if (pSimUAB_array_int_395VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_array_int_395VTable);
    }
    return 0;
}

int is_UAB_array_int_395_long_convertion_allowed()
{
    if (pSimUAB_array_int_395VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_array_int_395VTable);
    }
    return 0;
}

void compare_UAB_array_int_395(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_array_int_395VTable != NULL
        && pSimUAB_array_int_395VTable->m_version >= Scv612
        && pSimUAB_array_int_395VTable->m_pfnCompare != NULL) {
        if (pSimUAB_array_int_395VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_array_int_395VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_array_int_395VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
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

int UAB_array_int_395_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_array_int_395VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_array_int_395VTable, nRetValue);
    }
    return 0;
}

int UAB_array_int_395_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_array_int_395VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_array_int_395VTable, nRetValue);
    }
    return 0;
}

int get_UAB_array_int_395_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
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

int set_UAB_array_int_395_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 395; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_UAB_array_int_395_string(const char *str, char **endptr)
{
    static UAB_array_int_395 rTemp;
    return string_to_UAB_array_int_395(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_array_int_395_Utils = {
    UAB_array_int_395_to_string,
    check_UAB_array_int_395_string,
    string_to_UAB_array_int_395,
    is_UAB_array_int_395_double_conversion_allowed,
    UAB_array_int_395_to_double,
    is_UAB_array_int_395_long_convertion_allowed,
    UAB_array_int_395_to_long,
    compare_UAB_array_int_395,
    get_UAB_array_int_395_signature,
    set_UAB_array_int_395_default_value,
    sizeof(UAB_array_int_395)
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
 ** UAB_BaliseGroupData_Basics 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_BaliseGroupData_BasicsVTable;

int UAB_BaliseGroupData_Basics_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_BaliseGroupData_BasicsVTable != NULL
        && pSimUAB_BaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_BaliseGroupData_BasicsVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21286_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_BaliseGroupData_Basics(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_BaliseGroupData_BasicsVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_BaliseGroupData_BasicsVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21286(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_BaliseGroupData_Basics_double_conversion_allowed()
{
    if (pSimUAB_BaliseGroupData_BasicsVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_BaliseGroupData_BasicsVTable);
    }
    return is_UAB_struct__21286_double_conversion_allowed();
}

int is_UAB_BaliseGroupData_Basics_long_convertion_allowed()
{
    if (pSimUAB_BaliseGroupData_BasicsVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_BaliseGroupData_BasicsVTable);
    }
    return is_UAB_struct__21286_long_convertion_allowed();
}

void compare_UAB_BaliseGroupData_Basics(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_BaliseGroupData_BasicsVTable != NULL
        && pSimUAB_BaliseGroupData_BasicsVTable->m_version >= Scv612
        && pSimUAB_BaliseGroupData_BasicsVTable->m_pfnCompare != NULL) {
        if (pSimUAB_BaliseGroupData_BasicsVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_BaliseGroupData_BasicsVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_BaliseGroupData_BasicsVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21286(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_BaliseGroupData_Basics_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_BaliseGroupData_BasicsVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_BaliseGroupData_BasicsVTable, nRetValue);
    }
    return UAB_struct__21286_to_double(pValue, nRetValue);
}

int UAB_BaliseGroupData_Basics_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_BaliseGroupData_BasicsVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_BaliseGroupData_BasicsVTable, nRetValue);
    }
    return UAB_struct__21286_to_long(pValue, nRetValue);
}

int get_UAB_BaliseGroupData_Basics_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21286_signature(pfnStrAppend, pData);
}

int set_UAB_BaliseGroupData_Basics_default_value(void *pValue)
{
    return set_UAB_struct__21286_default_value(pValue);
}

int check_UAB_BaliseGroupData_Basics_string(const char *str, char **endptr)
{
    static UAB_BaliseGroupData_Basics rTemp;
    return string_to_UAB_BaliseGroupData_Basics(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_BaliseGroupData_Basics_Utils = {
    UAB_BaliseGroupData_Basics_to_string,
    check_UAB_BaliseGroupData_Basics_string,
    string_to_UAB_BaliseGroupData_Basics,
    is_UAB_BaliseGroupData_Basics_double_conversion_allowed,
    UAB_BaliseGroupData_Basics_to_double,
    is_UAB_BaliseGroupData_Basics_long_convertion_allowed,
    UAB_BaliseGroupData_Basics_to_long,
    compare_UAB_BaliseGroupData_Basics,
    get_UAB_BaliseGroupData_Basics_signature,
    set_UAB_BaliseGroupData_Basics_default_value,
    sizeof(UAB_BaliseGroupData_Basics)
};

/****************************************************************
 ** UAB_OrBG_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_OrBG_TMVTable;

static SimEnumValUtils UAB_OrBG_TM_values[] = {
    { "TM::Amsterdam", UAB_Amsterdam_TM},
    { "Amsterdam", UAB_Amsterdam_TM},
    { "TM::Utrecht", UAB_Utrecht_TM},
    { "Utrecht", UAB_Utrecht_TM},
};
const int UAB_OrBG_TM_nb_values = 4;

int UAB_OrBG_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_OrBG_TMVTable != NULL
        && pSimUAB_OrBG_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_OrBG_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(UAB_OrBG_TM*)pValue, UAB_OrBG_TM_values, UAB_OrBG_TM_nb_values, pfnStrAppend, pData); 
}

int string_to_UAB_OrBG_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_OrBG_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_OrBG_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, UAB_OrBG_TM_values, UAB_OrBG_TM_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(UAB_OrBG_TM*)pValue = nTemp;
    }
    return nRet;
}

int is_UAB_OrBG_TM_double_conversion_allowed()
{
    if (pSimUAB_OrBG_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_OrBG_TMVTable);
    }
    return 1;
}

int is_UAB_OrBG_TM_long_convertion_allowed()
{
    if (pSimUAB_OrBG_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_OrBG_TMVTable);
    }
    return 1;
}

void compare_UAB_OrBG_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_OrBG_TMVTable != NULL
        && pSimUAB_OrBG_TMVTable->m_version >= Scv612
        && pSimUAB_OrBG_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_OrBG_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_OrBG_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_OrBG_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(UAB_OrBG_TM*)pValue1), (int)(*(UAB_OrBG_TM*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_OrBG_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_OrBG_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_OrBG_TMVTable, nRetValue);
    }
    *nRetValue = (double)*((UAB_OrBG_TM*)pValue);
    return 1;
}

int UAB_OrBG_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_OrBG_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_OrBG_TMVTable, nRetValue);
    }
    *nRetValue = (long)*((UAB_OrBG_TM*)pValue);
    return 1;
}

int get_UAB_OrBG_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(UAB_OrBG_TM_values, UAB_OrBG_TM_nb_values, pfnStrAppend, pData);
}

int set_UAB_OrBG_TM_default_value(void *pValue)
{
    *(UAB_OrBG_TM*)pValue = UAB_Amsterdam_TM;
    return 1;
}

int check_UAB_OrBG_TM_string(const char *str, char **endptr)
{
    static UAB_OrBG_TM rTemp;
    return string_to_UAB_OrBG_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_OrBG_TM_Utils = {
    UAB_OrBG_TM_to_string,
    check_UAB_OrBG_TM_string,
    string_to_UAB_OrBG_TM,
    is_UAB_OrBG_TM_double_conversion_allowed,
    UAB_OrBG_TM_to_double,
    is_UAB_OrBG_TM_long_convertion_allowed,
    UAB_OrBG_TM_to_long,
    compare_UAB_OrBG_TM,
    get_UAB_OrBG_TM_signature,
    set_UAB_OrBG_TM_default_value,
    sizeof(UAB_OrBG_TM)
};

/****************************************************************
 ** UAB_OrLine_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_OrLine_TMVTable;

static SimEnumValUtils UAB_OrLine_TM_values[] = {
    { "TM::N", UAB_N_TM},
    { "N", UAB_N_TM},
    { "TM::Z", UAB_Z_TM},
    { "Z", UAB_Z_TM},
};
const int UAB_OrLine_TM_nb_values = 4;

int UAB_OrLine_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_OrLine_TMVTable != NULL
        && pSimUAB_OrLine_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_OrLine_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(UAB_OrLine_TM*)pValue, UAB_OrLine_TM_values, UAB_OrLine_TM_nb_values, pfnStrAppend, pData); 
}

int string_to_UAB_OrLine_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_OrLine_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_OrLine_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, UAB_OrLine_TM_values, UAB_OrLine_TM_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(UAB_OrLine_TM*)pValue = nTemp;
    }
    return nRet;
}

int is_UAB_OrLine_TM_double_conversion_allowed()
{
    if (pSimUAB_OrLine_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_OrLine_TMVTable);
    }
    return 1;
}

int is_UAB_OrLine_TM_long_convertion_allowed()
{
    if (pSimUAB_OrLine_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_OrLine_TMVTable);
    }
    return 1;
}

void compare_UAB_OrLine_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_OrLine_TMVTable != NULL
        && pSimUAB_OrLine_TMVTable->m_version >= Scv612
        && pSimUAB_OrLine_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_OrLine_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_OrLine_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_OrLine_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(UAB_OrLine_TM*)pValue1), (int)(*(UAB_OrLine_TM*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_OrLine_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_OrLine_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_OrLine_TMVTable, nRetValue);
    }
    *nRetValue = (double)*((UAB_OrLine_TM*)pValue);
    return 1;
}

int UAB_OrLine_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_OrLine_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_OrLine_TMVTable, nRetValue);
    }
    *nRetValue = (long)*((UAB_OrLine_TM*)pValue);
    return 1;
}

int get_UAB_OrLine_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(UAB_OrLine_TM_values, UAB_OrLine_TM_nb_values, pfnStrAppend, pData);
}

int set_UAB_OrLine_TM_default_value(void *pValue)
{
    *(UAB_OrLine_TM*)pValue = UAB_N_TM;
    return 1;
}

int check_UAB_OrLine_TM_string(const char *str, char **endptr)
{
    static UAB_OrLine_TM rTemp;
    return string_to_UAB_OrLine_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_OrLine_TM_Utils = {
    UAB_OrLine_TM_to_string,
    check_UAB_OrLine_TM_string,
    string_to_UAB_OrLine_TM,
    is_UAB_OrLine_TM_double_conversion_allowed,
    UAB_OrLine_TM_to_double,
    is_UAB_OrLine_TM_long_convertion_allowed,
    UAB_OrLine_TM_to_long,
    compare_UAB_OrLine_TM,
    get_UAB_OrLine_TM_signature,
    set_UAB_OrLine_TM_default_value,
    sizeof(UAB_OrLine_TM)
};

/****************************************************************
 ** UAB_BaliseTelegramHeader_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_BaliseTelegramHeader_int_T_TMVTable;

int UAB_BaliseTelegramHeader_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_BaliseTelegramHeader_int_T_TMVTable != NULL
        && pSimUAB_BaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_BaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21263_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_BaliseTelegramHeader_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_BaliseTelegramHeader_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_BaliseTelegramHeader_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21263(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_BaliseTelegramHeader_int_T_TM_double_conversion_allowed()
{
    if (pSimUAB_BaliseTelegramHeader_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_BaliseTelegramHeader_int_T_TMVTable);
    }
    return is_UAB_struct__21263_double_conversion_allowed();
}

int is_UAB_BaliseTelegramHeader_int_T_TM_long_convertion_allowed()
{
    if (pSimUAB_BaliseTelegramHeader_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_BaliseTelegramHeader_int_T_TMVTable);
    }
    return is_UAB_struct__21263_long_convertion_allowed();
}

void compare_UAB_BaliseTelegramHeader_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_BaliseTelegramHeader_int_T_TMVTable != NULL
        && pSimUAB_BaliseTelegramHeader_int_T_TMVTable->m_version >= Scv612
        && pSimUAB_BaliseTelegramHeader_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_BaliseTelegramHeader_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_BaliseTelegramHeader_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_BaliseTelegramHeader_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21263(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_BaliseTelegramHeader_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_BaliseTelegramHeader_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_BaliseTelegramHeader_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21263_to_double(pValue, nRetValue);
}

int UAB_BaliseTelegramHeader_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_BaliseTelegramHeader_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_BaliseTelegramHeader_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21263_to_long(pValue, nRetValue);
}

int get_UAB_BaliseTelegramHeader_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21263_signature(pfnStrAppend, pData);
}

int set_UAB_BaliseTelegramHeader_int_T_TM_default_value(void *pValue)
{
    return set_UAB_struct__21263_default_value(pValue);
}

int check_UAB_BaliseTelegramHeader_int_T_TM_string(const char *str, char **endptr)
{
    static UAB_BaliseTelegramHeader_int_T_TM rTemp;
    return string_to_UAB_BaliseTelegramHeader_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_BaliseTelegramHeader_int_T_TM_Utils = {
    UAB_BaliseTelegramHeader_int_T_TM_to_string,
    check_UAB_BaliseTelegramHeader_int_T_TM_string,
    string_to_UAB_BaliseTelegramHeader_int_T_TM,
    is_UAB_BaliseTelegramHeader_int_T_TM_double_conversion_allowed,
    UAB_BaliseTelegramHeader_int_T_TM_to_double,
    is_UAB_BaliseTelegramHeader_int_T_TM_long_convertion_allowed,
    UAB_BaliseTelegramHeader_int_T_TM_to_long,
    compare_UAB_BaliseTelegramHeader_int_T_TM,
    get_UAB_BaliseTelegramHeader_int_T_TM_signature,
    set_UAB_BaliseTelegramHeader_int_T_TM_default_value,
    sizeof(UAB_BaliseTelegramHeader_int_T_TM)
};

/****************************************************************
 ** UAB_P255_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P255_trackside_int_T_TMVTable;

int UAB_P255_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P255_trackside_int_T_TMVTable != NULL
        && pSimUAB_P255_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P255_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21303_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P255_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P255_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P255_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21303(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P255_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P255_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P255_trackside_int_T_TMVTable);
    }
    return is_UAB_struct__21303_double_conversion_allowed();
}

int is_UAB_P255_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P255_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P255_trackside_int_T_TMVTable);
    }
    return is_UAB_struct__21303_long_convertion_allowed();
}

void compare_UAB_P255_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P255_trackside_int_T_TMVTable != NULL
        && pSimUAB_P255_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimUAB_P255_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P255_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P255_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P255_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21303(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P255_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P255_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P255_trackside_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21303_to_double(pValue, nRetValue);
}

int UAB_P255_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P255_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P255_trackside_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21303_to_long(pValue, nRetValue);
}

int get_UAB_P255_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21303_signature(pfnStrAppend, pData);
}

int set_UAB_P255_trackside_int_T_TM_default_value(void *pValue)
{
    return set_UAB_struct__21303_default_value(pValue);
}

int check_UAB_P255_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static UAB_P255_trackside_int_T_TM rTemp;
    return string_to_UAB_P255_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P255_trackside_int_T_TM_Utils = {
    UAB_P255_trackside_int_T_TM_to_string,
    check_UAB_P255_trackside_int_T_TM_string,
    string_to_UAB_P255_trackside_int_T_TM,
    is_UAB_P255_trackside_int_T_TM_double_conversion_allowed,
    UAB_P255_trackside_int_T_TM_to_double,
    is_UAB_P255_trackside_int_T_TM_long_convertion_allowed,
    UAB_P255_trackside_int_T_TM_to_long,
    compare_UAB_P255_trackside_int_T_TM,
    get_UAB_P255_trackside_int_T_TM_signature,
    set_UAB_P255_trackside_int_T_TM_default_value,
    sizeof(UAB_P255_trackside_int_T_TM)
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
 ** UAB_P045_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P045_trackside_int_T_TMVTable;

int UAB_P045_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P045_trackside_int_T_TMVTable != NULL
        && pSimUAB_P045_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P045_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21426_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P045_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P045_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P045_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21426(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P045_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P045_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P045_trackside_int_T_TMVTable);
    }
    return is_UAB_struct__21426_double_conversion_allowed();
}

int is_UAB_P045_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P045_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P045_trackside_int_T_TMVTable);
    }
    return is_UAB_struct__21426_long_convertion_allowed();
}

void compare_UAB_P045_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P045_trackside_int_T_TMVTable != NULL
        && pSimUAB_P045_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimUAB_P045_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P045_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P045_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P045_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21426(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P045_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P045_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P045_trackside_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21426_to_double(pValue, nRetValue);
}

int UAB_P045_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P045_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P045_trackside_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21426_to_long(pValue, nRetValue);
}

int get_UAB_P045_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21426_signature(pfnStrAppend, pData);
}

int set_UAB_P045_trackside_int_T_TM_default_value(void *pValue)
{
    return set_UAB_struct__21426_default_value(pValue);
}

int check_UAB_P045_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static UAB_P045_trackside_int_T_TM rTemp;
    return string_to_UAB_P045_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P045_trackside_int_T_TM_Utils = {
    UAB_P045_trackside_int_T_TM_to_string,
    check_UAB_P045_trackside_int_T_TM_string,
    string_to_UAB_P045_trackside_int_T_TM,
    is_UAB_P045_trackside_int_T_TM_double_conversion_allowed,
    UAB_P045_trackside_int_T_TM_to_double,
    is_UAB_P045_trackside_int_T_TM_long_convertion_allowed,
    UAB_P045_trackside_int_T_TM_to_long,
    compare_UAB_P045_trackside_int_T_TM,
    get_UAB_P045_trackside_int_T_TM_signature,
    set_UAB_P045_trackside_int_T_TM_default_value,
    sizeof(UAB_P045_trackside_int_T_TM)
};

/****************************************************************
 ** UAB_BaliseGroupData_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_BaliseGroupData_TMVTable;

int UAB_BaliseGroupData_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_BaliseGroupData_TMVTable != NULL
        && pSimUAB_BaliseGroupData_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_BaliseGroupData_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21286_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_BaliseGroupData_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_BaliseGroupData_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_BaliseGroupData_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21286(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_BaliseGroupData_TM_double_conversion_allowed()
{
    if (pSimUAB_BaliseGroupData_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_BaliseGroupData_TMVTable);
    }
    return is_UAB_struct__21286_double_conversion_allowed();
}

int is_UAB_BaliseGroupData_TM_long_convertion_allowed()
{
    if (pSimUAB_BaliseGroupData_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_BaliseGroupData_TMVTable);
    }
    return is_UAB_struct__21286_long_convertion_allowed();
}

void compare_UAB_BaliseGroupData_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_BaliseGroupData_TMVTable != NULL
        && pSimUAB_BaliseGroupData_TMVTable->m_version >= Scv612
        && pSimUAB_BaliseGroupData_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_BaliseGroupData_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_BaliseGroupData_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_BaliseGroupData_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21286(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_BaliseGroupData_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_BaliseGroupData_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_BaliseGroupData_TMVTable, nRetValue);
    }
    return UAB_struct__21286_to_double(pValue, nRetValue);
}

int UAB_BaliseGroupData_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_BaliseGroupData_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_BaliseGroupData_TMVTable, nRetValue);
    }
    return UAB_struct__21286_to_long(pValue, nRetValue);
}

int get_UAB_BaliseGroupData_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21286_signature(pfnStrAppend, pData);
}

int set_UAB_BaliseGroupData_TM_default_value(void *pValue)
{
    return set_UAB_struct__21286_default_value(pValue);
}

int check_UAB_BaliseGroupData_TM_string(const char *str, char **endptr)
{
    static UAB_BaliseGroupData_TM rTemp;
    return string_to_UAB_BaliseGroupData_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_BaliseGroupData_TM_Utils = {
    UAB_BaliseGroupData_TM_to_string,
    check_UAB_BaliseGroupData_TM_string,
    string_to_UAB_BaliseGroupData_TM,
    is_UAB_BaliseGroupData_TM_double_conversion_allowed,
    UAB_BaliseGroupData_TM_to_double,
    is_UAB_BaliseGroupData_TM_long_convertion_allowed,
    UAB_BaliseGroupData_TM_to_long,
    compare_UAB_BaliseGroupData_TM,
    get_UAB_BaliseGroupData_TM_signature,
    set_UAB_BaliseGroupData_TM_default_value,
    sizeof(UAB_BaliseGroupData_TM)
};

/****************************************************************
 ** UAB_CompressedBaliseMessage_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_CompressedBaliseMessage_TMVTable;

int UAB_CompressedBaliseMessage_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_CompressedBaliseMessage_TMVTable != NULL
        && pSimUAB_CompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_CompressedBaliseMessage_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21276_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_CompressedBaliseMessage_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_CompressedBaliseMessage_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_CompressedBaliseMessage_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21276(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_CompressedBaliseMessage_TM_double_conversion_allowed()
{
    if (pSimUAB_CompressedBaliseMessage_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_CompressedBaliseMessage_TMVTable);
    }
    return is_UAB_struct__21276_double_conversion_allowed();
}

int is_UAB_CompressedBaliseMessage_TM_long_convertion_allowed()
{
    if (pSimUAB_CompressedBaliseMessage_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_CompressedBaliseMessage_TMVTable);
    }
    return is_UAB_struct__21276_long_convertion_allowed();
}

void compare_UAB_CompressedBaliseMessage_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_CompressedBaliseMessage_TMVTable != NULL
        && pSimUAB_CompressedBaliseMessage_TMVTable->m_version >= Scv612
        && pSimUAB_CompressedBaliseMessage_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_CompressedBaliseMessage_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_CompressedBaliseMessage_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_CompressedBaliseMessage_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21276(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_CompressedBaliseMessage_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_CompressedBaliseMessage_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_CompressedBaliseMessage_TMVTable, nRetValue);
    }
    return UAB_struct__21276_to_double(pValue, nRetValue);
}

int UAB_CompressedBaliseMessage_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_CompressedBaliseMessage_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_CompressedBaliseMessage_TMVTable, nRetValue);
    }
    return UAB_struct__21276_to_long(pValue, nRetValue);
}

int get_UAB_CompressedBaliseMessage_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21276_signature(pfnStrAppend, pData);
}

int set_UAB_CompressedBaliseMessage_TM_default_value(void *pValue)
{
    return set_UAB_struct__21276_default_value(pValue);
}

int check_UAB_CompressedBaliseMessage_TM_string(const char *str, char **endptr)
{
    static UAB_CompressedBaliseMessage_TM rTemp;
    return string_to_UAB_CompressedBaliseMessage_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_CompressedBaliseMessage_TM_Utils = {
    UAB_CompressedBaliseMessage_TM_to_string,
    check_UAB_CompressedBaliseMessage_TM_string,
    string_to_UAB_CompressedBaliseMessage_TM,
    is_UAB_CompressedBaliseMessage_TM_double_conversion_allowed,
    UAB_CompressedBaliseMessage_TM_to_double,
    is_UAB_CompressedBaliseMessage_TM_long_convertion_allowed,
    UAB_CompressedBaliseMessage_TM_to_long,
    compare_UAB_CompressedBaliseMessage_TM,
    get_UAB_CompressedBaliseMessage_TM_signature,
    set_UAB_CompressedBaliseMessage_TM_default_value,
    sizeof(UAB_CompressedBaliseMessage_TM)
};

/****************************************************************
 ** UAB_P042_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P042_trackside_int_T_TMVTable;

int UAB_P042_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P042_trackside_int_T_TMVTable != NULL
        && pSimUAB_P042_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P042_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21382_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P042_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P042_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P042_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21382(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P042_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P042_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P042_trackside_int_T_TMVTable);
    }
    return is_UAB_struct__21382_double_conversion_allowed();
}

int is_UAB_P042_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P042_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P042_trackside_int_T_TMVTable);
    }
    return is_UAB_struct__21382_long_convertion_allowed();
}

void compare_UAB_P042_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P042_trackside_int_T_TMVTable != NULL
        && pSimUAB_P042_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimUAB_P042_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P042_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P042_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P042_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21382(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P042_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P042_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P042_trackside_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21382_to_double(pValue, nRetValue);
}

int UAB_P042_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P042_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P042_trackside_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21382_to_long(pValue, nRetValue);
}

int get_UAB_P042_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21382_signature(pfnStrAppend, pData);
}

int set_UAB_P042_trackside_int_T_TM_default_value(void *pValue)
{
    return set_UAB_struct__21382_default_value(pValue);
}

int check_UAB_P042_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static UAB_P042_trackside_int_T_TM rTemp;
    return string_to_UAB_P042_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P042_trackside_int_T_TM_Utils = {
    UAB_P042_trackside_int_T_TM_to_string,
    check_UAB_P042_trackside_int_T_TM_string,
    string_to_UAB_P042_trackside_int_T_TM,
    is_UAB_P042_trackside_int_T_TM_double_conversion_allowed,
    UAB_P042_trackside_int_T_TM_to_double,
    is_UAB_P042_trackside_int_T_TM_long_convertion_allowed,
    UAB_P042_trackside_int_T_TM_to_long,
    compare_UAB_P042_trackside_int_T_TM,
    get_UAB_P042_trackside_int_T_TM_signature,
    set_UAB_P042_trackside_int_T_TM_default_value,
    sizeof(UAB_P042_trackside_int_T_TM)
};

/****************************************************************
 ** UAB_P046_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P046_trackside_int_T_TMVTable;

int UAB_P046_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P046_trackside_int_T_TMVTable != NULL
        && pSimUAB_P046_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P046_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21371_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P046_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P046_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P046_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21371(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P046_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P046_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P046_trackside_int_T_TMVTable);
    }
    return is_UAB_struct__21371_double_conversion_allowed();
}

int is_UAB_P046_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P046_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P046_trackside_int_T_TMVTable);
    }
    return is_UAB_struct__21371_long_convertion_allowed();
}

void compare_UAB_P046_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P046_trackside_int_T_TMVTable != NULL
        && pSimUAB_P046_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimUAB_P046_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P046_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P046_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P046_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21371(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P046_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P046_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P046_trackside_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21371_to_double(pValue, nRetValue);
}

int UAB_P046_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P046_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P046_trackside_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21371_to_long(pValue, nRetValue);
}

int get_UAB_P046_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21371_signature(pfnStrAppend, pData);
}

int set_UAB_P046_trackside_int_T_TM_default_value(void *pValue)
{
    return set_UAB_struct__21371_default_value(pValue);
}

int check_UAB_P046_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static UAB_P046_trackside_int_T_TM rTemp;
    return string_to_UAB_P046_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P046_trackside_int_T_TM_Utils = {
    UAB_P046_trackside_int_T_TM_to_string,
    check_UAB_P046_trackside_int_T_TM_string,
    string_to_UAB_P046_trackside_int_T_TM,
    is_UAB_P046_trackside_int_T_TM_double_conversion_allowed,
    UAB_P046_trackside_int_T_TM_to_double,
    is_UAB_P046_trackside_int_T_TM_long_convertion_allowed,
    UAB_P046_trackside_int_T_TM_to_long,
    compare_UAB_P046_trackside_int_T_TM,
    get_UAB_P046_trackside_int_T_TM_signature,
    set_UAB_P046_trackside_int_T_TM_default_value,
    sizeof(UAB_P046_trackside_int_T_TM)
};

/****************************************************************
 ** UAB_P046_trackide_sectionlist_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P046_trackide_sectionlist_T_TMVTable;

int UAB_P046_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P046_trackide_sectionlist_T_TMVTable != NULL
        && pSimUAB_P046_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P046_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array__21368_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P046_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P046_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P046_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array__21368(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P046_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P046_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P046_trackide_sectionlist_T_TMVTable);
    }
    return is_UAB_array__21368_double_conversion_allowed();
}

int is_UAB_P046_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P046_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P046_trackide_sectionlist_T_TMVTable);
    }
    return is_UAB_array__21368_long_convertion_allowed();
}

void compare_UAB_P046_trackide_sectionlist_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P046_trackide_sectionlist_T_TMVTable != NULL
        && pSimUAB_P046_trackide_sectionlist_T_TMVTable->m_version >= Scv612
        && pSimUAB_P046_trackide_sectionlist_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P046_trackide_sectionlist_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P046_trackide_sectionlist_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P046_trackide_sectionlist_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array__21368(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P046_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P046_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P046_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return UAB_array__21368_to_double(pValue, nRetValue);
}

int UAB_P046_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P046_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P046_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return UAB_array__21368_to_long(pValue, nRetValue);
}

int get_UAB_P046_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array__21368_signature(pfnStrAppend, pData);
}

int set_UAB_P046_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_UAB_array__21368_default_value(pValue);
}

int check_UAB_P046_trackide_sectionlist_T_TM_string(const char *str, char **endptr)
{
    static UAB_P046_trackide_sectionlist_T_TM rTemp;
    return string_to_UAB_P046_trackide_sectionlist_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P046_trackide_sectionlist_T_TM_Utils = {
    UAB_P046_trackide_sectionlist_T_TM_to_string,
    check_UAB_P046_trackide_sectionlist_T_TM_string,
    string_to_UAB_P046_trackide_sectionlist_T_TM,
    is_UAB_P046_trackide_sectionlist_T_TM_double_conversion_allowed,
    UAB_P046_trackide_sectionlist_T_TM_to_double,
    is_UAB_P046_trackide_sectionlist_T_TM_long_convertion_allowed,
    UAB_P046_trackide_sectionlist_T_TM_to_long,
    compare_UAB_P046_trackide_sectionlist_T_TM,
    get_UAB_P046_trackide_sectionlist_T_TM_signature,
    set_UAB_P046_trackide_sectionlist_T_TM_default_value,
    sizeof(UAB_P046_trackide_sectionlist_T_TM)
};

/****************************************************************
 ** UAB_P046_section_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P046_section_int_T_TMVTable;

int UAB_P046_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P046_section_int_T_TMVTable != NULL
        && pSimUAB_P046_section_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P046_section_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21354_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P046_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P046_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P046_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21354(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P046_section_int_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P046_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P046_section_int_T_TMVTable);
    }
    return is_UAB_struct__21354_double_conversion_allowed();
}

int is_UAB_P046_section_int_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P046_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P046_section_int_T_TMVTable);
    }
    return is_UAB_struct__21354_long_convertion_allowed();
}

void compare_UAB_P046_section_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P046_section_int_T_TMVTable != NULL
        && pSimUAB_P046_section_int_T_TMVTable->m_version >= Scv612
        && pSimUAB_P046_section_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P046_section_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P046_section_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P046_section_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21354(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P046_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P046_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P046_section_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21354_to_double(pValue, nRetValue);
}

int UAB_P046_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P046_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P046_section_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21354_to_long(pValue, nRetValue);
}

int get_UAB_P046_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21354_signature(pfnStrAppend, pData);
}

int set_UAB_P046_section_int_T_TM_default_value(void *pValue)
{
    return set_UAB_struct__21354_default_value(pValue);
}

int check_UAB_P046_section_int_T_TM_string(const char *str, char **endptr)
{
    static UAB_P046_section_int_T_TM rTemp;
    return string_to_UAB_P046_section_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P046_section_int_T_TM_Utils = {
    UAB_P046_section_int_T_TM_to_string,
    check_UAB_P046_section_int_T_TM_string,
    string_to_UAB_P046_section_int_T_TM,
    is_UAB_P046_section_int_T_TM_double_conversion_allowed,
    UAB_P046_section_int_T_TM_to_double,
    is_UAB_P046_section_int_T_TM_long_convertion_allowed,
    UAB_P046_section_int_T_TM_to_long,
    compare_UAB_P046_section_int_T_TM,
    get_UAB_P046_section_int_T_TM_signature,
    set_UAB_P046_section_int_T_TM_default_value,
    sizeof(UAB_P046_section_int_T_TM)
};

/****************************************************************
 ** UAB_P046_sections_array_flat_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P046_sections_array_flat_T_TMVTable;

int UAB_P046_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P046_sections_array_flat_T_TMVTable != NULL
        && pSimUAB_P046_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P046_sections_array_flat_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array_int_66_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P046_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P046_sections_array_flat_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P046_sections_array_flat_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array_int_66(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P046_sections_array_flat_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P046_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P046_sections_array_flat_T_TMVTable);
    }
    return is_UAB_array_int_66_double_conversion_allowed();
}

int is_UAB_P046_sections_array_flat_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P046_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P046_sections_array_flat_T_TMVTable);
    }
    return is_UAB_array_int_66_long_convertion_allowed();
}

void compare_UAB_P046_sections_array_flat_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P046_sections_array_flat_T_TMVTable != NULL
        && pSimUAB_P046_sections_array_flat_T_TMVTable->m_version >= Scv612
        && pSimUAB_P046_sections_array_flat_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P046_sections_array_flat_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P046_sections_array_flat_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P046_sections_array_flat_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array_int_66(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P046_sections_array_flat_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P046_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P046_sections_array_flat_T_TMVTable, nRetValue);
    }
    return UAB_array_int_66_to_double(pValue, nRetValue);
}

int UAB_P046_sections_array_flat_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P046_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P046_sections_array_flat_T_TMVTable, nRetValue);
    }
    return UAB_array_int_66_to_long(pValue, nRetValue);
}

int get_UAB_P046_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array_int_66_signature(pfnStrAppend, pData);
}

int set_UAB_P046_sections_array_flat_T_TM_default_value(void *pValue)
{
    return set_UAB_array_int_66_default_value(pValue);
}

int check_UAB_P046_sections_array_flat_T_TM_string(const char *str, char **endptr)
{
    static UAB_P046_sections_array_flat_T_TM rTemp;
    return string_to_UAB_P046_sections_array_flat_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P046_sections_array_flat_T_TM_Utils = {
    UAB_P046_sections_array_flat_T_TM_to_string,
    check_UAB_P046_sections_array_flat_T_TM_string,
    string_to_UAB_P046_sections_array_flat_T_TM,
    is_UAB_P046_sections_array_flat_T_TM_double_conversion_allowed,
    UAB_P046_sections_array_flat_T_TM_to_double,
    is_UAB_P046_sections_array_flat_T_TM_long_convertion_allowed,
    UAB_P046_sections_array_flat_T_TM_to_long,
    compare_UAB_P046_sections_array_flat_T_TM,
    get_UAB_P046_sections_array_flat_T_TM_signature,
    set_UAB_P046_sections_array_flat_T_TM_default_value,
    sizeof(UAB_P046_sections_array_flat_T_TM)
};

/****************************************************************
 ** UAB_P046_OBU_sectionlist_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P046_OBU_sectionlist_array_T_TMVTable;

int UAB_P046_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P046_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimUAB_P046_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P046_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array_int_2_33_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P046_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P046_OBU_sectionlist_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P046_OBU_sectionlist_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array_int_2_33(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P046_OBU_sectionlist_array_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P046_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P046_OBU_sectionlist_array_T_TMVTable);
    }
    return is_UAB_array_int_2_33_double_conversion_allowed();
}

int is_UAB_P046_OBU_sectionlist_array_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P046_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P046_OBU_sectionlist_array_T_TMVTable);
    }
    return is_UAB_array_int_2_33_long_convertion_allowed();
}

void compare_UAB_P046_OBU_sectionlist_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P046_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimUAB_P046_OBU_sectionlist_array_T_TMVTable->m_version >= Scv612
        && pSimUAB_P046_OBU_sectionlist_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P046_OBU_sectionlist_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P046_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P046_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array_int_2_33(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P046_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P046_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P046_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return UAB_array_int_2_33_to_double(pValue, nRetValue);
}

int UAB_P046_OBU_sectionlist_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P046_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P046_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return UAB_array_int_2_33_to_long(pValue, nRetValue);
}

int get_UAB_P046_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array_int_2_33_signature(pfnStrAppend, pData);
}

int set_UAB_P046_OBU_sectionlist_array_T_TM_default_value(void *pValue)
{
    return set_UAB_array_int_2_33_default_value(pValue);
}

int check_UAB_P046_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr)
{
    static UAB_P046_OBU_sectionlist_array_T_TM rTemp;
    return string_to_UAB_P046_OBU_sectionlist_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P046_OBU_sectionlist_array_T_TM_Utils = {
    UAB_P046_OBU_sectionlist_array_T_TM_to_string,
    check_UAB_P046_OBU_sectionlist_array_T_TM_string,
    string_to_UAB_P046_OBU_sectionlist_array_T_TM,
    is_UAB_P046_OBU_sectionlist_array_T_TM_double_conversion_allowed,
    UAB_P046_OBU_sectionlist_array_T_TM_to_double,
    is_UAB_P046_OBU_sectionlist_array_T_TM_long_convertion_allowed,
    UAB_P046_OBU_sectionlist_array_T_TM_to_long,
    compare_UAB_P046_OBU_sectionlist_array_T_TM,
    get_UAB_P046_OBU_sectionlist_array_T_TM_signature,
    set_UAB_P046_OBU_sectionlist_array_T_TM_default_value,
    sizeof(UAB_P046_OBU_sectionlist_array_T_TM)
};

/****************************************************************
 ** UAB_P046_section_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P046_section_array_T_TMVTable;

int UAB_P046_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P046_section_array_T_TMVTable != NULL
        && pSimUAB_P046_section_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P046_section_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array_int_2_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P046_section_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P046_section_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P046_section_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array_int_2(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P046_section_array_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P046_section_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P046_section_array_T_TMVTable);
    }
    return is_UAB_array_int_2_double_conversion_allowed();
}

int is_UAB_P046_section_array_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P046_section_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P046_section_array_T_TMVTable);
    }
    return is_UAB_array_int_2_long_convertion_allowed();
}

void compare_UAB_P046_section_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P046_section_array_T_TMVTable != NULL
        && pSimUAB_P046_section_array_T_TMVTable->m_version >= Scv612
        && pSimUAB_P046_section_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P046_section_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P046_section_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P046_section_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array_int_2(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P046_section_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P046_section_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P046_section_array_T_TMVTable, nRetValue);
    }
    return UAB_array_int_2_to_double(pValue, nRetValue);
}

int UAB_P046_section_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P046_section_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P046_section_array_T_TMVTable, nRetValue);
    }
    return UAB_array_int_2_to_long(pValue, nRetValue);
}

int get_UAB_P046_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array_int_2_signature(pfnStrAppend, pData);
}

int set_UAB_P046_section_array_T_TM_default_value(void *pValue)
{
    return set_UAB_array_int_2_default_value(pValue);
}

int check_UAB_P046_section_array_T_TM_string(const char *str, char **endptr)
{
    static UAB_P046_section_array_T_TM rTemp;
    return string_to_UAB_P046_section_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P046_section_array_T_TM_Utils = {
    UAB_P046_section_array_T_TM_to_string,
    check_UAB_P046_section_array_T_TM_string,
    string_to_UAB_P046_section_array_T_TM,
    is_UAB_P046_section_array_T_TM_double_conversion_allowed,
    UAB_P046_section_array_T_TM_to_double,
    is_UAB_P046_section_array_T_TM_long_convertion_allowed,
    UAB_P046_section_array_T_TM_to_long,
    compare_UAB_P046_section_array_T_TM,
    get_UAB_P046_section_array_T_TM_signature,
    set_UAB_P046_section_array_T_TM_default_value,
    sizeof(UAB_P046_section_array_T_TM)
};

/****************************************************************
 ** UAB_P046_OBU_sectionlist_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P046_OBU_sectionlist_int_T_TMVTable;

int UAB_P046_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P046_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimUAB_P046_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P046_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array__21365_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P046_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P046_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P046_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array__21365(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P046_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P046_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P046_OBU_sectionlist_int_T_TMVTable);
    }
    return is_UAB_array__21365_double_conversion_allowed();
}

int is_UAB_P046_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P046_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P046_OBU_sectionlist_int_T_TMVTable);
    }
    return is_UAB_array__21365_long_convertion_allowed();
}

void compare_UAB_P046_OBU_sectionlist_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P046_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimUAB_P046_OBU_sectionlist_int_T_TMVTable->m_version >= Scv612
        && pSimUAB_P046_OBU_sectionlist_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P046_OBU_sectionlist_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P046_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P046_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array__21365(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P046_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P046_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P046_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return UAB_array__21365_to_double(pValue, nRetValue);
}

int UAB_P046_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P046_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P046_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return UAB_array__21365_to_long(pValue, nRetValue);
}

int get_UAB_P046_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array__21365_signature(pfnStrAppend, pData);
}

int set_UAB_P046_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_UAB_array__21365_default_value(pValue);
}

int check_UAB_P046_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr)
{
    static UAB_P046_OBU_sectionlist_int_T_TM rTemp;
    return string_to_UAB_P046_OBU_sectionlist_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P046_OBU_sectionlist_int_T_TM_Utils = {
    UAB_P046_OBU_sectionlist_int_T_TM_to_string,
    check_UAB_P046_OBU_sectionlist_int_T_TM_string,
    string_to_UAB_P046_OBU_sectionlist_int_T_TM,
    is_UAB_P046_OBU_sectionlist_int_T_TM_double_conversion_allowed,
    UAB_P046_OBU_sectionlist_int_T_TM_to_double,
    is_UAB_P046_OBU_sectionlist_int_T_TM_long_convertion_allowed,
    UAB_P046_OBU_sectionlist_int_T_TM_to_long,
    compare_UAB_P046_OBU_sectionlist_int_T_TM,
    get_UAB_P046_OBU_sectionlist_int_T_TM_signature,
    set_UAB_P046_OBU_sectionlist_int_T_TM_default_value,
    sizeof(UAB_P046_OBU_sectionlist_int_T_TM)
};

/****************************************************************
 ** UAB_P041_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P041_trackside_int_T_TMVTable;

int UAB_P041_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P041_trackside_int_T_TMVTable != NULL
        && pSimUAB_P041_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P041_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21337_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P041_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P041_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P041_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21337(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P041_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P041_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P041_trackside_int_T_TMVTable);
    }
    return is_UAB_struct__21337_double_conversion_allowed();
}

int is_UAB_P041_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P041_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P041_trackside_int_T_TMVTable);
    }
    return is_UAB_struct__21337_long_convertion_allowed();
}

void compare_UAB_P041_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P041_trackside_int_T_TMVTable != NULL
        && pSimUAB_P041_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimUAB_P041_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P041_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P041_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P041_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21337(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P041_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P041_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P041_trackside_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21337_to_double(pValue, nRetValue);
}

int UAB_P041_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P041_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P041_trackside_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21337_to_long(pValue, nRetValue);
}

int get_UAB_P041_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21337_signature(pfnStrAppend, pData);
}

int set_UAB_P041_trackside_int_T_TM_default_value(void *pValue)
{
    return set_UAB_struct__21337_default_value(pValue);
}

int check_UAB_P041_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static UAB_P041_trackside_int_T_TM rTemp;
    return string_to_UAB_P041_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P041_trackside_int_T_TM_Utils = {
    UAB_P041_trackside_int_T_TM_to_string,
    check_UAB_P041_trackside_int_T_TM_string,
    string_to_UAB_P041_trackside_int_T_TM,
    is_UAB_P041_trackside_int_T_TM_double_conversion_allowed,
    UAB_P041_trackside_int_T_TM_to_double,
    is_UAB_P041_trackside_int_T_TM_long_convertion_allowed,
    UAB_P041_trackside_int_T_TM_to_long,
    compare_UAB_P041_trackside_int_T_TM,
    get_UAB_P041_trackside_int_T_TM_signature,
    set_UAB_P041_trackside_int_T_TM_default_value,
    sizeof(UAB_P041_trackside_int_T_TM)
};

/****************************************************************
 ** UAB_P041_trackide_sectionlist_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P041_trackide_sectionlist_T_TMVTable;

int UAB_P041_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P041_trackide_sectionlist_T_TMVTable != NULL
        && pSimUAB_P041_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P041_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array__21334_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P041_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P041_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P041_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array__21334(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P041_trackide_sectionlist_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P041_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P041_trackide_sectionlist_T_TMVTable);
    }
    return is_UAB_array__21334_double_conversion_allowed();
}

int is_UAB_P041_trackide_sectionlist_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P041_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P041_trackide_sectionlist_T_TMVTable);
    }
    return is_UAB_array__21334_long_convertion_allowed();
}

void compare_UAB_P041_trackide_sectionlist_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P041_trackide_sectionlist_T_TMVTable != NULL
        && pSimUAB_P041_trackide_sectionlist_T_TMVTable->m_version >= Scv612
        && pSimUAB_P041_trackide_sectionlist_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P041_trackide_sectionlist_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P041_trackide_sectionlist_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P041_trackide_sectionlist_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array__21334(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P041_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P041_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P041_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return UAB_array__21334_to_double(pValue, nRetValue);
}

int UAB_P041_trackide_sectionlist_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P041_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P041_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return UAB_array__21334_to_long(pValue, nRetValue);
}

int get_UAB_P041_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array__21334_signature(pfnStrAppend, pData);
}

int set_UAB_P041_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_UAB_array__21334_default_value(pValue);
}

int check_UAB_P041_trackide_sectionlist_T_TM_string(const char *str, char **endptr)
{
    static UAB_P041_trackide_sectionlist_T_TM rTemp;
    return string_to_UAB_P041_trackide_sectionlist_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P041_trackide_sectionlist_T_TM_Utils = {
    UAB_P041_trackide_sectionlist_T_TM_to_string,
    check_UAB_P041_trackide_sectionlist_T_TM_string,
    string_to_UAB_P041_trackide_sectionlist_T_TM,
    is_UAB_P041_trackide_sectionlist_T_TM_double_conversion_allowed,
    UAB_P041_trackide_sectionlist_T_TM_to_double,
    is_UAB_P041_trackide_sectionlist_T_TM_long_convertion_allowed,
    UAB_P041_trackide_sectionlist_T_TM_to_long,
    compare_UAB_P041_trackide_sectionlist_T_TM,
    get_UAB_P041_trackide_sectionlist_T_TM_signature,
    set_UAB_P041_trackide_sectionlist_T_TM_default_value,
    sizeof(UAB_P041_trackide_sectionlist_T_TM)
};

/****************************************************************
 ** UAB_P041_section_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P041_section_int_T_TMVTable;

int UAB_P041_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P041_section_int_T_TMVTable != NULL
        && pSimUAB_P041_section_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P041_section_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21319_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P041_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P041_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P041_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21319(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P041_section_int_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P041_section_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P041_section_int_T_TMVTable);
    }
    return is_UAB_struct__21319_double_conversion_allowed();
}

int is_UAB_P041_section_int_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P041_section_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P041_section_int_T_TMVTable);
    }
    return is_UAB_struct__21319_long_convertion_allowed();
}

void compare_UAB_P041_section_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P041_section_int_T_TMVTable != NULL
        && pSimUAB_P041_section_int_T_TMVTable->m_version >= Scv612
        && pSimUAB_P041_section_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P041_section_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P041_section_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P041_section_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21319(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P041_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P041_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P041_section_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21319_to_double(pValue, nRetValue);
}

int UAB_P041_section_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P041_section_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P041_section_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21319_to_long(pValue, nRetValue);
}

int get_UAB_P041_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21319_signature(pfnStrAppend, pData);
}

int set_UAB_P041_section_int_T_TM_default_value(void *pValue)
{
    return set_UAB_struct__21319_default_value(pValue);
}

int check_UAB_P041_section_int_T_TM_string(const char *str, char **endptr)
{
    static UAB_P041_section_int_T_TM rTemp;
    return string_to_UAB_P041_section_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P041_section_int_T_TM_Utils = {
    UAB_P041_section_int_T_TM_to_string,
    check_UAB_P041_section_int_T_TM_string,
    string_to_UAB_P041_section_int_T_TM,
    is_UAB_P041_section_int_T_TM_double_conversion_allowed,
    UAB_P041_section_int_T_TM_to_double,
    is_UAB_P041_section_int_T_TM_long_convertion_allowed,
    UAB_P041_section_int_T_TM_to_long,
    compare_UAB_P041_section_int_T_TM,
    get_UAB_P041_section_int_T_TM_signature,
    set_UAB_P041_section_int_T_TM_default_value,
    sizeof(UAB_P041_section_int_T_TM)
};

/****************************************************************
 ** UAB_P041_sections_array_flat_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P041_sections_array_flat_T_TMVTable;

int UAB_P041_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P041_sections_array_flat_T_TMVTable != NULL
        && pSimUAB_P041_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P041_sections_array_flat_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array_int_99_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P041_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P041_sections_array_flat_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P041_sections_array_flat_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array_int_99(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P041_sections_array_flat_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P041_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P041_sections_array_flat_T_TMVTable);
    }
    return is_UAB_array_int_99_double_conversion_allowed();
}

int is_UAB_P041_sections_array_flat_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P041_sections_array_flat_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P041_sections_array_flat_T_TMVTable);
    }
    return is_UAB_array_int_99_long_convertion_allowed();
}

void compare_UAB_P041_sections_array_flat_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P041_sections_array_flat_T_TMVTable != NULL
        && pSimUAB_P041_sections_array_flat_T_TMVTable->m_version >= Scv612
        && pSimUAB_P041_sections_array_flat_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P041_sections_array_flat_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P041_sections_array_flat_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P041_sections_array_flat_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array_int_99(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P041_sections_array_flat_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P041_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P041_sections_array_flat_T_TMVTable, nRetValue);
    }
    return UAB_array_int_99_to_double(pValue, nRetValue);
}

int UAB_P041_sections_array_flat_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P041_sections_array_flat_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P041_sections_array_flat_T_TMVTable, nRetValue);
    }
    return UAB_array_int_99_to_long(pValue, nRetValue);
}

int get_UAB_P041_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array_int_99_signature(pfnStrAppend, pData);
}

int set_UAB_P041_sections_array_flat_T_TM_default_value(void *pValue)
{
    return set_UAB_array_int_99_default_value(pValue);
}

int check_UAB_P041_sections_array_flat_T_TM_string(const char *str, char **endptr)
{
    static UAB_P041_sections_array_flat_T_TM rTemp;
    return string_to_UAB_P041_sections_array_flat_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P041_sections_array_flat_T_TM_Utils = {
    UAB_P041_sections_array_flat_T_TM_to_string,
    check_UAB_P041_sections_array_flat_T_TM_string,
    string_to_UAB_P041_sections_array_flat_T_TM,
    is_UAB_P041_sections_array_flat_T_TM_double_conversion_allowed,
    UAB_P041_sections_array_flat_T_TM_to_double,
    is_UAB_P041_sections_array_flat_T_TM_long_convertion_allowed,
    UAB_P041_sections_array_flat_T_TM_to_long,
    compare_UAB_P041_sections_array_flat_T_TM,
    get_UAB_P041_sections_array_flat_T_TM_signature,
    set_UAB_P041_sections_array_flat_T_TM_default_value,
    sizeof(UAB_P041_sections_array_flat_T_TM)
};

/****************************************************************
 ** UAB_P041_OBU_sectionlist_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P041_OBU_sectionlist_array_T_TMVTable;

int UAB_P041_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P041_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimUAB_P041_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P041_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array_int_3_33_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P041_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P041_OBU_sectionlist_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P041_OBU_sectionlist_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array_int_3_33(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P041_OBU_sectionlist_array_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P041_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P041_OBU_sectionlist_array_T_TMVTable);
    }
    return is_UAB_array_int_3_33_double_conversion_allowed();
}

int is_UAB_P041_OBU_sectionlist_array_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P041_OBU_sectionlist_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P041_OBU_sectionlist_array_T_TMVTable);
    }
    return is_UAB_array_int_3_33_long_convertion_allowed();
}

void compare_UAB_P041_OBU_sectionlist_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P041_OBU_sectionlist_array_T_TMVTable != NULL
        && pSimUAB_P041_OBU_sectionlist_array_T_TMVTable->m_version >= Scv612
        && pSimUAB_P041_OBU_sectionlist_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P041_OBU_sectionlist_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P041_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P041_OBU_sectionlist_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array_int_3_33(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P041_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P041_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P041_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return UAB_array_int_3_33_to_double(pValue, nRetValue);
}

int UAB_P041_OBU_sectionlist_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P041_OBU_sectionlist_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P041_OBU_sectionlist_array_T_TMVTable, nRetValue);
    }
    return UAB_array_int_3_33_to_long(pValue, nRetValue);
}

int get_UAB_P041_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array_int_3_33_signature(pfnStrAppend, pData);
}

int set_UAB_P041_OBU_sectionlist_array_T_TM_default_value(void *pValue)
{
    return set_UAB_array_int_3_33_default_value(pValue);
}

int check_UAB_P041_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr)
{
    static UAB_P041_OBU_sectionlist_array_T_TM rTemp;
    return string_to_UAB_P041_OBU_sectionlist_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P041_OBU_sectionlist_array_T_TM_Utils = {
    UAB_P041_OBU_sectionlist_array_T_TM_to_string,
    check_UAB_P041_OBU_sectionlist_array_T_TM_string,
    string_to_UAB_P041_OBU_sectionlist_array_T_TM,
    is_UAB_P041_OBU_sectionlist_array_T_TM_double_conversion_allowed,
    UAB_P041_OBU_sectionlist_array_T_TM_to_double,
    is_UAB_P041_OBU_sectionlist_array_T_TM_long_convertion_allowed,
    UAB_P041_OBU_sectionlist_array_T_TM_to_long,
    compare_UAB_P041_OBU_sectionlist_array_T_TM,
    get_UAB_P041_OBU_sectionlist_array_T_TM_signature,
    set_UAB_P041_OBU_sectionlist_array_T_TM_default_value,
    sizeof(UAB_P041_OBU_sectionlist_array_T_TM)
};

/****************************************************************
 ** UAB_P041_section_array_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P041_section_array_T_TMVTable;

int UAB_P041_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P041_section_array_T_TMVTable != NULL
        && pSimUAB_P041_section_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P041_section_array_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array_int_3_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P041_section_array_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P041_section_array_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P041_section_array_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array_int_3(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P041_section_array_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P041_section_array_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P041_section_array_T_TMVTable);
    }
    return is_UAB_array_int_3_double_conversion_allowed();
}

int is_UAB_P041_section_array_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P041_section_array_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P041_section_array_T_TMVTable);
    }
    return is_UAB_array_int_3_long_convertion_allowed();
}

void compare_UAB_P041_section_array_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P041_section_array_T_TMVTable != NULL
        && pSimUAB_P041_section_array_T_TMVTable->m_version >= Scv612
        && pSimUAB_P041_section_array_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P041_section_array_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P041_section_array_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P041_section_array_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array_int_3(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P041_section_array_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P041_section_array_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P041_section_array_T_TMVTable, nRetValue);
    }
    return UAB_array_int_3_to_double(pValue, nRetValue);
}

int UAB_P041_section_array_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P041_section_array_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P041_section_array_T_TMVTable, nRetValue);
    }
    return UAB_array_int_3_to_long(pValue, nRetValue);
}

int get_UAB_P041_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array_int_3_signature(pfnStrAppend, pData);
}

int set_UAB_P041_section_array_T_TM_default_value(void *pValue)
{
    return set_UAB_array_int_3_default_value(pValue);
}

int check_UAB_P041_section_array_T_TM_string(const char *str, char **endptr)
{
    static UAB_P041_section_array_T_TM rTemp;
    return string_to_UAB_P041_section_array_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P041_section_array_T_TM_Utils = {
    UAB_P041_section_array_T_TM_to_string,
    check_UAB_P041_section_array_T_TM_string,
    string_to_UAB_P041_section_array_T_TM,
    is_UAB_P041_section_array_T_TM_double_conversion_allowed,
    UAB_P041_section_array_T_TM_to_double,
    is_UAB_P041_section_array_T_TM_long_convertion_allowed,
    UAB_P041_section_array_T_TM_to_long,
    compare_UAB_P041_section_array_T_TM,
    get_UAB_P041_section_array_T_TM_signature,
    set_UAB_P041_section_array_T_TM_default_value,
    sizeof(UAB_P041_section_array_T_TM)
};

/****************************************************************
 ** UAB_P041_OBU_sectionlist_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P041_OBU_sectionlist_int_T_TMVTable;

int UAB_P041_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P041_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimUAB_P041_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P041_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array__21331_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P041_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P041_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P041_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array__21331(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P041_OBU_sectionlist_int_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P041_OBU_sectionlist_int_T_TMVTable);
    }
    return is_UAB_array__21331_double_conversion_allowed();
}

int is_UAB_P041_OBU_sectionlist_int_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P041_OBU_sectionlist_int_T_TMVTable);
    }
    return is_UAB_array__21331_long_convertion_allowed();
}

void compare_UAB_P041_OBU_sectionlist_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P041_OBU_sectionlist_int_T_TMVTable != NULL
        && pSimUAB_P041_OBU_sectionlist_int_T_TMVTable->m_version >= Scv612
        && pSimUAB_P041_OBU_sectionlist_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P041_OBU_sectionlist_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P041_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P041_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array__21331(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P041_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P041_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return UAB_array__21331_to_double(pValue, nRetValue);
}

int UAB_P041_OBU_sectionlist_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P041_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P041_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return UAB_array__21331_to_long(pValue, nRetValue);
}

int get_UAB_P041_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array__21331_signature(pfnStrAppend, pData);
}

int set_UAB_P041_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_UAB_array__21331_default_value(pValue);
}

int check_UAB_P041_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr)
{
    static UAB_P041_OBU_sectionlist_int_T_TM rTemp;
    return string_to_UAB_P041_OBU_sectionlist_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P041_OBU_sectionlist_int_T_TM_Utils = {
    UAB_P041_OBU_sectionlist_int_T_TM_to_string,
    check_UAB_P041_OBU_sectionlist_int_T_TM_string,
    string_to_UAB_P041_OBU_sectionlist_int_T_TM,
    is_UAB_P041_OBU_sectionlist_int_T_TM_double_conversion_allowed,
    UAB_P041_OBU_sectionlist_int_T_TM_to_double,
    is_UAB_P041_OBU_sectionlist_int_T_TM_long_convertion_allowed,
    UAB_P041_OBU_sectionlist_int_T_TM_to_long,
    compare_UAB_P041_OBU_sectionlist_int_T_TM,
    get_UAB_P041_OBU_sectionlist_int_T_TM_signature,
    set_UAB_P041_OBU_sectionlist_int_T_TM_default_value,
    sizeof(UAB_P041_OBU_sectionlist_int_T_TM)
};

/****************************************************************
 ** UAB_P137_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P137_trackside_int_T_TMVTable;

int UAB_P137_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P137_trackside_int_T_TMVTable != NULL
        && pSimUAB_P137_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P137_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21308_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P137_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P137_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P137_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21308(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P137_trackside_int_T_TM_double_conversion_allowed()
{
    if (pSimUAB_P137_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P137_trackside_int_T_TMVTable);
    }
    return is_UAB_struct__21308_double_conversion_allowed();
}

int is_UAB_P137_trackside_int_T_TM_long_convertion_allowed()
{
    if (pSimUAB_P137_trackside_int_T_TMVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P137_trackside_int_T_TMVTable);
    }
    return is_UAB_struct__21308_long_convertion_allowed();
}

void compare_UAB_P137_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P137_trackside_int_T_TMVTable != NULL
        && pSimUAB_P137_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimUAB_P137_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimUAB_P137_trackside_int_T_TMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P137_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P137_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21308(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P137_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P137_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P137_trackside_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21308_to_double(pValue, nRetValue);
}

int UAB_P137_trackside_int_T_TM_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P137_trackside_int_T_TMVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P137_trackside_int_T_TMVTable, nRetValue);
    }
    return UAB_struct__21308_to_long(pValue, nRetValue);
}

int get_UAB_P137_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21308_signature(pfnStrAppend, pData);
}

int set_UAB_P137_trackside_int_T_TM_default_value(void *pValue)
{
    return set_UAB_struct__21308_default_value(pValue);
}

int check_UAB_P137_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static UAB_P137_trackside_int_T_TM rTemp;
    return string_to_UAB_P137_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P137_trackside_int_T_TM_Utils = {
    UAB_P137_trackside_int_T_TM_to_string,
    check_UAB_P137_trackside_int_T_TM_string,
    string_to_UAB_P137_trackside_int_T_TM,
    is_UAB_P137_trackside_int_T_TM_double_conversion_allowed,
    UAB_P137_trackside_int_T_TM_to_double,
    is_UAB_P137_trackside_int_T_TM_long_convertion_allowed,
    UAB_P137_trackside_int_T_TM_to_long,
    compare_UAB_P137_trackside_int_T_TM,
    get_UAB_P137_trackside_int_T_TM_signature,
    set_UAB_P137_trackside_int_T_TM_default_value,
    sizeof(UAB_P137_trackside_int_T_TM)
};

/****************************************************************
 ** UAB_B_data_internal_T_InfraLib 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_B_data_internal_T_InfraLibVTable;

int UAB_B_data_internal_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_B_data_internal_T_InfraLibVTable != NULL
        && pSimUAB_B_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_B_data_internal_T_InfraLibVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21294_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_B_data_internal_T_InfraLib(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_B_data_internal_T_InfraLibVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_B_data_internal_T_InfraLibVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21294(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_B_data_internal_T_InfraLib_double_conversion_allowed()
{
    if (pSimUAB_B_data_internal_T_InfraLibVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_B_data_internal_T_InfraLibVTable);
    }
    return is_UAB_struct__21294_double_conversion_allowed();
}

int is_UAB_B_data_internal_T_InfraLib_long_convertion_allowed()
{
    if (pSimUAB_B_data_internal_T_InfraLibVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_B_data_internal_T_InfraLibVTable);
    }
    return is_UAB_struct__21294_long_convertion_allowed();
}

void compare_UAB_B_data_internal_T_InfraLib(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_B_data_internal_T_InfraLibVTable != NULL
        && pSimUAB_B_data_internal_T_InfraLibVTable->m_version >= Scv612
        && pSimUAB_B_data_internal_T_InfraLibVTable->m_pfnCompare != NULL) {
        if (pSimUAB_B_data_internal_T_InfraLibVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_B_data_internal_T_InfraLibVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_B_data_internal_T_InfraLibVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21294(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_B_data_internal_T_InfraLib_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_B_data_internal_T_InfraLibVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_B_data_internal_T_InfraLibVTable, nRetValue);
    }
    return UAB_struct__21294_to_double(pValue, nRetValue);
}

int UAB_B_data_internal_T_InfraLib_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_B_data_internal_T_InfraLibVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_B_data_internal_T_InfraLibVTable, nRetValue);
    }
    return UAB_struct__21294_to_long(pValue, nRetValue);
}

int get_UAB_B_data_internal_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21294_signature(pfnStrAppend, pData);
}

int set_UAB_B_data_internal_T_InfraLib_default_value(void *pValue)
{
    return set_UAB_struct__21294_default_value(pValue);
}

int check_UAB_B_data_internal_T_InfraLib_string(const char *str, char **endptr)
{
    static UAB_B_data_internal_T_InfraLib rTemp;
    return string_to_UAB_B_data_internal_T_InfraLib(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_B_data_internal_T_InfraLib_Utils = {
    UAB_B_data_internal_T_InfraLib_to_string,
    check_UAB_B_data_internal_T_InfraLib_string,
    string_to_UAB_B_data_internal_T_InfraLib,
    is_UAB_B_data_internal_T_InfraLib_double_conversion_allowed,
    UAB_B_data_internal_T_InfraLib_to_double,
    is_UAB_B_data_internal_T_InfraLib_long_convertion_allowed,
    UAB_B_data_internal_T_InfraLib_to_long,
    compare_UAB_B_data_internal_T_InfraLib,
    get_UAB_B_data_internal_T_InfraLib_signature,
    set_UAB_B_data_internal_T_InfraLib_default_value,
    sizeof(UAB_B_data_internal_T_InfraLib)
};

/****************************************************************
 ** UAB_TrackSectionData_T_InfraLib 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_TrackSectionData_T_InfraLibVTable;

int UAB_TrackSectionData_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_TrackSectionData_T_InfraLibVTable != NULL
        && pSimUAB_TrackSectionData_T_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_TrackSectionData_T_InfraLibVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21281_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_TrackSectionData_T_InfraLib(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_TrackSectionData_T_InfraLibVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_TrackSectionData_T_InfraLibVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21281(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_TrackSectionData_T_InfraLib_double_conversion_allowed()
{
    if (pSimUAB_TrackSectionData_T_InfraLibVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_TrackSectionData_T_InfraLibVTable);
    }
    return is_UAB_struct__21281_double_conversion_allowed();
}

int is_UAB_TrackSectionData_T_InfraLib_long_convertion_allowed()
{
    if (pSimUAB_TrackSectionData_T_InfraLibVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_TrackSectionData_T_InfraLibVTable);
    }
    return is_UAB_struct__21281_long_convertion_allowed();
}

void compare_UAB_TrackSectionData_T_InfraLib(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_TrackSectionData_T_InfraLibVTable != NULL
        && pSimUAB_TrackSectionData_T_InfraLibVTable->m_version >= Scv612
        && pSimUAB_TrackSectionData_T_InfraLibVTable->m_pfnCompare != NULL) {
        if (pSimUAB_TrackSectionData_T_InfraLibVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_TrackSectionData_T_InfraLibVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_TrackSectionData_T_InfraLibVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21281(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_TrackSectionData_T_InfraLib_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_TrackSectionData_T_InfraLibVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_TrackSectionData_T_InfraLibVTable, nRetValue);
    }
    return UAB_struct__21281_to_double(pValue, nRetValue);
}

int UAB_TrackSectionData_T_InfraLib_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_TrackSectionData_T_InfraLibVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_TrackSectionData_T_InfraLibVTable, nRetValue);
    }
    return UAB_struct__21281_to_long(pValue, nRetValue);
}

int get_UAB_TrackSectionData_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21281_signature(pfnStrAppend, pData);
}

int set_UAB_TrackSectionData_T_InfraLib_default_value(void *pValue)
{
    return set_UAB_struct__21281_default_value(pValue);
}

int check_UAB_TrackSectionData_T_InfraLib_string(const char *str, char **endptr)
{
    static UAB_TrackSectionData_T_InfraLib rTemp;
    return string_to_UAB_TrackSectionData_T_InfraLib(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_TrackSectionData_T_InfraLib_Utils = {
    UAB_TrackSectionData_T_InfraLib_to_string,
    check_UAB_TrackSectionData_T_InfraLib_string,
    string_to_UAB_TrackSectionData_T_InfraLib,
    is_UAB_TrackSectionData_T_InfraLib_double_conversion_allowed,
    UAB_TrackSectionData_T_InfraLib_to_double,
    is_UAB_TrackSectionData_T_InfraLib_long_convertion_allowed,
    UAB_TrackSectionData_T_InfraLib_to_long,
    compare_UAB_TrackSectionData_T_InfraLib,
    get_UAB_TrackSectionData_T_InfraLib_signature,
    set_UAB_TrackSectionData_T_InfraLib_default_value,
    sizeof(UAB_TrackSectionData_T_InfraLib)
};

/****************************************************************
 ** UAB_TrainPosRaw_T_InfraLib 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_TrainPosRaw_T_InfraLibVTable;

int UAB_TrainPosRaw_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_TrainPosRaw_T_InfraLibVTable != NULL
        && pSimUAB_TrainPosRaw_T_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_TrainPosRaw_T_InfraLibVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21238_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_TrainPosRaw_T_InfraLib(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_TrainPosRaw_T_InfraLibVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_TrainPosRaw_T_InfraLibVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21238(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_TrainPosRaw_T_InfraLib_double_conversion_allowed()
{
    if (pSimUAB_TrainPosRaw_T_InfraLibVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_TrainPosRaw_T_InfraLibVTable);
    }
    return is_UAB_struct__21238_double_conversion_allowed();
}

int is_UAB_TrainPosRaw_T_InfraLib_long_convertion_allowed()
{
    if (pSimUAB_TrainPosRaw_T_InfraLibVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_TrainPosRaw_T_InfraLibVTable);
    }
    return is_UAB_struct__21238_long_convertion_allowed();
}

void compare_UAB_TrainPosRaw_T_InfraLib(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_TrainPosRaw_T_InfraLibVTable != NULL
        && pSimUAB_TrainPosRaw_T_InfraLibVTable->m_version >= Scv612
        && pSimUAB_TrainPosRaw_T_InfraLibVTable->m_pfnCompare != NULL) {
        if (pSimUAB_TrainPosRaw_T_InfraLibVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_TrainPosRaw_T_InfraLibVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_TrainPosRaw_T_InfraLibVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21238(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_TrainPosRaw_T_InfraLib_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_TrainPosRaw_T_InfraLibVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_TrainPosRaw_T_InfraLibVTable, nRetValue);
    }
    return UAB_struct__21238_to_double(pValue, nRetValue);
}

int UAB_TrainPosRaw_T_InfraLib_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_TrainPosRaw_T_InfraLibVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_TrainPosRaw_T_InfraLibVTable, nRetValue);
    }
    return UAB_struct__21238_to_long(pValue, nRetValue);
}

int get_UAB_TrainPosRaw_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21238_signature(pfnStrAppend, pData);
}

int set_UAB_TrainPosRaw_T_InfraLib_default_value(void *pValue)
{
    return set_UAB_struct__21238_default_value(pValue);
}

int check_UAB_TrainPosRaw_T_InfraLib_string(const char *str, char **endptr)
{
    static UAB_TrainPosRaw_T_InfraLib rTemp;
    return string_to_UAB_TrainPosRaw_T_InfraLib(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_TrainPosRaw_T_InfraLib_Utils = {
    UAB_TrainPosRaw_T_InfraLib_to_string,
    check_UAB_TrainPosRaw_T_InfraLib_string,
    string_to_UAB_TrainPosRaw_T_InfraLib,
    is_UAB_TrainPosRaw_T_InfraLib_double_conversion_allowed,
    UAB_TrainPosRaw_T_InfraLib_to_double,
    is_UAB_TrainPosRaw_T_InfraLib_long_convertion_allowed,
    UAB_TrainPosRaw_T_InfraLib_to_long,
    compare_UAB_TrainPosRaw_T_InfraLib,
    get_UAB_TrainPosRaw_T_InfraLib_signature,
    set_UAB_TrainPosRaw_T_InfraLib_default_value,
    sizeof(UAB_TrainPosRaw_T_InfraLib)
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
    return UAB_struct__21258_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_CompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_CompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21258(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_CompressedPackets_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimUAB_CompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_CompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_UAB_struct__21258_double_conversion_allowed();
}

int is_UAB_CompressedPackets_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimUAB_CompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_CompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_UAB_struct__21258_long_convertion_allowed();
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
        compare_UAB_struct__21258(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_CompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_CompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return UAB_struct__21258_to_double(pValue, nRetValue);
}

int UAB_CompressedPackets_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_CompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_CompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return UAB_struct__21258_to_long(pValue, nRetValue);
}

int get_UAB_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21258_signature(pfnStrAppend, pData);
}

int set_UAB_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_UAB_struct__21258_default_value(pValue);
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
    return UAB_array__21255_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_Metadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_Metadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array__21255(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_Metadata_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimUAB_Metadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_Metadata_T_Common_Types_PkgVTable);
    }
    return is_UAB_array__21255_double_conversion_allowed();
}

int is_UAB_Metadata_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimUAB_Metadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_Metadata_T_Common_Types_PkgVTable);
    }
    return is_UAB_array__21255_long_convertion_allowed();
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
        compare_UAB_array__21255(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_Metadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_Metadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return UAB_array__21255_to_double(pValue, nRetValue);
}

int UAB_Metadata_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_Metadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_Metadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return UAB_array__21255_to_long(pValue, nRetValue);
}

int get_UAB_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array__21255_signature(pfnStrAppend, pData);
}

int set_UAB_Metadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_UAB_array__21255_default_value(pValue);
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
 ** UAB_MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_MetadataElement_T_Common_Types_PkgVTable;

int UAB_MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_MetadataElement_T_Common_Types_PkgVTable != NULL
        && pSimUAB_MetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_MetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21247_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_MetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_MetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21247(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_MetadataElement_T_Common_Types_Pkg_double_conversion_allowed()
{
    if (pSimUAB_MetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_MetadataElement_T_Common_Types_PkgVTable);
    }
    return is_UAB_struct__21247_double_conversion_allowed();
}

int is_UAB_MetadataElement_T_Common_Types_Pkg_long_convertion_allowed()
{
    if (pSimUAB_MetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_MetadataElement_T_Common_Types_PkgVTable);
    }
    return is_UAB_struct__21247_long_convertion_allowed();
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
        compare_UAB_struct__21247(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_MetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_MetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return UAB_struct__21247_to_double(pValue, nRetValue);
}

int UAB_MetadataElement_T_Common_Types_Pkg_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_MetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_MetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return UAB_struct__21247_to_long(pValue, nRetValue);
}

int get_UAB_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21247_signature(pfnStrAppend, pData);
}

int set_UAB_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_UAB_struct__21247_default_value(pValue);
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
 ** UAB_P003V1_trackside_int_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable;

int UAB_P003V1_trackside_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable != NULL
        && pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_struct__21397_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P003V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_struct__21397(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P003V1_trackside_int_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_UAB_struct__21397_double_conversion_allowed();
}

int is_UAB_P003V1_trackside_int_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable);
    }
    return is_UAB_struct__21397_long_convertion_allowed();
}

void compare_UAB_P003V1_trackside_int_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable != NULL
        && pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable->m_version >= Scv612
        && pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_struct__21397(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P003V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return UAB_struct__21397_to_double(pValue, nRetValue);
}

int UAB_P003V1_trackside_int_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P003V1_trackside_int_T_TM_baseline2VTable, nRetValue);
    }
    return UAB_struct__21397_to_long(pValue, nRetValue);
}

int get_UAB_P003V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_struct__21397_signature(pfnStrAppend, pData);
}

int set_UAB_P003V1_trackside_int_T_TM_baseline2_default_value(void *pValue)
{
    return set_UAB_struct__21397_default_value(pValue);
}

int check_UAB_P003V1_trackside_int_T_TM_baseline2_string(const char *str, char **endptr)
{
    static UAB_P003V1_trackside_int_T_TM_baseline2 rTemp;
    return string_to_UAB_P003V1_trackside_int_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P003V1_trackside_int_T_TM_baseline2_Utils = {
    UAB_P003V1_trackside_int_T_TM_baseline2_to_string,
    check_UAB_P003V1_trackside_int_T_TM_baseline2_string,
    string_to_UAB_P003V1_trackside_int_T_TM_baseline2,
    is_UAB_P003V1_trackside_int_T_TM_baseline2_double_conversion_allowed,
    UAB_P003V1_trackside_int_T_TM_baseline2_to_double,
    is_UAB_P003V1_trackside_int_T_TM_baseline2_long_convertion_allowed,
    UAB_P003V1_trackside_int_T_TM_baseline2_to_long,
    compare_UAB_P003V1_trackside_int_T_TM_baseline2,
    get_UAB_P003V1_trackside_int_T_TM_baseline2_signature,
    set_UAB_P003V1_trackside_int_T_TM_baseline2_default_value,
    sizeof(UAB_P003V1_trackside_int_T_TM_baseline2)
};

/****************************************************************
 ** UAB_P003V1_trackide_sectionlist_T_TM_baseline2 
 ****************************************************************/

struct SimTypeVTable *pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable;

int UAB_P003V1_trackide_sectionlist_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable != NULL
        && pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return UAB_array_int_32_to_string(pValue, pfnStrAppend, pData);
}

int string_to_UAB_P003V1_trackide_sectionlist_T_TM_baseline2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable != NULL) {
        nRet=string_to_VTable(str, pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_UAB_array_int_32(str, pValue, endptr);
    }
    return nRet;
}

int is_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_double_conversion_allowed()
{
    if (pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable);
    }
    return is_UAB_array_int_32_double_conversion_allowed();
}

int is_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_long_convertion_allowed()
{
    if (pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable != NULL) {
        return is_VTable_long_convertion_allowed(pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable);
    }
    return is_UAB_array_int_32_long_convertion_allowed();
}

void compare_UAB_P003V1_trackide_sectionlist_T_TM_baseline2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable != NULL
        && pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable->m_version >= Scv612
        && pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable->m_pfnCompare != NULL) {
        if (pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_UAB_array_int_32(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int UAB_P003V1_trackide_sectionlist_T_TM_baseline2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable != NULL) {
        return VTable_to_double(pValue, pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable, nRetValue);
    }
    return UAB_array_int_32_to_double(pValue, nRetValue);
}

int UAB_P003V1_trackide_sectionlist_T_TM_baseline2_to_long(const void *pValue, long *nRetValue)
{
    if (pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable != NULL) {
        return VTable_to_long(pValue, pSimUAB_P003V1_trackide_sectionlist_T_TM_baseline2VTable, nRetValue);
    }
    return UAB_array_int_32_to_long(pValue, nRetValue);
}

int get_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_UAB_array_int_32_signature(pfnStrAppend, pData);
}

int set_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_default_value(void *pValue)
{
    return set_UAB_array_int_32_default_value(pValue);
}

int check_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_string(const char *str, char **endptr)
{
    static UAB_P003V1_trackide_sectionlist_T_TM_baseline2 rTemp;
    return string_to_UAB_P003V1_trackide_sectionlist_T_TM_baseline2(str, &rTemp, endptr);
}

SimTypeUtils _Type_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_Utils = {
    UAB_P003V1_trackide_sectionlist_T_TM_baseline2_to_string,
    check_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_string,
    string_to_UAB_P003V1_trackide_sectionlist_T_TM_baseline2,
    is_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_double_conversion_allowed,
    UAB_P003V1_trackide_sectionlist_T_TM_baseline2_to_double,
    is_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_long_convertion_allowed,
    UAB_P003V1_trackide_sectionlist_T_TM_baseline2_to_long,
    compare_UAB_P003V1_trackide_sectionlist_T_TM_baseline2,
    get_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_signature,
    set_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_default_value,
    sizeof(UAB_P003V1_trackide_sectionlist_T_TM_baseline2)
};

#include "C:/Program Files/Esterel Technologies/SCADE R16.1/SCADE/lib/kcg_conv.c"
