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
 ** struct__1341 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1341VTable;

static SimFieldUtils struct__1341_fields[] = {
    {"TrainPos_in", offsetof(struct__1341,TrainPos_in), &_Type_kcg_real_Utils},
    {"OffsetTotal", offsetof(struct__1341,OffsetTotal), &_Type_kcg_int_Utils},
    {"TrainPosCalibrated", offsetof(struct__1341,TrainPosCalibrated), &_Type_kcg_real_Utils},
};

int struct__1341_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1341VTable != NULL
        && pSimstruct__1341VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1341VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1341_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__1341(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1341VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1341VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1341_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__1341_double_convertion_allowed()
{
    if (pSimstruct__1341VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1341VTable);
    }
    return 0;
}

void compare_struct__1341(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1341VTable != NULL
        && pSimstruct__1341VTable->m_version >= Scv612
        && pSimstruct__1341VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1341VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1341VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1341VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1341_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1341_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1341VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1341VTable, nRetValue);
    }
    return 0;
}

int get_struct__1341_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1341_fields, 3, pfnStrAppend, pData);
}

int set_struct__1341_default_value(void *pValue)
{
    set_kcg_real_default_value(&(((struct__1341*)pValue)->TrainPos_in));
    set_kcg_int_default_value(&(((struct__1341*)pValue)->OffsetTotal));
    set_kcg_real_default_value(&(((struct__1341*)pValue)->TrainPosCalibrated));
    return 1;
}

int check_struct__1341_string(const char *str, char **endptr)
{
    static struct__1341 rTemp;
    return string_to_struct__1341(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1341_Utils = {
    struct__1341_to_string,
    check_struct__1341_string,
    string_to_struct__1341,
    is_struct__1341_double_convertion_allowed,
    struct__1341_to_double,
    compare_struct__1341,
    get_struct__1341_signature,
    set_struct__1341_default_value,
    sizeof(struct__1341)
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
 ** struct__1350 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1350VTable;

static SimFieldUtils struct__1350_fields[] = {
    {"nid_packet", offsetof(struct__1350,nid_packet), &_Type_kcg_int_Utils},
    {"q_dir", offsetof(struct__1350,q_dir), &_Type_Q_DIR_Utils},
    {"valid", offsetof(struct__1350,valid), &_Type_kcg_bool_Utils},
    {"startAddress", offsetof(struct__1350,startAddress), &_Type_kcg_int_Utils},
    {"endAddress", offsetof(struct__1350,endAddress), &_Type_kcg_int_Utils},
};

int struct__1350_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1350VTable != NULL
        && pSimstruct__1350VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1350VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1350_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__1350(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1350VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1350VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1350_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__1350_double_convertion_allowed()
{
    if (pSimstruct__1350VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1350VTable);
    }
    return 0;
}

void compare_struct__1350(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1350VTable != NULL
        && pSimstruct__1350VTable->m_version >= Scv612
        && pSimstruct__1350VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1350VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1350VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1350VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1350_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1350_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1350VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1350VTable, nRetValue);
    }
    return 0;
}

int get_struct__1350_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1350_fields, 5, pfnStrAppend, pData);
}

int set_struct__1350_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__1350*)pValue)->nid_packet));
    set_Q_DIR_default_value(&(((struct__1350*)pValue)->q_dir));
    set_kcg_bool_default_value(&(((struct__1350*)pValue)->valid));
    set_kcg_int_default_value(&(((struct__1350*)pValue)->startAddress));
    set_kcg_int_default_value(&(((struct__1350*)pValue)->endAddress));
    return 1;
}

int check_struct__1350_string(const char *str, char **endptr)
{
    static struct__1350 rTemp;
    return string_to_struct__1350(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1350_Utils = {
    struct__1350_to_string,
    check_struct__1350_string,
    string_to_struct__1350,
    is_struct__1350_double_convertion_allowed,
    struct__1350_to_double,
    compare_struct__1350,
    get_struct__1350_signature,
    set_struct__1350_default_value,
    sizeof(struct__1350)
};

/****************************************************************
 ** array__1358 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1358VTable;

int array__1358_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1358VTable != NULL
        && pSimarray__1358VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1358VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__1350_to_string, 30, sizeof(struct__1350), pfnStrAppend, pData);
}

int string_to_array__1358(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1358VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1358VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__1350_Utils, 30, sizeof(struct__1350), endptr);
    }
    return nRet;
}

int is_array__1358_double_convertion_allowed()
{
    if (pSimarray__1358VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__1358VTable);
    }
    return 0;
}

void compare_array__1358(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1358VTable != NULL
        && pSimarray__1358VTable->m_version >= Scv612
        && pSimarray__1358VTable->m_pfnCompare != NULL) {
        if (pSimarray__1358VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1358VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1358VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__1350, 30, sizeof(struct__1350), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1358_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1358VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1358VTable, nRetValue);
    }
    return 0;
}

int get_array__1358_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 30; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__1350_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1358_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 30; i++)
        set_struct__1350_default_value(&((struct__1350*)pValue)[i]);
    return 1;
}

int check_array__1358_string(const char *str, char **endptr)
{
    static array__1358 rTemp;
    return string_to_array__1358(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1358_Utils = {
    array__1358_to_string,
    check_array__1358_string,
    string_to_array__1358,
    is_array__1358_double_convertion_allowed,
    array__1358_to_double,
    compare_array__1358,
    get_array__1358_signature,
    set_array__1358_default_value,
    sizeof(array__1358)
};

/****************************************************************
 ** struct__1361 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1361VTable;

static SimFieldUtils struct__1361_fields[] = {
    {"PacketHeaders", offsetof(struct__1361,PacketHeaders), &_Type_array__1358_Utils},
    {"PacketData", offsetof(struct__1361,PacketData), &_Type_array_int_500_Utils},
};

int struct__1361_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1361VTable != NULL
        && pSimstruct__1361VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1361VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1361_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__1361(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1361VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1361VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1361_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__1361_double_convertion_allowed()
{
    if (pSimstruct__1361VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1361VTable);
    }
    return 0;
}

void compare_struct__1361(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1361VTable != NULL
        && pSimstruct__1361VTable->m_version >= Scv612
        && pSimstruct__1361VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1361VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1361VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1361VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1361_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1361_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1361VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1361VTable, nRetValue);
    }
    return 0;
}

int get_struct__1361_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1361_fields, 2, pfnStrAppend, pData);
}

int set_struct__1361_default_value(void *pValue)
{
    set_array__1358_default_value(&(((struct__1361*)pValue)->PacketHeaders));
    set_array_int_500_default_value(&(((struct__1361*)pValue)->PacketData));
    return 1;
}

int check_struct__1361_string(const char *str, char **endptr)
{
    static struct__1361 rTemp;
    return string_to_struct__1361(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1361_Utils = {
    struct__1361_to_string,
    check_struct__1361_string,
    string_to_struct__1361,
    is_struct__1361_double_convertion_allowed,
    struct__1361_to_double,
    compare_struct__1361,
    get_struct__1361_signature,
    set_struct__1361_default_value,
    sizeof(struct__1361)
};

/****************************************************************
 ** struct__1366 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1366VTable;

static SimFieldUtils struct__1366_fields[] = {
    {"q_updown", offsetof(struct__1366,q_updown), &_Type_kcg_int_Utils},
    {"m_version", offsetof(struct__1366,m_version), &_Type_kcg_int_Utils},
    {"q_media", offsetof(struct__1366,q_media), &_Type_kcg_int_Utils},
    {"n_pig", offsetof(struct__1366,n_pig), &_Type_kcg_int_Utils},
    {"n_total", offsetof(struct__1366,n_total), &_Type_kcg_int_Utils},
    {"m_dup", offsetof(struct__1366,m_dup), &_Type_kcg_int_Utils},
    {"m_mcount", offsetof(struct__1366,m_mcount), &_Type_kcg_int_Utils},
    {"nid_c", offsetof(struct__1366,nid_c), &_Type_kcg_int_Utils},
    {"nid_bg", offsetof(struct__1366,nid_bg), &_Type_kcg_int_Utils},
    {"q_link", offsetof(struct__1366,q_link), &_Type_kcg_int_Utils},
};

int struct__1366_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1366VTable != NULL
        && pSimstruct__1366VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1366VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1366_fields, 10, pfnStrAppend, pData);
}

int string_to_struct__1366(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1366VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1366VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1366_fields, 10, endptr);
    }
    return nRet;
}

int is_struct__1366_double_convertion_allowed()
{
    if (pSimstruct__1366VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1366VTable);
    }
    return 0;
}

void compare_struct__1366(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1366VTable != NULL
        && pSimstruct__1366VTable->m_version >= Scv612
        && pSimstruct__1366VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1366VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1366VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1366VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1366_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1366_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1366VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1366VTable, nRetValue);
    }
    return 0;
}

int get_struct__1366_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1366_fields, 10, pfnStrAppend, pData);
}

int set_struct__1366_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__1366*)pValue)->q_updown));
    set_kcg_int_default_value(&(((struct__1366*)pValue)->m_version));
    set_kcg_int_default_value(&(((struct__1366*)pValue)->q_media));
    set_kcg_int_default_value(&(((struct__1366*)pValue)->n_pig));
    set_kcg_int_default_value(&(((struct__1366*)pValue)->n_total));
    set_kcg_int_default_value(&(((struct__1366*)pValue)->m_dup));
    set_kcg_int_default_value(&(((struct__1366*)pValue)->m_mcount));
    set_kcg_int_default_value(&(((struct__1366*)pValue)->nid_c));
    set_kcg_int_default_value(&(((struct__1366*)pValue)->nid_bg));
    set_kcg_int_default_value(&(((struct__1366*)pValue)->q_link));
    return 1;
}

int check_struct__1366_string(const char *str, char **endptr)
{
    static struct__1366 rTemp;
    return string_to_struct__1366(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1366_Utils = {
    struct__1366_to_string,
    check_struct__1366_string,
    string_to_struct__1366,
    is_struct__1366_double_convertion_allowed,
    struct__1366_to_double,
    compare_struct__1366,
    get_struct__1366_signature,
    set_struct__1366_default_value,
    sizeof(struct__1366)
};

/****************************************************************
 ** struct__1379 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1379VTable;

static SimFieldUtils struct__1379_fields[] = {
    {"Header", offsetof(struct__1379,Header), &_Type_struct__1366_Utils},
    {"Messages", offsetof(struct__1379,Messages), &_Type_struct__1361_Utils},
};

int struct__1379_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1379VTable != NULL
        && pSimstruct__1379VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1379VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1379_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__1379(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1379VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1379VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1379_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__1379_double_convertion_allowed()
{
    if (pSimstruct__1379VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1379VTable);
    }
    return 0;
}

void compare_struct__1379(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1379VTable != NULL
        && pSimstruct__1379VTable->m_version >= Scv612
        && pSimstruct__1379VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1379VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1379VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1379VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1379_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1379_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1379VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1379VTable, nRetValue);
    }
    return 0;
}

int get_struct__1379_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1379_fields, 2, pfnStrAppend, pData);
}

int set_struct__1379_default_value(void *pValue)
{
    set_struct__1366_default_value(&(((struct__1379*)pValue)->Header));
    set_struct__1361_default_value(&(((struct__1379*)pValue)->Messages));
    return 1;
}

int check_struct__1379_string(const char *str, char **endptr)
{
    static struct__1379 rTemp;
    return string_to_struct__1379(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1379_Utils = {
    struct__1379_to_string,
    check_struct__1379_string,
    string_to_struct__1379,
    is_struct__1379_double_convertion_allowed,
    struct__1379_to_double,
    compare_struct__1379,
    get_struct__1379_signature,
    set_struct__1379_default_value,
    sizeof(struct__1379)
};

/****************************************************************
 ** struct__1384 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1384VTable;

static SimFieldUtils struct__1384_fields[] = {
    {"TrainPosRaw", offsetof(struct__1384,TrainPosRaw), &_Type_struct__1341_Utils},
    {"BG_Message", offsetof(struct__1384,BG_Message), &_Type_struct__1379_Utils},
};

int struct__1384_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1384VTable != NULL
        && pSimstruct__1384VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1384VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1384_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__1384(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1384VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1384VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1384_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__1384_double_convertion_allowed()
{
    if (pSimstruct__1384VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1384VTable);
    }
    return 0;
}

void compare_struct__1384(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1384VTable != NULL
        && pSimstruct__1384VTable->m_version >= Scv612
        && pSimstruct__1384VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1384VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1384VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1384VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1384_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1384_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1384VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1384VTable, nRetValue);
    }
    return 0;
}

int get_struct__1384_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1384_fields, 2, pfnStrAppend, pData);
}

int set_struct__1384_default_value(void *pValue)
{
    set_struct__1341_default_value(&(((struct__1384*)pValue)->TrainPosRaw));
    set_struct__1379_default_value(&(((struct__1384*)pValue)->BG_Message));
    return 1;
}

int check_struct__1384_string(const char *str, char **endptr)
{
    static struct__1384 rTemp;
    return string_to_struct__1384(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1384_Utils = {
    struct__1384_to_string,
    check_struct__1384_string,
    string_to_struct__1384,
    is_struct__1384_double_convertion_allowed,
    struct__1384_to_double,
    compare_struct__1384,
    get_struct__1384_signature,
    set_struct__1384_default_value,
    sizeof(struct__1384)
};

/****************************************************************
 ** struct__1389 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1389VTable;

static SimFieldUtils struct__1389_fields[] = {
    {"NID_C", offsetof(struct__1389,NID_C), &_Type_kcg_int_Utils},
    {"NID_BG", offsetof(struct__1389,NID_BG), &_Type_kcg_int_Utils},
    {"Pos", offsetof(struct__1389,Pos), &_Type_kcg_int_Utils},
    {"Or_BG", offsetof(struct__1389,Or_BG), &_Type_OrBG_TM_Utils},
    {"Or_Line", offsetof(struct__1389,Or_Line), &_Type_OrLine_TM_Utils},
};

int struct__1389_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1389VTable != NULL
        && pSimstruct__1389VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1389VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1389_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__1389(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1389VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1389VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1389_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__1389_double_convertion_allowed()
{
    if (pSimstruct__1389VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1389VTable);
    }
    return 0;
}

void compare_struct__1389(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1389VTable != NULL
        && pSimstruct__1389VTable->m_version >= Scv612
        && pSimstruct__1389VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1389VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1389VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1389VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1389_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1389_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1389VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1389VTable, nRetValue);
    }
    return 0;
}

int get_struct__1389_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1389_fields, 5, pfnStrAppend, pData);
}

int set_struct__1389_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__1389*)pValue)->NID_C));
    set_kcg_int_default_value(&(((struct__1389*)pValue)->NID_BG));
    set_kcg_int_default_value(&(((struct__1389*)pValue)->Pos));
    set_OrBG_TM_default_value(&(((struct__1389*)pValue)->Or_BG));
    set_OrLine_TM_default_value(&(((struct__1389*)pValue)->Or_Line));
    return 1;
}

int check_struct__1389_string(const char *str, char **endptr)
{
    static struct__1389 rTemp;
    return string_to_struct__1389(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1389_Utils = {
    struct__1389_to_string,
    check_struct__1389_string,
    string_to_struct__1389,
    is_struct__1389_double_convertion_allowed,
    struct__1389_to_double,
    compare_struct__1389,
    get_struct__1389_signature,
    set_struct__1389_default_value,
    sizeof(struct__1389)
};

/****************************************************************
 ** struct__1397 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1397VTable;

static SimFieldUtils struct__1397_fields[] = {
    {"header", offsetof(struct__1397,header), &_Type_struct__1366_Utils},
    {"packets", offsetof(struct__1397,packets), &_Type_struct__1361_Utils},
    {"engineering_BG_location", offsetof(struct__1397,engineering_BG_location), &_Type_kcg_int_Utils},
    {"TrainPos", offsetof(struct__1397,TrainPos), &_Type_kcg_real_Utils},
    {"pig_nom_0", offsetof(struct__1397,pig_nom_0), &_Type_kcg_int_Utils},
    {"balise_passed", offsetof(struct__1397,balise_passed), &_Type_kcg_bool_Utils},
};

int struct__1397_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1397VTable != NULL
        && pSimstruct__1397VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1397VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1397_fields, 6, pfnStrAppend, pData);
}

int string_to_struct__1397(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1397VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1397VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1397_fields, 6, endptr);
    }
    return nRet;
}

int is_struct__1397_double_convertion_allowed()
{
    if (pSimstruct__1397VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1397VTable);
    }
    return 0;
}

void compare_struct__1397(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1397VTable != NULL
        && pSimstruct__1397VTable->m_version >= Scv612
        && pSimstruct__1397VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1397VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1397VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1397VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1397_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1397_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1397VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1397VTable, nRetValue);
    }
    return 0;
}

int get_struct__1397_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1397_fields, 6, pfnStrAppend, pData);
}

int set_struct__1397_default_value(void *pValue)
{
    set_struct__1366_default_value(&(((struct__1397*)pValue)->header));
    set_struct__1361_default_value(&(((struct__1397*)pValue)->packets));
    set_kcg_int_default_value(&(((struct__1397*)pValue)->engineering_BG_location));
    set_kcg_real_default_value(&(((struct__1397*)pValue)->TrainPos));
    set_kcg_int_default_value(&(((struct__1397*)pValue)->pig_nom_0));
    set_kcg_bool_default_value(&(((struct__1397*)pValue)->balise_passed));
    return 1;
}

int check_struct__1397_string(const char *str, char **endptr)
{
    static struct__1397 rTemp;
    return string_to_struct__1397(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1397_Utils = {
    struct__1397_to_string,
    check_struct__1397_string,
    string_to_struct__1397,
    is_struct__1397_double_convertion_allowed,
    struct__1397_to_double,
    compare_struct__1397,
    get_struct__1397_signature,
    set_struct__1397_default_value,
    sizeof(struct__1397)
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
 ** TrackSectionData_T_InfraLib 
 ****************************************************************/

struct SimTypeVTable *pSimTrackSectionData_T_InfraLibVTable;

int TrackSectionData_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTrackSectionData_T_InfraLibVTable != NULL
        && pSimTrackSectionData_T_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTrackSectionData_T_InfraLibVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1384_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TrackSectionData_T_InfraLib(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTrackSectionData_T_InfraLibVTable != NULL) {
        nRet=string_to_VTable(str, pSimTrackSectionData_T_InfraLibVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1384(str, pValue, endptr);
    }
    return nRet;
}

int is_TrackSectionData_T_InfraLib_double_convertion_allowed()
{
    if (pSimTrackSectionData_T_InfraLibVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTrackSectionData_T_InfraLibVTable);
    }
    return is_struct__1384_double_convertion_allowed();
}

void compare_TrackSectionData_T_InfraLib(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTrackSectionData_T_InfraLibVTable != NULL
        && pSimTrackSectionData_T_InfraLibVTable->m_version >= Scv612
        && pSimTrackSectionData_T_InfraLibVTable->m_pfnCompare != NULL) {
        if (pSimTrackSectionData_T_InfraLibVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTrackSectionData_T_InfraLibVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTrackSectionData_T_InfraLibVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1384(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TrackSectionData_T_InfraLib_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTrackSectionData_T_InfraLibVTable != NULL) {
        return VTable_to_double(pValue, pSimTrackSectionData_T_InfraLibVTable, nRetValue);
    }
    return struct__1384_to_double(pValue, nRetValue);
}

int get_TrackSectionData_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1384_signature(pfnStrAppend, pData);
}

int set_TrackSectionData_T_InfraLib_default_value(void *pValue)
{
    return set_struct__1384_default_value(pValue);
}

int check_TrackSectionData_T_InfraLib_string(const char *str, char **endptr)
{
    static TrackSectionData_T_InfraLib rTemp;
    return string_to_TrackSectionData_T_InfraLib(str, &rTemp, endptr);
}

SimTypeUtils _Type_TrackSectionData_T_InfraLib_Utils = {
    TrackSectionData_T_InfraLib_to_string,
    check_TrackSectionData_T_InfraLib_string,
    string_to_TrackSectionData_T_InfraLib,
    is_TrackSectionData_T_InfraLib_double_convertion_allowed,
    TrackSectionData_T_InfraLib_to_double,
    compare_TrackSectionData_T_InfraLib,
    get_TrackSectionData_T_InfraLib_signature,
    set_TrackSectionData_T_InfraLib_default_value,
    sizeof(TrackSectionData_T_InfraLib)
};

/****************************************************************
 ** TrainPosRaw_T_InfraLib 
 ****************************************************************/

struct SimTypeVTable *pSimTrainPosRaw_T_InfraLibVTable;

int TrainPosRaw_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTrainPosRaw_T_InfraLibVTable != NULL
        && pSimTrainPosRaw_T_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTrainPosRaw_T_InfraLibVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1341_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TrainPosRaw_T_InfraLib(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTrainPosRaw_T_InfraLibVTable != NULL) {
        nRet=string_to_VTable(str, pSimTrainPosRaw_T_InfraLibVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1341(str, pValue, endptr);
    }
    return nRet;
}

int is_TrainPosRaw_T_InfraLib_double_convertion_allowed()
{
    if (pSimTrainPosRaw_T_InfraLibVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTrainPosRaw_T_InfraLibVTable);
    }
    return is_struct__1341_double_convertion_allowed();
}

void compare_TrainPosRaw_T_InfraLib(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTrainPosRaw_T_InfraLibVTable != NULL
        && pSimTrainPosRaw_T_InfraLibVTable->m_version >= Scv612
        && pSimTrainPosRaw_T_InfraLibVTable->m_pfnCompare != NULL) {
        if (pSimTrainPosRaw_T_InfraLibVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTrainPosRaw_T_InfraLibVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTrainPosRaw_T_InfraLibVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1341(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TrainPosRaw_T_InfraLib_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTrainPosRaw_T_InfraLibVTable != NULL) {
        return VTable_to_double(pValue, pSimTrainPosRaw_T_InfraLibVTable, nRetValue);
    }
    return struct__1341_to_double(pValue, nRetValue);
}

int get_TrainPosRaw_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1341_signature(pfnStrAppend, pData);
}

int set_TrainPosRaw_T_InfraLib_default_value(void *pValue)
{
    return set_struct__1341_default_value(pValue);
}

int check_TrainPosRaw_T_InfraLib_string(const char *str, char **endptr)
{
    static TrainPosRaw_T_InfraLib rTemp;
    return string_to_TrainPosRaw_T_InfraLib(str, &rTemp, endptr);
}

SimTypeUtils _Type_TrainPosRaw_T_InfraLib_Utils = {
    TrainPosRaw_T_InfraLib_to_string,
    check_TrainPosRaw_T_InfraLib_string,
    string_to_TrainPosRaw_T_InfraLib,
    is_TrainPosRaw_T_InfraLib_double_convertion_allowed,
    TrainPosRaw_T_InfraLib_to_double,
    compare_TrainPosRaw_T_InfraLib,
    get_TrainPosRaw_T_InfraLib_signature,
    set_TrainPosRaw_T_InfraLib_default_value,
    sizeof(TrainPosRaw_T_InfraLib)
};

/****************************************************************
 ** B_data_internal_T_InfraLib 
 ****************************************************************/

struct SimTypeVTable *pSimB_data_internal_T_InfraLibVTable;

int B_data_internal_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimB_data_internal_T_InfraLibVTable != NULL
        && pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimB_data_internal_T_InfraLibVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1397_to_string(pValue, pfnStrAppend, pData);
}

int string_to_B_data_internal_T_InfraLib(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimB_data_internal_T_InfraLibVTable != NULL) {
        nRet=string_to_VTable(str, pSimB_data_internal_T_InfraLibVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1397(str, pValue, endptr);
    }
    return nRet;
}

int is_B_data_internal_T_InfraLib_double_convertion_allowed()
{
    if (pSimB_data_internal_T_InfraLibVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimB_data_internal_T_InfraLibVTable);
    }
    return is_struct__1397_double_convertion_allowed();
}

void compare_B_data_internal_T_InfraLib(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimB_data_internal_T_InfraLibVTable != NULL
        && pSimB_data_internal_T_InfraLibVTable->m_version >= Scv612
        && pSimB_data_internal_T_InfraLibVTable->m_pfnCompare != NULL) {
        if (pSimB_data_internal_T_InfraLibVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimB_data_internal_T_InfraLibVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimB_data_internal_T_InfraLibVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1397(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int B_data_internal_T_InfraLib_to_double(const void *pValue, double *nRetValue)
{
    if (pSimB_data_internal_T_InfraLibVTable != NULL) {
        return VTable_to_double(pValue, pSimB_data_internal_T_InfraLibVTable, nRetValue);
    }
    return struct__1397_to_double(pValue, nRetValue);
}

int get_B_data_internal_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1397_signature(pfnStrAppend, pData);
}

int set_B_data_internal_T_InfraLib_default_value(void *pValue)
{
    return set_struct__1397_default_value(pValue);
}

int check_B_data_internal_T_InfraLib_string(const char *str, char **endptr)
{
    static B_data_internal_T_InfraLib rTemp;
    return string_to_B_data_internal_T_InfraLib(str, &rTemp, endptr);
}

SimTypeUtils _Type_B_data_internal_T_InfraLib_Utils = {
    B_data_internal_T_InfraLib_to_string,
    check_B_data_internal_T_InfraLib_string,
    string_to_B_data_internal_T_InfraLib,
    is_B_data_internal_T_InfraLib_double_convertion_allowed,
    B_data_internal_T_InfraLib_to_double,
    compare_B_data_internal_T_InfraLib,
    get_B_data_internal_T_InfraLib_signature,
    set_B_data_internal_T_InfraLib_default_value,
    sizeof(B_data_internal_T_InfraLib)
};

/****************************************************************
 ** CompressedBaliseMessage_TM 
 ****************************************************************/

struct SimTypeVTable *pSimCompressedBaliseMessage_TMVTable;

int CompressedBaliseMessage_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL
        && pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCompressedBaliseMessage_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1379_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedBaliseMessage_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedBaliseMessage_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1379(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedBaliseMessage_TM_double_convertion_allowed()
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCompressedBaliseMessage_TMVTable);
    }
    return is_struct__1379_double_convertion_allowed();
}

void compare_CompressedBaliseMessage_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCompressedBaliseMessage_TMVTable != NULL
        && pSimCompressedBaliseMessage_TMVTable->m_version >= Scv612
        && pSimCompressedBaliseMessage_TMVTable->m_pfnCompare != NULL) {
        if (pSimCompressedBaliseMessage_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCompressedBaliseMessage_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCompressedBaliseMessage_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1379(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedBaliseMessage_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedBaliseMessage_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedBaliseMessage_TMVTable, nRetValue);
    }
    return struct__1379_to_double(pValue, nRetValue);
}

int get_CompressedBaliseMessage_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1379_signature(pfnStrAppend, pData);
}

int set_CompressedBaliseMessage_TM_default_value(void *pValue)
{
    return set_struct__1379_default_value(pValue);
}

int check_CompressedBaliseMessage_TM_string(const char *str, char **endptr)
{
    static CompressedBaliseMessage_TM rTemp;
    return string_to_CompressedBaliseMessage_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_CompressedBaliseMessage_TM_Utils = {
    CompressedBaliseMessage_TM_to_string,
    check_CompressedBaliseMessage_TM_string,
    string_to_CompressedBaliseMessage_TM,
    is_CompressedBaliseMessage_TM_double_convertion_allowed,
    CompressedBaliseMessage_TM_to_double,
    compare_CompressedBaliseMessage_TM,
    get_CompressedBaliseMessage_TM_signature,
    set_CompressedBaliseMessage_TM_default_value,
    sizeof(CompressedBaliseMessage_TM)
};

/****************************************************************
 ** BaliseTelegramHeader_int_T_TM 
 ****************************************************************/

struct SimTypeVTable *pSimBaliseTelegramHeader_int_T_TMVTable;

int BaliseTelegramHeader_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL
        && pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1366_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BaliseTelegramHeader_int_T_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimBaliseTelegramHeader_int_T_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1366(str, pValue, endptr);
    }
    return nRet;
}

int is_BaliseTelegramHeader_int_T_TM_double_convertion_allowed()
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBaliseTelegramHeader_int_T_TMVTable);
    }
    return is_struct__1366_double_convertion_allowed();
}

void compare_BaliseTelegramHeader_int_T_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL
        && pSimBaliseTelegramHeader_int_T_TMVTable->m_version >= Scv612
        && pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnCompare != NULL) {
        if (pSimBaliseTelegramHeader_int_T_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1366(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BaliseTelegramHeader_int_T_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBaliseTelegramHeader_int_T_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimBaliseTelegramHeader_int_T_TMVTable, nRetValue);
    }
    return struct__1366_to_double(pValue, nRetValue);
}

int get_BaliseTelegramHeader_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1366_signature(pfnStrAppend, pData);
}

int set_BaliseTelegramHeader_int_T_TM_default_value(void *pValue)
{
    return set_struct__1366_default_value(pValue);
}

int check_BaliseTelegramHeader_int_T_TM_string(const char *str, char **endptr)
{
    static BaliseTelegramHeader_int_T_TM rTemp;
    return string_to_BaliseTelegramHeader_int_T_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_BaliseTelegramHeader_int_T_TM_Utils = {
    BaliseTelegramHeader_int_T_TM_to_string,
    check_BaliseTelegramHeader_int_T_TM_string,
    string_to_BaliseTelegramHeader_int_T_TM,
    is_BaliseTelegramHeader_int_T_TM_double_convertion_allowed,
    BaliseTelegramHeader_int_T_TM_to_double,
    compare_BaliseTelegramHeader_int_T_TM,
    get_BaliseTelegramHeader_int_T_TM_signature,
    set_BaliseTelegramHeader_int_T_TM_default_value,
    sizeof(BaliseTelegramHeader_int_T_TM)
};

/****************************************************************
 ** OrBG_TM 
 ****************************************************************/

struct SimTypeVTable *pSimOrBG_TMVTable;

static SimEnumValUtils OrBG_TM_values[] = {
    { "TM::Amsterdam", Amsterdam_TM},
    { "Amsterdam", Amsterdam_TM},
    { "TM::Utrecht", Utrecht_TM},
    { "Utrecht", Utrecht_TM},
};

int OrBG_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOrBG_TMVTable != NULL
        && pSimOrBG_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOrBG_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(OrBG_TM*)pValue, OrBG_TM_values, 4, pfnStrAppend, pData);
}

int string_to_OrBG_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOrBG_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimOrBG_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, OrBG_TM_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(OrBG_TM*)pValue = nTemp;
    }
    return nRet;
}

int is_OrBG_TM_double_convertion_allowed()
{
    if (pSimOrBG_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimOrBG_TMVTable);
    }
    return 1;
}

void compare_OrBG_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimOrBG_TMVTable != NULL
        && pSimOrBG_TMVTable->m_version >= Scv612
        && pSimOrBG_TMVTable->m_pfnCompare != NULL) {
        if (pSimOrBG_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOrBG_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimOrBG_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(OrBG_TM*)pValue1), (int)(*(OrBG_TM*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int OrBG_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOrBG_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimOrBG_TMVTable, nRetValue);
    }
    *nRetValue = (double)*((OrBG_TM*)pValue);
    return 1;
}

int get_OrBG_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(OrBG_TM_values, 4, pfnStrAppend, pData);
}

int set_OrBG_TM_default_value(void *pValue)
{
    *(OrBG_TM*)pValue = Amsterdam_TM;
    return 1;
}

int check_OrBG_TM_string(const char *str, char **endptr)
{
    static OrBG_TM rTemp;
    return string_to_OrBG_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_OrBG_TM_Utils = {
    OrBG_TM_to_string,
    check_OrBG_TM_string,
    string_to_OrBG_TM,
    is_OrBG_TM_double_convertion_allowed,
    OrBG_TM_to_double,
    compare_OrBG_TM,
    get_OrBG_TM_signature,
    set_OrBG_TM_default_value,
    sizeof(OrBG_TM)
};

/****************************************************************
 ** OrLine_TM 
 ****************************************************************/

struct SimTypeVTable *pSimOrLine_TMVTable;

static SimEnumValUtils OrLine_TM_values[] = {
    { "TM::N", N_TM},
    { "N", N_TM},
    { "TM::Z", Z_TM},
    { "Z", Z_TM},
};

int OrLine_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOrLine_TMVTable != NULL
        && pSimOrLine_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOrLine_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(OrLine_TM*)pValue, OrLine_TM_values, 4, pfnStrAppend, pData);
}

int string_to_OrLine_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOrLine_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimOrLine_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, OrLine_TM_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(OrLine_TM*)pValue = nTemp;
    }
    return nRet;
}

int is_OrLine_TM_double_convertion_allowed()
{
    if (pSimOrLine_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimOrLine_TMVTable);
    }
    return 1;
}

void compare_OrLine_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimOrLine_TMVTable != NULL
        && pSimOrLine_TMVTable->m_version >= Scv612
        && pSimOrLine_TMVTable->m_pfnCompare != NULL) {
        if (pSimOrLine_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOrLine_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimOrLine_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(OrLine_TM*)pValue1), (int)(*(OrLine_TM*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int OrLine_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOrLine_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimOrLine_TMVTable, nRetValue);
    }
    *nRetValue = (double)*((OrLine_TM*)pValue);
    return 1;
}

int get_OrLine_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(OrLine_TM_values, 4, pfnStrAppend, pData);
}

int set_OrLine_TM_default_value(void *pValue)
{
    *(OrLine_TM*)pValue = N_TM;
    return 1;
}

int check_OrLine_TM_string(const char *str, char **endptr)
{
    static OrLine_TM rTemp;
    return string_to_OrLine_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_OrLine_TM_Utils = {
    OrLine_TM_to_string,
    check_OrLine_TM_string,
    string_to_OrLine_TM,
    is_OrLine_TM_double_convertion_allowed,
    OrLine_TM_to_double,
    compare_OrLine_TM,
    get_OrLine_TM_signature,
    set_OrLine_TM_default_value,
    sizeof(OrLine_TM)
};

/****************************************************************
 ** BaliseGroupData_TM 
 ****************************************************************/

struct SimTypeVTable *pSimBaliseGroupData_TMVTable;

int BaliseGroupData_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBaliseGroupData_TMVTable != NULL
        && pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBaliseGroupData_TMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1389_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BaliseGroupData_TM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBaliseGroupData_TMVTable != NULL) {
        nRet=string_to_VTable(str, pSimBaliseGroupData_TMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1389(str, pValue, endptr);
    }
    return nRet;
}

int is_BaliseGroupData_TM_double_convertion_allowed()
{
    if (pSimBaliseGroupData_TMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBaliseGroupData_TMVTable);
    }
    return is_struct__1389_double_convertion_allowed();
}

void compare_BaliseGroupData_TM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBaliseGroupData_TMVTable != NULL
        && pSimBaliseGroupData_TMVTable->m_version >= Scv612
        && pSimBaliseGroupData_TMVTable->m_pfnCompare != NULL) {
        if (pSimBaliseGroupData_TMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBaliseGroupData_TMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBaliseGroupData_TMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1389(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BaliseGroupData_TM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBaliseGroupData_TMVTable != NULL) {
        return VTable_to_double(pValue, pSimBaliseGroupData_TMVTable, nRetValue);
    }
    return struct__1389_to_double(pValue, nRetValue);
}

int get_BaliseGroupData_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1389_signature(pfnStrAppend, pData);
}

int set_BaliseGroupData_TM_default_value(void *pValue)
{
    return set_struct__1389_default_value(pValue);
}

int check_BaliseGroupData_TM_string(const char *str, char **endptr)
{
    static BaliseGroupData_TM rTemp;
    return string_to_BaliseGroupData_TM(str, &rTemp, endptr);
}

SimTypeUtils _Type_BaliseGroupData_TM_Utils = {
    BaliseGroupData_TM_to_string,
    check_BaliseGroupData_TM_string,
    string_to_BaliseGroupData_TM,
    is_BaliseGroupData_TM_double_convertion_allowed,
    BaliseGroupData_TM_to_double,
    compare_BaliseGroupData_TM,
    get_BaliseGroupData_TM_signature,
    set_BaliseGroupData_TM_default_value,
    sizeof(BaliseGroupData_TM)
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
    return struct__1361_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimCompressedPackets_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1361(str, pValue, endptr);
    }
    return nRet;
}

int is_CompressedPackets_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCompressedPackets_T_Common_Types_PkgVTable);
    }
    return is_struct__1361_double_convertion_allowed();
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
        compare_struct__1361(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCompressedPackets_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimCompressedPackets_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__1361_to_double(pValue, nRetValue);
}

int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1361_signature(pfnStrAppend, pData);
}

int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__1361_default_value(pValue);
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
    return array__1358_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadata_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__1358(str, pValue, endptr);
    }
    return nRet;
}

int is_Metadata_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimMetadata_T_Common_Types_PkgVTable);
    }
    return is_array__1358_double_convertion_allowed();
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
        compare_array__1358(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadata_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadata_T_Common_Types_PkgVTable, nRetValue);
    }
    return array__1358_to_double(pValue, nRetValue);
}

int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__1358_signature(pfnStrAppend, pData);
}

int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_array__1358_default_value(pValue);
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
    return struct__1350_to_string(pValue, pfnStrAppend, pData);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        nRet=string_to_VTable(str, pSimMetadataElement_T_Common_Types_PkgVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1350(str, pValue, endptr);
    }
    return nRet;
}

int is_MetadataElement_T_Common_Types_Pkg_double_convertion_allowed()
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimMetadataElement_T_Common_Types_PkgVTable);
    }
    return is_struct__1350_double_convertion_allowed();
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
        compare_struct__1350(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nRetValue)
{
    if (pSimMetadataElement_T_Common_Types_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimMetadataElement_T_Common_Types_PkgVTable, nRetValue);
    }
    return struct__1350_to_double(pValue, nRetValue);
}

int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1350_signature(pfnStrAppend, pData);
}

int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue)
{
    return set_struct__1350_default_value(pValue);
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
    return struct__1389_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BaliseGroupData_Basics(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        nRet=string_to_VTable(str, pSimBaliseGroupData_BasicsVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1389(str, pValue, endptr);
    }
    return nRet;
}

int is_BaliseGroupData_Basics_double_convertion_allowed()
{
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBaliseGroupData_BasicsVTable);
    }
    return is_struct__1389_double_convertion_allowed();
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
        compare_struct__1389(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BaliseGroupData_Basics_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBaliseGroupData_BasicsVTable != NULL) {
        return VTable_to_double(pValue, pSimBaliseGroupData_BasicsVTable, nRetValue);
    }
    return struct__1389_to_double(pValue, nRetValue);
}

int get_BaliseGroupData_Basics_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1389_signature(pfnStrAppend, pData);
}

int set_BaliseGroupData_Basics_default_value(void *pValue)
{
    return set_struct__1389_default_value(pValue);
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

#include "C:/Program Files/Esterel Technologies/SCADE R15.2/SCADE/lib/kcg_conv.c"
