#include <stdlib.h>
#include <stddef.h>
#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "TrackMessages_newtype.h"
#include "kcg_conv.h"

char* strDefaultRealFormat="%.5g"; /*(from .etp)*/

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

static int is_VTable_double_convertion_allowed(const struct SimTypeVTable *pVTable)
{
    if (pVTable != NULL) {
        int nConvertionAllowed = 0;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
        nConvertionAllowed |= pVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
        return nConvertionAllowed;
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
            /*R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimDoubleVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
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
            /*R15 and higher: VTable funtion must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimDoubleVTable, pValue, endptr);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
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

int is_kcg_real_double_convertion_allowed()
{
    if (pSimDoubleVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimDoubleVTable);
    }
    return 1;
}

void compare_kcg_real(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    if (pSimDoubleVTable != NULL && pData!=NULL && pSimDoubleVTable->m_version >= Scv65 && pSimDoubleVTable->m_pfnCompareWithTol != NULL ) {
        /*Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimDoubleVTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pData);
    } else if (pSimDoubleVTable != NULL && pData==NULL && pSimDoubleVTable->m_version >= Scv612 && pSimDoubleVTable->m_pfnCompare != NULL) {
        /*Customized comparison without tolerance: */
        if (pSimDoubleVTable->m_version >= Scv65) {
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            unitResult = pSimDoubleVTable->m_pfnCompare(pResult, pValue1, pValue2);
         } else {
             /*Before R15: VTable funtion returns a standard C typed *variable: */
             double value1 = (double)(*(const kcg_real*)pValue1);
             double value2 = (double)(*(const kcg_real*)pValue2);
             pSimDoubleVTable->m_pfnCompare(&unitResult, &value1, &value2);
             updateCompareResult(unitResult, pResult);
         }
    } else {
        /*Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_real(pResult, *((kcg_real*)pValue1), *((kcg_real*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int kcg_real_to_double(const void *pValue, double *nRetValue)
{
    if (pSimDoubleVTable != NULL) {
        if (pSimDoubleVTable->m_version >= Scv65) {
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            return VTable_to_double(pValue, pSimDoubleVTable, nRetValue);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            double value = (double)(*(const kcg_real*)pValue);
            return VTable_to_double(&value, pSimDoubleVTable, nRetValue);
        }
    }
    *nRetValue = (double)*((kcg_real*)pValue);
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
    is_kcg_real_double_convertion_allowed,
    kcg_real_to_double,
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
            /*R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
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
            /*R15 and higher: VTable funtion must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimBoolVTable, pValue, endptr);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
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

int is_kcg_bool_double_convertion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBoolVTable);
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
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            unitResult = pSimBoolVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
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
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            return VTable_to_double(pValue, pSimBoolVTable, nRetValue);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_double(&value, pSimBoolVTable, nRetValue);
        }
    }
    *nRetValue = *((kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
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
    is_kcg_bool_double_convertion_allowed,
    kcg_bool_to_double,
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
            /*R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
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
            /*R15 and higher: VTable funtion must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimCharVTable, pValue, endptr);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
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

int is_kcg_char_double_convertion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCharVTable);
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
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            unitResult = pSimCharVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
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
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            return VTable_to_double(pValue, pSimCharVTable, nRetValue);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_double(&value, pSimCharVTable, nRetValue);
        }
    }
    *nRetValue = (double)*((kcg_char*)pValue);
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
    is_kcg_char_double_convertion_allowed,
    kcg_char_to_double,
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
            /*R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimLongVTable->m_pfnToType(SptString, pValue), pData);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
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
            /*R15 and higher: VTable funtion must return a kcg_<type> *variable: */
            nRet=string_to_VTable(str, pSimLongVTable, pValue, endptr);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
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

int is_kcg_int_double_convertion_allowed()
{
    if (pSimLongVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimLongVTable);
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
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            unitResult = pSimLongVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
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
            /*R15 and higher: pass kcg_<type> * to VTable funtion: */
            return VTable_to_double(pValue, pSimLongVTable, nRetValue);
        } else {
            /*Before R15: pass a standard C typed variable to VTable function: */
            long value = (long)(*(const kcg_int*)pValue);
            return VTable_to_double(&value, pSimLongVTable, nRetValue);
        }
    }
    *nRetValue = (double)*((kcg_int*)pValue);
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
    is_kcg_int_double_convertion_allowed,
    kcg_int_to_double,
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

int is_array_int_500_double_convertion_allowed()
{
    if (pSimarray_int_500VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_500VTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_500VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_array_int_500_double_convertion_allowed,
    array_int_500_to_double,
    compare_array_int_500,
    get_array_int_500_signature,
    set_array_int_500_default_value,
    sizeof(array_int_500)
};

/****************************************************************
 ** struct__862 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__862VTable;

static SimFieldUtils struct__862_fields[] = {
    {"nid_packet", offsetof(struct__862,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__862,q_dir), &_Type_Q_DIR_Utils},
    {"valid", offsetof(struct__862,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(struct__862,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(struct__862,endAddress), &_Type_kcg_int_Utils},
};

int struct__862_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__862VTable != NULL
        && pSimstruct__862VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__862VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__862_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__862(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__862VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__862VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__862_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__862_double_convertion_allowed()
{
    if (pSimstruct__862VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__862VTable);
    }
    return 0;
}

void compare_struct__862(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__862VTable != NULL
        && pSimstruct__862VTable->m_version >= Scv612
        && pSimstruct__862VTable->m_pfnCompare != NULL) {
        if (pSimstruct__862VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__862VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__862VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__862_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__862_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__862VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__862VTable, nRetValue);
    }
    return 0;
}

int get_struct__862_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__862_fields, 5, pfnStrAppend, pData);
}

int set_struct__862_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__862*)pValue)->nid_packet));
    set_Q_DIR_default_value(&(((struct__862*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((struct__862*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__862*)pValue)->startAddress));
    set_kcg_int_default_value(&(((struct__862*)pValue)->endAddress));
    return 1;
}

int check_struct__862_string(const char *str, char **endptr)
{
    static struct__862 rTemp;
    return string_to_struct__862(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__862_Utils = {
    struct__862_to_string,
    check_struct__862_string,
    string_to_struct__862,
    is_struct__862_double_convertion_allowed,
    struct__862_to_double,
    compare_struct__862,
    get_struct__862_signature,
    set_struct__862_default_value,
    sizeof(struct__862)
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

int is_array_int_64_double_convertion_allowed()
{
    if (pSimarray_int_64VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_64VTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_64VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_array_int_64_double_convertion_allowed,
    array_int_64_to_double,
    compare_array_int_64,
    get_array_int_64_signature,
    set_array_int_64_default_value,
    sizeof(array_int_64)
};

/****************************************************************
 ** struct__873 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__873VTable;

static SimFieldUtils struct__873_fields[] = {
    {"NC_DIFF", offsetof(struct__873,NC_DIFF), &_Type_kcg_int_Utils},
    {"V_DIFF", offsetof(struct__873,V_DIFF), &_Type_kcg_int_Utils},
};

int struct__873_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__873VTable != NULL
        && pSimstruct__873VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__873VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__873_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__873(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__873VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__873VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__873_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__873_double_convertion_allowed()
{
    if (pSimstruct__873VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__873VTable);
    }
    return 0;
}

void compare_struct__873(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__873VTable != NULL
        && pSimstruct__873VTable->m_version >= Scv612
        && pSimstruct__873VTable->m_pfnCompare != NULL) {
        if (pSimstruct__873VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__873VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__873VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__873_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__873_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__873VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__873VTable, nRetValue);
    }
    return 0;
}

int get_struct__873_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__873_fields, 2, pfnStrAppend, pData);
}

int set_struct__873_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__873*)pValue)->NC_DIFF));
    set_kcg_int_default_value(&(((struct__873*)pValue)->V_DIFF));
    return 1;
}

int check_struct__873_string(const char *str, char **endptr)
{
    static struct__873 rTemp;
    return string_to_struct__873(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__873_Utils = {
    struct__873_to_string,
    check_struct__873_string,
    string_to_struct__873,
    is_struct__873_double_convertion_allowed,
    struct__873_to_double,
    compare_struct__873,
    get_struct__873_signature,
    set_struct__873_default_value,
    sizeof(struct__873)
};

/****************************************************************
 ** array__878 
 ****************************************************************/

struct SimTypeVTable *pSimarray__878VTable;

int array__878_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__878VTable != NULL
        && pSimarray__878VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__878VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__873_to_string, 32, sizeof(struct__873), pfnStrAppend, pData);
}

int string_to_array__878(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__878VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__878VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__873_Utils, 32, sizeof(struct__873), endptr);
    }
    return nRet;
}

int is_array__878_double_convertion_allowed()
{
    if (pSimarray__878VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__878VTable);
    }
    return 0;
}

void compare_array__878(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__878VTable != NULL
        && pSimarray__878VTable->m_version >= Scv612
        && pSimarray__878VTable->m_pfnCompare != NULL) {
        if (pSimarray__878VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__878VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__878VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__873, 32, sizeof(struct__873), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__878_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__878VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__878VTable, nRetValue);
    }
    return 0;
}

int get_array__878_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__873_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__878_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__873_default_value(&((struct__873*)pValue)[i]);
    return 1;
}

int check_array__878_string(const char *str, char **endptr)
{
    static array__878 rTemp;
    return string_to_array__878(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__878_Utils = {
    array__878_to_string,
    check_array__878_string,
    string_to_array__878,
    is_array__878_double_convertion_allowed,
    array__878_to_double,
    compare_array__878,
    get_array__878_signature,
    set_array__878_default_value,
    sizeof(array__878)
};

/****************************************************************
 ** struct__881 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__881VTable;

static SimFieldUtils struct__881_fields[] = {
    {"D_STATIC", offsetof(struct__881,D_STATIC), &_Type_kcg_int_Utils},
    {"V_STATIC", offsetof(struct__881,V_STATIC), &_Type_kcg_int_Utils},
    {"Q_FRONT", offsetof(struct__881,Q_FRONT), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__881,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS_q_diff", offsetof(struct__881,SECTIONS_q_diff), &_Type_array__878_Utils},
};

int struct__881_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__881VTable != NULL
        && pSimstruct__881VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__881VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__881_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__881(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__881VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__881VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__881_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__881_double_convertion_allowed()
{
    if (pSimstruct__881VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__881VTable);
    }
    return 0;
}

void compare_struct__881(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__881VTable != NULL
        && pSimstruct__881VTable->m_version >= Scv612
        && pSimstruct__881VTable->m_pfnCompare != NULL) {
        if (pSimstruct__881VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__881VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__881VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__881_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__881_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__881VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__881VTable, nRetValue);
    }
    return 0;
}

int get_struct__881_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__881_fields, 5, pfnStrAppend, pData);
}

int set_struct__881_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__881*)pValue)->D_STATIC));
    set_kcg_int_default_value(&(((struct__881*)pValue)->V_STATIC));
    set_kcg_int_default_value(&(((struct__881*)pValue)->Q_FRONT));
    set_kcg_int_default_value(&(((struct__881*)pValue)->N_ITER));
    set_array__878_default_value(&(((struct__881*)pValue)->SECTIONS_q_diff));
    return 1;
}

int check_struct__881_string(const char *str, char **endptr)
{
    static struct__881 rTemp;
    return string_to_struct__881(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__881_Utils = {
    struct__881_to_string,
    check_struct__881_string,
    string_to_struct__881,
    is_struct__881_double_convertion_allowed,
    struct__881_to_double,
    compare_struct__881,
    get_struct__881_signature,
    set_struct__881_default_value,
    sizeof(struct__881)
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

int is_array_int_2_double_convertion_allowed()
{
    if (pSimarray_int_2VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_2VTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_array_int_2_double_convertion_allowed,
    array_int_2_to_double,
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

int is_array_int_2_32_double_convertion_allowed()
{
    if (pSimarray_int_2_32VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_2_32VTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_2_32VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_array_int_2_32_double_convertion_allowed,
    array_int_2_32_to_double,
    compare_array_int_2_32,
    get_array_int_2_32_signature,
    set_array_int_2_32_default_value,
    sizeof(array_int_2_32)
};

/****************************************************************
 ** array__895 
 ****************************************************************/

struct SimTypeVTable *pSimarray__895VTable;

int array__895_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__895VTable != NULL
        && pSimarray__895VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__895VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__862_to_string, 30, sizeof(struct__862), pfnStrAppend, pData);
}

int string_to_array__895(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__895VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__895VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__862_Utils, 30, sizeof(struct__862), endptr);
    }
    return nRet;
}

int is_array__895_double_convertion_allowed()
{
    if (pSimarray__895VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__895VTable);
    }
    return 0;
}

void compare_array__895(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__895VTable != NULL
        && pSimarray__895VTable->m_version >= Scv612
        && pSimarray__895VTable->m_pfnCompare != NULL) {
        if (pSimarray__895VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__895VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__895VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__862, 30, sizeof(struct__862), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__895_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__895VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__895VTable, nRetValue);
    }
    return 0;
}

int get_array__895_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__862_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__895_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_struct__862_default_value(&((struct__862*)pValue)[i]);
    return 1;
}

int check_array__895_string(const char *str, char **endptr)
{
    static array__895 rTemp;
    return string_to_array__895(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__895_Utils = {
    array__895_to_string,
    check_array__895_string,
    string_to_array__895,
    is_array__895_double_convertion_allowed,
    array__895_to_double,
    compare_array__895,
    get_array__895_signature,
    set_array__895_default_value,
    sizeof(array__895)
};

/****************************************************************
 ** struct__898 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__898VTable;

static SimFieldUtils struct__898_fields[] = {
    {"PacketHeaders", offsetof(struct__898,PacketHeaders), &_Type_array__895_Utils},
    {"PacketData", offsetof(struct__898,PacketData), &_Type_array_int_500_Utils},
};

int struct__898_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__898VTable != NULL
        && pSimstruct__898VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__898VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__898_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__898(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__898VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__898VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__898_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__898_double_convertion_allowed()
{
    if (pSimstruct__898VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__898VTable);
    }
    return 0;
}

void compare_struct__898(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__898VTable != NULL
        && pSimstruct__898VTable->m_version >= Scv612
        && pSimstruct__898VTable->m_pfnCompare != NULL) {
        if (pSimstruct__898VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__898VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__898VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__898_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__898_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__898VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__898VTable, nRetValue);
    }
    return 0;
}

int get_struct__898_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__898_fields, 2, pfnStrAppend, pData);
}

int set_struct__898_default_value(void *pValue)
{
    set_array__895_default_value(&(((struct__898*)pValue)->PacketHeaders));
    set_array_int_500_default_value(&(((struct__898*)pValue)->PacketData));
    return 1;
}

int check_struct__898_string(const char *str, char **endptr)
{
    static struct__898 rTemp;
    return string_to_struct__898(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__898_Utils = {
    struct__898_to_string,
    check_struct__898_string,
    string_to_struct__898,
    is_struct__898_double_convertion_allowed,
    struct__898_to_double,
    compare_struct__898,
    get_struct__898_signature,
    set_struct__898_default_value,
    sizeof(struct__898)
};

/****************************************************************
 ** array__903 
 ****************************************************************/

struct SimTypeVTable *pSimarray__903VTable;

int array__903_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__903VTable != NULL
        && pSimarray__903VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__903VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__881_to_string, 33, sizeof(struct__881), pfnStrAppend, pData);
}

int string_to_array__903(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__903VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__903VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__881_Utils, 33, sizeof(struct__881), endptr);
    }
    return nRet;
}

int is_array__903_double_convertion_allowed()
{
    if (pSimarray__903VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__903VTable);
    }
    return 0;
}

void compare_array__903(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__903VTable != NULL
        && pSimarray__903VTable->m_version >= Scv612
        && pSimarray__903VTable->m_pfnCompare != NULL) {
        if (pSimarray__903VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__903VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__903VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__881, 33, sizeof(struct__881), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__903_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__903VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__903VTable, nRetValue);
    }
    return 0;
}

int get_array__903_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 33; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__881_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__903_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 33; i++)
        set_struct__881_default_value(&((struct__881*)pValue)[i]);
    return 1;
}

int check_array__903_string(const char *str, char **endptr)
{
    static array__903 rTemp;
    return string_to_array__903(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__903_Utils = {
    array__903_to_string,
    check_array__903_string,
    string_to_array__903,
    is_array__903_double_convertion_allowed,
    array__903_to_double,
    compare_array__903,
    get_array__903_signature,
    set_array__903_default_value,
    sizeof(array__903)
};

/****************************************************************
 ** array__906 
 ****************************************************************/

struct SimTypeVTable *pSimarray__906VTable;

int array__906_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__906VTable != NULL
        && pSimarray__906VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__906VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__881_to_string, 32, sizeof(struct__881), pfnStrAppend, pData);
}

int string_to_array__906(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__906VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__906VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__881_Utils, 32, sizeof(struct__881), endptr);
    }
    return nRet;
}

int is_array__906_double_convertion_allowed()
{
    if (pSimarray__906VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__906VTable);
    }
    return 0;
}

void compare_array__906(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__906VTable != NULL
        && pSimarray__906VTable->m_version >= Scv612
        && pSimarray__906VTable->m_pfnCompare != NULL) {
        if (pSimarray__906VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__906VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__906VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__881, 32, sizeof(struct__881), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__906_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__906VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__906VTable, nRetValue);
    }
    return 0;
}

int get_array__906_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__881_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__906_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__881_default_value(&((struct__881*)pValue)[i]);
    return 1;
}

int check_array__906_string(const char *str, char **endptr)
{
    static array__906 rTemp;
    return string_to_array__906(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__906_Utils = {
    array__906_to_string,
    check_array__906_string,
    string_to_array__906,
    is_array__906_double_convertion_allowed,
    array__906_to_double,
    compare_array__906,
    get_array__906_signature,
    set_array__906_default_value,
    sizeof(array__906)
};

/****************************************************************
 ** struct__909 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__909VTable;

static SimFieldUtils struct__909_fields[] = {
    {"valid", offsetof(struct__909,valid), &_Type_kcg_bool_Utils},
    {"NID_PACKET", offsetof(struct__909,NID_PACKET), &_Type_kcg_int_Utils},
    {"Q_DIR", offsetof(struct__909,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__909,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__909,Q_SCALE), &_Type_kcg_int_Utils},
    {"D_STATIC", offsetof(struct__909,D_STATIC), &_Type_kcg_int_Utils},
    {"V_STATIC", offsetof(struct__909,V_STATIC), &_Type_kcg_int_Utils},
    {"Q_FRONT", offsetof(struct__909,Q_FRONT), &_Type_kcg_int_Utils},
    {"N_ITER_n", offsetof(struct__909,N_ITER_n), &_Type_kcg_int_Utils},
    {"SECTIONS_q_diff", offsetof(struct__909,SECTIONS_q_diff), &_Type_array__878_Utils},
    {"N_ITER_k", offsetof(struct__909,N_ITER_k), &_Type_kcg_int_Utils},
    {"SECTIONS_SSP", offsetof(struct__909,SECTIONS_SSP), &_Type_array__906_Utils},
};

int struct__909_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__909VTable != NULL
        && pSimstruct__909VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__909VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__909_fields, 12, pfnStrAppend, pData);
}

int string_to_struct__909(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__909VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__909VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__909_fields, 12, endptr);
    }
    return nRet;
}

int is_struct__909_double_convertion_allowed()
{
    if (pSimstruct__909VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__909VTable);
    }
    return 0;
}

void compare_struct__909(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__909VTable != NULL
        && pSimstruct__909VTable->m_version >= Scv612
        && pSimstruct__909VTable->m_pfnCompare != NULL) {
        if (pSimstruct__909VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__909VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__909VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__909_fields, 12, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__909_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__909VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__909VTable, nRetValue);
    }
    return 0;
}

int get_struct__909_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__909_fields, 12, pfnStrAppend, pData);
}

int set_struct__909_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__909*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__909*)pValue)->NID_PACKET));
    set_kcg_int_default_value(&(((struct__909*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__909*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__909*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__909*)pValue)->D_STATIC));
    set_kcg_int_default_value(&(((struct__909*)pValue)->V_STATIC));
    set_kcg_int_default_value(&(((struct__909*)pValue)->Q_FRONT));
    set_kcg_int_default_value(&(((struct__909*)pValue)->N_ITER_n));
    set_array__878_default_value(&(((struct__909*)pValue)->SECTIONS_q_diff));
    set_kcg_int_default_value(&(((struct__909*)pValue)->N_ITER_k));
    set_array__906_default_value(&(((struct__909*)pValue)->SECTIONS_SSP));
    return 1;
}

int check_struct__909_string(const char *str, char **endptr)
{
    static struct__909 rTemp;
    return string_to_struct__909(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__909_Utils = {
    struct__909_to_string,
    check_struct__909_string,
    string_to_struct__909,
    is_struct__909_double_convertion_allowed,
    struct__909_to_double,
    compare_struct__909,
    get_struct__909_signature,
    set_struct__909_default_value,
    sizeof(struct__909)
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

int is_array_int_500_500_double_convertion_allowed()
{
    if (pSimarray_int_500_500VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_500_500VTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_500_500VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_array_int_500_500_double_convertion_allowed,
    array_int_500_500_to_double,
    compare_array_int_500_500,
    get_array_int_500_500_signature,
    set_array_int_500_500_default_value,
    sizeof(array_int_500_500)
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

int is_array_int_494_double_convertion_allowed()
{
    if (pSimarray_int_494VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_494VTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_494VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_array_int_494_double_convertion_allowed,
    array_int_494_to_double,
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

int is_array_int_6_double_convertion_allowed()
{
    if (pSimarray_int_6VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_6VTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_6VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_array_int_6_double_convertion_allowed,
    array_int_6_to_double,
    compare_array_int_6,
    get_array_int_6_signature,
    set_array_int_6_default_value,
    sizeof(array_int_6)
};

/****************************************************************
 ** array__933 
 ****************************************************************/

struct SimTypeVTable *pSimarray__933VTable;

int array__933_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__933VTable != NULL
        && pSimarray__933VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__933VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__881_to_string, 1, sizeof(struct__881), pfnStrAppend, pData);
}

int string_to_array__933(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__933VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__933VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__881_Utils, 1, sizeof(struct__881), endptr);
    }
    return nRet;
}

int is_array__933_double_convertion_allowed()
{
    if (pSimarray__933VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__933VTable);
    }
    return 0;
}

void compare_array__933(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__933VTable != NULL
        && pSimarray__933VTable->m_version >= Scv612
        && pSimarray__933VTable->m_pfnCompare != NULL) {
        if (pSimarray__933VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__933VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__933VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__881, 1, sizeof(struct__881), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__933_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__933VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__933VTable, nRetValue);
    }
    return 0;
}

int get_array__933_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__881_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__933_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_struct__881_default_value(&((struct__881*)pValue)[i]);
    return 1;
}

int check_array__933_string(const char *str, char **endptr)
{
    static array__933 rTemp;
    return string_to_array__933(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__933_Utils = {
    array__933_to_string,
    check_array__933_string,
    string_to_array__933,
    is_array__933_double_convertion_allowed,
    array__933_to_double,
    compare_array__933,
    get_array__933_signature,
    set_array__933_default_value,
    sizeof(array__933)
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

int is_array_int_2_32_32_double_convertion_allowed()
{
    if (pSimarray_int_2_32_32VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_2_32_32VTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_2_32_32VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_array_int_2_32_32_double_convertion_allowed,
    array_int_2_32_32_to_double,
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

int is_array_int_432_double_convertion_allowed()
{
    if (pSimarray_int_432VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_432VTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_432VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_array_int_432_double_convertion_allowed,
    array_int_432_to_double,
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

int is_array_int_4_double_convertion_allowed()
{
    if (pSimarray_int_4VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_4VTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_4VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_array_int_4_double_convertion_allowed,
    array_int_4_to_double,
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

int is_array_int_68_double_convertion_allowed()
{
    if (pSimarray_int_68VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_68VTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_68VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_array_int_68_double_convertion_allowed,
    array_int_68_to_double,
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

int is_array_int_33_double_convertion_allowed()
{
    if (pSimarray_int_33VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_33VTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_33VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_array_int_33_double_convertion_allowed,
    array_int_33_to_double,
    compare_array_int_33,
    get_array_int_33_signature,
    set_array_int_33_default_value,
    sizeof(array_int_33)
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

int is_NID_PACKET_double_convertion_allowed()
{
    if (pSimNID_PACKETVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_PACKETVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_PACKET(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_PACKETVTable != NULL
        && pSimNID_PACKETVTable->m_version >= Scv612
        && pSimNID_PACKETVTable->m_pfnCompare != NULL) {
        if (pSimNID_PACKETVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_PACKETVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_NID_PACKET_double_convertion_allowed,
    NID_PACKET_to_double,
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

int Q_DIR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_DIRVTable != NULL
        && pSimQ_DIRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DIRVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_DIR*)pValue, Q_DIR_values, 6, pfnStrAppend, pData);
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DIR_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DIR*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_DIR_double_convertion_allowed()
{
    if (pSimQ_DIRVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_DIRVTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_DIRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int get_Q_DIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_DIR_values, 6, pfnStrAppend, pData);
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
    is_Q_DIR_double_convertion_allowed,
    Q_DIR_to_double,
    compare_Q_DIR,
    get_Q_DIR_signature,
    set_Q_DIR_default_value,
    sizeof(Q_DIR)
};

/****************************************************************
 ** P027V1_trackside_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_trackside_int_T_TMVTable;

int P027V1_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_trackside_int_T_TMVTable != NULL
        && pSimP027V1_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__909_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackside_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackside_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackside_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__909(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackside_int_T_TM_double_convertion_allowed()
{
    if (pSimP027V1_trackside_int_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP027V1_trackside_int_T_TMVTable);
    }
    return is_struct__909_double_convertion_allowed();
}

void compare_P027V1_trackside_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_trackside_int_T_TMVTable != NULL
        && pSimP027V1_trackside_int_T_TMVTable->m_version >= Scv612
        && pSimP027V1_trackside_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP027V1_trackside_int_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_trackside_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_trackside_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__909(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackside_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackside_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackside_int_T_TMVTable, nRetValue);
    }
    return struct__909_to_double(pValue, nRetValue);
}

int get_P027V1_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__909_signature(pfnStrAppend, pData);
}

int set_P027V1_trackside_int_T_TM_default_value(void *pValue)
{
    return set_struct__909_default_value(pValue);
}

int check_P027V1_trackside_int_T_TM_string(const char *str, char **endptr)
{
    static P027V1_trackside_int_T_TM rTemp;
    return string_to_P027V1_trackside_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_trackside_int_T_TM_Utils = {
    P027V1_trackside_int_T_TM_to_string,
    check_P027V1_trackside_int_T_TM_string,
    string_to_P027V1_trackside_int_T_TM,
    is_P027V1_trackside_int_T_TM_double_convertion_allowed,
    P027V1_trackside_int_T_TM_to_double,
    compare_P027V1_trackside_int_T_TM,
    get_P027V1_trackside_int_T_TM_signature,
    set_P027V1_trackside_int_T_TM_default_value,
    sizeof(P027V1_trackside_int_T_TM)
};

/****************************************************************
 ** P027V1_trackide_qdifflist_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_trackide_qdifflist_T_TMVTable;

int P027V1_trackide_qdifflist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_trackide_qdifflist_T_TMVTable != NULL
        && pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__878_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackide_qdifflist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackide_qdifflist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackide_qdifflist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__878(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackide_qdifflist_T_TM_double_convertion_allowed()
{
    if (pSimP027V1_trackide_qdifflist_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP027V1_trackide_qdifflist_T_TMVTable);
    }
    return is_array__878_double_convertion_allowed();
}

void compare_P027V1_trackide_qdifflist_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_trackide_qdifflist_T_TMVTable != NULL
        && pSimP027V1_trackide_qdifflist_T_TMVTable->m_version >= Scv612
        && pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP027V1_trackide_qdifflist_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__878(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackide_qdifflist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackide_qdifflist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackide_qdifflist_T_TMVTable, nRetValue);
    }
    return array__878_to_double(pValue, nRetValue);
}

int get_P027V1_trackide_qdifflist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__878_signature(pfnStrAppend, pData);
}

int set_P027V1_trackide_qdifflist_T_TM_default_value(void *pValue)
{
    return set_array__878_default_value(pValue);
}

int check_P027V1_trackide_qdifflist_T_TM_string(const char *str, char **endptr)
{
    static P027V1_trackide_qdifflist_T_TM rTemp;
    return string_to_P027V1_trackide_qdifflist_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_trackide_qdifflist_T_TM_Utils = {
    P027V1_trackide_qdifflist_T_TM_to_string,
    check_P027V1_trackide_qdifflist_T_TM_string,
    string_to_P027V1_trackide_qdifflist_T_TM,
    is_P027V1_trackide_qdifflist_T_TM_double_convertion_allowed,
    P027V1_trackide_qdifflist_T_TM_to_double,
    compare_P027V1_trackide_qdifflist_T_TM,
    get_P027V1_trackide_qdifflist_T_TM_signature,
    set_P027V1_trackide_qdifflist_T_TM_default_value,
    sizeof(P027V1_trackide_qdifflist_T_TM)
};

/****************************************************************
 ** P027V1_section_int_qdiff_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_section_int_qdiff_T_TMVTable;

int P027V1_section_int_qdiff_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_section_int_qdiff_T_TMVTable != NULL
        && pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__873_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_int_qdiff_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_int_qdiff_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_int_qdiff_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__873(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_int_qdiff_T_TM_double_convertion_allowed()
{
    if (pSimP027V1_section_int_qdiff_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP027V1_section_int_qdiff_T_TMVTable);
    }
    return is_struct__873_double_convertion_allowed();
}

void compare_P027V1_section_int_qdiff_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_section_int_qdiff_T_TMVTable != NULL
        && pSimP027V1_section_int_qdiff_T_TMVTable->m_version >= Scv612
        && pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP027V1_section_int_qdiff_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__873(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_int_qdiff_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_int_qdiff_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_int_qdiff_T_TMVTable, nRetValue);
    }
    return struct__873_to_double(pValue, nRetValue);
}

int get_P027V1_section_int_qdiff_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__873_signature(pfnStrAppend, pData);
}

int set_P027V1_section_int_qdiff_T_TM_default_value(void *pValue)
{
    return set_struct__873_default_value(pValue);
}

int check_P027V1_section_int_qdiff_T_TM_string(const char *str, char **endptr)
{
    static P027V1_section_int_qdiff_T_TM rTemp;
    return string_to_P027V1_section_int_qdiff_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_section_int_qdiff_T_TM_Utils = {
    P027V1_section_int_qdiff_T_TM_to_string,
    check_P027V1_section_int_qdiff_T_TM_string,
    string_to_P027V1_section_int_qdiff_T_TM,
    is_P027V1_section_int_qdiff_T_TM_double_convertion_allowed,
    P027V1_section_int_qdiff_T_TM_to_double,
    compare_P027V1_section_int_qdiff_T_TM,
    get_P027V1_section_int_qdiff_T_TM_signature,
    set_P027V1_section_int_qdiff_T_TM_default_value,
    sizeof(P027V1_section_int_qdiff_T_TM)
};

/****************************************************************
 ** P027V1_trackide_sectionlist_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_trackide_sectionlist_T_TMVTable;

int P027V1_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_trackide_sectionlist_T_TMVTable != NULL
        && pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__906_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_trackide_sectionlist_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_trackide_sectionlist_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__906(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_trackide_sectionlist_T_TM_double_convertion_allowed()
{
    if (pSimP027V1_trackide_sectionlist_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP027V1_trackide_sectionlist_T_TMVTable);
    }
    return is_array__906_double_convertion_allowed();
}

void compare_P027V1_trackide_sectionlist_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_trackide_sectionlist_T_TMVTable != NULL
        && pSimP027V1_trackide_sectionlist_T_TMVTable->m_version >= Scv612
        && pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP027V1_trackide_sectionlist_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__906(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_trackide_sectionlist_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_trackide_sectionlist_T_TMVTable, nRetValue);
    }
    return array__906_to_double(pValue, nRetValue);
}

int get_P027V1_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__906_signature(pfnStrAppend, pData);
}

int set_P027V1_trackide_sectionlist_T_TM_default_value(void *pValue)
{
    return set_array__906_default_value(pValue);
}

int check_P027V1_trackide_sectionlist_T_TM_string(const char *str, char **endptr)
{
    static P027V1_trackide_sectionlist_T_TM rTemp;
    return string_to_P027V1_trackide_sectionlist_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_trackide_sectionlist_T_TM_Utils = {
    P027V1_trackide_sectionlist_T_TM_to_string,
    check_P027V1_trackide_sectionlist_T_TM_string,
    string_to_P027V1_trackide_sectionlist_T_TM,
    is_P027V1_trackide_sectionlist_T_TM_double_convertion_allowed,
    P027V1_trackide_sectionlist_T_TM_to_double,
    compare_P027V1_trackide_sectionlist_T_TM,
    get_P027V1_trackide_sectionlist_T_TM_signature,
    set_P027V1_trackide_sectionlist_T_TM_default_value,
    sizeof(P027V1_trackide_sectionlist_T_TM)
};

/****************************************************************
 ** P027V1_section_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_section_int_T_TMVTable;

int P027V1_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_section_int_T_TMVTable != NULL
        && pSimP027V1_section_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_section_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__881_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__881(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_int_T_TM_double_convertion_allowed()
{
    if (pSimP027V1_section_int_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP027V1_section_int_T_TMVTable);
    }
    return is_struct__881_double_convertion_allowed();
}

void compare_P027V1_section_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_section_int_T_TMVTable != NULL
        && pSimP027V1_section_int_T_TMVTable->m_version >= Scv612
        && pSimP027V1_section_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP027V1_section_int_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_section_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_section_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__881(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_int_T_TMVTable, nRetValue);
    }
    return struct__881_to_double(pValue, nRetValue);
}

int get_P027V1_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__881_signature(pfnStrAppend, pData);
}

int set_P027V1_section_int_T_TM_default_value(void *pValue)
{
    return set_struct__881_default_value(pValue);
}

int check_P027V1_section_int_T_TM_string(const char *str, char **endptr)
{
    static P027V1_section_int_T_TM rTemp;
    return string_to_P027V1_section_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_section_int_T_TM_Utils = {
    P027V1_section_int_T_TM_to_string,
    check_P027V1_section_int_T_TM_string,
    string_to_P027V1_section_int_T_TM,
    is_P027V1_section_int_T_TM_double_convertion_allowed,
    P027V1_section_int_T_TM_to_double,
    compare_P027V1_section_int_T_TM,
    get_P027V1_section_int_T_TM_signature,
    set_P027V1_section_int_T_TM_default_value,
    sizeof(P027V1_section_int_T_TM)
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

int is_nid_packet_meta_TM_double_convertion_allowed()
{
    if (pSimnid_packet_meta_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimnid_packet_meta_TMVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_nid_packet_meta_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimnid_packet_meta_TMVTable != NULL
        && pSimnid_packet_meta_TMVTable->m_version >= Scv612
        && pSimnid_packet_meta_TMVTable->m_pfnCompare != NULL) {
        if (pSimnid_packet_meta_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimnid_packet_meta_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_nid_packet_meta_TM_double_convertion_allowed,
    nid_packet_meta_TM_to_double,
    compare_nid_packet_meta_TM,
    get_nid_packet_meta_TM_signature,
    set_nid_packet_meta_TM_default_value,
    sizeof(nid_packet_meta_TM)
};

/****************************************************************
 ** _2_P027V1_OBU_sectionlist_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable;

int _2_P027V1_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable != NULL
        && pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__903_to_string(pValue, pfnStrAppend, pData);
}

int string_to__2_P027V1_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__903(str, pValue, endptr);
    }
    return nRet;
}

int is__2_P027V1_OBU_sectionlist_int_T_TM_double_convertion_allowed()
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable);
    }
    return is_array__903_double_convertion_allowed();
}

void compare__2_P027V1_OBU_sectionlist_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable != NULL
        && pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_version >= Scv612
        && pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__903(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int _2_P027V1_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable, nRetValue);
    }
    return array__903_to_double(pValue, nRetValue);
}

int get__2_P027V1_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__903_signature(pfnStrAppend, pData);
}

int set__2_P027V1_OBU_sectionlist_int_T_TM_default_value(void *pValue)
{
    return set_array__903_default_value(pValue);
}

int check__2_P027V1_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr)
{
    static _2_P027V1_OBU_sectionlist_int_T_TM rTemp;
    return string_to__2_P027V1_OBU_sectionlist_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type__2_P027V1_OBU_sectionlist_int_T_TM_Utils = {
    _2_P027V1_OBU_sectionlist_int_T_TM_to_string,
    check__2_P027V1_OBU_sectionlist_int_T_TM_string,
    string_to__2_P027V1_OBU_sectionlist_int_T_TM,
    is__2_P027V1_OBU_sectionlist_int_T_TM_double_convertion_allowed,
    _2_P027V1_OBU_sectionlist_int_T_TM_to_double,
    compare__2_P027V1_OBU_sectionlist_int_T_TM,
    get__2_P027V1_OBU_sectionlist_int_T_TM_signature,
    set__2_P027V1_OBU_sectionlist_int_T_TM_default_value,
    sizeof(_2_P027V1_OBU_sectionlist_int_T_TM)
};

/****************************************************************
 ** P027V1_sections_array_flat_qdiff_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_sections_array_flat_qdiff_T_TMVTable;

int P027V1_sections_array_flat_qdiff_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_sections_array_flat_qdiff_T_TMVTable != NULL
        && pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_64_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_sections_array_flat_qdiff_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_sections_array_flat_qdiff_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_sections_array_flat_qdiff_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_64(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_sections_array_flat_qdiff_T_TM_double_convertion_allowed()
{
    if (pSimP027V1_sections_array_flat_qdiff_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP027V1_sections_array_flat_qdiff_T_TMVTable);
    }
    return is_array_int_64_double_convertion_allowed();
}

void compare_P027V1_sections_array_flat_qdiff_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_sections_array_flat_qdiff_T_TMVTable != NULL
        && pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_version >= Scv612
        && pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_64(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_sections_array_flat_qdiff_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_sections_array_flat_qdiff_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_sections_array_flat_qdiff_T_TMVTable, nRetValue);
    }
    return array_int_64_to_double(pValue, nRetValue);
}

int get_P027V1_sections_array_flat_qdiff_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_64_signature(pfnStrAppend, pData);
}

int set_P027V1_sections_array_flat_qdiff_T_TM_default_value(void *pValue)
{
    return set_array_int_64_default_value(pValue);
}

int check_P027V1_sections_array_flat_qdiff_T_TM_string(const char *str, char **endptr)
{
    static P027V1_sections_array_flat_qdiff_T_TM rTemp;
    return string_to_P027V1_sections_array_flat_qdiff_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_sections_array_flat_qdiff_T_TM_Utils = {
    P027V1_sections_array_flat_qdiff_T_TM_to_string,
    check_P027V1_sections_array_flat_qdiff_T_TM_string,
    string_to_P027V1_sections_array_flat_qdiff_T_TM,
    is_P027V1_sections_array_flat_qdiff_T_TM_double_convertion_allowed,
    P027V1_sections_array_flat_qdiff_T_TM_to_double,
    compare_P027V1_sections_array_flat_qdiff_T_TM,
    get_P027V1_sections_array_flat_qdiff_T_TM_signature,
    set_P027V1_sections_array_flat_qdiff_T_TM_default_value,
    sizeof(P027V1_sections_array_flat_qdiff_T_TM)
};

/****************************************************************
 ** _1_P027V1_OBU_sectionlist_array_qdiff_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable;

int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable != NULL
        && pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_2_32_to_string(pValue, pfnStrAppend, pData);
}

int string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_2_32(str, pValue, endptr);
    }
    return nRet;
}

int is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_double_convertion_allowed()
{
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable);
    }
    return is_array_int_2_32_double_convertion_allowed();
}

void compare__1_P027V1_OBU_sectionlist_array_qdiff_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable != NULL
        && pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_version >= Scv612
        && pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnCompare != NULL) {
        if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_2_32(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable, nRetValue);
    }
    return array_int_2_32_to_double(pValue, nRetValue);
}

int get__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_2_32_signature(pfnStrAppend, pData);
}

int set__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_default_value(void *pValue)
{
    return set_array_int_2_32_default_value(pValue);
}

int check__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_string(const char *str, char **endptr)
{
    static _1_P027V1_OBU_sectionlist_array_qdiff_T_TM rTemp;
    return string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_Utils = {
    _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_to_string,
    check__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_string,
    string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM,
    is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_double_convertion_allowed,
    _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_to_double,
    compare__1_P027V1_OBU_sectionlist_array_qdiff_T_TM,
    get__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_signature,
    set__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_default_value,
    sizeof(_1_P027V1_OBU_sectionlist_array_qdiff_T_TM)
};

/****************************************************************
 ** P027V1_section_array_qdiff_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_section_array_qdiff_T_TMVTable;

int P027V1_section_array_qdiff_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_section_array_qdiff_T_TMVTable != NULL
        && pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_2_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_section_array_qdiff_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_section_array_qdiff_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_section_array_qdiff_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_2(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_section_array_qdiff_T_TM_double_convertion_allowed()
{
    if (pSimP027V1_section_array_qdiff_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP027V1_section_array_qdiff_T_TMVTable);
    }
    return is_array_int_2_double_convertion_allowed();
}

void compare_P027V1_section_array_qdiff_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_section_array_qdiff_T_TMVTable != NULL
        && pSimP027V1_section_array_qdiff_T_TMVTable->m_version >= Scv612
        && pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP027V1_section_array_qdiff_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_2(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_section_array_qdiff_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_section_array_qdiff_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_section_array_qdiff_T_TMVTable, nRetValue);
    }
    return array_int_2_to_double(pValue, nRetValue);
}

int get_P027V1_section_array_qdiff_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_2_signature(pfnStrAppend, pData);
}

int set_P027V1_section_array_qdiff_T_TM_default_value(void *pValue)
{
    return set_array_int_2_default_value(pValue);
}

int check_P027V1_section_array_qdiff_T_TM_string(const char *str, char **endptr)
{
    static P027V1_section_array_qdiff_T_TM rTemp;
    return string_to_P027V1_section_array_qdiff_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_section_array_qdiff_T_TM_Utils = {
    P027V1_section_array_qdiff_T_TM_to_string,
    check_P027V1_section_array_qdiff_T_TM_string,
    string_to_P027V1_section_array_qdiff_T_TM,
    is_P027V1_section_array_qdiff_T_TM_double_convertion_allowed,
    P027V1_section_array_qdiff_T_TM_to_double,
    compare_P027V1_section_array_qdiff_T_TM,
    get_P027V1_section_array_qdiff_T_TM_signature,
    set_P027V1_section_array_qdiff_T_TM_default_value,
    sizeof(P027V1_section_array_qdiff_T_TM)
};

/****************************************************************
 ** P027V1_OBU_sectionlist_int_qdiff_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable;

int P027V1_OBU_sectionlist_int_qdiff_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable != NULL
        && pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__878_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__878(str, pValue, endptr);
    }
    return nRet;
}

int is_P027V1_OBU_sectionlist_int_qdiff_T_TM_double_convertion_allowed()
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable);
    }
    return is_array__878_double_convertion_allowed();
}

void compare_P027V1_OBU_sectionlist_int_qdiff_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable != NULL
        && pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_version >= Scv612
        && pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__878(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P027V1_OBU_sectionlist_int_qdiff_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable, nRetValue);
    }
    return array__878_to_double(pValue, nRetValue);
}

int get_P027V1_OBU_sectionlist_int_qdiff_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__878_signature(pfnStrAppend, pData);
}

int set_P027V1_OBU_sectionlist_int_qdiff_T_TM_default_value(void *pValue)
{
    return set_array__878_default_value(pValue);
}

int check_P027V1_OBU_sectionlist_int_qdiff_T_TM_string(const char *str, char **endptr)
{
    static P027V1_OBU_sectionlist_int_qdiff_T_TM rTemp;
    return string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P027V1_OBU_sectionlist_int_qdiff_T_TM_Utils = {
    P027V1_OBU_sectionlist_int_qdiff_T_TM_to_string,
    check_P027V1_OBU_sectionlist_int_qdiff_T_TM_string,
    string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM,
    is_P027V1_OBU_sectionlist_int_qdiff_T_TM_double_convertion_allowed,
    P027V1_OBU_sectionlist_int_qdiff_T_TM_to_double,
    compare_P027V1_OBU_sectionlist_int_qdiff_T_TM,
    get_P027V1_OBU_sectionlist_int_qdiff_T_TM_signature,
    set_P027V1_OBU_sectionlist_int_qdiff_T_TM_default_value,
    sizeof(P027V1_OBU_sectionlist_int_qdiff_T_TM)
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
    return array__895_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__895(str, pValue, endptr);
    }
    return nRet;
}

int is_Metadata_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__895_double_convertion_allowed();
}

void compare_Metadata_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL
        && pSimMetadata_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimMetadata_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimMetadata_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimMetadata_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimMetadata_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__895(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__895_to_double(pValue, nRetValue);
}

int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__895_signature(pfnStrAppend, pData);
}

int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_array__895_default_value(pValue);
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
    is_Metadata_T_Common_Types_Pkg_double_convertion_allowed,
    Metadata_T_Common_Types_Pkg_to_double,
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
    return struct__862_to_string(pValue, pfnStrAppend, pData);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__862(str, pValue, endptr);
    }
    return nRet;
}

int is_MetadataElement_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__862_double_convertion_allowed();
}

void compare_MetadataElement_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimMetadataElement_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__862(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__862_to_double(pValue, nRetValue);
}

int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__862_signature(pfnStrAppend, pData);
}

int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__862_default_value(pValue);
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
    is_MetadataElement_T_Common_Types_Pkg_double_convertion_allowed,
    MetadataElement_T_Common_Types_Pkg_to_double,
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

int is_CompressedPacketData_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCompressedPacketData_T_Common_Types_PkgVTable);
    }
    return is_array_int_500_double_convertion_allowed();
}

void compare_CompressedPacketData_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCompressedPacketData_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_CompressedPacketData_T_Common_Types_Pkg_double_convertion_allowed,
    CompressedPacketData_T_Common_Types_Pkg_to_double,
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
    return struct__898_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__898(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedPackets_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__898_double_convertion_allowed();
}

void compare_CompressedPackets_T_Common_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_version >= Scv612
        && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__898(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__898_to_double(pValue, nRetValue);
}

int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__898_signature(pfnStrAppend, pData);
}

int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__898_default_value(pValue);
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
    is_CompressedPackets_T_Common_Types_Pkg_double_convertion_allowed,
    CompressedPackets_T_Common_Types_Pkg_to_double,
    compare_CompressedPackets_T_Common_Types_Pkg,
    get_CompressedPackets_T_Common_Types_Pkg_signature,
    set_CompressedPackets_T_Common_Types_Pkg_default_value,
    sizeof(CompressedPackets_T_Common_Types_Pkg)
};

#include "C:/Program Files/Esterel Technologies/SCADE R15.2/SCADE/lib/kcg_conv.c"
