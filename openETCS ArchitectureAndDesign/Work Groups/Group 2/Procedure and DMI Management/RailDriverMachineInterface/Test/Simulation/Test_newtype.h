#ifndef TEST_TYPES_CONVERTION
#define TEST_TYPES_CONVERTION

#include "NewSmuTypes.h"

/****************************************************************
 ** SSM_ST_ShowDistanceToTarget 
 ****************************************************************/
extern int SSM_ST_ShowDistanceToTarget_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_ST_ShowDistanceToTarget_string(const char *str, char **endptr);
extern int string_to_SSM_ST_ShowDistanceToTarget(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_ShowDistanceToTarget_allow_double_convertion();
extern int SSM_ST_ShowDistanceToTarget_to_double(const void *pValue, double *nValue);
extern int get_SSM_ST_ShowDistanceToTarget_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_ST_ShowDistanceToTarget(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_ST_ShowDistanceToTarget_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_ShowDistanceToTarget_Utils;

/****************************************************************
 ** SSM_TR_ShowDistanceToTarget 
 ****************************************************************/
extern int SSM_TR_ShowDistanceToTarget_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_TR_ShowDistanceToTarget_string(const char *str, char **endptr);
extern int string_to_SSM_TR_ShowDistanceToTarget(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_ShowDistanceToTarget_allow_double_convertion();
extern int SSM_TR_ShowDistanceToTarget_to_double(const void *pValue, double *nValue);
extern int get_SSM_TR_ShowDistanceToTarget_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_TR_ShowDistanceToTarget(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_TR_ShowDistanceToTarget_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_ShowDistanceToTarget_Utils;

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
 ** array_bool_12 
 ****************************************************************/
extern int array_bool_12_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_bool_12_string(const char *str, char **endptr);
extern int string_to_array_bool_12(const char *str, void *pValue, char **endptr);
extern int is_array_bool_12_allow_double_convertion();
extern int array_bool_12_to_double(const void *pValue, double *nValue);
extern int get_array_bool_12_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_bool_12(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_bool_12_default_value(void *pValue);
extern SimTypeUtils _Type_array_bool_12_Utils;

/****************************************************************
 ** array_real_12 
 ****************************************************************/
extern int array_real_12_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_real_12_string(const char *str, char **endptr);
extern int string_to_array_real_12(const char *str, void *pValue, char **endptr);
extern int is_array_real_12_allow_double_convertion();
extern int array_real_12_to_double(const void *pValue, double *nValue);
extern int get_array_real_12_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_real_12(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_real_12_default_value(void *pValue);
extern SimTypeUtils _Type_array_real_12_Utils;

/****************************************************************
 ** array_int_1 
 ****************************************************************/
extern int array_int_1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_1_string(const char *str, char **endptr);
extern int string_to_array_int_1(const char *str, void *pValue, char **endptr);
extern int is_array_int_1_allow_double_convertion();
extern int array_int_1_to_double(const void *pValue, double *nValue);
extern int get_array_int_1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_1_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_1_Utils;


#endif /*TEST_TYPES_CONVERTION */
