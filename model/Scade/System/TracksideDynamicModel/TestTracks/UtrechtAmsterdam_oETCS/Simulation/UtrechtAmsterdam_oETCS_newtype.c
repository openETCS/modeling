#include <stdlib.h>
#include <stddef.h>
#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "UtrechtAmsterdam_oETCS_newtype.h"
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
 ** struct__3653 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3653VTable;

static SimFieldUtils struct__3653_fields[] = {
    {"q_updown", offsetof(struct__3653,q_updown), &_Type_Q_UPDOWN_Utils},
    {"m_version", offsetof(struct__3653,m_version), &_Type_M_VERSION_Utils},
    {"q_media", offsetof(struct__3653,q_media), &_Type_Q_MEDIA_Utils},
    {"n_pig", offsetof(struct__3653,n_pig), &_Type_N_PIG_Utils},
    {"n_total", offsetof(struct__3653,n_total), &_Type_N_TOTAL_Utils},
    {"m_dup", offsetof(struct__3653,m_dup), &_Type_M_DUP_Utils},
    {"m_mcount", offsetof(struct__3653,m_mcount), &_Type_kcg_int_Utils},
    {"nid_c", offsetof(struct__3653,nid_c), &_Type_kcg_int_Utils},
    {"nid_bg", offsetof(struct__3653,nid_bg), &_Type_kcg_int_Utils},
    {"q_link", offsetof(struct__3653,q_link), &_Type_Q_LINK_Utils},
};

int struct__3653_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3653VTable != NULL
        && pSimstruct__3653VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3653VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3653_fields, 10, pfnStrAppend, pData);
}

int string_to_struct__3653(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3653VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3653VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3653_fields, 10, endptr);
    }
    return nRet;
}

int is_struct__3653_double_convertion_allowed()
{
    if (pSimstruct__3653VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__3653VTable);
    }
    return 0;
}

void compare_struct__3653(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3653VTable != NULL
        && pSimstruct__3653VTable->m_version >= Scv612
        && pSimstruct__3653VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3653VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3653VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3653VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3653_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3653_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3653VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3653VTable, nRetValue);
    }
    return 0;
}

int get_struct__3653_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3653_fields, 10, pfnStrAppend, pData);
}

int set_struct__3653_default_value(void *pValue)
{
    set_Q_UPDOWN_default_value(&(((struct__3653*)pValue)->q_updown));
    set_M_VERSION_default_value(&(((struct__3653*)pValue)->m_version));
    set_Q_MEDIA_default_value(&(((struct__3653*)pValue)->q_media));
    set_N_PIG_default_value(&(((struct__3653*)pValue)->n_pig));
    set_N_TOTAL_default_value(&(((struct__3653*)pValue)->n_total));
    set_M_DUP_default_value(&(((struct__3653*)pValue)->m_dup));
    set_kcg_int_default_value(&(((struct__3653*)pValue)->m_mcount));
    set_kcg_int_default_value(&(((struct__3653*)pValue)->nid_c));
    set_kcg_int_default_value(&(((struct__3653*)pValue)->nid_bg));
    set_Q_LINK_default_value(&(((struct__3653*)pValue)->q_link));
    return 1;
}

int check_struct__3653_string(const char *str, char **endptr)
{
    static struct__3653 rTemp;
    return string_to_struct__3653(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3653_Utils = {
    struct__3653_to_string,
    check_struct__3653_string,
    string_to_struct__3653,
    is_struct__3653_double_convertion_allowed,
    struct__3653_to_double,
    compare_struct__3653,
    get_struct__3653_signature,
    set_struct__3653_default_value,
    sizeof(struct__3653)
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
 ** struct__3669 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3669VTable;

static SimFieldUtils struct__3669_fields[] = {
    {"nid_packet", offsetof(struct__3669,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__3669,q_dir), &_Type_Q_DIR_Utils},
    {"valid", offsetof(struct__3669,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(struct__3669,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(struct__3669,endAddress), &_Type_kcg_int_Utils},
};

int struct__3669_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3669VTable != NULL
        && pSimstruct__3669VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3669VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3669_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__3669(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3669VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3669VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3669_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__3669_double_convertion_allowed()
{
    if (pSimstruct__3669VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__3669VTable);
    }
    return 0;
}

void compare_struct__3669(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3669VTable != NULL
        && pSimstruct__3669VTable->m_version >= Scv612
        && pSimstruct__3669VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3669VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3669VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3669VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3669_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3669_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3669VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3669VTable, nRetValue);
    }
    return 0;
}

int get_struct__3669_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3669_fields, 5, pfnStrAppend, pData);
}

int set_struct__3669_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__3669*)pValue)->nid_packet));
    set_Q_DIR_default_value(&(((struct__3669*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((struct__3669*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__3669*)pValue)->startAddress));
    set_kcg_int_default_value(&(((struct__3669*)pValue)->endAddress));
    return 1;
}

int check_struct__3669_string(const char *str, char **endptr)
{
    static struct__3669 rTemp;
    return string_to_struct__3669(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3669_Utils = {
    struct__3669_to_string,
    check_struct__3669_string,
    string_to_struct__3669,
    is_struct__3669_double_convertion_allowed,
    struct__3669_to_double,
    compare_struct__3669,
    get_struct__3669_signature,
    set_struct__3669_default_value,
    sizeof(struct__3669)
};

/****************************************************************
 ** array__3677 
 ****************************************************************/

struct SimTypeVTable *pSimarray__3677VTable;

int array__3677_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__3677VTable != NULL
        && pSimarray__3677VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__3677VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__3669_to_string, 30, sizeof(struct__3669), pfnStrAppend, pData);
}

int string_to_array__3677(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__3677VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__3677VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__3669_Utils, 30, sizeof(struct__3669), endptr);
    }
    return nRet;
}

int is_array__3677_double_convertion_allowed()
{
    if (pSimarray__3677VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__3677VTable);
    }
    return 0;
}

void compare_array__3677(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__3677VTable != NULL
        && pSimarray__3677VTable->m_version >= Scv612
        && pSimarray__3677VTable->m_pfnCompare != NULL) {
        if (pSimarray__3677VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__3677VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__3677VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__3669, 30, sizeof(struct__3669), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__3677_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__3677VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__3677VTable, nRetValue);
    }
    return 0;
}

int get_array__3677_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__3669_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__3677_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_struct__3669_default_value(&((struct__3669*)pValue)[i]);
    return 1;
}

int check_array__3677_string(const char *str, char **endptr)
{
    static array__3677 rTemp;
    return string_to_array__3677(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__3677_Utils = {
    array__3677_to_string,
    check_array__3677_string,
    string_to_array__3677,
    is_array__3677_double_convertion_allowed,
    array__3677_to_double,
    compare_array__3677,
    get_array__3677_signature,
    set_array__3677_default_value,
    sizeof(array__3677)
};

/****************************************************************
 ** struct__3680 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3680VTable;

static SimFieldUtils struct__3680_fields[] = {
    {"PacketHeaders", offsetof(struct__3680,PacketHeaders), &_Type_array__3677_Utils},
    {"PacketData", offsetof(struct__3680,PacketData), &_Type_array_int_500_Utils},
};

int struct__3680_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3680VTable != NULL
        && pSimstruct__3680VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3680VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3680_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__3680(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3680VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3680VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3680_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__3680_double_convertion_allowed()
{
    if (pSimstruct__3680VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__3680VTable);
    }
    return 0;
}

void compare_struct__3680(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3680VTable != NULL
        && pSimstruct__3680VTable->m_version >= Scv612
        && pSimstruct__3680VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3680VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3680VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3680VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3680_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3680_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3680VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3680VTable, nRetValue);
    }
    return 0;
}

int get_struct__3680_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3680_fields, 2, pfnStrAppend, pData);
}

int set_struct__3680_default_value(void *pValue)
{
    set_array__3677_default_value(&(((struct__3680*)pValue)->PacketHeaders));
    set_array_int_500_default_value(&(((struct__3680*)pValue)->PacketData));
    return 1;
}

int check_struct__3680_string(const char *str, char **endptr)
{
    static struct__3680 rTemp;
    return string_to_struct__3680(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3680_Utils = {
    struct__3680_to_string,
    check_struct__3680_string,
    string_to_struct__3680,
    is_struct__3680_double_convertion_allowed,
    struct__3680_to_double,
    compare_struct__3680,
    get_struct__3680_signature,
    set_struct__3680_default_value,
    sizeof(struct__3680)
};

/****************************************************************
 ** struct__3685 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3685VTable;

static SimFieldUtils struct__3685_fields[] = {
    {"NID_C", offsetof(struct__3685,NID_C), &_Type_kcg_int_Utils},
    {"NID_BG", offsetof(struct__3685,NID_BG), &_Type_kcg_int_Utils},
    {"Pos", offsetof(struct__3685,Pos), &_Type_kcg_int_Utils},
    {"Or_BG", offsetof(struct__3685,Or_BG), &_Type_TM_OrBG_Utils},
    {"Or_Line", offsetof(struct__3685,Or_Line), &_Type_TM_OrLine_Utils},
};

int struct__3685_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3685VTable != NULL
        && pSimstruct__3685VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3685VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3685_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__3685(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3685VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3685VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3685_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__3685_double_convertion_allowed()
{
    if (pSimstruct__3685VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__3685VTable);
    }
    return 0;
}

void compare_struct__3685(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3685VTable != NULL
        && pSimstruct__3685VTable->m_version >= Scv612
        && pSimstruct__3685VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3685VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3685VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3685VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3685_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3685_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3685VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3685VTable, nRetValue);
    }
    return 0;
}

int get_struct__3685_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3685_fields, 5, pfnStrAppend, pData);
}

int set_struct__3685_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__3685*)pValue)->NID_C));
    set_kcg_int_default_value(&(((struct__3685*)pValue)->NID_BG));
    set_kcg_int_default_value(&(((struct__3685*)pValue)->Pos));
    set_TM_OrBG_default_value(&(((struct__3685*)pValue)->Or_BG));
    set_TM_OrLine_default_value(&(((struct__3685*)pValue)->Or_Line));
    return 1;
}

int check_struct__3685_string(const char *str, char **endptr)
{
    static struct__3685 rTemp;
    return string_to_struct__3685(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3685_Utils = {
    struct__3685_to_string,
    check_struct__3685_string,
    string_to_struct__3685,
    is_struct__3685_double_convertion_allowed,
    struct__3685_to_double,
    compare_struct__3685,
    get_struct__3685_signature,
    set_struct__3685_default_value,
    sizeof(struct__3685)
};

/****************************************************************
 ** struct__3693 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3693VTable;

static SimFieldUtils struct__3693_fields[] = {
    {"q_updown", offsetof(struct__3693,q_updown), &_Type_kcg_int_Utils},
    {"m_version", offsetof(struct__3693,m_version), &_Type_kcg_int_Utils},
    {"q_media", offsetof(struct__3693,q_media), &_Type_kcg_int_Utils},
    {"n_pig", offsetof(struct__3693,n_pig), &_Type_kcg_int_Utils},
    {"n_total", offsetof(struct__3693,n_total), &_Type_kcg_int_Utils},
    {"m_dup", offsetof(struct__3693,m_dup), &_Type_kcg_int_Utils},
    {"m_mcount", offsetof(struct__3693,m_mcount), &_Type_kcg_int_Utils},
    {"nid_c", offsetof(struct__3693,nid_c), &_Type_kcg_int_Utils},
    {"nid_bg", offsetof(struct__3693,nid_bg), &_Type_kcg_int_Utils},
    {"q_link", offsetof(struct__3693,q_link), &_Type_kcg_int_Utils},
};

int struct__3693_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3693VTable != NULL
        && pSimstruct__3693VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3693VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3693_fields, 10, pfnStrAppend, pData);
}

int string_to_struct__3693(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3693VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3693VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3693_fields, 10, endptr);
    }
    return nRet;
}

int is_struct__3693_double_convertion_allowed()
{
    if (pSimstruct__3693VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__3693VTable);
    }
    return 0;
}

void compare_struct__3693(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3693VTable != NULL
        && pSimstruct__3693VTable->m_version >= Scv612
        && pSimstruct__3693VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3693VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3693VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3693VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3693_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3693_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3693VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3693VTable, nRetValue);
    }
    return 0;
}

int get_struct__3693_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3693_fields, 10, pfnStrAppend, pData);
}

int set_struct__3693_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__3693*)pValue)->q_updown));
    set_kcg_int_default_value(&(((struct__3693*)pValue)->m_version));
    set_kcg_int_default_value(&(((struct__3693*)pValue)->q_media));
    set_kcg_int_default_value(&(((struct__3693*)pValue)->n_pig));
    set_kcg_int_default_value(&(((struct__3693*)pValue)->n_total));
    set_kcg_int_default_value(&(((struct__3693*)pValue)->m_dup));
    set_kcg_int_default_value(&(((struct__3693*)pValue)->m_mcount));
    set_kcg_int_default_value(&(((struct__3693*)pValue)->nid_c));
    set_kcg_int_default_value(&(((struct__3693*)pValue)->nid_bg));
    set_kcg_int_default_value(&(((struct__3693*)pValue)->q_link));
    return 1;
}

int check_struct__3693_string(const char *str, char **endptr)
{
    static struct__3693 rTemp;
    return string_to_struct__3693(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3693_Utils = {
    struct__3693_to_string,
    check_struct__3693_string,
    string_to_struct__3693,
    is_struct__3693_double_convertion_allowed,
    struct__3693_to_double,
    compare_struct__3693,
    get_struct__3693_signature,
    set_struct__3693_default_value,
    sizeof(struct__3693)
};

/****************************************************************
 ** struct__3706 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3706VTable;

static SimFieldUtils struct__3706_fields[] = {
    {"header", offsetof(struct__3706,header), &_Type_struct__3693_Utils},
    {"packets", offsetof(struct__3706,packets), &_Type_struct__3680_Utils},
    {"engineering_BG_location", offsetof(struct__3706,engineering_BG_location), &_Type_kcg_int_Utils},
    {"TrainPos", offsetof(struct__3706,TrainPos), &_Type_kcg_real_Utils},
    {"pig_nom_0", offsetof(struct__3706,pig_nom_0), &_Type_kcg_int_Utils},
    {"balise_passed", offsetof(struct__3706,balise_passed), &_Type_kcg_bool_Utils},
};

int struct__3706_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3706VTable != NULL
        && pSimstruct__3706VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3706VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3706_fields, 6, pfnStrAppend, pData);
}

int string_to_struct__3706(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3706VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3706VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3706_fields, 6, endptr);
    }
    return nRet;
}

int is_struct__3706_double_convertion_allowed()
{
    if (pSimstruct__3706VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__3706VTable);
    }
    return 0;
}

void compare_struct__3706(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3706VTable != NULL
        && pSimstruct__3706VTable->m_version >= Scv612
        && pSimstruct__3706VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3706VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3706VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3706VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3706_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3706_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3706VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3706VTable, nRetValue);
    }
    return 0;
}

int get_struct__3706_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3706_fields, 6, pfnStrAppend, pData);
}

int set_struct__3706_default_value(void *pValue)
{
    set_struct__3693_default_value(&(((struct__3706*)pValue)->header));
    set_struct__3680_default_value(&(((struct__3706*)pValue)->packets));
    set_kcg_int_default_value(&(((struct__3706*)pValue)->engineering_BG_location));
    set_kcg_real_default_value(&(((struct__3706*)pValue)->TrainPos));
    set_kcg_int_default_value(&(((struct__3706*)pValue)->pig_nom_0));
    set_kcg_bool_default_value(&(((struct__3706*)pValue)->balise_passed));
    return 1;
}

int check_struct__3706_string(const char *str, char **endptr)
{
    static struct__3706 rTemp;
    return string_to_struct__3706(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3706_Utils = {
    struct__3706_to_string,
    check_struct__3706_string,
    string_to_struct__3706,
    is_struct__3706_double_convertion_allowed,
    struct__3706_to_double,
    compare_struct__3706,
    get_struct__3706_signature,
    set_struct__3706_default_value,
    sizeof(struct__3706)
};

/****************************************************************
 ** struct__3715 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3715VTable;

static SimFieldUtils struct__3715_fields[] = {
    {"Header", offsetof(struct__3715,Header), &_Type_struct__3693_Utils},
    {"Messages", offsetof(struct__3715,Messages), &_Type_struct__3680_Utils},
};

int struct__3715_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3715VTable != NULL
        && pSimstruct__3715VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3715VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3715_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__3715(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3715VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3715VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3715_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__3715_double_convertion_allowed()
{
    if (pSimstruct__3715VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__3715VTable);
    }
    return 0;
}

void compare_struct__3715(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3715VTable != NULL
        && pSimstruct__3715VTable->m_version >= Scv612
        && pSimstruct__3715VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3715VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3715VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3715VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3715_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3715_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3715VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3715VTable, nRetValue);
    }
    return 0;
}

int get_struct__3715_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3715_fields, 2, pfnStrAppend, pData);
}

int set_struct__3715_default_value(void *pValue)
{
    set_struct__3693_default_value(&(((struct__3715*)pValue)->Header));
    set_struct__3680_default_value(&(((struct__3715*)pValue)->Messages));
    return 1;
}

int check_struct__3715_string(const char *str, char **endptr)
{
    static struct__3715 rTemp;
    return string_to_struct__3715(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3715_Utils = {
    struct__3715_to_string,
    check_struct__3715_string,
    string_to_struct__3715,
    is_struct__3715_double_convertion_allowed,
    struct__3715_to_double,
    compare_struct__3715,
    get_struct__3715_signature,
    set_struct__3715_default_value,
    sizeof(struct__3715)
};

/****************************************************************
 ** struct__3720 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3720VTable;

static SimFieldUtils struct__3720_fields[] = {
    {"valid", offsetof(struct__3720,valid), &_Type_kcg_bool_Utils},
    {"D_LINK", offsetof(struct__3720,D_LINK), &_Type_kcg_int_Utils},
    {"Q_NEWCOUNTRY", offsetof(struct__3720,Q_NEWCOUNTRY), &_Type_kcg_int_Utils},
    {"NID_C", offsetof(struct__3720,NID_C), &_Type_kcg_int_Utils},
    {"NID_BG", offsetof(struct__3720,NID_BG), &_Type_kcg_int_Utils},
    {"Q_LINKORIENTATION", offsetof(struct__3720,Q_LINKORIENTATION), &_Type_kcg_int_Utils},
    {"Q_LINKREACTION", offsetof(struct__3720,Q_LINKREACTION), &_Type_kcg_int_Utils},
    {"Q_LOCACC", offsetof(struct__3720,Q_LOCACC), &_Type_kcg_int_Utils},
};

int struct__3720_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3720VTable != NULL
        && pSimstruct__3720VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3720VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3720_fields, 8, pfnStrAppend, pData);
}

int string_to_struct__3720(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3720VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3720VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3720_fields, 8, endptr);
    }
    return nRet;
}

int is_struct__3720_double_convertion_allowed()
{
    if (pSimstruct__3720VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__3720VTable);
    }
    return 0;
}

void compare_struct__3720(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3720VTable != NULL
        && pSimstruct__3720VTable->m_version >= Scv612
        && pSimstruct__3720VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3720VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3720VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3720VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3720_fields, 8, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3720_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3720VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3720VTable, nRetValue);
    }
    return 0;
}

int get_struct__3720_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3720_fields, 8, pfnStrAppend, pData);
}

int set_struct__3720_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__3720*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__3720*)pValue)->D_LINK));
    set_kcg_int_default_value(&(((struct__3720*)pValue)->Q_NEWCOUNTRY));
    set_kcg_int_default_value(&(((struct__3720*)pValue)->NID_C));
    set_kcg_int_default_value(&(((struct__3720*)pValue)->NID_BG));
    set_kcg_int_default_value(&(((struct__3720*)pValue)->Q_LINKORIENTATION));
    set_kcg_int_default_value(&(((struct__3720*)pValue)->Q_LINKREACTION));
    set_kcg_int_default_value(&(((struct__3720*)pValue)->Q_LOCACC));
    return 1;
}

int check_struct__3720_string(const char *str, char **endptr)
{
    static struct__3720 rTemp;
    return string_to_struct__3720(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3720_Utils = {
    struct__3720_to_string,
    check_struct__3720_string,
    string_to_struct__3720,
    is_struct__3720_double_convertion_allowed,
    struct__3720_to_double,
    compare_struct__3720,
    get_struct__3720_signature,
    set_struct__3720_default_value,
    sizeof(struct__3720)
};

/****************************************************************
 ** array__3731 
 ****************************************************************/

struct SimTypeVTable *pSimarray__3731VTable;

int array__3731_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__3731VTable != NULL
        && pSimarray__3731VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__3731VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__3720_to_string, 5, sizeof(struct__3720), pfnStrAppend, pData);
}

int string_to_array__3731(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__3731VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__3731VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__3720_Utils, 5, sizeof(struct__3720), endptr);
    }
    return nRet;
}

int is_array__3731_double_convertion_allowed()
{
    if (pSimarray__3731VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__3731VTable);
    }
    return 0;
}

void compare_array__3731(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__3731VTable != NULL
        && pSimarray__3731VTable->m_version >= Scv612
        && pSimarray__3731VTable->m_pfnCompare != NULL) {
        if (pSimarray__3731VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__3731VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__3731VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__3720, 5, sizeof(struct__3720), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__3731_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__3731VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__3731VTable, nRetValue);
    }
    return 0;
}

int get_array__3731_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 5; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__3720_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__3731_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 5; i++)
        set_struct__3720_default_value(&((struct__3720*)pValue)[i]);
    return 1;
}

int check_array__3731_string(const char *str, char **endptr)
{
    static array__3731 rTemp;
    return string_to_array__3731(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__3731_Utils = {
    array__3731_to_string,
    check_array__3731_string,
    string_to_array__3731,
    is_array__3731_double_convertion_allowed,
    array__3731_to_double,
    compare_array__3731,
    get_array__3731_signature,
    set_array__3731_default_value,
    sizeof(array__3731)
};

/****************************************************************
 ** struct__3734 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__3734VTable;

static SimFieldUtils struct__3734_fields[] = {
    {"valid", offsetof(struct__3734,valid), &_Type_kcg_bool_Utils},
    {"Q_DIR", offsetof(struct__3734,Q_DIR), &_Type_kcg_int_Utils},
    {"L_PACKET", offsetof(struct__3734,L_PACKET), &_Type_kcg_int_Utils},
    {"Q_SCALE", offsetof(struct__3734,Q_SCALE), &_Type_kcg_int_Utils},
    {"N_ITER", offsetof(struct__3734,N_ITER), &_Type_kcg_int_Utils},
    {"SECTIONS", offsetof(struct__3734,SECTIONS), &_Type_array__3731_Utils},
};

int struct__3734_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__3734VTable != NULL
        && pSimstruct__3734VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__3734VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__3734_fields, 6, pfnStrAppend, pData);
}

int string_to_struct__3734(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__3734VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__3734VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__3734_fields, 6, endptr);
    }
    return nRet;
}

int is_struct__3734_double_convertion_allowed()
{
    if (pSimstruct__3734VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__3734VTable);
    }
    return 0;
}

void compare_struct__3734(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__3734VTable != NULL
        && pSimstruct__3734VTable->m_version >= Scv612
        && pSimstruct__3734VTable->m_pfnCompare != NULL) {
        if (pSimstruct__3734VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__3734VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__3734VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__3734_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__3734_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__3734VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__3734VTable, nRetValue);
    }
    return 0;
}

int get_struct__3734_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__3734_fields, 6, pfnStrAppend, pData);
}

int set_struct__3734_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__3734*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__3734*)pValue)->Q_DIR));
    set_kcg_int_default_value(&(((struct__3734*)pValue)->L_PACKET));
    set_kcg_int_default_value(&(((struct__3734*)pValue)->Q_SCALE));
    set_kcg_int_default_value(&(((struct__3734*)pValue)->N_ITER));
    set_array__3731_default_value(&(((struct__3734*)pValue)->SECTIONS));
    return 1;
}

int check_struct__3734_string(const char *str, char **endptr)
{
    static struct__3734 rTemp;
    return string_to_struct__3734(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__3734_Utils = {
    struct__3734_to_string,
    check_struct__3734_string,
    string_to_struct__3734,
    is_struct__3734_double_convertion_allowed,
    struct__3734_to_double,
    compare_struct__3734,
    get_struct__3734_signature,
    set_struct__3734_default_value,
    sizeof(struct__3734)
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

int is_array_int_7_double_convertion_allowed()
{
    if (pSimarray_int_7VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_7VTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_7VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_array_int_7_double_convertion_allowed,
    array_int_7_to_double,
    compare_array_int_7,
    get_array_int_7_signature,
    set_array_int_7_default_value,
    sizeof(array_int_7)
};

/****************************************************************
 ** array_int_461 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_461VTable;

int array_int_461_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_461VTable != NULL
        && pSimarray_int_461VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_461VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 461, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_461(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_461VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_461VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 461, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_461_double_convertion_allowed()
{
    if (pSimarray_int_461VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_461VTable);
    }
    return 0;
}

void compare_array_int_461(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_461VTable != NULL
        && pSimarray_int_461VTable->m_version >= Scv612
        && pSimarray_int_461VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_461VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_461VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_461VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 461, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_461_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_461VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_461VTable, nRetValue);
    }
    return 0;
}

int get_array_int_461_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 461; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_461_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 461; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_461_string(const char *str, char **endptr)
{
    static array_int_461 rTemp;
    return string_to_array_int_461(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_461_Utils = {
    array_int_461_to_string,
    check_array_int_461_string,
    string_to_array_int_461,
    is_array_int_461_double_convertion_allowed,
    array_int_461_to_double,
    compare_array_int_461,
    get_array_int_461_signature,
    set_array_int_461_default_value,
    sizeof(array_int_461)
};

/****************************************************************
 ** array_int_11 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_11VTable;

int array_int_11_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_11VTable != NULL
        && pSimarray_int_11VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_11VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 11, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_11(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_11VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_11VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 11, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_11_double_convertion_allowed()
{
    if (pSimarray_int_11VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_11VTable);
    }
    return 0;
}

void compare_array_int_11(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_11VTable != NULL
        && pSimarray_int_11VTable->m_version >= Scv612
        && pSimarray_int_11VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_11VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_11VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_11VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 11, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_11_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_11VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_11VTable, nRetValue);
    }
    return 0;
}

int get_array_int_11_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 11; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_11_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 11; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_11_string(const char *str, char **endptr)
{
    static array_int_11 rTemp;
    return string_to_array_int_11(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_11_Utils = {
    array_int_11_to_string,
    check_array_int_11_string,
    string_to_array_int_11,
    is_array_int_11_double_convertion_allowed,
    array_int_11_to_double,
    compare_array_int_11,
    get_array_int_11_signature,
    set_array_int_11_default_value,
    sizeof(array_int_11)
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

int is_array_int_18_double_convertion_allowed()
{
    if (pSimarray_int_18VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_18VTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_18VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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
    is_array_int_18_double_convertion_allowed,
    array_int_18_to_double,
    compare_array_int_18,
    get_array_int_18_signature,
    set_array_int_18_default_value,
    sizeof(array_int_18)
};

/****************************************************************
 ** array_int_25 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_25VTable;

int array_int_25_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_25VTable != NULL
        && pSimarray_int_25VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_25VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 25, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_25(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_25VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_25VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 25, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_25_double_convertion_allowed()
{
    if (pSimarray_int_25VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_25VTable);
    }
    return 0;
}

void compare_array_int_25(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_25VTable != NULL
        && pSimarray_int_25VTable->m_version >= Scv612
        && pSimarray_int_25VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_25VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_25VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_25VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 25, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_25_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_25VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_25VTable, nRetValue);
    }
    return 0;
}

int get_array_int_25_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 25; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_25_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 25; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_25_string(const char *str, char **endptr)
{
    static array_int_25 rTemp;
    return string_to_array_int_25(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_25_Utils = {
    array_int_25_to_string,
    check_array_int_25_string,
    string_to_array_int_25,
    is_array_int_25_double_convertion_allowed,
    array_int_25_to_double,
    compare_array_int_25,
    get_array_int_25_signature,
    set_array_int_25_default_value,
    sizeof(array_int_25)
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
 ** array_int_39 
 ****************************************************************/

struct SimTypeVTable *pSimarray_int_39VTable;

int array_int_39_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray_int_39VTable != NULL
        && pSimarray_int_39VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int_39VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int_to_string, 39, sizeof(kcg_int), pfnStrAppend, pData);
}

int string_to_array_int_39(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray_int_39VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray_int_39VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int_Utils, 39, sizeof(kcg_int), endptr);
    }
    return nRet;
}

int is_array_int_39_double_convertion_allowed()
{
    if (pSimarray_int_39VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray_int_39VTable);
    }
    return 0;
}

void compare_array_int_39(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray_int_39VTable != NULL
        && pSimarray_int_39VTable->m_version >= Scv612
        && pSimarray_int_39VTable->m_pfnCompare != NULL) {
        if (pSimarray_int_39VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray_int_39VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray_int_39VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int, 39, sizeof(kcg_int), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array_int_39_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray_int_39VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int_39VTable, nRetValue);
    }
    return 0;
}

int get_array_int_39_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 39; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_kcg_int_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array_int_39_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 39; i++)
        set_kcg_int_default_value(&((kcg_int*)pValue)[i]);
    return 1;
}

int check_array_int_39_string(const char *str, char **endptr)
{
    static array_int_39 rTemp;
    return string_to_array_int_39(str, &rTemp, endptr);
}

SimTypeUtils _Type_array_int_39_Utils = {
    array_int_39_to_string,
    check_array_int_39_string,
    string_to_array_int_39,
    is_array_int_39_double_convertion_allowed,
    array_int_39_to_double,
    compare_array_int_39,
    get_array_int_39_signature,
    set_array_int_39_default_value,
    sizeof(array_int_39)
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
 ** TM_CompressedBaliseMessage 
 ****************************************************************/

struct SimTypeVTable *pSimTM_CompressedBaliseMessageVTable;

int TM_CompressedBaliseMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTM_CompressedBaliseMessageVTable != NULL
        && pSimTM_CompressedBaliseMessageVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTM_CompressedBaliseMessageVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__3715_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TM_CompressedBaliseMessage(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTM_CompressedBaliseMessageVTable != NULL) {
        nRet=string_to_VTable(str, pSimTM_CompressedBaliseMessageVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3715(str, pValue, endptr);
    }
    return nRet;
}

int is_TM_CompressedBaliseMessage_double_convertion_allowed()
{
    if (pSimTM_CompressedBaliseMessageVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTM_CompressedBaliseMessageVTable);
    }
    return is_struct__3715_double_convertion_allowed();
}

void compare_TM_CompressedBaliseMessage(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTM_CompressedBaliseMessageVTable != NULL
        && pSimTM_CompressedBaliseMessageVTable->m_version >= Scv612
        && pSimTM_CompressedBaliseMessageVTable->m_pfnCompare != NULL) {
        if (pSimTM_CompressedBaliseMessageVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTM_CompressedBaliseMessageVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTM_CompressedBaliseMessageVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__3715(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TM_CompressedBaliseMessage_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTM_CompressedBaliseMessageVTable != NULL) {
        return VTable_to_double(pValue, pSimTM_CompressedBaliseMessageVTable, nRetValue);
    }
    return struct__3715_to_double(pValue, nRetValue);
}

int get_TM_CompressedBaliseMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3715_signature(pfnStrAppend, pData);
}

int set_TM_CompressedBaliseMessage_default_value(void *pValue)
{
    return set_struct__3715_default_value(pValue);
}

int check_TM_CompressedBaliseMessage_string(const char *str, char **endptr)
{
    static TM_CompressedBaliseMessage rTemp;
    return string_to_TM_CompressedBaliseMessage(str, &rTemp, endptr);
}

SimTypeUtils _Type_TM_CompressedBaliseMessage_Utils = {
    TM_CompressedBaliseMessage_to_string,
    check_TM_CompressedBaliseMessage_string,
    string_to_TM_CompressedBaliseMessage,
    is_TM_CompressedBaliseMessage_double_convertion_allowed,
    TM_CompressedBaliseMessage_to_double,
    compare_TM_CompressedBaliseMessage,
    get_TM_CompressedBaliseMessage_signature,
    set_TM_CompressedBaliseMessage_default_value,
    sizeof(TM_CompressedBaliseMessage)
};

/****************************************************************
 ** TM_BaliseTelegramHeader_int_T 
 ****************************************************************/

struct SimTypeVTable *pSimTM_BaliseTelegramHeader_int_TVTable;

int TM_BaliseTelegramHeader_int_T_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTM_BaliseTelegramHeader_int_TVTable != NULL
        && pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__3693_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TM_BaliseTelegramHeader_int_T(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTM_BaliseTelegramHeader_int_TVTable != NULL) {
        nRet=string_to_VTable(str, pSimTM_BaliseTelegramHeader_int_TVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3693(str, pValue, endptr);
    }
    return nRet;
}

int is_TM_BaliseTelegramHeader_int_T_double_convertion_allowed()
{
    if (pSimTM_BaliseTelegramHeader_int_TVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTM_BaliseTelegramHeader_int_TVTable);
    }
    return is_struct__3693_double_convertion_allowed();
}

void compare_TM_BaliseTelegramHeader_int_T(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTM_BaliseTelegramHeader_int_TVTable != NULL
        && pSimTM_BaliseTelegramHeader_int_TVTable->m_version >= Scv612
        && pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnCompare != NULL) {
        if (pSimTM_BaliseTelegramHeader_int_TVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTM_BaliseTelegramHeader_int_TVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__3693(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TM_BaliseTelegramHeader_int_T_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTM_BaliseTelegramHeader_int_TVTable != NULL) {
        return VTable_to_double(pValue, pSimTM_BaliseTelegramHeader_int_TVTable, nRetValue);
    }
    return struct__3693_to_double(pValue, nRetValue);
}

int get_TM_BaliseTelegramHeader_int_T_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3693_signature(pfnStrAppend, pData);
}

int set_TM_BaliseTelegramHeader_int_T_default_value(void *pValue)
{
    return set_struct__3693_default_value(pValue);
}

int check_TM_BaliseTelegramHeader_int_T_string(const char *str, char **endptr)
{
    static TM_BaliseTelegramHeader_int_T rTemp;
    return string_to_TM_BaliseTelegramHeader_int_T(str, &rTemp, endptr);
}

SimTypeUtils _Type_TM_BaliseTelegramHeader_int_T_Utils = {
    TM_BaliseTelegramHeader_int_T_to_string,
    check_TM_BaliseTelegramHeader_int_T_string,
    string_to_TM_BaliseTelegramHeader_int_T,
    is_TM_BaliseTelegramHeader_int_T_double_convertion_allowed,
    TM_BaliseTelegramHeader_int_T_to_double,
    compare_TM_BaliseTelegramHeader_int_T,
    get_TM_BaliseTelegramHeader_int_T_signature,
    set_TM_BaliseTelegramHeader_int_T_default_value,
    sizeof(TM_BaliseTelegramHeader_int_T)
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
 ** TM_OrBG 
 ****************************************************************/

struct SimTypeVTable *pSimTM_OrBGVTable;

static SimEnumValUtils TM_OrBG_values[] = {
    { "Amsterdam", Amsterdam},
    { "Amsterdam", Amsterdam},
    { "Utrecht", Utrecht},
    { "Utrecht", Utrecht},
};

int TM_OrBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTM_OrBGVTable != NULL
        && pSimTM_OrBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTM_OrBGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(TM_OrBG*)pValue, TM_OrBG_values, 4, pfnStrAppend, pData);
}

int string_to_TM_OrBG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTM_OrBGVTable != NULL) {
        nRet=string_to_VTable(str, pSimTM_OrBGVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, TM_OrBG_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(TM_OrBG*)pValue = nTemp;
    }
    return nRet;
}

int is_TM_OrBG_double_convertion_allowed()
{
    if (pSimTM_OrBGVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTM_OrBGVTable);
    }
    return 1;
}

void compare_TM_OrBG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTM_OrBGVTable != NULL
        && pSimTM_OrBGVTable->m_version >= Scv612
        && pSimTM_OrBGVTable->m_pfnCompare != NULL) {
        if (pSimTM_OrBGVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTM_OrBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTM_OrBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(TM_OrBG*)pValue1), (int)(*(TM_OrBG*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TM_OrBG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTM_OrBGVTable != NULL) {
        return VTable_to_double(pValue, pSimTM_OrBGVTable, nRetValue);
    }
    *nRetValue = (double)*((TM_OrBG*)pValue);
    return 1;
}

int get_TM_OrBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(TM_OrBG_values, 4, pfnStrAppend, pData);
}

int set_TM_OrBG_default_value(void *pValue)
{
    *(TM_OrBG*)pValue = Amsterdam;
    return 1;
}

int check_TM_OrBG_string(const char *str, char **endptr)
{
    static TM_OrBG rTemp;
    return string_to_TM_OrBG(str, &rTemp, endptr);
}

SimTypeUtils _Type_TM_OrBG_Utils = {
    TM_OrBG_to_string,
    check_TM_OrBG_string,
    string_to_TM_OrBG,
    is_TM_OrBG_double_convertion_allowed,
    TM_OrBG_to_double,
    compare_TM_OrBG,
    get_TM_OrBG_signature,
    set_TM_OrBG_default_value,
    sizeof(TM_OrBG)
};

/****************************************************************
 ** TM_OrLine 
 ****************************************************************/

struct SimTypeVTable *pSimTM_OrLineVTable;

static SimEnumValUtils TM_OrLine_values[] = {
    { "N", N},
    { "N", N},
    { "Z", Z},
    { "Z", Z},
};

int TM_OrLine_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTM_OrLineVTable != NULL
        && pSimTM_OrLineVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTM_OrLineVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(TM_OrLine*)pValue, TM_OrLine_values, 4, pfnStrAppend, pData);
}

int string_to_TM_OrLine(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTM_OrLineVTable != NULL) {
        nRet=string_to_VTable(str, pSimTM_OrLineVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, TM_OrLine_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(TM_OrLine*)pValue = nTemp;
    }
    return nRet;
}

int is_TM_OrLine_double_convertion_allowed()
{
    if (pSimTM_OrLineVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTM_OrLineVTable);
    }
    return 1;
}

void compare_TM_OrLine(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTM_OrLineVTable != NULL
        && pSimTM_OrLineVTable->m_version >= Scv612
        && pSimTM_OrLineVTable->m_pfnCompare != NULL) {
        if (pSimTM_OrLineVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTM_OrLineVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTM_OrLineVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(TM_OrLine*)pValue1), (int)(*(TM_OrLine*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TM_OrLine_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTM_OrLineVTable != NULL) {
        return VTable_to_double(pValue, pSimTM_OrLineVTable, nRetValue);
    }
    *nRetValue = (double)*((TM_OrLine*)pValue);
    return 1;
}

int get_TM_OrLine_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(TM_OrLine_values, 4, pfnStrAppend, pData);
}

int set_TM_OrLine_default_value(void *pValue)
{
    *(TM_OrLine*)pValue = N;
    return 1;
}

int check_TM_OrLine_string(const char *str, char **endptr)
{
    static TM_OrLine rTemp;
    return string_to_TM_OrLine(str, &rTemp, endptr);
}

SimTypeUtils _Type_TM_OrLine_Utils = {
    TM_OrLine_to_string,
    check_TM_OrLine_string,
    string_to_TM_OrLine,
    is_TM_OrLine_double_convertion_allowed,
    TM_OrLine_to_double,
    compare_TM_OrLine,
    get_TM_OrLine_signature,
    set_TM_OrLine_default_value,
    sizeof(TM_OrLine)
};

/****************************************************************
 ** TM_P005 
 ****************************************************************/

struct SimTypeVTable *pSimTM_P005VTable;

int TM_P005_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTM_P005VTable != NULL
        && pSimTM_P005VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTM_P005VTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__3734_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TM_P005(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTM_P005VTable != NULL) {
        nRet=string_to_VTable(str, pSimTM_P005VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3734(str, pValue, endptr);
    }
    return nRet;
}

int is_TM_P005_double_convertion_allowed()
{
    if (pSimTM_P005VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTM_P005VTable);
    }
    return is_struct__3734_double_convertion_allowed();
}

void compare_TM_P005(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTM_P005VTable != NULL
        && pSimTM_P005VTable->m_version >= Scv612
        && pSimTM_P005VTable->m_pfnCompare != NULL) {
        if (pSimTM_P005VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTM_P005VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTM_P005VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__3734(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TM_P005_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTM_P005VTable != NULL) {
        return VTable_to_double(pValue, pSimTM_P005VTable, nRetValue);
    }
    return struct__3734_to_double(pValue, nRetValue);
}

int get_TM_P005_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3734_signature(pfnStrAppend, pData);
}

int set_TM_P005_default_value(void *pValue)
{
    return set_struct__3734_default_value(pValue);
}

int check_TM_P005_string(const char *str, char **endptr)
{
    static TM_P005 rTemp;
    return string_to_TM_P005(str, &rTemp, endptr);
}

SimTypeUtils _Type_TM_P005_Utils = {
    TM_P005_to_string,
    check_TM_P005_string,
    string_to_TM_P005,
    is_TM_P005_double_convertion_allowed,
    TM_P005_to_double,
    compare_TM_P005,
    get_TM_P005_signature,
    set_TM_P005_default_value,
    sizeof(TM_P005)
};

/****************************************************************
 ** TM_P05Es_T 
 ****************************************************************/

struct SimTypeVTable *pSimTM_P05Es_TVTable;

int TM_P05Es_T_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTM_P05Es_TVTable != NULL
        && pSimTM_P05Es_TVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTM_P05Es_TVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__3731_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TM_P05Es_T(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTM_P05Es_TVTable != NULL) {
        nRet=string_to_VTable(str, pSimTM_P05Es_TVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__3731(str, pValue, endptr);
    }
    return nRet;
}

int is_TM_P05Es_T_double_convertion_allowed()
{
    if (pSimTM_P05Es_TVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTM_P05Es_TVTable);
    }
    return is_array__3731_double_convertion_allowed();
}

void compare_TM_P05Es_T(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTM_P05Es_TVTable != NULL
        && pSimTM_P05Es_TVTable->m_version >= Scv612
        && pSimTM_P05Es_TVTable->m_pfnCompare != NULL) {
        if (pSimTM_P05Es_TVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTM_P05Es_TVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTM_P05Es_TVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__3731(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TM_P05Es_T_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTM_P05Es_TVTable != NULL) {
        return VTable_to_double(pValue, pSimTM_P05Es_TVTable, nRetValue);
    }
    return array__3731_to_double(pValue, nRetValue);
}

int get_TM_P05Es_T_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__3731_signature(pfnStrAppend, pData);
}

int set_TM_P05Es_T_default_value(void *pValue)
{
    return set_array__3731_default_value(pValue);
}

int check_TM_P05Es_T_string(const char *str, char **endptr)
{
    static TM_P05Es_T rTemp;
    return string_to_TM_P05Es_T(str, &rTemp, endptr);
}

SimTypeUtils _Type_TM_P05Es_T_Utils = {
    TM_P05Es_T_to_string,
    check_TM_P05Es_T_string,
    string_to_TM_P05Es_T,
    is_TM_P05Es_T_double_convertion_allowed,
    TM_P05Es_T_to_double,
    compare_TM_P05Es_T,
    get_TM_P05Es_T_signature,
    set_TM_P05Es_T_default_value,
    sizeof(TM_P05Es_T)
};

/****************************************************************
 ** TM_P005E_T 
 ****************************************************************/

struct SimTypeVTable *pSimTM_P005E_TVTable;

int TM_P005E_T_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTM_P005E_TVTable != NULL
        && pSimTM_P005E_TVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTM_P005E_TVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__3720_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TM_P005E_T(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTM_P005E_TVTable != NULL) {
        nRet=string_to_VTable(str, pSimTM_P005E_TVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3720(str, pValue, endptr);
    }
    return nRet;
}

int is_TM_P005E_T_double_convertion_allowed()
{
    if (pSimTM_P005E_TVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTM_P005E_TVTable);
    }
    return is_struct__3720_double_convertion_allowed();
}

void compare_TM_P005E_T(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTM_P005E_TVTable != NULL
        && pSimTM_P005E_TVTable->m_version >= Scv612
        && pSimTM_P005E_TVTable->m_pfnCompare != NULL) {
        if (pSimTM_P005E_TVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTM_P005E_TVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTM_P005E_TVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__3720(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TM_P005E_T_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTM_P005E_TVTable != NULL) {
        return VTable_to_double(pValue, pSimTM_P005E_TVTable, nRetValue);
    }
    return struct__3720_to_double(pValue, nRetValue);
}

int get_TM_P005E_T_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3720_signature(pfnStrAppend, pData);
}

int set_TM_P005E_T_default_value(void *pValue)
{
    return set_struct__3720_default_value(pValue);
}

int check_TM_P005E_T_string(const char *str, char **endptr)
{
    static TM_P005E_T rTemp;
    return string_to_TM_P005E_T(str, &rTemp, endptr);
}

SimTypeUtils _Type_TM_P005E_T_Utils = {
    TM_P005E_T_to_string,
    check_TM_P005E_T_string,
    string_to_TM_P005E_T,
    is_TM_P005E_T_double_convertion_allowed,
    TM_P005E_T_to_double,
    compare_TM_P005E_T,
    get_TM_P005E_T_signature,
    set_TM_P005E_T_default_value,
    sizeof(TM_P005E_T)
};

/****************************************************************
 ** TM_P005E_array_T 
 ****************************************************************/

struct SimTypeVTable *pSimTM_P005E_array_TVTable;

int TM_P005E_array_T_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTM_P005E_array_TVTable != NULL
        && pSimTM_P005E_array_TVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTM_P005E_array_TVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array_int_7_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TM_P005E_array_T(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTM_P005E_array_TVTable != NULL) {
        nRet=string_to_VTable(str, pSimTM_P005E_array_TVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array_int_7(str, pValue, endptr);
    }
    return nRet;
}

int is_TM_P005E_array_T_double_convertion_allowed()
{
    if (pSimTM_P005E_array_TVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTM_P005E_array_TVTable);
    }
    return is_array_int_7_double_convertion_allowed();
}

void compare_TM_P005E_array_T(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTM_P005E_array_TVTable != NULL
        && pSimTM_P005E_array_TVTable->m_version >= Scv612
        && pSimTM_P005E_array_TVTable->m_pfnCompare != NULL) {
        if (pSimTM_P005E_array_TVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTM_P005E_array_TVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTM_P005E_array_TVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array_int_7(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TM_P005E_array_T_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTM_P005E_array_TVTable != NULL) {
        return VTable_to_double(pValue, pSimTM_P005E_array_TVTable, nRetValue);
    }
    return array_int_7_to_double(pValue, nRetValue);
}

int get_TM_P005E_array_T_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array_int_7_signature(pfnStrAppend, pData);
}

int set_TM_P005E_array_T_default_value(void *pValue)
{
    return set_array_int_7_default_value(pValue);
}

int check_TM_P005E_array_T_string(const char *str, char **endptr)
{
    static TM_P005E_array_T rTemp;
    return string_to_TM_P005E_array_T(str, &rTemp, endptr);
}

SimTypeUtils _Type_TM_P005E_array_T_Utils = {
    TM_P005E_array_T_to_string,
    check_TM_P005E_array_T_string,
    string_to_TM_P005E_array_T,
    is_TM_P005E_array_T_double_convertion_allowed,
    TM_P005E_array_T_to_double,
    compare_TM_P005E_array_T,
    get_TM_P005E_array_T_signature,
    set_TM_P005E_array_T_default_value,
    sizeof(TM_P005E_array_T)
};

/****************************************************************
 ** TM_BaliseGroupData 
 ****************************************************************/

struct SimTypeVTable *pSimTM_BaliseGroupDataVTable;

int TM_BaliseGroupData_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTM_BaliseGroupDataVTable != NULL
        && pSimTM_BaliseGroupDataVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTM_BaliseGroupDataVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__3685_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TM_BaliseGroupData(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTM_BaliseGroupDataVTable != NULL) {
        nRet=string_to_VTable(str, pSimTM_BaliseGroupDataVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3685(str, pValue, endptr);
    }
    return nRet;
}

int is_TM_BaliseGroupData_double_convertion_allowed()
{
    if (pSimTM_BaliseGroupDataVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTM_BaliseGroupDataVTable);
    }
    return is_struct__3685_double_convertion_allowed();
}

void compare_TM_BaliseGroupData(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTM_BaliseGroupDataVTable != NULL
        && pSimTM_BaliseGroupDataVTable->m_version >= Scv612
        && pSimTM_BaliseGroupDataVTable->m_pfnCompare != NULL) {
        if (pSimTM_BaliseGroupDataVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTM_BaliseGroupDataVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTM_BaliseGroupDataVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__3685(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TM_BaliseGroupData_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTM_BaliseGroupDataVTable != NULL) {
        return VTable_to_double(pValue, pSimTM_BaliseGroupDataVTable, nRetValue);
    }
    return struct__3685_to_double(pValue, nRetValue);
}

int get_TM_BaliseGroupData_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3685_signature(pfnStrAppend, pData);
}

int set_TM_BaliseGroupData_default_value(void *pValue)
{
    return set_struct__3685_default_value(pValue);
}

int check_TM_BaliseGroupData_string(const char *str, char **endptr)
{
    static TM_BaliseGroupData rTemp;
    return string_to_TM_BaliseGroupData(str, &rTemp, endptr);
}

SimTypeUtils _Type_TM_BaliseGroupData_Utils = {
    TM_BaliseGroupData_to_string,
    check_TM_BaliseGroupData_string,
    string_to_TM_BaliseGroupData,
    is_TM_BaliseGroupData_double_convertion_allowed,
    TM_BaliseGroupData_to_double,
    compare_TM_BaliseGroupData,
    get_TM_BaliseGroupData_signature,
    set_TM_BaliseGroupData_default_value,
    sizeof(TM_BaliseGroupData)
};

/****************************************************************
 ** Q_UPDOWN 
 ****************************************************************/

struct SimTypeVTable *pSimQ_UPDOWNVTable;

static SimEnumValUtils Q_UPDOWN_values[] = {
    { "Q_UPDOWN_Down_link_telegram", Q_UPDOWN_Down_link_telegram},
    { "Q_UPDOWN_Down_link_telegram", Q_UPDOWN_Down_link_telegram},
    { "Q_UPDOWN_Up_link_telegram", Q_UPDOWN_Up_link_telegram},
    { "Q_UPDOWN_Up_link_telegram", Q_UPDOWN_Up_link_telegram},
};

int Q_UPDOWN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_UPDOWNVTable != NULL
        && pSimQ_UPDOWNVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_UPDOWNVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_UPDOWN*)pValue, Q_UPDOWN_values, 4, pfnStrAppend, pData);
}

int string_to_Q_UPDOWN(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_UPDOWNVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_UPDOWNVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_UPDOWN_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_UPDOWN*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_UPDOWN_double_convertion_allowed()
{
    if (pSimQ_UPDOWNVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_UPDOWNVTable);
    }
    return 1;
}

void compare_Q_UPDOWN(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_UPDOWNVTable != NULL
        && pSimQ_UPDOWNVTable->m_version >= Scv612
        && pSimQ_UPDOWNVTable->m_pfnCompare != NULL) {
        if (pSimQ_UPDOWNVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_UPDOWNVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_UPDOWNVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_UPDOWN*)pValue1), (int)(*(Q_UPDOWN*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_UPDOWN_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_UPDOWNVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_UPDOWNVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_UPDOWN*)pValue);
    return 1;
}

int get_Q_UPDOWN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_UPDOWN_values, 4, pfnStrAppend, pData);
}

int set_Q_UPDOWN_default_value(void *pValue)
{
    *(Q_UPDOWN*)pValue = Q_UPDOWN_Down_link_telegram;
    return 1;
}

int check_Q_UPDOWN_string(const char *str, char **endptr)
{
    static Q_UPDOWN rTemp;
    return string_to_Q_UPDOWN(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_UPDOWN_Utils = {
    Q_UPDOWN_to_string,
    check_Q_UPDOWN_string,
    string_to_Q_UPDOWN,
    is_Q_UPDOWN_double_convertion_allowed,
    Q_UPDOWN_to_double,
    compare_Q_UPDOWN,
    get_Q_UPDOWN_signature,
    set_Q_UPDOWN_default_value,
    sizeof(Q_UPDOWN)
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

int M_VERSION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_VERSIONVTable != NULL
        && pSimM_VERSIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_VERSIONVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_VERSION*)pValue, M_VERSION_values, 8, pfnStrAppend, pData);
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_VERSION_values, 8, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_VERSION*)pValue = nTemp;
    }
    return nRet;
}

int is_M_VERSION_double_convertion_allowed()
{
    if (pSimM_VERSIONVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_VERSIONVTable);
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
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_VERSIONVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
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

int get_M_VERSION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_VERSION_values, 8, pfnStrAppend, pData);
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
    is_M_VERSION_double_convertion_allowed,
    M_VERSION_to_double,
    compare_M_VERSION,
    get_M_VERSION_signature,
    set_M_VERSION_default_value,
    sizeof(M_VERSION)
};

/****************************************************************
 ** Q_MEDIA 
 ****************************************************************/

struct SimTypeVTable *pSimQ_MEDIAVTable;

static SimEnumValUtils Q_MEDIA_values[] = {
    { "Q_MEDIA_Balise", Q_MEDIA_Balise},
    { "Q_MEDIA_Balise", Q_MEDIA_Balise},
    { "Q_MEDIA_Loop", Q_MEDIA_Loop},
    { "Q_MEDIA_Loop", Q_MEDIA_Loop},
};

int Q_MEDIA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_MEDIAVTable != NULL
        && pSimQ_MEDIAVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_MEDIAVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_MEDIA*)pValue, Q_MEDIA_values, 4, pfnStrAppend, pData);
}

int string_to_Q_MEDIA(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_MEDIAVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_MEDIAVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_MEDIA_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_MEDIA*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_MEDIA_double_convertion_allowed()
{
    if (pSimQ_MEDIAVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_MEDIAVTable);
    }
    return 1;
}

void compare_Q_MEDIA(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_MEDIAVTable != NULL
        && pSimQ_MEDIAVTable->m_version >= Scv612
        && pSimQ_MEDIAVTable->m_pfnCompare != NULL) {
        if (pSimQ_MEDIAVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_MEDIAVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_MEDIAVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_MEDIA*)pValue1), (int)(*(Q_MEDIA*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_MEDIA_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_MEDIAVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_MEDIAVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_MEDIA*)pValue);
    return 1;
}

int get_Q_MEDIA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_MEDIA_values, 4, pfnStrAppend, pData);
}

int set_Q_MEDIA_default_value(void *pValue)
{
    *(Q_MEDIA*)pValue = Q_MEDIA_Balise;
    return 1;
}

int check_Q_MEDIA_string(const char *str, char **endptr)
{
    static Q_MEDIA rTemp;
    return string_to_Q_MEDIA(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_MEDIA_Utils = {
    Q_MEDIA_to_string,
    check_Q_MEDIA_string,
    string_to_Q_MEDIA,
    is_Q_MEDIA_double_convertion_allowed,
    Q_MEDIA_to_double,
    compare_Q_MEDIA,
    get_Q_MEDIA_signature,
    set_Q_MEDIA_default_value,
    sizeof(Q_MEDIA)
};

/****************************************************************
 ** N_PIG 
 ****************************************************************/

struct SimTypeVTable *pSimN_PIGVTable;

static SimEnumValUtils N_PIG_values[] = {
    { "N_PIG_I_am_the_1st", N_PIG_I_am_the_1st},
    { "N_PIG_I_am_the_1st", N_PIG_I_am_the_1st},
    { "N_PIG_I_am_the_2nd", N_PIG_I_am_the_2nd},
    { "N_PIG_I_am_the_2nd", N_PIG_I_am_the_2nd},
    { "N_PIG_I_am_the_3rd", N_PIG_I_am_the_3rd},
    { "N_PIG_I_am_the_3rd", N_PIG_I_am_the_3rd},
    { "N_PIG_I_am_the_4th", N_PIG_I_am_the_4th},
    { "N_PIG_I_am_the_4th", N_PIG_I_am_the_4th},
    { "N_PIG_I_am_the_5th", N_PIG_I_am_the_5th},
    { "N_PIG_I_am_the_5th", N_PIG_I_am_the_5th},
    { "N_PIG_I_am_the_6th", N_PIG_I_am_the_6th},
    { "N_PIG_I_am_the_6th", N_PIG_I_am_the_6th},
    { "N_PIG_I_am_the_7th", N_PIG_I_am_the_7th},
    { "N_PIG_I_am_the_7th", N_PIG_I_am_the_7th},
    { "N_PIG_I_am_the_8th", N_PIG_I_am_the_8th},
    { "N_PIG_I_am_the_8th", N_PIG_I_am_the_8th},
};

int N_PIG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimN_PIGVTable != NULL
        && pSimN_PIGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimN_PIGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(N_PIG*)pValue, N_PIG_values, 16, pfnStrAppend, pData);
}

int string_to_N_PIG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimN_PIGVTable != NULL) {
        nRet=string_to_VTable(str, pSimN_PIGVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, N_PIG_values, 16, endptr);
        if (pValue != NULL && nRet != 0)
            *(N_PIG*)pValue = nTemp;
    }
    return nRet;
}

int is_N_PIG_double_convertion_allowed()
{
    if (pSimN_PIGVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimN_PIGVTable);
    }
    return 1;
}

void compare_N_PIG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimN_PIGVTable != NULL
        && pSimN_PIGVTable->m_version >= Scv612
        && pSimN_PIGVTable->m_pfnCompare != NULL) {
        if (pSimN_PIGVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimN_PIGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimN_PIGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(N_PIG*)pValue1), (int)(*(N_PIG*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int N_PIG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimN_PIGVTable != NULL) {
        return VTable_to_double(pValue, pSimN_PIGVTable, nRetValue);
    }
    *nRetValue = (double)*((N_PIG*)pValue);
    return 1;
}

int get_N_PIG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(N_PIG_values, 16, pfnStrAppend, pData);
}

int set_N_PIG_default_value(void *pValue)
{
    *(N_PIG*)pValue = N_PIG_I_am_the_1st;
    return 1;
}

int check_N_PIG_string(const char *str, char **endptr)
{
    static N_PIG rTemp;
    return string_to_N_PIG(str, &rTemp, endptr);
}

SimTypeUtils _Type_N_PIG_Utils = {
    N_PIG_to_string,
    check_N_PIG_string,
    string_to_N_PIG,
    is_N_PIG_double_convertion_allowed,
    N_PIG_to_double,
    compare_N_PIG,
    get_N_PIG_signature,
    set_N_PIG_default_value,
    sizeof(N_PIG)
};

/****************************************************************
 ** N_TOTAL 
 ****************************************************************/

struct SimTypeVTable *pSimN_TOTALVTable;

static SimEnumValUtils N_TOTAL_values[] = {
    { "N_TOTAL_1_balise_in_the_group", N_TOTAL_1_balise_in_the_group},
    { "N_TOTAL_1_balise_in_the_group", N_TOTAL_1_balise_in_the_group},
    { "N_TOTAL_2_balises_in_the_group", N_TOTAL_2_balises_in_the_group},
    { "N_TOTAL_2_balises_in_the_group", N_TOTAL_2_balises_in_the_group},
    { "N_TOTAL_3_balises_in_the_group", N_TOTAL_3_balises_in_the_group},
    { "N_TOTAL_3_balises_in_the_group", N_TOTAL_3_balises_in_the_group},
    { "N_TOTAL_4_balises_in_the_group", N_TOTAL_4_balises_in_the_group},
    { "N_TOTAL_4_balises_in_the_group", N_TOTAL_4_balises_in_the_group},
    { "N_TOTAL_5_balises_in_the_group", N_TOTAL_5_balises_in_the_group},
    { "N_TOTAL_5_balises_in_the_group", N_TOTAL_5_balises_in_the_group},
    { "N_TOTAL_6_balises_in_the_group", N_TOTAL_6_balises_in_the_group},
    { "N_TOTAL_6_balises_in_the_group", N_TOTAL_6_balises_in_the_group},
    { "N_TOTAL_7_balises_in_the_group", N_TOTAL_7_balises_in_the_group},
    { "N_TOTAL_7_balises_in_the_group", N_TOTAL_7_balises_in_the_group},
    { "N_TOTAL_8_balises_in_the_group", N_TOTAL_8_balises_in_the_group},
    { "N_TOTAL_8_balises_in_the_group", N_TOTAL_8_balises_in_the_group},
};

int N_TOTAL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimN_TOTALVTable != NULL
        && pSimN_TOTALVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimN_TOTALVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(N_TOTAL*)pValue, N_TOTAL_values, 16, pfnStrAppend, pData);
}

int string_to_N_TOTAL(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimN_TOTALVTable != NULL) {
        nRet=string_to_VTable(str, pSimN_TOTALVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, N_TOTAL_values, 16, endptr);
        if (pValue != NULL && nRet != 0)
            *(N_TOTAL*)pValue = nTemp;
    }
    return nRet;
}

int is_N_TOTAL_double_convertion_allowed()
{
    if (pSimN_TOTALVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimN_TOTALVTable);
    }
    return 1;
}

void compare_N_TOTAL(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimN_TOTALVTable != NULL
        && pSimN_TOTALVTable->m_version >= Scv612
        && pSimN_TOTALVTable->m_pfnCompare != NULL) {
        if (pSimN_TOTALVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimN_TOTALVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimN_TOTALVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(N_TOTAL*)pValue1), (int)(*(N_TOTAL*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int N_TOTAL_to_double(const void *pValue, double *nRetValue)
{
    if (pSimN_TOTALVTable != NULL) {
        return VTable_to_double(pValue, pSimN_TOTALVTable, nRetValue);
    }
    *nRetValue = (double)*((N_TOTAL*)pValue);
    return 1;
}

int get_N_TOTAL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(N_TOTAL_values, 16, pfnStrAppend, pData);
}

int set_N_TOTAL_default_value(void *pValue)
{
    *(N_TOTAL*)pValue = N_TOTAL_1_balise_in_the_group;
    return 1;
}

int check_N_TOTAL_string(const char *str, char **endptr)
{
    static N_TOTAL rTemp;
    return string_to_N_TOTAL(str, &rTemp, endptr);
}

SimTypeUtils _Type_N_TOTAL_Utils = {
    N_TOTAL_to_string,
    check_N_TOTAL_string,
    string_to_N_TOTAL,
    is_N_TOTAL_double_convertion_allowed,
    N_TOTAL_to_double,
    compare_N_TOTAL,
    get_N_TOTAL_signature,
    set_N_TOTAL_default_value,
    sizeof(N_TOTAL)
};

/****************************************************************
 ** M_DUP 
 ****************************************************************/

struct SimTypeVTable *pSimM_DUPVTable;

static SimEnumValUtils M_DUP_values[] = {
    { "M_DUP_No_duplicates", M_DUP_No_duplicates},
    { "M_DUP_No_duplicates", M_DUP_No_duplicates},
    { "M_DUP_This_balise_is_a_duplicate_of_the_next_balise", _1_M_DUP_This_balise_is_a_duplicate_of_the_next_balise},
    { "M_DUP_This_balise_is_a_duplicate_of_the_next_balise", _1_M_DUP_This_balise_is_a_duplicate_of_the_next_balise},
    { "M_DUP_This_balise_is_a_duplicate_of_the_previous_balise", M_DUP_This_balise_is_a_duplicate_of_the_previous_balise},
    { "M_DUP_This_balise_is_a_duplicate_of_the_previous_balise", M_DUP_This_balise_is_a_duplicate_of_the_previous_balise},
};

int M_DUP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_DUPVTable != NULL
        && pSimM_DUPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_DUPVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_DUP*)pValue, M_DUP_values, 6, pfnStrAppend, pData);
}

int string_to_M_DUP(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_DUPVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_DUPVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_DUP_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_DUP*)pValue = nTemp;
    }
    return nRet;
}

int is_M_DUP_double_convertion_allowed()
{
    if (pSimM_DUPVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_DUPVTable);
    }
    return 1;
}

void compare_M_DUP(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_DUPVTable != NULL
        && pSimM_DUPVTable->m_version >= Scv612
        && pSimM_DUPVTable->m_pfnCompare != NULL) {
        if (pSimM_DUPVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_DUPVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_DUPVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_DUP*)pValue1), (int)(*(M_DUP*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_DUP_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_DUPVTable != NULL) {
        return VTable_to_double(pValue, pSimM_DUPVTable, nRetValue);
    }
    *nRetValue = (double)*((M_DUP*)pValue);
    return 1;
}

int get_M_DUP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_DUP_values, 6, pfnStrAppend, pData);
}

int set_M_DUP_default_value(void *pValue)
{
    *(M_DUP*)pValue = M_DUP_No_duplicates;
    return 1;
}

int check_M_DUP_string(const char *str, char **endptr)
{
    static M_DUP rTemp;
    return string_to_M_DUP(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_DUP_Utils = {
    M_DUP_to_string,
    check_M_DUP_string,
    string_to_M_DUP,
    is_M_DUP_double_convertion_allowed,
    M_DUP_to_double,
    compare_M_DUP,
    get_M_DUP_signature,
    set_M_DUP_default_value,
    sizeof(M_DUP)
};

/****************************************************************
 ** M_MCOUNT 
 ****************************************************************/

struct SimTypeVTable *pSimM_MCOUNTVTable;

int M_MCOUNT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_MCOUNTVTable != NULL
        && pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_MCOUNTVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_M_MCOUNT(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_MCOUNTVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_MCOUNTVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_M_MCOUNT_double_convertion_allowed()
{
    if (pSimM_MCOUNTVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_MCOUNTVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_M_MCOUNT(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_MCOUNTVTable != NULL
        && pSimM_MCOUNTVTable->m_version >= Scv612
        && pSimM_MCOUNTVTable->m_pfnCompare != NULL) {
        if (pSimM_MCOUNTVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_MCOUNTVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_MCOUNTVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_MCOUNT_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_MCOUNTVTable != NULL) {
        return VTable_to_double(pValue, pSimM_MCOUNTVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_M_MCOUNT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_M_MCOUNT_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_M_MCOUNT_string(const char *str, char **endptr)
{
    static M_MCOUNT rTemp;
    return string_to_M_MCOUNT(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_MCOUNT_Utils = {
    M_MCOUNT_to_string,
    check_M_MCOUNT_string,
    string_to_M_MCOUNT,
    is_M_MCOUNT_double_convertion_allowed,
    M_MCOUNT_to_double,
    compare_M_MCOUNT,
    get_M_MCOUNT_signature,
    set_M_MCOUNT_default_value,
    sizeof(M_MCOUNT)
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
 ** Q_LINK 
 ****************************************************************/

struct SimTypeVTable *pSimQ_LINKVTable;

static SimEnumValUtils Q_LINK_values[] = {
    { "Q_LINK_Unlinked", Q_LINK_Unlinked},
    { "Q_LINK_Unlinked", Q_LINK_Unlinked},
    { "Q_LINK_Linked", Q_LINK_Linked},
    { "Q_LINK_Linked", Q_LINK_Linked},
};

int Q_LINK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_LINKVTable != NULL
        && pSimQ_LINKVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_LINKVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_LINK*)pValue, Q_LINK_values, 4, pfnStrAppend, pData);
}

int string_to_Q_LINK(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_LINKVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_LINKVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_LINK_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_LINK*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_LINK_double_convertion_allowed()
{
    if (pSimQ_LINKVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_LINKVTable);
    }
    return 1;
}

void compare_Q_LINK(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_LINKVTable != NULL
        && pSimQ_LINKVTable->m_version >= Scv612
        && pSimQ_LINKVTable->m_pfnCompare != NULL) {
        if (pSimQ_LINKVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_LINKVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_LINKVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_LINK*)pValue1), (int)(*(Q_LINK*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_LINK_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_LINKVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_LINKVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_LINK*)pValue);
    return 1;
}

int get_Q_LINK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_LINK_values, 4, pfnStrAppend, pData);
}

int set_Q_LINK_default_value(void *pValue)
{
    *(Q_LINK*)pValue = Q_LINK_Unlinked;
    return 1;
}

int check_Q_LINK_string(const char *str, char **endptr)
{
    static Q_LINK rTemp;
    return string_to_Q_LINK(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_LINK_Utils = {
    Q_LINK_to_string,
    check_Q_LINK_string,
    string_to_Q_LINK,
    is_Q_LINK_double_convertion_allowed,
    Q_LINK_to_double,
    compare_Q_LINK,
    get_Q_LINK_signature,
    set_Q_LINK_default_value,
    sizeof(Q_LINK)
};

/****************************************************************
 ** B_data_internal_FirstTest_InfraLib 
 ****************************************************************/

struct SimTypeVTable *pSimB_data_internal_FirstTest_InfraLibVTable;

int B_data_internal_FirstTest_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimB_data_internal_FirstTest_InfraLibVTable != NULL
        && pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__3706_to_string(pValue, pfnStrAppend, pData);
}

int string_to_B_data_internal_FirstTest_InfraLib(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimB_data_internal_FirstTest_InfraLibVTable != NULL) {
        nRet=string_to_VTable(str, pSimB_data_internal_FirstTest_InfraLibVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3706(str, pValue, endptr);
    }
    return nRet;
}

int is_B_data_internal_FirstTest_InfraLib_double_convertion_allowed()
{
    if (pSimB_data_internal_FirstTest_InfraLibVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimB_data_internal_FirstTest_InfraLibVTable);
    }
    return is_struct__3706_double_convertion_allowed();
}

void compare_B_data_internal_FirstTest_InfraLib(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimB_data_internal_FirstTest_InfraLibVTable != NULL
        && pSimB_data_internal_FirstTest_InfraLibVTable->m_version >= Scv612
        && pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnCompare != NULL) {
        if (pSimB_data_internal_FirstTest_InfraLibVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimB_data_internal_FirstTest_InfraLibVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__3706(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int B_data_internal_FirstTest_InfraLib_to_double(const void *pValue, double *nRetValue)
{
    if (pSimB_data_internal_FirstTest_InfraLibVTable != NULL) {
        return VTable_to_double(pValue, pSimB_data_internal_FirstTest_InfraLibVTable, nRetValue);
    }
    return struct__3706_to_double(pValue, nRetValue);
}

int get_B_data_internal_FirstTest_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3706_signature(pfnStrAppend, pData);
}

int set_B_data_internal_FirstTest_InfraLib_default_value(void *pValue)
{
    return set_struct__3706_default_value(pValue);
}

int check_B_data_internal_FirstTest_InfraLib_string(const char *str, char **endptr)
{
    static B_data_internal_FirstTest_InfraLib rTemp;
    return string_to_B_data_internal_FirstTest_InfraLib(str, &rTemp, endptr);
}

SimTypeUtils _Type_B_data_internal_FirstTest_InfraLib_Utils = {
    B_data_internal_FirstTest_InfraLib_to_string,
    check_B_data_internal_FirstTest_InfraLib_string,
    string_to_B_data_internal_FirstTest_InfraLib,
    is_B_data_internal_FirstTest_InfraLib_double_convertion_allowed,
    B_data_internal_FirstTest_InfraLib_to_double,
    compare_B_data_internal_FirstTest_InfraLib,
    get_B_data_internal_FirstTest_InfraLib_signature,
    set_B_data_internal_FirstTest_InfraLib_default_value,
    sizeof(B_data_internal_FirstTest_InfraLib)
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
    return struct__3680_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3680(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedPackets_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__3680_double_convertion_allowed();
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
        compare_struct__3680(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__3680_to_double(pValue, nRetValue);
}

int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3680_signature(pfnStrAppend, pData);
}

int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__3680_default_value(pValue);
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
    return array__3677_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__3677(str, pValue, endptr);
    }
    return nRet;
}

int is_Metadata_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__3677_double_convertion_allowed();
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
        compare_array__3677(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__3677_to_double(pValue, nRetValue);
}

int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__3677_signature(pfnStrAppend, pData);
}

int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_array__3677_default_value(pValue);
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
    return struct__3669_to_string(pValue, pfnStrAppend, pData);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3669(str, pValue, endptr);
    }
    return nRet;
}

int is_MetadataElement_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__3669_double_convertion_allowed();
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
        compare_struct__3669(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__3669_to_double(pValue, nRetValue);
}

int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3669_signature(pfnStrAppend, pData);
}

int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__3669_default_value(pValue);
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
 ** BaliseGroupData_Basics 
 ****************************************************************/

struct SimTypeVTable *pSimBaliseGroupData_BasicsVTable;

int BaliseGroupData_Basics_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBaliseGroupData_BasicsVTable != NULL
        && pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__3685_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BaliseGroupData_Basics(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        nRet=string_to_VTable(str, pSimBaliseGroupData_BasicsVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3685(str, pValue, endptr);
    }
    return nRet;
}

int is_BaliseGroupData_Basics_double_convertion_allowed()
{
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBaliseGroupData_BasicsVTable);
    }
    return is_struct__3685_double_convertion_allowed();
}

void compare_BaliseGroupData_Basics(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBaliseGroupData_BasicsVTable != NULL
        && pSimBaliseGroupData_BasicsVTable->m_version >= Scv612
        && pSimBaliseGroupData_BasicsVTable->m_pfnCompare != NULL) {
        if (pSimBaliseGroupData_BasicsVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBaliseGroupData_BasicsVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBaliseGroupData_BasicsVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__3685(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BaliseGroupData_Basics_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        return VTable_to_double(pValue, pSimBaliseGroupData_BasicsVTable, nRetValue);
    }
    return struct__3685_to_double(pValue, nRetValue);
}

int get_BaliseGroupData_Basics_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3685_signature(pfnStrAppend, pData);
}

int set_BaliseGroupData_Basics_default_value(void *pValue)
{
    return set_struct__3685_default_value(pValue);
}

int check_BaliseGroupData_Basics_string(const char *str, char **endptr)
{
    static BaliseGroupData_Basics rTemp;
    return string_to_BaliseGroupData_Basics(str, &rTemp, endptr);
}

SimTypeUtils _Type_BaliseGroupData_Basics_Utils = {
    BaliseGroupData_Basics_to_string,
    check_BaliseGroupData_Basics_string,
    string_to_BaliseGroupData_Basics,
    is_BaliseGroupData_Basics_double_convertion_allowed,
    BaliseGroupData_Basics_to_double,
    compare_BaliseGroupData_Basics,
    get_BaliseGroupData_Basics_signature,
    set_BaliseGroupData_Basics_default_value,
    sizeof(BaliseGroupData_Basics)
};

/****************************************************************
 ** TelegramHeader_T_BG_Types_Pkg 
 ****************************************************************/

struct SimTypeVTable *pSimTelegramHeader_T_BG_Types_PkgVTable;

int TelegramHeader_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL
        && pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__3653_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TelegramHeader_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimTelegramHeader_T_BG_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__3653(str, pValue, endptr);
    }
    return nRet;
}

int is_TelegramHeader_T_BG_Types_Pkg_double_convertion_allowed()
{
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTelegramHeader_T_BG_Types_PkgVTable);
    }
    return is_struct__3653_double_convertion_allowed();
}

void compare_TelegramHeader_T_BG_Types_Pkg(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL
        && pSimTelegramHeader_T_BG_Types_PkgVTable->m_version >= Scv612
        && pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnCompare != NULL) {
        if (pSimTelegramHeader_T_BG_Types_PkgVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__3653(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TelegramHeader_T_BG_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTelegramHeader_T_BG_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimTelegramHeader_T_BG_Types_PkgVTable, nRetValue);
    }
    return struct__3653_to_double(pValue, nRetValue);
}

int get_TelegramHeader_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__3653_signature(pfnStrAppend, pData);
}

int set_TelegramHeader_T_BG_Types_Pkg_default_value(void *pValue)
{
    return set_struct__3653_default_value(pValue);
}

int check_TelegramHeader_T_BG_Types_Pkg_string(const char *str, char **endptr)
{
    static TelegramHeader_T_BG_Types_Pkg rTemp;
    return string_to_TelegramHeader_T_BG_Types_Pkg(str, &rTemp, endptr);
}

SimTypeUtils _Type_TelegramHeader_T_BG_Types_Pkg_Utils = {
    TelegramHeader_T_BG_Types_Pkg_to_string,
    check_TelegramHeader_T_BG_Types_Pkg_string,
    string_to_TelegramHeader_T_BG_Types_Pkg,
    is_TelegramHeader_T_BG_Types_Pkg_double_convertion_allowed,
    TelegramHeader_T_BG_Types_Pkg_to_double,
    compare_TelegramHeader_T_BG_Types_Pkg,
    get_TelegramHeader_T_BG_Types_Pkg_signature,
    set_TelegramHeader_T_BG_Types_Pkg_default_value,
    sizeof(TelegramHeader_T_BG_Types_Pkg)
};

#include "C:/Program Files/Esterel Technologies/SCADE R15.2/SCADE/lib/kcg_conv.c"
