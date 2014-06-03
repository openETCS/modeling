#ifndef DETERMINEBG_ORIENTATION_AND_LRBG_TYPES_CONVERTION
#define DETERMINEBG_ORIENTATION_AND_LRBG_TYPES_CONVERTION

#include "NewSmuTypes.h"

/****************************************************************
 ** SSM_ST_SM1 
 ****************************************************************/
extern int SSM_ST_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_ST_SM1_string(const char *str, char **endptr);
extern int string_to_SSM_ST_SM1(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_SM1_allow_double_convertion();
extern int SSM_ST_SM1_to_double(const void *pValue, double *nValue);
extern int get_SSM_ST_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_ST_SM1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_ST_SM1_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_SM1_Utils;

/****************************************************************
 ** SSM_TR_SM1 
 ****************************************************************/
extern int SSM_TR_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_TR_SM1_string(const char *str, char **endptr);
extern int string_to_SSM_TR_SM1(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_SM1_allow_double_convertion();
extern int SSM_TR_SM1_to_double(const void *pValue, double *nValue);
extern int get_SSM_TR_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_TR_SM1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_TR_SM1_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_SM1_Utils;

/****************************************************************
 ** SSM_ST_SM2_SM1_Level2or3 
 ****************************************************************/
extern int SSM_ST_SM2_SM1_Level2or3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_ST_SM2_SM1_Level2or3_string(const char *str, char **endptr);
extern int string_to_SSM_ST_SM2_SM1_Level2or3(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_SM2_SM1_Level2or3_allow_double_convertion();
extern int SSM_ST_SM2_SM1_Level2or3_to_double(const void *pValue, double *nValue);
extern int get_SSM_ST_SM2_SM1_Level2or3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_ST_SM2_SM1_Level2or3(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_ST_SM2_SM1_Level2or3_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_SM2_SM1_Level2or3_Utils;

/****************************************************************
 ** SSM_TR_SM2_SM1_Level2or3 
 ****************************************************************/
extern int SSM_TR_SM2_SM1_Level2or3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_TR_SM2_SM1_Level2or3_string(const char *str, char **endptr);
extern int string_to_SSM_TR_SM2_SM1_Level2or3(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_SM2_SM1_Level2or3_allow_double_convertion();
extern int SSM_TR_SM2_SM1_Level2or3_to_double(const void *pValue, double *nValue);
extern int get_SSM_TR_SM2_SM1_Level2or3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_TR_SM2_SM1_Level2or3(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_TR_SM2_SM1_Level2or3_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_SM2_SM1_Level2or3_Utils;

/****************************************************************
 ** kcg_real 
 ****************************************************************/
extern int kcg_real_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_real_string(const char *str, char **endptr);
extern int string_to_kcg_real(const char *str, void *pValue, char **endptr);
extern int is_kcg_real_allow_double_convertion();
extern int kcg_real_to_double(const void *pValue, double *nValue);
extern int get_kcg_real_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_real(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_real_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_real_Utils;

/****************************************************************
 ** kcg_bool 
 ****************************************************************/
extern int kcg_bool_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_bool_string(const char *str, char **endptr);
extern int string_to_kcg_bool(const char *str, void *pValue, char **endptr);
extern int is_kcg_bool_allow_double_convertion();
extern int kcg_bool_to_double(const void *pValue, double *nValue);
extern int get_kcg_bool_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_bool(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_bool_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_bool_Utils;

/****************************************************************
 ** kcg_char 
 ****************************************************************/
extern int kcg_char_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_char_string(const char *str, char **endptr);
extern int string_to_kcg_char(const char *str, void *pValue, char **endptr);
extern int is_kcg_char_allow_double_convertion();
extern int kcg_char_to_double(const void *pValue, double *nValue);
extern int get_kcg_char_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_char(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_char_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_char_Utils;

/****************************************************************
 ** kcg_int 
 ****************************************************************/
extern int kcg_int_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_int_string(const char *str, char **endptr);
extern int string_to_kcg_int(const char *str, void *pValue, char **endptr);
extern int is_kcg_int_allow_double_convertion();
extern int kcg_int_to_double(const void *pValue, double *nValue);
extern int get_kcg_int_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_int(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_int_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_int_Utils;

/****************************************************************
 ** struct__980 
 ****************************************************************/
extern int struct__980_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__980_string(const char *str, char **endptr);
extern int string_to_struct__980(const char *str, void *pValue, char **endptr);
extern int is_struct__980_allow_double_convertion();
extern int struct__980_to_double(const void *pValue, double *nValue);
extern int get_struct__980_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__980(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__980_default_value(void *pValue);
extern SimTypeUtils _Type_struct__980_Utils;

/****************************************************************
 ** struct__989 
 ****************************************************************/
extern int struct__989_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__989_string(const char *str, char **endptr);
extern int string_to_struct__989(const char *str, void *pValue, char **endptr);
extern int is_struct__989_allow_double_convertion();
extern int struct__989_to_double(const void *pValue, double *nValue);
extern int get_struct__989_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__989(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__989_default_value(void *pValue);
extern SimTypeUtils _Type_struct__989_Utils;

/****************************************************************
 ** struct__993 
 ****************************************************************/
extern int struct__993_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__993_string(const char *str, char **endptr);
extern int string_to_struct__993(const char *str, void *pValue, char **endptr);
extern int is_struct__993_allow_double_convertion();
extern int struct__993_to_double(const void *pValue, double *nValue);
extern int get_struct__993_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__993(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__993_default_value(void *pValue);
extern SimTypeUtils _Type_struct__993_Utils;

/****************************************************************
 ** struct__999 
 ****************************************************************/
extern int struct__999_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__999_string(const char *str, char **endptr);
extern int string_to_struct__999(const char *str, void *pValue, char **endptr);
extern int is_struct__999_allow_double_convertion();
extern int struct__999_to_double(const void *pValue, double *nValue);
extern int get_struct__999_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__999(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__999_default_value(void *pValue);
extern SimTypeUtils _Type_struct__999_Utils;

/****************************************************************
 ** struct__1004 
 ****************************************************************/
extern int struct__1004_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1004_string(const char *str, char **endptr);
extern int string_to_struct__1004(const char *str, void *pValue, char **endptr);
extern int is_struct__1004_allow_double_convertion();
extern int struct__1004_to_double(const void *pValue, double *nValue);
extern int get_struct__1004_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1004(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1004_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1004_Utils;

/****************************************************************
 ** struct__1017 
 ****************************************************************/
extern int struct__1017_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1017_string(const char *str, char **endptr);
extern int string_to_struct__1017(const char *str, void *pValue, char **endptr);
extern int is_struct__1017_allow_double_convertion();
extern int struct__1017_to_double(const void *pValue, double *nValue);
extern int get_struct__1017_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1017(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1017_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1017_Utils;

/****************************************************************
 ** struct__1021 
 ****************************************************************/
extern int struct__1021_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1021_string(const char *str, char **endptr);
extern int string_to_struct__1021(const char *str, void *pValue, char **endptr);
extern int is_struct__1021_allow_double_convertion();
extern int struct__1021_to_double(const void *pValue, double *nValue);
extern int get_struct__1021_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1021(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1021_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1021_Utils;

/****************************************************************
 ** array__1026 
 ****************************************************************/
extern int array__1026_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1026_string(const char *str, char **endptr);
extern int string_to_array__1026(const char *str, void *pValue, char **endptr);
extern int is_array__1026_allow_double_convertion();
extern int array__1026_to_double(const void *pValue, double *nValue);
extern int get_array__1026_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1026(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1026_default_value(void *pValue);
extern SimTypeUtils _Type_array__1026_Utils;

/****************************************************************
 ** struct__1029 
 ****************************************************************/
extern int struct__1029_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1029_string(const char *str, char **endptr);
extern int string_to_struct__1029(const char *str, void *pValue, char **endptr);
extern int is_struct__1029_allow_double_convertion();
extern int struct__1029_to_double(const void *pValue, double *nValue);
extern int get_struct__1029_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1029(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1029_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1029_Utils;

/****************************************************************
 ** struct__1034 
 ****************************************************************/
extern int struct__1034_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1034_string(const char *str, char **endptr);
extern int string_to_struct__1034(const char *str, void *pValue, char **endptr);
extern int is_struct__1034_allow_double_convertion();
extern int struct__1034_to_double(const void *pValue, double *nValue);
extern int get_struct__1034_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1034(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1034_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1034_Utils;

/****************************************************************
 ** struct__1039 
 ****************************************************************/
extern int struct__1039_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1039_string(const char *str, char **endptr);
extern int string_to_struct__1039(const char *str, void *pValue, char **endptr);
extern int is_struct__1039_allow_double_convertion();
extern int struct__1039_to_double(const void *pValue, double *nValue);
extern int get_struct__1039_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1039(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1039_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1039_Utils;

/****************************************************************
 ** struct__1043 
 ****************************************************************/
extern int struct__1043_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1043_string(const char *str, char **endptr);
extern int string_to_struct__1043(const char *str, void *pValue, char **endptr);
extern int is_struct__1043_allow_double_convertion();
extern int struct__1043_to_double(const void *pValue, double *nValue);
extern int get_struct__1043_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1043(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1043_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1043_Utils;

/****************************************************************
 ** array__1048 
 ****************************************************************/
extern int array__1048_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1048_string(const char *str, char **endptr);
extern int string_to_array__1048(const char *str, void *pValue, char **endptr);
extern int is_array__1048_allow_double_convertion();
extern int array__1048_to_double(const void *pValue, double *nValue);
extern int get_array__1048_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1048(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1048_default_value(void *pValue);
extern SimTypeUtils _Type_array__1048_Utils;

/****************************************************************
 ** Orientation_DetermineBGOrientation_LRBG_DataDctionary 
 ****************************************************************/
extern int Orientation_DetermineBGOrientation_LRBG_DataDctionary_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Orientation_DetermineBGOrientation_LRBG_DataDctionary_string(const char *str, char **endptr);
extern int string_to_Orientation_DetermineBGOrientation_LRBG_DataDctionary(const char *str, void *pValue, char **endptr);
extern int is_Orientation_DetermineBGOrientation_LRBG_DataDctionary_allow_double_convertion();
extern int Orientation_DetermineBGOrientation_LRBG_DataDctionary_to_double(const void *pValue, double *nValue);
extern int get_Orientation_DetermineBGOrientation_LRBG_DataDctionary_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Orientation_DetermineBGOrientation_LRBG_DataDctionary(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Orientation_DetermineBGOrientation_LRBG_DataDctionary_default_value(void *pValue);
extern SimTypeUtils _Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils;

/****************************************************************
 ** ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs 
 ****************************************************************/
extern int ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_string(const char *str, char **endptr);
extern int string_to_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs(const char *str, void *pValue, char **endptr);
extern int is_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_allow_double_convertion();
extern int ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_double(const void *pValue, double *nValue);
extern int get_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_default_value(void *pValue);
extern SimTypeUtils _Type_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils;

/****************************************************************
 ** CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG 
 ****************************************************************/
extern int CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string(const char *str, char **endptr);
extern int string_to_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(const char *str, void *pValue, char **endptr);
extern int is_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_allow_double_convertion();
extern int CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double(const void *pValue, double *nValue);
extern int get_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_default_value(void *pValue);
extern SimTypeUtils _Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils;

/****************************************************************
 ** Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG 
 ****************************************************************/
extern int Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string(const char *str, char **endptr);
extern int string_to_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(const char *str, void *pValue, char **endptr);
extern int is_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_allow_double_convertion();
extern int Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double(const void *pValue, double *nValue);
extern int get_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_default_value(void *pValue);
extern SimTypeUtils _Type_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils;

/****************************************************************
 ** FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage 
 ****************************************************************/
extern int FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_string(const char *str, char **endptr);
extern int string_to_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(const char *str, void *pValue, char **endptr);
extern int is_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_allow_double_convertion();
extern int FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_double(const void *pValue, double *nValue);
extern int get_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_default_value(void *pValue);
extern SimTypeUtils _Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils;

/****************************************************************
 ** Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage 
 ****************************************************************/
extern int CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char *str, char **endptr);
extern int string_to_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char *str, void *pValue, char **endptr);
extern int is_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(const void *pValue, double *nValue);
extern int get_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value(void *pValue);
extern SimTypeUtils _Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;

/****************************************************************
 ** HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage 
 ****************************************************************/
extern int HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char *str, char **endptr);
extern int string_to_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char *str, void *pValue, char **endptr);
extern int is_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(const void *pValue, double *nValue);
extern int get_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value(void *pValue);
extern SimTypeUtils _Type_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;

/****************************************************************
 ** HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage 
 ****************************************************************/
extern int HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char *str, char **endptr);
extern int string_to_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char *str, void *pValue, char **endptr);
extern int is_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(const void *pValue, double *nValue);
extern int get_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value(void *pValue);
extern SimTypeUtils _Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;

/****************************************************************
 ** Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage 
 ****************************************************************/
extern int Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char *str, char **endptr);
extern int string_to_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char *str, void *pValue, char **endptr);
extern int is_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(const void *pValue, double *nValue);
extern int get_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value(void *pValue);
extern SimTypeUtils _Type_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;

/****************************************************************
 ** Header_DetermineBGOrientation_LRBG_DataDctionary_BTM 
 ****************************************************************/
extern int Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_string(const char *str, char **endptr);
extern int string_to_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(const char *str, void *pValue, char **endptr);
extern int is_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_allow_double_convertion();
extern int Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double(const void *pValue, double *nValue);
extern int get_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_default_value(void *pValue);
extern SimTypeUtils _Type_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils;

/****************************************************************
 ** AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM 
 ****************************************************************/
extern int AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_string(const char *str, char **endptr);
extern int string_to_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM(const char *str, void *pValue, char **endptr);
extern int is_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_allow_double_convertion();
extern int AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double(const void *pValue, double *nValue);
extern int get_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_default_value(void *pValue);
extern SimTypeUtils _Type_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils;

/****************************************************************
 ** TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo 
 ****************************************************************/
extern int TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_string(const char *str, char **endptr);
extern int string_to_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo(const char *str, void *pValue, char **endptr);
extern int is_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_allow_double_convertion();
extern int TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_to_double(const void *pValue, double *nValue);
extern int get_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_default_value(void *pValue);
extern SimTypeUtils _Type_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils;

/****************************************************************
 ** Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets 
 ****************************************************************/
extern int Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_string(const char *str, char **endptr);
extern int string_to_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(const char *str, void *pValue, char **endptr);
extern int is_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_allow_double_convertion();
extern int Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_double(const void *pValue, double *nValue);
extern int get_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_default_value(void *pValue);
extern SimTypeUtils _Type_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils;

/****************************************************************
 ** Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets 
 ****************************************************************/
extern int Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_string(const char *str, char **endptr);
extern int string_to_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets(const char *str, void *pValue, char **endptr);
extern int is_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_allow_double_convertion();
extern int Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_double(const void *pValue, double *nValue);
extern int get_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_default_value(void *pValue);
extern SimTypeUtils _Type_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils;

/****************************************************************
 ** RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport 
 ****************************************************************/
extern int RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_string(const char *str, char **endptr);
extern int string_to_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport(const char *str, void *pValue, char **endptr);
extern int is_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_allow_double_convertion();
extern int RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_to_double(const void *pValue, double *nValue);
extern int get_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_default_value(void *pValue);
extern SimTypeUtils _Type_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils;


#endif /*DETERMINEBG_ORIENTATION_AND_LRBG_TYPES_CONVERTION */
