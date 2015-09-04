#ifndef TESTTRACKATLAS_TYPES_CONVERSION
#define TESTTRACKATLAS_TYPES_CONVERSION

#include "NewSmuTypes.h"

/****************************************************************
 ** SSM_ST_SM1 
 ****************************************************************/
extern int SSM_ST_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_ST_SM1_string(const char *str, char **endptr);
extern int string_to_SSM_ST_SM1(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_SM1_allow_double_conversion();
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
extern int is_SSM_TR_SM1_allow_double_conversion();
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
extern int is_kcg_real_allow_double_conversion();
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
extern int is_kcg_bool_allow_double_conversion();
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
extern int is_kcg_char_allow_double_conversion();
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
extern int is_kcg_int_allow_double_conversion();
extern int kcg_int_to_double(const void *pValue, double *nValue);
extern int get_kcg_int_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_int(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_int_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_int_Utils;

/****************************************************************
 ** struct__22557 
 ****************************************************************/
extern int struct__22557_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22557_string(const char *str, char **endptr);
extern int string_to_struct__22557(const char *str, void *pValue, char **endptr);
extern int is_struct__22557_allow_double_conversion();
extern int struct__22557_to_double(const void *pValue, double *nValue);
extern int get_struct__22557_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22557(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22557_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22557_Utils;

/****************************************************************
 ** array_int_500 
 ****************************************************************/
extern int array_int_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_500_string(const char *str, char **endptr);
extern int string_to_array_int_500(const char *str, void *pValue, char **endptr);
extern int is_array_int_500_allow_double_conversion();
extern int array_int_500_to_double(const void *pValue, double *nValue);
extern int get_array_int_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_500(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_500_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_500_Utils;

/****************************************************************
 ** struct__22575 
 ****************************************************************/
extern int struct__22575_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22575_string(const char *str, char **endptr);
extern int string_to_struct__22575(const char *str, void *pValue, char **endptr);
extern int is_struct__22575_allow_double_conversion();
extern int struct__22575_to_double(const void *pValue, double *nValue);
extern int get_struct__22575_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22575(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22575_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22575_Utils;

/****************************************************************
 ** array__22583 
 ****************************************************************/
extern int array__22583_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22583_string(const char *str, char **endptr);
extern int string_to_array__22583(const char *str, void *pValue, char **endptr);
extern int is_array__22583_allow_double_conversion();
extern int array__22583_to_double(const void *pValue, double *nValue);
extern int get_array__22583_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22583(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22583_default_value(void *pValue);
extern SimTypeUtils _Type_array__22583_Utils;

/****************************************************************
 ** struct__22586 
 ****************************************************************/
extern int struct__22586_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22586_string(const char *str, char **endptr);
extern int string_to_struct__22586(const char *str, void *pValue, char **endptr);
extern int is_struct__22586_allow_double_conversion();
extern int struct__22586_to_double(const void *pValue, double *nValue);
extern int get_struct__22586_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22586(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22586_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22586_Utils;

/****************************************************************
 ** struct__22591 
 ****************************************************************/
extern int struct__22591_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22591_string(const char *str, char **endptr);
extern int string_to_struct__22591(const char *str, void *pValue, char **endptr);
extern int is_struct__22591_allow_double_conversion();
extern int struct__22591_to_double(const void *pValue, double *nValue);
extern int get_struct__22591_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22591(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22591_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22591_Utils;

/****************************************************************
 ** struct__22601 
 ****************************************************************/
extern int struct__22601_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22601_string(const char *str, char **endptr);
extern int string_to_struct__22601(const char *str, void *pValue, char **endptr);
extern int is_struct__22601_allow_double_conversion();
extern int struct__22601_to_double(const void *pValue, double *nValue);
extern int get_struct__22601_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22601(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22601_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22601_Utils;

/****************************************************************
 ** struct__22619 
 ****************************************************************/
extern int struct__22619_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22619_string(const char *str, char **endptr);
extern int string_to_struct__22619(const char *str, void *pValue, char **endptr);
extern int is_struct__22619_allow_double_conversion();
extern int struct__22619_to_double(const void *pValue, double *nValue);
extern int get_struct__22619_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22619(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22619_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22619_Utils;

/****************************************************************
 ** struct__22629 
 ****************************************************************/
extern int struct__22629_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22629_string(const char *str, char **endptr);
extern int string_to_struct__22629(const char *str, void *pValue, char **endptr);
extern int is_struct__22629_allow_double_conversion();
extern int struct__22629_to_double(const void *pValue, double *nValue);
extern int get_struct__22629_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22629(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22629_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22629_Utils;

/****************************************************************
 ** struct__22640 
 ****************************************************************/
extern int struct__22640_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22640_string(const char *str, char **endptr);
extern int string_to_struct__22640(const char *str, void *pValue, char **endptr);
extern int is_struct__22640_allow_double_conversion();
extern int struct__22640_to_double(const void *pValue, double *nValue);
extern int get_struct__22640_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22640(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22640_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22640_Utils;

/****************************************************************
 ** struct__22654 
 ****************************************************************/
extern int struct__22654_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22654_string(const char *str, char **endptr);
extern int string_to_struct__22654(const char *str, void *pValue, char **endptr);
extern int is_struct__22654_allow_double_conversion();
extern int struct__22654_to_double(const void *pValue, double *nValue);
extern int get_struct__22654_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22654(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22654_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22654_Utils;

/****************************************************************
 ** struct__22663 
 ****************************************************************/
extern int struct__22663_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22663_string(const char *str, char **endptr);
extern int string_to_struct__22663(const char *str, void *pValue, char **endptr);
extern int is_struct__22663_allow_double_conversion();
extern int struct__22663_to_double(const void *pValue, double *nValue);
extern int get_struct__22663_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22663(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22663_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22663_Utils;

/****************************************************************
 ** struct__22673 
 ****************************************************************/
extern int struct__22673_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22673_string(const char *str, char **endptr);
extern int string_to_struct__22673(const char *str, void *pValue, char **endptr);
extern int is_struct__22673_allow_double_conversion();
extern int struct__22673_to_double(const void *pValue, double *nValue);
extern int get_struct__22673_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22673(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22673_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22673_Utils;

/****************************************************************
 ** struct__22684 
 ****************************************************************/
extern int struct__22684_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22684_string(const char *str, char **endptr);
extern int string_to_struct__22684(const char *str, void *pValue, char **endptr);
extern int is_struct__22684_allow_double_conversion();
extern int struct__22684_to_double(const void *pValue, double *nValue);
extern int get_struct__22684_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22684(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22684_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22684_Utils;

/****************************************************************
 ** struct__22694 
 ****************************************************************/
extern int struct__22694_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22694_string(const char *str, char **endptr);
extern int string_to_struct__22694(const char *str, void *pValue, char **endptr);
extern int is_struct__22694_allow_double_conversion();
extern int struct__22694_to_double(const void *pValue, double *nValue);
extern int get_struct__22694_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22694(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22694_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22694_Utils;

/****************************************************************
 ** struct__22708 
 ****************************************************************/
extern int struct__22708_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22708_string(const char *str, char **endptr);
extern int string_to_struct__22708(const char *str, void *pValue, char **endptr);
extern int is_struct__22708_allow_double_conversion();
extern int struct__22708_to_double(const void *pValue, double *nValue);
extern int get_struct__22708_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22708(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22708_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22708_Utils;

/****************************************************************
 ** struct__22718 
 ****************************************************************/
extern int struct__22718_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22718_string(const char *str, char **endptr);
extern int string_to_struct__22718(const char *str, void *pValue, char **endptr);
extern int is_struct__22718_allow_double_conversion();
extern int struct__22718_to_double(const void *pValue, double *nValue);
extern int get_struct__22718_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22718(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22718_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22718_Utils;

/****************************************************************
 ** struct__22725 
 ****************************************************************/
extern int struct__22725_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22725_string(const char *str, char **endptr);
extern int string_to_struct__22725(const char *str, void *pValue, char **endptr);
extern int is_struct__22725_allow_double_conversion();
extern int struct__22725_to_double(const void *pValue, double *nValue);
extern int get_struct__22725_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22725(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22725_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22725_Utils;

/****************************************************************
 ** array_int_4 
 ****************************************************************/
extern int array_int_4_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_4_string(const char *str, char **endptr);
extern int string_to_array_int_4(const char *str, void *pValue, char **endptr);
extern int is_array_int_4_allow_double_conversion();
extern int array_int_4_to_double(const void *pValue, double *nValue);
extern int get_array_int_4_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_4(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_4_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_4_Utils;

/****************************************************************
 ** struct__22737 
 ****************************************************************/
extern int struct__22737_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22737_string(const char *str, char **endptr);
extern int string_to_struct__22737(const char *str, void *pValue, char **endptr);
extern int is_struct__22737_allow_double_conversion();
extern int struct__22737_to_double(const void *pValue, double *nValue);
extern int get_struct__22737_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22737(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22737_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22737_Utils;

/****************************************************************
 ** array_int_4_32 
 ****************************************************************/
extern int array_int_4_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_4_32_string(const char *str, char **endptr);
extern int string_to_array_int_4_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_4_32_allow_double_conversion();
extern int array_int_4_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_4_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_4_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_4_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_4_32_Utils;

/****************************************************************
 ** array_int_128 
 ****************************************************************/
extern int array_int_128_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_128_string(const char *str, char **endptr);
extern int string_to_array_int_128(const char *str, void *pValue, char **endptr);
extern int is_array_int_128_allow_double_conversion();
extern int array_int_128_to_double(const void *pValue, double *nValue);
extern int get_array_int_128_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_128(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_128_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_128_Utils;

/****************************************************************
 ** array__22750 
 ****************************************************************/
extern int array__22750_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22750_string(const char *str, char **endptr);
extern int string_to_array__22750(const char *str, void *pValue, char **endptr);
extern int is_array__22750_allow_double_conversion();
extern int array__22750_to_double(const void *pValue, double *nValue);
extern int get_array__22750_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22750(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22750_default_value(void *pValue);
extern SimTypeUtils _Type_array__22750_Utils;

/****************************************************************
 ** struct__22753 
 ****************************************************************/
extern int struct__22753_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22753_string(const char *str, char **endptr);
extern int string_to_struct__22753(const char *str, void *pValue, char **endptr);
extern int is_struct__22753_allow_double_conversion();
extern int struct__22753_to_double(const void *pValue, double *nValue);
extern int get_struct__22753_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22753(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22753_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22753_Utils;

/****************************************************************
 ** struct__22780 
 ****************************************************************/
extern int struct__22780_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22780_string(const char *str, char **endptr);
extern int string_to_struct__22780(const char *str, void *pValue, char **endptr);
extern int is_struct__22780_allow_double_conversion();
extern int struct__22780_to_double(const void *pValue, double *nValue);
extern int get_struct__22780_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22780(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22780_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22780_Utils;

/****************************************************************
 ** array_int_7 
 ****************************************************************/
extern int array_int_7_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_7_string(const char *str, char **endptr);
extern int string_to_array_int_7(const char *str, void *pValue, char **endptr);
extern int is_array_int_7_allow_double_conversion();
extern int array_int_7_to_double(const void *pValue, double *nValue);
extern int get_array_int_7_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_7(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_7_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_7_Utils;

/****************************************************************
 ** struct__22796 
 ****************************************************************/
extern int struct__22796_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22796_string(const char *str, char **endptr);
extern int string_to_struct__22796(const char *str, void *pValue, char **endptr);
extern int is_struct__22796_allow_double_conversion();
extern int struct__22796_to_double(const void *pValue, double *nValue);
extern int get_struct__22796_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22796(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22796_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22796_Utils;

/****************************************************************
 ** array_int_7_33 
 ****************************************************************/
extern int array_int_7_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_7_33_string(const char *str, char **endptr);
extern int string_to_array_int_7_33(const char *str, void *pValue, char **endptr);
extern int is_array_int_7_33_allow_double_conversion();
extern int array_int_7_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_7_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_7_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_7_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_7_33_Utils;

/****************************************************************
 ** array_int_231 
 ****************************************************************/
extern int array_int_231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_231_string(const char *str, char **endptr);
extern int string_to_array_int_231(const char *str, void *pValue, char **endptr);
extern int is_array_int_231_allow_double_conversion();
extern int array_int_231_to_double(const void *pValue, double *nValue);
extern int get_array_int_231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_231(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_231_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_231_Utils;

/****************************************************************
 ** array__22812 
 ****************************************************************/
extern int array__22812_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22812_string(const char *str, char **endptr);
extern int string_to_array__22812(const char *str, void *pValue, char **endptr);
extern int is_array__22812_allow_double_conversion();
extern int array__22812_to_double(const void *pValue, double *nValue);
extern int get_array__22812_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22812(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22812_default_value(void *pValue);
extern SimTypeUtils _Type_array__22812_Utils;

/****************************************************************
 ** array__22815 
 ****************************************************************/
extern int array__22815_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22815_string(const char *str, char **endptr);
extern int string_to_array__22815(const char *str, void *pValue, char **endptr);
extern int is_array__22815_allow_double_conversion();
extern int array__22815_to_double(const void *pValue, double *nValue);
extern int get_array__22815_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22815(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22815_default_value(void *pValue);
extern SimTypeUtils _Type_array__22815_Utils;

/****************************************************************
 ** struct__22818 
 ****************************************************************/
extern int struct__22818_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22818_string(const char *str, char **endptr);
extern int string_to_struct__22818(const char *str, void *pValue, char **endptr);
extern int is_struct__22818_allow_double_conversion();
extern int struct__22818_to_double(const void *pValue, double *nValue);
extern int get_struct__22818_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22818(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22818_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22818_Utils;

/****************************************************************
 ** array_int_2 
 ****************************************************************/
extern int array_int_2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_2_string(const char *str, char **endptr);
extern int string_to_array_int_2(const char *str, void *pValue, char **endptr);
extern int is_array_int_2_allow_double_conversion();
extern int array_int_2_to_double(const void *pValue, double *nValue);
extern int get_array_int_2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_2_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_2_Utils;

/****************************************************************
 ** struct__22838 
 ****************************************************************/
extern int struct__22838_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22838_string(const char *str, char **endptr);
extern int string_to_struct__22838(const char *str, void *pValue, char **endptr);
extern int is_struct__22838_allow_double_conversion();
extern int struct__22838_to_double(const void *pValue, double *nValue);
extern int get_struct__22838_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22838(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22838_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22838_Utils;

/****************************************************************
 ** array_int_2_32 
 ****************************************************************/
extern int array_int_2_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_2_32_string(const char *str, char **endptr);
extern int string_to_array_int_2_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_2_32_allow_double_conversion();
extern int array_int_2_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_2_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_2_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_2_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_2_32_Utils;

/****************************************************************
 ** array_int_64 
 ****************************************************************/
extern int array_int_64_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_64_string(const char *str, char **endptr);
extern int string_to_array_int_64(const char *str, void *pValue, char **endptr);
extern int is_array_int_64_allow_double_conversion();
extern int array_int_64_to_double(const void *pValue, double *nValue);
extern int get_array_int_64_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_64(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_64_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_64_Utils;

/****************************************************************
 ** array__22849 
 ****************************************************************/
extern int array__22849_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22849_string(const char *str, char **endptr);
extern int string_to_array__22849(const char *str, void *pValue, char **endptr);
extern int is_array__22849_allow_double_conversion();
extern int array__22849_to_double(const void *pValue, double *nValue);
extern int get_array__22849_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22849(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22849_default_value(void *pValue);
extern SimTypeUtils _Type_array__22849_Utils;

/****************************************************************
 ** struct__22852 
 ****************************************************************/
extern int struct__22852_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22852_string(const char *str, char **endptr);
extern int string_to_struct__22852(const char *str, void *pValue, char **endptr);
extern int is_struct__22852_allow_double_conversion();
extern int struct__22852_to_double(const void *pValue, double *nValue);
extern int get_struct__22852_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22852(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22852_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22852_Utils;

/****************************************************************
 ** array__22860 
 ****************************************************************/
extern int array__22860_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22860_string(const char *str, char **endptr);
extern int string_to_array__22860(const char *str, void *pValue, char **endptr);
extern int is_array__22860_allow_double_conversion();
extern int array__22860_to_double(const void *pValue, double *nValue);
extern int get_array__22860_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22860(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22860_default_value(void *pValue);
extern SimTypeUtils _Type_array__22860_Utils;

/****************************************************************
 ** array__22863 
 ****************************************************************/
extern int array__22863_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22863_string(const char *str, char **endptr);
extern int string_to_array__22863(const char *str, void *pValue, char **endptr);
extern int is_array__22863_allow_double_conversion();
extern int array__22863_to_double(const void *pValue, double *nValue);
extern int get_array__22863_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22863(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22863_default_value(void *pValue);
extern SimTypeUtils _Type_array__22863_Utils;

/****************************************************************
 ** struct__22866 
 ****************************************************************/
extern int struct__22866_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22866_string(const char *str, char **endptr);
extern int string_to_struct__22866(const char *str, void *pValue, char **endptr);
extern int is_struct__22866_allow_double_conversion();
extern int struct__22866_to_double(const void *pValue, double *nValue);
extern int get_struct__22866_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22866(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22866_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22866_Utils;

/****************************************************************
 ** array_int_3 
 ****************************************************************/
extern int array_int_3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_3_string(const char *str, char **endptr);
extern int string_to_array_int_3(const char *str, void *pValue, char **endptr);
extern int is_array_int_3_allow_double_conversion();
extern int array_int_3_to_double(const void *pValue, double *nValue);
extern int get_array_int_3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_3(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_3_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_3_Utils;

/****************************************************************
 ** struct__22884 
 ****************************************************************/
extern int struct__22884_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22884_string(const char *str, char **endptr);
extern int string_to_struct__22884(const char *str, void *pValue, char **endptr);
extern int is_struct__22884_allow_double_conversion();
extern int struct__22884_to_double(const void *pValue, double *nValue);
extern int get_struct__22884_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22884(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22884_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22884_Utils;

/****************************************************************
 ** array_int_3_33 
 ****************************************************************/
extern int array_int_3_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_3_33_string(const char *str, char **endptr);
extern int string_to_array_int_3_33(const char *str, void *pValue, char **endptr);
extern int is_array_int_3_33_allow_double_conversion();
extern int array_int_3_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_3_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_3_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_3_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_3_33_Utils;

/****************************************************************
 ** array_int_99 
 ****************************************************************/
extern int array_int_99_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_99_string(const char *str, char **endptr);
extern int string_to_array_int_99(const char *str, void *pValue, char **endptr);
extern int is_array_int_99_allow_double_conversion();
extern int array_int_99_to_double(const void *pValue, double *nValue);
extern int get_array_int_99_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_99(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_99_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_99_Utils;

/****************************************************************
 ** array__22896 
 ****************************************************************/
extern int array__22896_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22896_string(const char *str, char **endptr);
extern int string_to_array__22896(const char *str, void *pValue, char **endptr);
extern int is_array__22896_allow_double_conversion();
extern int array__22896_to_double(const void *pValue, double *nValue);
extern int get_array__22896_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22896(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22896_default_value(void *pValue);
extern SimTypeUtils _Type_array__22896_Utils;

/****************************************************************
 ** array__22899 
 ****************************************************************/
extern int array__22899_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22899_string(const char *str, char **endptr);
extern int string_to_array__22899(const char *str, void *pValue, char **endptr);
extern int is_array__22899_allow_double_conversion();
extern int array__22899_to_double(const void *pValue, double *nValue);
extern int get_array__22899_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22899(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22899_default_value(void *pValue);
extern SimTypeUtils _Type_array__22899_Utils;

/****************************************************************
 ** struct__22902 
 ****************************************************************/
extern int struct__22902_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22902_string(const char *str, char **endptr);
extern int string_to_struct__22902(const char *str, void *pValue, char **endptr);
extern int is_struct__22902_allow_double_conversion();
extern int struct__22902_to_double(const void *pValue, double *nValue);
extern int get_struct__22902_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22902(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22902_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22902_Utils;

/****************************************************************
 ** struct__22915 
 ****************************************************************/
extern int struct__22915_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22915_string(const char *str, char **endptr);
extern int string_to_struct__22915(const char *str, void *pValue, char **endptr);
extern int is_struct__22915_allow_double_conversion();
extern int struct__22915_to_double(const void *pValue, double *nValue);
extern int get_struct__22915_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22915(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22915_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22915_Utils;

/****************************************************************
 ** array__22921 
 ****************************************************************/
extern int array__22921_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22921_string(const char *str, char **endptr);
extern int string_to_array__22921(const char *str, void *pValue, char **endptr);
extern int is_array__22921_allow_double_conversion();
extern int array__22921_to_double(const void *pValue, double *nValue);
extern int get_array__22921_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22921(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22921_default_value(void *pValue);
extern SimTypeUtils _Type_array__22921_Utils;

/****************************************************************
 ** array__22924 
 ****************************************************************/
extern int array__22924_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22924_string(const char *str, char **endptr);
extern int string_to_array__22924(const char *str, void *pValue, char **endptr);
extern int is_array__22924_allow_double_conversion();
extern int array__22924_to_double(const void *pValue, double *nValue);
extern int get_array__22924_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22924(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22924_default_value(void *pValue);
extern SimTypeUtils _Type_array__22924_Utils;

/****************************************************************
 ** struct__22927 
 ****************************************************************/
extern int struct__22927_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22927_string(const char *str, char **endptr);
extern int string_to_struct__22927(const char *str, void *pValue, char **endptr);
extern int is_struct__22927_allow_double_conversion();
extern int struct__22927_to_double(const void *pValue, double *nValue);
extern int get_struct__22927_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22927(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22927_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22927_Utils;

/****************************************************************
 ** array_int_32 
 ****************************************************************/
extern int array_int_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_32_string(const char *str, char **endptr);
extern int string_to_array_int_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_32_allow_double_conversion();
extern int array_int_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_32_Utils;

/****************************************************************
 ** struct__22944 
 ****************************************************************/
extern int struct__22944_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22944_string(const char *str, char **endptr);
extern int string_to_struct__22944(const char *str, void *pValue, char **endptr);
extern int is_struct__22944_allow_double_conversion();
extern int struct__22944_to_double(const void *pValue, double *nValue);
extern int get_struct__22944_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22944(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22944_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22944_Utils;

/****************************************************************
 ** struct__22973 
 ****************************************************************/
extern int struct__22973_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22973_string(const char *str, char **endptr);
extern int string_to_struct__22973(const char *str, void *pValue, char **endptr);
extern int is_struct__22973_allow_double_conversion();
extern int struct__22973_to_double(const void *pValue, double *nValue);
extern int get_struct__22973_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22973(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22973_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22973_Utils;

/****************************************************************
 ** struct__22991 
 ****************************************************************/
extern int struct__22991_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22991_string(const char *str, char **endptr);
extern int string_to_struct__22991(const char *str, void *pValue, char **endptr);
extern int is_struct__22991_allow_double_conversion();
extern int struct__22991_to_double(const void *pValue, double *nValue);
extern int get_struct__22991_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22991(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22991_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22991_Utils;

/****************************************************************
 ** struct__22996 
 ****************************************************************/
extern int struct__22996_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22996_string(const char *str, char **endptr);
extern int string_to_struct__22996(const char *str, void *pValue, char **endptr);
extern int is_struct__22996_allow_double_conversion();
extern int struct__22996_to_double(const void *pValue, double *nValue);
extern int get_struct__22996_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22996(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22996_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22996_Utils;

/****************************************************************
 ** struct__23016 
 ****************************************************************/
extern int struct__23016_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23016_string(const char *str, char **endptr);
extern int string_to_struct__23016(const char *str, void *pValue, char **endptr);
extern int is_struct__23016_allow_double_conversion();
extern int struct__23016_to_double(const void *pValue, double *nValue);
extern int get_struct__23016_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23016(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23016_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23016_Utils;

/****************************************************************
 ** struct__23021 
 ****************************************************************/
extern int struct__23021_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23021_string(const char *str, char **endptr);
extern int string_to_struct__23021(const char *str, void *pValue, char **endptr);
extern int is_struct__23021_allow_double_conversion();
extern int struct__23021_to_double(const void *pValue, double *nValue);
extern int get_struct__23021_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23021(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23021_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23021_Utils;

/****************************************************************
 ** struct__23040 
 ****************************************************************/
extern int struct__23040_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23040_string(const char *str, char **endptr);
extern int string_to_struct__23040(const char *str, void *pValue, char **endptr);
extern int is_struct__23040_allow_double_conversion();
extern int struct__23040_to_double(const void *pValue, double *nValue);
extern int get_struct__23040_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23040(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23040_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23040_Utils;

/****************************************************************
 ** struct__23045 
 ****************************************************************/
extern int struct__23045_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23045_string(const char *str, char **endptr);
extern int string_to_struct__23045(const char *str, void *pValue, char **endptr);
extern int is_struct__23045_allow_double_conversion();
extern int struct__23045_to_double(const void *pValue, double *nValue);
extern int get_struct__23045_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23045(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23045_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23045_Utils;

/****************************************************************
 ** struct__23050 
 ****************************************************************/
extern int struct__23050_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23050_string(const char *str, char **endptr);
extern int string_to_struct__23050(const char *str, void *pValue, char **endptr);
extern int is_struct__23050_allow_double_conversion();
extern int struct__23050_to_double(const void *pValue, double *nValue);
extern int get_struct__23050_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23050(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23050_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23050_Utils;

/****************************************************************
 ** struct__23056 
 ****************************************************************/
extern int struct__23056_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23056_string(const char *str, char **endptr);
extern int string_to_struct__23056(const char *str, void *pValue, char **endptr);
extern int is_struct__23056_allow_double_conversion();
extern int struct__23056_to_double(const void *pValue, double *nValue);
extern int get_struct__23056_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23056(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23056_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23056_Utils;

/****************************************************************
 ** struct__23066 
 ****************************************************************/
extern int struct__23066_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23066_string(const char *str, char **endptr);
extern int string_to_struct__23066(const char *str, void *pValue, char **endptr);
extern int is_struct__23066_allow_double_conversion();
extern int struct__23066_to_double(const void *pValue, double *nValue);
extern int get_struct__23066_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23066(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23066_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23066_Utils;

/****************************************************************
 ** struct__23080 
 ****************************************************************/
extern int struct__23080_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23080_string(const char *str, char **endptr);
extern int string_to_struct__23080(const char *str, void *pValue, char **endptr);
extern int is_struct__23080_allow_double_conversion();
extern int struct__23080_to_double(const void *pValue, double *nValue);
extern int get_struct__23080_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23080(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23080_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23080_Utils;

/****************************************************************
 ** array__23089 
 ****************************************************************/
extern int array__23089_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23089_string(const char *str, char **endptr);
extern int string_to_array__23089(const char *str, void *pValue, char **endptr);
extern int is_array__23089_allow_double_conversion();
extern int array__23089_to_double(const void *pValue, double *nValue);
extern int get_array__23089_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23089(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23089_default_value(void *pValue);
extern SimTypeUtils _Type_array__23089_Utils;

/****************************************************************
 ** struct__23092 
 ****************************************************************/
extern int struct__23092_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23092_string(const char *str, char **endptr);
extern int string_to_struct__23092(const char *str, void *pValue, char **endptr);
extern int is_struct__23092_allow_double_conversion();
extern int struct__23092_to_double(const void *pValue, double *nValue);
extern int get_struct__23092_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23092(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23092_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23092_Utils;

/****************************************************************
 ** struct__23099 
 ****************************************************************/
extern int struct__23099_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23099_string(const char *str, char **endptr);
extern int string_to_struct__23099(const char *str, void *pValue, char **endptr);
extern int is_struct__23099_allow_double_conversion();
extern int struct__23099_to_double(const void *pValue, double *nValue);
extern int get_struct__23099_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23099(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23099_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23099_Utils;

/****************************************************************
 ** struct__23105 
 ****************************************************************/
extern int struct__23105_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23105_string(const char *str, char **endptr);
extern int string_to_struct__23105(const char *str, void *pValue, char **endptr);
extern int is_struct__23105_allow_double_conversion();
extern int struct__23105_to_double(const void *pValue, double *nValue);
extern int get_struct__23105_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23105(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23105_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23105_Utils;

/****************************************************************
 ** struct__23115 
 ****************************************************************/
extern int struct__23115_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23115_string(const char *str, char **endptr);
extern int string_to_struct__23115(const char *str, void *pValue, char **endptr);
extern int is_struct__23115_allow_double_conversion();
extern int struct__23115_to_double(const void *pValue, double *nValue);
extern int get_struct__23115_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23115(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23115_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23115_Utils;

/****************************************************************
 ** struct__23133 
 ****************************************************************/
extern int struct__23133_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23133_string(const char *str, char **endptr);
extern int string_to_struct__23133(const char *str, void *pValue, char **endptr);
extern int is_struct__23133_allow_double_conversion();
extern int struct__23133_to_double(const void *pValue, double *nValue);
extern int get_struct__23133_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23133(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23133_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23133_Utils;

/****************************************************************
 ** struct__23139 
 ****************************************************************/
extern int struct__23139_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23139_string(const char *str, char **endptr);
extern int string_to_struct__23139(const char *str, void *pValue, char **endptr);
extern int is_struct__23139_allow_double_conversion();
extern int struct__23139_to_double(const void *pValue, double *nValue);
extern int get_struct__23139_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23139(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23139_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23139_Utils;

/****************************************************************
 ** struct__23150 
 ****************************************************************/
extern int struct__23150_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23150_string(const char *str, char **endptr);
extern int string_to_struct__23150(const char *str, void *pValue, char **endptr);
extern int is_struct__23150_allow_double_conversion();
extern int struct__23150_to_double(const void *pValue, double *nValue);
extern int get_struct__23150_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23150(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23150_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23150_Utils;

/****************************************************************
 ** struct__23167 
 ****************************************************************/
extern int struct__23167_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23167_string(const char *str, char **endptr);
extern int string_to_struct__23167(const char *str, void *pValue, char **endptr);
extern int is_struct__23167_allow_double_conversion();
extern int struct__23167_to_double(const void *pValue, double *nValue);
extern int get_struct__23167_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23167(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23167_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23167_Utils;

/****************************************************************
 ** struct__23173 
 ****************************************************************/
extern int struct__23173_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23173_string(const char *str, char **endptr);
extern int string_to_struct__23173(const char *str, void *pValue, char **endptr);
extern int is_struct__23173_allow_double_conversion();
extern int struct__23173_to_double(const void *pValue, double *nValue);
extern int get_struct__23173_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23173(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23173_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23173_Utils;

/****************************************************************
 ** struct__23185 
 ****************************************************************/
extern int struct__23185_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23185_string(const char *str, char **endptr);
extern int string_to_struct__23185(const char *str, void *pValue, char **endptr);
extern int is_struct__23185_allow_double_conversion();
extern int struct__23185_to_double(const void *pValue, double *nValue);
extern int get_struct__23185_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23185(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23185_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23185_Utils;

/****************************************************************
 ** array__23190 
 ****************************************************************/
extern int array__23190_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23190_string(const char *str, char **endptr);
extern int string_to_array__23190(const char *str, void *pValue, char **endptr);
extern int is_array__23190_allow_double_conversion();
extern int array__23190_to_double(const void *pValue, double *nValue);
extern int get_array__23190_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23190(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23190_default_value(void *pValue);
extern SimTypeUtils _Type_array__23190_Utils;

/****************************************************************
 ** struct__23193 
 ****************************************************************/
extern int struct__23193_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23193_string(const char *str, char **endptr);
extern int string_to_struct__23193(const char *str, void *pValue, char **endptr);
extern int is_struct__23193_allow_double_conversion();
extern int struct__23193_to_double(const void *pValue, double *nValue);
extern int get_struct__23193_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23193(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23193_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23193_Utils;

/****************************************************************
 ** struct__23209 
 ****************************************************************/
extern int struct__23209_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23209_string(const char *str, char **endptr);
extern int string_to_struct__23209(const char *str, void *pValue, char **endptr);
extern int is_struct__23209_allow_double_conversion();
extern int struct__23209_to_double(const void *pValue, double *nValue);
extern int get_struct__23209_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23209(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23209_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23209_Utils;

/****************************************************************
 ** struct__23214 
 ****************************************************************/
extern int struct__23214_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23214_string(const char *str, char **endptr);
extern int string_to_struct__23214(const char *str, void *pValue, char **endptr);
extern int is_struct__23214_allow_double_conversion();
extern int struct__23214_to_double(const void *pValue, double *nValue);
extern int get_struct__23214_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23214(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23214_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23214_Utils;

/****************************************************************
 ** struct__23219 
 ****************************************************************/
extern int struct__23219_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23219_string(const char *str, char **endptr);
extern int string_to_struct__23219(const char *str, void *pValue, char **endptr);
extern int is_struct__23219_allow_double_conversion();
extern int struct__23219_to_double(const void *pValue, double *nValue);
extern int get_struct__23219_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23219(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23219_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23219_Utils;

/****************************************************************
 ** array_int_15 
 ****************************************************************/
extern int array_int_15_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_15_string(const char *str, char **endptr);
extern int string_to_array_int_15(const char *str, void *pValue, char **endptr);
extern int is_array_int_15_allow_double_conversion();
extern int array_int_15_to_double(const void *pValue, double *nValue);
extern int get_array_int_15_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_15(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_15_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_15_Utils;

/****************************************************************
 ** struct__23227 
 ****************************************************************/
extern int struct__23227_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23227_string(const char *str, char **endptr);
extern int string_to_struct__23227(const char *str, void *pValue, char **endptr);
extern int is_struct__23227_allow_double_conversion();
extern int struct__23227_to_double(const void *pValue, double *nValue);
extern int get_struct__23227_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23227(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23227_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23227_Utils;

/****************************************************************
 ** array__23232 
 ****************************************************************/
extern int array__23232_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23232_string(const char *str, char **endptr);
extern int string_to_array__23232(const char *str, void *pValue, char **endptr);
extern int is_array__23232_allow_double_conversion();
extern int array__23232_to_double(const void *pValue, double *nValue);
extern int get_array__23232_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23232(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23232_default_value(void *pValue);
extern SimTypeUtils _Type_array__23232_Utils;

/****************************************************************
 ** struct__23235 
 ****************************************************************/
extern int struct__23235_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23235_string(const char *str, char **endptr);
extern int string_to_struct__23235(const char *str, void *pValue, char **endptr);
extern int is_struct__23235_allow_double_conversion();
extern int struct__23235_to_double(const void *pValue, double *nValue);
extern int get_struct__23235_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23235(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23235_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23235_Utils;

/****************************************************************
 ** struct__23241 
 ****************************************************************/
extern int struct__23241_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23241_string(const char *str, char **endptr);
extern int string_to_struct__23241(const char *str, void *pValue, char **endptr);
extern int is_struct__23241_allow_double_conversion();
extern int struct__23241_to_double(const void *pValue, double *nValue);
extern int get_struct__23241_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23241(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23241_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23241_Utils;

/****************************************************************
 ** struct__23251 
 ****************************************************************/
extern int struct__23251_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23251_string(const char *str, char **endptr);
extern int string_to_struct__23251(const char *str, void *pValue, char **endptr);
extern int is_struct__23251_allow_double_conversion();
extern int struct__23251_to_double(const void *pValue, double *nValue);
extern int get_struct__23251_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23251(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23251_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23251_Utils;

/****************************************************************
 ** struct__23257 
 ****************************************************************/
extern int struct__23257_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23257_string(const char *str, char **endptr);
extern int string_to_struct__23257(const char *str, void *pValue, char **endptr);
extern int is_struct__23257_allow_double_conversion();
extern int struct__23257_to_double(const void *pValue, double *nValue);
extern int get_struct__23257_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23257(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23257_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23257_Utils;

/****************************************************************
 ** struct__23264 
 ****************************************************************/
extern int struct__23264_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23264_string(const char *str, char **endptr);
extern int string_to_struct__23264(const char *str, void *pValue, char **endptr);
extern int is_struct__23264_allow_double_conversion();
extern int struct__23264_to_double(const void *pValue, double *nValue);
extern int get_struct__23264_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23264(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23264_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23264_Utils;

/****************************************************************
 ** struct__23276 
 ****************************************************************/
extern int struct__23276_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23276_string(const char *str, char **endptr);
extern int string_to_struct__23276(const char *str, void *pValue, char **endptr);
extern int is_struct__23276_allow_double_conversion();
extern int struct__23276_to_double(const void *pValue, double *nValue);
extern int get_struct__23276_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23276(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23276_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23276_Utils;

/****************************************************************
 ** struct__23286 
 ****************************************************************/
extern int struct__23286_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23286_string(const char *str, char **endptr);
extern int string_to_struct__23286(const char *str, void *pValue, char **endptr);
extern int is_struct__23286_allow_double_conversion();
extern int struct__23286_to_double(const void *pValue, double *nValue);
extern int get_struct__23286_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23286(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23286_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23286_Utils;

/****************************************************************
 ** array__23292 
 ****************************************************************/
extern int array__23292_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23292_string(const char *str, char **endptr);
extern int string_to_array__23292(const char *str, void *pValue, char **endptr);
extern int is_array__23292_allow_double_conversion();
extern int array__23292_to_double(const void *pValue, double *nValue);
extern int get_array__23292_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23292(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23292_default_value(void *pValue);
extern SimTypeUtils _Type_array__23292_Utils;

/****************************************************************
 ** struct__23295 
 ****************************************************************/
extern int struct__23295_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23295_string(const char *str, char **endptr);
extern int string_to_struct__23295(const char *str, void *pValue, char **endptr);
extern int is_struct__23295_allow_double_conversion();
extern int struct__23295_to_double(const void *pValue, double *nValue);
extern int get_struct__23295_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23295(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23295_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23295_Utils;

/****************************************************************
 ** array__23302 
 ****************************************************************/
extern int array__23302_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23302_string(const char *str, char **endptr);
extern int string_to_array__23302(const char *str, void *pValue, char **endptr);
extern int is_array__23302_allow_double_conversion();
extern int array__23302_to_double(const void *pValue, double *nValue);
extern int get_array__23302_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23302(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23302_default_value(void *pValue);
extern SimTypeUtils _Type_array__23302_Utils;

/****************************************************************
 ** struct__23305 
 ****************************************************************/
extern int struct__23305_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23305_string(const char *str, char **endptr);
extern int string_to_struct__23305(const char *str, void *pValue, char **endptr);
extern int is_struct__23305_allow_double_conversion();
extern int struct__23305_to_double(const void *pValue, double *nValue);
extern int get_struct__23305_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23305(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23305_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23305_Utils;

/****************************************************************
 ** array__23317 
 ****************************************************************/
extern int array__23317_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23317_string(const char *str, char **endptr);
extern int string_to_array__23317(const char *str, void *pValue, char **endptr);
extern int is_array__23317_allow_double_conversion();
extern int array__23317_to_double(const void *pValue, double *nValue);
extern int get_array__23317_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23317(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23317_default_value(void *pValue);
extern SimTypeUtils _Type_array__23317_Utils;

/****************************************************************
 ** struct__23320 
 ****************************************************************/
extern int struct__23320_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23320_string(const char *str, char **endptr);
extern int string_to_struct__23320(const char *str, void *pValue, char **endptr);
extern int is_struct__23320_allow_double_conversion();
extern int struct__23320_to_double(const void *pValue, double *nValue);
extern int get_struct__23320_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23320(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23320_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23320_Utils;

/****************************************************************
 ** array__23327 
 ****************************************************************/
extern int array__23327_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23327_string(const char *str, char **endptr);
extern int string_to_array__23327(const char *str, void *pValue, char **endptr);
extern int is_array__23327_allow_double_conversion();
extern int array__23327_to_double(const void *pValue, double *nValue);
extern int get_array__23327_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23327(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23327_default_value(void *pValue);
extern SimTypeUtils _Type_array__23327_Utils;

/****************************************************************
 ** struct__23330 
 ****************************************************************/
extern int struct__23330_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23330_string(const char *str, char **endptr);
extern int string_to_struct__23330(const char *str, void *pValue, char **endptr);
extern int is_struct__23330_allow_double_conversion();
extern int struct__23330_to_double(const void *pValue, double *nValue);
extern int get_struct__23330_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23330(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23330_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23330_Utils;

/****************************************************************
 ** struct__23361 
 ****************************************************************/
extern int struct__23361_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23361_string(const char *str, char **endptr);
extern int string_to_struct__23361(const char *str, void *pValue, char **endptr);
extern int is_struct__23361_allow_double_conversion();
extern int struct__23361_to_double(const void *pValue, double *nValue);
extern int get_struct__23361_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23361(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23361_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23361_Utils;

/****************************************************************
 ** struct__23366 
 ****************************************************************/
extern int struct__23366_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23366_string(const char *str, char **endptr);
extern int string_to_struct__23366(const char *str, void *pValue, char **endptr);
extern int is_struct__23366_allow_double_conversion();
extern int struct__23366_to_double(const void *pValue, double *nValue);
extern int get_struct__23366_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23366(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23366_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23366_Utils;

/****************************************************************
 ** struct__23376 
 ****************************************************************/
extern int struct__23376_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23376_string(const char *str, char **endptr);
extern int string_to_struct__23376(const char *str, void *pValue, char **endptr);
extern int is_struct__23376_allow_double_conversion();
extern int struct__23376_to_double(const void *pValue, double *nValue);
extern int get_struct__23376_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23376(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23376_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23376_Utils;

/****************************************************************
 ** array__23388 
 ****************************************************************/
extern int array__23388_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23388_string(const char *str, char **endptr);
extern int string_to_array__23388(const char *str, void *pValue, char **endptr);
extern int is_array__23388_allow_double_conversion();
extern int array__23388_to_double(const void *pValue, double *nValue);
extern int get_array__23388_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23388(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23388_default_value(void *pValue);
extern SimTypeUtils _Type_array__23388_Utils;

/****************************************************************
 ** struct__23391 
 ****************************************************************/
extern int struct__23391_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23391_string(const char *str, char **endptr);
extern int string_to_struct__23391(const char *str, void *pValue, char **endptr);
extern int is_struct__23391_allow_double_conversion();
extern int struct__23391_to_double(const void *pValue, double *nValue);
extern int get_struct__23391_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23391(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23391_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23391_Utils;

/****************************************************************
 ** array__23398 
 ****************************************************************/
extern int array__23398_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23398_string(const char *str, char **endptr);
extern int string_to_array__23398(const char *str, void *pValue, char **endptr);
extern int is_array__23398_allow_double_conversion();
extern int array__23398_to_double(const void *pValue, double *nValue);
extern int get_array__23398_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23398(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23398_default_value(void *pValue);
extern SimTypeUtils _Type_array__23398_Utils;

/****************************************************************
 ** struct__23401 
 ****************************************************************/
extern int struct__23401_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23401_string(const char *str, char **endptr);
extern int string_to_struct__23401(const char *str, void *pValue, char **endptr);
extern int is_struct__23401_allow_double_conversion();
extern int struct__23401_to_double(const void *pValue, double *nValue);
extern int get_struct__23401_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23401(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23401_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23401_Utils;

/****************************************************************
 ** array__23411 
 ****************************************************************/
extern int array__23411_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23411_string(const char *str, char **endptr);
extern int string_to_array__23411(const char *str, void *pValue, char **endptr);
extern int is_array__23411_allow_double_conversion();
extern int array__23411_to_double(const void *pValue, double *nValue);
extern int get_array__23411_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23411(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23411_default_value(void *pValue);
extern SimTypeUtils _Type_array__23411_Utils;

/****************************************************************
 ** struct__23414 
 ****************************************************************/
extern int struct__23414_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23414_string(const char *str, char **endptr);
extern int string_to_struct__23414(const char *str, void *pValue, char **endptr);
extern int is_struct__23414_allow_double_conversion();
extern int struct__23414_to_double(const void *pValue, double *nValue);
extern int get_struct__23414_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23414(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23414_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23414_Utils;

/****************************************************************
 ** array__23422 
 ****************************************************************/
extern int array__23422_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23422_string(const char *str, char **endptr);
extern int string_to_array__23422(const char *str, void *pValue, char **endptr);
extern int is_array__23422_allow_double_conversion();
extern int array__23422_to_double(const void *pValue, double *nValue);
extern int get_array__23422_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23422(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23422_default_value(void *pValue);
extern SimTypeUtils _Type_array__23422_Utils;

/****************************************************************
 ** struct__23425 
 ****************************************************************/
extern int struct__23425_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23425_string(const char *str, char **endptr);
extern int string_to_struct__23425(const char *str, void *pValue, char **endptr);
extern int is_struct__23425_allow_double_conversion();
extern int struct__23425_to_double(const void *pValue, double *nValue);
extern int get_struct__23425_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23425(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23425_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23425_Utils;

/****************************************************************
 ** array__23433 
 ****************************************************************/
extern int array__23433_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23433_string(const char *str, char **endptr);
extern int string_to_array__23433(const char *str, void *pValue, char **endptr);
extern int is_array__23433_allow_double_conversion();
extern int array__23433_to_double(const void *pValue, double *nValue);
extern int get_array__23433_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23433(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23433_default_value(void *pValue);
extern SimTypeUtils _Type_array__23433_Utils;

/****************************************************************
 ** struct__23436 
 ****************************************************************/
extern int struct__23436_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23436_string(const char *str, char **endptr);
extern int string_to_struct__23436(const char *str, void *pValue, char **endptr);
extern int is_struct__23436_allow_double_conversion();
extern int struct__23436_to_double(const void *pValue, double *nValue);
extern int get_struct__23436_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23436(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23436_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23436_Utils;

/****************************************************************
 ** struct__23447 
 ****************************************************************/
extern int struct__23447_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23447_string(const char *str, char **endptr);
extern int string_to_struct__23447(const char *str, void *pValue, char **endptr);
extern int is_struct__23447_allow_double_conversion();
extern int struct__23447_to_double(const void *pValue, double *nValue);
extern int get_struct__23447_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23447(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23447_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23447_Utils;

/****************************************************************
 ** array__23456 
 ****************************************************************/
extern int array__23456_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23456_string(const char *str, char **endptr);
extern int string_to_array__23456(const char *str, void *pValue, char **endptr);
extern int is_array__23456_allow_double_conversion();
extern int array__23456_to_double(const void *pValue, double *nValue);
extern int get_array__23456_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23456(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23456_default_value(void *pValue);
extern SimTypeUtils _Type_array__23456_Utils;

/****************************************************************
 ** struct__23459 
 ****************************************************************/
extern int struct__23459_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23459_string(const char *str, char **endptr);
extern int string_to_struct__23459(const char *str, void *pValue, char **endptr);
extern int is_struct__23459_allow_double_conversion();
extern int struct__23459_to_double(const void *pValue, double *nValue);
extern int get_struct__23459_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23459(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23459_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23459_Utils;

/****************************************************************
 ** array__23486 
 ****************************************************************/
extern int array__23486_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23486_string(const char *str, char **endptr);
extern int string_to_array__23486(const char *str, void *pValue, char **endptr);
extern int is_array__23486_allow_double_conversion();
extern int array__23486_to_double(const void *pValue, double *nValue);
extern int get_array__23486_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23486(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23486_default_value(void *pValue);
extern SimTypeUtils _Type_array__23486_Utils;

/****************************************************************
 ** struct__23489 
 ****************************************************************/
extern int struct__23489_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23489_string(const char *str, char **endptr);
extern int string_to_struct__23489(const char *str, void *pValue, char **endptr);
extern int is_struct__23489_allow_double_conversion();
extern int struct__23489_to_double(const void *pValue, double *nValue);
extern int get_struct__23489_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23489(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23489_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23489_Utils;

/****************************************************************
 ** struct__23497 
 ****************************************************************/
extern int struct__23497_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23497_string(const char *str, char **endptr);
extern int string_to_struct__23497(const char *str, void *pValue, char **endptr);
extern int is_struct__23497_allow_double_conversion();
extern int struct__23497_to_double(const void *pValue, double *nValue);
extern int get_struct__23497_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23497(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23497_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23497_Utils;

/****************************************************************
 ** struct__23505 
 ****************************************************************/
extern int struct__23505_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23505_string(const char *str, char **endptr);
extern int string_to_struct__23505(const char *str, void *pValue, char **endptr);
extern int is_struct__23505_allow_double_conversion();
extern int struct__23505_to_double(const void *pValue, double *nValue);
extern int get_struct__23505_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23505(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23505_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23505_Utils;

/****************************************************************
 ** struct__23511 
 ****************************************************************/
extern int struct__23511_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23511_string(const char *str, char **endptr);
extern int string_to_struct__23511(const char *str, void *pValue, char **endptr);
extern int is_struct__23511_allow_double_conversion();
extern int struct__23511_to_double(const void *pValue, double *nValue);
extern int get_struct__23511_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23511(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23511_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23511_Utils;

/****************************************************************
 ** struct__23526 
 ****************************************************************/
extern int struct__23526_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23526_string(const char *str, char **endptr);
extern int string_to_struct__23526(const char *str, void *pValue, char **endptr);
extern int is_struct__23526_allow_double_conversion();
extern int struct__23526_to_double(const void *pValue, double *nValue);
extern int get_struct__23526_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23526(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23526_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23526_Utils;

/****************************************************************
 ** struct__23535 
 ****************************************************************/
extern int struct__23535_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23535_string(const char *str, char **endptr);
extern int string_to_struct__23535(const char *str, void *pValue, char **endptr);
extern int is_struct__23535_allow_double_conversion();
extern int struct__23535_to_double(const void *pValue, double *nValue);
extern int get_struct__23535_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23535(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23535_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23535_Utils;

/****************************************************************
 ** array__23542 
 ****************************************************************/
extern int array__23542_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23542_string(const char *str, char **endptr);
extern int string_to_array__23542(const char *str, void *pValue, char **endptr);
extern int is_array__23542_allow_double_conversion();
extern int array__23542_to_double(const void *pValue, double *nValue);
extern int get_array__23542_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23542(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23542_default_value(void *pValue);
extern SimTypeUtils _Type_array__23542_Utils;

/****************************************************************
 ** struct__23545 
 ****************************************************************/
extern int struct__23545_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23545_string(const char *str, char **endptr);
extern int string_to_struct__23545(const char *str, void *pValue, char **endptr);
extern int is_struct__23545_allow_double_conversion();
extern int struct__23545_to_double(const void *pValue, double *nValue);
extern int get_struct__23545_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23545(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23545_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23545_Utils;

/****************************************************************
 ** array__23552 
 ****************************************************************/
extern int array__23552_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23552_string(const char *str, char **endptr);
extern int string_to_array__23552(const char *str, void *pValue, char **endptr);
extern int is_array__23552_allow_double_conversion();
extern int array__23552_to_double(const void *pValue, double *nValue);
extern int get_array__23552_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23552(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23552_default_value(void *pValue);
extern SimTypeUtils _Type_array__23552_Utils;

/****************************************************************
 ** struct__23555 
 ****************************************************************/
extern int struct__23555_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23555_string(const char *str, char **endptr);
extern int string_to_struct__23555(const char *str, void *pValue, char **endptr);
extern int is_struct__23555_allow_double_conversion();
extern int struct__23555_to_double(const void *pValue, double *nValue);
extern int get_struct__23555_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23555(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23555_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23555_Utils;

/****************************************************************
 ** struct__23562 
 ****************************************************************/
extern int struct__23562_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23562_string(const char *str, char **endptr);
extern int string_to_struct__23562(const char *str, void *pValue, char **endptr);
extern int is_struct__23562_allow_double_conversion();
extern int struct__23562_to_double(const void *pValue, double *nValue);
extern int get_struct__23562_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23562(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23562_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23562_Utils;

/****************************************************************
 ** array__23570 
 ****************************************************************/
extern int array__23570_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23570_string(const char *str, char **endptr);
extern int string_to_array__23570(const char *str, void *pValue, char **endptr);
extern int is_array__23570_allow_double_conversion();
extern int array__23570_to_double(const void *pValue, double *nValue);
extern int get_array__23570_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23570(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23570_default_value(void *pValue);
extern SimTypeUtils _Type_array__23570_Utils;

/****************************************************************
 ** struct__23573 
 ****************************************************************/
extern int struct__23573_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23573_string(const char *str, char **endptr);
extern int string_to_struct__23573(const char *str, void *pValue, char **endptr);
extern int is_struct__23573_allow_double_conversion();
extern int struct__23573_to_double(const void *pValue, double *nValue);
extern int get_struct__23573_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23573(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23573_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23573_Utils;

/****************************************************************
 ** struct__23578 
 ****************************************************************/
extern int struct__23578_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23578_string(const char *str, char **endptr);
extern int string_to_struct__23578(const char *str, void *pValue, char **endptr);
extern int is_struct__23578_allow_double_conversion();
extern int struct__23578_to_double(const void *pValue, double *nValue);
extern int get_struct__23578_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23578(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23578_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23578_Utils;

/****************************************************************
 ** struct__23584 
 ****************************************************************/
extern int struct__23584_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23584_string(const char *str, char **endptr);
extern int string_to_struct__23584(const char *str, void *pValue, char **endptr);
extern int is_struct__23584_allow_double_conversion();
extern int struct__23584_to_double(const void *pValue, double *nValue);
extern int get_struct__23584_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23584(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23584_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23584_Utils;

/****************************************************************
 ** array__23593 
 ****************************************************************/
extern int array__23593_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23593_string(const char *str, char **endptr);
extern int string_to_array__23593(const char *str, void *pValue, char **endptr);
extern int is_array__23593_allow_double_conversion();
extern int array__23593_to_double(const void *pValue, double *nValue);
extern int get_array__23593_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23593(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23593_default_value(void *pValue);
extern SimTypeUtils _Type_array__23593_Utils;

/****************************************************************
 ** struct__23596 
 ****************************************************************/
extern int struct__23596_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23596_string(const char *str, char **endptr);
extern int string_to_struct__23596(const char *str, void *pValue, char **endptr);
extern int is_struct__23596_allow_double_conversion();
extern int struct__23596_to_double(const void *pValue, double *nValue);
extern int get_struct__23596_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23596(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23596_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23596_Utils;

/****************************************************************
 ** struct__23614 
 ****************************************************************/
extern int struct__23614_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23614_string(const char *str, char **endptr);
extern int string_to_struct__23614(const char *str, void *pValue, char **endptr);
extern int is_struct__23614_allow_double_conversion();
extern int struct__23614_to_double(const void *pValue, double *nValue);
extern int get_struct__23614_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23614(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23614_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23614_Utils;

/****************************************************************
 ** struct__23623 
 ****************************************************************/
extern int struct__23623_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23623_string(const char *str, char **endptr);
extern int string_to_struct__23623(const char *str, void *pValue, char **endptr);
extern int is_struct__23623_allow_double_conversion();
extern int struct__23623_to_double(const void *pValue, double *nValue);
extern int get_struct__23623_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23623(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23623_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23623_Utils;

/****************************************************************
 ** array__23628 
 ****************************************************************/
extern int array__23628_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23628_string(const char *str, char **endptr);
extern int string_to_array__23628(const char *str, void *pValue, char **endptr);
extern int is_array__23628_allow_double_conversion();
extern int array__23628_to_double(const void *pValue, double *nValue);
extern int get_array__23628_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23628(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23628_default_value(void *pValue);
extern SimTypeUtils _Type_array__23628_Utils;

/****************************************************************
 ** struct__23631 
 ****************************************************************/
extern int struct__23631_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23631_string(const char *str, char **endptr);
extern int string_to_struct__23631(const char *str, void *pValue, char **endptr);
extern int is_struct__23631_allow_double_conversion();
extern int struct__23631_to_double(const void *pValue, double *nValue);
extern int get_struct__23631_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23631(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23631_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23631_Utils;

/****************************************************************
 ** struct__23686 
 ****************************************************************/
extern int struct__23686_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23686_string(const char *str, char **endptr);
extern int string_to_struct__23686(const char *str, void *pValue, char **endptr);
extern int is_struct__23686_allow_double_conversion();
extern int struct__23686_to_double(const void *pValue, double *nValue);
extern int get_struct__23686_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23686(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23686_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23686_Utils;

/****************************************************************
 ** array__23693 
 ****************************************************************/
extern int array__23693_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23693_string(const char *str, char **endptr);
extern int string_to_array__23693(const char *str, void *pValue, char **endptr);
extern int is_array__23693_allow_double_conversion();
extern int array__23693_to_double(const void *pValue, double *nValue);
extern int get_array__23693_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23693(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23693_default_value(void *pValue);
extern SimTypeUtils _Type_array__23693_Utils;

/****************************************************************
 ** struct__23696 
 ****************************************************************/
extern int struct__23696_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23696_string(const char *str, char **endptr);
extern int string_to_struct__23696(const char *str, void *pValue, char **endptr);
extern int is_struct__23696_allow_double_conversion();
extern int struct__23696_to_double(const void *pValue, double *nValue);
extern int get_struct__23696_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23696(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23696_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23696_Utils;

/****************************************************************
 ** array_int_5 
 ****************************************************************/
extern int array_int_5_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_5_string(const char *str, char **endptr);
extern int string_to_array_int_5(const char *str, void *pValue, char **endptr);
extern int is_array_int_5_allow_double_conversion();
extern int array_int_5_to_double(const void *pValue, double *nValue);
extern int get_array_int_5_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_5(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_5_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_5_Utils;

/****************************************************************
 ** struct__23707 
 ****************************************************************/
extern int struct__23707_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23707_string(const char *str, char **endptr);
extern int string_to_struct__23707(const char *str, void *pValue, char **endptr);
extern int is_struct__23707_allow_double_conversion();
extern int struct__23707_to_double(const void *pValue, double *nValue);
extern int get_struct__23707_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23707(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23707_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23707_Utils;

/****************************************************************
 ** struct__23713 
 ****************************************************************/
extern int struct__23713_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23713_string(const char *str, char **endptr);
extern int string_to_struct__23713(const char *str, void *pValue, char **endptr);
extern int is_struct__23713_allow_double_conversion();
extern int struct__23713_to_double(const void *pValue, double *nValue);
extern int get_struct__23713_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23713(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23713_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23713_Utils;

/****************************************************************
 ** array__23718 
 ****************************************************************/
extern int array__23718_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23718_string(const char *str, char **endptr);
extern int string_to_array__23718(const char *str, void *pValue, char **endptr);
extern int is_array__23718_allow_double_conversion();
extern int array__23718_to_double(const void *pValue, double *nValue);
extern int get_array__23718_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23718(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23718_default_value(void *pValue);
extern SimTypeUtils _Type_array__23718_Utils;

/****************************************************************
 ** struct__23721 
 ****************************************************************/
extern int struct__23721_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23721_string(const char *str, char **endptr);
extern int string_to_struct__23721(const char *str, void *pValue, char **endptr);
extern int is_struct__23721_allow_double_conversion();
extern int struct__23721_to_double(const void *pValue, double *nValue);
extern int get_struct__23721_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23721(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23721_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23721_Utils;

/****************************************************************
 ** struct__23726 
 ****************************************************************/
extern int struct__23726_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23726_string(const char *str, char **endptr);
extern int string_to_struct__23726(const char *str, void *pValue, char **endptr);
extern int is_struct__23726_allow_double_conversion();
extern int struct__23726_to_double(const void *pValue, double *nValue);
extern int get_struct__23726_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23726(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23726_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23726_Utils;

/****************************************************************
 ** array_int_6 
 ****************************************************************/
extern int array_int_6_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_6_string(const char *str, char **endptr);
extern int string_to_array_int_6(const char *str, void *pValue, char **endptr);
extern int is_array_int_6_allow_double_conversion();
extern int array_int_6_to_double(const void *pValue, double *nValue);
extern int get_array_int_6_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_6(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_6_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_6_Utils;

/****************************************************************
 ** struct__23737 
 ****************************************************************/
extern int struct__23737_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23737_string(const char *str, char **endptr);
extern int string_to_struct__23737(const char *str, void *pValue, char **endptr);
extern int is_struct__23737_allow_double_conversion();
extern int struct__23737_to_double(const void *pValue, double *nValue);
extern int get_struct__23737_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23737(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23737_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23737_Utils;

/****************************************************************
 ** array__23745 
 ****************************************************************/
extern int array__23745_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23745_string(const char *str, char **endptr);
extern int string_to_array__23745(const char *str, void *pValue, char **endptr);
extern int is_array__23745_allow_double_conversion();
extern int array__23745_to_double(const void *pValue, double *nValue);
extern int get_array__23745_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23745(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23745_default_value(void *pValue);
extern SimTypeUtils _Type_array__23745_Utils;

/****************************************************************
 ** struct__23748 
 ****************************************************************/
extern int struct__23748_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23748_string(const char *str, char **endptr);
extern int string_to_struct__23748(const char *str, void *pValue, char **endptr);
extern int is_struct__23748_allow_double_conversion();
extern int struct__23748_to_double(const void *pValue, double *nValue);
extern int get_struct__23748_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23748(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23748_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23748_Utils;

/****************************************************************
 ** struct__23773 
 ****************************************************************/
extern int struct__23773_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23773_string(const char *str, char **endptr);
extern int string_to_struct__23773(const char *str, void *pValue, char **endptr);
extern int is_struct__23773_allow_double_conversion();
extern int struct__23773_to_double(const void *pValue, double *nValue);
extern int get_struct__23773_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23773(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23773_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23773_Utils;

/****************************************************************
 ** array__23781 
 ****************************************************************/
extern int array__23781_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23781_string(const char *str, char **endptr);
extern int string_to_array__23781(const char *str, void *pValue, char **endptr);
extern int is_array__23781_allow_double_conversion();
extern int array__23781_to_double(const void *pValue, double *nValue);
extern int get_array__23781_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23781(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23781_default_value(void *pValue);
extern SimTypeUtils _Type_array__23781_Utils;

/****************************************************************
 ** struct__23784 
 ****************************************************************/
extern int struct__23784_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23784_string(const char *str, char **endptr);
extern int string_to_struct__23784(const char *str, void *pValue, char **endptr);
extern int is_struct__23784_allow_double_conversion();
extern int struct__23784_to_double(const void *pValue, double *nValue);
extern int get_struct__23784_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23784(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23784_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23784_Utils;

/****************************************************************
 ** array__23790 
 ****************************************************************/
extern int array__23790_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23790_string(const char *str, char **endptr);
extern int string_to_array__23790(const char *str, void *pValue, char **endptr);
extern int is_array__23790_allow_double_conversion();
extern int array__23790_to_double(const void *pValue, double *nValue);
extern int get_array__23790_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23790(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23790_default_value(void *pValue);
extern SimTypeUtils _Type_array__23790_Utils;

/****************************************************************
 ** struct__23793 
 ****************************************************************/
extern int struct__23793_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23793_string(const char *str, char **endptr);
extern int string_to_struct__23793(const char *str, void *pValue, char **endptr);
extern int is_struct__23793_allow_double_conversion();
extern int struct__23793_to_double(const void *pValue, double *nValue);
extern int get_struct__23793_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23793(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23793_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23793_Utils;

/****************************************************************
 ** array_int_66 
 ****************************************************************/
extern int array_int_66_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_66_string(const char *str, char **endptr);
extern int string_to_array_int_66(const char *str, void *pValue, char **endptr);
extern int is_array_int_66_allow_double_conversion();
extern int array_int_66_to_double(const void *pValue, double *nValue);
extern int get_array_int_66_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_66(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_66_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_66_Utils;

/****************************************************************
 ** struct__23803 
 ****************************************************************/
extern int struct__23803_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23803_string(const char *str, char **endptr);
extern int string_to_struct__23803(const char *str, void *pValue, char **endptr);
extern int is_struct__23803_allow_double_conversion();
extern int struct__23803_to_double(const void *pValue, double *nValue);
extern int get_struct__23803_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23803(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23803_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23803_Utils;

/****************************************************************
 ** array__23810 
 ****************************************************************/
extern int array__23810_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23810_string(const char *str, char **endptr);
extern int string_to_array__23810(const char *str, void *pValue, char **endptr);
extern int is_array__23810_allow_double_conversion();
extern int array__23810_to_double(const void *pValue, double *nValue);
extern int get_array__23810_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23810(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23810_default_value(void *pValue);
extern SimTypeUtils _Type_array__23810_Utils;

/****************************************************************
 ** struct__23813 
 ****************************************************************/
extern int struct__23813_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23813_string(const char *str, char **endptr);
extern int string_to_struct__23813(const char *str, void *pValue, char **endptr);
extern int is_struct__23813_allow_double_conversion();
extern int struct__23813_to_double(const void *pValue, double *nValue);
extern int get_struct__23813_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23813(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23813_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23813_Utils;

/****************************************************************
 ** struct__23822 
 ****************************************************************/
extern int struct__23822_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23822_string(const char *str, char **endptr);
extern int string_to_struct__23822(const char *str, void *pValue, char **endptr);
extern int is_struct__23822_allow_double_conversion();
extern int struct__23822_to_double(const void *pValue, double *nValue);
extern int get_struct__23822_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23822(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23822_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23822_Utils;

/****************************************************************
 ** array__23828 
 ****************************************************************/
extern int array__23828_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23828_string(const char *str, char **endptr);
extern int string_to_array__23828(const char *str, void *pValue, char **endptr);
extern int is_array__23828_allow_double_conversion();
extern int array__23828_to_double(const void *pValue, double *nValue);
extern int get_array__23828_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23828(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23828_default_value(void *pValue);
extern SimTypeUtils _Type_array__23828_Utils;

/****************************************************************
 ** struct__23831 
 ****************************************************************/
extern int struct__23831_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23831_string(const char *str, char **endptr);
extern int string_to_struct__23831(const char *str, void *pValue, char **endptr);
extern int is_struct__23831_allow_double_conversion();
extern int struct__23831_to_double(const void *pValue, double *nValue);
extern int get_struct__23831_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23831(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23831_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23831_Utils;

/****************************************************************
 ** array__23840 
 ****************************************************************/
extern int array__23840_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23840_string(const char *str, char **endptr);
extern int string_to_array__23840(const char *str, void *pValue, char **endptr);
extern int is_array__23840_allow_double_conversion();
extern int array__23840_to_double(const void *pValue, double *nValue);
extern int get_array__23840_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23840(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23840_default_value(void *pValue);
extern SimTypeUtils _Type_array__23840_Utils;

/****************************************************************
 ** struct__23843 
 ****************************************************************/
extern int struct__23843_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23843_string(const char *str, char **endptr);
extern int string_to_struct__23843(const char *str, void *pValue, char **endptr);
extern int is_struct__23843_allow_double_conversion();
extern int struct__23843_to_double(const void *pValue, double *nValue);
extern int get_struct__23843_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23843(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23843_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23843_Utils;

/****************************************************************
 ** struct__23850 
 ****************************************************************/
extern int struct__23850_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23850_string(const char *str, char **endptr);
extern int string_to_struct__23850(const char *str, void *pValue, char **endptr);
extern int is_struct__23850_allow_double_conversion();
extern int struct__23850_to_double(const void *pValue, double *nValue);
extern int get_struct__23850_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23850(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23850_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23850_Utils;

/****************************************************************
 ** struct__23856 
 ****************************************************************/
extern int struct__23856_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23856_string(const char *str, char **endptr);
extern int string_to_struct__23856(const char *str, void *pValue, char **endptr);
extern int is_struct__23856_allow_double_conversion();
extern int struct__23856_to_double(const void *pValue, double *nValue);
extern int get_struct__23856_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23856(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23856_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23856_Utils;

/****************************************************************
 ** struct__23882 
 ****************************************************************/
extern int struct__23882_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23882_string(const char *str, char **endptr);
extern int string_to_struct__23882(const char *str, void *pValue, char **endptr);
extern int is_struct__23882_allow_double_conversion();
extern int struct__23882_to_double(const void *pValue, double *nValue);
extern int get_struct__23882_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23882(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23882_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23882_Utils;

/****************************************************************
 ** struct__23887 
 ****************************************************************/
extern int struct__23887_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23887_string(const char *str, char **endptr);
extern int string_to_struct__23887(const char *str, void *pValue, char **endptr);
extern int is_struct__23887_allow_double_conversion();
extern int struct__23887_to_double(const void *pValue, double *nValue);
extern int get_struct__23887_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23887(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23887_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23887_Utils;

/****************************************************************
 ** array_int_24 
 ****************************************************************/
extern int array_int_24_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_24_string(const char *str, char **endptr);
extern int string_to_array_int_24(const char *str, void *pValue, char **endptr);
extern int is_array_int_24_allow_double_conversion();
extern int array_int_24_to_double(const void *pValue, double *nValue);
extern int get_array_int_24_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_24(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_24_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_24_Utils;

/****************************************************************
 ** struct__23917 
 ****************************************************************/
extern int struct__23917_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23917_string(const char *str, char **endptr);
extern int string_to_struct__23917(const char *str, void *pValue, char **endptr);
extern int is_struct__23917_allow_double_conversion();
extern int struct__23917_to_double(const void *pValue, double *nValue);
extern int get_struct__23917_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23917(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23917_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23917_Utils;

/****************************************************************
 ** array__23922 
 ****************************************************************/
extern int array__23922_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23922_string(const char *str, char **endptr);
extern int string_to_array__23922(const char *str, void *pValue, char **endptr);
extern int is_array__23922_allow_double_conversion();
extern int array__23922_to_double(const void *pValue, double *nValue);
extern int get_array__23922_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23922(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23922_default_value(void *pValue);
extern SimTypeUtils _Type_array__23922_Utils;

/****************************************************************
 ** array__23925 
 ****************************************************************/
extern int array__23925_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23925_string(const char *str, char **endptr);
extern int string_to_array__23925(const char *str, void *pValue, char **endptr);
extern int is_array__23925_allow_double_conversion();
extern int array__23925_to_double(const void *pValue, double *nValue);
extern int get_array__23925_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23925(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23925_default_value(void *pValue);
extern SimTypeUtils _Type_array__23925_Utils;

/****************************************************************
 ** struct__23928 
 ****************************************************************/
extern int struct__23928_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23928_string(const char *str, char **endptr);
extern int string_to_struct__23928(const char *str, void *pValue, char **endptr);
extern int is_struct__23928_allow_double_conversion();
extern int struct__23928_to_double(const void *pValue, double *nValue);
extern int get_struct__23928_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23928(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23928_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23928_Utils;

/****************************************************************
 ** array__23934 
 ****************************************************************/
extern int array__23934_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23934_string(const char *str, char **endptr);
extern int string_to_array__23934(const char *str, void *pValue, char **endptr);
extern int is_array__23934_allow_double_conversion();
extern int array__23934_to_double(const void *pValue, double *nValue);
extern int get_array__23934_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23934(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23934_default_value(void *pValue);
extern SimTypeUtils _Type_array__23934_Utils;

/****************************************************************
 ** array_int_33 
 ****************************************************************/
extern int array_int_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_33_string(const char *str, char **endptr);
extern int string_to_array_int_33(const char *str, void *pValue, char **endptr);
extern int is_array_int_33_allow_double_conversion();
extern int array_int_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_33_Utils;

/****************************************************************
 ** array_int_33_11 
 ****************************************************************/
extern int array_int_33_11_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_33_11_string(const char *str, char **endptr);
extern int string_to_array_int_33_11(const char *str, void *pValue, char **endptr);
extern int is_array_int_33_11_allow_double_conversion();
extern int array_int_33_11_to_double(const void *pValue, double *nValue);
extern int get_array_int_33_11_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_33_11(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_33_11_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_33_11_Utils;

/****************************************************************
 ** struct__23943 
 ****************************************************************/
extern int struct__23943_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23943_string(const char *str, char **endptr);
extern int string_to_struct__23943(const char *str, void *pValue, char **endptr);
extern int is_struct__23943_allow_double_conversion();
extern int struct__23943_to_double(const void *pValue, double *nValue);
extern int get_struct__23943_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23943(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23943_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23943_Utils;

/****************************************************************
 ** struct__23948 
 ****************************************************************/
extern int struct__23948_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23948_string(const char *str, char **endptr);
extern int string_to_struct__23948(const char *str, void *pValue, char **endptr);
extern int is_struct__23948_allow_double_conversion();
extern int struct__23948_to_double(const void *pValue, double *nValue);
extern int get_struct__23948_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23948(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23948_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23948_Utils;

/****************************************************************
 ** struct__23954 
 ****************************************************************/
extern int struct__23954_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23954_string(const char *str, char **endptr);
extern int string_to_struct__23954(const char *str, void *pValue, char **endptr);
extern int is_struct__23954_allow_double_conversion();
extern int struct__23954_to_double(const void *pValue, double *nValue);
extern int get_struct__23954_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23954(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23954_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23954_Utils;

/****************************************************************
 ** struct__23959 
 ****************************************************************/
extern int struct__23959_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23959_string(const char *str, char **endptr);
extern int string_to_struct__23959(const char *str, void *pValue, char **endptr);
extern int is_struct__23959_allow_double_conversion();
extern int struct__23959_to_double(const void *pValue, double *nValue);
extern int get_struct__23959_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23959(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23959_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23959_Utils;

/****************************************************************
 ** array__23964 
 ****************************************************************/
extern int array__23964_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23964_string(const char *str, char **endptr);
extern int string_to_array__23964(const char *str, void *pValue, char **endptr);
extern int is_array__23964_allow_double_conversion();
extern int array__23964_to_double(const void *pValue, double *nValue);
extern int get_array__23964_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23964(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23964_default_value(void *pValue);
extern SimTypeUtils _Type_array__23964_Utils;

/****************************************************************
 ** array_int_30 
 ****************************************************************/
extern int array_int_30_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_30_string(const char *str, char **endptr);
extern int string_to_array_int_30(const char *str, void *pValue, char **endptr);
extern int is_array_int_30_allow_double_conversion();
extern int array_int_30_to_double(const void *pValue, double *nValue);
extern int get_array_int_30_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_30(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_30_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_30_Utils;

/****************************************************************
 ** array_bool_30 
 ****************************************************************/
extern int array_bool_30_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_bool_30_string(const char *str, char **endptr);
extern int string_to_array_bool_30(const char *str, void *pValue, char **endptr);
extern int is_array_bool_30_allow_double_conversion();
extern int array_bool_30_to_double(const void *pValue, double *nValue);
extern int get_array_bool_30_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_bool_30(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_bool_30_default_value(void *pValue);
extern SimTypeUtils _Type_array_bool_30_Utils;

/****************************************************************
 ** array_int_500_500 
 ****************************************************************/
extern int array_int_500_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_500_500_string(const char *str, char **endptr);
extern int string_to_array_int_500_500(const char *str, void *pValue, char **endptr);
extern int is_array_int_500_500_allow_double_conversion();
extern int array_int_500_500_to_double(const void *pValue, double *nValue);
extern int get_array_int_500_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_500_500(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_500_500_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_500_500_Utils;

/****************************************************************
 ** array_int_128_32 
 ****************************************************************/
extern int array_int_128_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_128_32_string(const char *str, char **endptr);
extern int string_to_array_int_128_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_128_32_allow_double_conversion();
extern int array_int_128_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_128_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_128_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_128_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_128_32_Utils;

/****************************************************************
 ** array__23979 
 ****************************************************************/
extern int array__23979_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23979_string(const char *str, char **endptr);
extern int string_to_array__23979(const char *str, void *pValue, char **endptr);
extern int is_array__23979_allow_double_conversion();
extern int array__23979_to_double(const void *pValue, double *nValue);
extern int get_array__23979_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23979(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23979_default_value(void *pValue);
extern SimTypeUtils _Type_array__23979_Utils;

/****************************************************************
 ** array__23982 
 ****************************************************************/
extern int array__23982_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23982_string(const char *str, char **endptr);
extern int string_to_array__23982(const char *str, void *pValue, char **endptr);
extern int is_array__23982_allow_double_conversion();
extern int array__23982_to_double(const void *pValue, double *nValue);
extern int get_array__23982_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23982(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23982_default_value(void *pValue);
extern SimTypeUtils _Type_array__23982_Utils;

/****************************************************************
 ** array_int_11 
 ****************************************************************/
extern int array_int_11_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_11_string(const char *str, char **endptr);
extern int string_to_array_int_11(const char *str, void *pValue, char **endptr);
extern int is_array_int_11_allow_double_conversion();
extern int array_int_11_to_double(const void *pValue, double *nValue);
extern int get_array_int_11_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_11(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_11_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_11_Utils;

/****************************************************************
 ** array__23988 
 ****************************************************************/
extern int array__23988_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23988_string(const char *str, char **endptr);
extern int string_to_array__23988(const char *str, void *pValue, char **endptr);
extern int is_array__23988_allow_double_conversion();
extern int array__23988_to_double(const void *pValue, double *nValue);
extern int get_array__23988_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23988(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23988_default_value(void *pValue);
extern SimTypeUtils _Type_array__23988_Utils;

/****************************************************************
 ** array__23991 
 ****************************************************************/
extern int array__23991_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23991_string(const char *str, char **endptr);
extern int string_to_array__23991(const char *str, void *pValue, char **endptr);
extern int is_array__23991_allow_double_conversion();
extern int array__23991_to_double(const void *pValue, double *nValue);
extern int get_array__23991_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23991(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23991_default_value(void *pValue);
extern SimTypeUtils _Type_array__23991_Utils;

/****************************************************************
 ** array_int_200 
 ****************************************************************/
extern int array_int_200_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_200_string(const char *str, char **endptr);
extern int string_to_array_int_200(const char *str, void *pValue, char **endptr);
extern int is_array_int_200_allow_double_conversion();
extern int array_int_200_to_double(const void *pValue, double *nValue);
extern int get_array_int_200_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_200(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_200_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_200_Utils;

/****************************************************************
 ** array_int_64_32 
 ****************************************************************/
extern int array_int_64_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_64_32_string(const char *str, char **endptr);
extern int string_to_array_int_64_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_64_32_allow_double_conversion();
extern int array_int_64_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_64_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_64_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_64_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_64_32_Utils;

/****************************************************************
 ** array__24000 
 ****************************************************************/
extern int array__24000_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24000_string(const char *str, char **endptr);
extern int string_to_array__24000(const char *str, void *pValue, char **endptr);
extern int is_array__24000_allow_double_conversion();
extern int array__24000_to_double(const void *pValue, double *nValue);
extern int get_array__24000_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24000(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24000_default_value(void *pValue);
extern SimTypeUtils _Type_array__24000_Utils;

/****************************************************************
 ** array_bool_50 
 ****************************************************************/
extern int array_bool_50_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_bool_50_string(const char *str, char **endptr);
extern int string_to_array_bool_50(const char *str, void *pValue, char **endptr);
extern int is_array_bool_50_allow_double_conversion();
extern int array_bool_50_to_double(const void *pValue, double *nValue);
extern int get_array_bool_50_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_bool_50(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_bool_50_default_value(void *pValue);
extern SimTypeUtils _Type_array_bool_50_Utils;

/****************************************************************
 ** array_int_50 
 ****************************************************************/
extern int array_int_50_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_50_string(const char *str, char **endptr);
extern int string_to_array_int_50(const char *str, void *pValue, char **endptr);
extern int is_array_int_50_allow_double_conversion();
extern int array_int_50_to_double(const void *pValue, double *nValue);
extern int get_array_int_50_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_50(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_50_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_50_Utils;

/****************************************************************
 ** array__24009 
 ****************************************************************/
extern int array__24009_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24009_string(const char *str, char **endptr);
extern int string_to_array__24009(const char *str, void *pValue, char **endptr);
extern int is_array__24009_allow_double_conversion();
extern int array__24009_to_double(const void *pValue, double *nValue);
extern int get_array__24009_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24009(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24009_default_value(void *pValue);
extern SimTypeUtils _Type_array__24009_Utils;

/****************************************************************
 ** array__24012 
 ****************************************************************/
extern int array__24012_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24012_string(const char *str, char **endptr);
extern int string_to_array__24012(const char *str, void *pValue, char **endptr);
extern int is_array__24012_allow_double_conversion();
extern int array__24012_to_double(const void *pValue, double *nValue);
extern int get_array__24012_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24012(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24012_default_value(void *pValue);
extern SimTypeUtils _Type_array__24012_Utils;

/****************************************************************
 ** array__24015 
 ****************************************************************/
extern int array__24015_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24015_string(const char *str, char **endptr);
extern int string_to_array__24015(const char *str, void *pValue, char **endptr);
extern int is_array__24015_allow_double_conversion();
extern int array__24015_to_double(const void *pValue, double *nValue);
extern int get_array__24015_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24015(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24015_default_value(void *pValue);
extern SimTypeUtils _Type_array__24015_Utils;

/****************************************************************
 ** array_int_32_32 
 ****************************************************************/
extern int array_int_32_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_32_32_string(const char *str, char **endptr);
extern int string_to_array_int_32_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_32_32_allow_double_conversion();
extern int array_int_32_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_32_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_32_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_32_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_32_32_Utils;

/****************************************************************
 ** array__24021 
 ****************************************************************/
extern int array__24021_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24021_string(const char *str, char **endptr);
extern int string_to_array__24021(const char *str, void *pValue, char **endptr);
extern int is_array__24021_allow_double_conversion();
extern int array__24021_to_double(const void *pValue, double *nValue);
extern int get_array__24021_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24021(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24021_default_value(void *pValue);
extern SimTypeUtils _Type_array__24021_Utils;

/****************************************************************
 ** array__24024 
 ****************************************************************/
extern int array__24024_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24024_string(const char *str, char **endptr);
extern int string_to_array__24024(const char *str, void *pValue, char **endptr);
extern int is_array__24024_allow_double_conversion();
extern int array__24024_to_double(const void *pValue, double *nValue);
extern int get_array__24024_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24024(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24024_default_value(void *pValue);
extern SimTypeUtils _Type_array__24024_Utils;

/****************************************************************
 ** array__24027 
 ****************************************************************/
extern int array__24027_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24027_string(const char *str, char **endptr);
extern int string_to_array__24027(const char *str, void *pValue, char **endptr);
extern int is_array__24027_allow_double_conversion();
extern int array__24027_to_double(const void *pValue, double *nValue);
extern int get_array__24027_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24027(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24027_default_value(void *pValue);
extern SimTypeUtils _Type_array__24027_Utils;

/****************************************************************
 ** array__24030 
 ****************************************************************/
extern int array__24030_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24030_string(const char *str, char **endptr);
extern int string_to_array__24030(const char *str, void *pValue, char **endptr);
extern int is_array__24030_allow_double_conversion();
extern int array__24030_to_double(const void *pValue, double *nValue);
extern int get_array__24030_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24030(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24030_default_value(void *pValue);
extern SimTypeUtils _Type_array__24030_Utils;

/****************************************************************
 ** array_int_99_33 
 ****************************************************************/
extern int array_int_99_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_99_33_string(const char *str, char **endptr);
extern int string_to_array_int_99_33(const char *str, void *pValue, char **endptr);
extern int is_array_int_99_33_allow_double_conversion();
extern int array_int_99_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_99_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_99_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_99_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_99_33_Utils;

/****************************************************************
 ** array__24036 
 ****************************************************************/
extern int array__24036_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24036_string(const char *str, char **endptr);
extern int string_to_array__24036(const char *str, void *pValue, char **endptr);
extern int is_array__24036_allow_double_conversion();
extern int array__24036_to_double(const void *pValue, double *nValue);
extern int get_array__24036_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24036(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24036_default_value(void *pValue);
extern SimTypeUtils _Type_array__24036_Utils;

/****************************************************************
 ** array__24039 
 ****************************************************************/
extern int array__24039_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24039_string(const char *str, char **endptr);
extern int string_to_array__24039(const char *str, void *pValue, char **endptr);
extern int is_array__24039_allow_double_conversion();
extern int array__24039_to_double(const void *pValue, double *nValue);
extern int get_array__24039_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24039(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24039_default_value(void *pValue);
extern SimTypeUtils _Type_array__24039_Utils;

/****************************************************************
 ** array__24042 
 ****************************************************************/
extern int array__24042_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24042_string(const char *str, char **endptr);
extern int string_to_array__24042(const char *str, void *pValue, char **endptr);
extern int is_array__24042_allow_double_conversion();
extern int array__24042_to_double(const void *pValue, double *nValue);
extern int get_array__24042_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24042(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24042_default_value(void *pValue);
extern SimTypeUtils _Type_array__24042_Utils;

/****************************************************************
 ** array__24045 
 ****************************************************************/
extern int array__24045_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24045_string(const char *str, char **endptr);
extern int string_to_array__24045(const char *str, void *pValue, char **endptr);
extern int is_array__24045_allow_double_conversion();
extern int array__24045_to_double(const void *pValue, double *nValue);
extern int get_array__24045_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24045(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24045_default_value(void *pValue);
extern SimTypeUtils _Type_array__24045_Utils;

/****************************************************************
 ** array__24048 
 ****************************************************************/
extern int array__24048_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24048_string(const char *str, char **endptr);
extern int string_to_array__24048(const char *str, void *pValue, char **endptr);
extern int is_array__24048_allow_double_conversion();
extern int array__24048_to_double(const void *pValue, double *nValue);
extern int get_array__24048_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24048(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24048_default_value(void *pValue);
extern SimTypeUtils _Type_array__24048_Utils;

/****************************************************************
 ** array_int_66_33 
 ****************************************************************/
extern int array_int_66_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_66_33_string(const char *str, char **endptr);
extern int string_to_array_int_66_33(const char *str, void *pValue, char **endptr);
extern int is_array_int_66_33_allow_double_conversion();
extern int array_int_66_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_66_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_66_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_66_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_66_33_Utils;

/****************************************************************
 ** array__24054 
 ****************************************************************/
extern int array__24054_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24054_string(const char *str, char **endptr);
extern int string_to_array__24054(const char *str, void *pValue, char **endptr);
extern int is_array__24054_allow_double_conversion();
extern int array__24054_to_double(const void *pValue, double *nValue);
extern int get_array__24054_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24054(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24054_default_value(void *pValue);
extern SimTypeUtils _Type_array__24054_Utils;

/****************************************************************
 ** array__24057 
 ****************************************************************/
extern int array__24057_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24057_string(const char *str, char **endptr);
extern int string_to_array__24057(const char *str, void *pValue, char **endptr);
extern int is_array__24057_allow_double_conversion();
extern int array__24057_to_double(const void *pValue, double *nValue);
extern int get_array__24057_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24057(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24057_default_value(void *pValue);
extern SimTypeUtils _Type_array__24057_Utils;

/****************************************************************
 ** array__24060 
 ****************************************************************/
extern int array__24060_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24060_string(const char *str, char **endptr);
extern int string_to_array__24060(const char *str, void *pValue, char **endptr);
extern int is_array__24060_allow_double_conversion();
extern int array__24060_to_double(const void *pValue, double *nValue);
extern int get_array__24060_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24060(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24060_default_value(void *pValue);
extern SimTypeUtils _Type_array__24060_Utils;

/****************************************************************
 ** array__24063 
 ****************************************************************/
extern int array__24063_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24063_string(const char *str, char **endptr);
extern int string_to_array__24063(const char *str, void *pValue, char **endptr);
extern int is_array__24063_allow_double_conversion();
extern int array__24063_to_double(const void *pValue, double *nValue);
extern int get_array__24063_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24063(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24063_default_value(void *pValue);
extern SimTypeUtils _Type_array__24063_Utils;

/****************************************************************
 ** array__24066 
 ****************************************************************/
extern int array__24066_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24066_string(const char *str, char **endptr);
extern int string_to_array__24066(const char *str, void *pValue, char **endptr);
extern int is_array__24066_allow_double_conversion();
extern int array__24066_to_double(const void *pValue, double *nValue);
extern int get_array__24066_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24066(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24066_default_value(void *pValue);
extern SimTypeUtils _Type_array__24066_Utils;

/****************************************************************
 ** array__24069 
 ****************************************************************/
extern int array__24069_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24069_string(const char *str, char **endptr);
extern int string_to_array__24069(const char *str, void *pValue, char **endptr);
extern int is_array__24069_allow_double_conversion();
extern int array__24069_to_double(const void *pValue, double *nValue);
extern int get_array__24069_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24069(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24069_default_value(void *pValue);
extern SimTypeUtils _Type_array__24069_Utils;

/****************************************************************
 ** array_int_3_33_231 
 ****************************************************************/
extern int array_int_3_33_231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_3_33_231_string(const char *str, char **endptr);
extern int string_to_array_int_3_33_231(const char *str, void *pValue, char **endptr);
extern int is_array_int_3_33_231_allow_double_conversion();
extern int array_int_3_33_231_to_double(const void *pValue, double *nValue);
extern int get_array_int_3_33_231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_3_33_231(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_3_33_231_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_3_33_231_Utils;

/****************************************************************
 ** array_int_396 
 ****************************************************************/
extern int array_int_396_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_396_string(const char *str, char **endptr);
extern int string_to_array_int_396(const char *str, void *pValue, char **endptr);
extern int is_array_int_396_allow_double_conversion();
extern int array_int_396_to_double(const void *pValue, double *nValue);
extern int get_array_int_396_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_396(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_396_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_396_Utils;

/****************************************************************
 ** array_int_1 
 ****************************************************************/
extern int array_int_1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_1_string(const char *str, char **endptr);
extern int string_to_array_int_1(const char *str, void *pValue, char **endptr);
extern int is_array_int_1_allow_double_conversion();
extern int array_int_1_to_double(const void *pValue, double *nValue);
extern int get_array_int_1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_1_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_1_Utils;

/****************************************************************
 ** array_int_104 
 ****************************************************************/
extern int array_int_104_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_104_string(const char *str, char **endptr);
extern int string_to_array_int_104(const char *str, void *pValue, char **endptr);
extern int is_array_int_104_allow_double_conversion();
extern int array_int_104_to_double(const void *pValue, double *nValue);
extern int get_array_int_104_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_104(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_104_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_104_Utils;

/****************************************************************
 ** array__24084 
 ****************************************************************/
extern int array__24084_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24084_string(const char *str, char **endptr);
extern int string_to_array__24084(const char *str, void *pValue, char **endptr);
extern int is_array__24084_allow_double_conversion();
extern int array__24084_to_double(const void *pValue, double *nValue);
extern int get_array__24084_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24084(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24084_default_value(void *pValue);
extern SimTypeUtils _Type_array__24084_Utils;

/****************************************************************
 ** array_int_494 
 ****************************************************************/
extern int array_int_494_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_494_string(const char *str, char **endptr);
extern int string_to_array_int_494(const char *str, void *pValue, char **endptr);
extern int is_array_int_494_allow_double_conversion();
extern int array_int_494_to_double(const void *pValue, double *nValue);
extern int get_array_int_494_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_494(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_494_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_494_Utils;

/****************************************************************
 ** array__24090 
 ****************************************************************/
extern int array__24090_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24090_string(const char *str, char **endptr);
extern int string_to_array__24090(const char *str, void *pValue, char **endptr);
extern int is_array__24090_allow_double_conversion();
extern int array__24090_to_double(const void *pValue, double *nValue);
extern int get_array__24090_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24090(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24090_default_value(void *pValue);
extern SimTypeUtils _Type_array__24090_Utils;

/****************************************************************
 ** array_int_2_32_32 
 ****************************************************************/
extern int array_int_2_32_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_2_32_32_string(const char *str, char **endptr);
extern int string_to_array_int_2_32_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_2_32_32_allow_double_conversion();
extern int array_int_2_32_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_2_32_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_2_32_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_2_32_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_2_32_32_Utils;

/****************************************************************
 ** array_int_432 
 ****************************************************************/
extern int array_int_432_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_432_string(const char *str, char **endptr);
extern int string_to_array_int_432(const char *str, void *pValue, char **endptr);
extern int is_array_int_432_allow_double_conversion();
extern int array_int_432_to_double(const void *pValue, double *nValue);
extern int get_array_int_432_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_432(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_432_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_432_Utils;

/****************************************************************
 ** array_int_68 
 ****************************************************************/
extern int array_int_68_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_68_string(const char *str, char **endptr);
extern int string_to_array_int_68(const char *str, void *pValue, char **endptr);
extern int is_array_int_68_allow_double_conversion();
extern int array_int_68_to_double(const void *pValue, double *nValue);
extern int get_array_int_68_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_68(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_68_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_68_Utils;

/****************************************************************
 ** array_int_444 
 ****************************************************************/
extern int array_int_444_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_444_string(const char *str, char **endptr);
extern int string_to_array_int_444(const char *str, void *pValue, char **endptr);
extern int is_array_int_444_allow_double_conversion();
extern int array_int_444_to_double(const void *pValue, double *nValue);
extern int get_array_int_444_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_444(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_444_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_444_Utils;

/****************************************************************
 ** array_int_56 
 ****************************************************************/
extern int array_int_56_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_56_string(const char *str, char **endptr);
extern int string_to_array_int_56(const char *str, void *pValue, char **endptr);
extern int is_array_int_56_allow_double_conversion();
extern int array_int_56_to_double(const void *pValue, double *nValue);
extern int get_array_int_56_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_56(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_56_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_56_Utils;

/****************************************************************
 ** array_int_18 
 ****************************************************************/
extern int array_int_18_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_18_string(const char *str, char **endptr);
extern int string_to_array_int_18(const char *str, void *pValue, char **endptr);
extern int is_array_int_18_allow_double_conversion();
extern int array_int_18_to_double(const void *pValue, double *nValue);
extern int get_array_int_18_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_18(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_18_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_18_Utils;

/****************************************************************
 ** array_int_7_33_231 
 ****************************************************************/
extern int array_int_7_33_231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_7_33_231_string(const char *str, char **endptr);
extern int string_to_array_int_7_33_231(const char *str, void *pValue, char **endptr);
extern int is_array_int_7_33_231_allow_double_conversion();
extern int array_int_7_33_231_to_double(const void *pValue, double *nValue);
extern int get_array_int_7_33_231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_7_33_231(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_7_33_231_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_7_33_231_Utils;

/****************************************************************
 ** array_int_264 
 ****************************************************************/
extern int array_int_264_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_264_string(const char *str, char **endptr);
extern int string_to_array_int_264(const char *str, void *pValue, char **endptr);
extern int is_array_int_264_allow_double_conversion();
extern int array_int_264_to_double(const void *pValue, double *nValue);
extern int get_array_int_264_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_264(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_264_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_264_Utils;

/****************************************************************
 ** array_int_236 
 ****************************************************************/
extern int array_int_236_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_236_string(const char *str, char **endptr);
extern int string_to_array_int_236(const char *str, void *pValue, char **endptr);
extern int is_array_int_236_allow_double_conversion();
extern int array_int_236_to_double(const void *pValue, double *nValue);
extern int get_array_int_236_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_236(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_236_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_236_Utils;

/****************************************************************
 ** array__24120 
 ****************************************************************/
extern int array__24120_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24120_string(const char *str, char **endptr);
extern int string_to_array__24120(const char *str, void *pValue, char **endptr);
extern int is_array__24120_allow_double_conversion();
extern int array__24120_to_double(const void *pValue, double *nValue);
extern int get_array__24120_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24120(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24120_default_value(void *pValue);
extern SimTypeUtils _Type_array__24120_Utils;

/****************************************************************
 ** array_int_3_33_99 
 ****************************************************************/
extern int array_int_3_33_99_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_3_33_99_string(const char *str, char **endptr);
extern int string_to_array_int_3_33_99(const char *str, void *pValue, char **endptr);
extern int is_array_int_3_33_99_allow_double_conversion();
extern int array_int_3_33_99_to_double(const void *pValue, double *nValue);
extern int get_array_int_3_33_99_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_3_33_99(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_3_33_99_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_3_33_99_Utils;

/****************************************************************
 ** array_int_395 
 ****************************************************************/
extern int array_int_395_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_395_string(const char *str, char **endptr);
extern int string_to_array_int_395(const char *str, void *pValue, char **endptr);
extern int is_array_int_395_allow_double_conversion();
extern int array_int_395_to_double(const void *pValue, double *nValue);
extern int get_array_int_395_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_395(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_395_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_395_Utils;

/****************************************************************
 ** array_int_105 
 ****************************************************************/
extern int array_int_105_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_105_string(const char *str, char **endptr);
extern int string_to_array_int_105(const char *str, void *pValue, char **endptr);
extern int is_array_int_105_allow_double_conversion();
extern int array_int_105_to_double(const void *pValue, double *nValue);
extern int get_array_int_105_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_105(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_105_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_105_Utils;

/****************************************************************
 ** array__24132 
 ****************************************************************/
extern int array__24132_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24132_string(const char *str, char **endptr);
extern int string_to_array__24132(const char *str, void *pValue, char **endptr);
extern int is_array__24132_allow_double_conversion();
extern int array__24132_to_double(const void *pValue, double *nValue);
extern int get_array__24132_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24132(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24132_default_value(void *pValue);
extern SimTypeUtils _Type_array__24132_Utils;

/****************************************************************
 ** array_int_491 
 ****************************************************************/
extern int array_int_491_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_491_string(const char *str, char **endptr);
extern int string_to_array_int_491(const char *str, void *pValue, char **endptr);
extern int is_array_int_491_allow_double_conversion();
extern int array_int_491_to_double(const void *pValue, double *nValue);
extern int get_array_int_491_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_491(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_491_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_491_Utils;

/****************************************************************
 ** array_int_9 
 ****************************************************************/
extern int array_int_9_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_9_string(const char *str, char **endptr);
extern int string_to_array_int_9(const char *str, void *pValue, char **endptr);
extern int is_array_int_9_allow_double_conversion();
extern int array_int_9_to_double(const void *pValue, double *nValue);
extern int get_array_int_9_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_9(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_9_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_9_Utils;

/****************************************************************
 ** array_int_4_32_128 
 ****************************************************************/
extern int array_int_4_32_128_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_4_32_128_string(const char *str, char **endptr);
extern int string_to_array_int_4_32_128(const char *str, void *pValue, char **endptr);
extern int is_array_int_4_32_128_allow_double_conversion();
extern int array_int_4_32_128_to_double(const void *pValue, double *nValue);
extern int get_array_int_4_32_128_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_4_32_128(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_4_32_128_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_4_32_128_Utils;

/****************************************************************
 ** array_int_350 
 ****************************************************************/
extern int array_int_350_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_350_string(const char *str, char **endptr);
extern int string_to_array_int_350(const char *str, void *pValue, char **endptr);
extern int is_array_int_350_allow_double_conversion();
extern int array_int_350_to_double(const void *pValue, double *nValue);
extern int get_array_int_350_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_350(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_350_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_350_Utils;

/****************************************************************
 ** array_int_21 
 ****************************************************************/
extern int array_int_21_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_21_string(const char *str, char **endptr);
extern int string_to_array_int_21(const char *str, void *pValue, char **endptr);
extern int is_array_int_21_allow_double_conversion();
extern int array_int_21_to_double(const void *pValue, double *nValue);
extern int get_array_int_21_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_21(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_21_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_21_Utils;

/****************************************************************
 ** array_int_150 
 ****************************************************************/
extern int array_int_150_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_150_string(const char *str, char **endptr);
extern int string_to_array_int_150(const char *str, void *pValue, char **endptr);
extern int is_array_int_150_allow_double_conversion();
extern int array_int_150_to_double(const void *pValue, double *nValue);
extern int get_array_int_150_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_150(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_150_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_150_Utils;

/****************************************************************
 ** array_int_22 
 ****************************************************************/
extern int array_int_22_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_22_string(const char *str, char **endptr);
extern int string_to_array_int_22(const char *str, void *pValue, char **endptr);
extern int is_array_int_22_allow_double_conversion();
extern int array_int_22_to_double(const void *pValue, double *nValue);
extern int get_array_int_22_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_22(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_22_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_22_Utils;

/****************************************************************
 ** Q_DIR 
 ****************************************************************/
extern int Q_DIR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIR_string(const char *str, char **endptr);
extern int string_to_Q_DIR(const char *str, void *pValue, char **endptr);
extern int is_Q_DIR_allow_double_conversion();
extern int Q_DIR_to_double(const void *pValue, double *nValue);
extern int get_Q_DIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIR_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIR_Utils;

/****************************************************************
 ** Q_SCALE 
 ****************************************************************/
extern int Q_SCALE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_SCALE_string(const char *str, char **endptr);
extern int string_to_Q_SCALE(const char *str, void *pValue, char **endptr);
extern int is_Q_SCALE_allow_double_conversion();
extern int Q_SCALE_to_double(const void *pValue, double *nValue);
extern int get_Q_SCALE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_SCALE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_SCALE_default_value(void *pValue);
extern SimTypeUtils _Type_Q_SCALE_Utils;

/****************************************************************
 ** V_LOA 
 ****************************************************************/
extern int V_LOA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_LOA_string(const char *str, char **endptr);
extern int string_to_V_LOA(const char *str, void *pValue, char **endptr);
extern int is_V_LOA_allow_double_conversion();
extern int V_LOA_to_double(const void *pValue, double *nValue);
extern int get_V_LOA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_LOA(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_LOA_default_value(void *pValue);
extern SimTypeUtils _Type_V_LOA_Utils;

/****************************************************************
 ** T_LOA 
 ****************************************************************/
extern int T_LOA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_LOA_string(const char *str, char **endptr);
extern int string_to_T_LOA(const char *str, void *pValue, char **endptr);
extern int is_T_LOA_allow_double_conversion();
extern int T_LOA_to_double(const void *pValue, double *nValue);
extern int get_T_LOA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_LOA(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_LOA_default_value(void *pValue);
extern SimTypeUtils _Type_T_LOA_Utils;

/****************************************************************
 ** N_ITER 
 ****************************************************************/
extern int N_ITER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_ITER_string(const char *str, char **endptr);
extern int string_to_N_ITER(const char *str, void *pValue, char **endptr);
extern int is_N_ITER_allow_double_conversion();
extern int N_ITER_to_double(const void *pValue, double *nValue);
extern int get_N_ITER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_ITER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_ITER_default_value(void *pValue);
extern SimTypeUtils _Type_N_ITER_Utils;

/****************************************************************
 ** L_SECTION 
 ****************************************************************/
extern int L_SECTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_SECTION_string(const char *str, char **endptr);
extern int string_to_L_SECTION(const char *str, void *pValue, char **endptr);
extern int is_L_SECTION_allow_double_conversion();
extern int L_SECTION_to_double(const void *pValue, double *nValue);
extern int get_L_SECTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_SECTION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_SECTION_default_value(void *pValue);
extern SimTypeUtils _Type_L_SECTION_Utils;

/****************************************************************
 ** Q_SECTIONTIMER 
 ****************************************************************/
extern int Q_SECTIONTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_SECTIONTIMER_string(const char *str, char **endptr);
extern int string_to_Q_SECTIONTIMER(const char *str, void *pValue, char **endptr);
extern int is_Q_SECTIONTIMER_allow_double_conversion();
extern int Q_SECTIONTIMER_to_double(const void *pValue, double *nValue);
extern int get_Q_SECTIONTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_SECTIONTIMER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_SECTIONTIMER_default_value(void *pValue);
extern SimTypeUtils _Type_Q_SECTIONTIMER_Utils;

/****************************************************************
 ** T_SECTIONTIMER 
 ****************************************************************/
extern int T_SECTIONTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_SECTIONTIMER_string(const char *str, char **endptr);
extern int string_to_T_SECTIONTIMER(const char *str, void *pValue, char **endptr);
extern int is_T_SECTIONTIMER_allow_double_conversion();
extern int T_SECTIONTIMER_to_double(const void *pValue, double *nValue);
extern int get_T_SECTIONTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_SECTIONTIMER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_SECTIONTIMER_default_value(void *pValue);
extern SimTypeUtils _Type_T_SECTIONTIMER_Utils;

/****************************************************************
 ** D_SECTIONTIMERSTOPLOC 
 ****************************************************************/
extern int D_SECTIONTIMERSTOPLOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_SECTIONTIMERSTOPLOC_string(const char *str, char **endptr);
extern int string_to_D_SECTIONTIMERSTOPLOC(const char *str, void *pValue, char **endptr);
extern int is_D_SECTIONTIMERSTOPLOC_allow_double_conversion();
extern int D_SECTIONTIMERSTOPLOC_to_double(const void *pValue, double *nValue);
extern int get_D_SECTIONTIMERSTOPLOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_SECTIONTIMERSTOPLOC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_SECTIONTIMERSTOPLOC_default_value(void *pValue);
extern SimTypeUtils _Type_D_SECTIONTIMERSTOPLOC_Utils;

/****************************************************************
 ** L_ENDSECTION 
 ****************************************************************/
extern int L_ENDSECTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_ENDSECTION_string(const char *str, char **endptr);
extern int string_to_L_ENDSECTION(const char *str, void *pValue, char **endptr);
extern int is_L_ENDSECTION_allow_double_conversion();
extern int L_ENDSECTION_to_double(const void *pValue, double *nValue);
extern int get_L_ENDSECTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_ENDSECTION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_ENDSECTION_default_value(void *pValue);
extern SimTypeUtils _Type_L_ENDSECTION_Utils;

/****************************************************************
 ** Q_ENDTIMER 
 ****************************************************************/
extern int Q_ENDTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_ENDTIMER_string(const char *str, char **endptr);
extern int string_to_Q_ENDTIMER(const char *str, void *pValue, char **endptr);
extern int is_Q_ENDTIMER_allow_double_conversion();
extern int Q_ENDTIMER_to_double(const void *pValue, double *nValue);
extern int get_Q_ENDTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_ENDTIMER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_ENDTIMER_default_value(void *pValue);
extern SimTypeUtils _Type_Q_ENDTIMER_Utils;

/****************************************************************
 ** T_ENDTIMER 
 ****************************************************************/
extern int T_ENDTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_ENDTIMER_string(const char *str, char **endptr);
extern int string_to_T_ENDTIMER(const char *str, void *pValue, char **endptr);
extern int is_T_ENDTIMER_allow_double_conversion();
extern int T_ENDTIMER_to_double(const void *pValue, double *nValue);
extern int get_T_ENDTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_ENDTIMER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_ENDTIMER_default_value(void *pValue);
extern SimTypeUtils _Type_T_ENDTIMER_Utils;

/****************************************************************
 ** D_ENDTIMERSTARTLOC 
 ****************************************************************/
extern int D_ENDTIMERSTARTLOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_ENDTIMERSTARTLOC_string(const char *str, char **endptr);
extern int string_to_D_ENDTIMERSTARTLOC(const char *str, void *pValue, char **endptr);
extern int is_D_ENDTIMERSTARTLOC_allow_double_conversion();
extern int D_ENDTIMERSTARTLOC_to_double(const void *pValue, double *nValue);
extern int get_D_ENDTIMERSTARTLOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_ENDTIMERSTARTLOC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_ENDTIMERSTARTLOC_default_value(void *pValue);
extern SimTypeUtils _Type_D_ENDTIMERSTARTLOC_Utils;

/****************************************************************
 ** Q_DANGERPOINT 
 ****************************************************************/
extern int Q_DANGERPOINT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DANGERPOINT_string(const char *str, char **endptr);
extern int string_to_Q_DANGERPOINT(const char *str, void *pValue, char **endptr);
extern int is_Q_DANGERPOINT_allow_double_conversion();
extern int Q_DANGERPOINT_to_double(const void *pValue, double *nValue);
extern int get_Q_DANGERPOINT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DANGERPOINT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DANGERPOINT_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DANGERPOINT_Utils;

/****************************************************************
 ** D_DP 
 ****************************************************************/
extern int D_DP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_DP_string(const char *str, char **endptr);
extern int string_to_D_DP(const char *str, void *pValue, char **endptr);
extern int is_D_DP_allow_double_conversion();
extern int D_DP_to_double(const void *pValue, double *nValue);
extern int get_D_DP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_DP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_DP_default_value(void *pValue);
extern SimTypeUtils _Type_D_DP_Utils;

/****************************************************************
 ** V_RELEASEDP 
 ****************************************************************/
extern int V_RELEASEDP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_RELEASEDP_string(const char *str, char **endptr);
extern int string_to_V_RELEASEDP(const char *str, void *pValue, char **endptr);
extern int is_V_RELEASEDP_allow_double_conversion();
extern int V_RELEASEDP_to_double(const void *pValue, double *nValue);
extern int get_V_RELEASEDP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_RELEASEDP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_RELEASEDP_default_value(void *pValue);
extern SimTypeUtils _Type_V_RELEASEDP_Utils;

/****************************************************************
 ** Q_OVERLAP 
 ****************************************************************/
extern int Q_OVERLAP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_OVERLAP_string(const char *str, char **endptr);
extern int string_to_Q_OVERLAP(const char *str, void *pValue, char **endptr);
extern int is_Q_OVERLAP_allow_double_conversion();
extern int Q_OVERLAP_to_double(const void *pValue, double *nValue);
extern int get_Q_OVERLAP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_OVERLAP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_OVERLAP_default_value(void *pValue);
extern SimTypeUtils _Type_Q_OVERLAP_Utils;

/****************************************************************
 ** D_STARTOL 
 ****************************************************************/
extern int D_STARTOL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_STARTOL_string(const char *str, char **endptr);
extern int string_to_D_STARTOL(const char *str, void *pValue, char **endptr);
extern int is_D_STARTOL_allow_double_conversion();
extern int D_STARTOL_to_double(const void *pValue, double *nValue);
extern int get_D_STARTOL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_STARTOL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_STARTOL_default_value(void *pValue);
extern SimTypeUtils _Type_D_STARTOL_Utils;

/****************************************************************
 ** T_OL 
 ****************************************************************/
extern int T_OL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_OL_string(const char *str, char **endptr);
extern int string_to_T_OL(const char *str, void *pValue, char **endptr);
extern int is_T_OL_allow_double_conversion();
extern int T_OL_to_double(const void *pValue, double *nValue);
extern int get_T_OL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_OL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_OL_default_value(void *pValue);
extern SimTypeUtils _Type_T_OL_Utils;

/****************************************************************
 ** D_OL 
 ****************************************************************/
extern int D_OL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_OL_string(const char *str, char **endptr);
extern int string_to_D_OL(const char *str, void *pValue, char **endptr);
extern int is_D_OL_allow_double_conversion();
extern int D_OL_to_double(const void *pValue, double *nValue);
extern int get_D_OL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_OL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_OL_default_value(void *pValue);
extern SimTypeUtils _Type_D_OL_Utils;

/****************************************************************
 ** V_RELEASEOL 
 ****************************************************************/
extern int V_RELEASEOL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_RELEASEOL_string(const char *str, char **endptr);
extern int string_to_V_RELEASEOL(const char *str, void *pValue, char **endptr);
extern int is_V_RELEASEOL_allow_double_conversion();
extern int V_RELEASEOL_to_double(const void *pValue, double *nValue);
extern int get_V_RELEASEOL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_RELEASEOL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_RELEASEOL_default_value(void *pValue);
extern SimTypeUtils _Type_V_RELEASEOL_Utils;

/****************************************************************
 ** D_VALIDNV 
 ****************************************************************/
extern int D_VALIDNV_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_VALIDNV_string(const char *str, char **endptr);
extern int string_to_D_VALIDNV(const char *str, void *pValue, char **endptr);
extern int is_D_VALIDNV_allow_double_conversion();
extern int D_VALIDNV_to_double(const void *pValue, double *nValue);
extern int get_D_VALIDNV_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_VALIDNV(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_VALIDNV_default_value(void *pValue);
extern SimTypeUtils _Type_D_VALIDNV_Utils;

/****************************************************************
 ** NID_C 
 ****************************************************************/
extern int NID_C_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_C_string(const char *str, char **endptr);
extern int string_to_NID_C(const char *str, void *pValue, char **endptr);
extern int is_NID_C_allow_double_conversion();
extern int NID_C_to_double(const void *pValue, double *nValue);
extern int get_NID_C_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_C(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_C_default_value(void *pValue);
extern SimTypeUtils _Type_NID_C_Utils;

/****************************************************************
 ** V_NVSHUNT 
 ****************************************************************/
extern int V_NVSHUNT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVSHUNT_string(const char *str, char **endptr);
extern int string_to_V_NVSHUNT(const char *str, void *pValue, char **endptr);
extern int is_V_NVSHUNT_allow_double_conversion();
extern int V_NVSHUNT_to_double(const void *pValue, double *nValue);
extern int get_V_NVSHUNT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVSHUNT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVSHUNT_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVSHUNT_Utils;

/****************************************************************
 ** V_NVSTFF 
 ****************************************************************/
extern int V_NVSTFF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVSTFF_string(const char *str, char **endptr);
extern int string_to_V_NVSTFF(const char *str, void *pValue, char **endptr);
extern int is_V_NVSTFF_allow_double_conversion();
extern int V_NVSTFF_to_double(const void *pValue, double *nValue);
extern int get_V_NVSTFF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVSTFF(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVSTFF_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVSTFF_Utils;

/****************************************************************
 ** V_NVONSIGHT 
 ****************************************************************/
extern int V_NVONSIGHT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVONSIGHT_string(const char *str, char **endptr);
extern int string_to_V_NVONSIGHT(const char *str, void *pValue, char **endptr);
extern int is_V_NVONSIGHT_allow_double_conversion();
extern int V_NVONSIGHT_to_double(const void *pValue, double *nValue);
extern int get_V_NVONSIGHT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVONSIGHT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVONSIGHT_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVONSIGHT_Utils;

/****************************************************************
 ** V_NVUNFIT 
 ****************************************************************/
extern int V_NVUNFIT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVUNFIT_string(const char *str, char **endptr);
extern int string_to_V_NVUNFIT(const char *str, void *pValue, char **endptr);
extern int is_V_NVUNFIT_allow_double_conversion();
extern int V_NVUNFIT_to_double(const void *pValue, double *nValue);
extern int get_V_NVUNFIT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVUNFIT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVUNFIT_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVUNFIT_Utils;

/****************************************************************
 ** V_NVREL 
 ****************************************************************/
extern int V_NVREL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVREL_string(const char *str, char **endptr);
extern int string_to_V_NVREL(const char *str, void *pValue, char **endptr);
extern int is_V_NVREL_allow_double_conversion();
extern int V_NVREL_to_double(const void *pValue, double *nValue);
extern int get_V_NVREL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVREL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVREL_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVREL_Utils;

/****************************************************************
 ** D_NVROLL 
 ****************************************************************/
extern int D_NVROLL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_NVROLL_string(const char *str, char **endptr);
extern int string_to_D_NVROLL(const char *str, void *pValue, char **endptr);
extern int is_D_NVROLL_allow_double_conversion();
extern int D_NVROLL_to_double(const void *pValue, double *nValue);
extern int get_D_NVROLL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_NVROLL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_NVROLL_default_value(void *pValue);
extern SimTypeUtils _Type_D_NVROLL_Utils;

/****************************************************************
 ** Q_NVSBTSMPERM 
 ****************************************************************/
extern int Q_NVSBTSMPERM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NVSBTSMPERM_string(const char *str, char **endptr);
extern int string_to_Q_NVSBTSMPERM(const char *str, void *pValue, char **endptr);
extern int is_Q_NVSBTSMPERM_allow_double_conversion();
extern int Q_NVSBTSMPERM_to_double(const void *pValue, double *nValue);
extern int get_Q_NVSBTSMPERM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NVSBTSMPERM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NVSBTSMPERM_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NVSBTSMPERM_Utils;

/****************************************************************
 ** Q_NVEMRRLS 
 ****************************************************************/
extern int Q_NVEMRRLS_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NVEMRRLS_string(const char *str, char **endptr);
extern int string_to_Q_NVEMRRLS(const char *str, void *pValue, char **endptr);
extern int is_Q_NVEMRRLS_allow_double_conversion();
extern int Q_NVEMRRLS_to_double(const void *pValue, double *nValue);
extern int get_Q_NVEMRRLS_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NVEMRRLS(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NVEMRRLS_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NVEMRRLS_Utils;

/****************************************************************
 ** V_NVALLOWOVTRP 
 ****************************************************************/
extern int V_NVALLOWOVTRP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVALLOWOVTRP_string(const char *str, char **endptr);
extern int string_to_V_NVALLOWOVTRP(const char *str, void *pValue, char **endptr);
extern int is_V_NVALLOWOVTRP_allow_double_conversion();
extern int V_NVALLOWOVTRP_to_double(const void *pValue, double *nValue);
extern int get_V_NVALLOWOVTRP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVALLOWOVTRP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVALLOWOVTRP_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVALLOWOVTRP_Utils;

/****************************************************************
 ** V_NVSUPOVTRP 
 ****************************************************************/
extern int V_NVSUPOVTRP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVSUPOVTRP_string(const char *str, char **endptr);
extern int string_to_V_NVSUPOVTRP(const char *str, void *pValue, char **endptr);
extern int is_V_NVSUPOVTRP_allow_double_conversion();
extern int V_NVSUPOVTRP_to_double(const void *pValue, double *nValue);
extern int get_V_NVSUPOVTRP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVSUPOVTRP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVSUPOVTRP_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVSUPOVTRP_Utils;

/****************************************************************
 ** D_NVOVTRP 
 ****************************************************************/
extern int D_NVOVTRP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_NVOVTRP_string(const char *str, char **endptr);
extern int string_to_D_NVOVTRP(const char *str, void *pValue, char **endptr);
extern int is_D_NVOVTRP_allow_double_conversion();
extern int D_NVOVTRP_to_double(const void *pValue, double *nValue);
extern int get_D_NVOVTRP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_NVOVTRP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_NVOVTRP_default_value(void *pValue);
extern SimTypeUtils _Type_D_NVOVTRP_Utils;

/****************************************************************
 ** T_NVOVTRP 
 ****************************************************************/
extern int T_NVOVTRP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_NVOVTRP_string(const char *str, char **endptr);
extern int string_to_T_NVOVTRP(const char *str, void *pValue, char **endptr);
extern int is_T_NVOVTRP_allow_double_conversion();
extern int T_NVOVTRP_to_double(const void *pValue, double *nValue);
extern int get_T_NVOVTRP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_NVOVTRP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_NVOVTRP_default_value(void *pValue);
extern SimTypeUtils _Type_T_NVOVTRP_Utils;

/****************************************************************
 ** D_NVPOTRP 
 ****************************************************************/
extern int D_NVPOTRP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_NVPOTRP_string(const char *str, char **endptr);
extern int string_to_D_NVPOTRP(const char *str, void *pValue, char **endptr);
extern int is_D_NVPOTRP_allow_double_conversion();
extern int D_NVPOTRP_to_double(const void *pValue, double *nValue);
extern int get_D_NVPOTRP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_NVPOTRP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_NVPOTRP_default_value(void *pValue);
extern SimTypeUtils _Type_D_NVPOTRP_Utils;

/****************************************************************
 ** M_NVCONTACT 
 ****************************************************************/
extern int M_NVCONTACT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_NVCONTACT_string(const char *str, char **endptr);
extern int string_to_M_NVCONTACT(const char *str, void *pValue, char **endptr);
extern int is_M_NVCONTACT_allow_double_conversion();
extern int M_NVCONTACT_to_double(const void *pValue, double *nValue);
extern int get_M_NVCONTACT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_NVCONTACT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_NVCONTACT_default_value(void *pValue);
extern SimTypeUtils _Type_M_NVCONTACT_Utils;

/****************************************************************
 ** T_NVCONTACT 
 ****************************************************************/
extern int T_NVCONTACT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_NVCONTACT_string(const char *str, char **endptr);
extern int string_to_T_NVCONTACT(const char *str, void *pValue, char **endptr);
extern int is_T_NVCONTACT_allow_double_conversion();
extern int T_NVCONTACT_to_double(const void *pValue, double *nValue);
extern int get_T_NVCONTACT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_NVCONTACT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_NVCONTACT_default_value(void *pValue);
extern SimTypeUtils _Type_T_NVCONTACT_Utils;

/****************************************************************
 ** M_NVDERUN 
 ****************************************************************/
extern int M_NVDERUN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_NVDERUN_string(const char *str, char **endptr);
extern int string_to_M_NVDERUN(const char *str, void *pValue, char **endptr);
extern int is_M_NVDERUN_allow_double_conversion();
extern int M_NVDERUN_to_double(const void *pValue, double *nValue);
extern int get_M_NVDERUN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_NVDERUN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_NVDERUN_default_value(void *pValue);
extern SimTypeUtils _Type_M_NVDERUN_Utils;

/****************************************************************
 ** D_NVSTFF 
 ****************************************************************/
extern int D_NVSTFF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_NVSTFF_string(const char *str, char **endptr);
extern int string_to_D_NVSTFF(const char *str, void *pValue, char **endptr);
extern int is_D_NVSTFF_allow_double_conversion();
extern int D_NVSTFF_to_double(const void *pValue, double *nValue);
extern int get_D_NVSTFF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_NVSTFF(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_NVSTFF_default_value(void *pValue);
extern SimTypeUtils _Type_D_NVSTFF_Utils;

/****************************************************************
 ** Q_NVDRIVER_ADHES 
 ****************************************************************/
extern int Q_NVDRIVER_ADHES_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NVDRIVER_ADHES_string(const char *str, char **endptr);
extern int string_to_Q_NVDRIVER_ADHES(const char *str, void *pValue, char **endptr);
extern int is_Q_NVDRIVER_ADHES_allow_double_conversion();
extern int Q_NVDRIVER_ADHES_to_double(const void *pValue, double *nValue);
extern int get_Q_NVDRIVER_ADHES_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NVDRIVER_ADHES(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NVDRIVER_ADHES_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NVDRIVER_ADHES_Utils;

/****************************************************************
 ** NID_PACKET 
 ****************************************************************/
extern int NID_PACKET_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_PACKET_string(const char *str, char **endptr);
extern int string_to_NID_PACKET(const char *str, void *pValue, char **endptr);
extern int is_NID_PACKET_allow_double_conversion();
extern int NID_PACKET_to_double(const void *pValue, double *nValue);
extern int get_NID_PACKET_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_PACKET(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_PACKET_default_value(void *pValue);
extern SimTypeUtils _Type_NID_PACKET_Utils;

/****************************************************************
 ** Q_UPDOWN 
 ****************************************************************/
extern int Q_UPDOWN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_UPDOWN_string(const char *str, char **endptr);
extern int string_to_Q_UPDOWN(const char *str, void *pValue, char **endptr);
extern int is_Q_UPDOWN_allow_double_conversion();
extern int Q_UPDOWN_to_double(const void *pValue, double *nValue);
extern int get_Q_UPDOWN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_UPDOWN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_UPDOWN_default_value(void *pValue);
extern SimTypeUtils _Type_Q_UPDOWN_Utils;

/****************************************************************
 ** M_VERSION 
 ****************************************************************/
extern int M_VERSION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_VERSION_string(const char *str, char **endptr);
extern int string_to_M_VERSION(const char *str, void *pValue, char **endptr);
extern int is_M_VERSION_allow_double_conversion();
extern int M_VERSION_to_double(const void *pValue, double *nValue);
extern int get_M_VERSION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_VERSION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_VERSION_default_value(void *pValue);
extern SimTypeUtils _Type_M_VERSION_Utils;

/****************************************************************
 ** Q_MEDIA 
 ****************************************************************/
extern int Q_MEDIA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_MEDIA_string(const char *str, char **endptr);
extern int string_to_Q_MEDIA(const char *str, void *pValue, char **endptr);
extern int is_Q_MEDIA_allow_double_conversion();
extern int Q_MEDIA_to_double(const void *pValue, double *nValue);
extern int get_Q_MEDIA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_MEDIA(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_MEDIA_default_value(void *pValue);
extern SimTypeUtils _Type_Q_MEDIA_Utils;

/****************************************************************
 ** N_TOTAL 
 ****************************************************************/
extern int N_TOTAL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_TOTAL_string(const char *str, char **endptr);
extern int string_to_N_TOTAL(const char *str, void *pValue, char **endptr);
extern int is_N_TOTAL_allow_double_conversion();
extern int N_TOTAL_to_double(const void *pValue, double *nValue);
extern int get_N_TOTAL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_TOTAL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_TOTAL_default_value(void *pValue);
extern SimTypeUtils _Type_N_TOTAL_Utils;

/****************************************************************
 ** M_MCOUNT 
 ****************************************************************/
extern int M_MCOUNT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_MCOUNT_string(const char *str, char **endptr);
extern int string_to_M_MCOUNT(const char *str, void *pValue, char **endptr);
extern int is_M_MCOUNT_allow_double_conversion();
extern int M_MCOUNT_to_double(const void *pValue, double *nValue);
extern int get_M_MCOUNT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_MCOUNT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_MCOUNT_default_value(void *pValue);
extern SimTypeUtils _Type_M_MCOUNT_Utils;

/****************************************************************
 ** NID_BG 
 ****************************************************************/
extern int NID_BG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_BG_string(const char *str, char **endptr);
extern int string_to_NID_BG(const char *str, void *pValue, char **endptr);
extern int is_NID_BG_allow_double_conversion();
extern int NID_BG_to_double(const void *pValue, double *nValue);
extern int get_NID_BG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_BG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_BG_default_value(void *pValue);
extern SimTypeUtils _Type_NID_BG_Utils;

/****************************************************************
 ** Q_LINK 
 ****************************************************************/
extern int Q_LINK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINK_string(const char *str, char **endptr);
extern int string_to_Q_LINK(const char *str, void *pValue, char **endptr);
extern int is_Q_LINK_allow_double_conversion();
extern int Q_LINK_to_double(const void *pValue, double *nValue);
extern int get_Q_LINK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINK(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINK_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINK_Utils;

/****************************************************************
 ** Q_NVLOCACC 
 ****************************************************************/
extern int Q_NVLOCACC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NVLOCACC_string(const char *str, char **endptr);
extern int string_to_Q_NVLOCACC(const char *str, void *pValue, char **endptr);
extern int is_Q_NVLOCACC_allow_double_conversion();
extern int Q_NVLOCACC_to_double(const void *pValue, double *nValue);
extern int get_Q_NVLOCACC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NVLOCACC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NVLOCACC_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NVLOCACC_Utils;

/****************************************************************
 ** Q_DIRLRBG 
 ****************************************************************/
extern int Q_DIRLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIRLRBG_string(const char *str, char **endptr);
extern int string_to_Q_DIRLRBG(const char *str, void *pValue, char **endptr);
extern int is_Q_DIRLRBG_allow_double_conversion();
extern int Q_DIRLRBG_to_double(const void *pValue, double *nValue);
extern int get_Q_DIRLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIRLRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIRLRBG_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIRLRBG_Utils;

/****************************************************************
 ** Q_DIRTRAIN 
 ****************************************************************/
extern int Q_DIRTRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIRTRAIN_string(const char *str, char **endptr);
extern int string_to_Q_DIRTRAIN(const char *str, void *pValue, char **endptr);
extern int is_Q_DIRTRAIN_allow_double_conversion();
extern int Q_DIRTRAIN_to_double(const void *pValue, double *nValue);
extern int get_Q_DIRTRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIRTRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIRTRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIRTRAIN_Utils;

/****************************************************************
 ** NID_MESSAGE 
 ****************************************************************/
extern int NID_MESSAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_MESSAGE_string(const char *str, char **endptr);
extern int string_to_NID_MESSAGE(const char *str, void *pValue, char **endptr);
extern int is_NID_MESSAGE_allow_double_conversion();
extern int NID_MESSAGE_to_double(const void *pValue, double *nValue);
extern int get_NID_MESSAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_MESSAGE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_MESSAGE_default_value(void *pValue);
extern SimTypeUtils _Type_NID_MESSAGE_Utils;

/****************************************************************
 ** T_TRAIN 
 ****************************************************************/
extern int T_TRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_TRAIN_string(const char *str, char **endptr);
extern int string_to_T_TRAIN(const char *str, void *pValue, char **endptr);
extern int is_T_TRAIN_allow_double_conversion();
extern int T_TRAIN_to_double(const void *pValue, double *nValue);
extern int get_T_TRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_TRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_TRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_T_TRAIN_Utils;

/****************************************************************
 ** M_ACK 
 ****************************************************************/
extern int M_ACK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_ACK_string(const char *str, char **endptr);
extern int string_to_M_ACK(const char *str, void *pValue, char **endptr);
extern int is_M_ACK_allow_double_conversion();
extern int M_ACK_to_double(const void *pValue, double *nValue);
extern int get_M_ACK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_ACK(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_ACK_default_value(void *pValue);
extern SimTypeUtils _Type_M_ACK_Utils;

/****************************************************************
 ** NID_LRBG 
 ****************************************************************/
extern int NID_LRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_LRBG_string(const char *str, char **endptr);
extern int string_to_NID_LRBG(const char *str, void *pValue, char **endptr);
extern int is_NID_LRBG_allow_double_conversion();
extern int NID_LRBG_to_double(const void *pValue, double *nValue);
extern int get_NID_LRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_LRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_LRBG_default_value(void *pValue);
extern SimTypeUtils _Type_NID_LRBG_Utils;

/****************************************************************
 ** NID_EM 
 ****************************************************************/
extern int NID_EM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_EM_string(const char *str, char **endptr);
extern int string_to_NID_EM(const char *str, void *pValue, char **endptr);
extern int is_NID_EM_allow_double_conversion();
extern int NID_EM_to_double(const void *pValue, double *nValue);
extern int get_NID_EM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_EM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_EM_default_value(void *pValue);
extern SimTypeUtils _Type_NID_EM_Utils;

/****************************************************************
 ** D_SR 
 ****************************************************************/
extern int D_SR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_SR_string(const char *str, char **endptr);
extern int string_to_D_SR(const char *str, void *pValue, char **endptr);
extern int is_D_SR_allow_double_conversion();
extern int D_SR_to_double(const void *pValue, double *nValue);
extern int get_D_SR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_SR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_SR_default_value(void *pValue);
extern SimTypeUtils _Type_D_SR_Utils;

/****************************************************************
 ** D_REF 
 ****************************************************************/
extern int D_REF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_REF_string(const char *str, char **endptr);
extern int string_to_D_REF(const char *str, void *pValue, char **endptr);
extern int is_D_REF_allow_double_conversion();
extern int D_REF_to_double(const void *pValue, double *nValue);
extern int get_D_REF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_REF(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_REF_default_value(void *pValue);
extern SimTypeUtils _Type_D_REF_Utils;

/****************************************************************
 ** D_EMERGENCYSTOP 
 ****************************************************************/
extern int D_EMERGENCYSTOP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_EMERGENCYSTOP_string(const char *str, char **endptr);
extern int string_to_D_EMERGENCYSTOP(const char *str, void *pValue, char **endptr);
extern int is_D_EMERGENCYSTOP_allow_double_conversion();
extern int D_EMERGENCYSTOP_to_double(const void *pValue, double *nValue);
extern int get_D_EMERGENCYSTOP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_EMERGENCYSTOP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_EMERGENCYSTOP_default_value(void *pValue);
extern SimTypeUtils _Type_D_EMERGENCYSTOP_Utils;

/****************************************************************
 ** NID_RBC 
 ****************************************************************/
extern int NID_RBC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_RBC_string(const char *str, char **endptr);
extern int string_to_NID_RBC(const char *str, void *pValue, char **endptr);
extern int is_NID_RBC_allow_double_conversion();
extern int NID_RBC_to_double(const void *pValue, double *nValue);
extern int get_NID_RBC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_RBC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_RBC_default_value(void *pValue);
extern SimTypeUtils _Type_NID_RBC_Utils;

/****************************************************************
 ** M_LEVEL 
 ****************************************************************/
extern int M_LEVEL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_LEVEL_string(const char *str, char **endptr);
extern int string_to_M_LEVEL(const char *str, void *pValue, char **endptr);
extern int is_M_LEVEL_allow_double_conversion();
extern int M_LEVEL_to_double(const void *pValue, double *nValue);
extern int get_M_LEVEL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_LEVEL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_LEVEL_default_value(void *pValue);
extern SimTypeUtils _Type_M_LEVEL_Utils;

/****************************************************************
 ** M_MODE 
 ****************************************************************/
extern int M_MODE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_MODE_string(const char *str, char **endptr);
extern int string_to_M_MODE(const char *str, void *pValue, char **endptr);
extern int is_M_MODE_allow_double_conversion();
extern int M_MODE_to_double(const void *pValue, double *nValue);
extern int get_M_MODE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_MODE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_MODE_default_value(void *pValue);
extern SimTypeUtils _Type_M_MODE_Utils;

/****************************************************************
 ** D_STATIC 
 ****************************************************************/
extern int D_STATIC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_STATIC_string(const char *str, char **endptr);
extern int string_to_D_STATIC(const char *str, void *pValue, char **endptr);
extern int is_D_STATIC_allow_double_conversion();
extern int D_STATIC_to_double(const void *pValue, double *nValue);
extern int get_D_STATIC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_STATIC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_STATIC_default_value(void *pValue);
extern SimTypeUtils _Type_D_STATIC_Utils;

/****************************************************************
 ** V_STATIC 
 ****************************************************************/
extern int V_STATIC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_STATIC_string(const char *str, char **endptr);
extern int string_to_V_STATIC(const char *str, void *pValue, char **endptr);
extern int is_V_STATIC_allow_double_conversion();
extern int V_STATIC_to_double(const void *pValue, double *nValue);
extern int get_V_STATIC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_STATIC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_STATIC_default_value(void *pValue);
extern SimTypeUtils _Type_V_STATIC_Utils;

/****************************************************************
 ** Q_FRONT 
 ****************************************************************/
extern int Q_FRONT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_FRONT_string(const char *str, char **endptr);
extern int string_to_Q_FRONT(const char *str, void *pValue, char **endptr);
extern int is_Q_FRONT_allow_double_conversion();
extern int Q_FRONT_to_double(const void *pValue, double *nValue);
extern int get_Q_FRONT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_FRONT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_FRONT_default_value(void *pValue);
extern SimTypeUtils _Type_Q_FRONT_Utils;

/****************************************************************
 ** NC_DIFF 
 ****************************************************************/
extern int NC_DIFF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NC_DIFF_string(const char *str, char **endptr);
extern int string_to_NC_DIFF(const char *str, void *pValue, char **endptr);
extern int is_NC_DIFF_allow_double_conversion();
extern int NC_DIFF_to_double(const void *pValue, double *nValue);
extern int get_NC_DIFF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NC_DIFF(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NC_DIFF_default_value(void *pValue);
extern SimTypeUtils _Type_NC_DIFF_Utils;

/****************************************************************
 ** V_DIFF 
 ****************************************************************/
extern int V_DIFF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_DIFF_string(const char *str, char **endptr);
extern int string_to_V_DIFF(const char *str, void *pValue, char **endptr);
extern int is_V_DIFF_allow_double_conversion();
extern int V_DIFF_to_double(const void *pValue, double *nValue);
extern int get_V_DIFF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_DIFF(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_DIFF_default_value(void *pValue);
extern SimTypeUtils _Type_V_DIFF_Utils;

/****************************************************************
 ** D_LINK 
 ****************************************************************/
extern int D_LINK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_LINK_string(const char *str, char **endptr);
extern int string_to_D_LINK(const char *str, void *pValue, char **endptr);
extern int is_D_LINK_allow_double_conversion();
extern int D_LINK_to_double(const void *pValue, double *nValue);
extern int get_D_LINK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_LINK(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_LINK_default_value(void *pValue);
extern SimTypeUtils _Type_D_LINK_Utils;

/****************************************************************
 ** Q_NEWCOUNTRY 
 ****************************************************************/
extern int Q_NEWCOUNTRY_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NEWCOUNTRY_string(const char *str, char **endptr);
extern int string_to_Q_NEWCOUNTRY(const char *str, void *pValue, char **endptr);
extern int is_Q_NEWCOUNTRY_allow_double_conversion();
extern int Q_NEWCOUNTRY_to_double(const void *pValue, double *nValue);
extern int get_Q_NEWCOUNTRY_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NEWCOUNTRY(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NEWCOUNTRY_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NEWCOUNTRY_Utils;

/****************************************************************
 ** Q_LINKORIENTATION 
 ****************************************************************/
extern int Q_LINKORIENTATION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINKORIENTATION_string(const char *str, char **endptr);
extern int string_to_Q_LINKORIENTATION(const char *str, void *pValue, char **endptr);
extern int is_Q_LINKORIENTATION_allow_double_conversion();
extern int Q_LINKORIENTATION_to_double(const void *pValue, double *nValue);
extern int get_Q_LINKORIENTATION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINKORIENTATION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINKORIENTATION_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINKORIENTATION_Utils;

/****************************************************************
 ** Q_LINKREACTION 
 ****************************************************************/
extern int Q_LINKREACTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINKREACTION_string(const char *str, char **endptr);
extern int string_to_Q_LINKREACTION(const char *str, void *pValue, char **endptr);
extern int is_Q_LINKREACTION_allow_double_conversion();
extern int Q_LINKREACTION_to_double(const void *pValue, double *nValue);
extern int get_Q_LINKREACTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINKREACTION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINKREACTION_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINKREACTION_Utils;

/****************************************************************
 ** Q_LOCACC 
 ****************************************************************/
extern int Q_LOCACC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LOCACC_string(const char *str, char **endptr);
extern int string_to_Q_LOCACC(const char *str, void *pValue, char **endptr);
extern int is_Q_LOCACC_allow_double_conversion();
extern int Q_LOCACC_to_double(const void *pValue, double *nValue);
extern int get_Q_LOCACC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LOCACC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LOCACC_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LOCACC_Utils;

/****************************************************************
 ** Q_DLRBG 
 ****************************************************************/
extern int Q_DLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DLRBG_string(const char *str, char **endptr);
extern int string_to_Q_DLRBG(const char *str, void *pValue, char **endptr);
extern int is_Q_DLRBG_allow_double_conversion();
extern int Q_DLRBG_to_double(const void *pValue, double *nValue);
extern int get_Q_DLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DLRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DLRBG_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DLRBG_Utils;

/****************************************************************
 ** V_NVLIMSUPERV 
 ****************************************************************/
extern int V_NVLIMSUPERV_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVLIMSUPERV_string(const char *str, char **endptr);
extern int string_to_V_NVLIMSUPERV(const char *str, void *pValue, char **endptr);
extern int is_V_NVLIMSUPERV_allow_double_conversion();
extern int V_NVLIMSUPERV_to_double(const void *pValue, double *nValue);
extern int get_V_NVLIMSUPERV_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVLIMSUPERV(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVLIMSUPERV_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVLIMSUPERV_Utils;

/****************************************************************
 ** Q_NVGUIPERM 
 ****************************************************************/
extern int Q_NVGUIPERM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NVGUIPERM_string(const char *str, char **endptr);
extern int string_to_Q_NVGUIPERM(const char *str, void *pValue, char **endptr);
extern int is_Q_NVGUIPERM_allow_double_conversion();
extern int Q_NVGUIPERM_to_double(const void *pValue, double *nValue);
extern int get_Q_NVGUIPERM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NVGUIPERM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NVGUIPERM_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NVGUIPERM_Utils;

/****************************************************************
 ** Q_NVSBFBPERM 
 ****************************************************************/
extern int Q_NVSBFBPERM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NVSBFBPERM_string(const char *str, char **endptr);
extern int string_to_Q_NVSBFBPERM(const char *str, void *pValue, char **endptr);
extern int is_Q_NVSBFBPERM_allow_double_conversion();
extern int Q_NVSBFBPERM_to_double(const void *pValue, double *nValue);
extern int get_Q_NVSBFBPERM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NVSBFBPERM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NVSBFBPERM_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NVSBFBPERM_Utils;

/****************************************************************
 ** Q_NVINHSMICPERM 
 ****************************************************************/
extern int Q_NVINHSMICPERM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NVINHSMICPERM_string(const char *str, char **endptr);
extern int string_to_Q_NVINHSMICPERM(const char *str, void *pValue, char **endptr);
extern int is_Q_NVINHSMICPERM_allow_double_conversion();
extern int Q_NVINHSMICPERM_to_double(const void *pValue, double *nValue);
extern int get_Q_NVINHSMICPERM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NVINHSMICPERM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NVINHSMICPERM_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NVINHSMICPERM_Utils;

/****************************************************************
 ** A_NVMAXREDADH1 
 ****************************************************************/
extern int A_NVMAXREDADH1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_A_NVMAXREDADH1_string(const char *str, char **endptr);
extern int string_to_A_NVMAXREDADH1(const char *str, void *pValue, char **endptr);
extern int is_A_NVMAXREDADH1_allow_double_conversion();
extern int A_NVMAXREDADH1_to_double(const void *pValue, double *nValue);
extern int get_A_NVMAXREDADH1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_A_NVMAXREDADH1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_A_NVMAXREDADH1_default_value(void *pValue);
extern SimTypeUtils _Type_A_NVMAXREDADH1_Utils;

/****************************************************************
 ** A_NVMAXREDADH2 
 ****************************************************************/
extern int A_NVMAXREDADH2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_A_NVMAXREDADH2_string(const char *str, char **endptr);
extern int string_to_A_NVMAXREDADH2(const char *str, void *pValue, char **endptr);
extern int is_A_NVMAXREDADH2_allow_double_conversion();
extern int A_NVMAXREDADH2_to_double(const void *pValue, double *nValue);
extern int get_A_NVMAXREDADH2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_A_NVMAXREDADH2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_A_NVMAXREDADH2_default_value(void *pValue);
extern SimTypeUtils _Type_A_NVMAXREDADH2_Utils;

/****************************************************************
 ** A_NVMAXREDADH3 
 ****************************************************************/
extern int A_NVMAXREDADH3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_A_NVMAXREDADH3_string(const char *str, char **endptr);
extern int string_to_A_NVMAXREDADH3(const char *str, void *pValue, char **endptr);
extern int is_A_NVMAXREDADH3_allow_double_conversion();
extern int A_NVMAXREDADH3_to_double(const void *pValue, double *nValue);
extern int get_A_NVMAXREDADH3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_A_NVMAXREDADH3(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_A_NVMAXREDADH3_default_value(void *pValue);
extern SimTypeUtils _Type_A_NVMAXREDADH3_Utils;

/****************************************************************
 ** M_NVAVADH 
 ****************************************************************/
extern int M_NVAVADH_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_NVAVADH_string(const char *str, char **endptr);
extern int string_to_M_NVAVADH(const char *str, void *pValue, char **endptr);
extern int is_M_NVAVADH_allow_double_conversion();
extern int M_NVAVADH_to_double(const void *pValue, double *nValue);
extern int get_M_NVAVADH_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_NVAVADH(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_NVAVADH_default_value(void *pValue);
extern SimTypeUtils _Type_M_NVAVADH_Utils;

/****************************************************************
 ** M_NVEBCL 
 ****************************************************************/
extern int M_NVEBCL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_NVEBCL_string(const char *str, char **endptr);
extern int string_to_M_NVEBCL(const char *str, void *pValue, char **endptr);
extern int is_M_NVEBCL_allow_double_conversion();
extern int M_NVEBCL_to_double(const void *pValue, double *nValue);
extern int get_M_NVEBCL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_NVEBCL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_NVEBCL_default_value(void *pValue);
extern SimTypeUtils _Type_M_NVEBCL_Utils;

/****************************************************************
 ** Q_NVKINT 
 ****************************************************************/
extern int Q_NVKINT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NVKINT_string(const char *str, char **endptr);
extern int string_to_Q_NVKINT(const char *str, void *pValue, char **endptr);
extern int is_Q_NVKINT_allow_double_conversion();
extern int Q_NVKINT_to_double(const void *pValue, double *nValue);
extern int get_Q_NVKINT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NVKINT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NVKINT_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NVKINT_Utils;

/****************************************************************
 ** Q_NVKVINTSET 
 ****************************************************************/
extern int Q_NVKVINTSET_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NVKVINTSET_string(const char *str, char **endptr);
extern int string_to_Q_NVKVINTSET(const char *str, void *pValue, char **endptr);
extern int is_Q_NVKVINTSET_allow_double_conversion();
extern int Q_NVKVINTSET_to_double(const void *pValue, double *nValue);
extern int get_Q_NVKVINTSET_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NVKVINTSET(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NVKVINTSET_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NVKVINTSET_Utils;

/****************************************************************
 ** A_NVP12 
 ****************************************************************/
extern int A_NVP12_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_A_NVP12_string(const char *str, char **endptr);
extern int string_to_A_NVP12(const char *str, void *pValue, char **endptr);
extern int is_A_NVP12_allow_double_conversion();
extern int A_NVP12_to_double(const void *pValue, double *nValue);
extern int get_A_NVP12_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_A_NVP12(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_A_NVP12_default_value(void *pValue);
extern SimTypeUtils _Type_A_NVP12_Utils;

/****************************************************************
 ** A_NVP23 
 ****************************************************************/
extern int A_NVP23_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_A_NVP23_string(const char *str, char **endptr);
extern int string_to_A_NVP23(const char *str, void *pValue, char **endptr);
extern int is_A_NVP23_allow_double_conversion();
extern int A_NVP23_to_double(const void *pValue, double *nValue);
extern int get_A_NVP23_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_A_NVP23(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_A_NVP23_default_value(void *pValue);
extern SimTypeUtils _Type_A_NVP23_Utils;

/****************************************************************
 ** V_NVKVINT 
 ****************************************************************/
extern int V_NVKVINT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVKVINT_string(const char *str, char **endptr);
extern int string_to_V_NVKVINT(const char *str, void *pValue, char **endptr);
extern int is_V_NVKVINT_allow_double_conversion();
extern int V_NVKVINT_to_double(const void *pValue, double *nValue);
extern int get_V_NVKVINT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVKVINT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVKVINT_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVKVINT_Utils;

/****************************************************************
 ** M_NVKVINT 
 ****************************************************************/
extern int M_NVKVINT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_NVKVINT_string(const char *str, char **endptr);
extern int string_to_M_NVKVINT(const char *str, void *pValue, char **endptr);
extern int is_M_NVKVINT_allow_double_conversion();
extern int M_NVKVINT_to_double(const void *pValue, double *nValue);
extern int get_M_NVKVINT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_NVKVINT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_NVKVINT_default_value(void *pValue);
extern SimTypeUtils _Type_M_NVKVINT_Utils;

/****************************************************************
 ** L_NVKRINT 
 ****************************************************************/
extern int L_NVKRINT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_NVKRINT_string(const char *str, char **endptr);
extern int string_to_L_NVKRINT(const char *str, void *pValue, char **endptr);
extern int is_L_NVKRINT_allow_double_conversion();
extern int L_NVKRINT_to_double(const void *pValue, double *nValue);
extern int get_L_NVKRINT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_NVKRINT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_NVKRINT_default_value(void *pValue);
extern SimTypeUtils _Type_L_NVKRINT_Utils;

/****************************************************************
 ** M_NVKRINT 
 ****************************************************************/
extern int M_NVKRINT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_NVKRINT_string(const char *str, char **endptr);
extern int string_to_M_NVKRINT(const char *str, void *pValue, char **endptr);
extern int is_M_NVKRINT_allow_double_conversion();
extern int M_NVKRINT_to_double(const void *pValue, double *nValue);
extern int get_M_NVKRINT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_NVKRINT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_NVKRINT_default_value(void *pValue);
extern SimTypeUtils _Type_M_NVKRINT_Utils;

/****************************************************************
 ** M_NVKTINT 
 ****************************************************************/
extern int M_NVKTINT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_NVKTINT_string(const char *str, char **endptr);
extern int string_to_M_NVKTINT(const char *str, void *pValue, char **endptr);
extern int is_M_NVKTINT_allow_double_conversion();
extern int M_NVKTINT_to_double(const void *pValue, double *nValue);
extern int get_M_NVKTINT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_NVKTINT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_NVKTINT_default_value(void *pValue);
extern SimTypeUtils _Type_M_NVKTINT_Utils;

/****************************************************************
 ** T_MAR 
 ****************************************************************/
extern int T_MAR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_MAR_string(const char *str, char **endptr);
extern int string_to_T_MAR(const char *str, void *pValue, char **endptr);
extern int is_T_MAR_allow_double_conversion();
extern int T_MAR_to_double(const void *pValue, double *nValue);
extern int get_T_MAR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_MAR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_MAR_default_value(void *pValue);
extern SimTypeUtils _Type_T_MAR_Utils;

/****************************************************************
 ** T_TIMEOUTRQST 
 ****************************************************************/
extern int T_TIMEOUTRQST_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_TIMEOUTRQST_string(const char *str, char **endptr);
extern int string_to_T_TIMEOUTRQST(const char *str, void *pValue, char **endptr);
extern int is_T_TIMEOUTRQST_allow_double_conversion();
extern int T_TIMEOUTRQST_to_double(const void *pValue, double *nValue);
extern int get_T_TIMEOUTRQST_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_TIMEOUTRQST(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_TIMEOUTRQST_default_value(void *pValue);
extern SimTypeUtils _Type_T_TIMEOUTRQST_Utils;

/****************************************************************
 ** T_CYCRQST 
 ****************************************************************/
extern int T_CYCRQST_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_CYCRQST_string(const char *str, char **endptr);
extern int string_to_T_CYCRQST(const char *str, void *pValue, char **endptr);
extern int is_T_CYCRQST_allow_double_conversion();
extern int T_CYCRQST_to_double(const void *pValue, double *nValue);
extern int get_T_CYCRQST_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_CYCRQST(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_CYCRQST_default_value(void *pValue);
extern SimTypeUtils _Type_T_CYCRQST_Utils;

/****************************************************************
 ** Q_MARQSTREASON 
 ****************************************************************/
extern int Q_MARQSTREASON_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_MARQSTREASON_string(const char *str, char **endptr);
extern int string_to_Q_MARQSTREASON(const char *str, void *pValue, char **endptr);
extern int is_Q_MARQSTREASON_allow_double_conversion();
extern int Q_MARQSTREASON_to_double(const void *pValue, double *nValue);
extern int get_Q_MARQSTREASON_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_MARQSTREASON(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_MARQSTREASON_default_value(void *pValue);
extern SimTypeUtils _Type_Q_MARQSTREASON_Utils;

/****************************************************************
 ** NID_ENGINE 
 ****************************************************************/
extern int NID_ENGINE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_ENGINE_string(const char *str, char **endptr);
extern int string_to_NID_ENGINE(const char *str, void *pValue, char **endptr);
extern int is_NID_ENGINE_allow_double_conversion();
extern int NID_ENGINE_to_double(const void *pValue, double *nValue);
extern int get_NID_ENGINE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_ENGINE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_ENGINE_default_value(void *pValue);
extern SimTypeUtils _Type_NID_ENGINE_Utils;

/****************************************************************
 ** Q_EMERGENCYSTOP 
 ****************************************************************/
extern int Q_EMERGENCYSTOP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_EMERGENCYSTOP_string(const char *str, char **endptr);
extern int string_to_Q_EMERGENCYSTOP(const char *str, void *pValue, char **endptr);
extern int is_Q_EMERGENCYSTOP_allow_double_conversion();
extern int Q_EMERGENCYSTOP_to_double(const void *pValue, double *nValue);
extern int get_Q_EMERGENCYSTOP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_EMERGENCYSTOP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_EMERGENCYSTOP_default_value(void *pValue);
extern SimTypeUtils _Type_Q_EMERGENCYSTOP_Utils;

/****************************************************************
 ** NID_TEXTMESSAGE 
 ****************************************************************/
extern int NID_TEXTMESSAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_TEXTMESSAGE_string(const char *str, char **endptr);
extern int string_to_NID_TEXTMESSAGE(const char *str, void *pValue, char **endptr);
extern int is_NID_TEXTMESSAGE_allow_double_conversion();
extern int NID_TEXTMESSAGE_to_double(const void *pValue, double *nValue);
extern int get_NID_TEXTMESSAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_TEXTMESSAGE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_TEXTMESSAGE_default_value(void *pValue);
extern SimTypeUtils _Type_NID_TEXTMESSAGE_Utils;

/****************************************************************
 ** Q_LENGTH 
 ****************************************************************/
extern int Q_LENGTH_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LENGTH_string(const char *str, char **endptr);
extern int string_to_Q_LENGTH(const char *str, void *pValue, char **endptr);
extern int is_Q_LENGTH_allow_double_conversion();
extern int Q_LENGTH_to_double(const void *pValue, double *nValue);
extern int get_Q_LENGTH_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LENGTH(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LENGTH_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LENGTH_Utils;

/****************************************************************
 ** M_ERROR 
 ****************************************************************/
extern int M_ERROR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_ERROR_string(const char *str, char **endptr);
extern int string_to_M_ERROR(const char *str, void *pValue, char **endptr);
extern int is_M_ERROR_allow_double_conversion();
extern int M_ERROR_to_double(const void *pValue, double *nValue);
extern int get_M_ERROR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_ERROR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_ERROR_default_value(void *pValue);
extern SimTypeUtils _Type_M_ERROR_Utils;

/****************************************************************
 ** NID_OPERATIONAL 
 ****************************************************************/
extern int NID_OPERATIONAL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_OPERATIONAL_string(const char *str, char **endptr);
extern int string_to_NID_OPERATIONAL(const char *str, void *pValue, char **endptr);
extern int is_NID_OPERATIONAL_allow_double_conversion();
extern int NID_OPERATIONAL_to_double(const void *pValue, double *nValue);
extern int get_NID_OPERATIONAL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_OPERATIONAL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_OPERATIONAL_default_value(void *pValue);
extern SimTypeUtils _Type_NID_OPERATIONAL_Utils;

/****************************************************************
 ** NID_LTRBG 
 ****************************************************************/
extern int NID_LTRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_LTRBG_string(const char *str, char **endptr);
extern int string_to_NID_LTRBG(const char *str, void *pValue, char **endptr);
extern int is_NID_LTRBG_allow_double_conversion();
extern int NID_LTRBG_to_double(const void *pValue, double *nValue);
extern int get_NID_LTRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_LTRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_LTRBG_default_value(void *pValue);
extern SimTypeUtils _Type_NID_LTRBG_Utils;

/****************************************************************
 ** NC_CDTRAIN 
 ****************************************************************/
extern int NC_CDTRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NC_CDTRAIN_string(const char *str, char **endptr);
extern int string_to_NC_CDTRAIN(const char *str, void *pValue, char **endptr);
extern int is_NC_CDTRAIN_allow_double_conversion();
extern int NC_CDTRAIN_to_double(const void *pValue, double *nValue);
extern int get_NC_CDTRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NC_CDTRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NC_CDTRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_NC_CDTRAIN_Utils;

/****************************************************************
 ** NC_TRAIN 
 ****************************************************************/
extern int NC_TRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NC_TRAIN_string(const char *str, char **endptr);
extern int string_to_NC_TRAIN(const char *str, void *pValue, char **endptr);
extern int is_NC_TRAIN_allow_double_conversion();
extern int NC_TRAIN_to_double(const void *pValue, double *nValue);
extern int get_NC_TRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NC_TRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NC_TRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_NC_TRAIN_Utils;

/****************************************************************
 ** M_LOADINGGAUGE 
 ****************************************************************/
extern int M_LOADINGGAUGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_LOADINGGAUGE_string(const char *str, char **endptr);
extern int string_to_M_LOADINGGAUGE(const char *str, void *pValue, char **endptr);
extern int is_M_LOADINGGAUGE_allow_double_conversion();
extern int M_LOADINGGAUGE_to_double(const void *pValue, double *nValue);
extern int get_M_LOADINGGAUGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_LOADINGGAUGE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_LOADINGGAUGE_default_value(void *pValue);
extern SimTypeUtils _Type_M_LOADINGGAUGE_Utils;

/****************************************************************
 ** M_AXLELOADCAT 
 ****************************************************************/
extern int M_AXLELOADCAT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_AXLELOADCAT_string(const char *str, char **endptr);
extern int string_to_M_AXLELOADCAT(const char *str, void *pValue, char **endptr);
extern int is_M_AXLELOADCAT_allow_double_conversion();
extern int M_AXLELOADCAT_to_double(const void *pValue, double *nValue);
extern int get_M_AXLELOADCAT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_AXLELOADCAT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_AXLELOADCAT_default_value(void *pValue);
extern SimTypeUtils _Type_M_AXLELOADCAT_Utils;

/****************************************************************
 ** M_AIRTIGHT 
 ****************************************************************/
extern int M_AIRTIGHT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_AIRTIGHT_string(const char *str, char **endptr);
extern int string_to_M_AIRTIGHT(const char *str, void *pValue, char **endptr);
extern int is_M_AIRTIGHT_allow_double_conversion();
extern int M_AIRTIGHT_to_double(const void *pValue, double *nValue);
extern int get_M_AIRTIGHT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_AIRTIGHT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_AIRTIGHT_default_value(void *pValue);
extern SimTypeUtils _Type_M_AIRTIGHT_Utils;

/****************************************************************
 ** N_AXLE 
 ****************************************************************/
extern int N_AXLE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_AXLE_string(const char *str, char **endptr);
extern int string_to_N_AXLE(const char *str, void *pValue, char **endptr);
extern int is_N_AXLE_allow_double_conversion();
extern int N_AXLE_to_double(const void *pValue, double *nValue);
extern int get_N_AXLE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_AXLE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_AXLE_default_value(void *pValue);
extern SimTypeUtils _Type_N_AXLE_Utils;

/****************************************************************
 ** M_VOLTAGE 
 ****************************************************************/
extern int M_VOLTAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_VOLTAGE_string(const char *str, char **endptr);
extern int string_to_M_VOLTAGE(const char *str, void *pValue, char **endptr);
extern int is_M_VOLTAGE_allow_double_conversion();
extern int M_VOLTAGE_to_double(const void *pValue, double *nValue);
extern int get_M_VOLTAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_VOLTAGE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_VOLTAGE_default_value(void *pValue);
extern SimTypeUtils _Type_M_VOLTAGE_Utils;

/****************************************************************
 ** NID_CTRACTION 
 ****************************************************************/
extern int NID_CTRACTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_CTRACTION_string(const char *str, char **endptr);
extern int string_to_NID_CTRACTION(const char *str, void *pValue, char **endptr);
extern int is_NID_CTRACTION_allow_double_conversion();
extern int NID_CTRACTION_to_double(const void *pValue, double *nValue);
extern int get_NID_CTRACTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_CTRACTION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_CTRACTION_default_value(void *pValue);
extern SimTypeUtils _Type_NID_CTRACTION_Utils;

/****************************************************************
 ** NID_NTC 
 ****************************************************************/
extern int NID_NTC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_NTC_string(const char *str, char **endptr);
extern int string_to_NID_NTC(const char *str, void *pValue, char **endptr);
extern int is_NID_NTC_allow_double_conversion();
extern int NID_NTC_to_double(const void *pValue, double *nValue);
extern int get_NID_NTC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_NTC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_NTC_default_value(void *pValue);
extern SimTypeUtils _Type_NID_NTC_Utils;

/****************************************************************
 ** L_TRAIN 
 ****************************************************************/
extern int L_TRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_TRAIN_string(const char *str, char **endptr);
extern int string_to_L_TRAIN(const char *str, void *pValue, char **endptr);
extern int is_L_TRAIN_allow_double_conversion();
extern int L_TRAIN_to_double(const void *pValue, double *nValue);
extern int get_L_TRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_TRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_TRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_L_TRAIN_Utils;

/****************************************************************
 ** T_CYCLOC 
 ****************************************************************/
extern int T_CYCLOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_CYCLOC_string(const char *str, char **endptr);
extern int string_to_T_CYCLOC(const char *str, void *pValue, char **endptr);
extern int is_T_CYCLOC_allow_double_conversion();
extern int T_CYCLOC_to_double(const void *pValue, double *nValue);
extern int get_T_CYCLOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_CYCLOC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_CYCLOC_default_value(void *pValue);
extern SimTypeUtils _Type_T_CYCLOC_Utils;

/****************************************************************
 ** Q_SRSTOP 
 ****************************************************************/
extern int Q_SRSTOP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_SRSTOP_string(const char *str, char **endptr);
extern int string_to_Q_SRSTOP(const char *str, void *pValue, char **endptr);
extern int is_Q_SRSTOP_allow_double_conversion();
extern int Q_SRSTOP_to_double(const void *pValue, double *nValue);
extern int get_Q_SRSTOP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_SRSTOP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_SRSTOP_default_value(void *pValue);
extern SimTypeUtils _Type_Q_SRSTOP_Utils;

/****************************************************************
 ** D_STARTREVERSE 
 ****************************************************************/
extern int D_STARTREVERSE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_STARTREVERSE_string(const char *str, char **endptr);
extern int string_to_D_STARTREVERSE(const char *str, void *pValue, char **endptr);
extern int is_D_STARTREVERSE_allow_double_conversion();
extern int D_STARTREVERSE_to_double(const void *pValue, double *nValue);
extern int get_D_STARTREVERSE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_STARTREVERSE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_STARTREVERSE_default_value(void *pValue);
extern SimTypeUtils _Type_D_STARTREVERSE_Utils;

/****************************************************************
 ** L_REVERSEAREA 
 ****************************************************************/
extern int L_REVERSEAREA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_REVERSEAREA_string(const char *str, char **endptr);
extern int string_to_L_REVERSEAREA(const char *str, void *pValue, char **endptr);
extern int is_L_REVERSEAREA_allow_double_conversion();
extern int L_REVERSEAREA_to_double(const void *pValue, double *nValue);
extern int get_L_REVERSEAREA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_REVERSEAREA(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_REVERSEAREA_default_value(void *pValue);
extern SimTypeUtils _Type_L_REVERSEAREA_Utils;

/****************************************************************
 ** D_REVERSE 
 ****************************************************************/
extern int D_REVERSE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_REVERSE_string(const char *str, char **endptr);
extern int string_to_D_REVERSE(const char *str, void *pValue, char **endptr);
extern int is_D_REVERSE_allow_double_conversion();
extern int D_REVERSE_to_double(const void *pValue, double *nValue);
extern int get_D_REVERSE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_REVERSE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_REVERSE_default_value(void *pValue);
extern SimTypeUtils _Type_D_REVERSE_Utils;

/****************************************************************
 ** V_REVERSE 
 ****************************************************************/
extern int V_REVERSE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_REVERSE_string(const char *str, char **endptr);
extern int string_to_V_REVERSE(const char *str, void *pValue, char **endptr);
extern int is_V_REVERSE_allow_double_conversion();
extern int V_REVERSE_to_double(const void *pValue, double *nValue);
extern int get_V_REVERSE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_REVERSE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_REVERSE_default_value(void *pValue);
extern SimTypeUtils _Type_V_REVERSE_Utils;

/****************************************************************
 ** D_GRADIENT 
 ****************************************************************/
extern int D_GRADIENT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_GRADIENT_string(const char *str, char **endptr);
extern int string_to_D_GRADIENT(const char *str, void *pValue, char **endptr);
extern int is_D_GRADIENT_allow_double_conversion();
extern int D_GRADIENT_to_double(const void *pValue, double *nValue);
extern int get_D_GRADIENT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_GRADIENT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_GRADIENT_default_value(void *pValue);
extern SimTypeUtils _Type_D_GRADIENT_Utils;

/****************************************************************
 ** Q_GDIR 
 ****************************************************************/
extern int Q_GDIR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_GDIR_string(const char *str, char **endptr);
extern int string_to_Q_GDIR(const char *str, void *pValue, char **endptr);
extern int is_Q_GDIR_allow_double_conversion();
extern int Q_GDIR_to_double(const void *pValue, double *nValue);
extern int get_Q_GDIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_GDIR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_GDIR_default_value(void *pValue);
extern SimTypeUtils _Type_Q_GDIR_Utils;

/****************************************************************
 ** G_A 
 ****************************************************************/
extern int G_A_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_G_A_string(const char *str, char **endptr);
extern int string_to_G_A(const char *str, void *pValue, char **endptr);
extern int is_G_A_allow_double_conversion();
extern int G_A_to_double(const void *pValue, double *nValue);
extern int get_G_A_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_G_A(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_G_A_default_value(void *pValue);
extern SimTypeUtils _Type_G_A_Utils;

/****************************************************************
 ** Q_DIFF 
 ****************************************************************/
extern int Q_DIFF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIFF_string(const char *str, char **endptr);
extern int string_to_Q_DIFF(const char *str, void *pValue, char **endptr);
extern int is_Q_DIFF_allow_double_conversion();
extern int Q_DIFF_to_double(const void *pValue, double *nValue);
extern int get_Q_DIFF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIFF(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIFF_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIFF_Utils;

/****************************************************************
 ** NC_CDDIFF 
 ****************************************************************/
extern int NC_CDDIFF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NC_CDDIFF_string(const char *str, char **endptr);
extern int string_to_NC_CDDIFF(const char *str, void *pValue, char **endptr);
extern int is_NC_CDDIFF_allow_double_conversion();
extern int NC_CDDIFF_to_double(const void *pValue, double *nValue);
extern int get_NC_CDDIFF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NC_CDDIFF(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NC_CDDIFF_default_value(void *pValue);
extern SimTypeUtils _Type_NC_CDDIFF_Utils;

/****************************************************************
 ** D_LEVELTR 
 ****************************************************************/
extern int D_LEVELTR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_LEVELTR_string(const char *str, char **endptr);
extern int string_to_D_LEVELTR(const char *str, void *pValue, char **endptr);
extern int is_D_LEVELTR_allow_double_conversion();
extern int D_LEVELTR_to_double(const void *pValue, double *nValue);
extern int get_D_LEVELTR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_LEVELTR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_LEVELTR_default_value(void *pValue);
extern SimTypeUtils _Type_D_LEVELTR_Utils;

/****************************************************************
 ** M_LEVELTR 
 ****************************************************************/
extern int M_LEVELTR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_LEVELTR_string(const char *str, char **endptr);
extern int string_to_M_LEVELTR(const char *str, void *pValue, char **endptr);
extern int is_M_LEVELTR_allow_double_conversion();
extern int M_LEVELTR_to_double(const void *pValue, double *nValue);
extern int get_M_LEVELTR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_LEVELTR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_LEVELTR_default_value(void *pValue);
extern SimTypeUtils _Type_M_LEVELTR_Utils;

/****************************************************************
 ** L_ACKLEVELTR 
 ****************************************************************/
extern int L_ACKLEVELTR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_ACKLEVELTR_string(const char *str, char **endptr);
extern int string_to_L_ACKLEVELTR(const char *str, void *pValue, char **endptr);
extern int is_L_ACKLEVELTR_allow_double_conversion();
extern int L_ACKLEVELTR_to_double(const void *pValue, double *nValue);
extern int get_L_ACKLEVELTR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_ACKLEVELTR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_ACKLEVELTR_default_value(void *pValue);
extern SimTypeUtils _Type_L_ACKLEVELTR_Utils;

/****************************************************************
 ** D_MAMODE 
 ****************************************************************/
extern int D_MAMODE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_MAMODE_string(const char *str, char **endptr);
extern int string_to_D_MAMODE(const char *str, void *pValue, char **endptr);
extern int is_D_MAMODE_allow_double_conversion();
extern int D_MAMODE_to_double(const void *pValue, double *nValue);
extern int get_D_MAMODE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_MAMODE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_MAMODE_default_value(void *pValue);
extern SimTypeUtils _Type_D_MAMODE_Utils;

/****************************************************************
 ** M_MAMODE 
 ****************************************************************/
extern int M_MAMODE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_MAMODE_string(const char *str, char **endptr);
extern int string_to_M_MAMODE(const char *str, void *pValue, char **endptr);
extern int is_M_MAMODE_allow_double_conversion();
extern int M_MAMODE_to_double(const void *pValue, double *nValue);
extern int get_M_MAMODE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_MAMODE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_MAMODE_default_value(void *pValue);
extern SimTypeUtils _Type_M_MAMODE_Utils;

/****************************************************************
 ** V_MAMODE 
 ****************************************************************/
extern int V_MAMODE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_MAMODE_string(const char *str, char **endptr);
extern int string_to_V_MAMODE(const char *str, void *pValue, char **endptr);
extern int is_V_MAMODE_allow_double_conversion();
extern int V_MAMODE_to_double(const void *pValue, double *nValue);
extern int get_V_MAMODE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_MAMODE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_MAMODE_default_value(void *pValue);
extern SimTypeUtils _Type_V_MAMODE_Utils;

/****************************************************************
 ** L_MAMODE 
 ****************************************************************/
extern int L_MAMODE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_MAMODE_string(const char *str, char **endptr);
extern int string_to_L_MAMODE(const char *str, void *pValue, char **endptr);
extern int is_L_MAMODE_allow_double_conversion();
extern int L_MAMODE_to_double(const void *pValue, double *nValue);
extern int get_L_MAMODE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_MAMODE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_MAMODE_default_value(void *pValue);
extern SimTypeUtils _Type_L_MAMODE_Utils;

/****************************************************************
 ** L_ACKMAMODE 
 ****************************************************************/
extern int L_ACKMAMODE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_ACKMAMODE_string(const char *str, char **endptr);
extern int string_to_L_ACKMAMODE(const char *str, void *pValue, char **endptr);
extern int is_L_ACKMAMODE_allow_double_conversion();
extern int L_ACKMAMODE_to_double(const void *pValue, double *nValue);
extern int get_L_ACKMAMODE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_ACKMAMODE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_ACKMAMODE_default_value(void *pValue);
extern SimTypeUtils _Type_L_ACKMAMODE_Utils;

/****************************************************************
 ** Q_MAMODE 
 ****************************************************************/
extern int Q_MAMODE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_MAMODE_string(const char *str, char **endptr);
extern int string_to_Q_MAMODE(const char *str, void *pValue, char **endptr);
extern int is_Q_MAMODE_allow_double_conversion();
extern int Q_MAMODE_to_double(const void *pValue, double *nValue);
extern int get_Q_MAMODE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_MAMODE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_MAMODE_default_value(void *pValue);
extern SimTypeUtils _Type_Q_MAMODE_Utils;

/****************************************************************
 ** V_MAIN 
 ****************************************************************/
extern int V_MAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_MAIN_string(const char *str, char **endptr);
extern int string_to_V_MAIN(const char *str, void *pValue, char **endptr);
extern int is_V_MAIN_allow_double_conversion();
extern int V_MAIN_to_double(const void *pValue, double *nValue);
extern int get_V_MAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_MAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_MAIN_default_value(void *pValue);
extern SimTypeUtils _Type_V_MAIN_Utils;

/****************************************************************
 ** L_MESSAGE 
 ****************************************************************/
extern int L_MESSAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_MESSAGE_string(const char *str, char **endptr);
extern int string_to_L_MESSAGE(const char *str, void *pValue, char **endptr);
extern int is_L_MESSAGE_allow_double_conversion();
extern int L_MESSAGE_to_double(const void *pValue, double *nValue);
extern int get_L_MESSAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_MESSAGE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_MESSAGE_default_value(void *pValue);
extern SimTypeUtils _Type_L_MESSAGE_Utils;

/****************************************************************
 ** Q_ORIENTATION 
 ****************************************************************/
extern int Q_ORIENTATION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_ORIENTATION_string(const char *str, char **endptr);
extern int string_to_Q_ORIENTATION(const char *str, void *pValue, char **endptr);
extern int is_Q_ORIENTATION_allow_double_conversion();
extern int Q_ORIENTATION_to_double(const void *pValue, double *nValue);
extern int get_Q_ORIENTATION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_ORIENTATION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_ORIENTATION_default_value(void *pValue);
extern SimTypeUtils _Type_Q_ORIENTATION_Utils;

/****************************************************************
 ** D_TAFDISPLAY 
 ****************************************************************/
extern int D_TAFDISPLAY_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_TAFDISPLAY_string(const char *str, char **endptr);
extern int string_to_D_TAFDISPLAY(const char *str, void *pValue, char **endptr);
extern int is_D_TAFDISPLAY_allow_double_conversion();
extern int D_TAFDISPLAY_to_double(const void *pValue, double *nValue);
extern int get_D_TAFDISPLAY_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_TAFDISPLAY(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_TAFDISPLAY_default_value(void *pValue);
extern SimTypeUtils _Type_D_TAFDISPLAY_Utils;

/****************************************************************
 ** L_TAFDISPLAY 
 ****************************************************************/
extern int L_TAFDISPLAY_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_TAFDISPLAY_string(const char *str, char **endptr);
extern int string_to_L_TAFDISPLAY(const char *str, void *pValue, char **endptr);
extern int is_L_TAFDISPLAY_allow_double_conversion();
extern int L_TAFDISPLAY_to_double(const void *pValue, double *nValue);
extern int get_L_TAFDISPLAY_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_TAFDISPLAY(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_TAFDISPLAY_default_value(void *pValue);
extern SimTypeUtils _Type_L_TAFDISPLAY_Utils;

/****************************************************************
 ** P015_OBU_T_TM 
 ****************************************************************/
extern int P015_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_OBU_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_OBU_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_OBU_T_TM_allow_double_conversion();
extern int P015_OBU_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_OBU_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_OBU_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_OBU_T_TM_Utils;

/****************************************************************
 ** P015_OBU_sectionlist_enum_T_TM 
 ****************************************************************/
extern int P015_OBU_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_OBU_sectionlist_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_OBU_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_OBU_sectionlist_enum_T_TM_allow_double_conversion();
extern int P015_OBU_sectionlist_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_OBU_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_OBU_sectionlist_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_OBU_sectionlist_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_OBU_sectionlist_enum_T_TM_Utils;

/****************************************************************
 ** P015_section_enum_T_TM 
 ****************************************************************/
extern int P015_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_section_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_section_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_section_enum_T_TM_allow_double_conversion();
extern int P015_section_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_section_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_section_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_section_enum_T_TM_Utils;

/****************************************************************
 ** Array06_TM 
 ****************************************************************/
extern int Array06_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Array06_TM_string(const char *str, char **endptr);
extern int string_to_Array06_TM(const char *str, void *pValue, char **endptr);
extern int is_Array06_TM_allow_double_conversion();
extern int Array06_TM_to_double(const void *pValue, double *nValue);
extern int get_Array06_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Array06_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Array06_TM_default_value(void *pValue);
extern SimTypeUtils _Type_Array06_TM_Utils;

/****************************************************************
 ** P015_sections_array_flat_T_TM 
 ****************************************************************/
extern int P015_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_sections_array_flat_T_TM_allow_double_conversion();
extern int P015_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** Array15_TM 
 ****************************************************************/
extern int Array15_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Array15_TM_string(const char *str, char **endptr);
extern int string_to_Array15_TM(const char *str, void *pValue, char **endptr);
extern int is_Array15_TM_allow_double_conversion();
extern int Array15_TM_to_double(const void *pValue, double *nValue);
extern int get_Array15_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Array15_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Array15_TM_default_value(void *pValue);
extern SimTypeUtils _Type_Array15_TM_Utils;

/****************************************************************
 ** Array05_TM 
 ****************************************************************/
extern int Array05_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Array05_TM_string(const char *str, char **endptr);
extern int string_to_Array05_TM(const char *str, void *pValue, char **endptr);
extern int is_Array05_TM_allow_double_conversion();
extern int Array05_TM_to_double(const void *pValue, double *nValue);
extern int get_Array05_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Array05_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Array05_TM_default_value(void *pValue);
extern SimTypeUtils _Type_Array05_TM_Utils;

/****************************************************************
 ** Array03_TM 
 ****************************************************************/
extern int Array03_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Array03_TM_string(const char *str, char **endptr);
extern int string_to_Array03_TM(const char *str, void *pValue, char **endptr);
extern int is_Array03_TM_allow_double_conversion();
extern int Array03_TM_to_double(const void *pValue, double *nValue);
extern int get_Array03_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Array03_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Array03_TM_default_value(void *pValue);
extern SimTypeUtils _Type_Array03_TM_Utils;

/****************************************************************
 ** Array24_TM 
 ****************************************************************/
extern int Array24_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Array24_TM_string(const char *str, char **endptr);
extern int string_to_Array24_TM(const char *str, void *pValue, char **endptr);
extern int is_Array24_TM_allow_double_conversion();
extern int Array24_TM_to_double(const void *pValue, double *nValue);
extern int get_Array24_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Array24_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Array24_TM_default_value(void *pValue);
extern SimTypeUtils _Type_Array24_TM_Utils;

/****************************************************************
 ** P003_OBU_T_TM 
 ****************************************************************/
extern int P003_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003_OBU_T_TM_string(const char *str, char **endptr);
extern int string_to_P003_OBU_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P003_OBU_T_TM_allow_double_conversion();
extern int P003_OBU_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P003_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003_OBU_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003_OBU_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P003_OBU_T_TM_Utils;

/****************************************************************
 ** P003_OBU_nid_c_sectionlist_enum_T_TM 
 ****************************************************************/
extern int P003_OBU_nid_c_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003_OBU_nid_c_sectionlist_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P003_OBU_nid_c_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P003_OBU_nid_c_sectionlist_enum_T_TM_allow_double_conversion();
extern int P003_OBU_nid_c_sectionlist_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P003_OBU_nid_c_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003_OBU_nid_c_sectionlist_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003_OBU_nid_c_sectionlist_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P003_OBU_nid_c_sectionlist_enum_T_TM_Utils;

/****************************************************************
 ** P003_OBU_nid_c_section_enum_T_TM 
 ****************************************************************/
extern int P003_OBU_nid_c_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003_OBU_nid_c_section_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P003_OBU_nid_c_section_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P003_OBU_nid_c_section_enum_T_TM_allow_double_conversion();
extern int P003_OBU_nid_c_section_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P003_OBU_nid_c_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003_OBU_nid_c_section_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003_OBU_nid_c_section_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P003_OBU_nid_c_section_enum_T_TM_Utils;

/****************************************************************
 ** P003_OBU_n_sectionlist_enum_T_TM 
 ****************************************************************/
extern int P003_OBU_n_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003_OBU_n_sectionlist_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P003_OBU_n_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P003_OBU_n_sectionlist_enum_T_TM_allow_double_conversion();
extern int P003_OBU_n_sectionlist_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P003_OBU_n_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003_OBU_n_sectionlist_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003_OBU_n_sectionlist_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P003_OBU_n_sectionlist_enum_T_TM_Utils;

/****************************************************************
 ** P003_OBU_n_section_enum_T_TM 
 ****************************************************************/
extern int P003_OBU_n_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003_OBU_n_section_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P003_OBU_n_section_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P003_OBU_n_section_enum_T_TM_allow_double_conversion();
extern int P003_OBU_n_section_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P003_OBU_n_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003_OBU_n_section_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003_OBU_n_section_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P003_OBU_n_section_enum_T_TM_Utils;

/****************************************************************
 ** P003_OBU_k_sectionlist_enum_T_TM 
 ****************************************************************/
extern int P003_OBU_k_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003_OBU_k_sectionlist_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P003_OBU_k_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P003_OBU_k_sectionlist_enum_T_TM_allow_double_conversion();
extern int P003_OBU_k_sectionlist_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P003_OBU_k_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003_OBU_k_sectionlist_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003_OBU_k_sectionlist_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P003_OBU_k_sectionlist_enum_T_TM_Utils;

/****************************************************************
 ** P003_OBU_k_section_enum_T_TM 
 ****************************************************************/
extern int P003_OBU_k_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003_OBU_k_section_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P003_OBU_k_section_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P003_OBU_k_section_enum_T_TM_allow_double_conversion();
extern int P003_OBU_k_section_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P003_OBU_k_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003_OBU_k_section_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003_OBU_k_section_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P003_OBU_k_section_enum_T_TM_Utils;

/****************************************************************
 ** P003_OBU_k_m_sectionlist_enum_T_TM 
 ****************************************************************/
extern int P003_OBU_k_m_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003_OBU_k_m_sectionlist_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P003_OBU_k_m_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P003_OBU_k_m_sectionlist_enum_T_TM_allow_double_conversion();
extern int P003_OBU_k_m_sectionlist_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P003_OBU_k_m_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003_OBU_k_m_sectionlist_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003_OBU_k_m_sectionlist_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P003_OBU_k_m_sectionlist_enum_T_TM_Utils;

/****************************************************************
 ** P003_OBU_k_m_section_enum_T_TM 
 ****************************************************************/
extern int P003_OBU_k_m_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003_OBU_k_m_section_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P003_OBU_k_m_section_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P003_OBU_k_m_section_enum_T_TM_allow_double_conversion();
extern int P003_OBU_k_m_section_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P003_OBU_k_m_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003_OBU_k_m_section_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003_OBU_k_m_section_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P003_OBU_k_m_section_enum_T_TM_Utils;

/****************************************************************
 ** P003_OBU_l_sectionlist_enum_T_TM 
 ****************************************************************/
extern int P003_OBU_l_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003_OBU_l_sectionlist_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P003_OBU_l_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P003_OBU_l_sectionlist_enum_T_TM_allow_double_conversion();
extern int P003_OBU_l_sectionlist_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P003_OBU_l_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003_OBU_l_sectionlist_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003_OBU_l_sectionlist_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P003_OBU_l_sectionlist_enum_T_TM_Utils;

/****************************************************************
 ** P003_OBU_l_section_enum_T_TM 
 ****************************************************************/
extern int P003_OBU_l_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003_OBU_l_section_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P003_OBU_l_section_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P003_OBU_l_section_enum_T_TM_allow_double_conversion();
extern int P003_OBU_l_section_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P003_OBU_l_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003_OBU_l_section_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003_OBU_l_section_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P003_OBU_l_section_enum_T_TM_Utils;

/****************************************************************
 ** P135_OBU_T_TM 
 ****************************************************************/
extern int P135_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P135_OBU_T_TM_string(const char *str, char **endptr);
extern int string_to_P135_OBU_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P135_OBU_T_TM_allow_double_conversion();
extern int P135_OBU_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P135_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P135_OBU_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P135_OBU_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P135_OBU_T_TM_Utils;

/****************************************************************
 ** P138_OBU_T_TM 
 ****************************************************************/
extern int P138_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P138_OBU_T_TM_string(const char *str, char **endptr);
extern int string_to_P138_OBU_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P138_OBU_T_TM_allow_double_conversion();
extern int P138_OBU_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P138_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P138_OBU_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P138_OBU_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P138_OBU_T_TM_Utils;

/****************************************************************
 ** P139_OBU_T_TM 
 ****************************************************************/
extern int P139_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P139_OBU_T_TM_string(const char *str, char **endptr);
extern int string_to_P139_OBU_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P139_OBU_T_TM_allow_double_conversion();
extern int P139_OBU_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P139_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P139_OBU_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P139_OBU_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P139_OBU_T_TM_Utils;

/****************************************************************
 ** P021_section_enum_T_TM 
 ****************************************************************/
extern int P021_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_section_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_section_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_section_enum_T_TM_allow_double_conversion();
extern int P021_section_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_section_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_section_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_section_enum_T_TM_Utils;

/****************************************************************
 ** P021_sections_array_flat_T_TM 
 ****************************************************************/
extern int P021_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_sections_array_flat_T_TM_allow_double_conversion();
extern int P021_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** P021_OBU_sectionlist_enum_T_TM 
 ****************************************************************/
extern int P021_OBU_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_OBU_sectionlist_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_OBU_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_OBU_sectionlist_enum_T_TM_allow_double_conversion();
extern int P021_OBU_sectionlist_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_OBU_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_OBU_sectionlist_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_OBU_sectionlist_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_OBU_sectionlist_enum_T_TM_Utils;

/****************************************************************
 ** P021_OBU_T_TM 
 ****************************************************************/
extern int P021_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_OBU_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_OBU_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_OBU_T_TM_allow_double_conversion();
extern int P021_OBU_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_OBU_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_OBU_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_OBU_T_TM_Utils;

/****************************************************************
 ** P041_section_enum_T_TM 
 ****************************************************************/
extern int P041_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_section_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_section_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_section_enum_T_TM_allow_double_conversion();
extern int P041_section_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_section_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_section_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_section_enum_T_TM_Utils;

/****************************************************************
 ** P041_sections_array_flat_T_TM 
 ****************************************************************/
extern int P041_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_sections_array_flat_T_TM_allow_double_conversion();
extern int P041_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** P041_OBU_sectionlist_enum_T_TM 
 ****************************************************************/
extern int P041_OBU_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_OBU_sectionlist_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_OBU_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_OBU_sectionlist_enum_T_TM_allow_double_conversion();
extern int P041_OBU_sectionlist_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_OBU_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_OBU_sectionlist_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_OBU_sectionlist_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_OBU_sectionlist_enum_T_TM_Utils;

/****************************************************************
 ** P041_OBU_T_TM 
 ****************************************************************/
extern int P041_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_OBU_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_OBU_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_OBU_T_TM_allow_double_conversion();
extern int P041_OBU_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_OBU_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_OBU_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_OBU_T_TM_Utils;

/****************************************************************
 ** P046_section_enum_T_TM 
 ****************************************************************/
extern int P046_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_section_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_section_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_section_enum_T_TM_allow_double_conversion();
extern int P046_section_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_section_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_section_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_section_enum_T_TM_Utils;

/****************************************************************
 ** P046_sections_array_flat_T_TM 
 ****************************************************************/
extern int P046_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_sections_array_flat_T_TM_allow_double_conversion();
extern int P046_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** P046_OBU_sectionlist_enum_T_TM 
 ****************************************************************/
extern int P046_OBU_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_OBU_sectionlist_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_OBU_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_OBU_sectionlist_enum_T_TM_allow_double_conversion();
extern int P046_OBU_sectionlist_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_OBU_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_OBU_sectionlist_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_OBU_sectionlist_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_OBU_sectionlist_enum_T_TM_Utils;

/****************************************************************
 ** P046_OBU_T_TM 
 ****************************************************************/
extern int P046_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_OBU_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_OBU_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_OBU_T_TM_allow_double_conversion();
extern int P046_OBU_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_OBU_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_OBU_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_OBU_T_TM_Utils;

/****************************************************************
 ** Array04_TM 
 ****************************************************************/
extern int Array04_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Array04_TM_string(const char *str, char **endptr);
extern int string_to_Array04_TM(const char *str, void *pValue, char **endptr);
extern int is_Array04_TM_allow_double_conversion();
extern int Array04_TM_to_double(const void *pValue, double *nValue);
extern int get_Array04_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Array04_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Array04_TM_default_value(void *pValue);
extern SimTypeUtils _Type_Array04_TM_Utils;

/****************************************************************
 ** Array07_TM 
 ****************************************************************/
extern int Array07_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Array07_TM_string(const char *str, char **endptr);
extern int string_to_Array07_TM(const char *str, void *pValue, char **endptr);
extern int is_Array07_TM_allow_double_conversion();
extern int Array07_TM_to_double(const void *pValue, double *nValue);
extern int get_Array07_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Array07_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Array07_TM_default_value(void *pValue);
extern SimTypeUtils _Type_Array07_TM_Utils;

/****************************************************************
 ** P012_section_enum_T_TM 
 ****************************************************************/
extern int P012_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P012_section_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P012_section_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P012_section_enum_T_TM_allow_double_conversion();
extern int P012_section_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P012_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P012_section_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P012_section_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P012_section_enum_T_TM_Utils;

/****************************************************************
 ** P012_sections_array_flat_T_TM 
 ****************************************************************/
extern int P012_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P012_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_P012_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P012_sections_array_flat_T_TM_allow_double_conversion();
extern int P012_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P012_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P012_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P012_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P012_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** P012_OBU_T_TM 
 ****************************************************************/
extern int P012_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P012_OBU_T_TM_string(const char *str, char **endptr);
extern int string_to_P012_OBU_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P012_OBU_T_TM_allow_double_conversion();
extern int P012_OBU_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P012_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P012_OBU_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P012_OBU_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P012_OBU_T_TM_Utils;

/****************************************************************
 ** P021_trackside_int_T_TM 
 ****************************************************************/
extern int P021_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_trackside_int_T_TM_allow_double_conversion();
extern int P021_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_trackside_int_T_TM_Utils;

/****************************************************************
 ** P021_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int P021_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_trackide_sectionlist_T_TM_allow_double_conversion();
extern int P021_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** P021_section_int_T_TM 
 ****************************************************************/
extern int P021_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_section_int_T_TM_allow_double_conversion();
extern int P021_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_section_int_T_TM_Utils;

/****************************************************************
 ** P021_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int P021_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_OBU_sectionlist_array_T_TM_allow_double_conversion();
extern int P021_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** P021_section_array_T_TM 
 ****************************************************************/
extern int P021_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_section_array_T_TM_allow_double_conversion();
extern int P021_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_section_array_T_TM_Utils;

/****************************************************************
 ** P021_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int P021_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_OBU_sectionlist_int_T_TM_allow_double_conversion();
extern int P021_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** nid_packet_meta_TM 
 ****************************************************************/
extern int nid_packet_meta_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_nid_packet_meta_TM_string(const char *str, char **endptr);
extern int string_to_nid_packet_meta_TM(const char *str, void *pValue, char **endptr);
extern int is_nid_packet_meta_TM_allow_double_conversion();
extern int nid_packet_meta_TM_to_double(const void *pValue, double *nValue);
extern int get_nid_packet_meta_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_nid_packet_meta_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_nid_packet_meta_TM_default_value(void *pValue);
extern SimTypeUtils _Type_nid_packet_meta_TM_Utils;

/****************************************************************
 ** P005_trackside_int_T_TM 
 ****************************************************************/
extern int P005_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_trackside_int_T_TM_allow_double_conversion();
extern int P005_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_trackside_int_T_TM_Utils;

/****************************************************************
 ** P005_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int P005_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_trackide_sectionlist_T_TM_allow_double_conversion();
extern int P005_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** P005_section_int_T_TM 
 ****************************************************************/
extern int P005_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_section_int_T_TM_allow_double_conversion();
extern int P005_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_section_int_T_TM_Utils;

/****************************************************************
 ** P005_sections_array_flat_T_TM 
 ****************************************************************/
extern int P005_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_sections_array_flat_T_TM_allow_double_conversion();
extern int P005_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** P005_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int P005_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_OBU_sectionlist_array_T_TM_allow_double_conversion();
extern int P005_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** P005_section_array_T_TM 
 ****************************************************************/
extern int P005_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_section_array_T_TM_allow_double_conversion();
extern int P005_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_section_array_T_TM_Utils;

/****************************************************************
 ** P005_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int P005_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_OBU_sectionlist_int_T_TM_allow_double_conversion();
extern int P005_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** P041_trackside_int_T_TM 
 ****************************************************************/
extern int P041_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_trackside_int_T_TM_allow_double_conversion();
extern int P041_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_trackside_int_T_TM_Utils;

/****************************************************************
 ** P041_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int P041_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_trackide_sectionlist_T_TM_allow_double_conversion();
extern int P041_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** P041_section_int_T_TM 
 ****************************************************************/
extern int P041_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_section_int_T_TM_allow_double_conversion();
extern int P041_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_section_int_T_TM_Utils;

/****************************************************************
 ** P041_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int P041_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_OBU_sectionlist_array_T_TM_allow_double_conversion();
extern int P041_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** P041_section_array_T_TM 
 ****************************************************************/
extern int P041_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_section_array_T_TM_allow_double_conversion();
extern int P041_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_section_array_T_TM_Utils;

/****************************************************************
 ** P041_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int P041_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_OBU_sectionlist_int_T_TM_allow_double_conversion();
extern int P041_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** P065_trackside_int_T_TM 
 ****************************************************************/
extern int P065_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P065_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P065_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P065_trackside_int_T_TM_allow_double_conversion();
extern int P065_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P065_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P065_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P065_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P065_trackside_int_T_TM_Utils;

/****************************************************************
 ** P015_trackside_int_T_TM 
 ****************************************************************/
extern int P015_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_trackside_int_T_TM_allow_double_conversion();
extern int P015_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_trackside_int_T_TM_Utils;

/****************************************************************
 ** P015_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int P015_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_trackide_sectionlist_T_TM_allow_double_conversion();
extern int P015_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** P015_section_int_T_TM 
 ****************************************************************/
extern int P015_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_section_int_T_TM_allow_double_conversion();
extern int P015_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_section_int_T_TM_Utils;

/****************************************************************
 ** P015_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int P015_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_OBU_sectionlist_array_T_TM_allow_double_conversion();
extern int P015_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** P015_section_array_T_TM 
 ****************************************************************/
extern int P015_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_section_array_T_TM_allow_double_conversion();
extern int P015_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_section_array_T_TM_Utils;

/****************************************************************
 ** P015_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int P015_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_OBU_sectionlist_int_T_TM_allow_double_conversion();
extern int P015_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** Radio_TrackTrain_Header_T_TM 
 ****************************************************************/
extern int Radio_TrackTrain_Header_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Radio_TrackTrain_Header_T_TM_string(const char *str, char **endptr);
extern int string_to_Radio_TrackTrain_Header_T_TM(const char *str, void *pValue, char **endptr);
extern int is_Radio_TrackTrain_Header_T_TM_allow_double_conversion();
extern int Radio_TrackTrain_Header_T_TM_to_double(const void *pValue, double *nValue);
extern int get_Radio_TrackTrain_Header_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Radio_TrackTrain_Header_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Radio_TrackTrain_Header_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_Radio_TrackTrain_Header_T_TM_Utils;

/****************************************************************
 ** CompressedRadioMessage_TM 
 ****************************************************************/
extern int CompressedRadioMessage_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CompressedRadioMessage_TM_string(const char *str, char **endptr);
extern int string_to_CompressedRadioMessage_TM(const char *str, void *pValue, char **endptr);
extern int is_CompressedRadioMessage_TM_allow_double_conversion();
extern int CompressedRadioMessage_TM_to_double(const void *pValue, double *nValue);
extern int get_CompressedRadioMessage_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedRadioMessage_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedRadioMessage_TM_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedRadioMessage_TM_Utils;

/****************************************************************
 ** SSP_target_t_TA_MRSP 
 ****************************************************************/
extern int SSP_target_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_target_t_TA_MRSP_string(const char *str, char **endptr);
extern int string_to_SSP_target_t_TA_MRSP(const char *str, void *pValue, char **endptr);
extern int is_SSP_target_t_TA_MRSP_allow_double_conversion();
extern int SSP_target_t_TA_MRSP_to_double(const void *pValue, double *nValue);
extern int get_SSP_target_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_target_t_TA_MRSP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_target_t_TA_MRSP_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_target_t_TA_MRSP_Utils;

/****************************************************************
 ** SSP_t_section_t_TA_MRSP 
 ****************************************************************/
extern int SSP_t_section_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_t_section_t_TA_MRSP_string(const char *str, char **endptr);
extern int string_to_SSP_t_section_t_TA_MRSP(const char *str, void *pValue, char **endptr);
extern int is_SSP_t_section_t_TA_MRSP_allow_double_conversion();
extern int SSP_t_section_t_TA_MRSP_to_double(const void *pValue, double *nValue);
extern int get_SSP_t_section_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_t_section_t_TA_MRSP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_t_section_t_TA_MRSP_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_t_section_t_TA_MRSP_Utils;

/****************************************************************
 ** SSP_t_indexed_trgt_t_TA_MRSP 
 ****************************************************************/
extern int SSP_t_indexed_trgt_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_t_indexed_trgt_t_TA_MRSP_string(const char *str, char **endptr);
extern int string_to_SSP_t_indexed_trgt_t_TA_MRSP(const char *str, void *pValue, char **endptr);
extern int is_SSP_t_indexed_trgt_t_TA_MRSP_allow_double_conversion();
extern int SSP_t_indexed_trgt_t_TA_MRSP_to_double(const void *pValue, double *nValue);
extern int get_SSP_t_indexed_trgt_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_t_indexed_trgt_t_TA_MRSP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_t_indexed_trgt_t_TA_MRSP_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_t_indexed_trgt_t_TA_MRSP_Utils;

/****************************************************************
 ** SSP_t_cat_t_TA_MRSP 
 ****************************************************************/
extern int SSP_t_cat_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_t_cat_t_TA_MRSP_string(const char *str, char **endptr);
extern int string_to_SSP_t_cat_t_TA_MRSP(const char *str, void *pValue, char **endptr);
extern int is_SSP_t_cat_t_TA_MRSP_allow_double_conversion();
extern int SSP_t_cat_t_TA_MRSP_to_double(const void *pValue, double *nValue);
extern int get_SSP_t_cat_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_t_cat_t_TA_MRSP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_t_cat_t_TA_MRSP_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_t_cat_t_TA_MRSP_Utils;

/****************************************************************
 ** SSP_t_matrix_t_TA_MRSP 
 ****************************************************************/
extern int SSP_t_matrix_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_t_matrix_t_TA_MRSP_string(const char *str, char **endptr);
extern int string_to_SSP_t_matrix_t_TA_MRSP(const char *str, void *pValue, char **endptr);
extern int is_SSP_t_matrix_t_TA_MRSP_allow_double_conversion();
extern int SSP_t_matrix_t_TA_MRSP_to_double(const void *pValue, double *nValue);
extern int get_SSP_t_matrix_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_t_matrix_t_TA_MRSP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_t_matrix_t_TA_MRSP_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_t_matrix_t_TA_MRSP_Utils;

/****************************************************************
 ** SSP_t_indexed_targets_list_t_TA_MRSP 
 ****************************************************************/
extern int SSP_t_indexed_targets_list_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_t_indexed_targets_list_t_TA_MRSP_string(const char *str, char **endptr);
extern int string_to_SSP_t_indexed_targets_list_t_TA_MRSP(const char *str, void *pValue, char **endptr);
extern int is_SSP_t_indexed_targets_list_t_TA_MRSP_allow_double_conversion();
extern int SSP_t_indexed_targets_list_t_TA_MRSP_to_double(const void *pValue, double *nValue);
extern int get_SSP_t_indexed_targets_list_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_t_indexed_targets_list_t_TA_MRSP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_t_indexed_targets_list_t_TA_MRSP_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_t_indexed_targets_list_t_TA_MRSP_Utils;

/****************************************************************
 ** SSP_t_indexed_matrix_element_TA_MRSP 
 ****************************************************************/
extern int SSP_t_indexed_matrix_element_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_t_indexed_matrix_element_TA_MRSP_string(const char *str, char **endptr);
extern int string_to_SSP_t_indexed_matrix_element_TA_MRSP(const char *str, void *pValue, char **endptr);
extern int is_SSP_t_indexed_matrix_element_TA_MRSP_allow_double_conversion();
extern int SSP_t_indexed_matrix_element_TA_MRSP_to_double(const void *pValue, double *nValue);
extern int get_SSP_t_indexed_matrix_element_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_t_indexed_matrix_element_TA_MRSP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_t_indexed_matrix_element_TA_MRSP_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_t_indexed_matrix_element_TA_MRSP_Utils;

/****************************************************************
 ** SSP_t_list_t_TA_MRSP 
 ****************************************************************/
extern int SSP_t_list_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_t_list_t_TA_MRSP_string(const char *str, char **endptr);
extern int string_to_SSP_t_list_t_TA_MRSP(const char *str, void *pValue, char **endptr);
extern int is_SSP_t_list_t_TA_MRSP_allow_double_conversion();
extern int SSP_t_list_t_TA_MRSP_to_double(const void *pValue, double *nValue);
extern int get_SSP_t_list_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_t_list_t_TA_MRSP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_t_list_t_TA_MRSP_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_t_list_t_TA_MRSP_Utils;

/****************************************************************
 ** SSP_valid_section_t_TA_MRSP 
 ****************************************************************/
extern int SSP_valid_section_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_valid_section_t_TA_MRSP_string(const char *str, char **endptr);
extern int string_to_SSP_valid_section_t_TA_MRSP(const char *str, void *pValue, char **endptr);
extern int is_SSP_valid_section_t_TA_MRSP_allow_double_conversion();
extern int SSP_valid_section_t_TA_MRSP_to_double(const void *pValue, double *nValue);
extern int get_SSP_valid_section_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_valid_section_t_TA_MRSP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_valid_section_t_TA_MRSP_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_valid_section_t_TA_MRSP_Utils;

/****************************************************************
 ** SSP_section_t_TA_MRSP 
 ****************************************************************/
extern int SSP_section_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_section_t_TA_MRSP_string(const char *str, char **endptr);
extern int string_to_SSP_section_t_TA_MRSP(const char *str, void *pValue, char **endptr);
extern int is_SSP_section_t_TA_MRSP_allow_double_conversion();
extern int SSP_section_t_TA_MRSP_to_double(const void *pValue, double *nValue);
extern int get_SSP_section_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_section_t_TA_MRSP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_section_t_TA_MRSP_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_section_t_TA_MRSP_Utils;

/****************************************************************
 ** SSP_s_section_t_TA_MRSP 
 ****************************************************************/
extern int SSP_s_section_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_s_section_t_TA_MRSP_string(const char *str, char **endptr);
extern int string_to_SSP_s_section_t_TA_MRSP(const char *str, void *pValue, char **endptr);
extern int is_SSP_s_section_t_TA_MRSP_allow_double_conversion();
extern int SSP_s_section_t_TA_MRSP_to_double(const void *pValue, double *nValue);
extern int get_SSP_s_section_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_s_section_t_TA_MRSP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_s_section_t_TA_MRSP_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_s_section_t_TA_MRSP_Utils;

/****************************************************************
 ** SSP_relevant_target_t_TA_MRSP 
 ****************************************************************/
extern int SSP_relevant_target_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_relevant_target_t_TA_MRSP_string(const char *str, char **endptr);
extern int string_to_SSP_relevant_target_t_TA_MRSP(const char *str, void *pValue, char **endptr);
extern int is_SSP_relevant_target_t_TA_MRSP_allow_double_conversion();
extern int SSP_relevant_target_t_TA_MRSP_to_double(const void *pValue, double *nValue);
extern int get_SSP_relevant_target_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_relevant_target_t_TA_MRSP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_relevant_target_t_TA_MRSP_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_relevant_target_t_TA_MRSP_Utils;

/****************************************************************
 ** SSP_Mark_ValidSSPsection_TA_MRSP 
 ****************************************************************/
extern int SSP_Mark_ValidSSPsection_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_Mark_ValidSSPsection_TA_MRSP_string(const char *str, char **endptr);
extern int string_to_SSP_Mark_ValidSSPsection_TA_MRSP(const char *str, void *pValue, char **endptr);
extern int is_SSP_Mark_ValidSSPsection_TA_MRSP_allow_double_conversion();
extern int SSP_Mark_ValidSSPsection_TA_MRSP_to_double(const void *pValue, double *nValue);
extern int get_SSP_Mark_ValidSSPsection_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_Mark_ValidSSPsection_TA_MRSP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_Mark_ValidSSPsection_TA_MRSP_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_Mark_ValidSSPsection_TA_MRSP_Utils;

/****************************************************************
 ** SSP_cat_t_TA_MRSP 
 ****************************************************************/
extern int SSP_cat_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_cat_t_TA_MRSP_string(const char *str, char **endptr);
extern int string_to_SSP_cat_t_TA_MRSP(const char *str, void *pValue, char **endptr);
extern int is_SSP_cat_t_TA_MRSP_allow_double_conversion();
extern int SSP_cat_t_TA_MRSP_to_double(const void *pValue, double *nValue);
extern int get_SSP_cat_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_cat_t_TA_MRSP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_cat_t_TA_MRSP_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_cat_t_TA_MRSP_Utils;

/****************************************************************
 ** SSP_matrix_t_TA_MRSP 
 ****************************************************************/
extern int SSP_matrix_t_TA_MRSP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_matrix_t_TA_MRSP_string(const char *str, char **endptr);
extern int string_to_SSP_matrix_t_TA_MRSP(const char *str, void *pValue, char **endptr);
extern int is_SSP_matrix_t_TA_MRSP_allow_double_conversion();
extern int SSP_matrix_t_TA_MRSP_to_double(const void *pValue, double *nValue);
extern int get_SSP_matrix_t_TA_MRSP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_matrix_t_TA_MRSP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_matrix_t_TA_MRSP_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_matrix_t_TA_MRSP_Utils;

/****************************************************************
 ** L_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int L_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_L_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_L_internal_Type_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int L_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_L_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** T_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int T_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_T_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_T_internal_Type_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int T_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_T_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** V_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int V_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_V_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_V_internal_Type_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int V_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_V_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** odometry_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int odometry_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_odometry_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_odometry_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_odometry_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int odometry_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_odometry_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_odometry_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_odometry_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_odometry_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** OdometryLocations_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int OdometryLocations_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OdometryLocations_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_OdometryLocations_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_OdometryLocations_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int OdometryLocations_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_OdometryLocations_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OdometryLocations_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OdometryLocations_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** OdometrySpeeds_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OdometrySpeeds_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_OdometrySpeeds_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OdometrySpeeds_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OdometrySpeeds_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** A_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int A_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_A_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_A_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_A_internal_Type_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int A_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_A_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_A_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_A_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** odoMotionState_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int odoMotionState_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_odoMotionState_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_odoMotionState_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_odoMotionState_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int odoMotionState_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_odoMotionState_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_odoMotionState_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_odoMotionState_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** odoMotionDirection_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int odoMotionDirection_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_odoMotionDirection_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_odoMotionDirection_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_odoMotionDirection_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int odoMotionDirection_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_odoMotionDirection_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_odoMotionDirection_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_odoMotionDirection_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** LocWithInAcc_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_LocWithInAcc_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_LocWithInAcc_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_LocWithInAcc_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_LocWithInAcc_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_LocWithInAcc_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** Location_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int Location_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Location_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_Location_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Location_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int Location_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Location_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Location_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Location_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Location_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** G_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int G_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_G_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_G_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_G_internal_Type_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int G_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_G_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_G_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_G_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_G_internal_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** BCD_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int BCD_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BCD_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_BCD_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_BCD_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int BCD_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_BCD_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BCD_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BCD_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_BCD_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** MovementAuthority_t_TrackAtlasTypes 
 ****************************************************************/
extern int MovementAuthority_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MovementAuthority_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_MovementAuthority_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_MovementAuthority_t_TrackAtlasTypes_allow_double_conversion();
extern int MovementAuthority_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_MovementAuthority_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MovementAuthority_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MovementAuthority_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_MovementAuthority_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** MA_Level_t_TrackAtlasTypes 
 ****************************************************************/
extern int MA_Level_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MA_Level_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_MA_Level_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_MA_Level_t_TrackAtlasTypes_allow_double_conversion();
extern int MA_Level_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_MA_Level_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MA_Level_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MA_Level_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_MA_Level_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** MovementAuthoritySectionlist_t_TrackAtlasTypes 
 ****************************************************************/
extern int MovementAuthoritySectionlist_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MovementAuthoritySectionlist_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_MovementAuthoritySectionlist_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_MovementAuthoritySectionlist_t_TrackAtlasTypes_allow_double_conversion();
extern int MovementAuthoritySectionlist_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_MovementAuthoritySectionlist_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MovementAuthoritySectionlist_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MovementAuthoritySectionlist_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_MovementAuthoritySectionlist_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** MovementAuthoritySection_t_TrackAtlasTypes 
 ****************************************************************/
extern int MovementAuthoritySection_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MovementAuthoritySection_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_MovementAuthoritySection_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_MovementAuthoritySection_t_TrackAtlasTypes_allow_double_conversion();
extern int MovementAuthoritySection_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_MovementAuthoritySection_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MovementAuthoritySection_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MovementAuthoritySection_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_MovementAuthoritySection_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** DP_or_OL_t_TrackAtlasTypes 
 ****************************************************************/
extern int DP_or_OL_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DP_or_OL_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_DP_or_OL_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_DP_or_OL_t_TrackAtlasTypes_allow_double_conversion();
extern int DP_or_OL_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_DP_or_OL_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DP_or_OL_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DP_or_OL_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_DP_or_OL_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** Endtimer_t_TrackAtlasTypes 
 ****************************************************************/
extern int Endtimer_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Endtimer_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_Endtimer_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_Endtimer_t_TrackAtlasTypes_allow_double_conversion();
extern int Endtimer_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_Endtimer_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Endtimer_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Endtimer_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_Endtimer_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** MRSP_Profile_t_TrackAtlasTypes 
 ****************************************************************/
extern int MRSP_Profile_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MRSP_Profile_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_MRSP_Profile_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_MRSP_Profile_t_TrackAtlasTypes_allow_double_conversion();
extern int MRSP_Profile_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_MRSP_Profile_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MRSP_Profile_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MRSP_Profile_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_MRSP_Profile_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** MRSP_section_t_TrackAtlasTypes 
 ****************************************************************/
extern int MRSP_section_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MRSP_section_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_MRSP_section_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_MRSP_section_t_TrackAtlasTypes_allow_double_conversion();
extern int MRSP_section_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_MRSP_section_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MRSP_section_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MRSP_section_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_MRSP_section_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** StaticSpeedProfile_t_TrackAtlasTypes 
 ****************************************************************/
extern int StaticSpeedProfile_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_StaticSpeedProfile_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_StaticSpeedProfile_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_StaticSpeedProfile_t_TrackAtlasTypes_allow_double_conversion();
extern int StaticSpeedProfile_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_StaticSpeedProfile_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_StaticSpeedProfile_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_StaticSpeedProfile_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_StaticSpeedProfile_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** StaticSpeedSection_t_TrackAtlasTypes 
 ****************************************************************/
extern int StaticSpeedSection_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_StaticSpeedSection_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_StaticSpeedSection_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_StaticSpeedSection_t_TrackAtlasTypes_allow_double_conversion();
extern int StaticSpeedSection_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_StaticSpeedSection_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_StaticSpeedSection_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_StaticSpeedSection_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_StaticSpeedSection_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** Gradient_section_t_TrackAtlasTypes 
 ****************************************************************/
extern int Gradient_section_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Gradient_section_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_Gradient_section_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_Gradient_section_t_TrackAtlasTypes_allow_double_conversion();
extern int Gradient_section_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_Gradient_section_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Gradient_section_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Gradient_section_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_Gradient_section_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** GradientProfile_for_DMI_section_t_TrackAtlasTypes 
 ****************************************************************/
extern int GradientProfile_for_DMI_section_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_GradientProfile_for_DMI_section_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_GradientProfile_for_DMI_section_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_GradientProfile_for_DMI_section_t_TrackAtlasTypes_allow_double_conversion();
extern int GradientProfile_for_DMI_section_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_GradientProfile_for_DMI_section_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_GradientProfile_for_DMI_section_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_GradientProfile_for_DMI_section_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_GradientProfile_for_DMI_section_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** GradientProfile_t_TrackAtlasTypes 
 ****************************************************************/
extern int GradientProfile_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_GradientProfile_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_GradientProfile_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_GradientProfile_t_TrackAtlasTypes_allow_double_conversion();
extern int GradientProfile_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_GradientProfile_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_GradientProfile_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_GradientProfile_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_GradientProfile_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** GradientProfile_for_DMI_t_TrackAtlasTypes 
 ****************************************************************/
extern int GradientProfile_for_DMI_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_GradientProfile_for_DMI_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_GradientProfile_for_DMI_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_GradientProfile_for_DMI_t_TrackAtlasTypes_allow_double_conversion();
extern int GradientProfile_for_DMI_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_GradientProfile_for_DMI_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_GradientProfile_for_DMI_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_GradientProfile_for_DMI_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_GradientProfile_for_DMI_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** DataForSupervision_nextGen_t_TrackAtlasTypes 
 ****************************************************************/
extern int DataForSupervision_nextGen_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DataForSupervision_nextGen_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_DataForSupervision_nextGen_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_DataForSupervision_nextGen_t_TrackAtlasTypes_allow_double_conversion();
extern int DataForSupervision_nextGen_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_DataForSupervision_nextGen_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DataForSupervision_nextGen_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DataForSupervision_nextGen_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_DataForSupervision_nextGen_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** DataForDMI_t_TrackAtlasTypes 
 ****************************************************************/
extern int DataForDMI_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DataForDMI_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_DataForDMI_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_DataForDMI_t_TrackAtlasTypes_allow_double_conversion();
extern int DataForDMI_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_DataForDMI_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DataForDMI_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DataForDMI_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_DataForDMI_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** DataForModeAndLevel_t_TrackAtlasTypes 
 ****************************************************************/
extern int DataForModeAndLevel_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DataForModeAndLevel_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_DataForModeAndLevel_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_DataForModeAndLevel_t_TrackAtlasTypes_allow_double_conversion();
extern int DataForModeAndLevel_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_DataForModeAndLevel_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DataForModeAndLevel_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DataForModeAndLevel_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_DataForModeAndLevel_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** FromTIU_t_TrackAtlasTypes 
 ****************************************************************/
extern int FromTIU_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_FromTIU_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_FromTIU_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_FromTIU_t_TrackAtlasTypes_allow_double_conversion();
extern int FromTIU_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_FromTIU_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_FromTIU_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_FromTIU_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_FromTIU_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** P003V1_OBU_T_TM_baseline2 
 ****************************************************************/
extern int P003V1_OBU_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003V1_OBU_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P003V1_OBU_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P003V1_OBU_T_TM_baseline2_allow_double_conversion();
extern int P003V1_OBU_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P003V1_OBU_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003V1_OBU_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003V1_OBU_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P003V1_OBU_T_TM_baseline2_Utils;

/****************************************************************
 ** P003V1_sectionlist_enum_T_TM_baseline2 
 ****************************************************************/
extern int P003V1_sectionlist_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003V1_sectionlist_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P003V1_sectionlist_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P003V1_sectionlist_enum_T_TM_baseline2_allow_double_conversion();
extern int P003V1_sectionlist_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P003V1_sectionlist_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003V1_sectionlist_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003V1_sectionlist_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P003V1_sectionlist_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P003V1_section_enum_T_TM_baseline2 
 ****************************************************************/
extern int P003V1_section_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003V1_section_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P003V1_section_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P003V1_section_enum_T_TM_baseline2_allow_double_conversion();
extern int P003V1_section_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P003V1_section_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003V1_section_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003V1_section_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P003V1_section_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_OBU_body_enum_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_OBU_body_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_OBU_body_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_OBU_body_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_OBU_body_enum_T_TM_baseline2_allow_double_conversion();
extern int P027V1_OBU_body_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_OBU_body_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_OBU_body_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_OBU_body_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_section_enum_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_section_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_section_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_section_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_section_enum_T_TM_baseline2_allow_double_conversion();
extern int P027V1_section_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_section_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_section_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_section_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_section_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_allow_double_conversion();
extern int P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_section_enum_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_section_enum_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_section_enum_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_section_enum_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_section_enum_qdiff_T_TM_baseline2_allow_double_conversion();
extern int P027V1_section_enum_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_section_enum_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_section_enum_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_section_enum_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_section_enum_qdiff_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_sections_array_flat_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_sections_array_flat_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_sections_array_flat_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_sections_array_flat_qdiff_T_TM_baseline2_allow_double_conversion();
extern int P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_sections_array_flat_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_sections_array_flat_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_sections_array_flat_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_OBU_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_OBU_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_OBU_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_OBU_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_OBU_T_TM_baseline2_allow_double_conversion();
extern int P027V1_OBU_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_OBU_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_OBU_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_OBU_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_OBU_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_OBU_sectionlist_enum_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_OBU_sectionlist_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_OBU_sectionlist_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_OBU_sectionlist_enum_T_TM_baseline2_allow_double_conversion();
extern int P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_OBU_sectionlist_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_OBU_sectionlist_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_OBU_sectionlist_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P003V1_OBU_sectionlist_int_T_TM_baseline2 
 ****************************************************************/
extern int P003V1_OBU_sectionlist_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003V1_OBU_sectionlist_int_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P003V1_OBU_sectionlist_int_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P003V1_OBU_sectionlist_int_T_TM_baseline2_allow_double_conversion();
extern int P003V1_OBU_sectionlist_int_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P003V1_OBU_sectionlist_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003V1_OBU_sectionlist_int_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003V1_OBU_sectionlist_int_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P003V1_OBU_sectionlist_int_T_TM_baseline2_Utils;

/****************************************************************
 ** P003_permanent_data_T_TM_baseline2 
 ****************************************************************/
extern int P003_permanent_data_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003_permanent_data_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P003_permanent_data_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P003_permanent_data_T_TM_baseline2_allow_double_conversion();
extern int P003_permanent_data_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P003_permanent_data_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003_permanent_data_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003_permanent_data_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P003_permanent_data_T_TM_baseline2_Utils;

/****************************************************************
 ** P203V1_OBU_T_TM_baseline2 
 ****************************************************************/
extern int P203V1_OBU_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P203V1_OBU_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P203V1_OBU_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P203V1_OBU_T_TM_baseline2_allow_double_conversion();
extern int P203V1_OBU_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P203V1_OBU_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P203V1_OBU_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P203V1_OBU_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P203V1_OBU_T_TM_baseline2_Utils;

/****************************************************************
 ** P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 
 ****************************************************************/
extern int P203V1_OBU_n_sectionlist_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2_allow_double_conversion();
extern int P203V1_OBU_n_sectionlist_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P203V1_OBU_n_section_enum_T_TM_baseline2 
 ****************************************************************/
extern int P203V1_OBU_n_section_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P203V1_OBU_n_section_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P203V1_OBU_n_section_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P203V1_OBU_n_section_enum_T_TM_baseline2_allow_double_conversion();
extern int P203V1_OBU_n_section_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P203V1_OBU_n_section_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P203V1_OBU_n_section_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P203V1_OBU_n_section_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P203V1_OBU_n_section_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 
 ****************************************************************/
extern int P203V1_OBU_k_sectionlist_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2_allow_double_conversion();
extern int P203V1_OBU_k_sectionlist_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P203V1_OBU_k_section_enum_T_TM_baseline2 
 ****************************************************************/
extern int P203V1_OBU_k_section_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P203V1_OBU_k_section_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P203V1_OBU_k_section_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P203V1_OBU_k_section_enum_T_TM_baseline2_allow_double_conversion();
extern int P203V1_OBU_k_section_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P203V1_OBU_k_section_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P203V1_OBU_k_section_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P203V1_OBU_k_section_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P203V1_OBU_k_section_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 
 ****************************************************************/
extern int P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2_allow_double_conversion();
extern int P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P203V1_OBU_k_m_section_enum_T_TM_baseline2 
 ****************************************************************/
extern int P203V1_OBU_k_m_section_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P203V1_OBU_k_m_section_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P203V1_OBU_k_m_section_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P203V1_OBU_k_m_section_enum_T_TM_baseline2_allow_double_conversion();
extern int P203V1_OBU_k_m_section_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P203V1_OBU_k_m_section_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P203V1_OBU_k_m_section_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P203V1_OBU_k_m_section_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P203V1_OBU_k_m_section_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 
 ****************************************************************/
extern int P203V1_OBU_l_sectionlist_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2_allow_double_conversion();
extern int P203V1_OBU_l_sectionlist_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P203V1_OBU_l_section_enum_T_TM_baseline2 
 ****************************************************************/
extern int P203V1_OBU_l_section_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P203V1_OBU_l_section_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P203V1_OBU_l_section_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P203V1_OBU_l_section_enum_T_TM_baseline2_allow_double_conversion();
extern int P203V1_OBU_l_section_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P203V1_OBU_l_section_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P203V1_OBU_l_section_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P203V1_OBU_l_section_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P203V1_OBU_l_section_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_trackside_int_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_trackside_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_trackside_int_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_trackside_int_T_TM_baseline2_allow_double_conversion();
extern int P027V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_trackside_int_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_trackside_int_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_trackside_int_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_trackside_qdifflist_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_trackside_qdifflist_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_trackside_qdifflist_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_trackside_qdifflist_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_trackside_qdifflist_T_TM_baseline2_allow_double_conversion();
extern int P027V1_trackside_qdifflist_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_trackside_qdifflist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_trackside_qdifflist_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_trackside_qdifflist_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_section_int_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_section_int_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_section_int_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_section_int_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_section_int_qdiff_T_TM_baseline2_allow_double_conversion();
extern int P027V1_section_int_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_section_int_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_section_int_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_section_int_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_section_int_qdiff_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_trackside_sectionlist_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_trackside_sectionlist_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_trackside_sectionlist_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_trackside_sectionlist_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_trackside_sectionlist_T_TM_baseline2_allow_double_conversion();
extern int P027V1_trackside_sectionlist_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_trackside_sectionlist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_trackside_sectionlist_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_trackside_sectionlist_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_trackside_sectionlist_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_section_int_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_section_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_section_int_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_section_int_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_section_int_T_TM_baseline2_allow_double_conversion();
extern int P027V1_section_int_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_section_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_section_int_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_section_int_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_section_int_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_OBU_sectionlist_int_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_OBU_sectionlist_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_OBU_sectionlist_int_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_OBU_sectionlist_int_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_OBU_sectionlist_int_T_TM_baseline2_allow_double_conversion();
extern int P027V1_OBU_sectionlist_int_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_OBU_sectionlist_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_OBU_sectionlist_int_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_OBU_sectionlist_int_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_allow_double_conversion();
extern int P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_section_array_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_section_array_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_section_array_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_section_array_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_section_array_qdiff_T_TM_baseline2_allow_double_conversion();
extern int P027V1_section_array_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_section_array_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_section_array_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_section_array_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_section_array_qdiff_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_allow_double_conversion();
extern int P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_Utils;

/****************************************************************
 ** P003V1_trackside_int_T_TM_baseline2 
 ****************************************************************/
extern int P003V1_trackside_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003V1_trackside_int_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P003V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P003V1_trackside_int_T_TM_baseline2_allow_double_conversion();
extern int P003V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P003V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003V1_trackside_int_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003V1_trackside_int_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P003V1_trackside_int_T_TM_baseline2_Utils;

/****************************************************************
 ** P003V1_trackide_sectionlist_T_TM_baseline2 
 ****************************************************************/
extern int P003V1_trackide_sectionlist_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003V1_trackide_sectionlist_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P003V1_trackide_sectionlist_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P003V1_trackide_sectionlist_T_TM_baseline2_allow_double_conversion();
extern int P003V1_trackide_sectionlist_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P003V1_trackide_sectionlist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003V1_trackide_sectionlist_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003V1_trackide_sectionlist_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils;

/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/
extern int MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_MetadataElement_T_Common_Types_Pkg_allow_double_conversion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MetadataElement_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_MetadataElement_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** Metadata_T_Common_Types_Pkg 
 ****************************************************************/
extern int Metadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Metadata_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Metadata_T_Common_Types_Pkg_allow_double_conversion();
extern int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Metadata_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Metadata_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** CompressedPacketData_T_Common_Types_Pkg 
 ****************************************************************/
extern int CompressedPacketData_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CompressedPacketData_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_CompressedPacketData_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_CompressedPacketData_T_Common_Types_Pkg_allow_double_conversion();
extern int CompressedPacketData_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_CompressedPacketData_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedPacketData_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedPacketData_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedPacketData_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/
extern int CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_CompressedPackets_T_Common_Types_Pkg_allow_double_conversion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedPackets_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedPackets_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** ReceivedMessage_T_Common_Types_Pkg 
 ****************************************************************/
extern int ReceivedMessage_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_ReceivedMessage_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_ReceivedMessage_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_ReceivedMessage_T_Common_Types_Pkg_allow_double_conversion();
extern int ReceivedMessage_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_ReceivedMessage_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_ReceivedMessage_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_ReceivedMessage_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_ReceivedMessage_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** MsgSource_T_Common_Types_Pkg 
 ****************************************************************/
extern int MsgSource_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MsgSource_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_MsgSource_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_MsgSource_T_Common_Types_Pkg_allow_double_conversion();
extern int MsgSource_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_MsgSource_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MsgSource_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MsgSource_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_MsgSource_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** RadioMetadata_T_Common_Types_Pkg 
 ****************************************************************/
extern int RadioMetadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_RadioMetadata_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_RadioMetadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_RadioMetadata_T_Common_Types_Pkg_allow_double_conversion();
extern int RadioMetadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_RadioMetadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_RadioMetadata_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_RadioMetadata_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_RadioMetadata_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** RBC_Id_T_Common_Types_Pkg 
 ****************************************************************/
extern int RBC_Id_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_RBC_Id_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_RBC_Id_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_RBC_Id_T_Common_Types_Pkg_allow_double_conversion();
extern int RBC_Id_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_RBC_Id_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_RBC_Id_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_RBC_Id_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_RBC_Id_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** outPackets_T_Common_Types_Pkg 
 ****************************************************************/
extern int outPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_outPackets_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_outPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_outPackets_T_Common_Types_Pkg_allow_double_conversion();
extern int outPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_outPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_outPackets_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_outPackets_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_outPackets_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** BG_Header_T_BG_Types_Pkg 
 ****************************************************************/
extern int BG_Header_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BG_Header_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_BG_Header_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_BG_Header_T_BG_Types_Pkg_allow_double_conversion();
extern int BG_Header_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_BG_Header_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BG_Header_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BG_Header_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_BG_Header_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** LinkedBG_T_BG_Types_Pkg 
 ****************************************************************/
extern int LinkedBG_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_LinkedBG_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_LinkedBG_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_LinkedBG_T_BG_Types_Pkg_allow_double_conversion();
extern int LinkedBG_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_LinkedBG_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_LinkedBG_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_LinkedBG_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_LinkedBG_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** passedBG_T_BG_Types_Pkg 
 ****************************************************************/
extern int passedBG_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_passedBG_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_passedBG_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_passedBG_T_BG_Types_Pkg_allow_double_conversion();
extern int passedBG_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_passedBG_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_passedBG_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_passedBG_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_passedBG_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** LinkedBGs_T_BG_Types_Pkg 
 ****************************************************************/
extern int LinkedBGs_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_LinkedBGs_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_LinkedBGs_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_LinkedBGs_T_BG_Types_Pkg_allow_double_conversion();
extern int LinkedBGs_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_LinkedBGs_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_LinkedBGs_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_LinkedBGs_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_LinkedBGs_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** Radio_TrackTrain_Header_T_Radio_Types_Pkg 
 ****************************************************************/
extern int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Radio_TrackTrain_Header_T_Radio_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_allow_double_conversion();
extern int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Radio_TrackTrain_Header_T_Radio_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Radio_TrackTrain_Header_T_Radio_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils;

/****************************************************************
 ** Radio_TrainTrack_Header_T_Radio_Types_Pkg 
 ****************************************************************/
extern int Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Radio_TrainTrack_Header_T_Radio_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Radio_TrainTrack_Header_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Radio_TrainTrack_Header_T_Radio_Types_Pkg_allow_double_conversion();
extern int Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Radio_TrainTrack_Header_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Radio_TrainTrack_Header_T_Radio_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Radio_TrainTrack_Header_T_Radio_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Radio_TrainTrack_Header_T_Radio_Types_Pkg_Utils;

/****************************************************************
 ** Radio_TrainTrack_Message_T_Radio_Types_Pkg 
 ****************************************************************/
extern int Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Radio_TrainTrack_Message_T_Radio_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Radio_TrainTrack_Message_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Radio_TrainTrack_Message_T_Radio_Types_Pkg_allow_double_conversion();
extern int Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Radio_TrainTrack_Message_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Radio_TrainTrack_Message_T_Radio_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Radio_TrainTrack_Message_T_Radio_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils;

/****************************************************************
 ** T_Mode_Level_Level_And_Mode_Types_Pkg 
 ****************************************************************/
extern int T_Mode_Level_Level_And_Mode_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_Mode_Level_Level_And_Mode_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_T_Mode_Level_Level_And_Mode_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_T_Mode_Level_Level_And_Mode_Types_Pkg_allow_double_conversion();
extern int T_Mode_Level_Level_And_Mode_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_T_Mode_Level_Level_And_Mode_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_Mode_Level_Level_And_Mode_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_Mode_Level_Level_And_Mode_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_T_Mode_Level_Level_And_Mode_Types_Pkg_Utils;

/****************************************************************
 ** T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg 
 ****************************************************************/
extern int T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg_allow_double_conversion();
extern int T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg_Utils;

/****************************************************************
 ** T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg 
 ****************************************************************/
extern int T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg_allow_double_conversion();
extern int T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg_Utils;

/****************************************************************
 ** trainPosition_T_TrainPosition_Types_Pck 
 ****************************************************************/
extern int trainPosition_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_trainPosition_T_TrainPosition_Types_Pck_string(const char *str, char **endptr);
extern int string_to_trainPosition_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr);
extern int is_trainPosition_T_TrainPosition_Types_Pck_allow_double_conversion();
extern int trainPosition_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nValue);
extern int get_trainPosition_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_trainPosition_T_TrainPosition_Types_Pck(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_trainPosition_T_TrainPosition_Types_Pck_default_value(void *pValue);
extern SimTypeUtils _Type_trainPosition_T_TrainPosition_Types_Pck_Utils;

/****************************************************************
 ** positionedBG_T_TrainPosition_Types_Pck 
 ****************************************************************/
extern int positionedBG_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_positionedBG_T_TrainPosition_Types_Pck_string(const char *str, char **endptr);
extern int string_to_positionedBG_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr);
extern int is_positionedBG_T_TrainPosition_Types_Pck_allow_double_conversion();
extern int positionedBG_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nValue);
extern int get_positionedBG_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_positionedBG_T_TrainPosition_Types_Pck(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_positionedBG_T_TrainPosition_Types_Pck_default_value(void *pValue);
extern SimTypeUtils _Type_positionedBG_T_TrainPosition_Types_Pck_Utils;

/****************************************************************
 ** infoFromLinking_T_TrainPosition_Types_Pck 
 ****************************************************************/
extern int infoFromLinking_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_infoFromLinking_T_TrainPosition_Types_Pck_string(const char *str, char **endptr);
extern int string_to_infoFromLinking_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr);
extern int is_infoFromLinking_T_TrainPosition_Types_Pck_allow_double_conversion();
extern int infoFromLinking_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nValue);
extern int get_infoFromLinking_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_infoFromLinking_T_TrainPosition_Types_Pck(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_infoFromLinking_T_TrainPosition_Types_Pck_default_value(void *pValue);
extern SimTypeUtils _Type_infoFromLinking_T_TrainPosition_Types_Pck_Utils;

/****************************************************************
 ** trainProperties_T_TrainPosition_Types_Pck 
 ****************************************************************/
extern int trainProperties_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_trainProperties_T_TrainPosition_Types_Pck_string(const char *str, char **endptr);
extern int string_to_trainProperties_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr);
extern int is_trainProperties_T_TrainPosition_Types_Pck_allow_double_conversion();
extern int trainProperties_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nValue);
extern int get_trainProperties_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_trainProperties_T_TrainPosition_Types_Pck(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_trainProperties_T_TrainPosition_Types_Pck_default_value(void *pValue);
extern SimTypeUtils _Type_trainProperties_T_TrainPosition_Types_Pck_Utils;

/****************************************************************
 ** Driver2MAR_T_MA_Request 
 ****************************************************************/
extern int Driver2MAR_T_MA_Request_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Driver2MAR_T_MA_Request_string(const char *str, char **endptr);
extern int string_to_Driver2MAR_T_MA_Request(const char *str, void *pValue, char **endptr);
extern int is_Driver2MAR_T_MA_Request_allow_double_conversion();
extern int Driver2MAR_T_MA_Request_to_double(const void *pValue, double *nValue);
extern int get_Driver2MAR_T_MA_Request_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Driver2MAR_T_MA_Request(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Driver2MAR_T_MA_Request_default_value(void *pValue);
extern SimTypeUtils _Type_Driver2MAR_T_MA_Request_Utils;

/****************************************************************
 ** P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_allow_double_conversion();
extern int P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P137_StopIfInStaffResponsible_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P137_StopIfInStaffResponsible_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg_allow_double_conversion();
extern int P137_StopIfInStaffResponsible_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P138_ReversingAreaInformation_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P138_ReversingAreaInformation_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P138_ReversingAreaInformation_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P138_ReversingAreaInformation_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P138_ReversingAreaInformation_T_Packet_Types_Pkg_allow_double_conversion();
extern int P138_ReversingAreaInformation_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P138_ReversingAreaInformation_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P138_ReversingAreaInformation_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P138_ReversingAreaInformation_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P138_ReversingAreaInformation_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P139_ReversingSupervisionInformation_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P139_ReversingSupervisionInformation_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg_allow_double_conversion();
extern int P139_ReversingSupervisionInformation_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P15_Level23MovementAuthorities_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P15_Level23MovementAuthorities_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P15_Level23MovementAuthorities_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P15_Level23MovementAuthorities_T_Packet_Types_Pkg_allow_double_conversion();
extern int P15_Level23MovementAuthorities_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P15_Level23MovementAuthorities_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P15_Level23MovementAuthorities_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P15_Level23MovementAuthorities_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P15_Level23MovementAuthority_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P15_Level23MovementAuthority_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P15_Level23MovementAuthority_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P15_Level23MovementAuthority_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P15_Level23MovementAuthority_T_Packet_Types_Pkg_allow_double_conversion();
extern int P15_Level23MovementAuthority_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P15_Level23MovementAuthority_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P15_Level23MovementAuthority_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P15_Level23MovementAuthority_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P15_Level23MovementAuthority_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P21_GradientProfiles_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P21_GradientProfiles_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P21_GradientProfiles_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P21_GradientProfiles_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P21_GradientProfiles_T_Packet_Types_Pkg_allow_double_conversion();
extern int P21_GradientProfiles_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P21_GradientProfiles_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P21_GradientProfiles_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P21_GradientProfiles_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P21_GradientProfiles_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P21_GradientProfile_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P21_GradientProfile_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P21_GradientProfile_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P21_GradientProfile_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P21_GradientProfile_T_Packet_Types_Pkg_allow_double_conversion();
extern int P21_GradientProfile_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P21_GradientProfile_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P21_GradientProfile_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P21_GradientProfile_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P21_GradientProfile_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg_allow_double_conversion();
extern int P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** DiffArray_T_Packet_Types_Pkg 
 ****************************************************************/
extern int DiffArray_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DiffArray_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DiffArray_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DiffArray_T_Packet_Types_Pkg_allow_double_conversion();
extern int DiffArray_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DiffArray_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DiffArray_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DiffArray_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DiffArray_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** Diff_T_Packet_Types_Pkg 
 ****************************************************************/
extern int Diff_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Diff_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Diff_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Diff_T_Packet_Types_Pkg_allow_double_conversion();
extern int Diff_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Diff_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Diff_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Diff_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Diff_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** SSPArray_T_Packet_Types_Pkg 
 ****************************************************************/
extern int SSPArray_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSPArray_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_SSPArray_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_SSPArray_T_Packet_Types_Pkg_allow_double_conversion();
extern int SSPArray_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_SSPArray_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSPArray_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSPArray_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_SSPArray_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** SSP_T_Packet_Types_Pkg 
 ****************************************************************/
extern int SSP_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_SSP_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_SSP_T_Packet_Types_Pkg_allow_double_conversion();
extern int SSP_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_SSP_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P41_LevelTransistionOrders_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P41_LevelTransistionOrders_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P41_LevelTransistionOrders_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P41_LevelTransistionOrders_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P41_LevelTransistionOrders_T_Packet_Types_Pkg_allow_double_conversion();
extern int P41_LevelTransistionOrders_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P41_LevelTransistionOrders_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P41_LevelTransistionOrders_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P41_LevelTransistionOrders_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P41_LevelTransistionOrders_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P41_LevelTransitionOrder_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P41_LevelTransitionOrder_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P41_LevelTransitionOrder_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P41_LevelTransitionOrder_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P41_LevelTransitionOrder_T_Packet_Types_Pkg_allow_double_conversion();
extern int P41_LevelTransitionOrder_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P41_LevelTransitionOrder_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P41_LevelTransitionOrder_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P41_LevelTransitionOrder_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P41_LevelTransitionOrder_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg_allow_double_conversion();
extern int P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg_allow_double_conversion();
extern int P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P80_ModeProfiles_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P80_ModeProfiles_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P80_ModeProfiles_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P80_ModeProfiles_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P80_ModeProfiles_T_Packet_Types_Pkg_allow_double_conversion();
extern int P80_ModeProfiles_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P80_ModeProfiles_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P80_ModeProfiles_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P80_ModeProfiles_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P80_ModeProfiles_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** P80_ModeProfile_T_Packet_Types_Pkg 
 ****************************************************************/
extern int P80_ModeProfile_T_Packet_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P80_ModeProfile_T_Packet_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_P80_ModeProfile_T_Packet_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_P80_ModeProfile_T_Packet_Types_Pkg_allow_double_conversion();
extern int P80_ModeProfile_T_Packet_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_P80_ModeProfile_T_Packet_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P80_ModeProfile_T_Packet_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P80_ModeProfile_T_Packet_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_P80_ModeProfile_T_Packet_Types_Pkg_Utils;

/****************************************************************
 ** PT0_PositionReport_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_PT0_PositionReport_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_PT0_PositionReport_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_PT0_PositionReport_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_PT0_PositionReport_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_PT0_PositionReport_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_PT0_PositionReport_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_PT0_PositionReport_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** aNID_RADIO_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int aNID_RADIO_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_aNID_RADIO_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_aNID_RADIO_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_aNID_RADIO_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int aNID_RADIO_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_aNID_RADIO_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_aNID_RADIO_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_aNID_RADIO_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_aNID_RADIO_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** sNID_RADIO_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int sNID_RADIO_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_sNID_RADIO_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_sNID_RADIO_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_sNID_RADIO_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int sNID_RADIO_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_sNID_RADIO_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_sNID_RADIO_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_sNID_RADIO_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_sNID_RADIO_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** telephoneNumber_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int telephoneNumber_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_telephoneNumber_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_telephoneNumber_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_telephoneNumber_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int telephoneNumber_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_telephoneNumber_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_telephoneNumber_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_telephoneNumber_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_telephoneNumber_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** PT4_ErrorReporting_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** PT5_TrainRunningNumber_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** aTractionIdentity_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int aTractionIdentity_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_aTractionIdentity_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_aTractionIdentity_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_aTractionIdentity_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int aTractionIdentity_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_aTractionIdentity_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_aTractionIdentity_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_aTractionIdentity_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_aTractionIdentity_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** sTractionIdentity_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int sTractionIdentity_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_sTractionIdentity_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_sTractionIdentity_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_sTractionIdentity_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int sTractionIdentity_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_sTractionIdentity_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_sTractionIdentity_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_sTractionIdentity_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_sTractionIdentity_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** aNID_NTC_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int aNID_NTC_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_aNID_NTC_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_aNID_NTC_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_aNID_NTC_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int aNID_NTC_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_aNID_NTC_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_aNID_NTC_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_aNID_NTC_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_aNID_NTC_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** Position_Report_TrainToTrack 
 ****************************************************************/
extern int Position_Report_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Position_Report_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_Position_Report_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_Position_Report_TrainToTrack_allow_double_conversion();
extern int Position_Report_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_Position_Report_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Position_Report_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Position_Report_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_Position_Report_TrainToTrack_Utils;

/****************************************************************
 ** Position_Report_based_on_two_balise_groups_TrainToTrack 
 ****************************************************************/
extern int Position_Report_based_on_two_balise_groups_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Position_Report_based_on_two_balise_groups_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_Position_Report_based_on_two_balise_groups_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_Position_Report_based_on_two_balise_groups_TrainToTrack_allow_double_conversion();
extern int Position_Report_based_on_two_balise_groups_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_Position_Report_based_on_two_balise_groups_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Position_Report_based_on_two_balise_groups_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Position_Report_based_on_two_balise_groups_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_Position_Report_based_on_two_balise_groups_TrainToTrack_Utils;

/****************************************************************
 ** M_003_int_T_TM_radio_messages 
 ****************************************************************/
extern int M_003_int_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_003_int_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_003_int_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_003_int_T_TM_radio_messages_allow_double_conversion();
extern int M_003_int_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_003_int_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_003_int_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_003_int_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_003_int_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_TrackTrain_Radio_T_TM_radio_messages 
 ****************************************************************/
extern int M_TrackTrain_Radio_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_TrackTrain_Radio_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_TrackTrain_Radio_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_TrackTrain_Radio_T_TM_radio_messages_allow_double_conversion();
extern int M_TrackTrain_Radio_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_TrackTrain_Radio_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_TrackTrain_Radio_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_TrackTrain_Radio_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_027_T_TM_radio_messages 
 ****************************************************************/
extern int M_027_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_027_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_027_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_027_T_TM_radio_messages_allow_double_conversion();
extern int M_027_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_027_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_027_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_027_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_027_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_024_T_TM_radio_messages 
 ****************************************************************/
extern int M_024_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_024_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_024_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_024_T_TM_radio_messages_allow_double_conversion();
extern int M_024_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_024_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_024_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_024_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_024_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_018_T_TM_radio_messages 
 ****************************************************************/
extern int M_018_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_018_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_018_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_018_T_TM_radio_messages_allow_double_conversion();
extern int M_018_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_018_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_018_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_018_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_018_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_016_T_TM_radio_messages 
 ****************************************************************/
extern int M_016_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_016_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_016_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_016_T_TM_radio_messages_allow_double_conversion();
extern int M_016_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_016_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_016_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_016_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_016_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_015_T_TM_radio_messages 
 ****************************************************************/
extern int M_015_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_015_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_015_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_015_T_TM_radio_messages_allow_double_conversion();
extern int M_015_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_015_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_015_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_015_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_015_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_009_T_TM_radio_messages 
 ****************************************************************/
extern int M_009_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_009_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_009_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_009_T_TM_radio_messages_allow_double_conversion();
extern int M_009_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_009_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_009_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_009_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_009_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_008_T_TM_radio_messages 
 ****************************************************************/
extern int M_008_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_008_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_008_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_008_T_TM_radio_messages_allow_double_conversion();
extern int M_008_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_008_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_008_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_008_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_008_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_006_T_TM_radio_messages 
 ****************************************************************/
extern int M_006_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_006_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_006_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_006_T_TM_radio_messages_allow_double_conversion();
extern int M_006_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_006_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_006_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_006_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_006_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_003_T_TM_radio_messages 
 ****************************************************************/
extern int M_003_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_003_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_003_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_003_T_TM_radio_messages_allow_double_conversion();
extern int M_003_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_003_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_003_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_003_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_003_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_002_T_TM_radio_messages 
 ****************************************************************/
extern int M_002_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_002_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_002_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_002_T_TM_radio_messages_allow_double_conversion();
extern int M_002_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_002_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_002_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_002_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_002_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_045_T_TM_radio_messages 
 ****************************************************************/
extern int M_045_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_045_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_045_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_045_T_TM_radio_messages_allow_double_conversion();
extern int M_045_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_045_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_045_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_045_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_045_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_043_T_TM_radio_messages 
 ****************************************************************/
extern int M_043_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_043_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_043_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_043_T_TM_radio_messages_allow_double_conversion();
extern int M_043_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_043_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_043_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_043_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_043_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_041_T_TM_radio_messages 
 ****************************************************************/
extern int M_041_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_041_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_041_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_041_T_TM_radio_messages_allow_double_conversion();
extern int M_041_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_041_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_041_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_041_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_041_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_040_T_TM_radio_messages 
 ****************************************************************/
extern int M_040_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_040_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_040_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_040_T_TM_radio_messages_allow_double_conversion();
extern int M_040_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_040_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_040_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_040_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_040_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_039_T_TM_radio_messages 
 ****************************************************************/
extern int M_039_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_039_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_039_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_039_T_TM_radio_messages_allow_double_conversion();
extern int M_039_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_039_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_039_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_039_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_039_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_038_T_TM_radio_messages 
 ****************************************************************/
extern int M_038_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_038_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_038_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_038_T_TM_radio_messages_allow_double_conversion();
extern int M_038_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_038_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_038_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_038_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_038_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_034_T_TM_radio_messages 
 ****************************************************************/
extern int M_034_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_034_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_034_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_034_T_TM_radio_messages_allow_double_conversion();
extern int M_034_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_034_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_034_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_034_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_034_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_033_T_TM_radio_messages 
 ****************************************************************/
extern int M_033_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_033_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_033_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_033_T_TM_radio_messages_allow_double_conversion();
extern int M_033_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_033_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_033_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_033_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_033_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_032_T_TM_radio_messages 
 ****************************************************************/
extern int M_032_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_032_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_032_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_032_T_TM_radio_messages_allow_double_conversion();
extern int M_032_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_032_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_032_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_032_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_032_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_028_T_TM_radio_messages 
 ****************************************************************/
extern int M_028_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_028_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_028_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_028_T_TM_radio_messages_allow_double_conversion();
extern int M_028_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_028_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_028_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_028_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_028_T_TM_radio_messages_Utils;

/****************************************************************
 ** NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store 
 ****************************************************************/
extern int NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store_string(const char *str, char **endptr);
extern int string_to_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(const char *str, void *pValue, char **endptr);
extern int is_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store_allow_double_conversion();
extern int NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store_to_double(const void *pValue, double *nValue);
extern int get_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store_default_value(void *pValue);
extern SimTypeUtils _Type_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store_Utils;

/****************************************************************
 ** NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store 
 ****************************************************************/
extern int NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store_string(const char *str, char **endptr);
extern int string_to_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(const char *str, void *pValue, char **endptr);
extern int is_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store_allow_double_conversion();
extern int NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store_to_double(const void *pValue, double *nValue);
extern int get_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store_default_value(void *pValue);
extern SimTypeUtils _Type_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store_Utils;

/****************************************************************
 ** NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store 
 ****************************************************************/
extern int NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store_string(const char *str, char **endptr);
extern int string_to_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(const char *str, void *pValue, char **endptr);
extern int is_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store_allow_double_conversion();
extern int NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store_to_double(const void *pValue, double *nValue);
extern int get_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store_default_value(void *pValue);
extern SimTypeUtils _Type_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store_Utils;

/****************************************************************
 ** R_data_internal_T_InfraLib 
 ****************************************************************/
extern int R_data_internal_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_R_data_internal_T_InfraLib_string(const char *str, char **endptr);
extern int string_to_R_data_internal_T_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_R_data_internal_T_InfraLib_allow_double_conversion();
extern int R_data_internal_T_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_R_data_internal_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_R_data_internal_T_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_R_data_internal_T_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_R_data_internal_T_InfraLib_Utils;


#endif /*TESTTRACKATLAS_TYPES_CONVERSION */
