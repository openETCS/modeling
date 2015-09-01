#ifndef UTRECHTAMSTERDAM_OETCS_TYPES_CONVERSION
#define UTRECHTAMSTERDAM_OETCS_TYPES_CONVERSION

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
 ** struct__2306 
 ****************************************************************/
extern int struct__2306_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__2306_string(const char *str, char **endptr);
extern int string_to_struct__2306(const char *str, void *pValue, char **endptr);
extern int is_struct__2306_allow_double_conversion();
extern int struct__2306_to_double(const void *pValue, double *nValue);
extern int get_struct__2306_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__2306(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__2306_default_value(void *pValue);
extern SimTypeUtils _Type_struct__2306_Utils;

/****************************************************************
 ** array__2311 
 ****************************************************************/
extern int array__2311_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__2311_string(const char *str, char **endptr);
extern int string_to_array__2311(const char *str, void *pValue, char **endptr);
extern int is_array__2311_allow_double_conversion();
extern int array__2311_to_double(const void *pValue, double *nValue);
extern int get_array__2311_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__2311(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__2311_default_value(void *pValue);
extern SimTypeUtils _Type_array__2311_Utils;

/****************************************************************
 ** struct__2314 
 ****************************************************************/
extern int struct__2314_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__2314_string(const char *str, char **endptr);
extern int string_to_struct__2314(const char *str, void *pValue, char **endptr);
extern int is_struct__2314_allow_double_conversion();
extern int struct__2314_to_double(const void *pValue, double *nValue);
extern int get_struct__2314_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__2314(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__2314_default_value(void *pValue);
extern SimTypeUtils _Type_struct__2314_Utils;

/****************************************************************
 ** array__2322 
 ****************************************************************/
extern int array__2322_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__2322_string(const char *str, char **endptr);
extern int string_to_array__2322(const char *str, void *pValue, char **endptr);
extern int is_array__2322_allow_double_conversion();
extern int array__2322_to_double(const void *pValue, double *nValue);
extern int get_array__2322_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__2322(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__2322_default_value(void *pValue);
extern SimTypeUtils _Type_array__2322_Utils;

/****************************************************************
 ** struct__2325 
 ****************************************************************/
extern int struct__2325_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__2325_string(const char *str, char **endptr);
extern int string_to_struct__2325(const char *str, void *pValue, char **endptr);
extern int is_struct__2325_allow_double_conversion();
extern int struct__2325_to_double(const void *pValue, double *nValue);
extern int get_struct__2325_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__2325(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__2325_default_value(void *pValue);
extern SimTypeUtils _Type_struct__2325_Utils;

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
 ** struct__2343 
 ****************************************************************/
extern int struct__2343_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__2343_string(const char *str, char **endptr);
extern int string_to_struct__2343(const char *str, void *pValue, char **endptr);
extern int is_struct__2343_allow_double_conversion();
extern int struct__2343_to_double(const void *pValue, double *nValue);
extern int get_struct__2343_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__2343(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__2343_default_value(void *pValue);
extern SimTypeUtils _Type_struct__2343_Utils;

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
 ** array__2360 
 ****************************************************************/
extern int array__2360_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__2360_string(const char *str, char **endptr);
extern int string_to_array__2360(const char *str, void *pValue, char **endptr);
extern int is_array__2360_allow_double_conversion();
extern int array__2360_to_double(const void *pValue, double *nValue);
extern int get_array__2360_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__2360(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__2360_default_value(void *pValue);
extern SimTypeUtils _Type_array__2360_Utils;

/****************************************************************
 ** struct__2363 
 ****************************************************************/
extern int struct__2363_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__2363_string(const char *str, char **endptr);
extern int string_to_struct__2363(const char *str, void *pValue, char **endptr);
extern int is_struct__2363_allow_double_conversion();
extern int struct__2363_to_double(const void *pValue, double *nValue);
extern int get_struct__2363_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__2363(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__2363_default_value(void *pValue);
extern SimTypeUtils _Type_struct__2363_Utils;

/****************************************************************
 ** array__2368 
 ****************************************************************/
extern int array__2368_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__2368_string(const char *str, char **endptr);
extern int string_to_array__2368(const char *str, void *pValue, char **endptr);
extern int is_array__2368_allow_double_conversion();
extern int array__2368_to_double(const void *pValue, double *nValue);
extern int get_array__2368_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__2368(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__2368_default_value(void *pValue);
extern SimTypeUtils _Type_array__2368_Utils;

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
 ** struct__2374 
 ****************************************************************/
extern int struct__2374_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__2374_string(const char *str, char **endptr);
extern int string_to_struct__2374(const char *str, void *pValue, char **endptr);
extern int is_struct__2374_allow_double_conversion();
extern int struct__2374_to_double(const void *pValue, double *nValue);
extern int get_struct__2374_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__2374(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__2374_default_value(void *pValue);
extern SimTypeUtils _Type_struct__2374_Utils;

/****************************************************************
 ** struct__2380 
 ****************************************************************/
extern int struct__2380_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__2380_string(const char *str, char **endptr);
extern int string_to_struct__2380(const char *str, void *pValue, char **endptr);
extern int is_struct__2380_allow_double_conversion();
extern int struct__2380_to_double(const void *pValue, double *nValue);
extern int get_struct__2380_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__2380(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__2380_default_value(void *pValue);
extern SimTypeUtils _Type_struct__2380_Utils;

/****************************************************************
 ** array__2386 
 ****************************************************************/
extern int array__2386_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__2386_string(const char *str, char **endptr);
extern int string_to_array__2386(const char *str, void *pValue, char **endptr);
extern int is_array__2386_allow_double_conversion();
extern int array__2386_to_double(const void *pValue, double *nValue);
extern int get_array__2386_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__2386(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__2386_default_value(void *pValue);
extern SimTypeUtils _Type_array__2386_Utils;

/****************************************************************
 ** struct__2389 
 ****************************************************************/
extern int struct__2389_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__2389_string(const char *str, char **endptr);
extern int string_to_struct__2389(const char *str, void *pValue, char **endptr);
extern int is_struct__2389_allow_double_conversion();
extern int struct__2389_to_double(const void *pValue, double *nValue);
extern int get_struct__2389_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__2389(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__2389_default_value(void *pValue);
extern SimTypeUtils _Type_struct__2389_Utils;

/****************************************************************
 ** array__2398 
 ****************************************************************/
extern int array__2398_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__2398_string(const char *str, char **endptr);
extern int string_to_array__2398(const char *str, void *pValue, char **endptr);
extern int is_array__2398_allow_double_conversion();
extern int array__2398_to_double(const void *pValue, double *nValue);
extern int get_array__2398_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__2398(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__2398_default_value(void *pValue);
extern SimTypeUtils _Type_array__2398_Utils;

/****************************************************************
 ** struct__2401 
 ****************************************************************/
extern int struct__2401_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__2401_string(const char *str, char **endptr);
extern int string_to_struct__2401(const char *str, void *pValue, char **endptr);
extern int is_struct__2401_allow_double_conversion();
extern int struct__2401_to_double(const void *pValue, double *nValue);
extern int get_struct__2401_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__2401(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__2401_default_value(void *pValue);
extern SimTypeUtils _Type_struct__2401_Utils;

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
 ** array__2429 
 ****************************************************************/
extern int array__2429_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__2429_string(const char *str, char **endptr);
extern int string_to_array__2429(const char *str, void *pValue, char **endptr);
extern int is_array__2429_allow_double_conversion();
extern int array__2429_to_double(const void *pValue, double *nValue);
extern int get_array__2429_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__2429(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__2429_default_value(void *pValue);
extern SimTypeUtils _Type_array__2429_Utils;

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
 ** array__2438 
 ****************************************************************/
extern int array__2438_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__2438_string(const char *str, char **endptr);
extern int string_to_array__2438(const char *str, void *pValue, char **endptr);
extern int is_array__2438_allow_double_conversion();
extern int array__2438_to_double(const void *pValue, double *nValue);
extern int get_array__2438_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__2438(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__2438_default_value(void *pValue);
extern SimTypeUtils _Type_array__2438_Utils;

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
 ** _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_allow_double_conversion();
extern int _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_Utils;

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
 ** _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 
 ****************************************************************/
extern int _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_allow_double_conversion();
extern int _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils;

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
 ** _2_P027V1_OBU_sectionlist_int_T_TM_baseline2 
 ****************************************************************/
extern int _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_allow_double_conversion();
extern int _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils;

/****************************************************************
 ** _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_allow_double_conversion();
extern int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_Utils;

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


#endif /*UTRECHTAMSTERDAM_OETCS_TYPES_CONVERSION */
