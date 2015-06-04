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
 ** struct__532 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__532VTable;

static SimFieldUtils struct__532_fields[] = {
    {"valid", offsetof(struct__532,valid), &_Type_kcg_bool_Utils},
    {"d_link", offsetof(struct__532,d_link), &_Type_kcg_int_Utils},
    {"q_newcountry", offsetof(struct__532,q_newcountry), &_Type_Q_NEWCOUNTRY_Utils},
    {"nid_c", offsetof(struct__532,nid_c), &_Type_kcg_int_Utils},
    {"nid_bg", offsetof(struct__532,nid_bg), &_Type_kcg_int_Utils},
    {"q_linkorientation", offsetof(struct__532,q_linkorientation), &_Type_Q_LINKORIENTATION_Utils},
    {"q_linkreaction", offsetof(struct__532,q_linkreaction), &_Type_Q_LINKREACTION_Utils},
    {"q_locacc", offsetof(struct__532,q_locacc), &_Type_kcg_int_Utils},
};

int struct__532_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__532VTable != NULL
        && pSimstruct__532VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__532VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__532_fields, 8, pfnStrAppend, pData);
}

int string_to_struct__532(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__532VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__532VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__532_fields, 8, endptr);
    }
    return nRet;
}

int is_struct__532_double_convertion_allowed()
{
    if (pSimstruct__532VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__532VTable);
    }
    return 0;
}

void compare_struct__532(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__532VTable != NULL
        && pSimstruct__532VTable->m_version >= Scv612
        && pSimstruct__532VTable->m_pfnCompare != NULL) {
        if (pSimstruct__532VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__532VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__532VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__532_fields, 8, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__532_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__532VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__532VTable, nRetValue);
    }
    return 0;
}

int get_struct__532_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__532_fields, 8, pfnStrAppend, pData);
}

int set_struct__532_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__532*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__532*)pValue)->d_link));
    set_Q_NEWCOUNTRY_default_value(&(((struct__532*)pValue)->q_newcountry));
    set_kcg_int_default_value(&(((struct__532*)pValue)->nid_c));
    set_kcg_int_default_value(&(((struct__532*)pValue)->nid_bg));
    set_Q_LINKORIENTATION_default_value(&(((struct__532*)pValue)->q_linkorientation));
    set_Q_LINKREACTION_default_value(&(((struct__532*)pValue)->q_linkreaction));
    set_kcg_int_default_value(&(((struct__532*)pValue)->q_locacc));
    return 1;
}

int check_struct__532_string(const char *str, char **endptr)
{
    static struct__532 rTemp;
    return string_to_struct__532(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__532_Utils = {
    struct__532_to_string,
    check_struct__532_string,
    string_to_struct__532,
    is_struct__532_double_convertion_allowed,
    struct__532_to_double,
    compare_struct__532,
    get_struct__532_signature,
    set_struct__532_default_value,
    sizeof(struct__532)
};

/****************************************************************
 ** array__543 
 ****************************************************************/

struct SimTypeVTable *pSimarray__543VTable;

int array__543_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__543VTable != NULL
        && pSimarray__543VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__543VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__532_to_string, 32, sizeof(struct__532), pfnStrAppend, pData);
}

int string_to_array__543(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__543VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__543VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__532_Utils, 32, sizeof(struct__532), endptr);
    }
    return nRet;
}

int is_array__543_double_convertion_allowed()
{
    if (pSimarray__543VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__543VTable);
    }
    return 0;
}

void compare_array__543(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__543VTable != NULL
        && pSimarray__543VTable->m_version >= Scv612
        && pSimarray__543VTable->m_pfnCompare != NULL) {
        if (pSimarray__543VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__543VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__543VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__532, 32, sizeof(struct__532), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__543_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__543VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__543VTable, nRetValue);
    }
    return 0;
}

int get_array__543_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__532_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__543_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_struct__532_default_value(&((struct__532*)pValue)[i]);
    return 1;
}

int check_array__543_string(const char *str, char **endptr)
{
    static array__543 rTemp;
    return string_to_array__543(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__543_Utils = {
    array__543_to_string,
    check_array__543_string,
    string_to_array__543,
    is_array__543_double_convertion_allowed,
    array__543_to_double,
    compare_array__543,
    get_array__543_signature,
    set_array__543_default_value,
    sizeof(array__543)
};

/****************************************************************
 ** array_int_224 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_224VTable;

int array_int_224_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_224VTable != NULL
        && pSimarray_int_224VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_224VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 224, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_224(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_224VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_224VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 224, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_224_double_convertion_allowed()
{
    if (pSimarray_int_224VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_224VTable);
    }
    return 0;
}

void compare_array_int_224(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_224VTable != NULL
        && pSimarray_int_224VTable->m_version >= Scv612
        && pSimarray_int_224VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_224VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_224VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_224VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 224, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_224_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_224VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_224VTable, nRetValue);
    }
    return 0;
}

int get_array_int_224_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 224; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_224_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 224; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_224_string(const char *str, char **endptr)
{
    static array_int_224 rTemp;
    return string_to_array_int_224(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_224_Utils = {
    array_int_224_to_string,
    check_array_int_224_string,
    string_to_array_int_224,
    is_array_int_224_double_convertion_allowed,
    array_int_224_to_double,
    compare_array_int_224,
    get_array_int_224_signature,
    set_array_int_224_default_value,
    sizeof(array_int_224)
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

int is_array_int_32_double_convertion_allowed()
{
    if (pSimarray_int_32VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_32VTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_32VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_array_int_32_double_convertion_allowed,
    array_int_32_to_double,
    compare_array_int_32,
    get_array_int_32_signature,
    set_array_int_32_default_value,
    sizeof(array_int_32)
};

/****************************************************************
 ** array_int_224_32 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_224_32VTable;

int array_int_224_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_224_32VTable != NULL
        && pSimarray_int_224_32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_224_32VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, array_int_224_to_string, 32, sizeof(array_int_224), pfnStrAppend, pData);
}

int string_to_array_int_224_32(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_224_32VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_224_32VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_int_224_Utils, 32, sizeof(array_int_224), endptr);
    }
    return nRet;
}

int is_array_int_224_32_double_convertion_allowed()
{
    if (pSimarray_int_224_32VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_224_32VTable);
    }
    return 0;
}

void compare_array_int_224_32(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_224_32VTable != NULL
        && pSimarray_int_224_32VTable->m_version >= Scv612
        && pSimarray_int_224_32VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_224_32VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_224_32VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_224_32VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_int_224, 32, sizeof(array_int_224), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_224_32_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_224_32VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_224_32VTable, nRetValue);
    }
    return 0;
}

int get_array_int_224_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 32; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_array_int_224_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_224_32_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 32; i++)
        set_array_int_224_default_value(&((array_int_224*)pValue)[i]);
    return 1;
}

int check_array_int_224_32_string(const char *str, char **endptr)
{
    static array_int_224_32 rTemp;
    return string_to_array_int_224_32(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_224_32_Utils = {
    array_int_224_32_to_string,
    check_array_int_224_32_string,
    string_to_array_int_224_32,
    is_array_int_224_32_double_convertion_allowed,
    array_int_224_32_to_double,
    compare_array_int_224_32,
    get_array_int_224_32_signature,
    set_array_int_224_32_default_value,
    sizeof(array_int_224_32)
};

/****************************************************************
 ** D_LINK 
 ****************************************************************/

struct SimTypeVTable *pSimD_LINKVTable;

int D_LINK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimD_LINKVTable != NULL
        && pSimD_LINKVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimD_LINKVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_D_LINK(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimD_LINKVTable != NULL) {
        nRet=string_to_VTable(str, pSimD_LINKVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_D_LINK_double_convertion_allowed()
{
    if (pSimD_LINKVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimD_LINKVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_D_LINK(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimD_LINKVTable != NULL
        && pSimD_LINKVTable->m_version >= Scv612
        && pSimD_LINKVTable->m_pfnCompare != NULL) {
        if (pSimD_LINKVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimD_LINKVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimD_LINKVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int D_LINK_to_double(const void *pValue, double *nRetValue)
{
    if (pSimD_LINKVTable != NULL) {
        return VTable_to_double(pValue, pSimD_LINKVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_D_LINK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_D_LINK_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_D_LINK_string(const char *str, char **endptr)
{
    static D_LINK rTemp;
    return string_to_D_LINK(str, &rTemp, endptr);
}

SimTypeUtils _Type_D_LINK_Utils = {
    D_LINK_to_string,
    check_D_LINK_string,
    string_to_D_LINK,
    is_D_LINK_double_convertion_allowed,
    D_LINK_to_double,
    compare_D_LINK,
    get_D_LINK_signature,
    set_D_LINK_default_value,
    sizeof(D_LINK)
};

/****************************************************************
 ** Q_NEWCOUNTRY 
 ****************************************************************/

struct SimTypeVTable *pSimQ_NEWCOUNTRYVTable;

static SimEnumValUtils Q_NEWCOUNTRY_values[] = {
    { "Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows", Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows},
    { "Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows", Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows},
    { "Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows", Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows},
    { "Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows", Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows},
};

int Q_NEWCOUNTRY_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_NEWCOUNTRYVTable != NULL
        && pSimQ_NEWCOUNTRYVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_NEWCOUNTRYVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_NEWCOUNTRY*)pValue, Q_NEWCOUNTRY_values, 4, pfnStrAppend, pData);
}

int string_to_Q_NEWCOUNTRY(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_NEWCOUNTRYVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_NEWCOUNTRYVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_NEWCOUNTRY_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_NEWCOUNTRY*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_NEWCOUNTRY_double_convertion_allowed()
{
    if (pSimQ_NEWCOUNTRYVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_NEWCOUNTRYVTable);
    }
    return 1;
}

void compare_Q_NEWCOUNTRY(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_NEWCOUNTRYVTable != NULL
        && pSimQ_NEWCOUNTRYVTable->m_version >= Scv612
        && pSimQ_NEWCOUNTRYVTable->m_pfnCompare != NULL) {
        if (pSimQ_NEWCOUNTRYVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_NEWCOUNTRYVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_NEWCOUNTRYVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_NEWCOUNTRY*)pValue1), (int)(*(Q_NEWCOUNTRY*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_NEWCOUNTRY_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_NEWCOUNTRYVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_NEWCOUNTRYVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_NEWCOUNTRY*)pValue);
    return 1;
}

int get_Q_NEWCOUNTRY_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_NEWCOUNTRY_values, 4, pfnStrAppend, pData);
}

int set_Q_NEWCOUNTRY_default_value(void *pValue)
{
    *(Q_NEWCOUNTRY*)pValue = Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    return 1;
}

int check_Q_NEWCOUNTRY_string(const char *str, char **endptr)
{
    static Q_NEWCOUNTRY rTemp;
    return string_to_Q_NEWCOUNTRY(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_NEWCOUNTRY_Utils = {
    Q_NEWCOUNTRY_to_string,
    check_Q_NEWCOUNTRY_string,
    string_to_Q_NEWCOUNTRY,
    is_Q_NEWCOUNTRY_double_convertion_allowed,
    Q_NEWCOUNTRY_to_double,
    compare_Q_NEWCOUNTRY,
    get_Q_NEWCOUNTRY_signature,
    set_Q_NEWCOUNTRY_default_value,
    sizeof(Q_NEWCOUNTRY)
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

int is_NID_C_double_convertion_allowed()
{
    if (pSimNID_CVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_CVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_C(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_CVTable != NULL
        && pSimNID_CVTable->m_version >= Scv612
        && pSimNID_CVTable->m_pfnCompare != NULL) {
        if (pSimNID_CVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_CVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_NID_C_double_convertion_allowed,
    NID_C_to_double,
    compare_NID_C,
    get_NID_C_signature,
    set_NID_C_default_value,
    sizeof(NID_C)
};

/****************************************************************
 ** NID_BG 
 ****************************************************************/

struct SimTypeVTable *pSimNID_BGVTable;

int NID_BG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_BGVTable != NULL
        && pSimNID_BGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_BGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_BG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_BGVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_BGVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_BG_double_convertion_allowed()
{
    if (pSimNID_BGVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_BGVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_BG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_BGVTable != NULL
        && pSimNID_BGVTable->m_version >= Scv612
        && pSimNID_BGVTable->m_pfnCompare != NULL) {
        if (pSimNID_BGVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_BGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_BGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_BG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_BGVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_BGVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_NID_BG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_BG_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_BG_string(const char *str, char **endptr)
{
    static NID_BG rTemp;
    return string_to_NID_BG(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_BG_Utils = {
    NID_BG_to_string,
    check_NID_BG_string,
    string_to_NID_BG,
    is_NID_BG_double_convertion_allowed,
    NID_BG_to_double,
    compare_NID_BG,
    get_NID_BG_signature,
    set_NID_BG_default_value,
    sizeof(NID_BG)
};

/****************************************************************
 ** Q_LINKORIENTATION 
 ****************************************************************/

struct SimTypeVTable *pSimQ_LINKORIENTATIONVTable;

static SimEnumValUtils Q_LINKORIENTATION_values[] = {
    { "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction", _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction},
    { "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction", _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction},
    { "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction", Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction},
    { "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction", Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction},
};

int Q_LINKORIENTATION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_LINKORIENTATIONVTable != NULL
        && pSimQ_LINKORIENTATIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_LINKORIENTATIONVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_LINKORIENTATION*)pValue, Q_LINKORIENTATION_values, 4, pfnStrAppend, pData);
}

int string_to_Q_LINKORIENTATION(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_LINKORIENTATIONVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_LINKORIENTATIONVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_LINKORIENTATION_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_LINKORIENTATION*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_LINKORIENTATION_double_convertion_allowed()
{
    if (pSimQ_LINKORIENTATIONVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_LINKORIENTATIONVTable);
    }
    return 1;
}

void compare_Q_LINKORIENTATION(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_LINKORIENTATIONVTable != NULL
        && pSimQ_LINKORIENTATIONVTable->m_version >= Scv612
        && pSimQ_LINKORIENTATIONVTable->m_pfnCompare != NULL) {
        if (pSimQ_LINKORIENTATIONVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_LINKORIENTATIONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_LINKORIENTATIONVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_LINKORIENTATION*)pValue1), (int)(*(Q_LINKORIENTATION*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_LINKORIENTATION_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_LINKORIENTATIONVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_LINKORIENTATIONVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_LINKORIENTATION*)pValue);
    return 1;
}

int get_Q_LINKORIENTATION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_LINKORIENTATION_values, 4, pfnStrAppend, pData);
}

int set_Q_LINKORIENTATION_default_value(void *pValue)
{
    *(Q_LINKORIENTATION*)pValue = _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    return 1;
}

int check_Q_LINKORIENTATION_string(const char *str, char **endptr)
{
    static Q_LINKORIENTATION rTemp;
    return string_to_Q_LINKORIENTATION(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_LINKORIENTATION_Utils = {
    Q_LINKORIENTATION_to_string,
    check_Q_LINKORIENTATION_string,
    string_to_Q_LINKORIENTATION,
    is_Q_LINKORIENTATION_double_convertion_allowed,
    Q_LINKORIENTATION_to_double,
    compare_Q_LINKORIENTATION,
    get_Q_LINKORIENTATION_signature,
    set_Q_LINKORIENTATION_default_value,
    sizeof(Q_LINKORIENTATION)
};

/****************************************************************
 ** Q_LINKREACTION 
 ****************************************************************/

struct SimTypeVTable *pSimQ_LINKREACTIONVTable;

static SimEnumValUtils Q_LINKREACTION_values[] = {
    { "Q_LINKREACTION_Train_trip", Q_LINKREACTION_Train_trip},
    { "Q_LINKREACTION_Train_trip", Q_LINKREACTION_Train_trip},
    { "Q_LINKREACTION_Apply_service_brake", Q_LINKREACTION_Apply_service_brake},
    { "Q_LINKREACTION_Apply_service_brake", Q_LINKREACTION_Apply_service_brake},
    { "Q_LINKREACTION_No_Reaction", Q_LINKREACTION_No_Reaction},
    { "Q_LINKREACTION_No_Reaction", Q_LINKREACTION_No_Reaction},
};

int Q_LINKREACTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_LINKREACTIONVTable != NULL
        && pSimQ_LINKREACTIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_LINKREACTIONVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_LINKREACTION*)pValue, Q_LINKREACTION_values, 6, pfnStrAppend, pData);
}

int string_to_Q_LINKREACTION(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_LINKREACTIONVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_LINKREACTIONVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_LINKREACTION_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_LINKREACTION*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_LINKREACTION_double_convertion_allowed()
{
    if (pSimQ_LINKREACTIONVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_LINKREACTIONVTable);
    }
    return 1;
}

void compare_Q_LINKREACTION(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_LINKREACTIONVTable != NULL
        && pSimQ_LINKREACTIONVTable->m_version >= Scv612
        && pSimQ_LINKREACTIONVTable->m_pfnCompare != NULL) {
        if (pSimQ_LINKREACTIONVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_LINKREACTIONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_LINKREACTIONVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_LINKREACTION*)pValue1), (int)(*(Q_LINKREACTION*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_LINKREACTION_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_LINKREACTIONVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_LINKREACTIONVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_LINKREACTION*)pValue);
    return 1;
}

int get_Q_LINKREACTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_LINKREACTION_values, 6, pfnStrAppend, pData);
}

int set_Q_LINKREACTION_default_value(void *pValue)
{
    *(Q_LINKREACTION*)pValue = Q_LINKREACTION_Train_trip;
    return 1;
}

int check_Q_LINKREACTION_string(const char *str, char **endptr)
{
    static Q_LINKREACTION rTemp;
    return string_to_Q_LINKREACTION(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_LINKREACTION_Utils = {
    Q_LINKREACTION_to_string,
    check_Q_LINKREACTION_string,
    string_to_Q_LINKREACTION,
    is_Q_LINKREACTION_double_convertion_allowed,
    Q_LINKREACTION_to_double,
    compare_Q_LINKREACTION,
    get_Q_LINKREACTION_signature,
    set_Q_LINKREACTION_default_value,
    sizeof(Q_LINKREACTION)
};

/****************************************************************
 ** Q_LOCACC 
 ****************************************************************/

struct SimTypeVTable *pSimQ_LOCACCVTable;

int Q_LOCACC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_LOCACCVTable != NULL
        && pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_LOCACCVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Q_LOCACC(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_LOCACCVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_LOCACCVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_Q_LOCACC_double_convertion_allowed()
{
    if (pSimQ_LOCACCVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_LOCACCVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_Q_LOCACC(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_LOCACCVTable != NULL
        && pSimQ_LOCACCVTable->m_version >= Scv612
        && pSimQ_LOCACCVTable->m_pfnCompare != NULL) {
        if (pSimQ_LOCACCVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_LOCACCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_LOCACCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_LOCACC_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_LOCACCVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_LOCACCVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_Q_LOCACC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_Q_LOCACC_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_Q_LOCACC_string(const char *str, char **endptr)
{
    static Q_LOCACC rTemp;
    return string_to_Q_LOCACC(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_LOCACC_Utils = {
    Q_LOCACC_to_string,
    check_Q_LOCACC_string,
    string_to_Q_LOCACC,
    is_Q_LOCACC_double_convertion_allowed,
    Q_LOCACC_to_double,
    compare_Q_LOCACC,
    get_Q_LOCACC_signature,
    set_Q_LOCACC_default_value,
    sizeof(Q_LOCACC)
};

/****************************************************************
 ** P005_OBU_section_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_OBU_section_TMVTable;

int P005_OBU_section_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_OBU_section_TMVTable != NULL
        && pSimP005_OBU_section_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_OBU_section_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__532_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_OBU_section_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_OBU_section_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_OBU_section_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__532(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_OBU_section_TM_double_convertion_allowed()
{
    if (pSimP005_OBU_section_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP005_OBU_section_TMVTable);
    }
    return is_struct__532_double_convertion_allowed();
}

void compare_P005_OBU_section_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_OBU_section_TMVTable != NULL
        && pSimP005_OBU_section_TMVTable->m_version >= Scv612
        && pSimP005_OBU_section_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_OBU_section_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_OBU_section_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_OBU_section_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__532(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_OBU_section_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_OBU_section_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_OBU_section_TMVTable, nRetValue);
    }
    return struct__532_to_double(pValue, nRetValue);
}

int get_P005_OBU_section_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__532_signature(pfnStrAppend, pData);
}

int set_P005_OBU_section_TM_default_value(void *pValue)
{
    return set_struct__532_default_value(pValue);
}

int check_P005_OBU_section_TM_string(const char *str, char **endptr)
{
    static P005_OBU_section_TM rTemp;
    return string_to_P005_OBU_section_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_OBU_section_TM_Utils = {
    P005_OBU_section_TM_to_string,
    check_P005_OBU_section_TM_string,
    string_to_P005_OBU_section_TM,
    is_P005_OBU_section_TM_double_convertion_allowed,
    P005_OBU_section_TM_to_double,
    compare_P005_OBU_section_TM,
    get_P005_OBU_section_TM_signature,
    set_P005_OBU_section_TM_default_value,
    sizeof(P005_OBU_section_TM)
};

/****************************************************************
 ** P005_sections_array_flat_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_sections_array_flat_TMVTable;

int P005_sections_array_flat_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_sections_array_flat_TMVTable != NULL
        && pSimP005_sections_array_flat_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_sections_array_flat_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_224_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_sections_array_flat_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_sections_array_flat_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_sections_array_flat_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_224(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_sections_array_flat_TM_double_convertion_allowed()
{
    if (pSimP005_sections_array_flat_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP005_sections_array_flat_TMVTable);
    }
    return is_array_int_224_double_convertion_allowed();
}

void compare_P005_sections_array_flat_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_sections_array_flat_TMVTable != NULL
        && pSimP005_sections_array_flat_TMVTable->m_version >= Scv612
        && pSimP005_sections_array_flat_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_sections_array_flat_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_sections_array_flat_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_sections_array_flat_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_224(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_sections_array_flat_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_sections_array_flat_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_sections_array_flat_TMVTable, nRetValue);
    }
    return array_int_224_to_double(pValue, nRetValue);
}

int get_P005_sections_array_flat_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_224_signature(pfnStrAppend, pData);
}

int set_P005_sections_array_flat_TM_default_value(void *pValue)
{
    return set_array_int_224_default_value(pValue);
}

int check_P005_sections_array_flat_TM_string(const char *str, char **endptr)
{
    static P005_sections_array_flat_TM rTemp;
    return string_to_P005_sections_array_flat_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_sections_array_flat_TM_Utils = {
    P005_sections_array_flat_TM_to_string,
    check_P005_sections_array_flat_TM_string,
    string_to_P005_sections_array_flat_TM,
    is_P005_sections_array_flat_TM_double_convertion_allowed,
    P005_sections_array_flat_TM_to_double,
    compare_P005_sections_array_flat_TM,
    get_P005_sections_array_flat_TM_signature,
    set_P005_sections_array_flat_TM_default_value,
    sizeof(P005_sections_array_flat_TM)
};

/****************************************************************
 ** P005_OBU_sectionlist_TM 
 ****************************************************************/

struct SimTypeVTable *pSimP005_OBU_sectionlist_TMVTable;

int P005_OBU_sectionlist_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimP005_OBU_sectionlist_TMVTable != NULL
        && pSimP005_OBU_sectionlist_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimP005_OBU_sectionlist_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__543_to_string(pValue, pfnStrAppend, pData);
}

int string_to_P005_OBU_sectionlist_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimP005_OBU_sectionlist_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimP005_OBU_sectionlist_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__543(str, pValue, endptr);
    }
    return nRet;
}

int is_P005_OBU_sectionlist_TM_double_convertion_allowed()
{
    if (pSimP005_OBU_sectionlist_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimP005_OBU_sectionlist_TMVTable);
    }
    return is_array__543_double_convertion_allowed();
}

void compare_P005_OBU_sectionlist_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimP005_OBU_sectionlist_TMVTable != NULL
        && pSimP005_OBU_sectionlist_TMVTable->m_version >= Scv612
        && pSimP005_OBU_sectionlist_TMVTable->m_pfnCompare != NULL) {
        if (pSimP005_OBU_sectionlist_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimP005_OBU_sectionlist_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimP005_OBU_sectionlist_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__543(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int P005_OBU_sectionlist_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimP005_OBU_sectionlist_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimP005_OBU_sectionlist_TMVTable, nRetValue);
    }
    return array__543_to_double(pValue, nRetValue);
}

int get_P005_OBU_sectionlist_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__543_signature(pfnStrAppend, pData);
}

int set_P005_OBU_sectionlist_TM_default_value(void *pValue)
{
    return set_array__543_default_value(pValue);
}

int check_P005_OBU_sectionlist_TM_string(const char *str, char **endptr)
{
    static P005_OBU_sectionlist_TM rTemp;
    return string_to_P005_OBU_sectionlist_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_P005_OBU_sectionlist_TM_Utils = {
    P005_OBU_sectionlist_TM_to_string,
    check_P005_OBU_sectionlist_TM_string,
    string_to_P005_OBU_sectionlist_TM,
    is_P005_OBU_sectionlist_TM_double_convertion_allowed,
    P005_OBU_sectionlist_TM_to_double,
    compare_P005_OBU_sectionlist_TM,
    get_P005_OBU_sectionlist_TM_signature,
    set_P005_OBU_sectionlist_TM_default_value,
    sizeof(P005_OBU_sectionlist_TM)
};

#include "C:/Program Files/Esterel Technologies/SCADE R15.2/SCADE/lib/kcg_conv.c"
