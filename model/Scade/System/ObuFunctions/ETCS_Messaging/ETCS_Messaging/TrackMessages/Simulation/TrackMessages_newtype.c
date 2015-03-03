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
 ** SSM_ST_SM1 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_ST_SM1VTable;

static SimEnumValUtils SSM_ST_SM1_values[] = {
    { "State1", SSM_st_State1_SM1},
    { "State1", SSM_st_State1_SM1},
    { "BG_passed", SSM_st_BG_passed_SM1},
    { "BG_passed", SSM_st_BG_passed_SM1},
};

int SSM_ST_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM1*)pValue, SSM_ST_SM1_values, 4, pfnStrAppend, pData);
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
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM1_values, 4, endptr);
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
    return get_enum_signature(SSM_ST_SM1_values, 4, pfnStrAppend, pData);
}

int set_SSM_ST_SM1_default_value(void *pValue)
{
    *(SSM_ST_SM1*)pValue = SSM_st_State1_SM1;
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
    { "State1:<1>", SSM_TR_State1_1_SM1},
    { "State1:<1>", SSM_TR_State1_1_SM1},
    { "BG_passed:<1>", SSM_TR_BG_passed_1_SM1},
    { "BG_passed:<1>", SSM_TR_BG_passed_1_SM1},
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
 ** SSM_ST_SM2_SM1_State1 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_ST_SM2_SM1_State1VTable;

static SimEnumValUtils SSM_ST_SM2_SM1_State1_values[] = {
    { "B1", SSM_st_B1_SM1_State1_SM2},
    { "B1", SSM_st_B1_SM1_State1_SM2},
    { "B1_passed", SSM_st_B1_passed_SM1_State1_SM2},
    { "B1_passed", SSM_st_B1_passed_SM1_State1_SM2},
};

int SSM_ST_SM2_SM1_State1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_ST_SM2_SM1_State1VTable != NULL
        && pSimSSM_ST_SM2_SM1_State1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM2_SM1_State1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM2_SM1_State1*)pValue, SSM_ST_SM2_SM1_State1_values, 4, pfnStrAppend, pData);
}

int string_to_SSM_ST_SM2_SM1_State1(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM2_SM1_State1VTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_ST_SM2_SM1_State1VTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM2_SM1_State1_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM2_SM1_State1*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM2_SM1_State1_double_convertion_allowed()
{
    if (pSimSSM_ST_SM2_SM1_State1VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_ST_SM2_SM1_State1VTable);
    }
    return 1;
}

void compare_SSM_ST_SM2_SM1_State1(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_ST_SM2_SM1_State1VTable != NULL
        && pSimSSM_ST_SM2_SM1_State1VTable->m_version >= Scv612
        && pSimSSM_ST_SM2_SM1_State1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM2_SM1_State1VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_ST_SM2_SM1_State1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_ST_SM2_SM1_State1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM2_SM1_State1*)pValue1), (int)(*(SSM_ST_SM2_SM1_State1*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_ST_SM2_SM1_State1_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_ST_SM2_SM1_State1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM2_SM1_State1VTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_ST_SM2_SM1_State1*)pValue);
    return 1;
}

int get_SSM_ST_SM2_SM1_State1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_ST_SM2_SM1_State1_values, 4, pfnStrAppend, pData);
}

int set_SSM_ST_SM2_SM1_State1_default_value(void *pValue)
{
    *(SSM_ST_SM2_SM1_State1*)pValue = SSM_st_B1_SM1_State1_SM2;
    return 1;
}

int check_SSM_ST_SM2_SM1_State1_string(const char *str, char **endptr)
{
    static SSM_ST_SM2_SM1_State1 rTemp;
    return string_to_SSM_ST_SM2_SM1_State1(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_ST_SM2_SM1_State1_Utils = {
    SSM_ST_SM2_SM1_State1_to_string,
    check_SSM_ST_SM2_SM1_State1_string,
    string_to_SSM_ST_SM2_SM1_State1,
    is_SSM_ST_SM2_SM1_State1_double_convertion_allowed,
    SSM_ST_SM2_SM1_State1_to_double,
    compare_SSM_ST_SM2_SM1_State1,
    get_SSM_ST_SM2_SM1_State1_signature,
    set_SSM_ST_SM2_SM1_State1_default_value,
    sizeof(SSM_ST_SM2_SM1_State1)
};

/****************************************************************
 ** SSM_TR_SM2_SM1_State1 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_TR_SM2_SM1_State1VTable;

static SimEnumValUtils SSM_TR_SM2_SM1_State1_values[] = {
    { "SSM_TR_SM2_SM1_State1_no_trans", 0},
    { "SSM_TR_SM2_SM1_State1_no_trans", 0},
    { "B1:<1>", SSM_TR_B1_1_SM2_SM1_State1},
    { "B1:<1>", SSM_TR_B1_1_SM2_SM1_State1},
};

int SSM_TR_SM2_SM1_State1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_TR_SM2_SM1_State1VTable != NULL
        && pSimSSM_TR_SM2_SM1_State1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM2_SM1_State1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM2_SM1_State1*)pValue, SSM_TR_SM2_SM1_State1_values, 4, pfnStrAppend, pData);
}

int string_to_SSM_TR_SM2_SM1_State1(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM2_SM1_State1VTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_TR_SM2_SM1_State1VTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM2_SM1_State1_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM2_SM1_State1*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM2_SM1_State1_double_convertion_allowed()
{
    if (pSimSSM_TR_SM2_SM1_State1VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_TR_SM2_SM1_State1VTable);
    }
    return 1;
}

void compare_SSM_TR_SM2_SM1_State1(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_TR_SM2_SM1_State1VTable != NULL
        && pSimSSM_TR_SM2_SM1_State1VTable->m_version >= Scv612
        && pSimSSM_TR_SM2_SM1_State1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM2_SM1_State1VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_TR_SM2_SM1_State1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_TR_SM2_SM1_State1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM2_SM1_State1*)pValue1), (int)(*(SSM_TR_SM2_SM1_State1*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_TR_SM2_SM1_State1_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_TR_SM2_SM1_State1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM2_SM1_State1VTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_TR_SM2_SM1_State1*)pValue);
    return 1;
}

int get_SSM_TR_SM2_SM1_State1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_TR_SM2_SM1_State1_values, 4, pfnStrAppend, pData);
}

int set_SSM_TR_SM2_SM1_State1_default_value(void *pValue)
{
    *(SSM_TR_SM2_SM1_State1*)pValue = 0;
    return 1;
}

int check_SSM_TR_SM2_SM1_State1_string(const char *str, char **endptr)
{
    static SSM_TR_SM2_SM1_State1 rTemp;
    return string_to_SSM_TR_SM2_SM1_State1(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_TR_SM2_SM1_State1_Utils = {
    SSM_TR_SM2_SM1_State1_to_string,
    check_SSM_TR_SM2_SM1_State1_string,
    string_to_SSM_TR_SM2_SM1_State1,
    is_SSM_TR_SM2_SM1_State1_double_convertion_allowed,
    SSM_TR_SM2_SM1_State1_to_double,
    compare_SSM_TR_SM2_SM1_State1,
    get_SSM_TR_SM2_SM1_State1_signature,
    set_SSM_TR_SM2_SM1_State1_default_value,
    sizeof(SSM_TR_SM2_SM1_State1)
};

/****************************************************************
 ** SSM_ST_SM3_SM1_State1 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_ST_SM3_SM1_State1VTable;

static SimEnumValUtils SSM_ST_SM3_SM1_State1_values[] = {
    { "B2", SSM_st_B2_SM1_State1_SM3},
    { "B2", SSM_st_B2_SM1_State1_SM3},
    { "B2_passed", SSM_st_B2_passed_SM1_State1_SM3},
    { "B2_passed", SSM_st_B2_passed_SM1_State1_SM3},
};

int SSM_ST_SM3_SM1_State1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_ST_SM3_SM1_State1VTable != NULL
        && pSimSSM_ST_SM3_SM1_State1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM3_SM1_State1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM3_SM1_State1*)pValue, SSM_ST_SM3_SM1_State1_values, 4, pfnStrAppend, pData);
}

int string_to_SSM_ST_SM3_SM1_State1(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM3_SM1_State1VTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_ST_SM3_SM1_State1VTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM3_SM1_State1_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM3_SM1_State1*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM3_SM1_State1_double_convertion_allowed()
{
    if (pSimSSM_ST_SM3_SM1_State1VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_ST_SM3_SM1_State1VTable);
    }
    return 1;
}

void compare_SSM_ST_SM3_SM1_State1(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_ST_SM3_SM1_State1VTable != NULL
        && pSimSSM_ST_SM3_SM1_State1VTable->m_version >= Scv612
        && pSimSSM_ST_SM3_SM1_State1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM3_SM1_State1VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_ST_SM3_SM1_State1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_ST_SM3_SM1_State1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM3_SM1_State1*)pValue1), (int)(*(SSM_ST_SM3_SM1_State1*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_ST_SM3_SM1_State1_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_ST_SM3_SM1_State1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM3_SM1_State1VTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_ST_SM3_SM1_State1*)pValue);
    return 1;
}

int get_SSM_ST_SM3_SM1_State1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_ST_SM3_SM1_State1_values, 4, pfnStrAppend, pData);
}

int set_SSM_ST_SM3_SM1_State1_default_value(void *pValue)
{
    *(SSM_ST_SM3_SM1_State1*)pValue = SSM_st_B2_SM1_State1_SM3;
    return 1;
}

int check_SSM_ST_SM3_SM1_State1_string(const char *str, char **endptr)
{
    static SSM_ST_SM3_SM1_State1 rTemp;
    return string_to_SSM_ST_SM3_SM1_State1(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_ST_SM3_SM1_State1_Utils = {
    SSM_ST_SM3_SM1_State1_to_string,
    check_SSM_ST_SM3_SM1_State1_string,
    string_to_SSM_ST_SM3_SM1_State1,
    is_SSM_ST_SM3_SM1_State1_double_convertion_allowed,
    SSM_ST_SM3_SM1_State1_to_double,
    compare_SSM_ST_SM3_SM1_State1,
    get_SSM_ST_SM3_SM1_State1_signature,
    set_SSM_ST_SM3_SM1_State1_default_value,
    sizeof(SSM_ST_SM3_SM1_State1)
};

/****************************************************************
 ** SSM_TR_SM3_SM1_State1 
 ****************************************************************/

struct SimTypeVTable *pSimSSM_TR_SM3_SM1_State1VTable;

static SimEnumValUtils SSM_TR_SM3_SM1_State1_values[] = {
    { "SSM_TR_SM3_SM1_State1_no_trans", 0},
    { "SSM_TR_SM3_SM1_State1_no_trans", 0},
    { "B2:<1>", SSM_TR_B2_1_SM3_SM1_State1},
    { "B2:<1>", SSM_TR_B2_1_SM3_SM1_State1},
};

int SSM_TR_SM3_SM1_State1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimSSM_TR_SM3_SM1_State1VTable != NULL
        && pSimSSM_TR_SM3_SM1_State1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM3_SM1_State1VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM3_SM1_State1*)pValue, SSM_TR_SM3_SM1_State1_values, 4, pfnStrAppend, pData);
}

int string_to_SSM_TR_SM3_SM1_State1(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM3_SM1_State1VTable != NULL) {
        nRet=string_to_VTable(str, pSimSSM_TR_SM3_SM1_State1VTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM3_SM1_State1_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM3_SM1_State1*)pValue = nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM3_SM1_State1_double_convertion_allowed()
{
    if (pSimSSM_TR_SM3_SM1_State1VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimSSM_TR_SM3_SM1_State1VTable);
    }
    return 1;
}

void compare_SSM_TR_SM3_SM1_State1(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimSSM_TR_SM3_SM1_State1VTable != NULL
        && pSimSSM_TR_SM3_SM1_State1VTable->m_version >= Scv612
        && pSimSSM_TR_SM3_SM1_State1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM3_SM1_State1VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimSSM_TR_SM3_SM1_State1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimSSM_TR_SM3_SM1_State1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM3_SM1_State1*)pValue1), (int)(*(SSM_TR_SM3_SM1_State1*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int SSM_TR_SM3_SM1_State1_to_double(const void *pValue, double *nRetValue)
{
    if (pSimSSM_TR_SM3_SM1_State1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM3_SM1_State1VTable, nRetValue);
    }
    *nRetValue = (double)*((SSM_TR_SM3_SM1_State1*)pValue);
    return 1;
}

int get_SSM_TR_SM3_SM1_State1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(SSM_TR_SM3_SM1_State1_values, 4, pfnStrAppend, pData);
}

int set_SSM_TR_SM3_SM1_State1_default_value(void *pValue)
{
    *(SSM_TR_SM3_SM1_State1*)pValue = 0;
    return 1;
}

int check_SSM_TR_SM3_SM1_State1_string(const char *str, char **endptr)
{
    static SSM_TR_SM3_SM1_State1 rTemp;
    return string_to_SSM_TR_SM3_SM1_State1(str, &rTemp, endptr);
}

SimTypeUtils _Type_SSM_TR_SM3_SM1_State1_Utils = {
    SSM_TR_SM3_SM1_State1_to_string,
    check_SSM_TR_SM3_SM1_State1_string,
    string_to_SSM_TR_SM3_SM1_State1,
    is_SSM_TR_SM3_SM1_State1_double_convertion_allowed,
    SSM_TR_SM3_SM1_State1_to_double,
    compare_SSM_TR_SM3_SM1_State1,
    get_SSM_TR_SM3_SM1_State1_signature,
    set_SSM_TR_SM3_SM1_State1_default_value,
    sizeof(SSM_TR_SM3_SM1_State1)
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
 ** struct__371 
 ****************************************************************/

struct SimTypeVTable *pSimstruct__371VTable;

static SimFieldUtils struct__371_fields[] = {
    {"NID_C", offsetof(struct__371,NID_C), &_Type_kcg_int_Utils},
    {"NID_BG", offsetof(struct__371,NID_BG), &_Type_kcg_int_Utils},
    {"Pos", offsetof(struct__371,Pos), &_Type_kcg_int_Utils},
    {"Or_BG", offsetof(struct__371,Or_BG), &_Type_OrBG_Utils},
    {"Or_Line", offsetof(struct__371,Or_Line), &_Type_OrLine_Utils},
};

int struct__371_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimstruct__371VTable != NULL
        && pSimstruct__371VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstruct__371VTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnStructureToString(pValue, struct__371_fields, 5, pfnStrAppend, pData);
}

int string_to_struct__371(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimstruct__371VTable != NULL) {
        nRet=string_to_VTable(str, pSimstruct__371VTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet=pConverter->m_pfnStringToStructure(str, pValue, struct__371_fields, 5, endptr);
    }
    return nRet;
}

int is_struct__371_double_convertion_allowed()
{
    if (pSimstruct__371VTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimstruct__371VTable);
    }
    return 0;
}

void compare_struct__371(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimstruct__371VTable != NULL
        && pSimstruct__371VTable->m_version >= Scv612
        && pSimstruct__371VTable->m_pfnCompare != NULL) {
        if (pSimstruct__371VTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimstruct__371VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimstruct__371VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, struct__371_fields, 5, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int struct__371_to_double(const void *pValue, double *nRetValue)
{
    if (pSimstruct__371VTable != NULL) {
        return VTable_to_double(pValue, pSimstruct__371VTable, nRetValue);
    }
    return 0;
}

int get_struct__371_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_structure_signature(struct__371_fields, 5, pfnStrAppend, pData);
}

int set_struct__371_default_value(void *pValue)
{
    set_kcg_int_default_value(&(((struct__371*)pValue)->NID_C));
    set_kcg_int_default_value(&(((struct__371*)pValue)->NID_BG));
    set_kcg_int_default_value(&(((struct__371*)pValue)->Pos));
    set_OrBG_default_value(&(((struct__371*)pValue)->Or_BG));
    set_OrLine_default_value(&(((struct__371*)pValue)->Or_Line));
    return 1;
}

int check_struct__371_string(const char *str, char **endptr)
{
    static struct__371 rTemp;
    return string_to_struct__371(str, &rTemp, endptr);
}

SimTypeUtils _Type_struct__371_Utils = {
    struct__371_to_string,
    check_struct__371_string,
    string_to_struct__371,
    is_struct__371_double_convertion_allowed,
    struct__371_to_double,
    compare_struct__371,
    get_struct__371_signature,
    set_struct__371_default_value,
    sizeof(struct__371)
};

/****************************************************************
 ** BaliseGroupData 
 ****************************************************************/

struct SimTypeVTable *pSimBaliseGroupDataVTable;

int BaliseGroupData_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimBaliseGroupDataVTable != NULL
        && pSimBaliseGroupDataVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimBaliseGroupDataVTable->m_pfnToType(SptString, pValue), pData);
    }
    return struct__371_to_string(pValue, pfnStrAppend, pData);
}

int string_to_BaliseGroupData(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimBaliseGroupDataVTable != NULL) {
        nRet=string_to_VTable(str, pSimBaliseGroupDataVTable, pValue, endptr);
    }
    if (nRet==0) {
        nRet = string_to_struct__371(str, pValue, endptr);
    }
    return nRet;
}

int is_BaliseGroupData_double_convertion_allowed()
{
    if (pSimBaliseGroupDataVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimBaliseGroupDataVTable);
    }
    return is_struct__371_double_convertion_allowed();
}

void compare_BaliseGroupData(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimBaliseGroupDataVTable != NULL
        && pSimBaliseGroupDataVTable->m_version >= Scv612
        && pSimBaliseGroupDataVTable->m_pfnCompare != NULL) {
        if (pSimBaliseGroupDataVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimBaliseGroupDataVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimBaliseGroupDataVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_struct__371(pResult, pValue1, pValue2, pData, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int BaliseGroupData_to_double(const void *pValue, double *nRetValue)
{
    if (pSimBaliseGroupDataVTable != NULL) {
        return VTable_to_double(pValue, pSimBaliseGroupDataVTable, nRetValue);
    }
    return struct__371_to_double(pValue, nRetValue);
}

int get_BaliseGroupData_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_struct__371_signature(pfnStrAppend, pData);
}

int set_BaliseGroupData_default_value(void *pValue)
{
    return set_struct__371_default_value(pValue);
}

int check_BaliseGroupData_string(const char *str, char **endptr)
{
    static BaliseGroupData rTemp;
    return string_to_BaliseGroupData(str, &rTemp, endptr);
}

SimTypeUtils _Type_BaliseGroupData_Utils = {
    BaliseGroupData_to_string,
    check_BaliseGroupData_string,
    string_to_BaliseGroupData,
    is_BaliseGroupData_double_convertion_allowed,
    BaliseGroupData_to_double,
    compare_BaliseGroupData,
    get_BaliseGroupData_signature,
    set_BaliseGroupData_default_value,
    sizeof(BaliseGroupData)
};

/****************************************************************
 ** OrBG 
 ****************************************************************/

struct SimTypeVTable *pSimOrBGVTable;

static SimEnumValUtils OrBG_values[] = {
    { "Amsterdam", Amsterdam},
    { "Amsterdam", Amsterdam},
    { "Utrecht", Utrecht},
    { "Utrecht", Utrecht},
};

int OrBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOrBGVTable != NULL
        && pSimOrBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOrBGVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(OrBG*)pValue, OrBG_values, 4, pfnStrAppend, pData);
}

int string_to_OrBG(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOrBGVTable != NULL) {
        nRet=string_to_VTable(str, pSimOrBGVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, OrBG_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(OrBG*)pValue = nTemp;
    }
    return nRet;
}

int is_OrBG_double_convertion_allowed()
{
    if (pSimOrBGVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimOrBGVTable);
    }
    return 1;
}

void compare_OrBG(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimOrBGVTable != NULL
        && pSimOrBGVTable->m_version >= Scv612
        && pSimOrBGVTable->m_pfnCompare != NULL) {
        if (pSimOrBGVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOrBGVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimOrBGVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(OrBG*)pValue1), (int)(*(OrBG*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int OrBG_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOrBGVTable != NULL) {
        return VTable_to_double(pValue, pSimOrBGVTable, nRetValue);
    }
    *nRetValue = (double)*((OrBG*)pValue);
    return 1;
}

int get_OrBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(OrBG_values, 4, pfnStrAppend, pData);
}

int set_OrBG_default_value(void *pValue)
{
    *(OrBG*)pValue = Amsterdam;
    return 1;
}

int check_OrBG_string(const char *str, char **endptr)
{
    static OrBG rTemp;
    return string_to_OrBG(str, &rTemp, endptr);
}

SimTypeUtils _Type_OrBG_Utils = {
    OrBG_to_string,
    check_OrBG_string,
    string_to_OrBG,
    is_OrBG_double_convertion_allowed,
    OrBG_to_double,
    compare_OrBG,
    get_OrBG_signature,
    set_OrBG_default_value,
    sizeof(OrBG)
};

/****************************************************************
 ** OrLine 
 ****************************************************************/

struct SimTypeVTable *pSimOrLineVTable;

static SimEnumValUtils OrLine_values[] = {
    { "N", N},
    { "N", N},
    { "Z", Z},
    { "Z", Z},
};

int OrLine_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData)
{
    if (pSimOrLineVTable != NULL
        && pSimOrLineVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimOrLineVTable->m_pfnToType(SptString, pValue), pData);
    }
    return pConverter->m_pfnEnumToString(*(OrLine*)pValue, OrLine_values, 4, pfnStrAppend, pData);
}

int string_to_OrLine(const char *str, void *pValue, char **endptr)
{
    int nRet=0;
    skip_whitespace(str);
    if (pSimOrLineVTable != NULL) {
        nRet=string_to_VTable(str, pSimOrLineVTable, pValue, endptr);
    }
    if (nRet==0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, OrLine_values, 4, endptr);
        if (pValue != NULL && nRet != 0)
            *(OrLine*)pValue = nTemp;
    }
    return nRet;
}

int is_OrLine_double_convertion_allowed()
{
    if (pSimOrLineVTable != NULL) {
        return is_VTable_double_convertion_allowed(pSimOrLineVTable);
    }
    return 1;
}

void compare_OrLine(int *pResult, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult=0;
    /* Customized comparison */
    if (pSimOrLineVTable != NULL
        && pSimOrLineVTable->m_version >= Scv612
        && pSimOrLineVTable->m_pfnCompare != NULL) {
        if (pSimOrLineVTable->m_version >= Scv65) {
            /*R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult|=SIM_CMP_RES_LT/...): */
            unitResult=pSimOrLineVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /*Before R15: VTable Compare function shall SET *pResult global flag (*pResult=-1/1/0): */
            pSimOrLineVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(OrLine*)pValue1), (int)(*(OrLine*)pValue2), pData);
    }
    if (unitResult!=0 && pfnStrListAppend!=NULL && pszPath!=NULL && *pszPath!=0 && pListErrPaths!=NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int OrLine_to_double(const void *pValue, double *nRetValue)
{
    if (pSimOrLineVTable != NULL) {
        return VTable_to_double(pValue, pSimOrLineVTable, nRetValue);
    }
    *nRetValue = (double)*((OrLine*)pValue);
    return 1;
}

int get_OrLine_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData)
{
    return get_enum_signature(OrLine_values, 4, pfnStrAppend, pData);
}

int set_OrLine_default_value(void *pValue)
{
    *(OrLine*)pValue = N;
    return 1;
}

int check_OrLine_string(const char *str, char **endptr)
{
    static OrLine rTemp;
    return string_to_OrLine(str, &rTemp, endptr);
}

SimTypeUtils _Type_OrLine_Utils = {
    OrLine_to_string,
    check_OrLine_string,
    string_to_OrLine,
    is_OrLine_double_convertion_allowed,
    OrLine_to_double,
    compare_OrLine,
    get_OrLine_signature,
    set_OrLine_default_value,
    sizeof(OrLine)
};

#include "C:/Program Files/Esterel Technologies/SCADE R15.2/SCADE/lib/kcg_conv.c"
