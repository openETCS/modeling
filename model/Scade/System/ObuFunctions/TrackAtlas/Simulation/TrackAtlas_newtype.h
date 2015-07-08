#ifndef TRACKATLAS_TYPES_CONVERSION
#define TRACKATLAS_TYPES_CONVERSION

#include "NewSmuTypes.h"

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
 ** struct__2398 
 ****************************************************************/
extern int struct__2398_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__2398_string(const char *str, char **endptr);
extern int string_to_struct__2398(const char *str, void *pValue, char **endptr);
extern int is_struct__2398_allow_double_conversion();
extern int struct__2398_to_double(const void *pValue, double *nValue);
extern int get_struct__2398_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__2398(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__2398_default_value(void *pValue);
extern SimTypeUtils _Type_struct__2398_Utils;

/****************************************************************
 ** array__2406 
 ****************************************************************/
extern int array__2406_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__2406_string(const char *str, char **endptr);
extern int string_to_array__2406(const char *str, void *pValue, char **endptr);
extern int is_array__2406_allow_double_conversion();
extern int array__2406_to_double(const void *pValue, double *nValue);
extern int get_array__2406_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__2406(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__2406_default_value(void *pValue);
extern SimTypeUtils _Type_array__2406_Utils;

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
 ** struct__2412 
 ****************************************************************/
extern int struct__2412_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__2412_string(const char *str, char **endptr);
extern int string_to_struct__2412(const char *str, void *pValue, char **endptr);
extern int is_struct__2412_allow_double_conversion();
extern int struct__2412_to_double(const void *pValue, double *nValue);
extern int get_struct__2412_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__2412(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__2412_default_value(void *pValue);
extern SimTypeUtils _Type_struct__2412_Utils;

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
 ** struct__2420 
 ****************************************************************/
extern int struct__2420_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__2420_string(const char *str, char **endptr);
extern int string_to_struct__2420(const char *str, void *pValue, char **endptr);
extern int is_struct__2420_allow_double_conversion();
extern int struct__2420_to_double(const void *pValue, double *nValue);
extern int get_struct__2420_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__2420(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__2420_default_value(void *pValue);
extern SimTypeUtils _Type_struct__2420_Utils;

/****************************************************************
 ** struct__2449 
 ****************************************************************/
extern int struct__2449_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__2449_string(const char *str, char **endptr);
extern int string_to_struct__2449(const char *str, void *pValue, char **endptr);
extern int is_struct__2449_allow_double_conversion();
extern int struct__2449_to_double(const void *pValue, double *nValue);
extern int get_struct__2449_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__2449(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__2449_default_value(void *pValue);
extern SimTypeUtils _Type_struct__2449_Utils;

/****************************************************************
 ** array__2454 
 ****************************************************************/
extern int array__2454_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__2454_string(const char *str, char **endptr);
extern int string_to_array__2454(const char *str, void *pValue, char **endptr);
extern int is_array__2454_allow_double_conversion();
extern int array__2454_to_double(const void *pValue, double *nValue);
extern int get_array__2454_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__2454(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__2454_default_value(void *pValue);
extern SimTypeUtils _Type_array__2454_Utils;

/****************************************************************
 ** struct__2457 
 ****************************************************************/
extern int struct__2457_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__2457_string(const char *str, char **endptr);
extern int string_to_struct__2457(const char *str, void *pValue, char **endptr);
extern int is_struct__2457_allow_double_conversion();
extern int struct__2457_to_double(const void *pValue, double *nValue);
extern int get_struct__2457_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__2457(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__2457_default_value(void *pValue);
extern SimTypeUtils _Type_struct__2457_Utils;

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


#endif /*TRACKATLAS_TYPES_CONVERSION */
