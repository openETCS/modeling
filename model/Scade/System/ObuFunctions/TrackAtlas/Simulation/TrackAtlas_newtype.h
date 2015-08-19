#ifndef TRACKATLAS_TYPES_CONVERSION
#define TRACKATLAS_TYPES_CONVERSION

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
 ** struct__9719 
 ****************************************************************/
extern int struct__9719_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9719_string(const char *str, char **endptr);
extern int string_to_struct__9719(const char *str, void *pValue, char **endptr);
extern int is_struct__9719_allow_double_conversion();
extern int struct__9719_to_double(const void *pValue, double *nValue);
extern int get_struct__9719_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9719(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9719_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9719_Utils;

/****************************************************************
 ** struct__9739 
 ****************************************************************/
extern int struct__9739_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9739_string(const char *str, char **endptr);
extern int string_to_struct__9739(const char *str, void *pValue, char **endptr);
extern int is_struct__9739_allow_double_conversion();
extern int struct__9739_to_double(const void *pValue, double *nValue);
extern int get_struct__9739_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9739(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9739_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9739_Utils;

/****************************************************************
 ** struct__9744 
 ****************************************************************/
extern int struct__9744_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9744_string(const char *str, char **endptr);
extern int string_to_struct__9744(const char *str, void *pValue, char **endptr);
extern int is_struct__9744_allow_double_conversion();
extern int struct__9744_to_double(const void *pValue, double *nValue);
extern int get_struct__9744_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9744(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9744_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9744_Utils;

/****************************************************************
 ** struct__9763 
 ****************************************************************/
extern int struct__9763_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9763_string(const char *str, char **endptr);
extern int string_to_struct__9763(const char *str, void *pValue, char **endptr);
extern int is_struct__9763_allow_double_conversion();
extern int struct__9763_to_double(const void *pValue, double *nValue);
extern int get_struct__9763_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9763(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9763_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9763_Utils;

/****************************************************************
 ** struct__9768 
 ****************************************************************/
extern int struct__9768_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9768_string(const char *str, char **endptr);
extern int string_to_struct__9768(const char *str, void *pValue, char **endptr);
extern int is_struct__9768_allow_double_conversion();
extern int struct__9768_to_double(const void *pValue, double *nValue);
extern int get_struct__9768_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9768(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9768_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9768_Utils;

/****************************************************************
 ** struct__9776 
 ****************************************************************/
extern int struct__9776_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9776_string(const char *str, char **endptr);
extern int string_to_struct__9776(const char *str, void *pValue, char **endptr);
extern int is_struct__9776_allow_double_conversion();
extern int struct__9776_to_double(const void *pValue, double *nValue);
extern int get_struct__9776_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9776(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9776_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9776_Utils;

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
 ** struct__9791 
 ****************************************************************/
extern int struct__9791_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9791_string(const char *str, char **endptr);
extern int string_to_struct__9791(const char *str, void *pValue, char **endptr);
extern int is_struct__9791_allow_double_conversion();
extern int struct__9791_to_double(const void *pValue, double *nValue);
extern int get_struct__9791_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9791(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9791_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9791_Utils;

/****************************************************************
 ** array__9796 
 ****************************************************************/
extern int array__9796_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__9796_string(const char *str, char **endptr);
extern int string_to_array__9796(const char *str, void *pValue, char **endptr);
extern int is_array__9796_allow_double_conversion();
extern int array__9796_to_double(const void *pValue, double *nValue);
extern int get_array__9796_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__9796(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__9796_default_value(void *pValue);
extern SimTypeUtils _Type_array__9796_Utils;

/****************************************************************
 ** struct__9799 
 ****************************************************************/
extern int struct__9799_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9799_string(const char *str, char **endptr);
extern int string_to_struct__9799(const char *str, void *pValue, char **endptr);
extern int is_struct__9799_allow_double_conversion();
extern int struct__9799_to_double(const void *pValue, double *nValue);
extern int get_struct__9799_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9799(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9799_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9799_Utils;

/****************************************************************
 ** struct__9815 
 ****************************************************************/
extern int struct__9815_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9815_string(const char *str, char **endptr);
extern int string_to_struct__9815(const char *str, void *pValue, char **endptr);
extern int is_struct__9815_allow_double_conversion();
extern int struct__9815_to_double(const void *pValue, double *nValue);
extern int get_struct__9815_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9815(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9815_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9815_Utils;

/****************************************************************
 ** struct__9820 
 ****************************************************************/
extern int struct__9820_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9820_string(const char *str, char **endptr);
extern int string_to_struct__9820(const char *str, void *pValue, char **endptr);
extern int is_struct__9820_allow_double_conversion();
extern int struct__9820_to_double(const void *pValue, double *nValue);
extern int get_struct__9820_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9820(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9820_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9820_Utils;

/****************************************************************
 ** struct__9825 
 ****************************************************************/
extern int struct__9825_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9825_string(const char *str, char **endptr);
extern int string_to_struct__9825(const char *str, void *pValue, char **endptr);
extern int is_struct__9825_allow_double_conversion();
extern int struct__9825_to_double(const void *pValue, double *nValue);
extern int get_struct__9825_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9825(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9825_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9825_Utils;

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
 ** struct__9833 
 ****************************************************************/
extern int struct__9833_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9833_string(const char *str, char **endptr);
extern int string_to_struct__9833(const char *str, void *pValue, char **endptr);
extern int is_struct__9833_allow_double_conversion();
extern int struct__9833_to_double(const void *pValue, double *nValue);
extern int get_struct__9833_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9833(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9833_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9833_Utils;

/****************************************************************
 ** array__9838 
 ****************************************************************/
extern int array__9838_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__9838_string(const char *str, char **endptr);
extern int string_to_array__9838(const char *str, void *pValue, char **endptr);
extern int is_array__9838_allow_double_conversion();
extern int array__9838_to_double(const void *pValue, double *nValue);
extern int get_array__9838_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__9838(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__9838_default_value(void *pValue);
extern SimTypeUtils _Type_array__9838_Utils;

/****************************************************************
 ** struct__9841 
 ****************************************************************/
extern int struct__9841_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9841_string(const char *str, char **endptr);
extern int string_to_struct__9841(const char *str, void *pValue, char **endptr);
extern int is_struct__9841_allow_double_conversion();
extern int struct__9841_to_double(const void *pValue, double *nValue);
extern int get_struct__9841_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9841(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9841_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9841_Utils;

/****************************************************************
 ** struct__9847 
 ****************************************************************/
extern int struct__9847_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9847_string(const char *str, char **endptr);
extern int string_to_struct__9847(const char *str, void *pValue, char **endptr);
extern int is_struct__9847_allow_double_conversion();
extern int struct__9847_to_double(const void *pValue, double *nValue);
extern int get_struct__9847_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9847(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9847_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9847_Utils;

/****************************************************************
 ** struct__9857 
 ****************************************************************/
extern int struct__9857_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9857_string(const char *str, char **endptr);
extern int string_to_struct__9857(const char *str, void *pValue, char **endptr);
extern int is_struct__9857_allow_double_conversion();
extern int struct__9857_to_double(const void *pValue, double *nValue);
extern int get_struct__9857_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9857(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9857_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9857_Utils;

/****************************************************************
 ** struct__9863 
 ****************************************************************/
extern int struct__9863_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9863_string(const char *str, char **endptr);
extern int string_to_struct__9863(const char *str, void *pValue, char **endptr);
extern int is_struct__9863_allow_double_conversion();
extern int struct__9863_to_double(const void *pValue, double *nValue);
extern int get_struct__9863_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9863(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9863_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9863_Utils;

/****************************************************************
 ** array__9872 
 ****************************************************************/
extern int array__9872_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__9872_string(const char *str, char **endptr);
extern int string_to_array__9872(const char *str, void *pValue, char **endptr);
extern int is_array__9872_allow_double_conversion();
extern int array__9872_to_double(const void *pValue, double *nValue);
extern int get_array__9872_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__9872(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__9872_default_value(void *pValue);
extern SimTypeUtils _Type_array__9872_Utils;

/****************************************************************
 ** struct__9875 
 ****************************************************************/
extern int struct__9875_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9875_string(const char *str, char **endptr);
extern int string_to_struct__9875(const char *str, void *pValue, char **endptr);
extern int is_struct__9875_allow_double_conversion();
extern int struct__9875_to_double(const void *pValue, double *nValue);
extern int get_struct__9875_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9875(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9875_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9875_Utils;

/****************************************************************
 ** struct__9880 
 ****************************************************************/
extern int struct__9880_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9880_string(const char *str, char **endptr);
extern int string_to_struct__9880(const char *str, void *pValue, char **endptr);
extern int is_struct__9880_allow_double_conversion();
extern int struct__9880_to_double(const void *pValue, double *nValue);
extern int get_struct__9880_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9880(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9880_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9880_Utils;

/****************************************************************
 ** struct__9886 
 ****************************************************************/
extern int struct__9886_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9886_string(const char *str, char **endptr);
extern int string_to_struct__9886(const char *str, void *pValue, char **endptr);
extern int is_struct__9886_allow_double_conversion();
extern int struct__9886_to_double(const void *pValue, double *nValue);
extern int get_struct__9886_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9886(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9886_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9886_Utils;

/****************************************************************
 ** struct__9904 
 ****************************************************************/
extern int struct__9904_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9904_string(const char *str, char **endptr);
extern int string_to_struct__9904(const char *str, void *pValue, char **endptr);
extern int is_struct__9904_allow_double_conversion();
extern int struct__9904_to_double(const void *pValue, double *nValue);
extern int get_struct__9904_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9904(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9904_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9904_Utils;

/****************************************************************
 ** struct__9910 
 ****************************************************************/
extern int struct__9910_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9910_string(const char *str, char **endptr);
extern int string_to_struct__9910(const char *str, void *pValue, char **endptr);
extern int is_struct__9910_allow_double_conversion();
extern int struct__9910_to_double(const void *pValue, double *nValue);
extern int get_struct__9910_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9910(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9910_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9910_Utils;

/****************************************************************
 ** struct__9924 
 ****************************************************************/
extern int struct__9924_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9924_string(const char *str, char **endptr);
extern int string_to_struct__9924(const char *str, void *pValue, char **endptr);
extern int is_struct__9924_allow_double_conversion();
extern int struct__9924_to_double(const void *pValue, double *nValue);
extern int get_struct__9924_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9924(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9924_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9924_Utils;

/****************************************************************
 ** array__9933 
 ****************************************************************/
extern int array__9933_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__9933_string(const char *str, char **endptr);
extern int string_to_array__9933(const char *str, void *pValue, char **endptr);
extern int is_array__9933_allow_double_conversion();
extern int array__9933_to_double(const void *pValue, double *nValue);
extern int get_array__9933_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__9933(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__9933_default_value(void *pValue);
extern SimTypeUtils _Type_array__9933_Utils;

/****************************************************************
 ** struct__9936 
 ****************************************************************/
extern int struct__9936_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9936_string(const char *str, char **endptr);
extern int string_to_struct__9936(const char *str, void *pValue, char **endptr);
extern int is_struct__9936_allow_double_conversion();
extern int struct__9936_to_double(const void *pValue, double *nValue);
extern int get_struct__9936_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9936(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9936_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9936_Utils;

/****************************************************************
 ** struct__9943 
 ****************************************************************/
extern int struct__9943_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9943_string(const char *str, char **endptr);
extern int string_to_struct__9943(const char *str, void *pValue, char **endptr);
extern int is_struct__9943_allow_double_conversion();
extern int struct__9943_to_double(const void *pValue, double *nValue);
extern int get_struct__9943_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9943(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9943_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9943_Utils;

/****************************************************************
 ** struct__9949 
 ****************************************************************/
extern int struct__9949_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9949_string(const char *str, char **endptr);
extern int string_to_struct__9949(const char *str, void *pValue, char **endptr);
extern int is_struct__9949_allow_double_conversion();
extern int struct__9949_to_double(const void *pValue, double *nValue);
extern int get_struct__9949_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9949(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9949_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9949_Utils;

/****************************************************************
 ** struct__9959 
 ****************************************************************/
extern int struct__9959_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9959_string(const char *str, char **endptr);
extern int string_to_struct__9959(const char *str, void *pValue, char **endptr);
extern int is_struct__9959_allow_double_conversion();
extern int struct__9959_to_double(const void *pValue, double *nValue);
extern int get_struct__9959_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9959(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9959_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9959_Utils;

/****************************************************************
 ** struct__9977 
 ****************************************************************/
extern int struct__9977_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9977_string(const char *str, char **endptr);
extern int string_to_struct__9977(const char *str, void *pValue, char **endptr);
extern int is_struct__9977_allow_double_conversion();
extern int struct__9977_to_double(const void *pValue, double *nValue);
extern int get_struct__9977_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9977(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9977_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9977_Utils;

/****************************************************************
 ** struct__9983 
 ****************************************************************/
extern int struct__9983_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9983_string(const char *str, char **endptr);
extern int string_to_struct__9983(const char *str, void *pValue, char **endptr);
extern int is_struct__9983_allow_double_conversion();
extern int struct__9983_to_double(const void *pValue, double *nValue);
extern int get_struct__9983_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9983(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9983_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9983_Utils;

/****************************************************************
 ** struct__9994 
 ****************************************************************/
extern int struct__9994_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__9994_string(const char *str, char **endptr);
extern int string_to_struct__9994(const char *str, void *pValue, char **endptr);
extern int is_struct__9994_allow_double_conversion();
extern int struct__9994_to_double(const void *pValue, double *nValue);
extern int get_struct__9994_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__9994(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__9994_default_value(void *pValue);
extern SimTypeUtils _Type_struct__9994_Utils;

/****************************************************************
 ** struct__10011 
 ****************************************************************/
extern int struct__10011_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10011_string(const char *str, char **endptr);
extern int string_to_struct__10011(const char *str, void *pValue, char **endptr);
extern int is_struct__10011_allow_double_conversion();
extern int struct__10011_to_double(const void *pValue, double *nValue);
extern int get_struct__10011_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10011(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10011_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10011_Utils;

/****************************************************************
 ** struct__10016 
 ****************************************************************/
extern int struct__10016_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10016_string(const char *str, char **endptr);
extern int string_to_struct__10016(const char *str, void *pValue, char **endptr);
extern int is_struct__10016_allow_double_conversion();
extern int struct__10016_to_double(const void *pValue, double *nValue);
extern int get_struct__10016_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10016(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10016_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10016_Utils;

/****************************************************************
 ** struct__10026 
 ****************************************************************/
extern int struct__10026_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10026_string(const char *str, char **endptr);
extern int string_to_struct__10026(const char *str, void *pValue, char **endptr);
extern int is_struct__10026_allow_double_conversion();
extern int struct__10026_to_double(const void *pValue, double *nValue);
extern int get_struct__10026_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10026(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10026_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10026_Utils;

/****************************************************************
 ** struct__10044 
 ****************************************************************/
extern int struct__10044_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10044_string(const char *str, char **endptr);
extern int string_to_struct__10044(const char *str, void *pValue, char **endptr);
extern int is_struct__10044_allow_double_conversion();
extern int struct__10044_to_double(const void *pValue, double *nValue);
extern int get_struct__10044_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10044(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10044_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10044_Utils;

/****************************************************************
 ** struct__10051 
 ****************************************************************/
extern int struct__10051_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10051_string(const char *str, char **endptr);
extern int string_to_struct__10051(const char *str, void *pValue, char **endptr);
extern int is_struct__10051_allow_double_conversion();
extern int struct__10051_to_double(const void *pValue, double *nValue);
extern int get_struct__10051_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10051(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10051_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10051_Utils;

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
 ** struct__10066 
 ****************************************************************/
extern int struct__10066_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10066_string(const char *str, char **endptr);
extern int string_to_struct__10066(const char *str, void *pValue, char **endptr);
extern int is_struct__10066_allow_double_conversion();
extern int struct__10066_to_double(const void *pValue, double *nValue);
extern int get_struct__10066_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10066(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10066_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10066_Utils;

/****************************************************************
 ** array__10074 
 ****************************************************************/
extern int array__10074_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10074_string(const char *str, char **endptr);
extern int string_to_array__10074(const char *str, void *pValue, char **endptr);
extern int is_array__10074_allow_double_conversion();
extern int array__10074_to_double(const void *pValue, double *nValue);
extern int get_array__10074_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10074(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10074_default_value(void *pValue);
extern SimTypeUtils _Type_array__10074_Utils;

/****************************************************************
 ** struct__10077 
 ****************************************************************/
extern int struct__10077_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10077_string(const char *str, char **endptr);
extern int string_to_struct__10077(const char *str, void *pValue, char **endptr);
extern int is_struct__10077_allow_double_conversion();
extern int struct__10077_to_double(const void *pValue, double *nValue);
extern int get_struct__10077_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10077(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10077_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10077_Utils;

/****************************************************************
 ** struct__10082 
 ****************************************************************/
extern int struct__10082_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10082_string(const char *str, char **endptr);
extern int string_to_struct__10082(const char *str, void *pValue, char **endptr);
extern int is_struct__10082_allow_double_conversion();
extern int struct__10082_to_double(const void *pValue, double *nValue);
extern int get_struct__10082_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10082(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10082_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10082_Utils;

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
 ** struct__10098 
 ****************************************************************/
extern int struct__10098_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10098_string(const char *str, char **endptr);
extern int string_to_struct__10098(const char *str, void *pValue, char **endptr);
extern int is_struct__10098_allow_double_conversion();
extern int struct__10098_to_double(const void *pValue, double *nValue);
extern int get_struct__10098_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10098(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10098_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10098_Utils;

/****************************************************************
 ** array__10106 
 ****************************************************************/
extern int array__10106_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10106_string(const char *str, char **endptr);
extern int string_to_array__10106(const char *str, void *pValue, char **endptr);
extern int is_array__10106_allow_double_conversion();
extern int array__10106_to_double(const void *pValue, double *nValue);
extern int get_array__10106_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10106(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10106_default_value(void *pValue);
extern SimTypeUtils _Type_array__10106_Utils;

/****************************************************************
 ** struct__10109 
 ****************************************************************/
extern int struct__10109_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10109_string(const char *str, char **endptr);
extern int string_to_struct__10109(const char *str, void *pValue, char **endptr);
extern int is_struct__10109_allow_double_conversion();
extern int struct__10109_to_double(const void *pValue, double *nValue);
extern int get_struct__10109_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10109(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10109_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10109_Utils;

/****************************************************************
 ** struct__10134 
 ****************************************************************/
extern int struct__10134_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10134_string(const char *str, char **endptr);
extern int string_to_struct__10134(const char *str, void *pValue, char **endptr);
extern int is_struct__10134_allow_double_conversion();
extern int struct__10134_to_double(const void *pValue, double *nValue);
extern int get_struct__10134_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10134(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10134_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10134_Utils;

/****************************************************************
 ** struct__10140 
 ****************************************************************/
extern int struct__10140_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10140_string(const char *str, char **endptr);
extern int string_to_struct__10140(const char *str, void *pValue, char **endptr);
extern int is_struct__10140_allow_double_conversion();
extern int struct__10140_to_double(const void *pValue, double *nValue);
extern int get_struct__10140_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10140(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10140_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10140_Utils;

/****************************************************************
 ** struct__10148 
 ****************************************************************/
extern int struct__10148_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10148_string(const char *str, char **endptr);
extern int string_to_struct__10148(const char *str, void *pValue, char **endptr);
extern int is_struct__10148_allow_double_conversion();
extern int struct__10148_to_double(const void *pValue, double *nValue);
extern int get_struct__10148_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10148(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10148_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10148_Utils;

/****************************************************************
 ** struct__10156 
 ****************************************************************/
extern int struct__10156_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10156_string(const char *str, char **endptr);
extern int string_to_struct__10156(const char *str, void *pValue, char **endptr);
extern int is_struct__10156_allow_double_conversion();
extern int struct__10156_to_double(const void *pValue, double *nValue);
extern int get_struct__10156_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10156(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10156_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10156_Utils;

/****************************************************************
 ** struct__10164 
 ****************************************************************/
extern int struct__10164_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10164_string(const char *str, char **endptr);
extern int string_to_struct__10164(const char *str, void *pValue, char **endptr);
extern int is_struct__10164_allow_double_conversion();
extern int struct__10164_to_double(const void *pValue, double *nValue);
extern int get_struct__10164_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10164(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10164_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10164_Utils;

/****************************************************************
 ** struct__10182 
 ****************************************************************/
extern int struct__10182_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10182_string(const char *str, char **endptr);
extern int string_to_struct__10182(const char *str, void *pValue, char **endptr);
extern int is_struct__10182_allow_double_conversion();
extern int struct__10182_to_double(const void *pValue, double *nValue);
extern int get_struct__10182_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10182(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10182_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10182_Utils;

/****************************************************************
 ** array__10188 
 ****************************************************************/
extern int array__10188_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10188_string(const char *str, char **endptr);
extern int string_to_array__10188(const char *str, void *pValue, char **endptr);
extern int is_array__10188_allow_double_conversion();
extern int array__10188_to_double(const void *pValue, double *nValue);
extern int get_array__10188_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10188(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10188_default_value(void *pValue);
extern SimTypeUtils _Type_array__10188_Utils;

/****************************************************************
 ** struct__10191 
 ****************************************************************/
extern int struct__10191_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10191_string(const char *str, char **endptr);
extern int string_to_struct__10191(const char *str, void *pValue, char **endptr);
extern int is_struct__10191_allow_double_conversion();
extern int struct__10191_to_double(const void *pValue, double *nValue);
extern int get_struct__10191_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10191(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10191_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10191_Utils;

/****************************************************************
 ** array__10198 
 ****************************************************************/
extern int array__10198_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10198_string(const char *str, char **endptr);
extern int string_to_array__10198(const char *str, void *pValue, char **endptr);
extern int is_array__10198_allow_double_conversion();
extern int array__10198_to_double(const void *pValue, double *nValue);
extern int get_array__10198_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10198(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10198_default_value(void *pValue);
extern SimTypeUtils _Type_array__10198_Utils;

/****************************************************************
 ** struct__10201 
 ****************************************************************/
extern int struct__10201_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10201_string(const char *str, char **endptr);
extern int string_to_struct__10201(const char *str, void *pValue, char **endptr);
extern int is_struct__10201_allow_double_conversion();
extern int struct__10201_to_double(const void *pValue, double *nValue);
extern int get_struct__10201_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10201(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10201_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10201_Utils;

/****************************************************************
 ** struct__10214 
 ****************************************************************/
extern int struct__10214_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10214_string(const char *str, char **endptr);
extern int string_to_struct__10214(const char *str, void *pValue, char **endptr);
extern int is_struct__10214_allow_double_conversion();
extern int struct__10214_to_double(const void *pValue, double *nValue);
extern int get_struct__10214_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10214(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10214_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10214_Utils;

/****************************************************************
 ** struct__10221 
 ****************************************************************/
extern int struct__10221_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10221_string(const char *str, char **endptr);
extern int string_to_struct__10221(const char *str, void *pValue, char **endptr);
extern int is_struct__10221_allow_double_conversion();
extern int struct__10221_to_double(const void *pValue, double *nValue);
extern int get_struct__10221_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10221(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10221_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10221_Utils;

/****************************************************************
 ** array__10229 
 ****************************************************************/
extern int array__10229_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10229_string(const char *str, char **endptr);
extern int string_to_array__10229(const char *str, void *pValue, char **endptr);
extern int is_array__10229_allow_double_conversion();
extern int array__10229_to_double(const void *pValue, double *nValue);
extern int get_array__10229_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10229(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10229_default_value(void *pValue);
extern SimTypeUtils _Type_array__10229_Utils;

/****************************************************************
 ** array__10232 
 ****************************************************************/
extern int array__10232_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10232_string(const char *str, char **endptr);
extern int string_to_array__10232(const char *str, void *pValue, char **endptr);
extern int is_array__10232_allow_double_conversion();
extern int array__10232_to_double(const void *pValue, double *nValue);
extern int get_array__10232_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10232(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10232_default_value(void *pValue);
extern SimTypeUtils _Type_array__10232_Utils;

/****************************************************************
 ** struct__10235 
 ****************************************************************/
extern int struct__10235_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10235_string(const char *str, char **endptr);
extern int string_to_struct__10235(const char *str, void *pValue, char **endptr);
extern int is_struct__10235_allow_double_conversion();
extern int struct__10235_to_double(const void *pValue, double *nValue);
extern int get_struct__10235_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10235(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10235_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10235_Utils;

/****************************************************************
 ** array__10240 
 ****************************************************************/
extern int array__10240_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10240_string(const char *str, char **endptr);
extern int string_to_array__10240(const char *str, void *pValue, char **endptr);
extern int is_array__10240_allow_double_conversion();
extern int array__10240_to_double(const void *pValue, double *nValue);
extern int get_array__10240_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10240(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10240_default_value(void *pValue);
extern SimTypeUtils _Type_array__10240_Utils;

/****************************************************************
 ** struct__10243 
 ****************************************************************/
extern int struct__10243_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10243_string(const char *str, char **endptr);
extern int string_to_struct__10243(const char *str, void *pValue, char **endptr);
extern int is_struct__10243_allow_double_conversion();
extern int struct__10243_to_double(const void *pValue, double *nValue);
extern int get_struct__10243_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10243(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10243_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10243_Utils;

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
 ** struct__10276 
 ****************************************************************/
extern int struct__10276_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10276_string(const char *str, char **endptr);
extern int string_to_struct__10276(const char *str, void *pValue, char **endptr);
extern int is_struct__10276_allow_double_conversion();
extern int struct__10276_to_double(const void *pValue, double *nValue);
extern int get_struct__10276_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10276(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10276_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10276_Utils;

/****************************************************************
 ** array__10282 
 ****************************************************************/
extern int array__10282_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10282_string(const char *str, char **endptr);
extern int string_to_array__10282(const char *str, void *pValue, char **endptr);
extern int is_array__10282_allow_double_conversion();
extern int array__10282_to_double(const void *pValue, double *nValue);
extern int get_array__10282_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10282(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10282_default_value(void *pValue);
extern SimTypeUtils _Type_array__10282_Utils;

/****************************************************************
 ** struct__10285 
 ****************************************************************/
extern int struct__10285_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10285_string(const char *str, char **endptr);
extern int string_to_struct__10285(const char *str, void *pValue, char **endptr);
extern int is_struct__10285_allow_double_conversion();
extern int struct__10285_to_double(const void *pValue, double *nValue);
extern int get_struct__10285_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10285(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10285_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10285_Utils;

/****************************************************************
 ** array__10292 
 ****************************************************************/
extern int array__10292_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10292_string(const char *str, char **endptr);
extern int string_to_array__10292(const char *str, void *pValue, char **endptr);
extern int is_array__10292_allow_double_conversion();
extern int array__10292_to_double(const void *pValue, double *nValue);
extern int get_array__10292_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10292(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10292_default_value(void *pValue);
extern SimTypeUtils _Type_array__10292_Utils;

/****************************************************************
 ** struct__10295 
 ****************************************************************/
extern int struct__10295_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10295_string(const char *str, char **endptr);
extern int string_to_struct__10295(const char *str, void *pValue, char **endptr);
extern int is_struct__10295_allow_double_conversion();
extern int struct__10295_to_double(const void *pValue, double *nValue);
extern int get_struct__10295_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10295(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10295_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10295_Utils;

/****************************************************************
 ** array__10307 
 ****************************************************************/
extern int array__10307_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10307_string(const char *str, char **endptr);
extern int string_to_array__10307(const char *str, void *pValue, char **endptr);
extern int is_array__10307_allow_double_conversion();
extern int array__10307_to_double(const void *pValue, double *nValue);
extern int get_array__10307_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10307(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10307_default_value(void *pValue);
extern SimTypeUtils _Type_array__10307_Utils;

/****************************************************************
 ** struct__10310 
 ****************************************************************/
extern int struct__10310_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10310_string(const char *str, char **endptr);
extern int string_to_struct__10310(const char *str, void *pValue, char **endptr);
extern int is_struct__10310_allow_double_conversion();
extern int struct__10310_to_double(const void *pValue, double *nValue);
extern int get_struct__10310_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10310(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10310_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10310_Utils;

/****************************************************************
 ** array__10317 
 ****************************************************************/
extern int array__10317_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10317_string(const char *str, char **endptr);
extern int string_to_array__10317(const char *str, void *pValue, char **endptr);
extern int is_array__10317_allow_double_conversion();
extern int array__10317_to_double(const void *pValue, double *nValue);
extern int get_array__10317_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10317(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10317_default_value(void *pValue);
extern SimTypeUtils _Type_array__10317_Utils;

/****************************************************************
 ** struct__10320 
 ****************************************************************/
extern int struct__10320_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10320_string(const char *str, char **endptr);
extern int string_to_struct__10320(const char *str, void *pValue, char **endptr);
extern int is_struct__10320_allow_double_conversion();
extern int struct__10320_to_double(const void *pValue, double *nValue);
extern int get_struct__10320_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10320(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10320_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10320_Utils;

/****************************************************************
 ** struct__10351 
 ****************************************************************/
extern int struct__10351_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10351_string(const char *str, char **endptr);
extern int string_to_struct__10351(const char *str, void *pValue, char **endptr);
extern int is_struct__10351_allow_double_conversion();
extern int struct__10351_to_double(const void *pValue, double *nValue);
extern int get_struct__10351_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10351(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10351_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10351_Utils;

/****************************************************************
 ** struct__10356 
 ****************************************************************/
extern int struct__10356_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10356_string(const char *str, char **endptr);
extern int string_to_struct__10356(const char *str, void *pValue, char **endptr);
extern int is_struct__10356_allow_double_conversion();
extern int struct__10356_to_double(const void *pValue, double *nValue);
extern int get_struct__10356_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10356(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10356_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10356_Utils;

/****************************************************************
 ** struct__10411 
 ****************************************************************/
extern int struct__10411_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10411_string(const char *str, char **endptr);
extern int string_to_struct__10411(const char *str, void *pValue, char **endptr);
extern int is_struct__10411_allow_double_conversion();
extern int struct__10411_to_double(const void *pValue, double *nValue);
extern int get_struct__10411_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10411(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10411_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10411_Utils;

/****************************************************************
 ** array__10416 
 ****************************************************************/
extern int array__10416_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10416_string(const char *str, char **endptr);
extern int string_to_array__10416(const char *str, void *pValue, char **endptr);
extern int is_array__10416_allow_double_conversion();
extern int array__10416_to_double(const void *pValue, double *nValue);
extern int get_array__10416_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10416(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10416_default_value(void *pValue);
extern SimTypeUtils _Type_array__10416_Utils;

/****************************************************************
 ** struct__10419 
 ****************************************************************/
extern int struct__10419_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10419_string(const char *str, char **endptr);
extern int string_to_struct__10419(const char *str, void *pValue, char **endptr);
extern int is_struct__10419_allow_double_conversion();
extern int struct__10419_to_double(const void *pValue, double *nValue);
extern int get_struct__10419_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10419(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10419_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10419_Utils;

/****************************************************************
 ** array__10425 
 ****************************************************************/
extern int array__10425_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10425_string(const char *str, char **endptr);
extern int string_to_array__10425(const char *str, void *pValue, char **endptr);
extern int is_array__10425_allow_double_conversion();
extern int array__10425_to_double(const void *pValue, double *nValue);
extern int get_array__10425_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10425(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10425_default_value(void *pValue);
extern SimTypeUtils _Type_array__10425_Utils;

/****************************************************************
 ** struct__10428 
 ****************************************************************/
extern int struct__10428_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10428_string(const char *str, char **endptr);
extern int string_to_struct__10428(const char *str, void *pValue, char **endptr);
extern int is_struct__10428_allow_double_conversion();
extern int struct__10428_to_double(const void *pValue, double *nValue);
extern int get_struct__10428_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10428(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10428_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10428_Utils;

/****************************************************************
 ** array__10437 
 ****************************************************************/
extern int array__10437_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10437_string(const char *str, char **endptr);
extern int string_to_array__10437(const char *str, void *pValue, char **endptr);
extern int is_array__10437_allow_double_conversion();
extern int array__10437_to_double(const void *pValue, double *nValue);
extern int get_array__10437_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10437(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10437_default_value(void *pValue);
extern SimTypeUtils _Type_array__10437_Utils;

/****************************************************************
 ** struct__10440 
 ****************************************************************/
extern int struct__10440_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10440_string(const char *str, char **endptr);
extern int string_to_struct__10440(const char *str, void *pValue, char **endptr);
extern int is_struct__10440_allow_double_conversion();
extern int struct__10440_to_double(const void *pValue, double *nValue);
extern int get_struct__10440_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10440(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10440_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10440_Utils;

/****************************************************************
 ** struct__10447 
 ****************************************************************/
extern int struct__10447_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10447_string(const char *str, char **endptr);
extern int string_to_struct__10447(const char *str, void *pValue, char **endptr);
extern int is_struct__10447_allow_double_conversion();
extern int struct__10447_to_double(const void *pValue, double *nValue);
extern int get_struct__10447_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10447(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10447_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10447_Utils;

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
 ** array__10459 
 ****************************************************************/
extern int array__10459_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10459_string(const char *str, char **endptr);
extern int string_to_array__10459(const char *str, void *pValue, char **endptr);
extern int is_array__10459_allow_double_conversion();
extern int array__10459_to_double(const void *pValue, double *nValue);
extern int get_array__10459_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10459(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10459_default_value(void *pValue);
extern SimTypeUtils _Type_array__10459_Utils;

/****************************************************************
 ** struct__10462 
 ****************************************************************/
extern int struct__10462_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10462_string(const char *str, char **endptr);
extern int string_to_struct__10462(const char *str, void *pValue, char **endptr);
extern int is_struct__10462_allow_double_conversion();
extern int struct__10462_to_double(const void *pValue, double *nValue);
extern int get_struct__10462_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10462(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10462_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10462_Utils;

/****************************************************************
 ** array__10468 
 ****************************************************************/
extern int array__10468_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10468_string(const char *str, char **endptr);
extern int string_to_array__10468(const char *str, void *pValue, char **endptr);
extern int is_array__10468_allow_double_conversion();
extern int array__10468_to_double(const void *pValue, double *nValue);
extern int get_array__10468_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10468(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10468_default_value(void *pValue);
extern SimTypeUtils _Type_array__10468_Utils;

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
 ** struct__10477 
 ****************************************************************/
extern int struct__10477_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10477_string(const char *str, char **endptr);
extern int string_to_struct__10477(const char *str, void *pValue, char **endptr);
extern int is_struct__10477_allow_double_conversion();
extern int struct__10477_to_double(const void *pValue, double *nValue);
extern int get_struct__10477_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10477(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10477_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10477_Utils;

/****************************************************************
 ** struct__10482 
 ****************************************************************/
extern int struct__10482_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10482_string(const char *str, char **endptr);
extern int string_to_struct__10482(const char *str, void *pValue, char **endptr);
extern int is_struct__10482_allow_double_conversion();
extern int struct__10482_to_double(const void *pValue, double *nValue);
extern int get_struct__10482_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10482(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10482_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10482_Utils;

/****************************************************************
 ** struct__10488 
 ****************************************************************/
extern int struct__10488_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10488_string(const char *str, char **endptr);
extern int string_to_struct__10488(const char *str, void *pValue, char **endptr);
extern int is_struct__10488_allow_double_conversion();
extern int struct__10488_to_double(const void *pValue, double *nValue);
extern int get_struct__10488_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10488(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10488_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10488_Utils;

/****************************************************************
 ** struct__10493 
 ****************************************************************/
extern int struct__10493_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10493_string(const char *str, char **endptr);
extern int string_to_struct__10493(const char *str, void *pValue, char **endptr);
extern int is_struct__10493_allow_double_conversion();
extern int struct__10493_to_double(const void *pValue, double *nValue);
extern int get_struct__10493_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10493(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10493_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10493_Utils;

/****************************************************************
 ** struct__10500 
 ****************************************************************/
extern int struct__10500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10500_string(const char *str, char **endptr);
extern int string_to_struct__10500(const char *str, void *pValue, char **endptr);
extern int is_struct__10500_allow_double_conversion();
extern int struct__10500_to_double(const void *pValue, double *nValue);
extern int get_struct__10500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10500(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10500_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10500_Utils;

/****************************************************************
 ** array__10505 
 ****************************************************************/
extern int array__10505_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10505_string(const char *str, char **endptr);
extern int string_to_array__10505(const char *str, void *pValue, char **endptr);
extern int is_array__10505_allow_double_conversion();
extern int array__10505_to_double(const void *pValue, double *nValue);
extern int get_array__10505_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10505(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10505_default_value(void *pValue);
extern SimTypeUtils _Type_array__10505_Utils;

/****************************************************************
 ** array__10508 
 ****************************************************************/
extern int array__10508_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10508_string(const char *str, char **endptr);
extern int string_to_array__10508(const char *str, void *pValue, char **endptr);
extern int is_array__10508_allow_double_conversion();
extern int array__10508_to_double(const void *pValue, double *nValue);
extern int get_array__10508_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10508(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10508_default_value(void *pValue);
extern SimTypeUtils _Type_array__10508_Utils;

/****************************************************************
 ** struct__10511 
 ****************************************************************/
extern int struct__10511_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10511_string(const char *str, char **endptr);
extern int string_to_struct__10511(const char *str, void *pValue, char **endptr);
extern int is_struct__10511_allow_double_conversion();
extern int struct__10511_to_double(const void *pValue, double *nValue);
extern int get_struct__10511_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10511(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10511_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10511_Utils;

/****************************************************************
 ** struct__10518 
 ****************************************************************/
extern int struct__10518_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10518_string(const char *str, char **endptr);
extern int string_to_struct__10518(const char *str, void *pValue, char **endptr);
extern int is_struct__10518_allow_double_conversion();
extern int struct__10518_to_double(const void *pValue, double *nValue);
extern int get_struct__10518_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10518(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10518_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10518_Utils;

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
 ** struct__10530 
 ****************************************************************/
extern int struct__10530_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10530_string(const char *str, char **endptr);
extern int string_to_struct__10530(const char *str, void *pValue, char **endptr);
extern int is_struct__10530_allow_double_conversion();
extern int struct__10530_to_double(const void *pValue, double *nValue);
extern int get_struct__10530_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10530(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10530_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10530_Utils;

/****************************************************************
 ** array__10537 
 ****************************************************************/
extern int array__10537_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10537_string(const char *str, char **endptr);
extern int string_to_array__10537(const char *str, void *pValue, char **endptr);
extern int is_array__10537_allow_double_conversion();
extern int array__10537_to_double(const void *pValue, double *nValue);
extern int get_array__10537_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10537(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10537_default_value(void *pValue);
extern SimTypeUtils _Type_array__10537_Utils;

/****************************************************************
 ** struct__10540 
 ****************************************************************/
extern int struct__10540_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10540_string(const char *str, char **endptr);
extern int string_to_struct__10540(const char *str, void *pValue, char **endptr);
extern int is_struct__10540_allow_double_conversion();
extern int struct__10540_to_double(const void *pValue, double *nValue);
extern int get_struct__10540_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10540(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10540_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10540_Utils;

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
 ** array__10560 
 ****************************************************************/
extern int array__10560_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10560_string(const char *str, char **endptr);
extern int string_to_array__10560(const char *str, void *pValue, char **endptr);
extern int is_array__10560_allow_double_conversion();
extern int array__10560_to_double(const void *pValue, double *nValue);
extern int get_array__10560_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10560(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10560_default_value(void *pValue);
extern SimTypeUtils _Type_array__10560_Utils;

/****************************************************************
 ** array__10563 
 ****************************************************************/
extern int array__10563_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10563_string(const char *str, char **endptr);
extern int string_to_array__10563(const char *str, void *pValue, char **endptr);
extern int is_array__10563_allow_double_conversion();
extern int array__10563_to_double(const void *pValue, double *nValue);
extern int get_array__10563_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10563(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10563_default_value(void *pValue);
extern SimTypeUtils _Type_array__10563_Utils;

/****************************************************************
 ** array__10566 
 ****************************************************************/
extern int array__10566_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10566_string(const char *str, char **endptr);
extern int string_to_array__10566(const char *str, void *pValue, char **endptr);
extern int is_array__10566_allow_double_conversion();
extern int array__10566_to_double(const void *pValue, double *nValue);
extern int get_array__10566_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10566(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10566_default_value(void *pValue);
extern SimTypeUtils _Type_array__10566_Utils;

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
 ** array__10572 
 ****************************************************************/
extern int array__10572_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10572_string(const char *str, char **endptr);
extern int string_to_array__10572(const char *str, void *pValue, char **endptr);
extern int is_array__10572_allow_double_conversion();
extern int array__10572_to_double(const void *pValue, double *nValue);
extern int get_array__10572_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10572(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10572_default_value(void *pValue);
extern SimTypeUtils _Type_array__10572_Utils;

/****************************************************************
 ** array__10575 
 ****************************************************************/
extern int array__10575_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10575_string(const char *str, char **endptr);
extern int string_to_array__10575(const char *str, void *pValue, char **endptr);
extern int is_array__10575_allow_double_conversion();
extern int array__10575_to_double(const void *pValue, double *nValue);
extern int get_array__10575_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10575(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10575_default_value(void *pValue);
extern SimTypeUtils _Type_array__10575_Utils;

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
 ** array__10581 
 ****************************************************************/
extern int array__10581_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10581_string(const char *str, char **endptr);
extern int string_to_array__10581(const char *str, void *pValue, char **endptr);
extern int is_array__10581_allow_double_conversion();
extern int array__10581_to_double(const void *pValue, double *nValue);
extern int get_array__10581_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10581(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10581_default_value(void *pValue);
extern SimTypeUtils _Type_array__10581_Utils;

/****************************************************************
 ** array__10584 
 ****************************************************************/
extern int array__10584_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10584_string(const char *str, char **endptr);
extern int string_to_array__10584(const char *str, void *pValue, char **endptr);
extern int is_array__10584_allow_double_conversion();
extern int array__10584_to_double(const void *pValue, double *nValue);
extern int get_array__10584_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10584(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10584_default_value(void *pValue);
extern SimTypeUtils _Type_array__10584_Utils;

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
 ** array__10593 
 ****************************************************************/
extern int array__10593_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10593_string(const char *str, char **endptr);
extern int string_to_array__10593(const char *str, void *pValue, char **endptr);
extern int is_array__10593_allow_double_conversion();
extern int array__10593_to_double(const void *pValue, double *nValue);
extern int get_array__10593_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10593(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10593_default_value(void *pValue);
extern SimTypeUtils _Type_array__10593_Utils;

/****************************************************************
 ** array__10596 
 ****************************************************************/
extern int array__10596_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10596_string(const char *str, char **endptr);
extern int string_to_array__10596(const char *str, void *pValue, char **endptr);
extern int is_array__10596_allow_double_conversion();
extern int array__10596_to_double(const void *pValue, double *nValue);
extern int get_array__10596_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10596(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10596_default_value(void *pValue);
extern SimTypeUtils _Type_array__10596_Utils;

/****************************************************************
 ** array__10599 
 ****************************************************************/
extern int array__10599_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10599_string(const char *str, char **endptr);
extern int string_to_array__10599(const char *str, void *pValue, char **endptr);
extern int is_array__10599_allow_double_conversion();
extern int array__10599_to_double(const void *pValue, double *nValue);
extern int get_array__10599_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10599(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10599_default_value(void *pValue);
extern SimTypeUtils _Type_array__10599_Utils;

/****************************************************************
 ** array__10602 
 ****************************************************************/
extern int array__10602_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10602_string(const char *str, char **endptr);
extern int string_to_array__10602(const char *str, void *pValue, char **endptr);
extern int is_array__10602_allow_double_conversion();
extern int array__10602_to_double(const void *pValue, double *nValue);
extern int get_array__10602_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10602(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10602_default_value(void *pValue);
extern SimTypeUtils _Type_array__10602_Utils;

/****************************************************************
 ** array__10605 
 ****************************************************************/
extern int array__10605_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10605_string(const char *str, char **endptr);
extern int string_to_array__10605(const char *str, void *pValue, char **endptr);
extern int is_array__10605_allow_double_conversion();
extern int array__10605_to_double(const void *pValue, double *nValue);
extern int get_array__10605_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10605(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10605_default_value(void *pValue);
extern SimTypeUtils _Type_array__10605_Utils;

/****************************************************************
 ** array__10608 
 ****************************************************************/
extern int array__10608_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10608_string(const char *str, char **endptr);
extern int string_to_array__10608(const char *str, void *pValue, char **endptr);
extern int is_array__10608_allow_double_conversion();
extern int array__10608_to_double(const void *pValue, double *nValue);
extern int get_array__10608_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10608(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10608_default_value(void *pValue);
extern SimTypeUtils _Type_array__10608_Utils;

/****************************************************************
 ** array__10611 
 ****************************************************************/
extern int array__10611_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10611_string(const char *str, char **endptr);
extern int string_to_array__10611(const char *str, void *pValue, char **endptr);
extern int is_array__10611_allow_double_conversion();
extern int array__10611_to_double(const void *pValue, double *nValue);
extern int get_array__10611_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10611(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10611_default_value(void *pValue);
extern SimTypeUtils _Type_array__10611_Utils;

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
 ** array__10617 
 ****************************************************************/
extern int array__10617_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10617_string(const char *str, char **endptr);
extern int string_to_array__10617(const char *str, void *pValue, char **endptr);
extern int is_array__10617_allow_double_conversion();
extern int array__10617_to_double(const void *pValue, double *nValue);
extern int get_array__10617_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10617(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10617_default_value(void *pValue);
extern SimTypeUtils _Type_array__10617_Utils;

/****************************************************************
 ** array__10620 
 ****************************************************************/
extern int array__10620_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10620_string(const char *str, char **endptr);
extern int string_to_array__10620(const char *str, void *pValue, char **endptr);
extern int is_array__10620_allow_double_conversion();
extern int array__10620_to_double(const void *pValue, double *nValue);
extern int get_array__10620_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10620(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10620_default_value(void *pValue);
extern SimTypeUtils _Type_array__10620_Utils;

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
 ** _5_P003_OBU_nid_c_sectionlist_enum_T_TM 
 ****************************************************************/
extern int _5_P003_OBU_nid_c_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__5_P003_OBU_nid_c_sectionlist_enum_T_TM_string(const char *str, char **endptr);
extern int string_to__5_P003_OBU_nid_c_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is__5_P003_OBU_nid_c_sectionlist_enum_T_TM_allow_double_conversion();
extern int _5_P003_OBU_nid_c_sectionlist_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get__5_P003_OBU_nid_c_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__5_P003_OBU_nid_c_sectionlist_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__5_P003_OBU_nid_c_sectionlist_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type__5_P003_OBU_nid_c_sectionlist_enum_T_TM_Utils;

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
 ** Speed_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int Speed_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Speed_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_Speed_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Speed_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int Speed_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Speed_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Speed_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Speed_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Speed_T_Obu_BasicTypes_Pkg_Utils;

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
 ** _4_MovementAuthoritySectionlist_t_TrackAtlasTypes 
 ****************************************************************/
extern int _4_MovementAuthoritySectionlist_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__4_MovementAuthoritySectionlist_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to__4_MovementAuthoritySectionlist_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is__4_MovementAuthoritySectionlist_t_TrackAtlasTypes_allow_double_conversion();
extern int _4_MovementAuthoritySectionlist_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get__4_MovementAuthoritySectionlist_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__4_MovementAuthoritySectionlist_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__4_MovementAuthoritySectionlist_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type__4_MovementAuthoritySectionlist_t_TrackAtlasTypes_Utils;

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
 ** _3_GradientProfile_for_DMI_section_t_TrackAtlasTypes 
 ****************************************************************/
extern int _3_GradientProfile_for_DMI_section_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes_allow_double_conversion();
extern int _3_GradientProfile_for_DMI_section_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes_Utils;

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
 ** FlagsForModeAndLevel_t_TrackAtlasTypes 
 ****************************************************************/
extern int FlagsForModeAndLevel_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_FlagsForModeAndLevel_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_FlagsForModeAndLevel_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_FlagsForModeAndLevel_t_TrackAtlasTypes_allow_double_conversion();
extern int FlagsForModeAndLevel_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_FlagsForModeAndLevel_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_FlagsForModeAndLevel_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_FlagsForModeAndLevel_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_FlagsForModeAndLevel_t_TrackAtlasTypes_Utils;

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
 ** _2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int _2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_allow_double_conversion();
extern int _2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_Utils;

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
 ** _1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 
 ****************************************************************/
extern int _1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to__1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is__1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2_allow_double_conversion();
extern int _1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get__1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type__1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2_Utils;

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
 ** T_Mode_Profile_Level_And_Mode_Types_Pkg 
 ****************************************************************/
extern int T_Mode_Profile_Level_And_Mode_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_Mode_Profile_Level_And_Mode_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_T_Mode_Profile_Level_And_Mode_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_T_Mode_Profile_Level_And_Mode_Types_Pkg_allow_double_conversion();
extern int T_Mode_Profile_Level_And_Mode_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_T_Mode_Profile_Level_And_Mode_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_Mode_Profile_Level_And_Mode_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_Mode_Profile_Level_And_Mode_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_T_Mode_Profile_Level_And_Mode_Types_Pkg_Utils;

/****************************************************************
 ** T_MA_Level_And_Mode_Types_Pkg 
 ****************************************************************/
extern int T_MA_Level_And_Mode_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_MA_Level_And_Mode_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_T_MA_Level_And_Mode_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_T_MA_Level_And_Mode_Types_Pkg_allow_double_conversion();
extern int T_MA_Level_And_Mode_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_T_MA_Level_And_Mode_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_MA_Level_And_Mode_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_MA_Level_And_Mode_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_T_MA_Level_And_Mode_Types_Pkg_Utils;

/****************************************************************
 ** T_ERTMS_capabilities_Level_And_Mode_Types_Pkg 
 ****************************************************************/
extern int T_ERTMS_capabilities_Level_And_Mode_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg_allow_double_conversion();
extern int T_ERTMS_capabilities_Level_And_Mode_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg_Utils;

/****************************************************************
 ** T_Reversing_Data_Level_And_Mode_Types_Pkg 
 ****************************************************************/
extern int T_Reversing_Data_Level_And_Mode_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_Reversing_Data_Level_And_Mode_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_T_Reversing_Data_Level_And_Mode_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_T_Reversing_Data_Level_And_Mode_Types_Pkg_allow_double_conversion();
extern int T_Reversing_Data_Level_And_Mode_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_T_Reversing_Data_Level_And_Mode_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_Reversing_Data_Level_And_Mode_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_Reversing_Data_Level_And_Mode_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_T_Reversing_Data_Level_And_Mode_Types_Pkg_Utils;

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


#endif /*TRACKATLAS_TYPES_CONVERSION */
