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
 ** TrainInfo 
 ****************************************************************/

struct SimTypeVTable *pSimTrainInfoVTable;

static SimFieldUtils TrainInfo_fields[] = {
    {"m_leveltr", offsetof(TrainInfo,m_leveltr), &_Type_M_LEVELTR_Utils},
    {"m_mode", offsetof(TrainInfo,m_mode), &_Type_M_MODE_Utils},
};

int TrainInfo_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTrainInfoVTable != NULL
        && pSimTrainInfoVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTrainInfoVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, TrainInfo_fields, 2, pfnStrAppend, pData);
}

int string_to_TrainInfo(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTrainInfoVTable != NULL) {
        nRet=string_to_VTable(str, pSimTrainInfoVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, TrainInfo_fields, 2, endptr);
    }
    return nRet;
}

int is_TrainInfo_double_convertion_allowed()
{
    if (pSimTrainInfoVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTrainInfoVTable);
    }
    return 0;
}

void compare_TrainInfo(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTrainInfoVTable != NULL
        && pSimTrainInfoVTable->m_version >= Scv612
        && pSimTrainInfoVTable->m_pfnCompare != NULL) {
        if (pSimTrainInfoVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTrainInfoVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTrainInfoVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, TrainInfo_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int TrainInfo_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTrainInfoVTable != NULL) {
        return VTable_to_double(pValue, pSimTrainInfoVTable, nRetValue);
    }
    return 0;
}

int get_TrainInfo_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(TrainInfo_fields, 2, pfnStrAppend, pData);
}

int set_TrainInfo_default_value(void *pValue)
{
    set_M_LEVELTR_default_value(&(((TrainInfo*)pValue)->m_leveltr));
    set_M_MODE_default_value(&(((TrainInfo*)pValue)->m_mode));
    return 1;
}

int check_TrainInfo_string(const char *str, char **endptr)
{
    static TrainInfo rTemp;
    return string_to_TrainInfo(str, &rTemp, endptr);
}

SimTypeUtils _Type_TrainInfo_Utils = {
    TrainInfo_to_string,
    check_TrainInfo_string,
    string_to_TrainInfo,
    is_TrainInfo_double_convertion_allowed,
    TrainInfo_to_double,
    compare_TrainInfo,
    get_TrainInfo_signature,
    set_TrainInfo_default_value,
    sizeof(TrainInfo)
};

/****************************************************************
 ** CurrentLRBG 
 ****************************************************************/

struct SimTypeVTable *pSimCurrentLRBGVTable;

static SimFieldUtils CurrentLRBG_fields[] = {
    {"filteredbgmessage", offsetof(CurrentLRBG,filteredbgmessage), &_Type_FilteredBGMessage_Utils},
    {"position", offsetof(CurrentLRBG,position), &_Type_Position_Utils},
};

int CurrentLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCurrentLRBGVTable != NULL
        && pSimCurrentLRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCurrentLRBGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, CurrentLRBG_fields, 2, pfnStrAppend, pData);
}

int string_to_CurrentLRBG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCurrentLRBGVTable != NULL) {
        nRet=string_to_VTable(str, pSimCurrentLRBGVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, CurrentLRBG_fields, 2, endptr);
    }
    return nRet;
}

int is_CurrentLRBG_double_convertion_allowed()
{
    if (pSimCurrentLRBGVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCurrentLRBGVTable);
    }
    return 0;
}

void compare_CurrentLRBG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCurrentLRBGVTable != NULL
        && pSimCurrentLRBGVTable->m_version >= Scv612
        && pSimCurrentLRBGVTable->m_pfnCompare != NULL) {
        if (pSimCurrentLRBGVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCurrentLRBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCurrentLRBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, CurrentLRBG_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CurrentLRBG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCurrentLRBGVTable != NULL) {
        return VTable_to_double(pValue, pSimCurrentLRBGVTable, nRetValue);
    }
    return 0;
}

int get_CurrentLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(CurrentLRBG_fields, 2, pfnStrAppend, pData);
}

int set_CurrentLRBG_default_value(void *pValue)
{
    set_FilteredBGMessage_default_value(&(((CurrentLRBG*)pValue)->filteredbgmessage));
    set_Position_default_value(&(((CurrentLRBG*)pValue)->position));
    return 1;
}

int check_CurrentLRBG_string(const char *str, char **endptr)
{
    static CurrentLRBG rTemp;
    return string_to_CurrentLRBG(str, &rTemp, endptr);
}

SimTypeUtils _Type_CurrentLRBG_Utils = {
    CurrentLRBG_to_string,
    check_CurrentLRBG_string,
    string_to_CurrentLRBG,
    is_CurrentLRBG_double_convertion_allowed,
    CurrentLRBG_to_double,
    compare_CurrentLRBG,
    get_CurrentLRBG_signature,
    set_CurrentLRBG_default_value,
    sizeof(CurrentLRBG)
};

/****************************************************************
 ** FilteredBGMessage 
 ****************************************************************/

struct SimTypeVTable *pSimFilteredBGMessageVTable;

static SimFieldUtils FilteredBGMessage_fields[] = {
    {"q_dirlrbg", offsetof(FilteredBGMessage,q_dirlrbg), &_Type_Q_DIRTRAIN_Utils},
    {"checkedbgmessage", offsetof(FilteredBGMessage,checkedbgmessage), &_Type_CheckedBGMessage_Utils},
};

int FilteredBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimFilteredBGMessageVTable != NULL
        && pSimFilteredBGMessageVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFilteredBGMessageVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, FilteredBGMessage_fields, 2, pfnStrAppend, pData);
}

int string_to_FilteredBGMessage(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimFilteredBGMessageVTable != NULL) {
        nRet=string_to_VTable(str, pSimFilteredBGMessageVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, FilteredBGMessage_fields, 2, endptr);
    }
    return nRet;
}

int is_FilteredBGMessage_double_convertion_allowed()
{
    if (pSimFilteredBGMessageVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimFilteredBGMessageVTable);
    }
    return 0;
}

void compare_FilteredBGMessage(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimFilteredBGMessageVTable != NULL
        && pSimFilteredBGMessageVTable->m_version >= Scv612
        && pSimFilteredBGMessageVTable->m_pfnCompare != NULL) {
        if (pSimFilteredBGMessageVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimFilteredBGMessageVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimFilteredBGMessageVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, FilteredBGMessage_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int FilteredBGMessage_to_double(const void *pValue, double *nRetValue)
{
    if (pSimFilteredBGMessageVTable != NULL) {
        return VTable_to_double(pValue, pSimFilteredBGMessageVTable, nRetValue);
    }
    return 0;
}

int get_FilteredBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(FilteredBGMessage_fields, 2, pfnStrAppend, pData);
}

int set_FilteredBGMessage_default_value(void *pValue)
{
    set_Q_DIRTRAIN_default_value(&(((FilteredBGMessage*)pValue)->q_dirlrbg));
    set_CheckedBGMessage_default_value(&(((FilteredBGMessage*)pValue)->checkedbgmessage));
    return 1;
}

int check_FilteredBGMessage_string(const char *str, char **endptr)
{
    static FilteredBGMessage rTemp;
    return string_to_FilteredBGMessage(str, &rTemp, endptr);
}

SimTypeUtils _Type_FilteredBGMessage_Utils = {
    FilteredBGMessage_to_string,
    check_FilteredBGMessage_string,
    string_to_FilteredBGMessage,
    is_FilteredBGMessage_double_convertion_allowed,
    FilteredBGMessage_to_double,
    compare_FilteredBGMessage,
    get_FilteredBGMessage_signature,
    set_FilteredBGMessage_default_value,
    sizeof(FilteredBGMessage)
};

/****************************************************************
 ** CheckedBGMessage 
 ****************************************************************/

struct SimTypeVTable *pSimCheckedBGMessageVTable;

static SimFieldUtils CheckedBGMessage_fields[] = {
    {"headerflag", offsetof(CheckedBGMessage,headerflag), &_Type_HederArray_Utils},
    {"additionalinformation", offsetof(CheckedBGMessage,additionalinformation), &_Type_AdditionalInformation_Utils},
};

int CheckedBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimCheckedBGMessageVTable != NULL
        && pSimCheckedBGMessageVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimCheckedBGMessageVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, CheckedBGMessage_fields, 2, pfnStrAppend, pData);
}

int string_to_CheckedBGMessage(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimCheckedBGMessageVTable != NULL) {
        nRet=string_to_VTable(str, pSimCheckedBGMessageVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, CheckedBGMessage_fields, 2, endptr);
    }
    return nRet;
}

int is_CheckedBGMessage_double_convertion_allowed()
{
    if (pSimCheckedBGMessageVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimCheckedBGMessageVTable);
    }
    return 0;
}

void compare_CheckedBGMessage(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimCheckedBGMessageVTable != NULL
        && pSimCheckedBGMessageVTable->m_version >= Scv612
        && pSimCheckedBGMessageVTable->m_pfnCompare != NULL) {
        if (pSimCheckedBGMessageVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimCheckedBGMessageVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimCheckedBGMessageVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, CheckedBGMessage_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int CheckedBGMessage_to_double(const void *pValue, double *nRetValue)
{
    if (pSimCheckedBGMessageVTable != NULL) {
        return VTable_to_double(pValue, pSimCheckedBGMessageVTable, nRetValue);
    }
    return 0;
}

int get_CheckedBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(CheckedBGMessage_fields, 2, pfnStrAppend, pData);
}

int set_CheckedBGMessage_default_value(void *pValue)
{
    set_HederArray_default_value(&(((CheckedBGMessage*)pValue)->headerflag));
    set_AdditionalInformation_default_value(&(((CheckedBGMessage*)pValue)->additionalinformation));
    return 1;
}

int check_CheckedBGMessage_string(const char *str, char **endptr)
{
    static CheckedBGMessage rTemp;
    return string_to_CheckedBGMessage(str, &rTemp, endptr);
}

SimTypeUtils _Type_CheckedBGMessage_Utils = {
    CheckedBGMessage_to_string,
    check_CheckedBGMessage_string,
    string_to_CheckedBGMessage,
    is_CheckedBGMessage_double_convertion_allowed,
    CheckedBGMessage_to_double,
    compare_CheckedBGMessage,
    get_CheckedBGMessage_signature,
    set_CheckedBGMessage_default_value,
    sizeof(CheckedBGMessage)
};

/****************************************************************
 ** HederArray 
 ****************************************************************/

struct SimTypeVTable *pSimHederArrayVTable;

int HederArray_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimHederArrayVTable != NULL
        && pSimHederArrayVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimHederArrayVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, HeaderFlag_to_string, 8, sizeof(HeaderFlag), pfnStrAppend, pData);
}

int string_to_HederArray(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimHederArrayVTable != NULL) {
        nRet=string_to_VTable(str, pSimHederArrayVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_HeaderFlag_Utils, 8, sizeof(HeaderFlag), endptr);
    }
    return nRet;
}

int is_HederArray_double_convertion_allowed()
{
    if (pSimHederArrayVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimHederArrayVTable);
    }
    return 0;
}

void compare_HederArray(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimHederArrayVTable != NULL
        && pSimHederArrayVTable->m_version >= Scv612
        && pSimHederArrayVTable->m_pfnCompare != NULL) {
        if (pSimHederArrayVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimHederArrayVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimHederArrayVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_HeaderFlag, 8, sizeof(HeaderFlag), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int HederArray_to_double(const void *pValue, double *nRetValue)
{
    if (pSimHederArrayVTable != NULL) {
        return VTable_to_double(pValue, pSimHederArrayVTable, nRetValue);
    }
    return 0;
}

int get_HederArray_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 8; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_HeaderFlag_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_HederArray_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 8; i++)
        set_HeaderFlag_default_value(&((HeaderFlag*)pValue)[i]);
    return 1;
}

int check_HederArray_string(const char *str, char **endptr)
{
    static HederArray rTemp;
    return string_to_HederArray(str, &rTemp, endptr);
}

SimTypeUtils _Type_HederArray_Utils = {
    HederArray_to_string,
    check_HederArray_string,
    string_to_HederArray,
    is_HederArray_double_convertion_allowed,
    HederArray_to_double,
    compare_HederArray,
    get_HederArray_signature,
    set_HederArray_default_value,
    sizeof(HederArray)
};

/****************************************************************
 ** HeaderFlag 
 ****************************************************************/

struct SimTypeVTable *pSimHeaderFlagVTable;

static SimFieldUtils HeaderFlag_fields[] = {
    {"header", offsetof(HeaderFlag,header), &_Type_Header_Utils},
    {"flag", offsetof(HeaderFlag,flag), &_Type_Flag_Utils},
};

int HeaderFlag_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimHeaderFlagVTable != NULL
        && pSimHeaderFlagVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimHeaderFlagVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, HeaderFlag_fields, 2, pfnStrAppend, pData);
}

int string_to_HeaderFlag(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimHeaderFlagVTable != NULL) {
        nRet=string_to_VTable(str, pSimHeaderFlagVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, HeaderFlag_fields, 2, endptr);
    }
    return nRet;
}

int is_HeaderFlag_double_convertion_allowed()
{
    if (pSimHeaderFlagVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimHeaderFlagVTable);
    }
    return 0;
}

void compare_HeaderFlag(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimHeaderFlagVTable != NULL
        && pSimHeaderFlagVTable->m_version >= Scv612
        && pSimHeaderFlagVTable->m_pfnCompare != NULL) {
        if (pSimHeaderFlagVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimHeaderFlagVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimHeaderFlagVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, HeaderFlag_fields, 2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int HeaderFlag_to_double(const void *pValue, double *nRetValue)
{
    if (pSimHeaderFlagVTable != NULL) {
        return VTable_to_double(pValue, pSimHeaderFlagVTable, nRetValue);
    }
    return 0;
}

int get_HeaderFlag_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(HeaderFlag_fields, 2, pfnStrAppend, pData);
}

int set_HeaderFlag_default_value(void *pValue)
{
    set_Header_default_value(&(((HeaderFlag*)pValue)->header));
    set_Flag_default_value(&(((HeaderFlag*)pValue)->flag));
    return 1;
}

int check_HeaderFlag_string(const char *str, char **endptr)
{
    static HeaderFlag rTemp;
    return string_to_HeaderFlag(str, &rTemp, endptr);
}

SimTypeUtils _Type_HeaderFlag_Utils = {
    HeaderFlag_to_string,
    check_HeaderFlag_string,
    string_to_HeaderFlag,
    is_HeaderFlag_double_convertion_allowed,
    HeaderFlag_to_double,
    compare_HeaderFlag,
    get_HeaderFlag_signature,
    set_HeaderFlag_default_value,
    sizeof(HeaderFlag)
};

/****************************************************************
 ** Header 
 ****************************************************************/

struct SimTypeVTable *pSimHeaderVTable;

static SimFieldUtils Header_fields[] = {
    {"m_version", offsetof(Header,m_version), &_Type_M_VERSION_Utils},
    {"n_total", offsetof(Header,n_total), &_Type_N_TOTAL_Utils},
    {"n_pig", offsetof(Header,n_pig), &_Type_N_PIG_Utils},
    {"q_media", offsetof(Header,q_media), &_Type_Q_MEDIA_Utils},
    {"q_updown", offsetof(Header,q_updown), &_Type_Q_UPDOWN_Utils},
    {"q_link", offsetof(Header,q_link), &_Type_Q_LINK_Utils},
    {"nid_bg", offsetof(Header,nid_bg), &_Type_NID_BG_Utils},
    {"nid_c", offsetof(Header,nid_c), &_Type_NID_C_Utils},
    {"m_mcount", offsetof(Header,m_mcount), &_Type_M_MCOUNT_Utils},
    {"m_dup", offsetof(Header,m_dup), &_Type_M_DUP_Utils},
};

int Header_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimHeaderVTable != NULL
        && pSimHeaderVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimHeaderVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, Header_fields, 10, pfnStrAppend, pData);
}

int string_to_Header(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimHeaderVTable != NULL) {
        nRet=string_to_VTable(str, pSimHeaderVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, Header_fields, 10, endptr);
    }
    return nRet;
}

int is_Header_double_convertion_allowed()
{
    if (pSimHeaderVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimHeaderVTable);
    }
    return 0;
}

void compare_Header(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimHeaderVTable != NULL
        && pSimHeaderVTable->m_version >= Scv612
        && pSimHeaderVTable->m_pfnCompare != NULL) {
        if (pSimHeaderVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimHeaderVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimHeaderVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, Header_fields, 10, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Header_to_double(const void *pValue, double *nRetValue)
{
    if (pSimHeaderVTable != NULL) {
        return VTable_to_double(pValue, pSimHeaderVTable, nRetValue);
    }
    return 0;
}

int get_Header_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(Header_fields, 10, pfnStrAppend, pData);
}

int set_Header_default_value(void *pValue)
{
    set_M_VERSION_default_value(&(((Header*)pValue)->m_version));
    set_N_TOTAL_default_value(&(((Header*)pValue)->n_total));
    set_N_PIG_default_value(&(((Header*)pValue)->n_pig));
    set_Q_MEDIA_default_value(&(((Header*)pValue)->q_media));
    set_Q_UPDOWN_default_value(&(((Header*)pValue)->q_updown));
    set_Q_LINK_default_value(&(((Header*)pValue)->q_link));
    set_NID_BG_default_value(&(((Header*)pValue)->nid_bg));
    set_NID_C_default_value(&(((Header*)pValue)->nid_c));
    set_M_MCOUNT_default_value(&(((Header*)pValue)->m_mcount));
    set_M_DUP_default_value(&(((Header*)pValue)->m_dup));
    return 1;
}

int check_Header_string(const char *str, char **endptr)
{
    static Header rTemp;
    return string_to_Header(str, &rTemp, endptr);
}

SimTypeUtils _Type_Header_Utils = {
    Header_to_string,
    check_Header_string,
    string_to_Header,
    is_Header_double_convertion_allowed,
    Header_to_double,
    compare_Header,
    get_Header_signature,
    set_Header_default_value,
    sizeof(Header)
};

/****************************************************************
 ** Flag 
 ****************************************************************/

struct SimTypeVTable *pSimFlagVTable;

static SimFieldUtils Flag_fields[] = {
    {"boolean_", offsetof(Flag,boolean_), &_Type_kcg_bool_Utils},
};

int Flag_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimFlagVTable != NULL
        && pSimFlagVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFlagVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, Flag_fields, 1, pfnStrAppend, pData);
}

int string_to_Flag(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimFlagVTable != NULL) {
        nRet=string_to_VTable(str, pSimFlagVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, Flag_fields, 1, endptr);
    }
    return nRet;
}

int is_Flag_double_convertion_allowed()
{
    if (pSimFlagVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimFlagVTable);
    }
    return 0;
}

void compare_Flag(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimFlagVTable != NULL
        && pSimFlagVTable->m_version >= Scv612
        && pSimFlagVTable->m_pfnCompare != NULL) {
        if (pSimFlagVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimFlagVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimFlagVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, Flag_fields, 1, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Flag_to_double(const void *pValue, double *nRetValue)
{
    if (pSimFlagVTable != NULL) {
        return VTable_to_double(pValue, pSimFlagVTable, nRetValue);
    }
    return 0;
}

int get_Flag_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(Flag_fields, 1, pfnStrAppend, pData);
}

int set_Flag_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((Flag*)pValue)->boolean_));
    return 1;
}

int check_Flag_string(const char *str, char **endptr)
{
    static Flag rTemp;
    return string_to_Flag(str, &rTemp, endptr);
}

SimTypeUtils _Type_Flag_Utils = {
    Flag_to_string,
    check_Flag_string,
    string_to_Flag,
    is_Flag_double_convertion_allowed,
    Flag_to_double,
    compare_Flag,
    get_Flag_signature,
    set_Flag_default_value,
    sizeof(Flag)
};

/****************************************************************
 ** Position 
 ****************************************************************/

struct SimTypeVTable *pSimPositionVTable;

static SimFieldUtils Position_fields[] = {
    {"Position_1", offsetof(Position,Position_1), &_Type_kcg_int_Utils},
};

int Position_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimPositionVTable != NULL
        && pSimPositionVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPositionVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, Position_fields, 1, pfnStrAppend, pData);
}

int string_to_Position(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimPositionVTable != NULL) {
        nRet=string_to_VTable(str, pSimPositionVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, Position_fields, 1, endptr);
    }
    return nRet;
}

int is_Position_double_convertion_allowed()
{
    if (pSimPositionVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimPositionVTable);
    }
    return 0;
}

void compare_Position(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimPositionVTable != NULL
        && pSimPositionVTable->m_version >= Scv612
        && pSimPositionVTable->m_pfnCompare != NULL) {
        if (pSimPositionVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimPositionVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimPositionVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, Position_fields, 1, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Position_to_double(const void *pValue, double *nRetValue)
{
    if (pSimPositionVTable != NULL) {
        return VTable_to_double(pValue, pSimPositionVTable, nRetValue);
    }
    return 0;
}

int get_Position_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(Position_fields, 1, pfnStrAppend, pData);
}

int set_Position_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((Position*)pValue)->Position_1));
    return 1;
}

int check_Position_string(const char *str, char **endptr)
{
    static Position rTemp;
    return string_to_Position(str, &rTemp, endptr);
}

SimTypeUtils _Type_Position_Utils = {
    Position_to_string,
    check_Position_string,
    string_to_Position,
    is_Position_double_convertion_allowed,
    Position_to_double,
    compare_Position,
    get_Position_signature,
    set_Position_default_value,
    sizeof(Position)
};

/****************************************************************
 ** ListOfBGs 
 ****************************************************************/

struct SimTypeVTable *pSimListOfBGsVTable;

int ListOfBGs_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimListOfBGsVTable != NULL
        && pSimListOfBGsVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimListOfBGsVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnArrayToString(pValue, CurrentLRBG_to_string, 20, sizeof(CurrentLRBG), pfnStrAppend, pData);
}

int string_to_ListOfBGs(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimListOfBGsVTable != NULL) {
        nRet=string_to_VTable(str, pSimListOfBGsVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_CurrentLRBG_Utils, 20, sizeof(CurrentLRBG), endptr);
    }
    return nRet;
}

int is_ListOfBGs_double_convertion_allowed()
{
    if (pSimListOfBGsVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimListOfBGsVTable);
    }
    return 0;
}

void compare_ListOfBGs(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimListOfBGsVTable != NULL
        && pSimListOfBGsVTable->m_version >= Scv612
        && pSimListOfBGsVTable->m_pfnCompare != NULL) {
        if (pSimListOfBGsVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimListOfBGsVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimListOfBGsVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_CurrentLRBG, 20, sizeof(CurrentLRBG), pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int ListOfBGs_to_double(const void *pValue, double *nRetValue)
{
    if (pSimListOfBGsVTable != NULL) {
        return VTable_to_double(pValue, pSimListOfBGsVTable, nRetValue);
    }
    return 0;
}

int get_ListOfBGs_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    int i;
    pfnStrAppend("(", pData);
    for (i = 0; i < 20; i++) {
        if(i > 0)
            pfnStrAppend(",", pData);
        get_CurrentLRBG_signature(pfnStrAppend, pData);
    }
    pfnStrAppend(")", pData);
    return 1;
}

int set_ListOfBGs_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 20; i++)
        set_CurrentLRBG_default_value(&((CurrentLRBG*)pValue)[i]);
    return 1;
}

int check_ListOfBGs_string(const char *str, char **endptr)
{
    static ListOfBGs rTemp;
    return string_to_ListOfBGs(str, &rTemp, endptr);
}

SimTypeUtils _Type_ListOfBGs_Utils = {
    ListOfBGs_to_string,
    check_ListOfBGs_string,
    string_to_ListOfBGs,
    is_ListOfBGs_double_convertion_allowed,
    ListOfBGs_to_double,
    compare_ListOfBGs,
    get_ListOfBGs_signature,
    set_ListOfBGs_default_value,
    sizeof(ListOfBGs)
};

/****************************************************************
 ** RBCOrientationReport 
 ****************************************************************/

struct SimTypeVTable *pSimRBCOrientationReportVTable;

static SimFieldUtils RBCOrientationReport_fields[] = {
    {"assignment_of_coordinate_system", offsetof(RBCOrientationReport,assignment_of_coordinate_system), &_Type_Assignment_of_coordinate_system_Radio_TrackToTrain_Utils},
};

int RBCOrientationReport_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimRBCOrientationReportVTable != NULL
        && pSimRBCOrientationReportVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimRBCOrientationReportVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, RBCOrientationReport_fields, 1, pfnStrAppend, pData);
}

int string_to_RBCOrientationReport(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimRBCOrientationReportVTable != NULL) {
        nRet=string_to_VTable(str, pSimRBCOrientationReportVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, RBCOrientationReport_fields, 1, endptr);
    }
    return nRet;
}

int is_RBCOrientationReport_double_convertion_allowed()
{
    if (pSimRBCOrientationReportVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimRBCOrientationReportVTable);
    }
    return 0;
}

void compare_RBCOrientationReport(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimRBCOrientationReportVTable != NULL
        && pSimRBCOrientationReportVTable->m_version >= Scv612
        && pSimRBCOrientationReportVTable->m_pfnCompare != NULL) {
        if (pSimRBCOrientationReportVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimRBCOrientationReportVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimRBCOrientationReportVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, RBCOrientationReport_fields, 1, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int RBCOrientationReport_to_double(const void *pValue, double *nRetValue)
{
    if (pSimRBCOrientationReportVTable != NULL) {
        return VTable_to_double(pValue, pSimRBCOrientationReportVTable, nRetValue);
    }
    return 0;
}

int get_RBCOrientationReport_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(RBCOrientationReport_fields, 1, pfnStrAppend, pData);
}

int set_RBCOrientationReport_default_value(void *pValue)
{
    set_Assignment_of_coordinate_system_Radio_TrackToTrain_default_value(&(((RBCOrientationReport*)pValue)->assignment_of_coordinate_system));
    return 1;
}

int check_RBCOrientationReport_string(const char *str, char **endptr)
{
    static RBCOrientationReport rTemp;
    return string_to_RBCOrientationReport(str, &rTemp, endptr);
}

SimTypeUtils _Type_RBCOrientationReport_Utils = {
    RBCOrientationReport_to_string,
    check_RBCOrientationReport_string,
    string_to_RBCOrientationReport,
    is_RBCOrientationReport_double_convertion_allowed,
    RBCOrientationReport_to_double,
    compare_RBCOrientationReport,
    get_RBCOrientationReport_signature,
    set_RBCOrientationReport_default_value,
    sizeof(RBCOrientationReport)
};

/****************************************************************
 ** Train_Position_Report_Radio_TrainToTrack 
 ****************************************************************/

struct SimTypeVTable *pSimTrain_Position_Report_Radio_TrainToTrackVTable;

static SimFieldUtils Train_Position_Report_Radio_TrainToTrack_fields[] = {
    {"NID_MESSAGE", offsetof(Train_Position_Report_Radio_TrainToTrack,NID_MESSAGE), &_Type_kcg_int_Utils},
    {"L_MESSAGE", offsetof(Train_Position_Report_Radio_TrainToTrack,L_MESSAGE), &_Type_kcg_int_Utils},
    {"T_TRAIN", offsetof(Train_Position_Report_Radio_TrainToTrack,T_TRAIN), &_Type_kcg_real_Utils},
    {"NID_ENGINE", offsetof(Train_Position_Report_Radio_TrainToTrack,NID_ENGINE), &_Type_kcg_int_Utils},
    {"PADDING3", offsetof(Train_Position_Report_Radio_TrainToTrack,PADDING3), &_Type_kcg_int_Utils},
    {"Train_Position_Report_OptionalPackets", offsetof(Train_Position_Report_Radio_TrainToTrack,Train_Position_Report_OptionalPackets), &_Type_kcg_int_Utils},
};

int Train_Position_Report_Radio_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimTrain_Position_Report_Radio_TrainToTrackVTable != NULL
        && pSimTrain_Position_Report_Radio_TrainToTrackVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTrain_Position_Report_Radio_TrainToTrackVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, Train_Position_Report_Radio_TrainToTrack_fields, 6, pfnStrAppend, pData);
}

int string_to_Train_Position_Report_Radio_TrainToTrack(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimTrain_Position_Report_Radio_TrainToTrackVTable != NULL) {
        nRet=string_to_VTable(str, pSimTrain_Position_Report_Radio_TrainToTrackVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, Train_Position_Report_Radio_TrainToTrack_fields, 6, endptr);
    }
    return nRet;
}

int is_Train_Position_Report_Radio_TrainToTrack_double_convertion_allowed()
{
    if (pSimTrain_Position_Report_Radio_TrainToTrackVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimTrain_Position_Report_Radio_TrainToTrackVTable);
    }
    return 0;
}

void compare_Train_Position_Report_Radio_TrainToTrack(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimTrain_Position_Report_Radio_TrainToTrackVTable != NULL
        && pSimTrain_Position_Report_Radio_TrainToTrackVTable->m_version >= Scv612
        && pSimTrain_Position_Report_Radio_TrainToTrackVTable->m_pfnCompare != NULL) {
        if (pSimTrain_Position_Report_Radio_TrainToTrackVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimTrain_Position_Report_Radio_TrainToTrackVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimTrain_Position_Report_Radio_TrainToTrackVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, Train_Position_Report_Radio_TrainToTrack_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Train_Position_Report_Radio_TrainToTrack_to_double(const void *pValue, double *nRetValue)
{
    if (pSimTrain_Position_Report_Radio_TrainToTrackVTable != NULL) {
        return VTable_to_double(pValue, pSimTrain_Position_Report_Radio_TrainToTrackVTable, nRetValue);
    }
    return 0;
}

int get_Train_Position_Report_Radio_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(Train_Position_Report_Radio_TrainToTrack_fields, 6, pfnStrAppend, pData);
}

int set_Train_Position_Report_Radio_TrainToTrack_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((Train_Position_Report_Radio_TrainToTrack*)pValue)->NID_MESSAGE));
    set_kcg_int_default_value(&(((Train_Position_Report_Radio_TrainToTrack*)pValue)->L_MESSAGE));
    set_kcg_real_default_value(&(((Train_Position_Report_Radio_TrainToTrack*)pValue)->T_TRAIN));
    set_kcg_int_default_value(&(((Train_Position_Report_Radio_TrainToTrack*)pValue)->NID_ENGINE));
    set_kcg_int_default_value(&(((Train_Position_Report_Radio_TrainToTrack*)pValue)->PADDING3));
    set_kcg_int_default_value(&(((Train_Position_Report_Radio_TrainToTrack*)pValue)->Train_Position_Report_OptionalPackets));
    return 1;
}

int check_Train_Position_Report_Radio_TrainToTrack_string(const char *str, char **endptr)
{
    static Train_Position_Report_Radio_TrainToTrack rTemp;
    return string_to_Train_Position_Report_Radio_TrainToTrack(str, &rTemp, endptr);
}

SimTypeUtils _Type_Train_Position_Report_Radio_TrainToTrack_Utils = {
    Train_Position_Report_Radio_TrainToTrack_to_string,
    check_Train_Position_Report_Radio_TrainToTrack_string,
    string_to_Train_Position_Report_Radio_TrainToTrack,
    is_Train_Position_Report_Radio_TrainToTrack_double_convertion_allowed,
    Train_Position_Report_Radio_TrainToTrack_to_double,
    compare_Train_Position_Report_Radio_TrainToTrack,
    get_Train_Position_Report_Radio_TrainToTrack_signature,
    set_Train_Position_Report_Radio_TrainToTrack_default_value,
    sizeof(Train_Position_Report_Radio_TrainToTrack)
};

/****************************************************************
 ** Assignment_of_coordinate_system_Radio_TrackToTrain 
 ****************************************************************/

struct SimTypeVTable *pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable;

static SimFieldUtils Assignment_of_coordinate_system_Radio_TrackToTrain_fields[] = {
    {"NID_MESSAGE", offsetof(Assignment_of_coordinate_system_Radio_TrackToTrain,NID_MESSAGE), &_Type_kcg_int_Utils},
    {"L_MESSAGE", offsetof(Assignment_of_coordinate_system_Radio_TrackToTrain,L_MESSAGE), &_Type_kcg_int_Utils},
    {"T_TRAIN", offsetof(Assignment_of_coordinate_system_Radio_TrackToTrain,T_TRAIN), &_Type_kcg_real_Utils},
    {"M_ACK", offsetof(Assignment_of_coordinate_system_Radio_TrackToTrain,M_ACK), &_Type_kcg_int_Utils},
    {"NID_LRBG", offsetof(Assignment_of_coordinate_system_Radio_TrackToTrain,NID_LRBG), &_Type_kcg_int_Utils},
    {"Q_ORIENTATION", offsetof(Assignment_of_coordinate_system_Radio_TrackToTrain,Q_ORIENTATION), &_Type_kcg_int_Utils},
};

int Assignment_of_coordinate_system_Radio_TrackToTrain_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable != NULL
        && pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, Assignment_of_coordinate_system_Radio_TrackToTrain_fields, 6, pfnStrAppend, pData);
}

int string_to_Assignment_of_coordinate_system_Radio_TrackToTrain(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable != NULL) {
        nRet=string_to_VTable(str, pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, Assignment_of_coordinate_system_Radio_TrackToTrain_fields, 6, endptr);
    }
    return nRet;
}

int is_Assignment_of_coordinate_system_Radio_TrackToTrain_double_convertion_allowed()
{
    if (pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable);
    }
    return 0;
}

void compare_Assignment_of_coordinate_system_Radio_TrackToTrain(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable != NULL
        && pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable->m_version >= Scv612
        && pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable->m_pfnCompare != NULL) {
        if (pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, Assignment_of_coordinate_system_Radio_TrackToTrain_fields, 6, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Assignment_of_coordinate_system_Radio_TrackToTrain_to_double(const void *pValue, double *nRetValue)
{
    if (pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable != NULL) {
        return VTable_to_double(pValue, pSimAssignment_of_coordinate_system_Radio_TrackToTrainVTable, nRetValue);
    }
    return 0;
}

int get_Assignment_of_coordinate_system_Radio_TrackToTrain_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(Assignment_of_coordinate_system_Radio_TrackToTrain_fields, 6, pfnStrAppend, pData);
}

int set_Assignment_of_coordinate_system_Radio_TrackToTrain_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((Assignment_of_coordinate_system_Radio_TrackToTrain*)pValue)->NID_MESSAGE));
    set_kcg_int_default_value(&(((Assignment_of_coordinate_system_Radio_TrackToTrain*)pValue)->L_MESSAGE));
    set_kcg_real_default_value(&(((Assignment_of_coordinate_system_Radio_TrackToTrain*)pValue)->T_TRAIN));
    set_kcg_int_default_value(&(((Assignment_of_coordinate_system_Radio_TrackToTrain*)pValue)->M_ACK));
    set_kcg_int_default_value(&(((Assignment_of_coordinate_system_Radio_TrackToTrain*)pValue)->NID_LRBG));
    set_kcg_int_default_value(&(((Assignment_of_coordinate_system_Radio_TrackToTrain*)pValue)->Q_ORIENTATION));
    return 1;
}

int check_Assignment_of_coordinate_system_Radio_TrackToTrain_string(const char *str, char **endptr)
{
    static Assignment_of_coordinate_system_Radio_TrackToTrain rTemp;
    return string_to_Assignment_of_coordinate_system_Radio_TrackToTrain(str, &rTemp, endptr);
}

SimTypeUtils _Type_Assignment_of_coordinate_system_Radio_TrackToTrain_Utils = {
    Assignment_of_coordinate_system_Radio_TrackToTrain_to_string,
    check_Assignment_of_coordinate_system_Radio_TrackToTrain_string,
    string_to_Assignment_of_coordinate_system_Radio_TrackToTrain,
    is_Assignment_of_coordinate_system_Radio_TrackToTrain_double_convertion_allowed,
    Assignment_of_coordinate_system_Radio_TrackToTrain_to_double,
    compare_Assignment_of_coordinate_system_Radio_TrackToTrain,
    get_Assignment_of_coordinate_system_Radio_TrackToTrain_signature,
    set_Assignment_of_coordinate_system_Radio_TrackToTrain_default_value,
    sizeof(Assignment_of_coordinate_system_Radio_TrackToTrain)
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
 ** M_LEVELTR 
 ****************************************************************/

struct SimTypeVTable *pSimM_LEVELTRVTable;

static SimEnumValUtils M_LEVELTR_values[] = {
    { "M_LEVELTR_Level_0", M_LEVELTR_Level_0},
    { "M_LEVELTR_Level_0", M_LEVELTR_Level_0},
    { "M_LEVELTR_Level_NTC_specified_by_NID_NTC", M_LEVELTR_Level_NTC_specified_by_NID_NTC},
    { "M_LEVELTR_Level_NTC_specified_by_NID_NTC", M_LEVELTR_Level_NTC_specified_by_NID_NTC},
    { "M_LEVELTR_Level_1", M_LEVELTR_Level_1},
    { "M_LEVELTR_Level_1", M_LEVELTR_Level_1},
    { "M_LEVELTR_Level_2", M_LEVELTR_Level_2},
    { "M_LEVELTR_Level_2", M_LEVELTR_Level_2},
    { "M_LEVELTR_Level_3", M_LEVELTR_Level_3},
    { "M_LEVELTR_Level_3", M_LEVELTR_Level_3},
};

int M_LEVELTR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_LEVELTRVTable != NULL
        && pSimM_LEVELTRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_LEVELTRVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_LEVELTR*)pValue, M_LEVELTR_values, 10, pfnStrAppend, pData);
}

int string_to_M_LEVELTR(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_LEVELTRVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_LEVELTRVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_LEVELTR_values, 10, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_LEVELTR*)pValue = nTemp;
    }
    return nRet;
}

int is_M_LEVELTR_double_convertion_allowed()
{
    if (pSimM_LEVELTRVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_LEVELTRVTable);
    }
    return 1;
}

void compare_M_LEVELTR(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_LEVELTRVTable != NULL
        && pSimM_LEVELTRVTable->m_version >= Scv612
        && pSimM_LEVELTRVTable->m_pfnCompare != NULL) {
        if (pSimM_LEVELTRVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_LEVELTRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_LEVELTRVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_LEVELTR*)pValue1), (int)(*(M_LEVELTR*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_LEVELTR_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_LEVELTRVTable != NULL) {
        return VTable_to_double(pValue, pSimM_LEVELTRVTable, nRetValue);
    }
    *nRetValue = (double)*((M_LEVELTR*)pValue);
    return 1;
}

int get_M_LEVELTR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_LEVELTR_values, 10, pfnStrAppend, pData);
}

int set_M_LEVELTR_default_value(void *pValue)
{
    *(M_LEVELTR*)pValue = M_LEVELTR_Level_0;
    return 1;
}

int check_M_LEVELTR_string(const char *str, char **endptr)
{
    static M_LEVELTR rTemp;
    return string_to_M_LEVELTR(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_LEVELTR_Utils = {
    M_LEVELTR_to_string,
    check_M_LEVELTR_string,
    string_to_M_LEVELTR,
    is_M_LEVELTR_double_convertion_allowed,
    M_LEVELTR_to_double,
    compare_M_LEVELTR,
    get_M_LEVELTR_signature,
    set_M_LEVELTR_default_value,
    sizeof(M_LEVELTR)
};

/****************************************************************
 ** M_MODE 
 ****************************************************************/

struct SimTypeVTable *pSimM_MODEVTable;

static SimEnumValUtils M_MODE_values[] = {
    { "M_MODE_Full_Supervision", M_MODE_Full_Supervision},
    { "M_MODE_Full_Supervision", M_MODE_Full_Supervision},
    { "M_MODE_On_Sight", M_MODE_On_Sight},
    { "M_MODE_On_Sight", M_MODE_On_Sight},
    { "M_MODE_Staff_Responsible", M_MODE_Staff_Responsible},
    { "M_MODE_Staff_Responsible", M_MODE_Staff_Responsible},
    { "M_MODE_Shunting", M_MODE_Shunting},
    { "M_MODE_Shunting", M_MODE_Shunting},
    { "M_MODE_Unfitted", M_MODE_Unfitted},
    { "M_MODE_Unfitted", M_MODE_Unfitted},
    { "M_MODE_Sleeping", M_MODE_Sleeping},
    { "M_MODE_Sleeping", M_MODE_Sleeping},
    { "M_MODE_Stand_By", M_MODE_Stand_By},
    { "M_MODE_Stand_By", M_MODE_Stand_By},
    { "M_MODE_Trip", M_MODE_Trip},
    { "M_MODE_Trip", M_MODE_Trip},
    { "M_MODE_Post_Trip", M_MODE_Post_Trip},
    { "M_MODE_Post_Trip", M_MODE_Post_Trip},
    { "M_MODE_System_Failure", M_MODE_System_Failure},
    { "M_MODE_System_Failure", M_MODE_System_Failure},
    { "M_MODE_Isolation", M_MODE_Isolation},
    { "M_MODE_Isolation", M_MODE_Isolation},
    { "M_MODE_Non_Leading", M_MODE_Non_Leading},
    { "M_MODE_Non_Leading", M_MODE_Non_Leading},
    { "M_MODE_Limited_Supervision", M_MODE_Limited_Supervision},
    { "M_MODE_Limited_Supervision", M_MODE_Limited_Supervision},
    { "M_MODE_National_System", M_MODE_National_System},
    { "M_MODE_National_System", M_MODE_National_System},
    { "M_MODE_Reversing", M_MODE_Reversing},
    { "M_MODE_Reversing", M_MODE_Reversing},
    { "M_MODE_Passive_Shunting", M_MODE_Passive_Shunting},
    { "M_MODE_Passive_Shunting", M_MODE_Passive_Shunting},
};

int M_MODE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimM_MODEVTable != NULL
        && pSimM_MODEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimM_MODEVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(M_MODE*)pValue, M_MODE_values, 32, pfnStrAppend, pData);
}

int string_to_M_MODE(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimM_MODEVTable != NULL) {
        nRet=string_to_VTable(str, pSimM_MODEVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, M_MODE_values, 32, endptr);
        if (pValue != NULL && nRet != 0)
            *(M_MODE*)pValue = nTemp;
    }
    return nRet;
}

int is_M_MODE_double_convertion_allowed()
{
    if (pSimM_MODEVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimM_MODEVTable);
    }
    return 1;
}

void compare_M_MODE(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimM_MODEVTable != NULL
        && pSimM_MODEVTable->m_version >= Scv612
        && pSimM_MODEVTable->m_pfnCompare != NULL) {
        if (pSimM_MODEVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimM_MODEVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimM_MODEVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(M_MODE*)pValue1), (int)(*(M_MODE*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int M_MODE_to_double(const void *pValue, double *nRetValue)
{
    if (pSimM_MODEVTable != NULL) {
        return VTable_to_double(pValue, pSimM_MODEVTable, nRetValue);
    }
    *nRetValue = (double)*((M_MODE*)pValue);
    return 1;
}

int get_M_MODE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(M_MODE_values, 32, pfnStrAppend, pData);
}

int set_M_MODE_default_value(void *pValue)
{
    *(M_MODE*)pValue = M_MODE_Full_Supervision;
    return 1;
}

int check_M_MODE_string(const char *str, char **endptr)
{
    static M_MODE rTemp;
    return string_to_M_MODE(str, &rTemp, endptr);
}

SimTypeUtils _Type_M_MODE_Utils = {
    M_MODE_to_string,
    check_M_MODE_string,
    string_to_M_MODE,
    is_M_MODE_double_convertion_allowed,
    M_MODE_to_double,
    compare_M_MODE,
    get_M_MODE_signature,
    set_M_MODE_default_value,
    sizeof(M_MODE)
};

/****************************************************************
 ** Q_DIRTRAIN 
 ****************************************************************/

struct SimTypeVTable *pSimQ_DIRTRAINVTable;

static SimEnumValUtils Q_DIRTRAIN_values[] = {
    { "Q_DIRTRAIN_Reverse", Q_DIRTRAIN_Reverse},
    { "Q_DIRTRAIN_Reverse", Q_DIRTRAIN_Reverse},
    { "Q_DIRTRAIN_Nominal", Q_DIRTRAIN_Nominal},
    { "Q_DIRTRAIN_Nominal", Q_DIRTRAIN_Nominal},
    { "Q_DIRTRAIN_Unknown", Q_DIRTRAIN_Unknown},
    { "Q_DIRTRAIN_Unknown", Q_DIRTRAIN_Unknown},
};

int Q_DIRTRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimQ_DIRTRAINVTable != NULL
        && pSimQ_DIRTRAINVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimQ_DIRTRAINVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Q_DIRTRAIN*)pValue, Q_DIRTRAIN_values, 6, pfnStrAppend, pData);
}

int string_to_Q_DIRTRAIN(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimQ_DIRTRAINVTable != NULL) {
        nRet=string_to_VTable(str, pSimQ_DIRTRAINVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Q_DIRTRAIN_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(Q_DIRTRAIN*)pValue = nTemp;
    }
    return nRet;
}

int is_Q_DIRTRAIN_double_convertion_allowed()
{
    if (pSimQ_DIRTRAINVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimQ_DIRTRAINVTable);
    }
    return 1;
}

void compare_Q_DIRTRAIN(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimQ_DIRTRAINVTable != NULL
        && pSimQ_DIRTRAINVTable->m_version >= Scv612
        && pSimQ_DIRTRAINVTable->m_pfnCompare != NULL) {
        if (pSimQ_DIRTRAINVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimQ_DIRTRAINVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimQ_DIRTRAINVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Q_DIRTRAIN*)pValue1), (int)(*(Q_DIRTRAIN*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Q_DIRTRAIN_to_double(const void *pValue, double *nRetValue)
{
    if (pSimQ_DIRTRAINVTable != NULL) {
        return VTable_to_double(pValue, pSimQ_DIRTRAINVTable, nRetValue);
    }
    *nRetValue = (double)*((Q_DIRTRAIN*)pValue);
    return 1;
}

int get_Q_DIRTRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Q_DIRTRAIN_values, 6, pfnStrAppend, pData);
}

int set_Q_DIRTRAIN_default_value(void *pValue)
{
    *(Q_DIRTRAIN*)pValue = Q_DIRTRAIN_Reverse;
    return 1;
}

int check_Q_DIRTRAIN_string(const char *str, char **endptr)
{
    static Q_DIRTRAIN rTemp;
    return string_to_Q_DIRTRAIN(str, &rTemp, endptr);
}

SimTypeUtils _Type_Q_DIRTRAIN_Utils = {
    Q_DIRTRAIN_to_string,
    check_Q_DIRTRAIN_string,
    string_to_Q_DIRTRAIN,
    is_Q_DIRTRAIN_double_convertion_allowed,
    Q_DIRTRAIN_to_double,
    compare_Q_DIRTRAIN,
    get_Q_DIRTRAIN_signature,
    set_Q_DIRTRAIN_default_value,
    sizeof(Q_DIRTRAIN)
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
 ** AdditionalInformation 
 ****************************************************************/

struct SimTypeVTable *pSimAdditionalInformationVTable;

static SimEnumValUtils AdditionalInformation_values[] = {
    { "value1", value1},
    { "value1", value1},
};

int AdditionalInformation_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimAdditionalInformationVTable != NULL
        && pSimAdditionalInformationVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimAdditionalInformationVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(AdditionalInformation*)pValue, AdditionalInformation_values, 2, pfnStrAppend, pData);
}

int string_to_AdditionalInformation(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimAdditionalInformationVTable != NULL) {
        nRet=string_to_VTable(str, pSimAdditionalInformationVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, AdditionalInformation_values, 2, endptr);
        if (pValue != NULL && nRet != 0)
            *(AdditionalInformation*)pValue = nTemp;
    }
    return nRet;
}

int is_AdditionalInformation_double_convertion_allowed()
{
    if (pSimAdditionalInformationVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimAdditionalInformationVTable);
    }
    return 1;
}

void compare_AdditionalInformation(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimAdditionalInformationVTable != NULL
        && pSimAdditionalInformationVTable->m_version >= Scv612
        && pSimAdditionalInformationVTable->m_pfnCompare != NULL) {
        if (pSimAdditionalInformationVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimAdditionalInformationVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimAdditionalInformationVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(AdditionalInformation*)pValue1), (int)(*(AdditionalInformation*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int AdditionalInformation_to_double(const void *pValue, double *nRetValue)
{
    if (pSimAdditionalInformationVTable != NULL) {
        return VTable_to_double(pValue, pSimAdditionalInformationVTable, nRetValue);
    }
    *nRetValue = (double)*((AdditionalInformation*)pValue);
    return 1;
}

int get_AdditionalInformation_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(AdditionalInformation_values, 2, pfnStrAppend, pData);
}

int set_AdditionalInformation_default_value(void *pValue)
{
    *(AdditionalInformation*)pValue = value1;
    return 1;
}

int check_AdditionalInformation_string(const char *str, char **endptr)
{
    static AdditionalInformation rTemp;
    return string_to_AdditionalInformation(str, &rTemp, endptr);
}

SimTypeUtils _Type_AdditionalInformation_Utils = {
    AdditionalInformation_to_string,
    check_AdditionalInformation_string,
    string_to_AdditionalInformation,
    is_AdditionalInformation_double_convertion_allowed,
    AdditionalInformation_to_double,
    compare_AdditionalInformation,
    get_AdditionalInformation_signature,
    set_AdditionalInformation_default_value,
    sizeof(AdditionalInformation)
};

/****************************************************************
 ** Orientation 
 ****************************************************************/

struct SimTypeVTable *pSimOrientationVTable;

static SimEnumValUtils Orientation_values[] = {
    { "Single_Balise_Group", Single_Balise_Group},
    { "Single_Balise_Group", Single_Balise_Group},
    { "DIR_Nominal", DIR_Nominal},
    { "DIR_Nominal", DIR_Nominal},
    { "DIR_Reverse", DIR_Reverse},
    { "DIR_Reverse", DIR_Reverse},
};

int Orientation_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOrientationVTable != NULL
        && pSimOrientationVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOrientationVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(Orientation*)pValue, Orientation_values, 6, pfnStrAppend, pData);
}

int string_to_Orientation(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOrientationVTable != NULL) {
        nRet=string_to_VTable(str, pSimOrientationVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Orientation_values, 6, endptr);
        if (pValue != NULL && nRet != 0)
            *(Orientation*)pValue = nTemp;
    }
    return nRet;
}

int is_Orientation_double_convertion_allowed()
{
    if (pSimOrientationVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimOrientationVTable);
    }
    return 1;
}

void compare_Orientation(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimOrientationVTable != NULL
        && pSimOrientationVTable->m_version >= Scv612
        && pSimOrientationVTable->m_pfnCompare != NULL) {
        if (pSimOrientationVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOrientationVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimOrientationVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Orientation*)pValue1), (int)(*(Orientation*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int Orientation_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOrientationVTable != NULL) {
        return VTable_to_double(pValue, pSimOrientationVTable, nRetValue);
    }
    *nRetValue = (double)*((Orientation*)pValue);
    return 1;
}

int get_Orientation_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(Orientation_values, 6, pfnStrAppend, pData);
}

int set_Orientation_default_value(void *pValue)
{
    *(Orientation*)pValue = Single_Balise_Group;
    return 1;
}

int check_Orientation_string(const char *str, char **endptr)
{
    static Orientation rTemp;
    return string_to_Orientation(str, &rTemp, endptr);
}

SimTypeUtils _Type_Orientation_Utils = {
    Orientation_to_string,
    check_Orientation_string,
    string_to_Orientation,
    is_Orientation_double_convertion_allowed,
    Orientation_to_double,
    compare_Orientation,
    get_Orientation_signature,
    set_Orientation_default_value,
    sizeof(Orientation)
};

#include "C:/Program Files (x86)/Esterel Technologies/SCADE R15/SCADE/lib/kcg_conv.c"
