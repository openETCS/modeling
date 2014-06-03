#include <stdlib.h>
#include <stddef.h>
#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "DetermineBG_Orientation_and_LRBG_newtype.h"
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
 ** SSM_ST_SM1 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_ST_SM1VTable;

static SimEnumValUtils SSM_ST_SM1_values[] = {
    { "Initial", SSM_st_Initial_SM1},
    { "Initial", SSM_st_Initial_SM1},
    { "Level0or1", SSM_st_Level0or1_SM1},
    { "Level0or1", SSM_st_Level0or1_SM1},
    { "Level2or3", SSM_st_Level2or3_SM1},
    { "Level2or3", SSM_st_Level2or3_SM1},
};

int SSM_ST_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM1*)pValue, SSM_ST_SM1_values, 6, pfnStrAppend, pData);
}

int string_to_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM1VTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM1_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM1*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM1_double_convertion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_ST_SM1VTable);
    }
    return 1;
}

void compare_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_version >= Scv612
        && pSimSSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM1VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM1*)pValue1), (int)(*(SSM_ST_SM1*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_ST_SM1_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM1VTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_ST_SM1*)pValue);
    return 1;
}

int get_SSM_ST_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_ST_SM1_values, 6, pfnStrAppend, pData);
}

int set_SSM_ST_SM1_default_value(void *pValue)
{
    *(SSM_ST_SM1*)pValue = SSM_st_Initial_SM1;
    return 1;
}

int check_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static SSM_ST_SM1 rTemp;
    return string_to_SSM_ST_SM1(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_ST_SM1_Utils = {
    SSM_ST_SM1_to_string,
    check_SSM_ST_SM1_string,
    string_to_SSM_ST_SM1,
    is_SSM_ST_SM1_double_convertion_allowed,
    SSM_ST_SM1_to_double,
    compare_SSM_ST_SM1,
    get_SSM_ST_SM1_signature,
    set_SSM_ST_SM1_default_value,
    sizeof(SSM_ST_SM1)
};

/****************************************************************
 ** SSM_TR_SM1 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_TR_SM1VTable;

static SimEnumValUtils SSM_TR_SM1_values[] = {
    { "SSM_TR_SM1_no_trans", 0},
    { "SSM_TR_SM1_no_trans", 0},
    { "Initial:<1>", SSM_TR_Initial_1_SM1},
    { "Initial:<1>", SSM_TR_Initial_1_SM1},
    { "Initial:<2>", SSM_TR_Initial_2_SM1},
    { "Initial:<2>", SSM_TR_Initial_2_SM1},
};

int SSM_TR_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM1*)pValue, SSM_TR_SM1_values, 6, pfnStrAppend, pData);
}

int string_to_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM1VTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM1_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM1*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM1_double_convertion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_TR_SM1VTable);
    }
    return 1;
}

void compare_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_version >= Scv612
        && pSimSSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM1VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM1*)pValue1), (int)(*(SSM_TR_SM1*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_TR_SM1_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM1VTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_TR_SM1*)pValue);
    return 1;
}

int get_SSM_TR_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_TR_SM1_values, 6, pfnStrAppend, pData);
}

int set_SSM_TR_SM1_default_value(void *pValue)
{
    *(SSM_TR_SM1*)pValue = 0;
    return 1;
}

int check_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static SSM_TR_SM1 rTemp;
    return string_to_SSM_TR_SM1(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_TR_SM1_Utils = {
    SSM_TR_SM1_to_string,
    check_SSM_TR_SM1_string,
    string_to_SSM_TR_SM1,
    is_SSM_TR_SM1_double_convertion_allowed,
    SSM_TR_SM1_to_double,
    compare_SSM_TR_SM1,
    get_SSM_TR_SM1_signature,
    set_SSM_TR_SM1_default_value,
    sizeof(SSM_TR_SM1)
};

/****************************************************************
 ** SSM_ST_SM2_SM1_Level2or3 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_ST_SM2_SM1_Level2or3VTable;

static SimEnumValUtils SSM_ST_SM2_SM1_Level2or3_values[] = {
    { "Init", SSM_st_Init_SM1_Level2or3_SM2},
    { "Init", SSM_st_Init_SM1_Level2or3_SM2},
    { "Ack", SSM_st_Ack_SM1_Level2or3_SM2},
    { "Ack", SSM_st_Ack_SM1_Level2or3_SM2},
    { "NoAck", SSM_st_NoAck_SM1_Level2or3_SM2},
    { "NoAck", SSM_st_NoAck_SM1_Level2or3_SM2},
};

int SSM_ST_SM2_SM1_Level2or3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_ST_SM2_SM1_Level2or3VTable != NULL
        && pSimSSM_ST_SM2_SM1_Level2or3VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM2_SM1_Level2or3VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM2_SM1_Level2or3*)pValue, SSM_ST_SM2_SM1_Level2or3_values, 6, pfnStrAppend, pData);
}

int string_to_SSM_ST_SM2_SM1_Level2or3(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM2_SM1_Level2or3VTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_ST_SM2_SM1_Level2or3VTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM2_SM1_Level2or3_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM2_SM1_Level2or3*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM2_SM1_Level2or3_double_convertion_allowed()
{
    if (pSimSSM_ST_SM2_SM1_Level2or3VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_ST_SM2_SM1_Level2or3VTable);
    }
    return 1;
}

void compare_SSM_ST_SM2_SM1_Level2or3(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_ST_SM2_SM1_Level2or3VTable != NULL
        && pSimSSM_ST_SM2_SM1_Level2or3VTable->m_version >= Scv612
        && pSimSSM_ST_SM2_SM1_Level2or3VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM2_SM1_Level2or3VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_ST_SM2_SM1_Level2or3VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_ST_SM2_SM1_Level2or3VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM2_SM1_Level2or3*)pValue1), (int)(*(SSM_ST_SM2_SM1_Level2or3*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_ST_SM2_SM1_Level2or3_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_ST_SM2_SM1_Level2or3VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM2_SM1_Level2or3VTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_ST_SM2_SM1_Level2or3*)pValue);
    return 1;
}

int get_SSM_ST_SM2_SM1_Level2or3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_ST_SM2_SM1_Level2or3_values, 6, pfnStrAppend, pData);
}

int set_SSM_ST_SM2_SM1_Level2or3_default_value(void *pValue)
{
    *(SSM_ST_SM2_SM1_Level2or3*)pValue = SSM_st_Init_SM1_Level2or3_SM2;
    return 1;
}

int check_SSM_ST_SM2_SM1_Level2or3_string(const char *str, char **endptr)
{
    static SSM_ST_SM2_SM1_Level2or3 rTemp;
    return string_to_SSM_ST_SM2_SM1_Level2or3(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_ST_SM2_SM1_Level2or3_Utils = {
    SSM_ST_SM2_SM1_Level2or3_to_string,
    check_SSM_ST_SM2_SM1_Level2or3_string,
    string_to_SSM_ST_SM2_SM1_Level2or3,
    is_SSM_ST_SM2_SM1_Level2or3_double_convertion_allowed,
    SSM_ST_SM2_SM1_Level2or3_to_double,
    compare_SSM_ST_SM2_SM1_Level2or3,
    get_SSM_ST_SM2_SM1_Level2or3_signature,
    set_SSM_ST_SM2_SM1_Level2or3_default_value,
    sizeof(SSM_ST_SM2_SM1_Level2or3)
};

/****************************************************************
 ** SSM_TR_SM2_SM1_Level2or3 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_TR_SM2_SM1_Level2or3VTable;

static SimEnumValUtils SSM_TR_SM2_SM1_Level2or3_values[] = {
    { "SSM_TR_SM2_SM1_Level2or3_no_trans", 0},
    { "SSM_TR_SM2_SM1_Level2or3_no_trans", 0},
    { "Init:<1>", SSM_TR_Init_1_SM2_SM1_Level2or3},
    { "Init:<1>", SSM_TR_Init_1_SM2_SM1_Level2or3},
    { "Init:<2>", SSM_TR_Init_2_SM2_SM1_Level2or3},
    { "Init:<2>", SSM_TR_Init_2_SM2_SM1_Level2or3},
};

int SSM_TR_SM2_SM1_Level2or3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_TR_SM2_SM1_Level2or3VTable != NULL
        && pSimSSM_TR_SM2_SM1_Level2or3VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM2_SM1_Level2or3VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM2_SM1_Level2or3*)pValue, SSM_TR_SM2_SM1_Level2or3_values, 6, pfnStrAppend, pData);
}

int string_to_SSM_TR_SM2_SM1_Level2or3(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM2_SM1_Level2or3VTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_TR_SM2_SM1_Level2or3VTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM2_SM1_Level2or3_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM2_SM1_Level2or3*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM2_SM1_Level2or3_double_convertion_allowed()
{
    if (pSimSSM_TR_SM2_SM1_Level2or3VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_TR_SM2_SM1_Level2or3VTable);
    }
    return 1;
}

void compare_SSM_TR_SM2_SM1_Level2or3(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_TR_SM2_SM1_Level2or3VTable != NULL
        && pSimSSM_TR_SM2_SM1_Level2or3VTable->m_version >= Scv612
        && pSimSSM_TR_SM2_SM1_Level2or3VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM2_SM1_Level2or3VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_TR_SM2_SM1_Level2or3VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_TR_SM2_SM1_Level2or3VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM2_SM1_Level2or3*)pValue1), (int)(*(SSM_TR_SM2_SM1_Level2or3*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_TR_SM2_SM1_Level2or3_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_TR_SM2_SM1_Level2or3VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM2_SM1_Level2or3VTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_TR_SM2_SM1_Level2or3*)pValue);
    return 1;
}

int get_SSM_TR_SM2_SM1_Level2or3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_TR_SM2_SM1_Level2or3_values, 6, pfnStrAppend, pData);
}

int set_SSM_TR_SM2_SM1_Level2or3_default_value(void *pValue)
{
    *(SSM_TR_SM2_SM1_Level2or3*)pValue = 0;
    return 1;
}

int check_SSM_TR_SM2_SM1_Level2or3_string(const char *str, char **endptr)
{
    static SSM_TR_SM2_SM1_Level2or3 rTemp;
    return string_to_SSM_TR_SM2_SM1_Level2or3(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_TR_SM2_SM1_Level2or3_Utils = {
    SSM_TR_SM2_SM1_Level2or3_to_string,
    check_SSM_TR_SM2_SM1_Level2or3_string,
    string_to_SSM_TR_SM2_SM1_Level2or3,
    is_SSM_TR_SM2_SM1_Level2or3_double_convertion_allowed,
    SSM_TR_SM2_SM1_Level2or3_to_double,
    compare_SSM_TR_SM2_SM1_Level2or3,
    get_SSM_TR_SM2_SM1_Level2or3_signature,
    set_SSM_TR_SM2_SM1_Level2or3_default_value,
    sizeof(SSM_TR_SM2_SM1_Level2or3)
};

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
 ** struct__980 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__980VTable;

static SimFieldUtils struct__980_fields[] = {
    {"NID_MESSAGE", offsetof(struct__980,NID_MESSAGE), &_Type_kcg_int_Utils},
    {"L_MESSAGE", offsetof(struct__980,L_MESSAGE), &_Type_kcg_real_Utils},
    {"T_TRAIN", offsetof(struct__980,T_TRAIN), &_Type_kcg_real_Utils},
    {"M_ACK", offsetof(struct__980,M_ACK), &_Type_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils},
    {"NID_LRBG", offsetof(struct__980,NID_LRBG), &_Type_kcg_int_Utils},
    {"Q_ORIENTATION", offsetof(struct__980,Q_ORIENTATION), &_Type_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils},
};

int struct__980_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__980VTable != NULL
        && pSimstruct__980VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__980VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__980_fields, 6, pfnStrAppend, pData);
}

int string_to_struct__980(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__980VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__980VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__980_fields, 6, endptr);
    }
    return nRet;
}

int is_struct__980_double_convertion_allowed()
{
    if (pSimstruct__980VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__980VTable);
    }
    return 0;
}

void compare_struct__980(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__980VTable != NULL
        && pSimstruct__980VTable->m_version >= Scv612
        && pSimstruct__980VTable->m_pfnCompare != NULL) {
        if (pSimstruct__980VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__980VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__980VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__980_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__980_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__980VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__980VTable, nRetValue);
    }
    return 0;
}

int get_struct__980_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__980_fields, 6, pfnStrAppend, pData);
}

int set_struct__980_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__980*)pValue)->NID_MESSAGE));
    set_kcg_real_default_value(&(((struct__980*)pValue)->L_MESSAGE));
    set_kcg_real_default_value(&(((struct__980*)pValue)->T_TRAIN));
    set_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(&(((struct__980*)pValue)->M_ACK));
    set_kcg_int_default_value(&(((struct__980*)pValue)->NID_LRBG));
    set_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(&(((struct__980*)pValue)->Q_ORIENTATION));
    return 1;
}

int check_struct__980_string(const char *str, char **endptr)
{
    static struct__980 rTemp;
    return string_to_struct__980(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__980_Utils = {
    struct__980_to_string,
    check_struct__980_string,
    string_to_struct__980,
    is_struct__980_double_convertion_allowed,
    struct__980_to_double,
    compare_struct__980,
    get_struct__980_signature,
    set_struct__980_default_value,
    sizeof(struct__980)
};

/****************************************************************
 ** struct__989 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__989VTable;

static SimFieldUtils struct__989_fields[] = {
    {"assignment_of_coordinate_system", offsetof(struct__989,assignment_of_coordinate_system), &_Type_struct__980_Utils},
};

int struct__989_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__989VTable != NULL
        && pSimstruct__989VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__989VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__989_fields, 1, pfnStrAppend, pData);
}

int string_to_struct__989(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__989VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__989VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__989_fields, 1, endptr);
    }
    return nRet;
}

int is_struct__989_double_convertion_allowed()
{
    if (pSimstruct__989VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__989VTable);
    }
    return 0;
}

void compare_struct__989(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__989VTable != NULL
        && pSimstruct__989VTable->m_version >= Scv612
        && pSimstruct__989VTable->m_pfnCompare != NULL) {
        if (pSimstruct__989VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__989VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__989VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__989_fields, 1, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__989_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__989VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__989VTable, nRetValue);
    }
    return 0;
}

int get_struct__989_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__989_fields, 1, pfnStrAppend, pData);
}

int set_struct__989_default_value(void *pValue)
{
    set_struct__980_default_value(&(((struct__989*)pValue)->assignment_of_coordinate_system));
    return 1;
}

int check_struct__989_string(const char *str, char **endptr)
{
    static struct__989 rTemp;
    return string_to_struct__989(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__989_Utils = {
    struct__989_to_string,
    check_struct__989_string,
    string_to_struct__989,
    is_struct__989_double_convertion_allowed,
    struct__989_to_double,
    compare_struct__989,
    get_struct__989_signature,
    set_struct__989_default_value,
    sizeof(struct__989)
};

/****************************************************************
 ** struct__993 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__993VTable;

static SimFieldUtils struct__993_fields[] = {
    {"NID_MESSAGE", offsetof(struct__993,NID_MESSAGE), &_Type_kcg_int_Utils},
    {"L_MESSAGE", offsetof(struct__993,L_MESSAGE), &_Type_kcg_real_Utils},
    {"T_TRAIN", offsetof(struct__993,T_TRAIN), &_Type_kcg_real_Utils},
};

int struct__993_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__993VTable != NULL
        && pSimstruct__993VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__993VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__993_fields, 3, pfnStrAppend, pData);
}

int string_to_struct__993(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__993VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__993VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__993_fields, 3, endptr);
    }
    return nRet;
}

int is_struct__993_double_convertion_allowed()
{
    if (pSimstruct__993VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__993VTable);
    }
    return 0;
}

void compare_struct__993(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__993VTable != NULL
        && pSimstruct__993VTable->m_version >= Scv612
        && pSimstruct__993VTable->m_pfnCompare != NULL) {
        if (pSimstruct__993VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__993VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__993VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__993_fields, 3, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__993_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__993VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__993VTable, nRetValue);
    }
    return 0;
}

int get_struct__993_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__993_fields, 3, pfnStrAppend, pData);
}

int set_struct__993_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__993*)pValue)->NID_MESSAGE));
    set_kcg_real_default_value(&(((struct__993*)pValue)->L_MESSAGE));
    set_kcg_real_default_value(&(((struct__993*)pValue)->T_TRAIN));
    return 1;
}

int check_struct__993_string(const char *str, char **endptr)
{
    static struct__993 rTemp;
    return string_to_struct__993(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__993_Utils = {
    struct__993_to_string,
    check_struct__993_string,
    string_to_struct__993,
    is_struct__993_double_convertion_allowed,
    struct__993_to_double,
    compare_struct__993,
    get_struct__993_signature,
    set_struct__993_default_value,
    sizeof(struct__993)
};

/****************************************************************
 ** struct__999 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__999VTable;

static SimFieldUtils struct__999_fields[] = {
    {"m_leveltr", offsetof(struct__999,m_leveltr), &_Type_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils},
    {"m_mode", offsetof(struct__999,m_mode), &_Type_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils},
};

int struct__999_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__999VTable != NULL
        && pSimstruct__999VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__999VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__999_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__999(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__999VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__999VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__999_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__999_double_convertion_allowed()
{
    if (pSimstruct__999VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__999VTable);
    }
    return 0;
}

void compare_struct__999(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__999VTable != NULL
        && pSimstruct__999VTable->m_version >= Scv612
        && pSimstruct__999VTable->m_pfnCompare != NULL) {
        if (pSimstruct__999VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__999VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__999VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__999_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__999_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__999VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__999VTable, nRetValue);
    }
    return 0;
}

int get_struct__999_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__999_fields, 2, pfnStrAppend, pData);
}

int set_struct__999_default_value(void *pValue)
{
    set_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(&(((struct__999*)pValue)->m_leveltr));
    set_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(&(((struct__999*)pValue)->m_mode));
    return 1;
}

int check_struct__999_string(const char *str, char **endptr)
{
    static struct__999 rTemp;
    return string_to_struct__999(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__999_Utils = {
    struct__999_to_string,
    check_struct__999_string,
    string_to_struct__999,
    is_struct__999_double_convertion_allowed,
    struct__999_to_double,
    compare_struct__999,
    get_struct__999_signature,
    set_struct__999_default_value,
    sizeof(struct__999)
};

/****************************************************************
 ** struct__1004 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1004VTable;

static SimFieldUtils struct__1004_fields[] = {
    {"m_version", offsetof(struct__1004,m_version), &_Type_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils},
    {"n_total", offsetof(struct__1004,n_total), &_Type_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils},
    {"n_pig", offsetof(struct__1004,n_pig), &_Type_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils},
    {"q_media", offsetof(struct__1004,q_media), &_Type_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils},
    {"q_updown", offsetof(struct__1004,q_updown), &_Type_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils},
    {"q_link", offsetof(struct__1004,q_link), &_Type_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils},
    {"nid_bg", offsetof(struct__1004,nid_bg), &_Type_kcg_int_Utils},
    {"nid_c", offsetof(struct__1004,nid_c), &_Type_kcg_int_Utils},
    {"m_mcount", offsetof(struct__1004,m_mcount), &_Type_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils},
    {"m_dup", offsetof(struct__1004,m_dup), &_Type_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils},
};

int struct__1004_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1004VTable != NULL
        && pSimstruct__1004VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1004VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1004_fields, 10, pfnStrAppend, pData);
}

int string_to_struct__1004(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1004VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1004VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1004_fields, 10, endptr);
    }
    return nRet;
}

int is_struct__1004_double_convertion_allowed()
{
    if (pSimstruct__1004VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1004VTable);
    }
    return 0;
}

void compare_struct__1004(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1004VTable != NULL
        && pSimstruct__1004VTable->m_version >= Scv612
        && pSimstruct__1004VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1004VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1004VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1004VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1004_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1004_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1004VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1004VTable, nRetValue);
    }
    return 0;
}

int get_struct__1004_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1004_fields, 10, pfnStrAppend, pData);
}

int set_struct__1004_default_value(void *pValue)
{
    set_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(&(((struct__1004*)pValue)->m_version));
    set_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(&(((struct__1004*)pValue)->n_total));
    set_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(&(((struct__1004*)pValue)->n_pig));
    set_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(&(((struct__1004*)pValue)->q_media));
    set_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(&(((struct__1004*)pValue)->q_updown));
    set_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(&(((struct__1004*)pValue)->q_link));
    set_kcg_int_default_value(&(((struct__1004*)pValue)->nid_bg));
    set_kcg_int_default_value(&(((struct__1004*)pValue)->nid_c));
    set_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(&(((struct__1004*)pValue)->m_mcount));
    set_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(&(((struct__1004*)pValue)->m_dup));
    return 1;
}

int check_struct__1004_string(const char *str, char **endptr)
{
    static struct__1004 rTemp;
    return string_to_struct__1004(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1004_Utils = {
    struct__1004_to_string,
    check_struct__1004_string,
    string_to_struct__1004,
    is_struct__1004_double_convertion_allowed,
    struct__1004_to_double,
    compare_struct__1004,
    get_struct__1004_signature,
    set_struct__1004_default_value,
    sizeof(struct__1004)
};

/****************************************************************
 ** struct__1017 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1017VTable;

static SimFieldUtils struct__1017_fields[] = {
    {"boolean_", offsetof(struct__1017,boolean_), &_Type_kcg_bool_Utils},
};

int struct__1017_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1017VTable != NULL
        && pSimstruct__1017VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1017VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1017_fields, 1, pfnStrAppend, pData);
}

int string_to_struct__1017(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1017VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1017VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1017_fields, 1, endptr);
    }
    return nRet;
}

int is_struct__1017_double_convertion_allowed()
{
    if (pSimstruct__1017VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1017VTable);
    }
    return 0;
}

void compare_struct__1017(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1017VTable != NULL
        && pSimstruct__1017VTable->m_version >= Scv612
        && pSimstruct__1017VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1017VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1017VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1017VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1017_fields, 1, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1017_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1017VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1017VTable, nRetValue);
    }
    return 0;
}

int get_struct__1017_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1017_fields, 1, pfnStrAppend, pData);
}

int set_struct__1017_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((struct__1017*)pValue)->boolean_));
    return 1;
}

int check_struct__1017_string(const char *str, char **endptr)
{
    static struct__1017 rTemp;
    return string_to_struct__1017(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1017_Utils = {
    struct__1017_to_string,
    check_struct__1017_string,
    string_to_struct__1017,
    is_struct__1017_double_convertion_allowed,
    struct__1017_to_double,
    compare_struct__1017,
    get_struct__1017_signature,
    set_struct__1017_default_value,
    sizeof(struct__1017)
};

/****************************************************************
 ** struct__1021 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1021VTable;

static SimFieldUtils struct__1021_fields[] = {
    {"header", offsetof(struct__1021,header), &_Type_struct__1004_Utils},
    {"flag", offsetof(struct__1021,flag), &_Type_struct__1017_Utils},
};

int struct__1021_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1021VTable != NULL
        && pSimstruct__1021VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1021VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1021_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__1021(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1021VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1021VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1021_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__1021_double_convertion_allowed()
{
    if (pSimstruct__1021VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1021VTable);
    }
    return 0;
}

void compare_struct__1021(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1021VTable != NULL
        && pSimstruct__1021VTable->m_version >= Scv612
        && pSimstruct__1021VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1021VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1021VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1021VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1021_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1021_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1021VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1021VTable, nRetValue);
    }
    return 0;
}

int get_struct__1021_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1021_fields, 2, pfnStrAppend, pData);
}

int set_struct__1021_default_value(void *pValue)
{
    set_struct__1004_default_value(&(((struct__1021*)pValue)->header));
    set_struct__1017_default_value(&(((struct__1021*)pValue)->flag));
    return 1;
}

int check_struct__1021_string(const char *str, char **endptr)
{
    static struct__1021 rTemp;
    return string_to_struct__1021(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1021_Utils = {
    struct__1021_to_string,
    check_struct__1021_string,
    string_to_struct__1021,
    is_struct__1021_double_convertion_allowed,
    struct__1021_to_double,
    compare_struct__1021,
    get_struct__1021_signature,
    set_struct__1021_default_value,
    sizeof(struct__1021)
};

/****************************************************************
 ** array__1026 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1026VTable;

int array__1026_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1026VTable != NULL
        && pSimarray__1026VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1026VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__1021_to_string, 8, sizeof(struct__1021), pfnStrAppend, pData);
}

int string_to_array__1026(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1026VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1026VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__1021_Utils, 8, sizeof(struct__1021), endptr);
    }
    return nRet;
}

int is_array__1026_double_convertion_allowed()
{
    if (pSimarray__1026VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__1026VTable);
    }
    return 0;
}

void compare_array__1026(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1026VTable != NULL
        && pSimarray__1026VTable->m_version >= Scv612
        && pSimarray__1026VTable->m_pfnCompare != NULL) {
        if (pSimarray__1026VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1026VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1026VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__1021, 8, sizeof(struct__1021), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1026_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1026VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1026VTable, nRetValue);
    }
    return 0;
}

int get_array__1026_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 8; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__1021_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1026_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 8; i++)
        set_struct__1021_default_value(&((struct__1021*)pValue)[i]);
    return 1;
}

int check_array__1026_string(const char *str, char **endptr)
{
    static array__1026 rTemp;
    return string_to_array__1026(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1026_Utils = {
    array__1026_to_string,
    check_array__1026_string,
    string_to_array__1026,
    is_array__1026_double_convertion_allowed,
    array__1026_to_double,
    compare_array__1026,
    get_array__1026_signature,
    set_array__1026_default_value,
    sizeof(array__1026)
};

/****************************************************************
 ** struct__1029 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1029VTable;

static SimFieldUtils struct__1029_fields[] = {
    {"headerflag", offsetof(struct__1029,headerflag), &_Type_array__1026_Utils},
    {"additionalinformation", offsetof(struct__1029,additionalinformation), &_Type_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils},
};

int struct__1029_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1029VTable != NULL
        && pSimstruct__1029VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1029VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1029_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__1029(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1029VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1029VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1029_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__1029_double_convertion_allowed()
{
    if (pSimstruct__1029VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1029VTable);
    }
    return 0;
}

void compare_struct__1029(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1029VTable != NULL
        && pSimstruct__1029VTable->m_version >= Scv612
        && pSimstruct__1029VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1029VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1029VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1029VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1029_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1029_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1029VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1029VTable, nRetValue);
    }
    return 0;
}

int get_struct__1029_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1029_fields, 2, pfnStrAppend, pData);
}

int set_struct__1029_default_value(void *pValue)
{
    set_array__1026_default_value(&(((struct__1029*)pValue)->headerflag));
    set_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_default_value(&(((struct__1029*)pValue)->additionalinformation));
    return 1;
}

int check_struct__1029_string(const char *str, char **endptr)
{
    static struct__1029 rTemp;
    return string_to_struct__1029(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1029_Utils = {
    struct__1029_to_string,
    check_struct__1029_string,
    string_to_struct__1029,
    is_struct__1029_double_convertion_allowed,
    struct__1029_to_double,
    compare_struct__1029,
    get_struct__1029_signature,
    set_struct__1029_default_value,
    sizeof(struct__1029)
};

/****************************************************************
 ** struct__1034 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1034VTable;

static SimFieldUtils struct__1034_fields[] = {
    {"q_dirlrbg", offsetof(struct__1034,q_dirlrbg), &_Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils},
    {"checkedbgmessage", offsetof(struct__1034,checkedbgmessage), &_Type_struct__1029_Utils},
};

int struct__1034_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1034VTable != NULL
        && pSimstruct__1034VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1034VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1034_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__1034(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1034VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1034VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1034_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__1034_double_convertion_allowed()
{
    if (pSimstruct__1034VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1034VTable);
    }
    return 0;
}

void compare_struct__1034(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1034VTable != NULL
        && pSimstruct__1034VTable->m_version >= Scv612
        && pSimstruct__1034VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1034VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1034VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1034VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1034_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1034_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1034VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1034VTable, nRetValue);
    }
    return 0;
}

int get_struct__1034_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1034_fields, 2, pfnStrAppend, pData);
}

int set_struct__1034_default_value(void *pValue)
{
    set_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(&(((struct__1034*)pValue)->q_dirlrbg));
    set_struct__1029_default_value(&(((struct__1034*)pValue)->checkedbgmessage));
    return 1;
}

int check_struct__1034_string(const char *str, char **endptr)
{
    static struct__1034 rTemp;
    return string_to_struct__1034(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1034_Utils = {
    struct__1034_to_string,
    check_struct__1034_string,
    string_to_struct__1034,
    is_struct__1034_double_convertion_allowed,
    struct__1034_to_double,
    compare_struct__1034,
    get_struct__1034_signature,
    set_struct__1034_default_value,
    sizeof(struct__1034)
};

/****************************************************************
 ** struct__1039 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1039VTable;

static SimFieldUtils struct__1039_fields[] = {
    {"Position_1", offsetof(struct__1039,Position_1), &_Type_kcg_int_Utils},
};

int struct__1039_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1039VTable != NULL
        && pSimstruct__1039VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1039VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1039_fields, 1, pfnStrAppend, pData);
}

int string_to_struct__1039(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1039VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1039VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1039_fields, 1, endptr);
    }
    return nRet;
}

int is_struct__1039_double_convertion_allowed()
{
    if (pSimstruct__1039VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1039VTable);
    }
    return 0;
}

void compare_struct__1039(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1039VTable != NULL
        && pSimstruct__1039VTable->m_version >= Scv612
        && pSimstruct__1039VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1039VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1039VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1039VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1039_fields, 1, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1039_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1039VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1039VTable, nRetValue);
    }
    return 0;
}

int get_struct__1039_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1039_fields, 1, pfnStrAppend, pData);
}

int set_struct__1039_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__1039*)pValue)->Position_1));
    return 1;
}

int check_struct__1039_string(const char *str, char **endptr)
{
    static struct__1039 rTemp;
    return string_to_struct__1039(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1039_Utils = {
    struct__1039_to_string,
    check_struct__1039_string,
    string_to_struct__1039,
    is_struct__1039_double_convertion_allowed,
    struct__1039_to_double,
    compare_struct__1039,
    get_struct__1039_signature,
    set_struct__1039_default_value,
    sizeof(struct__1039)
};

/****************************************************************
 ** struct__1043 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__1043VTable;

static SimFieldUtils struct__1043_fields[] = {
    {"filteredbgmessage", offsetof(struct__1043,filteredbgmessage), &_Type_struct__1034_Utils},
    {"position", offsetof(struct__1043,position), &_Type_struct__1039_Utils},
};

int struct__1043_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__1043VTable != NULL
        && pSimstruct__1043VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__1043VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__1043_fields, 2, pfnStrAppend, pData);
}

int string_to_struct__1043(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__1043VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__1043VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__1043_fields, 2, endptr);
    }
    return nRet;
}

int is_struct__1043_double_convertion_allowed()
{
    if (pSimstruct__1043VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__1043VTable);
    }
    return 0;
}

void compare_struct__1043(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__1043VTable != NULL
        && pSimstruct__1043VTable->m_version >= Scv612
        && pSimstruct__1043VTable->m_pfnCompare != NULL) {
        if (pSimstruct__1043VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__1043VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__1043VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__1043_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__1043_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__1043VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__1043VTable, nRetValue);
    }
    return 0;
}

int get_struct__1043_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__1043_fields, 2, pfnStrAppend, pData);
}

int set_struct__1043_default_value(void *pValue)
{
    set_struct__1034_default_value(&(((struct__1043*)pValue)->filteredbgmessage));
    set_struct__1039_default_value(&(((struct__1043*)pValue)->position));
    return 1;
}

int check_struct__1043_string(const char *str, char **endptr)
{
    static struct__1043 rTemp;
    return string_to_struct__1043(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__1043_Utils = {
    struct__1043_to_string,
    check_struct__1043_string,
    string_to_struct__1043,
    is_struct__1043_double_convertion_allowed,
    struct__1043_to_double,
    compare_struct__1043,
    get_struct__1043_signature,
    set_struct__1043_default_value,
    sizeof(struct__1043)
};

/****************************************************************
 ** array__1048 
 ****************************************************************/

struct SimTypeVTable *pSimarray__1048VTable;

int array__1048_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimarray__1048VTable != NULL
        && pSimarray__1048VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray__1048VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, struct__1043_to_string, 20, sizeof(struct__1043), pfnStrAppend, pData);
}

int string_to_array__1048(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimarray__1048VTable != NULL) {
        nRet=string_to_VTable(str, pSimarray__1048VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_struct__1043_Utils, 20, sizeof(struct__1043), endptr);
    }
    return nRet;
}

int is_array__1048_double_convertion_allowed()
{
    if (pSimarray__1048VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimarray__1048VTable);
    }
    return 0;
}

void compare_array__1048(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimarray__1048VTable != NULL
        && pSimarray__1048VTable->m_version >= Scv612
        && pSimarray__1048VTable->m_pfnCompare != NULL) {
        if (pSimarray__1048VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimarray__1048VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimarray__1048VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_struct__1043, 20, sizeof(struct__1043), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int array__1048_to_double(const void *pValue, double *nRetValue)
{
    if (pSimarray__1048VTable != NULL) {
        return VTable_to_double(pValue, pSimarray__1048VTable, nRetValue);
    }
    return 0;
}

int get_array__1048_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 20; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_struct__1043_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_array__1048_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 20; i++)
        set_struct__1043_default_value(&((struct__1043*)pValue)[i]);
    return 1;
}

int check_array__1048_string(const char *str, char **endptr)
{
    static array__1048 rTemp;
    return string_to_array__1048(str, &rTemp, endptr);
}

SimTypeUtils _Type_array__1048_Utils = {
    array__1048_to_string,
    check_array__1048_string,
    string_to_array__1048,
    is_array__1048_double_convertion_allowed,
    array__1048_to_double,
    compare_array__1048,
    get_array__1048_signature,
    set_array__1048_default_value,
    sizeof(array__1048)
};

/****************************************************************
 ** Orientation_DetermineBGOrientation_LRBG_DataDctionary 
 ****************************************************************/

struct SimTypeVTable *pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable;

static SimEnumValUtils Orientation_DetermineBGOrientation_LRBG_DataDctionary_values[] = {
    { "DetermineBGOrientation_LRBG::DataDctionary::Single_Balise_Group", Single_Balise_Group_DetermineBGOrientation_LRBG_DataDctionary},
    { "Single_Balise_Group", Single_Balise_Group_DetermineBGOrientation_LRBG_DataDctionary},
    { "DetermineBGOrientation_LRBG::DataDctionary::DIR_Nominal", DIR_Nominal_DetermineBGOrientation_LRBG_DataDctionary},
    { "DIR_Nominal", DIR_Nominal_DetermineBGOrientation_LRBG_DataDctionary},
    { "DetermineBGOrientation_LRBG::DataDctionary::DIR_Reverse", DIR_Reverse_DetermineBGOrientation_LRBG_DataDctionary},
    { "DIR_Reverse", DIR_Reverse_DetermineBGOrientation_LRBG_DataDctionary},
};

int Orientation_DetermineBGOrientation_LRBG_DataDctionary_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable != NULL
        && pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Orientation_DetermineBGOrientation_LRBG_DataDctionary*)pValue, Orientation_DetermineBGOrientation_LRBG_DataDctionary_values, 6, pfnStrAppend, pData);
}

int string_to_Orientation_DetermineBGOrientation_LRBG_DataDctionary(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable != NULL) {
        nRet=string_to_VTable(str, pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Orientation_DetermineBGOrientation_LRBG_DataDctionary_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(Orientation_DetermineBGOrientation_LRBG_DataDctionary*)pValue = nTemp;
    }
    return nRet;
}

int is_Orientation_DetermineBGOrientation_LRBG_DataDctionary_double_convertion_allowed()
{
    if (pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable);
    }
    return 1;
}

void compare_Orientation_DetermineBGOrientation_LRBG_DataDctionary(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable != NULL
        && pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable->m_version >= Scv612
        && pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable->m_pfnCompare != NULL) {
        if (pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Orientation_DetermineBGOrientation_LRBG_DataDctionary*)pValue1), (int)(*(Orientation_DetermineBGOrientation_LRBG_DataDctionary*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Orientation_DetermineBGOrientation_LRBG_DataDctionary_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable != NULL) {
        return VTable_to_double(pValue, pSimOrientation_DetermineBGOrientation_LRBG_DataDctionaryVTable, nRetValue);
    }
    *nRetValue = (double)*((Orientation_DetermineBGOrientation_LRBG_DataDctionary*)pValue);
    return 1;
}

int get_Orientation_DetermineBGOrientation_LRBG_DataDctionary_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Orientation_DetermineBGOrientation_LRBG_DataDctionary_values, 6, pfnStrAppend, pData);
}

int set_Orientation_DetermineBGOrientation_LRBG_DataDctionary_default_value(void *pValue)
{
    *(Orientation_DetermineBGOrientation_LRBG_DataDctionary*)pValue = Single_Balise_Group_DetermineBGOrientation_LRBG_DataDctionary;
    return 1;
}

int check_Orientation_DetermineBGOrientation_LRBG_DataDctionary_string(const char *str, char **endptr)
{
    static Orientation_DetermineBGOrientation_LRBG_DataDctionary rTemp;
    return string_to_Orientation_DetermineBGOrientation_LRBG_DataDctionary(str, &rTemp, endptr);
}

SimTypeUtils _Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils = {
    Orientation_DetermineBGOrientation_LRBG_DataDctionary_to_string,
    check_Orientation_DetermineBGOrientation_LRBG_DataDctionary_string,
    string_to_Orientation_DetermineBGOrientation_LRBG_DataDctionary,
    is_Orientation_DetermineBGOrientation_LRBG_DataDctionary_double_convertion_allowed,
    Orientation_DetermineBGOrientation_LRBG_DataDctionary_to_double,
    compare_Orientation_DetermineBGOrientation_LRBG_DataDctionary,
    get_Orientation_DetermineBGOrientation_LRBG_DataDctionary_signature,
    set_Orientation_DetermineBGOrientation_LRBG_DataDctionary_default_value,
    sizeof(Orientation_DetermineBGOrientation_LRBG_DataDctionary)
};

/****************************************************************
 ** ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs 
 ****************************************************************/

struct SimTypeVTable *pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable;

int ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable != NULL
        && pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__1048_to_string(pValue, pfnStrAppend, pData);
}

int string_to_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable != NULL) {
        nRet=string_to_VTable(str, pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__1048(str, pValue, endptr);
    }
    return nRet;
}

int is_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_double_convertion_allowed()
{
    if (pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable);
    }
    return is_array__1048_double_convertion_allowed();
}

void compare_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable != NULL
        && pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_version >= Scv612
        && pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnCompare != NULL) {
        if (pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__1048(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_double(const void *pValue, double *nRetValue)
{
    if (pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable != NULL) {
        return VTable_to_double(pValue, pSimListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGsVTable, nRetValue);
    }
    return array__1048_to_double(pValue, nRetValue);
}

int get_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__1048_signature(pfnStrAppend, pData);
}

int set_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_default_value(void *pValue)
{
    return set_array__1048_default_value(pValue);
}

int check_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_string(const char *str, char **endptr)
{
    static ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs rTemp;
    return string_to_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs(str, &rTemp, endptr);
}

SimTypeUtils _Type_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils = {
    ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_string,
    check_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_string,
    string_to_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs,
    is_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_double_convertion_allowed,
    ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_double,
    compare_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs,
    get_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_signature,
    set_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_default_value,
    sizeof(ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs)
};

/****************************************************************
 ** CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG 
 ****************************************************************/

struct SimTypeVTable *pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable;

int CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != NULL
        && pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1043_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != NULL) {
        nRet=string_to_VTable(str, pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1043(str, pValue, endptr);
    }
    return nRet;
}

int is_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_double_convertion_allowed()
{
    if (pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable);
    }
    return is_struct__1043_double_convertion_allowed();
}

void compare_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != NULL
        && pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_version >= Scv612
        && pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnCompare != NULL) {
        if (pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1043(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != NULL) {
        return VTable_to_double(pValue, pSimCurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable, nRetValue);
    }
    return struct__1043_to_double(pValue, nRetValue);
}

int get_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1043_signature(pfnStrAppend, pData);
}

int set_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_default_value(void *pValue)
{
    return set_struct__1043_default_value(pValue);
}

int check_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string(const char *str, char **endptr)
{
    static CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG rTemp;
    return string_to_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(str, &rTemp, endptr);
}

SimTypeUtils _Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils = {
    CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string,
    check_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string,
    string_to_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG,
    is_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_double_convertion_allowed,
    CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double,
    compare_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG,
    get_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature,
    set_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_default_value,
    sizeof(CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG)
};

/****************************************************************
 ** Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG 
 ****************************************************************/

struct SimTypeVTable *pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable;

int Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != NULL
        && pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1039_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != NULL) {
        nRet=string_to_VTable(str, pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1039(str, pValue, endptr);
    }
    return nRet;
}

int is_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_double_convertion_allowed()
{
    if (pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable);
    }
    return is_struct__1039_double_convertion_allowed();
}

void compare_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != NULL
        && pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_version >= Scv612
        && pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnCompare != NULL) {
        if (pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1039(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable != NULL) {
        return VTable_to_double(pValue, pSimPosition_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBGVTable, nRetValue);
    }
    return struct__1039_to_double(pValue, nRetValue);
}

int get_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1039_signature(pfnStrAppend, pData);
}

int set_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_default_value(void *pValue)
{
    return set_struct__1039_default_value(pValue);
}

int check_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string(const char *str, char **endptr)
{
    static Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG rTemp;
    return string_to_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(str, &rTemp, endptr);
}

SimTypeUtils _Type_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils = {
    Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string,
    check_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string,
    string_to_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG,
    is_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_double_convertion_allowed,
    Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double,
    compare_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG,
    get_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature,
    set_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_default_value,
    sizeof(Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG)
};

/****************************************************************
 ** FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage 
 ****************************************************************/

struct SimTypeVTable *pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable;

int FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable != NULL
        && pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1034_to_string(pValue, pfnStrAppend, pData);
}

int string_to_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable != NULL) {
        nRet=string_to_VTable(str, pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1034(str, pValue, endptr);
    }
    return nRet;
}

int is_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_double_convertion_allowed()
{
    if (pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable);
    }
    return is_struct__1034_double_convertion_allowed();
}

void compare_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable != NULL
        && pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_version >= Scv612
        && pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnCompare != NULL) {
        if (pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1034(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_double(const void *pValue, double *nRetValue)
{
    if (pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable != NULL) {
        return VTable_to_double(pValue, pSimFilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessageVTable, nRetValue);
    }
    return struct__1034_to_double(pValue, nRetValue);
}

int get_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1034_signature(pfnStrAppend, pData);
}

int set_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_default_value(void *pValue)
{
    return set_struct__1034_default_value(pValue);
}

int check_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_string(const char *str, char **endptr)
{
    static FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage rTemp;
    return string_to_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(str, &rTemp, endptr);
}

SimTypeUtils _Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils = {
    FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_string,
    check_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_string,
    string_to_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage,
    is_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_double_convertion_allowed,
    FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_double,
    compare_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage,
    get_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_signature,
    set_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_default_value,
    sizeof(FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage)
};

/****************************************************************
 ** Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

static SimEnumValUtils Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_values[] = {
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Reverse", Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "Q_DIRTRAIN__Reverse", Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Nominal", Q_DIRTRAIN__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "Q_DIRTRAIN__Nominal", Q_DIRTRAIN__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Unknown", Q_DIRTRAIN__Unknown_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "Q_DIRTRAIN__Unknown", Q_DIRTRAIN__Unknown_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN__Spare", Q_DIRTRAIN__Spare_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "Q_DIRTRAIN__Spare", Q_DIRTRAIN__Spare_DetermineBGOrientation_LRBG_DataDctionary_Variable},
};

int Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue, Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 8, pfnStrAppend, pData);
}

int string_to_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 8, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return 1;
}

void compare_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue1), (int)(*(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue);
    return 1;
}

int get_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 8, pfnStrAppend, pData);
}

int set_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    *(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable;
    return 1;
}

int check_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

static SimEnumValUtils M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_values[] = {
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__200_mm", M_PLATFORM__200_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_PLATFORM__200_mm", M_PLATFORM__200_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__300_380_mm", M_PLATFORM__300_380_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_PLATFORM__300_380_mm", M_PLATFORM__300_380_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__550_mm", M_PLATFORM__550_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_PLATFORM__550_mm", M_PLATFORM__550_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__580_mm", M_PLATFORM__580_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_PLATFORM__580_mm", M_PLATFORM__580_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__680_mm", M_PLATFORM__680_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_PLATFORM__680_mm", M_PLATFORM__680_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__685_mm", M_PLATFORM__685_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_PLATFORM__685_mm", M_PLATFORM__685_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__730_mm", M_PLATFORM__730_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_PLATFORM__730_mm", M_PLATFORM__730_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__760_mm", M_PLATFORM__760_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_PLATFORM__760_mm", M_PLATFORM__760_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__840_mm", M_PLATFORM__840_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_PLATFORM__840_mm", M_PLATFORM__840_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__900_mm", M_PLATFORM__900_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_PLATFORM__900_mm", M_PLATFORM__900_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__915_mm", M_PLATFORM__915_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_PLATFORM__915_mm", M_PLATFORM__915_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__920_mm", M_PLATFORM__920_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_PLATFORM__920_mm", M_PLATFORM__920_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__960_mm", M_PLATFORM__960_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_PLATFORM__960_mm", M_PLATFORM__960_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM__1100_mm", M_PLATFORM__1100_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_PLATFORM__1100_mm", M_PLATFORM__1100_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable},
};

int M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue, M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 28, pfnStrAppend, pData);
}

int string_to_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 28, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = nTemp;
    }
    return nRet;
}

int is_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return 1;
}

void compare_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue1), (int)(*(M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimM_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    *nRetValue = (double)*((M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue);
    return 1;
}

int get_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 28, pfnStrAppend, pData);
}

int set_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    *(M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = M_PLATFORM__200_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable;
    return 1;
}

int check_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

static SimEnumValUtils N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_values[] = {
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::one_balise_in_the_group", one_balise_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "one_balise_in_the_group", one_balise_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::two_balises_in_the_group", two_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "two_balises_in_the_group", two_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::tree_balises_in_the_group", tree_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "tree_balises_in_the_group", tree_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::four_balises_in_the_group", four_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "four_balises_in_the_group", four_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::five_balises_in_the_group", five_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "five_balises_in_the_group", five_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::six_balises_in_the_group", six_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "six_balises_in_the_group", six_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::seven_balises_in_the_group", seven_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "seven_balises_in_the_group", seven_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::eight_balises_in_the_group", eight_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "eight_balises_in_the_group", eight_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
};

int N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue, N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 16, pfnStrAppend, pData);
}

int string_to_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 16, endptr);
        if (pValue != NULL && nRet != 0)
            *(N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = nTemp;
    }
    return nRet;
}

int is_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return 1;
}

void compare_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue1), (int)(*(N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimN_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    *nRetValue = (double)*((N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue);
    return 1;
}

int get_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 16, pfnStrAppend, pData);
}

int set_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    *(N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = one_balise_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable;
    return 1;
}

int check_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

static SimEnumValUtils N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_values[] = {
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_1th", I_am_the_1th_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "I_am_the_1th", I_am_the_1th_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_2nd", I_am_the_2nd_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "I_am_the_2nd", I_am_the_2nd_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_3rd", I_am_the_3rd_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "I_am_the_3rd", I_am_the_3rd_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_4th", I_am_the_4th_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "I_am_the_4th", I_am_the_4th_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_5th", I_am_the_5th_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "I_am_the_5th", I_am_the_5th_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_6th", I_am_the_6th_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "I_am_the_6th", I_am_the_6th_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_7th", I_am_the_7th_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "I_am_the_7th", I_am_the_7th_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::I_am_the_8th", I_am_the_8th_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "I_am_the_8th", I_am_the_8th_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::none", none_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "none", none_DetermineBGOrientation_LRBG_DataDctionary_Variable},
};

int N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue, N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 18, pfnStrAppend, pData);
}

int string_to_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 18, endptr);
        if (pValue != NULL && nRet != 0)
            *(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = nTemp;
    }
    return nRet;
}

int is_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return 1;
}

void compare_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue1), (int)(*(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimN_PIG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    *nRetValue = (double)*((N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue);
    return 1;
}

int get_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 18, pfnStrAppend, pData);
}

int set_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    *(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = I_am_the_1th_DetermineBGOrientation_LRBG_DataDctionary_Variable;
    return 1;
}

int check_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

static SimEnumValUtils Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_values[] = {
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_MEDIA__Balise", Q_MEDIA__Balise_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "Q_MEDIA__Balise", Q_MEDIA__Balise_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_MEDIA__Loop", Q_MEDIA__Loop_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "Q_MEDIA__Loop", Q_MEDIA__Loop_DetermineBGOrientation_LRBG_DataDctionary_Variable},
};

int Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue, Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, pfnStrAppend, pData);
}

int string_to_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return 1;
}

void compare_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue1), (int)(*(Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue);
    return 1;
}

int get_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, pfnStrAppend, pData);
}

int set_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    *(Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = Q_MEDIA__Balise_DetermineBGOrientation_LRBG_DataDctionary_Variable;
    return 1;
}

int check_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

static SimEnumValUtils Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_values[] = {
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_UPDOWN__Down_link_telegram", Q_UPDOWN__Down_link_telegram_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "Q_UPDOWN__Down_link_telegram", Q_UPDOWN__Down_link_telegram_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_UPDOWN__Up_link_telegram", Q_UPDOWN__Up_link_telegram_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "Q_UPDOWN__Up_link_telegram", Q_UPDOWN__Up_link_telegram_DetermineBGOrientation_LRBG_DataDctionary_Variable},
};

int Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue, Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, pfnStrAppend, pData);
}

int string_to_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return 1;
}

void compare_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue1), (int)(*(Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue);
    return 1;
}

int get_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, pfnStrAppend, pData);
}

int set_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    *(Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = Q_UPDOWN__Down_link_telegram_DetermineBGOrientation_LRBG_DataDctionary_Variable;
    return 1;
}

int check_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

static SimEnumValUtils Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_values[] = {
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_LINK__Unlinked", Q_LINK__Unlinked_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "Q_LINK__Unlinked", Q_LINK__Unlinked_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_LINK__Linked", Q_LINK__Linked_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "Q_LINK__Linked", Q_LINK__Linked_DetermineBGOrientation_LRBG_DataDctionary_Variable},
};

int Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue, Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, pfnStrAppend, pData);
}

int string_to_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return 1;
}

void compare_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue1), (int)(*(Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_LINK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue);
    return 1;
}

int get_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, pfnStrAppend, pData);
}

int set_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    *(Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = Q_LINK__Unlinked_DetermineBGOrientation_LRBG_DataDctionary_Variable;
    return 1;
}

int check_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

int NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_BG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

int NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_C_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

static SimEnumValUtils M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_values[] = {
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MCOUNT__The_telegram_never_fits_any_message_of_the_group", M_MCOUNT__The_telegram_never_fits_any_message_of_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MCOUNT__The_telegram_never_fits_any_message_of_the_group", M_MCOUNT__The_telegram_never_fits_any_message_of_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MCOUNT__The_telegram_fits_with_all_telegrams_of_the_same_balise_group", M_MCOUNT__The_telegram_fits_with_all_telegrams_of_the_same_balise_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MCOUNT__The_telegram_fits_with_all_telegrams_of_the_same_balise_group", M_MCOUNT__The_telegram_fits_with_all_telegrams_of_the_same_balise_group_DetermineBGOrientation_LRBG_DataDctionary_Variable},
};

int M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue, M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, pfnStrAppend, pData);
}

int string_to_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = nTemp;
    }
    return nRet;
}

int is_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return 1;
}

void compare_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue1), (int)(*(M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimM_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    *nRetValue = (double)*((M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue);
    return 1;
}

int get_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, pfnStrAppend, pData);
}

int set_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    *(M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = M_MCOUNT__The_telegram_never_fits_any_message_of_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable;
    return 1;
}

int check_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

static SimEnumValUtils M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_values[] = {
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_DUP__No_duplicates", M_DUP__No_duplicates_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_DUP__No_duplicates", M_DUP__No_duplicates_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_DUP__This_balise_is_a_duplicate_of_the_next_balise__seen_in_the_nominal_direction_of_the_balise_group__", _2_M_DUP__This_balise_is_a_duplicate_of_the_next_balise__seen_in_the_nominal_direction_of_the_balise_group___DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_DUP__This_balise_is_a_duplicate_of_the_next_balise__seen_in_the_nominal_direction_of_the_balise_group__", _2_M_DUP__This_balise_is_a_duplicate_of_the_next_balise__seen_in_the_nominal_direction_of_the_balise_group___DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_DUP__This_balise_is_a_duplicate_of_the_previous_balise__seen_in_the_nominal_direction_of_the_balise_group__", M_DUP__This_balise_is_a_duplicate_of_the_previous_balise__seen_in_the_nominal_direction_of_the_balise_group___DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_DUP__This_balise_is_a_duplicate_of_the_previous_balise__seen_in_the_nominal_direction_of_the_balise_group__", M_DUP__This_balise_is_a_duplicate_of_the_previous_balise__seen_in_the_nominal_direction_of_the_balise_group___DetermineBGOrientation_LRBG_DataDctionary_Variable},
};

int M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue, M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 6, pfnStrAppend, pData);
}

int string_to_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = nTemp;
    }
    return nRet;
}

int is_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return 1;
}

void compare_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue1), (int)(*(M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimM_DUP_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    *nRetValue = (double)*((M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue);
    return 1;
}

int get_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 6, pfnStrAppend, pData);
}

int set_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    *(M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = M_DUP__No_duplicates_DetermineBGOrientation_LRBG_DataDctionary_Variable;
    return 1;
}

int check_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

static SimEnumValUtils M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_values[] = {
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_0", M_LEVELTR__Level_0_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_LEVELTR__Level_0", M_LEVELTR__Level_0_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_NTC_specified_by_NID_NTC", M_LEVELTR__Level_NTC_specified_by_NID_NTC_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_LEVELTR__Level_NTC_specified_by_NID_NTC", M_LEVELTR__Level_NTC_specified_by_NID_NTC_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_1", M_LEVELTR__Level_1_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_LEVELTR__Level_1", M_LEVELTR__Level_1_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_2", M_LEVELTR__Level_2_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_LEVELTR__Level_2", M_LEVELTR__Level_2_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR__Level_3", M_LEVELTR__Level_3_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_LEVELTR__Level_3", M_LEVELTR__Level_3_DetermineBGOrientation_LRBG_DataDctionary_Variable},
};

int M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue, M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 10, pfnStrAppend, pData);
}

int string_to_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 10, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = nTemp;
    }
    return nRet;
}

int is_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return 1;
}

void compare_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue1), (int)(*(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimM_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    *nRetValue = (double)*((M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue);
    return 1;
}

int get_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 10, pfnStrAppend, pData);
}

int set_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    *(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = M_LEVELTR__Level_0_DetermineBGOrientation_LRBG_DataDctionary_Variable;
    return 1;
}

int check_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

static SimEnumValUtils M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_values[] = {
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Full_Supervision", M_MODE__Full_Supervision_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__Full_Supervision", M_MODE__Full_Supervision_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__On_Sight", M_MODE__On_Sight_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__On_Sight", M_MODE__On_Sight_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Staff_Responsible", M_MODE__Staff_Responsible_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__Staff_Responsible", M_MODE__Staff_Responsible_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Shunting", M_MODE__Shunting_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__Shunting", M_MODE__Shunting_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Unfitted", M_MODE__Unfitted_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__Unfitted", M_MODE__Unfitted_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Sleeping", M_MODE__Sleeping_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__Sleeping", M_MODE__Sleeping_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Stand_By", M_MODE__Stand_By_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__Stand_By", M_MODE__Stand_By_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Trip", M_MODE__Trip_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__Trip", M_MODE__Trip_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Post_Trip", M_MODE__Post_Trip_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__Post_Trip", M_MODE__Post_Trip_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__System_Failure", M_MODE__System_Failure_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__System_Failure", M_MODE__System_Failure_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Isolation", M_MODE__Isolation_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__Isolation", M_MODE__Isolation_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Non_Leading", M_MODE__Non_Leading_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__Non_Leading", M_MODE__Non_Leading_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Limited_Supervision", M_MODE__Limited_Supervision_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__Limited_Supervision", M_MODE__Limited_Supervision_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__National_System", M_MODE__National_System_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__National_System", M_MODE__National_System_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Reversing", M_MODE__Reversing_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__Reversing", M_MODE__Reversing_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE__Passive_Shunting", M_MODE__Passive_Shunting_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_MODE__Passive_Shunting", M_MODE__Passive_Shunting_DetermineBGOrientation_LRBG_DataDctionary_Variable},
};

int M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue, M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 32, pfnStrAppend, pData);
}

int string_to_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 32, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = nTemp;
    }
    return nRet;
}

int is_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return 1;
}

void compare_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue1), (int)(*(M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimM_MODE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    *nRetValue = (double)*((M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue);
    return 1;
}

int get_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 32, pfnStrAppend, pData);
}

int set_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    *(M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = M_MODE__Full_Supervision_DetermineBGOrientation_LRBG_DataDctionary_Variable;
    return 1;
}

int check_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

static SimEnumValUtils M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_values[] = {
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_ACK__No_acknowledgement_required", M_ACK__No_acknowledgement_required_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_ACK__No_acknowledgement_required", M_ACK__No_acknowledgement_required_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::M_ACK__Acknowledgement_required", M_ACK__Acknowledgement_required_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "M_ACK__Acknowledgement_required", M_ACK__Acknowledgement_required_DetermineBGOrientation_LRBG_DataDctionary_Variable},
};

int M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue, M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, pfnStrAppend, pData);
}

int string_to_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = nTemp;
    }
    return nRet;
}

int is_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return 1;
}

void compare_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue1), (int)(*(M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimM_ACK_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    *nRetValue = (double)*((M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue);
    return 1;
}

int get_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, pfnStrAppend, pData);
}

int set_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    *(M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = M_ACK__No_acknowledgement_required_DetermineBGOrientation_LRBG_DataDctionary_Variable;
    return 1;
}

int check_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

int NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

int L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_real_to_string(pValue, pfnStrAppend, pData);
}

int string_to_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_real(str, pValue, endptr);
    }
    return nRet;
}

int is_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return is_kcg_real_double_convertion_allowed();
}

void compare_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_real(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimL_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    return kcg_real_to_double(pValue, nRetValue);
}

int get_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_real_signature(pfnStrAppend, pData);
}

int set_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    return set_kcg_real_default_value(pValue);
}

int check_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

int T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_real_to_string(pValue, pfnStrAppend, pData);
}

int string_to_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_real(str, pValue, endptr);
    }
    return nRet;
}

int is_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return is_kcg_real_double_convertion_allowed();
}

void compare_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_real(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimT_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    return kcg_real_to_double(pValue, nRetValue);
}

int get_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_real_signature(pfnStrAppend, pData);
}

int set_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    return set_kcg_real_default_value(pValue);
}

int check_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

int NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return kcg_int_to_string(pValue, pfnStrAppend, pData);
}

int string_to_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_kcg_int(str, pValue, endptr);
    }
    return nRet;
}

int is_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return is_kcg_int_double_convertion_allowed();
}

void compare_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_int(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimNID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    return kcg_int_to_double(pValue, nRetValue);
}

int get_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_kcg_int_signature(pfnStrAppend, pData);
}

int set_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    return set_kcg_int_default_value(pValue);
}

int check_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/

struct SimTypeVTable *pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable;

static SimEnumValUtils Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_values[] = {
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_ORIENTATION__The_balise_group_has_been_passed_by_the_train_in_reverse_direction", _1_Q_ORIENTATION__The_balise_group_has_been_passed_by_the_train_in_reverse_direction_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "Q_ORIENTATION__The_balise_group_has_been_passed_by_the_train_in_reverse_direction", _1_Q_ORIENTATION__The_balise_group_has_been_passed_by_the_train_in_reverse_direction_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_ORIENTATION__The_balise_group_has_been_passed_by_the_train_in_nominal_direction", Q_ORIENTATION__The_balise_group_has_been_passed_by_the_train_in_nominal_direction_DetermineBGOrientation_LRBG_DataDctionary_Variable},
    { "Q_ORIENTATION__The_balise_group_has_been_passed_by_the_train_in_nominal_direction", Q_ORIENTATION__The_balise_group_has_been_passed_by_the_train_in_nominal_direction_DetermineBGOrientation_LRBG_DataDctionary_Variable},
};

int Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue, Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, pfnStrAppend, pData);
}

int string_to_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed()
{
    if (pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable);
    }
    return 1;
}

void compare_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL
        && pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv612
        && pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare != NULL) {
        if (pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue1), (int)(*(Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_VariableVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue);
    return 1;
}

int get_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_values, 4, pfnStrAppend, pData);
}

int set_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue)
{
    *(Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable*)pValue = _1_Q_ORIENTATION__The_balise_group_has_been_passed_by_the_train_in_reverse_direction_DetermineBGOrientation_LRBG_DataDctionary_Variable;
    return 1;
}

int check_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr)
{
    static Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable rTemp;
    return string_to_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils = {
    Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string,
    check_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_string,
    string_to_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    is_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_double_convertion_allowed,
    Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double,
    compare_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable,
    get_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature,
    set_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value,
    sizeof(Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable)
};

/****************************************************************
 ** CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage 
 ****************************************************************/

struct SimTypeVTable *pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable;

int CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL
        && pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1029_to_string(pValue, pfnStrAppend, pData);
}

int string_to_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL) {
        nRet=string_to_VTable(str, pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1029(str, pValue, endptr);
    }
    return nRet;
}

int is_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_double_convertion_allowed()
{
    if (pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable);
    }
    return is_struct__1029_double_convertion_allowed();
}

void compare_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL
        && pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_version >= Scv612
        && pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnCompare != NULL) {
        if (pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1029(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL) {
        return VTable_to_double(pValue, pSimCheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable, nRetValue);
    }
    return struct__1029_to_double(pValue, nRetValue);
}

int get_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1029_signature(pfnStrAppend, pData);
}

int set_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value(void *pValue)
{
    return set_struct__1029_default_value(pValue);
}

int check_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char *str, char **endptr)
{
    static CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage rTemp;
    return string_to_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(str, &rTemp, endptr);
}

SimTypeUtils _Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils = {
    CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string,
    check_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string,
    string_to_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage,
    is_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_double_convertion_allowed,
    CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double,
    compare_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage,
    get_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature,
    set_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value,
    sizeof(CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage)
};

/****************************************************************
 ** HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage 
 ****************************************************************/

struct SimTypeVTable *pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable;

int HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL
        && pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptString, pValue), pData);
    }
    return array__1026_to_string(pValue, pfnStrAppend, pData);
}

int string_to_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL) {
        nRet=string_to_VTable(str, pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_array__1026(str, pValue, endptr);
    }
    return nRet;
}

int is_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_double_convertion_allowed()
{
    if (pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable);
    }
    return is_array__1026_double_convertion_allowed();
}

void compare_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL
        && pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_version >= Scv612
        && pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnCompare != NULL) {
        if (pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_array__1026(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(const void *pValue, double *nRetValue)
{
    if (pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL) {
        return VTable_to_double(pValue, pSimHederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable, nRetValue);
    }
    return array__1026_to_double(pValue, nRetValue);
}

int get_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_array__1026_signature(pfnStrAppend, pData);
}

int set_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value(void *pValue)
{
    return set_array__1026_default_value(pValue);
}

int check_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char *str, char **endptr)
{
    static HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage rTemp;
    return string_to_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(str, &rTemp, endptr);
}

SimTypeUtils _Type_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils = {
    HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string,
    check_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string,
    string_to_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage,
    is_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_double_convertion_allowed,
    HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double,
    compare_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage,
    get_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature,
    set_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value,
    sizeof(HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage)
};

/****************************************************************
 ** HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage 
 ****************************************************************/

struct SimTypeVTable *pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable;

int HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL
        && pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1021_to_string(pValue, pfnStrAppend, pData);
}

int string_to_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL) {
        nRet=string_to_VTable(str, pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1021(str, pValue, endptr);
    }
    return nRet;
}

int is_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_double_convertion_allowed()
{
    if (pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable);
    }
    return is_struct__1021_double_convertion_allowed();
}

void compare_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL
        && pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_version >= Scv612
        && pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnCompare != NULL) {
        if (pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1021(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(const void *pValue, double *nRetValue)
{
    if (pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL) {
        return VTable_to_double(pValue, pSimHeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable, nRetValue);
    }
    return struct__1021_to_double(pValue, nRetValue);
}

int get_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1021_signature(pfnStrAppend, pData);
}

int set_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value(void *pValue)
{
    return set_struct__1021_default_value(pValue);
}

int check_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char *str, char **endptr)
{
    static HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage rTemp;
    return string_to_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(str, &rTemp, endptr);
}

SimTypeUtils _Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils = {
    HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string,
    check_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string,
    string_to_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage,
    is_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_double_convertion_allowed,
    HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double,
    compare_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage,
    get_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature,
    set_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value,
    sizeof(HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage)
};

/****************************************************************
 ** Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage 
 ****************************************************************/

struct SimTypeVTable *pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable;

int Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL
        && pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1017_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL) {
        nRet=string_to_VTable(str, pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1017(str, pValue, endptr);
    }
    return nRet;
}

int is_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_double_convertion_allowed()
{
    if (pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable);
    }
    return is_struct__1017_double_convertion_allowed();
}

void compare_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL
        && pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_version >= Scv612
        && pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnCompare != NULL) {
        if (pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1017(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(const void *pValue, double *nRetValue)
{
    if (pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable != NULL) {
        return VTable_to_double(pValue, pSimFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessageVTable, nRetValue);
    }
    return struct__1017_to_double(pValue, nRetValue);
}

int get_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1017_signature(pfnStrAppend, pData);
}

int set_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value(void *pValue)
{
    return set_struct__1017_default_value(pValue);
}

int check_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char *str, char **endptr)
{
    static Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage rTemp;
    return string_to_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(str, &rTemp, endptr);
}

SimTypeUtils _Type_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils = {
    Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string,
    check_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string,
    string_to_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage,
    is_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_double_convertion_allowed,
    Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double,
    compare_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage,
    get_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature,
    set_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value,
    sizeof(Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage)
};

/****************************************************************
 ** Header_DetermineBGOrientation_LRBG_DataDctionary_BTM 
 ****************************************************************/

struct SimTypeVTable *pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable;

int Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != NULL
        && pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__1004_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != NULL) {
        nRet=string_to_VTable(str, pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__1004(str, pValue, endptr);
    }
    return nRet;
}

int is_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_double_convertion_allowed()
{
    if (pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable);
    }
    return is_struct__1004_double_convertion_allowed();
}

void compare_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != NULL
        && pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_version >= Scv612
        && pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnCompare != NULL) {
        if (pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__1004(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != NULL) {
        return VTable_to_double(pValue, pSimHeader_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable, nRetValue);
    }
    return struct__1004_to_double(pValue, nRetValue);
}

int get_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__1004_signature(pfnStrAppend, pData);
}

int set_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_default_value(void *pValue)
{
    return set_struct__1004_default_value(pValue);
}

int check_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_string(const char *str, char **endptr)
{
    static Header_DetermineBGOrientation_LRBG_DataDctionary_BTM rTemp;
    return string_to_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(str, &rTemp, endptr);
}

SimTypeUtils _Type_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils = {
    Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string,
    check_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_string,
    string_to_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM,
    is_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_double_convertion_allowed,
    Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double,
    compare_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM,
    get_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature,
    set_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_default_value,
    sizeof(Header_DetermineBGOrientation_LRBG_DataDctionary_BTM)
};

/****************************************************************
 ** AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM 
 ****************************************************************/

struct SimTypeVTable *pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable;

static SimEnumValUtils AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_values[] = {
    { "DetermineBGOrientation_LRBG::DataDctionary::BTM::value1", value1_DetermineBGOrientation_LRBG_DataDctionary_BTM},
    { "value1", value1_DetermineBGOrientation_LRBG_DataDctionary_BTM},
};

int AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != NULL
        && pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM*)pValue, AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_values, 2, pfnStrAppend, pData);
}

int string_to_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != NULL) {
        nRet=string_to_VTable(str, pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_values, 2, endptr);
        if (pValue != NULL && nRet != 0)
            *(AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM*)pValue = nTemp;
    }
    return nRet;
}

int is_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_double_convertion_allowed()
{
    if (pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable);
    }
    return 1;
}

void compare_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != NULL
        && pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_version >= Scv612
        && pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnCompare != NULL) {
        if (pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM*)pValue1), (int)(*(AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double(const void *pValue, double *nRetValue)
{
    if (pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable != NULL) {
        return VTable_to_double(pValue, pSimAdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTMVTable, nRetValue);
    }
    *nRetValue = (double)*((AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM*)pValue);
    return 1;
}

int get_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_values, 2, pfnStrAppend, pData);
}

int set_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_default_value(void *pValue)
{
    *(AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM*)pValue = value1_DetermineBGOrientation_LRBG_DataDctionary_BTM;
    return 1;
}

int check_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_string(const char *str, char **endptr)
{
    static AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM rTemp;
    return string_to_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM(str, &rTemp, endptr);
}

SimTypeUtils _Type_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils = {
    AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string,
    check_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_string,
    string_to_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM,
    is_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_double_convertion_allowed,
    AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double,
    compare_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM,
    get_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature,
    set_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_default_value,
    sizeof(AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM)
};

/****************************************************************
 ** TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo 
 ****************************************************************/

struct SimTypeVTable *pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable;

int TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable != NULL
        && pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__999_to_string(pValue, pfnStrAppend, pData);
}

int string_to_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable != NULL) {
        nRet=string_to_VTable(str, pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__999(str, pValue, endptr);
    }
    return nRet;
}

int is_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_double_convertion_allowed()
{
    if (pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable);
    }
    return is_struct__999_double_convertion_allowed();
}

void compare_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable != NULL
        && pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_version >= Scv612
        && pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnCompare != NULL) {
        if (pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__999(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable != NULL) {
        return VTable_to_double(pValue, pSimTrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfoVTable, nRetValue);
    }
    return struct__999_to_double(pValue, nRetValue);
}

int get_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__999_signature(pfnStrAppend, pData);
}

int set_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_default_value(void *pValue)
{
    return set_struct__999_default_value(pValue);
}

int check_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_string(const char *str, char **endptr)
{
    static TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo rTemp;
    return string_to_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo(str, &rTemp, endptr);
}

SimTypeUtils _Type_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils = {
    TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_to_string,
    check_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_string,
    string_to_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo,
    is_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_double_convertion_allowed,
    TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_to_double,
    compare_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo,
    get_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_signature,
    set_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_default_value,
    sizeof(TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo)
};

/****************************************************************
 ** Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets 
 ****************************************************************/

struct SimTypeVTable *pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable;

int Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable != NULL
        && pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__993_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable != NULL) {
        nRet=string_to_VTable(str, pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__993(str, pValue, endptr);
    }
    return nRet;
}

int is_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_double_convertion_allowed()
{
    if (pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable);
    }
    return is_struct__993_double_convertion_allowed();
}

void compare_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable != NULL
        && pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable->m_version >= Scv612
        && pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable->m_pfnCompare != NULL) {
        if (pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__993(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable != NULL) {
        return VTable_to_double(pValue, pSimTrain_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable, nRetValue);
    }
    return struct__993_to_double(pValue, nRetValue);
}

int get_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__993_signature(pfnStrAppend, pData);
}

int set_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_default_value(void *pValue)
{
    return set_struct__993_default_value(pValue);
}

int check_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_string(const char *str, char **endptr)
{
    static Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets rTemp;
    return string_to_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(str, &rTemp, endptr);
}

SimTypeUtils _Type_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils = {
    Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_string,
    check_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_string,
    string_to_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets,
    is_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_double_convertion_allowed,
    Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_double,
    compare_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets,
    get_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_signature,
    set_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_default_value,
    sizeof(Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets)
};

/****************************************************************
 ** Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets 
 ****************************************************************/

struct SimTypeVTable *pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable;

int Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable != NULL
        && pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__980_to_string(pValue, pfnStrAppend, pData);
}

int string_to_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable != NULL) {
        nRet=string_to_VTable(str, pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__980(str, pValue, endptr);
    }
    return nRet;
}

int is_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_double_convertion_allowed()
{
    if (pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable);
    }
    return is_struct__980_double_convertion_allowed();
}

void compare_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable != NULL
        && pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable->m_version >= Scv612
        && pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable->m_pfnCompare != NULL) {
        if (pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__980(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_double(const void *pValue, double *nRetValue)
{
    if (pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable != NULL) {
        return VTable_to_double(pValue, pSimAssignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_PacketsVTable, nRetValue);
    }
    return struct__980_to_double(pValue, nRetValue);
}

int get_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__980_signature(pfnStrAppend, pData);
}

int set_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_default_value(void *pValue)
{
    return set_struct__980_default_value(pValue);
}

int check_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_string(const char *str, char **endptr)
{
    static Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets rTemp;
    return string_to_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets(str, &rTemp, endptr);
}

SimTypeUtils _Type_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils = {
    Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_string,
    check_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_string,
    string_to_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets,
    is_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_double_convertion_allowed,
    Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_double,
    compare_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets,
    get_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_signature,
    set_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_default_value,
    sizeof(Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets)
};

/****************************************************************
 ** RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport 
 ****************************************************************/

struct SimTypeVTable *pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable;

int RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable != NULL
        && pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__989_to_string(pValue, pfnStrAppend, pData);
}

int string_to_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable != NULL) {
        nRet=string_to_VTable(str, pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__989(str, pValue, endptr);
    }
    return nRet;
}

int is_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_double_convertion_allowed()
{
    if (pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable);
    }
    return is_struct__989_double_convertion_allowed();
}

void compare_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable != NULL
        && pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable->m_version >= Scv612
        && pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable->m_pfnCompare != NULL) {
        if (pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__989(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_to_double(const void *pValue, double *nRetValue)
{
    if (pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable != NULL) {
        return VTable_to_double(pValue, pSimRBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReportVTable, nRetValue);
    }
    return struct__989_to_double(pValue, nRetValue);
}

int get_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__989_signature(pfnStrAppend, pData);
}

int set_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_default_value(void *pValue)
{
    return set_struct__989_default_value(pValue);
}

int check_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_string(const char *str, char **endptr)
{
    static RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport rTemp;
    return string_to_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport(str, &rTemp, endptr);
}

SimTypeUtils _Type_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils = {
    RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_to_string,
    check_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_string,
    string_to_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport,
    is_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_double_convertion_allowed,
    RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_to_double,
    compare_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport,
    get_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_signature,
    set_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_default_value,
    sizeof(RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport)
};

#include "C:/Program Files (x86)/Esterel Technologies/SCADE R15/SCADE/lib/kcg_conv.c"
