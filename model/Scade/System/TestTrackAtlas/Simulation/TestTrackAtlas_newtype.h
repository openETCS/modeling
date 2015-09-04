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
 ** struct__22641 
 ****************************************************************/
extern int struct__22641_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22641_string(const char *str, char **endptr);
extern int string_to_struct__22641(const char *str, void *pValue, char **endptr);
extern int is_struct__22641_allow_double_conversion();
extern int struct__22641_to_double(const void *pValue, double *nValue);
extern int get_struct__22641_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22641(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22641_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22641_Utils;

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
 ** struct__22659 
 ****************************************************************/
extern int struct__22659_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22659_string(const char *str, char **endptr);
extern int string_to_struct__22659(const char *str, void *pValue, char **endptr);
extern int is_struct__22659_allow_double_conversion();
extern int struct__22659_to_double(const void *pValue, double *nValue);
extern int get_struct__22659_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22659(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22659_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22659_Utils;

/****************************************************************
 ** array__22667 
 ****************************************************************/
extern int array__22667_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22667_string(const char *str, char **endptr);
extern int string_to_array__22667(const char *str, void *pValue, char **endptr);
extern int is_array__22667_allow_double_conversion();
extern int array__22667_to_double(const void *pValue, double *nValue);
extern int get_array__22667_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22667(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22667_default_value(void *pValue);
extern SimTypeUtils _Type_array__22667_Utils;

/****************************************************************
 ** struct__22670 
 ****************************************************************/
extern int struct__22670_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22670_string(const char *str, char **endptr);
extern int string_to_struct__22670(const char *str, void *pValue, char **endptr);
extern int is_struct__22670_allow_double_conversion();
extern int struct__22670_to_double(const void *pValue, double *nValue);
extern int get_struct__22670_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22670(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22670_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22670_Utils;

/****************************************************************
 ** struct__22675 
 ****************************************************************/
extern int struct__22675_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22675_string(const char *str, char **endptr);
extern int string_to_struct__22675(const char *str, void *pValue, char **endptr);
extern int is_struct__22675_allow_double_conversion();
extern int struct__22675_to_double(const void *pValue, double *nValue);
extern int get_struct__22675_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22675(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22675_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22675_Utils;

/****************************************************************
 ** struct__22685 
 ****************************************************************/
extern int struct__22685_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22685_string(const char *str, char **endptr);
extern int string_to_struct__22685(const char *str, void *pValue, char **endptr);
extern int is_struct__22685_allow_double_conversion();
extern int struct__22685_to_double(const void *pValue, double *nValue);
extern int get_struct__22685_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22685(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22685_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22685_Utils;

/****************************************************************
 ** struct__22703 
 ****************************************************************/
extern int struct__22703_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22703_string(const char *str, char **endptr);
extern int string_to_struct__22703(const char *str, void *pValue, char **endptr);
extern int is_struct__22703_allow_double_conversion();
extern int struct__22703_to_double(const void *pValue, double *nValue);
extern int get_struct__22703_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22703(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22703_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22703_Utils;

/****************************************************************
 ** struct__22713 
 ****************************************************************/
extern int struct__22713_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22713_string(const char *str, char **endptr);
extern int string_to_struct__22713(const char *str, void *pValue, char **endptr);
extern int is_struct__22713_allow_double_conversion();
extern int struct__22713_to_double(const void *pValue, double *nValue);
extern int get_struct__22713_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22713(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22713_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22713_Utils;

/****************************************************************
 ** struct__22724 
 ****************************************************************/
extern int struct__22724_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22724_string(const char *str, char **endptr);
extern int string_to_struct__22724(const char *str, void *pValue, char **endptr);
extern int is_struct__22724_allow_double_conversion();
extern int struct__22724_to_double(const void *pValue, double *nValue);
extern int get_struct__22724_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22724(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22724_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22724_Utils;

/****************************************************************
 ** struct__22738 
 ****************************************************************/
extern int struct__22738_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22738_string(const char *str, char **endptr);
extern int string_to_struct__22738(const char *str, void *pValue, char **endptr);
extern int is_struct__22738_allow_double_conversion();
extern int struct__22738_to_double(const void *pValue, double *nValue);
extern int get_struct__22738_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22738(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22738_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22738_Utils;

/****************************************************************
 ** struct__22747 
 ****************************************************************/
extern int struct__22747_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22747_string(const char *str, char **endptr);
extern int string_to_struct__22747(const char *str, void *pValue, char **endptr);
extern int is_struct__22747_allow_double_conversion();
extern int struct__22747_to_double(const void *pValue, double *nValue);
extern int get_struct__22747_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22747(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22747_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22747_Utils;

/****************************************************************
 ** struct__22757 
 ****************************************************************/
extern int struct__22757_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22757_string(const char *str, char **endptr);
extern int string_to_struct__22757(const char *str, void *pValue, char **endptr);
extern int is_struct__22757_allow_double_conversion();
extern int struct__22757_to_double(const void *pValue, double *nValue);
extern int get_struct__22757_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22757(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22757_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22757_Utils;

/****************************************************************
 ** struct__22768 
 ****************************************************************/
extern int struct__22768_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22768_string(const char *str, char **endptr);
extern int string_to_struct__22768(const char *str, void *pValue, char **endptr);
extern int is_struct__22768_allow_double_conversion();
extern int struct__22768_to_double(const void *pValue, double *nValue);
extern int get_struct__22768_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22768(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22768_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22768_Utils;

/****************************************************************
 ** struct__22778 
 ****************************************************************/
extern int struct__22778_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22778_string(const char *str, char **endptr);
extern int string_to_struct__22778(const char *str, void *pValue, char **endptr);
extern int is_struct__22778_allow_double_conversion();
extern int struct__22778_to_double(const void *pValue, double *nValue);
extern int get_struct__22778_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22778(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22778_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22778_Utils;

/****************************************************************
 ** struct__22792 
 ****************************************************************/
extern int struct__22792_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22792_string(const char *str, char **endptr);
extern int string_to_struct__22792(const char *str, void *pValue, char **endptr);
extern int is_struct__22792_allow_double_conversion();
extern int struct__22792_to_double(const void *pValue, double *nValue);
extern int get_struct__22792_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22792(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22792_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22792_Utils;

/****************************************************************
 ** struct__22802 
 ****************************************************************/
extern int struct__22802_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22802_string(const char *str, char **endptr);
extern int string_to_struct__22802(const char *str, void *pValue, char **endptr);
extern int is_struct__22802_allow_double_conversion();
extern int struct__22802_to_double(const void *pValue, double *nValue);
extern int get_struct__22802_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22802(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22802_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22802_Utils;

/****************************************************************
 ** struct__22809 
 ****************************************************************/
extern int struct__22809_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22809_string(const char *str, char **endptr);
extern int string_to_struct__22809(const char *str, void *pValue, char **endptr);
extern int is_struct__22809_allow_double_conversion();
extern int struct__22809_to_double(const void *pValue, double *nValue);
extern int get_struct__22809_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22809(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22809_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22809_Utils;

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
 ** struct__22821 
 ****************************************************************/
extern int struct__22821_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22821_string(const char *str, char **endptr);
extern int string_to_struct__22821(const char *str, void *pValue, char **endptr);
extern int is_struct__22821_allow_double_conversion();
extern int struct__22821_to_double(const void *pValue, double *nValue);
extern int get_struct__22821_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22821(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22821_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22821_Utils;

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
 ** array__22834 
 ****************************************************************/
extern int array__22834_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22834_string(const char *str, char **endptr);
extern int string_to_array__22834(const char *str, void *pValue, char **endptr);
extern int is_array__22834_allow_double_conversion();
extern int array__22834_to_double(const void *pValue, double *nValue);
extern int get_array__22834_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22834(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22834_default_value(void *pValue);
extern SimTypeUtils _Type_array__22834_Utils;

/****************************************************************
 ** struct__22837 
 ****************************************************************/
extern int struct__22837_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22837_string(const char *str, char **endptr);
extern int string_to_struct__22837(const char *str, void *pValue, char **endptr);
extern int is_struct__22837_allow_double_conversion();
extern int struct__22837_to_double(const void *pValue, double *nValue);
extern int get_struct__22837_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22837(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22837_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22837_Utils;

/****************************************************************
 ** struct__22864 
 ****************************************************************/
extern int struct__22864_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22864_string(const char *str, char **endptr);
extern int string_to_struct__22864(const char *str, void *pValue, char **endptr);
extern int is_struct__22864_allow_double_conversion();
extern int struct__22864_to_double(const void *pValue, double *nValue);
extern int get_struct__22864_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22864(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22864_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22864_Utils;

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
 ** struct__22880 
 ****************************************************************/
extern int struct__22880_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22880_string(const char *str, char **endptr);
extern int string_to_struct__22880(const char *str, void *pValue, char **endptr);
extern int is_struct__22880_allow_double_conversion();
extern int struct__22880_to_double(const void *pValue, double *nValue);
extern int get_struct__22880_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22880(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22880_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22880_Utils;

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
 ** struct__22922 
 ****************************************************************/
extern int struct__22922_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22922_string(const char *str, char **endptr);
extern int string_to_struct__22922(const char *str, void *pValue, char **endptr);
extern int is_struct__22922_allow_double_conversion();
extern int struct__22922_to_double(const void *pValue, double *nValue);
extern int get_struct__22922_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22922(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22922_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22922_Utils;

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
 ** array__22933 
 ****************************************************************/
extern int array__22933_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22933_string(const char *str, char **endptr);
extern int string_to_array__22933(const char *str, void *pValue, char **endptr);
extern int is_array__22933_allow_double_conversion();
extern int array__22933_to_double(const void *pValue, double *nValue);
extern int get_array__22933_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22933(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22933_default_value(void *pValue);
extern SimTypeUtils _Type_array__22933_Utils;

/****************************************************************
 ** struct__22936 
 ****************************************************************/
extern int struct__22936_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22936_string(const char *str, char **endptr);
extern int string_to_struct__22936(const char *str, void *pValue, char **endptr);
extern int is_struct__22936_allow_double_conversion();
extern int struct__22936_to_double(const void *pValue, double *nValue);
extern int get_struct__22936_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22936(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22936_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22936_Utils;

/****************************************************************
 ** array__22944 
 ****************************************************************/
extern int array__22944_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22944_string(const char *str, char **endptr);
extern int string_to_array__22944(const char *str, void *pValue, char **endptr);
extern int is_array__22944_allow_double_conversion();
extern int array__22944_to_double(const void *pValue, double *nValue);
extern int get_array__22944_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22944(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22944_default_value(void *pValue);
extern SimTypeUtils _Type_array__22944_Utils;

/****************************************************************
 ** array__22947 
 ****************************************************************/
extern int array__22947_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22947_string(const char *str, char **endptr);
extern int string_to_array__22947(const char *str, void *pValue, char **endptr);
extern int is_array__22947_allow_double_conversion();
extern int array__22947_to_double(const void *pValue, double *nValue);
extern int get_array__22947_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22947(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22947_default_value(void *pValue);
extern SimTypeUtils _Type_array__22947_Utils;

/****************************************************************
 ** struct__22950 
 ****************************************************************/
extern int struct__22950_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22950_string(const char *str, char **endptr);
extern int string_to_struct__22950(const char *str, void *pValue, char **endptr);
extern int is_struct__22950_allow_double_conversion();
extern int struct__22950_to_double(const void *pValue, double *nValue);
extern int get_struct__22950_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22950(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22950_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22950_Utils;

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
 ** struct__22968 
 ****************************************************************/
extern int struct__22968_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22968_string(const char *str, char **endptr);
extern int string_to_struct__22968(const char *str, void *pValue, char **endptr);
extern int is_struct__22968_allow_double_conversion();
extern int struct__22968_to_double(const void *pValue, double *nValue);
extern int get_struct__22968_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22968(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22968_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22968_Utils;

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
 ** array__22980 
 ****************************************************************/
extern int array__22980_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22980_string(const char *str, char **endptr);
extern int string_to_array__22980(const char *str, void *pValue, char **endptr);
extern int is_array__22980_allow_double_conversion();
extern int array__22980_to_double(const void *pValue, double *nValue);
extern int get_array__22980_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22980(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22980_default_value(void *pValue);
extern SimTypeUtils _Type_array__22980_Utils;

/****************************************************************
 ** array__22983 
 ****************************************************************/
extern int array__22983_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__22983_string(const char *str, char **endptr);
extern int string_to_array__22983(const char *str, void *pValue, char **endptr);
extern int is_array__22983_allow_double_conversion();
extern int array__22983_to_double(const void *pValue, double *nValue);
extern int get_array__22983_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__22983(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__22983_default_value(void *pValue);
extern SimTypeUtils _Type_array__22983_Utils;

/****************************************************************
 ** struct__22986 
 ****************************************************************/
extern int struct__22986_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22986_string(const char *str, char **endptr);
extern int string_to_struct__22986(const char *str, void *pValue, char **endptr);
extern int is_struct__22986_allow_double_conversion();
extern int struct__22986_to_double(const void *pValue, double *nValue);
extern int get_struct__22986_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22986(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22986_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22986_Utils;

/****************************************************************
 ** struct__22999 
 ****************************************************************/
extern int struct__22999_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__22999_string(const char *str, char **endptr);
extern int string_to_struct__22999(const char *str, void *pValue, char **endptr);
extern int is_struct__22999_allow_double_conversion();
extern int struct__22999_to_double(const void *pValue, double *nValue);
extern int get_struct__22999_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__22999(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__22999_default_value(void *pValue);
extern SimTypeUtils _Type_struct__22999_Utils;

/****************************************************************
 ** array__23005 
 ****************************************************************/
extern int array__23005_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23005_string(const char *str, char **endptr);
extern int string_to_array__23005(const char *str, void *pValue, char **endptr);
extern int is_array__23005_allow_double_conversion();
extern int array__23005_to_double(const void *pValue, double *nValue);
extern int get_array__23005_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23005(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23005_default_value(void *pValue);
extern SimTypeUtils _Type_array__23005_Utils;

/****************************************************************
 ** array__23008 
 ****************************************************************/
extern int array__23008_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23008_string(const char *str, char **endptr);
extern int string_to_array__23008(const char *str, void *pValue, char **endptr);
extern int is_array__23008_allow_double_conversion();
extern int array__23008_to_double(const void *pValue, double *nValue);
extern int get_array__23008_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23008(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23008_default_value(void *pValue);
extern SimTypeUtils _Type_array__23008_Utils;

/****************************************************************
 ** struct__23011 
 ****************************************************************/
extern int struct__23011_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23011_string(const char *str, char **endptr);
extern int string_to_struct__23011(const char *str, void *pValue, char **endptr);
extern int is_struct__23011_allow_double_conversion();
extern int struct__23011_to_double(const void *pValue, double *nValue);
extern int get_struct__23011_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23011(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23011_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23011_Utils;

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
 ** struct__23028 
 ****************************************************************/
extern int struct__23028_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23028_string(const char *str, char **endptr);
extern int string_to_struct__23028(const char *str, void *pValue, char **endptr);
extern int is_struct__23028_allow_double_conversion();
extern int struct__23028_to_double(const void *pValue, double *nValue);
extern int get_struct__23028_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23028(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23028_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23028_Utils;

/****************************************************************
 ** struct__23057 
 ****************************************************************/
extern int struct__23057_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23057_string(const char *str, char **endptr);
extern int string_to_struct__23057(const char *str, void *pValue, char **endptr);
extern int is_struct__23057_allow_double_conversion();
extern int struct__23057_to_double(const void *pValue, double *nValue);
extern int get_struct__23057_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23057(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23057_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23057_Utils;

/****************************************************************
 ** struct__23075 
 ****************************************************************/
extern int struct__23075_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23075_string(const char *str, char **endptr);
extern int string_to_struct__23075(const char *str, void *pValue, char **endptr);
extern int is_struct__23075_allow_double_conversion();
extern int struct__23075_to_double(const void *pValue, double *nValue);
extern int get_struct__23075_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23075(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23075_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23075_Utils;

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
 ** struct__23100 
 ****************************************************************/
extern int struct__23100_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23100_string(const char *str, char **endptr);
extern int string_to_struct__23100(const char *str, void *pValue, char **endptr);
extern int is_struct__23100_allow_double_conversion();
extern int struct__23100_to_double(const void *pValue, double *nValue);
extern int get_struct__23100_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23100(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23100_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23100_Utils;

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
 ** struct__23124 
 ****************************************************************/
extern int struct__23124_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23124_string(const char *str, char **endptr);
extern int string_to_struct__23124(const char *str, void *pValue, char **endptr);
extern int is_struct__23124_allow_double_conversion();
extern int struct__23124_to_double(const void *pValue, double *nValue);
extern int get_struct__23124_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23124(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23124_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23124_Utils;

/****************************************************************
 ** struct__23129 
 ****************************************************************/
extern int struct__23129_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23129_string(const char *str, char **endptr);
extern int string_to_struct__23129(const char *str, void *pValue, char **endptr);
extern int is_struct__23129_allow_double_conversion();
extern int struct__23129_to_double(const void *pValue, double *nValue);
extern int get_struct__23129_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23129(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23129_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23129_Utils;

/****************************************************************
 ** struct__23134 
 ****************************************************************/
extern int struct__23134_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23134_string(const char *str, char **endptr);
extern int string_to_struct__23134(const char *str, void *pValue, char **endptr);
extern int is_struct__23134_allow_double_conversion();
extern int struct__23134_to_double(const void *pValue, double *nValue);
extern int get_struct__23134_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23134(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23134_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23134_Utils;

/****************************************************************
 ** struct__23140 
 ****************************************************************/
extern int struct__23140_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23140_string(const char *str, char **endptr);
extern int string_to_struct__23140(const char *str, void *pValue, char **endptr);
extern int is_struct__23140_allow_double_conversion();
extern int struct__23140_to_double(const void *pValue, double *nValue);
extern int get_struct__23140_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23140(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23140_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23140_Utils;

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
 ** struct__23164 
 ****************************************************************/
extern int struct__23164_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23164_string(const char *str, char **endptr);
extern int string_to_struct__23164(const char *str, void *pValue, char **endptr);
extern int is_struct__23164_allow_double_conversion();
extern int struct__23164_to_double(const void *pValue, double *nValue);
extern int get_struct__23164_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23164(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23164_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23164_Utils;

/****************************************************************
 ** array__23173 
 ****************************************************************/
extern int array__23173_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23173_string(const char *str, char **endptr);
extern int string_to_array__23173(const char *str, void *pValue, char **endptr);
extern int is_array__23173_allow_double_conversion();
extern int array__23173_to_double(const void *pValue, double *nValue);
extern int get_array__23173_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23173(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23173_default_value(void *pValue);
extern SimTypeUtils _Type_array__23173_Utils;

/****************************************************************
 ** struct__23176 
 ****************************************************************/
extern int struct__23176_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23176_string(const char *str, char **endptr);
extern int string_to_struct__23176(const char *str, void *pValue, char **endptr);
extern int is_struct__23176_allow_double_conversion();
extern int struct__23176_to_double(const void *pValue, double *nValue);
extern int get_struct__23176_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23176(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23176_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23176_Utils;

/****************************************************************
 ** struct__23183 
 ****************************************************************/
extern int struct__23183_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23183_string(const char *str, char **endptr);
extern int string_to_struct__23183(const char *str, void *pValue, char **endptr);
extern int is_struct__23183_allow_double_conversion();
extern int struct__23183_to_double(const void *pValue, double *nValue);
extern int get_struct__23183_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23183(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23183_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23183_Utils;

/****************************************************************
 ** struct__23189 
 ****************************************************************/
extern int struct__23189_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23189_string(const char *str, char **endptr);
extern int string_to_struct__23189(const char *str, void *pValue, char **endptr);
extern int is_struct__23189_allow_double_conversion();
extern int struct__23189_to_double(const void *pValue, double *nValue);
extern int get_struct__23189_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23189(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23189_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23189_Utils;

/****************************************************************
 ** struct__23199 
 ****************************************************************/
extern int struct__23199_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23199_string(const char *str, char **endptr);
extern int string_to_struct__23199(const char *str, void *pValue, char **endptr);
extern int is_struct__23199_allow_double_conversion();
extern int struct__23199_to_double(const void *pValue, double *nValue);
extern int get_struct__23199_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23199(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23199_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23199_Utils;

/****************************************************************
 ** struct__23217 
 ****************************************************************/
extern int struct__23217_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23217_string(const char *str, char **endptr);
extern int string_to_struct__23217(const char *str, void *pValue, char **endptr);
extern int is_struct__23217_allow_double_conversion();
extern int struct__23217_to_double(const void *pValue, double *nValue);
extern int get_struct__23217_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23217(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23217_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23217_Utils;

/****************************************************************
 ** struct__23223 
 ****************************************************************/
extern int struct__23223_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23223_string(const char *str, char **endptr);
extern int string_to_struct__23223(const char *str, void *pValue, char **endptr);
extern int is_struct__23223_allow_double_conversion();
extern int struct__23223_to_double(const void *pValue, double *nValue);
extern int get_struct__23223_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23223(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23223_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23223_Utils;

/****************************************************************
 ** struct__23234 
 ****************************************************************/
extern int struct__23234_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23234_string(const char *str, char **endptr);
extern int string_to_struct__23234(const char *str, void *pValue, char **endptr);
extern int is_struct__23234_allow_double_conversion();
extern int struct__23234_to_double(const void *pValue, double *nValue);
extern int get_struct__23234_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23234(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23234_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23234_Utils;

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
 ** struct__23269 
 ****************************************************************/
extern int struct__23269_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23269_string(const char *str, char **endptr);
extern int string_to_struct__23269(const char *str, void *pValue, char **endptr);
extern int is_struct__23269_allow_double_conversion();
extern int struct__23269_to_double(const void *pValue, double *nValue);
extern int get_struct__23269_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23269(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23269_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23269_Utils;

/****************************************************************
 ** array__23274 
 ****************************************************************/
extern int array__23274_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23274_string(const char *str, char **endptr);
extern int string_to_array__23274(const char *str, void *pValue, char **endptr);
extern int is_array__23274_allow_double_conversion();
extern int array__23274_to_double(const void *pValue, double *nValue);
extern int get_array__23274_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23274(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23274_default_value(void *pValue);
extern SimTypeUtils _Type_array__23274_Utils;

/****************************************************************
 ** struct__23277 
 ****************************************************************/
extern int struct__23277_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23277_string(const char *str, char **endptr);
extern int string_to_struct__23277(const char *str, void *pValue, char **endptr);
extern int is_struct__23277_allow_double_conversion();
extern int struct__23277_to_double(const void *pValue, double *nValue);
extern int get_struct__23277_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23277(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23277_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23277_Utils;

/****************************************************************
 ** struct__23293 
 ****************************************************************/
extern int struct__23293_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23293_string(const char *str, char **endptr);
extern int string_to_struct__23293(const char *str, void *pValue, char **endptr);
extern int is_struct__23293_allow_double_conversion();
extern int struct__23293_to_double(const void *pValue, double *nValue);
extern int get_struct__23293_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23293(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23293_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23293_Utils;

/****************************************************************
 ** struct__23298 
 ****************************************************************/
extern int struct__23298_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23298_string(const char *str, char **endptr);
extern int string_to_struct__23298(const char *str, void *pValue, char **endptr);
extern int is_struct__23298_allow_double_conversion();
extern int struct__23298_to_double(const void *pValue, double *nValue);
extern int get_struct__23298_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23298(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23298_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23298_Utils;

/****************************************************************
 ** struct__23303 
 ****************************************************************/
extern int struct__23303_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23303_string(const char *str, char **endptr);
extern int string_to_struct__23303(const char *str, void *pValue, char **endptr);
extern int is_struct__23303_allow_double_conversion();
extern int struct__23303_to_double(const void *pValue, double *nValue);
extern int get_struct__23303_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23303(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23303_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23303_Utils;

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
 ** struct__23311 
 ****************************************************************/
extern int struct__23311_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23311_string(const char *str, char **endptr);
extern int string_to_struct__23311(const char *str, void *pValue, char **endptr);
extern int is_struct__23311_allow_double_conversion();
extern int struct__23311_to_double(const void *pValue, double *nValue);
extern int get_struct__23311_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23311(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23311_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23311_Utils;

/****************************************************************
 ** array__23316 
 ****************************************************************/
extern int array__23316_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23316_string(const char *str, char **endptr);
extern int string_to_array__23316(const char *str, void *pValue, char **endptr);
extern int is_array__23316_allow_double_conversion();
extern int array__23316_to_double(const void *pValue, double *nValue);
extern int get_array__23316_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23316(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23316_default_value(void *pValue);
extern SimTypeUtils _Type_array__23316_Utils;

/****************************************************************
 ** struct__23319 
 ****************************************************************/
extern int struct__23319_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23319_string(const char *str, char **endptr);
extern int string_to_struct__23319(const char *str, void *pValue, char **endptr);
extern int is_struct__23319_allow_double_conversion();
extern int struct__23319_to_double(const void *pValue, double *nValue);
extern int get_struct__23319_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23319(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23319_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23319_Utils;

/****************************************************************
 ** struct__23325 
 ****************************************************************/
extern int struct__23325_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23325_string(const char *str, char **endptr);
extern int string_to_struct__23325(const char *str, void *pValue, char **endptr);
extern int is_struct__23325_allow_double_conversion();
extern int struct__23325_to_double(const void *pValue, double *nValue);
extern int get_struct__23325_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23325(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23325_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23325_Utils;

/****************************************************************
 ** struct__23335 
 ****************************************************************/
extern int struct__23335_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23335_string(const char *str, char **endptr);
extern int string_to_struct__23335(const char *str, void *pValue, char **endptr);
extern int is_struct__23335_allow_double_conversion();
extern int struct__23335_to_double(const void *pValue, double *nValue);
extern int get_struct__23335_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23335(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23335_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23335_Utils;

/****************************************************************
 ** struct__23341 
 ****************************************************************/
extern int struct__23341_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23341_string(const char *str, char **endptr);
extern int string_to_struct__23341(const char *str, void *pValue, char **endptr);
extern int is_struct__23341_allow_double_conversion();
extern int struct__23341_to_double(const void *pValue, double *nValue);
extern int get_struct__23341_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23341(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23341_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23341_Utils;

/****************************************************************
 ** struct__23348 
 ****************************************************************/
extern int struct__23348_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23348_string(const char *str, char **endptr);
extern int string_to_struct__23348(const char *str, void *pValue, char **endptr);
extern int is_struct__23348_allow_double_conversion();
extern int struct__23348_to_double(const void *pValue, double *nValue);
extern int get_struct__23348_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23348(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23348_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23348_Utils;

/****************************************************************
 ** struct__23360 
 ****************************************************************/
extern int struct__23360_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23360_string(const char *str, char **endptr);
extern int string_to_struct__23360(const char *str, void *pValue, char **endptr);
extern int is_struct__23360_allow_double_conversion();
extern int struct__23360_to_double(const void *pValue, double *nValue);
extern int get_struct__23360_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23360(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23360_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23360_Utils;

/****************************************************************
 ** struct__23370 
 ****************************************************************/
extern int struct__23370_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23370_string(const char *str, char **endptr);
extern int string_to_struct__23370(const char *str, void *pValue, char **endptr);
extern int is_struct__23370_allow_double_conversion();
extern int struct__23370_to_double(const void *pValue, double *nValue);
extern int get_struct__23370_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23370(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23370_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23370_Utils;

/****************************************************************
 ** array__23376 
 ****************************************************************/
extern int array__23376_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23376_string(const char *str, char **endptr);
extern int string_to_array__23376(const char *str, void *pValue, char **endptr);
extern int is_array__23376_allow_double_conversion();
extern int array__23376_to_double(const void *pValue, double *nValue);
extern int get_array__23376_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23376(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23376_default_value(void *pValue);
extern SimTypeUtils _Type_array__23376_Utils;

/****************************************************************
 ** struct__23379 
 ****************************************************************/
extern int struct__23379_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23379_string(const char *str, char **endptr);
extern int string_to_struct__23379(const char *str, void *pValue, char **endptr);
extern int is_struct__23379_allow_double_conversion();
extern int struct__23379_to_double(const void *pValue, double *nValue);
extern int get_struct__23379_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23379(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23379_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23379_Utils;

/****************************************************************
 ** array__23386 
 ****************************************************************/
extern int array__23386_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23386_string(const char *str, char **endptr);
extern int string_to_array__23386(const char *str, void *pValue, char **endptr);
extern int is_array__23386_allow_double_conversion();
extern int array__23386_to_double(const void *pValue, double *nValue);
extern int get_array__23386_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23386(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23386_default_value(void *pValue);
extern SimTypeUtils _Type_array__23386_Utils;

/****************************************************************
 ** struct__23389 
 ****************************************************************/
extern int struct__23389_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23389_string(const char *str, char **endptr);
extern int string_to_struct__23389(const char *str, void *pValue, char **endptr);
extern int is_struct__23389_allow_double_conversion();
extern int struct__23389_to_double(const void *pValue, double *nValue);
extern int get_struct__23389_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23389(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23389_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23389_Utils;

/****************************************************************
 ** array__23401 
 ****************************************************************/
extern int array__23401_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23401_string(const char *str, char **endptr);
extern int string_to_array__23401(const char *str, void *pValue, char **endptr);
extern int is_array__23401_allow_double_conversion();
extern int array__23401_to_double(const void *pValue, double *nValue);
extern int get_array__23401_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23401(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23401_default_value(void *pValue);
extern SimTypeUtils _Type_array__23401_Utils;

/****************************************************************
 ** struct__23404 
 ****************************************************************/
extern int struct__23404_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23404_string(const char *str, char **endptr);
extern int string_to_struct__23404(const char *str, void *pValue, char **endptr);
extern int is_struct__23404_allow_double_conversion();
extern int struct__23404_to_double(const void *pValue, double *nValue);
extern int get_struct__23404_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23404(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23404_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23404_Utils;

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
 ** struct__23445 
 ****************************************************************/
extern int struct__23445_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23445_string(const char *str, char **endptr);
extern int string_to_struct__23445(const char *str, void *pValue, char **endptr);
extern int is_struct__23445_allow_double_conversion();
extern int struct__23445_to_double(const void *pValue, double *nValue);
extern int get_struct__23445_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23445(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23445_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23445_Utils;

/****************************************************************
 ** struct__23450 
 ****************************************************************/
extern int struct__23450_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23450_string(const char *str, char **endptr);
extern int string_to_struct__23450(const char *str, void *pValue, char **endptr);
extern int is_struct__23450_allow_double_conversion();
extern int struct__23450_to_double(const void *pValue, double *nValue);
extern int get_struct__23450_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23450(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23450_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23450_Utils;

/****************************************************************
 ** struct__23460 
 ****************************************************************/
extern int struct__23460_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23460_string(const char *str, char **endptr);
extern int string_to_struct__23460(const char *str, void *pValue, char **endptr);
extern int is_struct__23460_allow_double_conversion();
extern int struct__23460_to_double(const void *pValue, double *nValue);
extern int get_struct__23460_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23460(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23460_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23460_Utils;

/****************************************************************
 ** array__23472 
 ****************************************************************/
extern int array__23472_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23472_string(const char *str, char **endptr);
extern int string_to_array__23472(const char *str, void *pValue, char **endptr);
extern int is_array__23472_allow_double_conversion();
extern int array__23472_to_double(const void *pValue, double *nValue);
extern int get_array__23472_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23472(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23472_default_value(void *pValue);
extern SimTypeUtils _Type_array__23472_Utils;

/****************************************************************
 ** struct__23475 
 ****************************************************************/
extern int struct__23475_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23475_string(const char *str, char **endptr);
extern int string_to_struct__23475(const char *str, void *pValue, char **endptr);
extern int is_struct__23475_allow_double_conversion();
extern int struct__23475_to_double(const void *pValue, double *nValue);
extern int get_struct__23475_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23475(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23475_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23475_Utils;

/****************************************************************
 ** array__23482 
 ****************************************************************/
extern int array__23482_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23482_string(const char *str, char **endptr);
extern int string_to_array__23482(const char *str, void *pValue, char **endptr);
extern int is_array__23482_allow_double_conversion();
extern int array__23482_to_double(const void *pValue, double *nValue);
extern int get_array__23482_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23482(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23482_default_value(void *pValue);
extern SimTypeUtils _Type_array__23482_Utils;

/****************************************************************
 ** struct__23485 
 ****************************************************************/
extern int struct__23485_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23485_string(const char *str, char **endptr);
extern int string_to_struct__23485(const char *str, void *pValue, char **endptr);
extern int is_struct__23485_allow_double_conversion();
extern int struct__23485_to_double(const void *pValue, double *nValue);
extern int get_struct__23485_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23485(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23485_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23485_Utils;

/****************************************************************
 ** array__23495 
 ****************************************************************/
extern int array__23495_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23495_string(const char *str, char **endptr);
extern int string_to_array__23495(const char *str, void *pValue, char **endptr);
extern int is_array__23495_allow_double_conversion();
extern int array__23495_to_double(const void *pValue, double *nValue);
extern int get_array__23495_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23495(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23495_default_value(void *pValue);
extern SimTypeUtils _Type_array__23495_Utils;

/****************************************************************
 ** struct__23498 
 ****************************************************************/
extern int struct__23498_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23498_string(const char *str, char **endptr);
extern int string_to_struct__23498(const char *str, void *pValue, char **endptr);
extern int is_struct__23498_allow_double_conversion();
extern int struct__23498_to_double(const void *pValue, double *nValue);
extern int get_struct__23498_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23498(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23498_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23498_Utils;

/****************************************************************
 ** array__23506 
 ****************************************************************/
extern int array__23506_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23506_string(const char *str, char **endptr);
extern int string_to_array__23506(const char *str, void *pValue, char **endptr);
extern int is_array__23506_allow_double_conversion();
extern int array__23506_to_double(const void *pValue, double *nValue);
extern int get_array__23506_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23506(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23506_default_value(void *pValue);
extern SimTypeUtils _Type_array__23506_Utils;

/****************************************************************
 ** struct__23509 
 ****************************************************************/
extern int struct__23509_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23509_string(const char *str, char **endptr);
extern int string_to_struct__23509(const char *str, void *pValue, char **endptr);
extern int is_struct__23509_allow_double_conversion();
extern int struct__23509_to_double(const void *pValue, double *nValue);
extern int get_struct__23509_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23509(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23509_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23509_Utils;

/****************************************************************
 ** array__23517 
 ****************************************************************/
extern int array__23517_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23517_string(const char *str, char **endptr);
extern int string_to_array__23517(const char *str, void *pValue, char **endptr);
extern int is_array__23517_allow_double_conversion();
extern int array__23517_to_double(const void *pValue, double *nValue);
extern int get_array__23517_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23517(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23517_default_value(void *pValue);
extern SimTypeUtils _Type_array__23517_Utils;

/****************************************************************
 ** struct__23520 
 ****************************************************************/
extern int struct__23520_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23520_string(const char *str, char **endptr);
extern int string_to_struct__23520(const char *str, void *pValue, char **endptr);
extern int is_struct__23520_allow_double_conversion();
extern int struct__23520_to_double(const void *pValue, double *nValue);
extern int get_struct__23520_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23520(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23520_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23520_Utils;

/****************************************************************
 ** struct__23531 
 ****************************************************************/
extern int struct__23531_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23531_string(const char *str, char **endptr);
extern int string_to_struct__23531(const char *str, void *pValue, char **endptr);
extern int is_struct__23531_allow_double_conversion();
extern int struct__23531_to_double(const void *pValue, double *nValue);
extern int get_struct__23531_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23531(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23531_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23531_Utils;

/****************************************************************
 ** array__23540 
 ****************************************************************/
extern int array__23540_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23540_string(const char *str, char **endptr);
extern int string_to_array__23540(const char *str, void *pValue, char **endptr);
extern int is_array__23540_allow_double_conversion();
extern int array__23540_to_double(const void *pValue, double *nValue);
extern int get_array__23540_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23540(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23540_default_value(void *pValue);
extern SimTypeUtils _Type_array__23540_Utils;

/****************************************************************
 ** struct__23543 
 ****************************************************************/
extern int struct__23543_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23543_string(const char *str, char **endptr);
extern int string_to_struct__23543(const char *str, void *pValue, char **endptr);
extern int is_struct__23543_allow_double_conversion();
extern int struct__23543_to_double(const void *pValue, double *nValue);
extern int get_struct__23543_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23543(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23543_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23543_Utils;

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
 ** struct__23581 
 ****************************************************************/
extern int struct__23581_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23581_string(const char *str, char **endptr);
extern int string_to_struct__23581(const char *str, void *pValue, char **endptr);
extern int is_struct__23581_allow_double_conversion();
extern int struct__23581_to_double(const void *pValue, double *nValue);
extern int get_struct__23581_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23581(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23581_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23581_Utils;

/****************************************************************
 ** struct__23589 
 ****************************************************************/
extern int struct__23589_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23589_string(const char *str, char **endptr);
extern int string_to_struct__23589(const char *str, void *pValue, char **endptr);
extern int is_struct__23589_allow_double_conversion();
extern int struct__23589_to_double(const void *pValue, double *nValue);
extern int get_struct__23589_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23589(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23589_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23589_Utils;

/****************************************************************
 ** struct__23595 
 ****************************************************************/
extern int struct__23595_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23595_string(const char *str, char **endptr);
extern int string_to_struct__23595(const char *str, void *pValue, char **endptr);
extern int is_struct__23595_allow_double_conversion();
extern int struct__23595_to_double(const void *pValue, double *nValue);
extern int get_struct__23595_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23595(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23595_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23595_Utils;

/****************************************************************
 ** struct__23610 
 ****************************************************************/
extern int struct__23610_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23610_string(const char *str, char **endptr);
extern int string_to_struct__23610(const char *str, void *pValue, char **endptr);
extern int is_struct__23610_allow_double_conversion();
extern int struct__23610_to_double(const void *pValue, double *nValue);
extern int get_struct__23610_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23610(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23610_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23610_Utils;

/****************************************************************
 ** struct__23619 
 ****************************************************************/
extern int struct__23619_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23619_string(const char *str, char **endptr);
extern int string_to_struct__23619(const char *str, void *pValue, char **endptr);
extern int is_struct__23619_allow_double_conversion();
extern int struct__23619_to_double(const void *pValue, double *nValue);
extern int get_struct__23619_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23619(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23619_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23619_Utils;

/****************************************************************
 ** array__23626 
 ****************************************************************/
extern int array__23626_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23626_string(const char *str, char **endptr);
extern int string_to_array__23626(const char *str, void *pValue, char **endptr);
extern int is_array__23626_allow_double_conversion();
extern int array__23626_to_double(const void *pValue, double *nValue);
extern int get_array__23626_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23626(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23626_default_value(void *pValue);
extern SimTypeUtils _Type_array__23626_Utils;

/****************************************************************
 ** struct__23629 
 ****************************************************************/
extern int struct__23629_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23629_string(const char *str, char **endptr);
extern int string_to_struct__23629(const char *str, void *pValue, char **endptr);
extern int is_struct__23629_allow_double_conversion();
extern int struct__23629_to_double(const void *pValue, double *nValue);
extern int get_struct__23629_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23629(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23629_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23629_Utils;

/****************************************************************
 ** array__23636 
 ****************************************************************/
extern int array__23636_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23636_string(const char *str, char **endptr);
extern int string_to_array__23636(const char *str, void *pValue, char **endptr);
extern int is_array__23636_allow_double_conversion();
extern int array__23636_to_double(const void *pValue, double *nValue);
extern int get_array__23636_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23636(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23636_default_value(void *pValue);
extern SimTypeUtils _Type_array__23636_Utils;

/****************************************************************
 ** struct__23639 
 ****************************************************************/
extern int struct__23639_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23639_string(const char *str, char **endptr);
extern int string_to_struct__23639(const char *str, void *pValue, char **endptr);
extern int is_struct__23639_allow_double_conversion();
extern int struct__23639_to_double(const void *pValue, double *nValue);
extern int get_struct__23639_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23639(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23639_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23639_Utils;

/****************************************************************
 ** struct__23646 
 ****************************************************************/
extern int struct__23646_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23646_string(const char *str, char **endptr);
extern int string_to_struct__23646(const char *str, void *pValue, char **endptr);
extern int is_struct__23646_allow_double_conversion();
extern int struct__23646_to_double(const void *pValue, double *nValue);
extern int get_struct__23646_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23646(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23646_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23646_Utils;

/****************************************************************
 ** array__23654 
 ****************************************************************/
extern int array__23654_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23654_string(const char *str, char **endptr);
extern int string_to_array__23654(const char *str, void *pValue, char **endptr);
extern int is_array__23654_allow_double_conversion();
extern int array__23654_to_double(const void *pValue, double *nValue);
extern int get_array__23654_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23654(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23654_default_value(void *pValue);
extern SimTypeUtils _Type_array__23654_Utils;

/****************************************************************
 ** struct__23657 
 ****************************************************************/
extern int struct__23657_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23657_string(const char *str, char **endptr);
extern int string_to_struct__23657(const char *str, void *pValue, char **endptr);
extern int is_struct__23657_allow_double_conversion();
extern int struct__23657_to_double(const void *pValue, double *nValue);
extern int get_struct__23657_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23657(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23657_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23657_Utils;

/****************************************************************
 ** struct__23662 
 ****************************************************************/
extern int struct__23662_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23662_string(const char *str, char **endptr);
extern int string_to_struct__23662(const char *str, void *pValue, char **endptr);
extern int is_struct__23662_allow_double_conversion();
extern int struct__23662_to_double(const void *pValue, double *nValue);
extern int get_struct__23662_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23662(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23662_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23662_Utils;

/****************************************************************
 ** struct__23668 
 ****************************************************************/
extern int struct__23668_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23668_string(const char *str, char **endptr);
extern int string_to_struct__23668(const char *str, void *pValue, char **endptr);
extern int is_struct__23668_allow_double_conversion();
extern int struct__23668_to_double(const void *pValue, double *nValue);
extern int get_struct__23668_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23668(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23668_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23668_Utils;

/****************************************************************
 ** array__23677 
 ****************************************************************/
extern int array__23677_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23677_string(const char *str, char **endptr);
extern int string_to_array__23677(const char *str, void *pValue, char **endptr);
extern int is_array__23677_allow_double_conversion();
extern int array__23677_to_double(const void *pValue, double *nValue);
extern int get_array__23677_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23677(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23677_default_value(void *pValue);
extern SimTypeUtils _Type_array__23677_Utils;

/****************************************************************
 ** struct__23680 
 ****************************************************************/
extern int struct__23680_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23680_string(const char *str, char **endptr);
extern int string_to_struct__23680(const char *str, void *pValue, char **endptr);
extern int is_struct__23680_allow_double_conversion();
extern int struct__23680_to_double(const void *pValue, double *nValue);
extern int get_struct__23680_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23680(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23680_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23680_Utils;

/****************************************************************
 ** struct__23698 
 ****************************************************************/
extern int struct__23698_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23698_string(const char *str, char **endptr);
extern int string_to_struct__23698(const char *str, void *pValue, char **endptr);
extern int is_struct__23698_allow_double_conversion();
extern int struct__23698_to_double(const void *pValue, double *nValue);
extern int get_struct__23698_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23698(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23698_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23698_Utils;

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
 ** array__23712 
 ****************************************************************/
extern int array__23712_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23712_string(const char *str, char **endptr);
extern int string_to_array__23712(const char *str, void *pValue, char **endptr);
extern int is_array__23712_allow_double_conversion();
extern int array__23712_to_double(const void *pValue, double *nValue);
extern int get_array__23712_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23712(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23712_default_value(void *pValue);
extern SimTypeUtils _Type_array__23712_Utils;

/****************************************************************
 ** struct__23715 
 ****************************************************************/
extern int struct__23715_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23715_string(const char *str, char **endptr);
extern int string_to_struct__23715(const char *str, void *pValue, char **endptr);
extern int is_struct__23715_allow_double_conversion();
extern int struct__23715_to_double(const void *pValue, double *nValue);
extern int get_struct__23715_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23715(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23715_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23715_Utils;

/****************************************************************
 ** struct__23770 
 ****************************************************************/
extern int struct__23770_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23770_string(const char *str, char **endptr);
extern int string_to_struct__23770(const char *str, void *pValue, char **endptr);
extern int is_struct__23770_allow_double_conversion();
extern int struct__23770_to_double(const void *pValue, double *nValue);
extern int get_struct__23770_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23770(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23770_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23770_Utils;

/****************************************************************
 ** array__23777 
 ****************************************************************/
extern int array__23777_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23777_string(const char *str, char **endptr);
extern int string_to_array__23777(const char *str, void *pValue, char **endptr);
extern int is_array__23777_allow_double_conversion();
extern int array__23777_to_double(const void *pValue, double *nValue);
extern int get_array__23777_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23777(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23777_default_value(void *pValue);
extern SimTypeUtils _Type_array__23777_Utils;

/****************************************************************
 ** struct__23780 
 ****************************************************************/
extern int struct__23780_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23780_string(const char *str, char **endptr);
extern int string_to_struct__23780(const char *str, void *pValue, char **endptr);
extern int is_struct__23780_allow_double_conversion();
extern int struct__23780_to_double(const void *pValue, double *nValue);
extern int get_struct__23780_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23780(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23780_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23780_Utils;

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
 ** struct__23791 
 ****************************************************************/
extern int struct__23791_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23791_string(const char *str, char **endptr);
extern int string_to_struct__23791(const char *str, void *pValue, char **endptr);
extern int is_struct__23791_allow_double_conversion();
extern int struct__23791_to_double(const void *pValue, double *nValue);
extern int get_struct__23791_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23791(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23791_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23791_Utils;

/****************************************************************
 ** struct__23797 
 ****************************************************************/
extern int struct__23797_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23797_string(const char *str, char **endptr);
extern int string_to_struct__23797(const char *str, void *pValue, char **endptr);
extern int is_struct__23797_allow_double_conversion();
extern int struct__23797_to_double(const void *pValue, double *nValue);
extern int get_struct__23797_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23797(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23797_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23797_Utils;

/****************************************************************
 ** array__23802 
 ****************************************************************/
extern int array__23802_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23802_string(const char *str, char **endptr);
extern int string_to_array__23802(const char *str, void *pValue, char **endptr);
extern int is_array__23802_allow_double_conversion();
extern int array__23802_to_double(const void *pValue, double *nValue);
extern int get_array__23802_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23802(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23802_default_value(void *pValue);
extern SimTypeUtils _Type_array__23802_Utils;

/****************************************************************
 ** struct__23805 
 ****************************************************************/
extern int struct__23805_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23805_string(const char *str, char **endptr);
extern int string_to_struct__23805(const char *str, void *pValue, char **endptr);
extern int is_struct__23805_allow_double_conversion();
extern int struct__23805_to_double(const void *pValue, double *nValue);
extern int get_struct__23805_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23805(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23805_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23805_Utils;

/****************************************************************
 ** struct__23810 
 ****************************************************************/
extern int struct__23810_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23810_string(const char *str, char **endptr);
extern int string_to_struct__23810(const char *str, void *pValue, char **endptr);
extern int is_struct__23810_allow_double_conversion();
extern int struct__23810_to_double(const void *pValue, double *nValue);
extern int get_struct__23810_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23810(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23810_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23810_Utils;

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
 ** struct__23821 
 ****************************************************************/
extern int struct__23821_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23821_string(const char *str, char **endptr);
extern int string_to_struct__23821(const char *str, void *pValue, char **endptr);
extern int is_struct__23821_allow_double_conversion();
extern int struct__23821_to_double(const void *pValue, double *nValue);
extern int get_struct__23821_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23821(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23821_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23821_Utils;

/****************************************************************
 ** array__23829 
 ****************************************************************/
extern int array__23829_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23829_string(const char *str, char **endptr);
extern int string_to_array__23829(const char *str, void *pValue, char **endptr);
extern int is_array__23829_allow_double_conversion();
extern int array__23829_to_double(const void *pValue, double *nValue);
extern int get_array__23829_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23829(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23829_default_value(void *pValue);
extern SimTypeUtils _Type_array__23829_Utils;

/****************************************************************
 ** struct__23832 
 ****************************************************************/
extern int struct__23832_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23832_string(const char *str, char **endptr);
extern int string_to_struct__23832(const char *str, void *pValue, char **endptr);
extern int is_struct__23832_allow_double_conversion();
extern int struct__23832_to_double(const void *pValue, double *nValue);
extern int get_struct__23832_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23832(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23832_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23832_Utils;

/****************************************************************
 ** struct__23857 
 ****************************************************************/
extern int struct__23857_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23857_string(const char *str, char **endptr);
extern int string_to_struct__23857(const char *str, void *pValue, char **endptr);
extern int is_struct__23857_allow_double_conversion();
extern int struct__23857_to_double(const void *pValue, double *nValue);
extern int get_struct__23857_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23857(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23857_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23857_Utils;

/****************************************************************
 ** array__23865 
 ****************************************************************/
extern int array__23865_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23865_string(const char *str, char **endptr);
extern int string_to_array__23865(const char *str, void *pValue, char **endptr);
extern int is_array__23865_allow_double_conversion();
extern int array__23865_to_double(const void *pValue, double *nValue);
extern int get_array__23865_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23865(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23865_default_value(void *pValue);
extern SimTypeUtils _Type_array__23865_Utils;

/****************************************************************
 ** struct__23868 
 ****************************************************************/
extern int struct__23868_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23868_string(const char *str, char **endptr);
extern int string_to_struct__23868(const char *str, void *pValue, char **endptr);
extern int is_struct__23868_allow_double_conversion();
extern int struct__23868_to_double(const void *pValue, double *nValue);
extern int get_struct__23868_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23868(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23868_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23868_Utils;

/****************************************************************
 ** array__23874 
 ****************************************************************/
extern int array__23874_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23874_string(const char *str, char **endptr);
extern int string_to_array__23874(const char *str, void *pValue, char **endptr);
extern int is_array__23874_allow_double_conversion();
extern int array__23874_to_double(const void *pValue, double *nValue);
extern int get_array__23874_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23874(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23874_default_value(void *pValue);
extern SimTypeUtils _Type_array__23874_Utils;

/****************************************************************
 ** struct__23877 
 ****************************************************************/
extern int struct__23877_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23877_string(const char *str, char **endptr);
extern int string_to_struct__23877(const char *str, void *pValue, char **endptr);
extern int is_struct__23877_allow_double_conversion();
extern int struct__23877_to_double(const void *pValue, double *nValue);
extern int get_struct__23877_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23877(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23877_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23877_Utils;

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
 ** array__23894 
 ****************************************************************/
extern int array__23894_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23894_string(const char *str, char **endptr);
extern int string_to_array__23894(const char *str, void *pValue, char **endptr);
extern int is_array__23894_allow_double_conversion();
extern int array__23894_to_double(const void *pValue, double *nValue);
extern int get_array__23894_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23894(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23894_default_value(void *pValue);
extern SimTypeUtils _Type_array__23894_Utils;

/****************************************************************
 ** struct__23897 
 ****************************************************************/
extern int struct__23897_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23897_string(const char *str, char **endptr);
extern int string_to_struct__23897(const char *str, void *pValue, char **endptr);
extern int is_struct__23897_allow_double_conversion();
extern int struct__23897_to_double(const void *pValue, double *nValue);
extern int get_struct__23897_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23897(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23897_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23897_Utils;

/****************************************************************
 ** struct__23906 
 ****************************************************************/
extern int struct__23906_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23906_string(const char *str, char **endptr);
extern int string_to_struct__23906(const char *str, void *pValue, char **endptr);
extern int is_struct__23906_allow_double_conversion();
extern int struct__23906_to_double(const void *pValue, double *nValue);
extern int get_struct__23906_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23906(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23906_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23906_Utils;

/****************************************************************
 ** array__23912 
 ****************************************************************/
extern int array__23912_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23912_string(const char *str, char **endptr);
extern int string_to_array__23912(const char *str, void *pValue, char **endptr);
extern int is_array__23912_allow_double_conversion();
extern int array__23912_to_double(const void *pValue, double *nValue);
extern int get_array__23912_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23912(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23912_default_value(void *pValue);
extern SimTypeUtils _Type_array__23912_Utils;

/****************************************************************
 ** struct__23915 
 ****************************************************************/
extern int struct__23915_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23915_string(const char *str, char **endptr);
extern int string_to_struct__23915(const char *str, void *pValue, char **endptr);
extern int is_struct__23915_allow_double_conversion();
extern int struct__23915_to_double(const void *pValue, double *nValue);
extern int get_struct__23915_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23915(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23915_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23915_Utils;

/****************************************************************
 ** array__23924 
 ****************************************************************/
extern int array__23924_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__23924_string(const char *str, char **endptr);
extern int string_to_array__23924(const char *str, void *pValue, char **endptr);
extern int is_array__23924_allow_double_conversion();
extern int array__23924_to_double(const void *pValue, double *nValue);
extern int get_array__23924_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__23924(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__23924_default_value(void *pValue);
extern SimTypeUtils _Type_array__23924_Utils;

/****************************************************************
 ** struct__23927 
 ****************************************************************/
extern int struct__23927_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23927_string(const char *str, char **endptr);
extern int string_to_struct__23927(const char *str, void *pValue, char **endptr);
extern int is_struct__23927_allow_double_conversion();
extern int struct__23927_to_double(const void *pValue, double *nValue);
extern int get_struct__23927_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23927(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23927_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23927_Utils;

/****************************************************************
 ** struct__23934 
 ****************************************************************/
extern int struct__23934_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23934_string(const char *str, char **endptr);
extern int string_to_struct__23934(const char *str, void *pValue, char **endptr);
extern int is_struct__23934_allow_double_conversion();
extern int struct__23934_to_double(const void *pValue, double *nValue);
extern int get_struct__23934_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23934(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23934_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23934_Utils;

/****************************************************************
 ** struct__23940 
 ****************************************************************/
extern int struct__23940_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23940_string(const char *str, char **endptr);
extern int string_to_struct__23940(const char *str, void *pValue, char **endptr);
extern int is_struct__23940_allow_double_conversion();
extern int struct__23940_to_double(const void *pValue, double *nValue);
extern int get_struct__23940_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23940(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23940_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23940_Utils;

/****************************************************************
 ** struct__23966 
 ****************************************************************/
extern int struct__23966_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23966_string(const char *str, char **endptr);
extern int string_to_struct__23966(const char *str, void *pValue, char **endptr);
extern int is_struct__23966_allow_double_conversion();
extern int struct__23966_to_double(const void *pValue, double *nValue);
extern int get_struct__23966_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23966(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23966_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23966_Utils;

/****************************************************************
 ** struct__23971 
 ****************************************************************/
extern int struct__23971_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__23971_string(const char *str, char **endptr);
extern int string_to_struct__23971(const char *str, void *pValue, char **endptr);
extern int is_struct__23971_allow_double_conversion();
extern int struct__23971_to_double(const void *pValue, double *nValue);
extern int get_struct__23971_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__23971(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__23971_default_value(void *pValue);
extern SimTypeUtils _Type_struct__23971_Utils;

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
 ** struct__24001 
 ****************************************************************/
extern int struct__24001_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__24001_string(const char *str, char **endptr);
extern int string_to_struct__24001(const char *str, void *pValue, char **endptr);
extern int is_struct__24001_allow_double_conversion();
extern int struct__24001_to_double(const void *pValue, double *nValue);
extern int get_struct__24001_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__24001(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__24001_default_value(void *pValue);
extern SimTypeUtils _Type_struct__24001_Utils;

/****************************************************************
 ** array__24006 
 ****************************************************************/
extern int array__24006_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24006_string(const char *str, char **endptr);
extern int string_to_array__24006(const char *str, void *pValue, char **endptr);
extern int is_array__24006_allow_double_conversion();
extern int array__24006_to_double(const void *pValue, double *nValue);
extern int get_array__24006_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24006(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24006_default_value(void *pValue);
extern SimTypeUtils _Type_array__24006_Utils;

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
 ** struct__24012 
 ****************************************************************/
extern int struct__24012_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__24012_string(const char *str, char **endptr);
extern int string_to_struct__24012(const char *str, void *pValue, char **endptr);
extern int is_struct__24012_allow_double_conversion();
extern int struct__24012_to_double(const void *pValue, double *nValue);
extern int get_struct__24012_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__24012(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__24012_default_value(void *pValue);
extern SimTypeUtils _Type_struct__24012_Utils;

/****************************************************************
 ** array__24018 
 ****************************************************************/
extern int array__24018_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24018_string(const char *str, char **endptr);
extern int string_to_array__24018(const char *str, void *pValue, char **endptr);
extern int is_array__24018_allow_double_conversion();
extern int array__24018_to_double(const void *pValue, double *nValue);
extern int get_array__24018_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24018(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24018_default_value(void *pValue);
extern SimTypeUtils _Type_array__24018_Utils;

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
 ** struct__24027 
 ****************************************************************/
extern int struct__24027_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__24027_string(const char *str, char **endptr);
extern int string_to_struct__24027(const char *str, void *pValue, char **endptr);
extern int is_struct__24027_allow_double_conversion();
extern int struct__24027_to_double(const void *pValue, double *nValue);
extern int get_struct__24027_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__24027(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__24027_default_value(void *pValue);
extern SimTypeUtils _Type_struct__24027_Utils;

/****************************************************************
 ** struct__24032 
 ****************************************************************/
extern int struct__24032_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__24032_string(const char *str, char **endptr);
extern int string_to_struct__24032(const char *str, void *pValue, char **endptr);
extern int is_struct__24032_allow_double_conversion();
extern int struct__24032_to_double(const void *pValue, double *nValue);
extern int get_struct__24032_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__24032(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__24032_default_value(void *pValue);
extern SimTypeUtils _Type_struct__24032_Utils;

/****************************************************************
 ** struct__24038 
 ****************************************************************/
extern int struct__24038_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__24038_string(const char *str, char **endptr);
extern int string_to_struct__24038(const char *str, void *pValue, char **endptr);
extern int is_struct__24038_allow_double_conversion();
extern int struct__24038_to_double(const void *pValue, double *nValue);
extern int get_struct__24038_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__24038(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__24038_default_value(void *pValue);
extern SimTypeUtils _Type_struct__24038_Utils;

/****************************************************************
 ** struct__24043 
 ****************************************************************/
extern int struct__24043_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__24043_string(const char *str, char **endptr);
extern int string_to_struct__24043(const char *str, void *pValue, char **endptr);
extern int is_struct__24043_allow_double_conversion();
extern int struct__24043_to_double(const void *pValue, double *nValue);
extern int get_struct__24043_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__24043(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__24043_default_value(void *pValue);
extern SimTypeUtils _Type_struct__24043_Utils;

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
 ** array__24072 
 ****************************************************************/
extern int array__24072_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24072_string(const char *str, char **endptr);
extern int string_to_array__24072(const char *str, void *pValue, char **endptr);
extern int is_array__24072_allow_double_conversion();
extern int array__24072_to_double(const void *pValue, double *nValue);
extern int get_array__24072_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24072(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24072_default_value(void *pValue);
extern SimTypeUtils _Type_array__24072_Utils;

/****************************************************************
 ** array__24075 
 ****************************************************************/
extern int array__24075_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24075_string(const char *str, char **endptr);
extern int string_to_array__24075(const char *str, void *pValue, char **endptr);
extern int is_array__24075_allow_double_conversion();
extern int array__24075_to_double(const void *pValue, double *nValue);
extern int get_array__24075_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24075(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24075_default_value(void *pValue);
extern SimTypeUtils _Type_array__24075_Utils;

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
 ** array__24093 
 ****************************************************************/
extern int array__24093_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24093_string(const char *str, char **endptr);
extern int string_to_array__24093(const char *str, void *pValue, char **endptr);
extern int is_array__24093_allow_double_conversion();
extern int array__24093_to_double(const void *pValue, double *nValue);
extern int get_array__24093_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24093(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24093_default_value(void *pValue);
extern SimTypeUtils _Type_array__24093_Utils;

/****************************************************************
 ** array__24096 
 ****************************************************************/
extern int array__24096_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24096_string(const char *str, char **endptr);
extern int string_to_array__24096(const char *str, void *pValue, char **endptr);
extern int is_array__24096_allow_double_conversion();
extern int array__24096_to_double(const void *pValue, double *nValue);
extern int get_array__24096_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24096(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24096_default_value(void *pValue);
extern SimTypeUtils _Type_array__24096_Utils;

/****************************************************************
 ** array__24099 
 ****************************************************************/
extern int array__24099_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24099_string(const char *str, char **endptr);
extern int string_to_array__24099(const char *str, void *pValue, char **endptr);
extern int is_array__24099_allow_double_conversion();
extern int array__24099_to_double(const void *pValue, double *nValue);
extern int get_array__24099_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24099(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24099_default_value(void *pValue);
extern SimTypeUtils _Type_array__24099_Utils;

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
 ** array__24105 
 ****************************************************************/
extern int array__24105_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24105_string(const char *str, char **endptr);
extern int string_to_array__24105(const char *str, void *pValue, char **endptr);
extern int is_array__24105_allow_double_conversion();
extern int array__24105_to_double(const void *pValue, double *nValue);
extern int get_array__24105_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24105(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24105_default_value(void *pValue);
extern SimTypeUtils _Type_array__24105_Utils;

/****************************************************************
 ** array__24108 
 ****************************************************************/
extern int array__24108_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24108_string(const char *str, char **endptr);
extern int string_to_array__24108(const char *str, void *pValue, char **endptr);
extern int is_array__24108_allow_double_conversion();
extern int array__24108_to_double(const void *pValue, double *nValue);
extern int get_array__24108_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24108(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24108_default_value(void *pValue);
extern SimTypeUtils _Type_array__24108_Utils;

/****************************************************************
 ** array__24111 
 ****************************************************************/
extern int array__24111_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24111_string(const char *str, char **endptr);
extern int string_to_array__24111(const char *str, void *pValue, char **endptr);
extern int is_array__24111_allow_double_conversion();
extern int array__24111_to_double(const void *pValue, double *nValue);
extern int get_array__24111_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24111(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24111_default_value(void *pValue);
extern SimTypeUtils _Type_array__24111_Utils;

/****************************************************************
 ** array__24114 
 ****************************************************************/
extern int array__24114_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24114_string(const char *str, char **endptr);
extern int string_to_array__24114(const char *str, void *pValue, char **endptr);
extern int is_array__24114_allow_double_conversion();
extern int array__24114_to_double(const void *pValue, double *nValue);
extern int get_array__24114_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24114(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24114_default_value(void *pValue);
extern SimTypeUtils _Type_array__24114_Utils;

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
 ** array__24123 
 ****************************************************************/
extern int array__24123_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24123_string(const char *str, char **endptr);
extern int string_to_array__24123(const char *str, void *pValue, char **endptr);
extern int is_array__24123_allow_double_conversion();
extern int array__24123_to_double(const void *pValue, double *nValue);
extern int get_array__24123_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24123(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24123_default_value(void *pValue);
extern SimTypeUtils _Type_array__24123_Utils;

/****************************************************************
 ** array__24126 
 ****************************************************************/
extern int array__24126_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24126_string(const char *str, char **endptr);
extern int string_to_array__24126(const char *str, void *pValue, char **endptr);
extern int is_array__24126_allow_double_conversion();
extern int array__24126_to_double(const void *pValue, double *nValue);
extern int get_array__24126_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24126(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24126_default_value(void *pValue);
extern SimTypeUtils _Type_array__24126_Utils;

/****************************************************************
 ** array__24129 
 ****************************************************************/
extern int array__24129_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24129_string(const char *str, char **endptr);
extern int string_to_array__24129(const char *str, void *pValue, char **endptr);
extern int is_array__24129_allow_double_conversion();
extern int array__24129_to_double(const void *pValue, double *nValue);
extern int get_array__24129_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24129(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24129_default_value(void *pValue);
extern SimTypeUtils _Type_array__24129_Utils;

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
 ** array__24138 
 ****************************************************************/
extern int array__24138_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24138_string(const char *str, char **endptr);
extern int string_to_array__24138(const char *str, void *pValue, char **endptr);
extern int is_array__24138_allow_double_conversion();
extern int array__24138_to_double(const void *pValue, double *nValue);
extern int get_array__24138_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24138(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24138_default_value(void *pValue);
extern SimTypeUtils _Type_array__24138_Utils;

/****************************************************************
 ** array__24141 
 ****************************************************************/
extern int array__24141_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24141_string(const char *str, char **endptr);
extern int string_to_array__24141(const char *str, void *pValue, char **endptr);
extern int is_array__24141_allow_double_conversion();
extern int array__24141_to_double(const void *pValue, double *nValue);
extern int get_array__24141_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24141(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24141_default_value(void *pValue);
extern SimTypeUtils _Type_array__24141_Utils;

/****************************************************************
 ** array__24144 
 ****************************************************************/
extern int array__24144_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24144_string(const char *str, char **endptr);
extern int string_to_array__24144(const char *str, void *pValue, char **endptr);
extern int is_array__24144_allow_double_conversion();
extern int array__24144_to_double(const void *pValue, double *nValue);
extern int get_array__24144_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24144(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24144_default_value(void *pValue);
extern SimTypeUtils _Type_array__24144_Utils;

/****************************************************************
 ** array__24147 
 ****************************************************************/
extern int array__24147_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24147_string(const char *str, char **endptr);
extern int string_to_array__24147(const char *str, void *pValue, char **endptr);
extern int is_array__24147_allow_double_conversion();
extern int array__24147_to_double(const void *pValue, double *nValue);
extern int get_array__24147_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24147(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24147_default_value(void *pValue);
extern SimTypeUtils _Type_array__24147_Utils;

/****************************************************************
 ** array__24150 
 ****************************************************************/
extern int array__24150_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24150_string(const char *str, char **endptr);
extern int string_to_array__24150(const char *str, void *pValue, char **endptr);
extern int is_array__24150_allow_double_conversion();
extern int array__24150_to_double(const void *pValue, double *nValue);
extern int get_array__24150_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24150(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24150_default_value(void *pValue);
extern SimTypeUtils _Type_array__24150_Utils;

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
 ** array__24165 
 ****************************************************************/
extern int array__24165_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24165_string(const char *str, char **endptr);
extern int string_to_array__24165(const char *str, void *pValue, char **endptr);
extern int is_array__24165_allow_double_conversion();
extern int array__24165_to_double(const void *pValue, double *nValue);
extern int get_array__24165_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24165(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24165_default_value(void *pValue);
extern SimTypeUtils _Type_array__24165_Utils;

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
 ** array__24171 
 ****************************************************************/
extern int array__24171_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24171_string(const char *str, char **endptr);
extern int string_to_array__24171(const char *str, void *pValue, char **endptr);
extern int is_array__24171_allow_double_conversion();
extern int array__24171_to_double(const void *pValue, double *nValue);
extern int get_array__24171_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24171(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24171_default_value(void *pValue);
extern SimTypeUtils _Type_array__24171_Utils;

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
 ** array__24201 
 ****************************************************************/
extern int array__24201_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24201_string(const char *str, char **endptr);
extern int string_to_array__24201(const char *str, void *pValue, char **endptr);
extern int is_array__24201_allow_double_conversion();
extern int array__24201_to_double(const void *pValue, double *nValue);
extern int get_array__24201_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24201(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24201_default_value(void *pValue);
extern SimTypeUtils _Type_array__24201_Utils;

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
 ** array__24213 
 ****************************************************************/
extern int array__24213_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__24213_string(const char *str, char **endptr);
extern int string_to_array__24213(const char *str, void *pValue, char **endptr);
extern int is_array__24213_allow_double_conversion();
extern int array__24213_to_double(const void *pValue, double *nValue);
extern int get_array__24213_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__24213(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__24213_default_value(void *pValue);
extern SimTypeUtils _Type_array__24213_Utils;

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
