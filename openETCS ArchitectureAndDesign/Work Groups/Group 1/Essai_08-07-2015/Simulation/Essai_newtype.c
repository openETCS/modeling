#include <stdlib.h>
#include <stddef.h>
#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "Essai_newtype.h"
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
 ** struct__1527 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1527VTable;

static SimFieldUtils struct__1527_fields[] = {
    {"Size", offsetof(struct__1527,Size), &_Type_kcg_real_Utils},
    {"Pos", offsetof(struct__1527,Pos), &_Type_kcg_real_Utils},
};

int struct__1527_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1527VTable != NULL
        && pSimstruct__1527VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1527VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1527_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__1527(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1527VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1527VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1527_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__1527_double_convertion_allowed()
{
    if (pSimstruct__1527VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1527VTable);
    }
    return 0;
}

void compare_struct__1527(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1527VTable != NULL
        && pSimstruct__1527VTable->m_version >= Scv612
        && pSimstruct__1527VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1527VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1527VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1527VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1527_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1527_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1527VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1527VTable, nRetValue);
    }
    return 0;
}

int get_struct__1527_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1527_fields, 2, pfnStrAppend, pData);
}

int set_struct__1527_default_value(void *pValue)
{
    set_kcg_real_default_value(&(((struct__1527*)pValue)->Size));
    set_kcg_real_default_value(&(((struct__1527*)pValue)->Pos));
    return 1;
}

int check_struct__1527_string(const char *str, char **endptr)
{
    static struct__1527 rTemp;
    return string_to_struct__1527(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1527_Utils = {
    struct__1527_to_string,
    check_struct__1527_string,
    string_to_struct__1527,
    is_struct__1527_double_convertion_allowed,
    struct__1527_to_double,
    compare_struct__1527,
    get_struct__1527_signature,
    set_struct__1527_default_value,
    sizeof(struct__1527)
};

/****************************************************************
 ** struct__1532 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1532VTable;

static SimFieldUtils struct__1532_fields[] = {
    {"EB", offsetof(struct__1532,EB), &_Type_kcg_real_Utils},
    {"EB_reduit", offsetof(struct__1532,EB_reduit), &_Type_kcg_real_Utils},
};

int struct__1532_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1532VTable != NULL
        && pSimstruct__1532VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1532VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1532_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__1532(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1532VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1532VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1532_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__1532_double_convertion_allowed()
{
    if (pSimstruct__1532VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1532VTable);
    }
    return 0;
}

void compare_struct__1532(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1532VTable != NULL
        && pSimstruct__1532VTable->m_version >= Scv612
        && pSimstruct__1532VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1532VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1532VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1532VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1532_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1532_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1532VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1532VTable, nRetValue);
    }
    return 0;
}

int get_struct__1532_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1532_fields, 2, pfnStrAppend, pData);
}

int set_struct__1532_default_value(void *pValue)
{
    set_kcg_real_default_value(&(((struct__1532*)pValue)->EB));
    set_kcg_real_default_value(&(((struct__1532*)pValue)->EB_reduit));
    return 1;
}

int check_struct__1532_string(const char *str, char **endptr)
{
    static struct__1532 rTemp;
    return string_to_struct__1532(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1532_Utils = {
    struct__1532_to_string,
    check_struct__1532_string,
    string_to_struct__1532,
    is_struct__1532_double_convertion_allowed,
    struct__1532_to_double,
    compare_struct__1532,
    get_struct__1532_signature,
    set_struct__1532_default_value,
    sizeof(struct__1532)
};

/****************************************************************
 ** struct__1537 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1537VTable;

static SimFieldUtils struct__1537_fields[] = {
    {"Distance", offsetof(struct__1537,Distance), &_Type_kcg_real_Utils},
    {"Adh", offsetof(struct__1537,Adh), &_Type_kcg_bool_Utils},
};

int struct__1537_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1537VTable != NULL
        && pSimstruct__1537VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1537VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1537_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__1537(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1537VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1537VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1537_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__1537_double_convertion_allowed()
{
    if (pSimstruct__1537VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1537VTable);
    }
    return 0;
}

void compare_struct__1537(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1537VTable != NULL
        && pSimstruct__1537VTable->m_version >= Scv612
        && pSimstruct__1537VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1537VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1537VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1537VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1537_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1537_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1537VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1537VTable, nRetValue);
    }
    return 0;
}

int get_struct__1537_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1537_fields, 2, pfnStrAppend, pData);
}

int set_struct__1537_default_value(void *pValue)
{
    set_kcg_real_default_value(&(((struct__1537*)pValue)->Distance));
    set_kcg_bool_default_value(&(((struct__1537*)pValue)->Adh));
    return 1;
}

int check_struct__1537_string(const char *str, char **endptr)
{
    static struct__1537 rTemp;
    return string_to_struct__1537(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1537_Utils = {
    struct__1537_to_string,
    check_struct__1537_string,
    string_to_struct__1537,
    is_struct__1537_double_convertion_allowed,
    struct__1537_to_double,
    compare_struct__1537,
    get_struct__1537_signature,
    set_struct__1537_default_value,
    sizeof(struct__1537)
};

/****************************************************************
 ** struct__1542 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1542VTable;

static SimFieldUtils struct__1542_fields[] = {
    {"Distance", offsetof(struct__1542,Distance), &_Type_kcg_real_Utils},
    {"Value", offsetof(struct__1542,Value), &_Type_kcg_real_Utils},
};

int struct__1542_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1542VTable != NULL
        && pSimstruct__1542VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1542VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1542_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__1542(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1542VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1542VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1542_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__1542_double_convertion_allowed()
{
    if (pSimstruct__1542VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1542VTable);
    }
    return 0;
}

void compare_struct__1542(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1542VTable != NULL
        && pSimstruct__1542VTable->m_version >= Scv612
        && pSimstruct__1542VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1542VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1542VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1542VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1542_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1542_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1542VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1542VTable, nRetValue);
    }
    return 0;
}

int get_struct__1542_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1542_fields, 2, pfnStrAppend, pData);
}

int set_struct__1542_default_value(void *pValue)
{
    set_kcg_real_default_value(&(((struct__1542*)pValue)->Distance));
    set_kcg_real_default_value(&(((struct__1542*)pValue)->Value));
    return 1;
}

int check_struct__1542_string(const char *str, char **endptr)
{
    static struct__1542 rTemp;
    return string_to_struct__1542(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1542_Utils = {
    struct__1542_to_string,
    check_struct__1542_string,
    string_to_struct__1542,
    is_struct__1542_double_convertion_allowed,
    struct__1542_to_double,
    compare_struct__1542,
    get_struct__1542_signature,
    set_struct__1542_default_value,
    sizeof(struct__1542)
};

/****************************************************************
 ** array__1547 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1547VTable;

int array__1547_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1547VTable != NULL
        && pSimarray__1547VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1547VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__1542_to_string, 2, sizeof(struct__1542), pfnStrAppend, pData);
}

int string_to_array__1547(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1547VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1547VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__1542_Utils, 2, sizeof(struct__1542), endptr);
    }
    return nRet;
}

int is_array__1547_double_convertion_allowed()
{
    if (pSimarray__1547VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__1547VTable);
    }
    return 0;
}

void compare_array__1547(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1547VTable != NULL
        && pSimarray__1547VTable->m_version >= Scv612
        && pSimarray__1547VTable->m_pfnCompare != NULL) {
        if (pSimarray__1547VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1547VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1547VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__1542, 2, sizeof(struct__1542), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1547_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1547VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1547VTable, nRetValue);
    }
    return 0;
}

int get_array__1547_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 2; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__1542_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1547_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 2; i++)
        set_struct__1542_default_value(&((struct__1542*)pValue)[i]);
    return 1;
}

int check_array__1547_string(const char *str, char **endptr)
{
    static array__1547 rTemp;
    return string_to_array__1547(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1547_Utils = {
    array__1547_to_string,
    check_array__1547_string,
    string_to_array__1547,
    is_array__1547_double_convertion_allowed,
    array__1547_to_double,
    compare_array__1547,
    get_array__1547_signature,
    set_array__1547_default_value,
    sizeof(array__1547)
};

/****************************************************************
 ** array__1550 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1550VTable;

int array__1550_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1550VTable != NULL
        && pSimarray__1550VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1550VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__1537_to_string, 2, sizeof(struct__1537), pfnStrAppend, pData);
}

int string_to_array__1550(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1550VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1550VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__1537_Utils, 2, sizeof(struct__1537), endptr);
    }
    return nRet;
}

int is_array__1550_double_convertion_allowed()
{
    if (pSimarray__1550VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__1550VTable);
    }
    return 0;
}

void compare_array__1550(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1550VTable != NULL
        && pSimarray__1550VTable->m_version >= Scv612
        && pSimarray__1550VTable->m_pfnCompare != NULL) {
        if (pSimarray__1550VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1550VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1550VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__1537, 2, sizeof(struct__1537), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1550_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1550VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1550VTable, nRetValue);
    }
    return 0;
}

int get_array__1550_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 2; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__1537_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1550_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 2; i++)
        set_struct__1537_default_value(&((struct__1537*)pValue)[i]);
    return 1;
}

int check_array__1550_string(const char *str, char **endptr)
{
    static array__1550 rTemp;
    return string_to_array__1550(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1550_Utils = {
    array__1550_to_string,
    check_array__1550_string,
    string_to_array__1550,
    is_array__1550_double_convertion_allowed,
    array__1550_to_double,
    compare_array__1550,
    get_array__1550_signature,
    set_array__1550_default_value,
    sizeof(array__1550)
};

/****************************************************************
 ** array__1553 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1553VTable;

int array__1553_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1553VTable != NULL
        && pSimarray__1553VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1553VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__1542_to_string, 8, sizeof(struct__1542), pfnStrAppend, pData);
}

int string_to_array__1553(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1553VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1553VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__1542_Utils, 8, sizeof(struct__1542), endptr);
    }
    return nRet;
}

int is_array__1553_double_convertion_allowed()
{
    if (pSimarray__1553VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__1553VTable);
    }
    return 0;
}

void compare_array__1553(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1553VTable != NULL
        && pSimarray__1553VTable->m_version >= Scv612
        && pSimarray__1553VTable->m_pfnCompare != NULL) {
        if (pSimarray__1553VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1553VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1553VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__1542, 8, sizeof(struct__1542), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1553_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1553VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1553VTable, nRetValue);
    }
    return 0;
}

int get_array__1553_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 8; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__1542_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1553_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 8; i++)
        set_struct__1542_default_value(&((struct__1542*)pValue)[i]);
    return 1;
}

int check_array__1553_string(const char *str, char **endptr)
{
    static array__1553 rTemp;
    return string_to_array__1553(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1553_Utils = {
    array__1553_to_string,
    check_array__1553_string,
    string_to_array__1553,
    is_array__1553_double_convertion_allowed,
    array__1553_to_double,
    compare_array__1553,
    get_array__1553_signature,
    set_array__1553_default_value,
    sizeof(array__1553)
};

/****************************************************************
 ** array_real_8 
 ****************************************************************/

struct SimTypeVTable *pSimarray_real_8VTable;

int array_real_8_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_real_8VTable != NULL
        && pSimarray_real_8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_real_8VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_real_to_string, 8, sizeof(kcg_real), pfnStrAppend, pData);
}

int string_to_array_real_8(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_real_8VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_real_8VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_real_Utils, 8, sizeof(kcg_real), endptr);
    }
    return nRet;
}

int is_array_real_8_double_convertion_allowed()
{
    if (pSimarray_real_8VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_real_8VTable);
    }
    return 0;
}

void compare_array_real_8(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_real_8VTable != NULL
        && pSimarray_real_8VTable->m_version >= Scv612
        && pSimarray_real_8VTable->m_pfnCompare != NULL) {
        if (pSimarray_real_8VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_real_8VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_real_8VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_real, 8, sizeof(kcg_real), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_real_8_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_real_8VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_real_8VTable, nRetValue);
    }
    return 0;
}

int get_array_real_8_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 8; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_real_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_real_8_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 8; i++)
        set_kcg_real_default_value(&((kcg_real*)pValue)[i]);
    return 1;
}

int check_array_real_8_string(const char *str, char **endptr)
{
    static array_real_8 rTemp;
    return string_to_array_real_8(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_real_8_Utils = {
    array_real_8_to_string,
    check_array_real_8_string,
    string_to_array_real_8,
    is_array_real_8_double_convertion_allowed,
    array_real_8_to_double,
    compare_array_real_8,
    get_array_real_8_signature,
    set_array_real_8_default_value,
    sizeof(array_real_8)
};

/****************************************************************
 ** array_real_25 
 ****************************************************************/

struct SimTypeVTable *pSimarray_real_25VTable;

int array_real_25_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_real_25VTable != NULL
        && pSimarray_real_25VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_real_25VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_real_to_string, 25, sizeof(kcg_real), pfnStrAppend, pData);
}

int string_to_array_real_25(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_real_25VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_real_25VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_real_Utils, 25, sizeof(kcg_real), endptr);
    }
    return nRet;
}

int is_array_real_25_double_convertion_allowed()
{
    if (pSimarray_real_25VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_real_25VTable);
    }
    return 0;
}

void compare_array_real_25(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_real_25VTable != NULL
        && pSimarray_real_25VTable->m_version >= Scv612
        && pSimarray_real_25VTable->m_pfnCompare != NULL) {
        if (pSimarray_real_25VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_real_25VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_real_25VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_real, 25, sizeof(kcg_real), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_real_25_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_real_25VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_real_25VTable, nRetValue);
    }
    return 0;
}

int get_array_real_25_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 25; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_real_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_real_25_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 25; i++)
        set_kcg_real_default_value(&((kcg_real*)pValue)[i]);
    return 1;
}

int check_array_real_25_string(const char *str, char **endptr)
{
    static array_real_25 rTemp;
    return string_to_array_real_25(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_real_25_Utils = {
    array_real_25_to_string,
    check_array_real_25_string,
    string_to_array_real_25,
    is_array_real_25_double_convertion_allowed,
    array_real_25_to_double,
    compare_array_real_25,
    get_array_real_25_signature,
    set_array_real_25_default_value,
    sizeof(array_real_25)
};

/****************************************************************
 ** array__1562 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1562VTable;

int array__1562_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1562VTable != NULL
        && pSimarray__1562VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1562VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array__1553_to_string, 25, sizeof(array__1553), pfnStrAppend, pData);
}

int string_to_array__1562(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1562VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1562VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array__1553_Utils, 25, sizeof(array__1553), endptr);
    }
    return nRet;
}

int is_array__1562_double_convertion_allowed()
{
    if (pSimarray__1562VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__1562VTable);
    }
    return 0;
}

void compare_array__1562(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1562VTable != NULL
        && pSimarray__1562VTable->m_version >= Scv612
        && pSimarray__1562VTable->m_pfnCompare != NULL) {
        if (pSimarray__1562VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1562VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1562VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array__1553, 25, sizeof(array__1553), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1562_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1562VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1562VTable, nRetValue);
    }
    return 0;
}

int get_array__1562_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 25; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array__1553_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1562_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 25; i++)
        set_array__1553_default_value(&((array__1553*)pValue)[i]);
    return 1;
}

int check_array__1562_string(const char *str, char **endptr)
{
    static array__1562 rTemp;
    return string_to_array__1562(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1562_Utils = {
    array__1562_to_string,
    check_array__1562_string,
    string_to_array__1562,
    is_array__1562_double_convertion_allowed,
    array__1562_to_double,
    compare_array__1562,
    get_array__1562_signature,
    set_array__1562_default_value,
    sizeof(array__1562)
};

/****************************************************************
 ** array_real_24 
 ****************************************************************/

struct SimTypeVTable *pSimarray_real_24VTable;

int array_real_24_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_real_24VTable != NULL
        && pSimarray_real_24VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_real_24VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_real_to_string, 24, sizeof(kcg_real), pfnStrAppend, pData);
}

int string_to_array_real_24(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_real_24VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_real_24VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_real_Utils, 24, sizeof(kcg_real), endptr);
    }
    return nRet;
}

int is_array_real_24_double_convertion_allowed()
{
    if (pSimarray_real_24VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_real_24VTable);
    }
    return 0;
}

void compare_array_real_24(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_real_24VTable != NULL
        && pSimarray_real_24VTable->m_version >= Scv612
        && pSimarray_real_24VTable->m_pfnCompare != NULL) {
        if (pSimarray_real_24VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_real_24VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_real_24VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_real, 24, sizeof(kcg_real), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_real_24_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_real_24VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_real_24VTable, nRetValue);
    }
    return 0;
}

int get_array_real_24_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 24; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_real_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_real_24_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 24; i++)
        set_kcg_real_default_value(&((kcg_real*)pValue)[i]);
    return 1;
}

int check_array_real_24_string(const char *str, char **endptr)
{
    static array_real_24 rTemp;
    return string_to_array_real_24(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_real_24_Utils = {
    array_real_24_to_string,
    check_array_real_24_string,
    string_to_array_real_24,
    is_array_real_24_double_convertion_allowed,
    array_real_24_to_double,
    compare_array_real_24,
    get_array_real_24_signature,
    set_array_real_24_default_value,
    sizeof(array_real_24)
};

/****************************************************************
 ** array_real_1 
 ****************************************************************/

struct SimTypeVTable *pSimarray_real_1VTable;

int array_real_1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_real_1VTable != NULL
        && pSimarray_real_1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_real_1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_real_to_string, 1, sizeof(kcg_real), pfnStrAppend, pData);
}

int string_to_array_real_1(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_real_1VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_real_1VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_real_Utils, 1, sizeof(kcg_real), endptr);
    }
    return nRet;
}

int is_array_real_1_double_convertion_allowed()
{
    if (pSimarray_real_1VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_real_1VTable);
    }
    return 0;
}

void compare_array_real_1(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_real_1VTable != NULL
        && pSimarray_real_1VTable->m_version >= Scv612
        && pSimarray_real_1VTable->m_pfnCompare != NULL) {
        if (pSimarray_real_1VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_real_1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_real_1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_real, 1, sizeof(kcg_real), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_real_1_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_real_1VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_real_1VTable, nRetValue);
    }
    return 0;
}

int get_array_real_1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_real_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_real_1_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_kcg_real_default_value(&((kcg_real*)pValue)[i]);
    return 1;
}

int check_array_real_1_string(const char *str, char **endptr)
{
    static array_real_1 rTemp;
    return string_to_array_real_1(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_real_1_Utils = {
    array_real_1_to_string,
    check_array_real_1_string,
    string_to_array_real_1,
    is_array_real_1_double_convertion_allowed,
    array_real_1_to_double,
    compare_array_real_1,
    get_array_real_1_signature,
    set_array_real_1_default_value,
    sizeof(array_real_1)
};

/****************************************************************
 ** array_real_2 
 ****************************************************************/

struct SimTypeVTable *pSimarray_real_2VTable;

int array_real_2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_real_2VTable != NULL
        && pSimarray_real_2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_real_2VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_real_to_string, 2, sizeof(kcg_real), pfnStrAppend, pData);
}

int string_to_array_real_2(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_real_2VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_real_2VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_real_Utils, 2, sizeof(kcg_real), endptr);
    }
    return nRet;
}

int is_array_real_2_double_convertion_allowed()
{
    if (pSimarray_real_2VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_real_2VTable);
    }
    return 0;
}

void compare_array_real_2(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_real_2VTable != NULL
        && pSimarray_real_2VTable->m_version >= Scv612
        && pSimarray_real_2VTable->m_pfnCompare != NULL) {
        if (pSimarray_real_2VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_real_2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_real_2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_real, 2, sizeof(kcg_real), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_real_2_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_real_2VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_real_2VTable, nRetValue);
    }
    return 0;
}

int get_array_real_2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 2; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_real_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_real_2_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 2; i++)
        set_kcg_real_default_value(&((kcg_real*)pValue)[i]);
    return 1;
}

int check_array_real_2_string(const char *str, char **endptr)
{
    static array_real_2 rTemp;
    return string_to_array_real_2(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_real_2_Utils = {
    array_real_2_to_string,
    check_array_real_2_string,
    string_to_array_real_2,
    is_array_real_2_double_convertion_allowed,
    array_real_2_to_double,
    compare_array_real_2,
    get_array_real_2_signature,
    set_array_real_2_default_value,
    sizeof(array_real_2)
};

/****************************************************************
 ** array__1574 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1574VTable;

int array__1574_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1574VTable != NULL
        && pSimarray__1574VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1574VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array__1547_to_string, 25, sizeof(array__1547), pfnStrAppend, pData);
}

int string_to_array__1574(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1574VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1574VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array__1547_Utils, 25, sizeof(array__1547), endptr);
    }
    return nRet;
}

int is_array__1574_double_convertion_allowed()
{
    if (pSimarray__1574VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__1574VTable);
    }
    return 0;
}

void compare_array__1574(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1574VTable != NULL
        && pSimarray__1574VTable->m_version >= Scv612
        && pSimarray__1574VTable->m_pfnCompare != NULL) {
        if (pSimarray__1574VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1574VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1574VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array__1547, 25, sizeof(array__1547), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1574_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1574VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1574VTable, nRetValue);
    }
    return 0;
}

int get_array__1574_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 25; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array__1547_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1574_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 25; i++)
        set_array__1547_default_value(&((array__1547*)pValue)[i]);
    return 1;
}

int check_array__1574_string(const char *str, char **endptr)
{
    static array__1574 rTemp;
    return string_to_array__1574(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1574_Utils = {
    array__1574_to_string,
    check_array__1574_string,
    string_to_array__1574,
    is_array__1574_double_convertion_allowed,
    array__1574_to_double,
    compare_array__1574,
    get_array__1574_signature,
    set_array__1574_default_value,
    sizeof(array__1574)
};

/****************************************************************
 ** array_bool_25 
 ****************************************************************/

struct SimTypeVTable *pSimarray_bool_25VTable;

int array_bool_25_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_bool_25VTable != NULL
        && pSimarray_bool_25VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_bool_25VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_bool_to_string, 25, sizeof(kcg_bool), pfnStrAppend, pData);
}

int string_to_array_bool_25(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_bool_25VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_bool_25VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_bool_Utils, 25, sizeof(kcg_bool), endptr);
    }
    return nRet;
}

int is_array_bool_25_double_convertion_allowed()
{
    if (pSimarray_bool_25VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_bool_25VTable);
    }
    return 0;
}

void compare_array_bool_25(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_bool_25VTable != NULL
        && pSimarray_bool_25VTable->m_version >= Scv612
        && pSimarray_bool_25VTable->m_pfnCompare != NULL) {
        if (pSimarray_bool_25VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_bool_25VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_bool_25VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_bool, 25, sizeof(kcg_bool), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_bool_25_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_bool_25VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_bool_25VTable, nRetValue);
    }
    return 0;
}

int get_array_bool_25_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 25; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_bool_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_bool_25_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 25; i++)
        set_kcg_bool_default_value(&((kcg_bool*)pValue)[i]);
    return 1;
}

int check_array_bool_25_string(const char *str, char **endptr)
{
    static array_bool_25 rTemp;
    return string_to_array_bool_25(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_bool_25_Utils = {
    array_bool_25_to_string,
    check_array_bool_25_string,
    string_to_array_bool_25,
    is_array_bool_25_double_convertion_allowed,
    array_bool_25_to_double,
    compare_array_bool_25,
    get_array_bool_25_signature,
    set_array_bool_25_default_value,
    sizeof(array_bool_25)
};

/****************************************************************
 ** array_bool_1 
 ****************************************************************/

struct SimTypeVTable *pSimarray_bool_1VTable;

int array_bool_1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_bool_1VTable != NULL
        && pSimarray_bool_1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_bool_1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_bool_to_string, 1, sizeof(kcg_bool), pfnStrAppend, pData);
}

int string_to_array_bool_1(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_bool_1VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_bool_1VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_bool_Utils, 1, sizeof(kcg_bool), endptr);
    }
    return nRet;
}

int is_array_bool_1_double_convertion_allowed()
{
    if (pSimarray_bool_1VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_bool_1VTable);
    }
    return 0;
}

void compare_array_bool_1(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_bool_1VTable != NULL
        && pSimarray_bool_1VTable->m_version >= Scv612
        && pSimarray_bool_1VTable->m_pfnCompare != NULL) {
        if (pSimarray_bool_1VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_bool_1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_bool_1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_bool, 1, sizeof(kcg_bool), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_bool_1_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_bool_1VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_bool_1VTable, nRetValue);
    }
    return 0;
}

int get_array_bool_1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 1; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_bool_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_bool_1_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 1; i++)
        set_kcg_bool_default_value(&((kcg_bool*)pValue)[i]);
    return 1;
}

int check_array_bool_1_string(const char *str, char **endptr)
{
    static array_bool_1 rTemp;
    return string_to_array_bool_1(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_bool_1_Utils = {
    array_bool_1_to_string,
    check_array_bool_1_string,
    string_to_array_bool_1,
    is_array_bool_1_double_convertion_allowed,
    array_bool_1_to_double,
    compare_array_bool_1,
    get_array_bool_1_signature,
    set_array_bool_1_default_value,
    sizeof(array_bool_1)
};

/****************************************************************
 ** array_bool_24 
 ****************************************************************/

struct SimTypeVTable *pSimarray_bool_24VTable;

int array_bool_24_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_bool_24VTable != NULL
        && pSimarray_bool_24VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_bool_24VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_bool_to_string, 24, sizeof(kcg_bool), pfnStrAppend, pData);
}

int string_to_array_bool_24(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_bool_24VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_bool_24VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_bool_Utils, 24, sizeof(kcg_bool), endptr);
    }
    return nRet;
}

int is_array_bool_24_double_convertion_allowed()
{
    if (pSimarray_bool_24VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_bool_24VTable);
    }
    return 0;
}

void compare_array_bool_24(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_bool_24VTable != NULL
        && pSimarray_bool_24VTable->m_version >= Scv612
        && pSimarray_bool_24VTable->m_pfnCompare != NULL) {
        if (pSimarray_bool_24VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_bool_24VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_bool_24VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_bool, 24, sizeof(kcg_bool), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_bool_24_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_bool_24VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_bool_24VTable, nRetValue);
    }
    return 0;
}

int get_array_bool_24_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 24; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_bool_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_bool_24_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 24; i++)
        set_kcg_bool_default_value(&((kcg_bool*)pValue)[i]);
    return 1;
}

int check_array_bool_24_string(const char *str, char **endptr)
{
    static array_bool_24 rTemp;
    return string_to_array_bool_24(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_bool_24_Utils = {
    array_bool_24_to_string,
    check_array_bool_24_string,
    string_to_array_bool_24,
    is_array_bool_24_double_convertion_allowed,
    array_bool_24_to_double,
    compare_array_bool_24,
    get_array_bool_24_signature,
    set_array_bool_24_default_value,
    sizeof(array_bool_24)
};

/****************************************************************
 ** array__1586 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1586VTable;

int array__1586_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1586VTable != NULL
        && pSimarray__1586VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1586VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array__1550_to_string, 25, sizeof(array__1550), pfnStrAppend, pData);
}

int string_to_array__1586(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1586VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1586VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array__1550_Utils, 25, sizeof(array__1550), endptr);
    }
    return nRet;
}

int is_array__1586_double_convertion_allowed()
{
    if (pSimarray__1586VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__1586VTable);
    }
    return 0;
}

void compare_array__1586(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1586VTable != NULL
        && pSimarray__1586VTable->m_version >= Scv612
        && pSimarray__1586VTable->m_pfnCompare != NULL) {
        if (pSimarray__1586VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1586VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1586VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array__1550, 25, sizeof(array__1550), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1586_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1586VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1586VTable, nRetValue);
    }
    return 0;
}

int get_array__1586_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 25; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array__1550_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1586_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 25; i++)
        set_array__1550_default_value(&((array__1550*)pValue)[i]);
    return 1;
}

int check_array__1586_string(const char *str, char **endptr)
{
    static array__1586 rTemp;
    return string_to_array__1586(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1586_Utils = {
    array__1586_to_string,
    check_array__1586_string,
    string_to_array__1586,
    is_array__1586_double_convertion_allowed,
    array__1586_to_double,
    compare_array__1586,
    get_array__1586_signature,
    set_array__1586_default_value,
    sizeof(array__1586)
};

/****************************************************************
 ** array__1589 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1589VTable;

int array__1589_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1589VTable != NULL
        && pSimarray__1589VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1589VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__1532_to_string, 25, sizeof(struct__1532), pfnStrAppend, pData);
}

int string_to_array__1589(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1589VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1589VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__1532_Utils, 25, sizeof(struct__1532), endptr);
    }
    return nRet;
}

int is_array__1589_double_convertion_allowed()
{
    if (pSimarray__1589VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__1589VTable);
    }
    return 0;
}

void compare_array__1589(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1589VTable != NULL
        && pSimarray__1589VTable->m_version >= Scv612
        && pSimarray__1589VTable->m_pfnCompare != NULL) {
        if (pSimarray__1589VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1589VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1589VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__1532, 25, sizeof(struct__1532), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1589_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1589VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1589VTable, nRetValue);
    }
    return 0;
}

int get_array__1589_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 25; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__1532_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1589_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 25; i++)
        set_struct__1532_default_value(&((struct__1532*)pValue)[i]);
    return 1;
}

int check_array__1589_string(const char *str, char **endptr)
{
    static array__1589 rTemp;
    return string_to_array__1589(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1589_Utils = {
    array__1589_to_string,
    check_array__1589_string,
    string_to_array__1589,
    is_array__1589_double_convertion_allowed,
    array__1589_to_double,
    compare_array__1589,
    get_array__1589_signature,
    set_array__1589_default_value,
    sizeof(array__1589)
};

/****************************************************************
 ** TY_DistValue 
 ****************************************************************/

struct SimTypeVTable *pSimTY_DistValueVTable;

int TY_DistValue_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTY_DistValueVTable != NULL
        && pSimTY_DistValueVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTY_DistValueVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1542_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TY_DistValue(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTY_DistValueVTable != NULL) {
        nRet=string_to_VTable(str, pSimTY_DistValueVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1542(str, pValue, endptr);
    }
    return nRet;
}

int is_TY_DistValue_double_convertion_allowed()
{
    if (pSimTY_DistValueVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTY_DistValueVTable);
    }
    return is_struct__1542_double_convertion_allowed();
}

void compare_TY_DistValue(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTY_DistValueVTable != NULL
        && pSimTY_DistValueVTable->m_version >= Scv612
        && pSimTY_DistValueVTable->m_pfnCompare != NULL) {
        if (pSimTY_DistValueVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTY_DistValueVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTY_DistValueVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1542(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TY_DistValue_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTY_DistValueVTable != NULL) {
        return VTable_to_double(pValue, pSimTY_DistValueVTable, nRetValue);
    }
    return struct__1542_to_double(pValue, nRetValue);
}

int get_TY_DistValue_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1542_signature(pfnStrAppend, pData);
}

int set_TY_DistValue_default_value(void *pValue)
{
    return set_struct__1542_default_value(pValue);
}

int check_TY_DistValue_string(const char *str, char **endptr)
{
    static TY_DistValue rTemp;
    return string_to_TY_DistValue(str, &rTemp, endptr);
}

SimTypeUtils _Type_TY_DistValue_Utils = {
    TY_DistValue_to_string,
    check_TY_DistValue_string,
    string_to_TY_DistValue,
    is_TY_DistValue_double_convertion_allowed,
    TY_DistValue_to_double,
    compare_TY_DistValue,
    get_TY_DistValue_signature,
    set_TY_DistValue_default_value,
    sizeof(TY_DistValue)
};

/****************************************************************
 ** TY_Adh 
 ****************************************************************/

struct SimTypeVTable *pSimTY_AdhVTable;

int TY_Adh_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTY_AdhVTable != NULL
        && pSimTY_AdhVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTY_AdhVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1537_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TY_Adh(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTY_AdhVTable != NULL) {
        nRet=string_to_VTable(str, pSimTY_AdhVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1537(str, pValue, endptr);
    }
    return nRet;
}

int is_TY_Adh_double_convertion_allowed()
{
    if (pSimTY_AdhVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTY_AdhVTable);
    }
    return is_struct__1537_double_convertion_allowed();
}

void compare_TY_Adh(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTY_AdhVTable != NULL
        && pSimTY_AdhVTable->m_version >= Scv612
        && pSimTY_AdhVTable->m_pfnCompare != NULL) {
        if (pSimTY_AdhVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTY_AdhVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTY_AdhVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1537(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TY_Adh_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTY_AdhVTable != NULL) {
        return VTable_to_double(pValue, pSimTY_AdhVTable, nRetValue);
    }
    return struct__1537_to_double(pValue, nRetValue);
}

int get_TY_Adh_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1537_signature(pfnStrAppend, pData);
}

int set_TY_Adh_default_value(void *pValue)
{
    return set_struct__1537_default_value(pValue);
}

int check_TY_Adh_string(const char *str, char **endptr)
{
    static TY_Adh rTemp;
    return string_to_TY_Adh(str, &rTemp, endptr);
}

SimTypeUtils _Type_TY_Adh_Utils = {
    TY_Adh_to_string,
    check_TY_Adh_string,
    string_to_TY_Adh,
    is_TY_Adh_double_convertion_allowed,
    TY_Adh_to_double,
    compare_TY_Adh,
    get_TY_Adh_signature,
    set_TY_Adh_default_value,
    sizeof(TY_Adh)
};

/****************************************************************
 ** TY_EB_Type 
 ****************************************************************/

struct SimTypeVTable *pSimTY_EB_TypeVTable;

int TY_EB_Type_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTY_EB_TypeVTable != NULL
        && pSimTY_EB_TypeVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTY_EB_TypeVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1532_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TY_EB_Type(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTY_EB_TypeVTable != NULL) {
        nRet=string_to_VTable(str, pSimTY_EB_TypeVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1532(str, pValue, endptr);
    }
    return nRet;
}

int is_TY_EB_Type_double_convertion_allowed()
{
    if (pSimTY_EB_TypeVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTY_EB_TypeVTable);
    }
    return is_struct__1532_double_convertion_allowed();
}

void compare_TY_EB_Type(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTY_EB_TypeVTable != NULL
        && pSimTY_EB_TypeVTable->m_version >= Scv612
        && pSimTY_EB_TypeVTable->m_pfnCompare != NULL) {
        if (pSimTY_EB_TypeVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTY_EB_TypeVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTY_EB_TypeVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1532(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TY_EB_Type_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTY_EB_TypeVTable != NULL) {
        return VTable_to_double(pValue, pSimTY_EB_TypeVTable, nRetValue);
    }
    return struct__1532_to_double(pValue, nRetValue);
}

int get_TY_EB_Type_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1532_signature(pfnStrAppend, pData);
}

int set_TY_EB_Type_default_value(void *pValue)
{
    return set_struct__1532_default_value(pValue);
}

int check_TY_EB_Type_string(const char *str, char **endptr)
{
    static TY_EB_Type rTemp;
    return string_to_TY_EB_Type(str, &rTemp, endptr);
}

SimTypeUtils _Type_TY_EB_Type_Utils = {
    TY_EB_Type_to_string,
    check_TY_EB_Type_string,
    string_to_TY_EB_Type,
    is_TY_EB_Type_double_convertion_allowed,
    TY_EB_Type_to_double,
    compare_TY_EB_Type,
    get_TY_EB_Type_signature,
    set_TY_EB_Type_default_value,
    sizeof(TY_EB_Type)
};

/****************************************************************
 ** TY_SizePos 
 ****************************************************************/

struct SimTypeVTable *pSimTY_SizePosVTable;

int TY_SizePos_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTY_SizePosVTable != NULL
        && pSimTY_SizePosVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTY_SizePosVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1527_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TY_SizePos(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTY_SizePosVTable != NULL) {
        nRet=string_to_VTable(str, pSimTY_SizePosVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1527(str, pValue, endptr);
    }
    return nRet;
}

int is_TY_SizePos_double_convertion_allowed()
{
    if (pSimTY_SizePosVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTY_SizePosVTable);
    }
    return is_struct__1527_double_convertion_allowed();
}

void compare_TY_SizePos(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTY_SizePosVTable != NULL
        && pSimTY_SizePosVTable->m_version >= Scv612
        && pSimTY_SizePosVTable->m_pfnCompare != NULL) {
        if (pSimTY_SizePosVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTY_SizePosVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTY_SizePosVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1527(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TY_SizePos_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTY_SizePosVTable != NULL) {
        return VTable_to_double(pValue, pSimTY_SizePosVTable, nRetValue);
    }
    return struct__1527_to_double(pValue, nRetValue);
}

int get_TY_SizePos_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1527_signature(pfnStrAppend, pData);
}

int set_TY_SizePos_default_value(void *pValue)
{
    return set_struct__1527_default_value(pValue);
}

int check_TY_SizePos_string(const char *str, char **endptr)
{
    static TY_SizePos rTemp;
    return string_to_TY_SizePos(str, &rTemp, endptr);
}

SimTypeUtils _Type_TY_SizePos_Utils = {
    TY_SizePos_to_string,
    check_TY_SizePos_string,
    string_to_TY_SizePos,
    is_TY_SizePos_double_convertion_allowed,
    TY_SizePos_to_double,
    compare_TY_SizePos,
    get_TY_SizePos_signature,
    set_TY_SizePos_default_value,
    sizeof(TY_SizePos)
};

#include "C:/Program Files (x86)/Esterel Technologies/SCADE R15.2/SCADE/lib/kcg_conv.c"
