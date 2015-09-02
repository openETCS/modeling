#ifndef TESTTRACKATLAS_TYPES_CONVERSION
#define TESTTRACKATLAS_TYPES_CONVERSION

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
 ** struct__10484 
 ****************************************************************/
extern int struct__10484_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10484_string(const char *str, char **endptr);
extern int string_to_struct__10484(const char *str, void *pValue, char **endptr);
extern int is_struct__10484_allow_double_conversion();
extern int struct__10484_to_double(const void *pValue, double *nValue);
extern int get_struct__10484_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10484(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10484_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10484_Utils;

/****************************************************************
 ** array__10492 
 ****************************************************************/
extern int array__10492_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10492_string(const char *str, char **endptr);
extern int string_to_array__10492(const char *str, void *pValue, char **endptr);
extern int is_array__10492_allow_double_conversion();
extern int array__10492_to_double(const void *pValue, double *nValue);
extern int get_array__10492_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10492(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10492_default_value(void *pValue);
extern SimTypeUtils _Type_array__10492_Utils;

/****************************************************************
 ** array__10495 
 ****************************************************************/
extern int array__10495_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10495_string(const char *str, char **endptr);
extern int string_to_array__10495(const char *str, void *pValue, char **endptr);
extern int is_array__10495_allow_double_conversion();
extern int array__10495_to_double(const void *pValue, double *nValue);
extern int get_array__10495_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10495(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10495_default_value(void *pValue);
extern SimTypeUtils _Type_array__10495_Utils;

/****************************************************************
 ** struct__10498 
 ****************************************************************/
extern int struct__10498_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10498_string(const char *str, char **endptr);
extern int string_to_struct__10498(const char *str, void *pValue, char **endptr);
extern int is_struct__10498_allow_double_conversion();
extern int struct__10498_to_double(const void *pValue, double *nValue);
extern int get_struct__10498_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10498(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10498_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10498_Utils;

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
 ** struct__10516 
 ****************************************************************/
extern int struct__10516_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10516_string(const char *str, char **endptr);
extern int string_to_struct__10516(const char *str, void *pValue, char **endptr);
extern int is_struct__10516_allow_double_conversion();
extern int struct__10516_to_double(const void *pValue, double *nValue);
extern int get_struct__10516_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10516(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10516_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10516_Utils;

/****************************************************************
 ** array__10524 
 ****************************************************************/
extern int array__10524_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10524_string(const char *str, char **endptr);
extern int string_to_array__10524(const char *str, void *pValue, char **endptr);
extern int is_array__10524_allow_double_conversion();
extern int array__10524_to_double(const void *pValue, double *nValue);
extern int get_array__10524_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10524(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10524_default_value(void *pValue);
extern SimTypeUtils _Type_array__10524_Utils;

/****************************************************************
 ** struct__10527 
 ****************************************************************/
extern int struct__10527_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10527_string(const char *str, char **endptr);
extern int string_to_struct__10527(const char *str, void *pValue, char **endptr);
extern int is_struct__10527_allow_double_conversion();
extern int struct__10527_to_double(const void *pValue, double *nValue);
extern int get_struct__10527_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10527(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10527_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10527_Utils;

/****************************************************************
 ** struct__10532 
 ****************************************************************/
extern int struct__10532_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10532_string(const char *str, char **endptr);
extern int string_to_struct__10532(const char *str, void *pValue, char **endptr);
extern int is_struct__10532_allow_double_conversion();
extern int struct__10532_to_double(const void *pValue, double *nValue);
extern int get_struct__10532_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10532(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10532_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10532_Utils;

/****************************************************************
 ** struct__10542 
 ****************************************************************/
extern int struct__10542_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10542_string(const char *str, char **endptr);
extern int string_to_struct__10542(const char *str, void *pValue, char **endptr);
extern int is_struct__10542_allow_double_conversion();
extern int struct__10542_to_double(const void *pValue, double *nValue);
extern int get_struct__10542_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10542(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10542_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10542_Utils;

/****************************************************************
 ** struct__10560 
 ****************************************************************/
extern int struct__10560_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10560_string(const char *str, char **endptr);
extern int string_to_struct__10560(const char *str, void *pValue, char **endptr);
extern int is_struct__10560_allow_double_conversion();
extern int struct__10560_to_double(const void *pValue, double *nValue);
extern int get_struct__10560_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10560(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10560_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10560_Utils;

/****************************************************************
 ** struct__10570 
 ****************************************************************/
extern int struct__10570_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10570_string(const char *str, char **endptr);
extern int string_to_struct__10570(const char *str, void *pValue, char **endptr);
extern int is_struct__10570_allow_double_conversion();
extern int struct__10570_to_double(const void *pValue, double *nValue);
extern int get_struct__10570_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10570(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10570_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10570_Utils;

/****************************************************************
 ** struct__10581 
 ****************************************************************/
extern int struct__10581_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10581_string(const char *str, char **endptr);
extern int string_to_struct__10581(const char *str, void *pValue, char **endptr);
extern int is_struct__10581_allow_double_conversion();
extern int struct__10581_to_double(const void *pValue, double *nValue);
extern int get_struct__10581_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10581(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10581_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10581_Utils;

/****************************************************************
 ** struct__10595 
 ****************************************************************/
extern int struct__10595_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10595_string(const char *str, char **endptr);
extern int string_to_struct__10595(const char *str, void *pValue, char **endptr);
extern int is_struct__10595_allow_double_conversion();
extern int struct__10595_to_double(const void *pValue, double *nValue);
extern int get_struct__10595_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10595(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10595_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10595_Utils;

/****************************************************************
 ** struct__10604 
 ****************************************************************/
extern int struct__10604_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10604_string(const char *str, char **endptr);
extern int string_to_struct__10604(const char *str, void *pValue, char **endptr);
extern int is_struct__10604_allow_double_conversion();
extern int struct__10604_to_double(const void *pValue, double *nValue);
extern int get_struct__10604_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10604(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10604_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10604_Utils;

/****************************************************************
 ** struct__10614 
 ****************************************************************/
extern int struct__10614_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10614_string(const char *str, char **endptr);
extern int string_to_struct__10614(const char *str, void *pValue, char **endptr);
extern int is_struct__10614_allow_double_conversion();
extern int struct__10614_to_double(const void *pValue, double *nValue);
extern int get_struct__10614_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10614(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10614_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10614_Utils;

/****************************************************************
 ** struct__10625 
 ****************************************************************/
extern int struct__10625_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10625_string(const char *str, char **endptr);
extern int string_to_struct__10625(const char *str, void *pValue, char **endptr);
extern int is_struct__10625_allow_double_conversion();
extern int struct__10625_to_double(const void *pValue, double *nValue);
extern int get_struct__10625_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10625(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10625_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10625_Utils;

/****************************************************************
 ** struct__10635 
 ****************************************************************/
extern int struct__10635_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10635_string(const char *str, char **endptr);
extern int string_to_struct__10635(const char *str, void *pValue, char **endptr);
extern int is_struct__10635_allow_double_conversion();
extern int struct__10635_to_double(const void *pValue, double *nValue);
extern int get_struct__10635_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10635(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10635_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10635_Utils;

/****************************************************************
 ** struct__10649 
 ****************************************************************/
extern int struct__10649_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10649_string(const char *str, char **endptr);
extern int string_to_struct__10649(const char *str, void *pValue, char **endptr);
extern int is_struct__10649_allow_double_conversion();
extern int struct__10649_to_double(const void *pValue, double *nValue);
extern int get_struct__10649_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10649(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10649_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10649_Utils;

/****************************************************************
 ** struct__10659 
 ****************************************************************/
extern int struct__10659_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10659_string(const char *str, char **endptr);
extern int string_to_struct__10659(const char *str, void *pValue, char **endptr);
extern int is_struct__10659_allow_double_conversion();
extern int struct__10659_to_double(const void *pValue, double *nValue);
extern int get_struct__10659_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10659(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10659_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10659_Utils;

/****************************************************************
 ** struct__10666 
 ****************************************************************/
extern int struct__10666_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10666_string(const char *str, char **endptr);
extern int string_to_struct__10666(const char *str, void *pValue, char **endptr);
extern int is_struct__10666_allow_double_conversion();
extern int struct__10666_to_double(const void *pValue, double *nValue);
extern int get_struct__10666_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10666(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10666_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10666_Utils;

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
 ** struct__10678 
 ****************************************************************/
extern int struct__10678_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10678_string(const char *str, char **endptr);
extern int string_to_struct__10678(const char *str, void *pValue, char **endptr);
extern int is_struct__10678_allow_double_conversion();
extern int struct__10678_to_double(const void *pValue, double *nValue);
extern int get_struct__10678_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10678(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10678_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10678_Utils;

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
 ** array__10691 
 ****************************************************************/
extern int array__10691_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10691_string(const char *str, char **endptr);
extern int string_to_array__10691(const char *str, void *pValue, char **endptr);
extern int is_array__10691_allow_double_conversion();
extern int array__10691_to_double(const void *pValue, double *nValue);
extern int get_array__10691_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10691(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10691_default_value(void *pValue);
extern SimTypeUtils _Type_array__10691_Utils;

/****************************************************************
 ** struct__10694 
 ****************************************************************/
extern int struct__10694_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10694_string(const char *str, char **endptr);
extern int string_to_struct__10694(const char *str, void *pValue, char **endptr);
extern int is_struct__10694_allow_double_conversion();
extern int struct__10694_to_double(const void *pValue, double *nValue);
extern int get_struct__10694_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10694(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10694_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10694_Utils;

/****************************************************************
 ** struct__10721 
 ****************************************************************/
extern int struct__10721_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10721_string(const char *str, char **endptr);
extern int string_to_struct__10721(const char *str, void *pValue, char **endptr);
extern int is_struct__10721_allow_double_conversion();
extern int struct__10721_to_double(const void *pValue, double *nValue);
extern int get_struct__10721_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10721(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10721_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10721_Utils;

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
 ** struct__10737 
 ****************************************************************/
extern int struct__10737_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10737_string(const char *str, char **endptr);
extern int string_to_struct__10737(const char *str, void *pValue, char **endptr);
extern int is_struct__10737_allow_double_conversion();
extern int struct__10737_to_double(const void *pValue, double *nValue);
extern int get_struct__10737_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10737(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10737_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10737_Utils;

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
 ** array__10753 
 ****************************************************************/
extern int array__10753_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10753_string(const char *str, char **endptr);
extern int string_to_array__10753(const char *str, void *pValue, char **endptr);
extern int is_array__10753_allow_double_conversion();
extern int array__10753_to_double(const void *pValue, double *nValue);
extern int get_array__10753_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10753(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10753_default_value(void *pValue);
extern SimTypeUtils _Type_array__10753_Utils;

/****************************************************************
 ** array__10756 
 ****************************************************************/
extern int array__10756_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10756_string(const char *str, char **endptr);
extern int string_to_array__10756(const char *str, void *pValue, char **endptr);
extern int is_array__10756_allow_double_conversion();
extern int array__10756_to_double(const void *pValue, double *nValue);
extern int get_array__10756_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10756(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10756_default_value(void *pValue);
extern SimTypeUtils _Type_array__10756_Utils;

/****************************************************************
 ** struct__10759 
 ****************************************************************/
extern int struct__10759_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10759_string(const char *str, char **endptr);
extern int string_to_struct__10759(const char *str, void *pValue, char **endptr);
extern int is_struct__10759_allow_double_conversion();
extern int struct__10759_to_double(const void *pValue, double *nValue);
extern int get_struct__10759_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10759(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10759_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10759_Utils;

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
 ** struct__10779 
 ****************************************************************/
extern int struct__10779_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10779_string(const char *str, char **endptr);
extern int string_to_struct__10779(const char *str, void *pValue, char **endptr);
extern int is_struct__10779_allow_double_conversion();
extern int struct__10779_to_double(const void *pValue, double *nValue);
extern int get_struct__10779_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10779(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10779_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10779_Utils;

/****************************************************************
 ** array__10784 
 ****************************************************************/
extern int array__10784_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10784_string(const char *str, char **endptr);
extern int string_to_array__10784(const char *str, void *pValue, char **endptr);
extern int is_array__10784_allow_double_conversion();
extern int array__10784_to_double(const void *pValue, double *nValue);
extern int get_array__10784_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10784(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10784_default_value(void *pValue);
extern SimTypeUtils _Type_array__10784_Utils;

/****************************************************************
 ** struct__10787 
 ****************************************************************/
extern int struct__10787_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10787_string(const char *str, char **endptr);
extern int string_to_struct__10787(const char *str, void *pValue, char **endptr);
extern int is_struct__10787_allow_double_conversion();
extern int struct__10787_to_double(const void *pValue, double *nValue);
extern int get_struct__10787_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10787(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10787_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10787_Utils;

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
 ** array__10801 
 ****************************************************************/
extern int array__10801_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10801_string(const char *str, char **endptr);
extern int string_to_array__10801(const char *str, void *pValue, char **endptr);
extern int is_array__10801_allow_double_conversion();
extern int array__10801_to_double(const void *pValue, double *nValue);
extern int get_array__10801_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10801(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10801_default_value(void *pValue);
extern SimTypeUtils _Type_array__10801_Utils;

/****************************************************************
 ** array__10804 
 ****************************************************************/
extern int array__10804_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10804_string(const char *str, char **endptr);
extern int string_to_array__10804(const char *str, void *pValue, char **endptr);
extern int is_array__10804_allow_double_conversion();
extern int array__10804_to_double(const void *pValue, double *nValue);
extern int get_array__10804_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10804(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10804_default_value(void *pValue);
extern SimTypeUtils _Type_array__10804_Utils;

/****************************************************************
 ** struct__10807 
 ****************************************************************/
extern int struct__10807_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10807_string(const char *str, char **endptr);
extern int string_to_struct__10807(const char *str, void *pValue, char **endptr);
extern int is_struct__10807_allow_double_conversion();
extern int struct__10807_to_double(const void *pValue, double *nValue);
extern int get_struct__10807_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10807(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10807_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10807_Utils;

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
 ** struct__10825 
 ****************************************************************/
extern int struct__10825_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10825_string(const char *str, char **endptr);
extern int string_to_struct__10825(const char *str, void *pValue, char **endptr);
extern int is_struct__10825_allow_double_conversion();
extern int struct__10825_to_double(const void *pValue, double *nValue);
extern int get_struct__10825_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10825(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10825_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10825_Utils;

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
 ** array__10837 
 ****************************************************************/
extern int array__10837_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10837_string(const char *str, char **endptr);
extern int string_to_array__10837(const char *str, void *pValue, char **endptr);
extern int is_array__10837_allow_double_conversion();
extern int array__10837_to_double(const void *pValue, double *nValue);
extern int get_array__10837_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10837(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10837_default_value(void *pValue);
extern SimTypeUtils _Type_array__10837_Utils;

/****************************************************************
 ** array__10840 
 ****************************************************************/
extern int array__10840_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10840_string(const char *str, char **endptr);
extern int string_to_array__10840(const char *str, void *pValue, char **endptr);
extern int is_array__10840_allow_double_conversion();
extern int array__10840_to_double(const void *pValue, double *nValue);
extern int get_array__10840_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10840(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10840_default_value(void *pValue);
extern SimTypeUtils _Type_array__10840_Utils;

/****************************************************************
 ** struct__10843 
 ****************************************************************/
extern int struct__10843_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10843_string(const char *str, char **endptr);
extern int string_to_struct__10843(const char *str, void *pValue, char **endptr);
extern int is_struct__10843_allow_double_conversion();
extern int struct__10843_to_double(const void *pValue, double *nValue);
extern int get_struct__10843_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10843(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10843_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10843_Utils;

/****************************************************************
 ** struct__10856 
 ****************************************************************/
extern int struct__10856_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10856_string(const char *str, char **endptr);
extern int string_to_struct__10856(const char *str, void *pValue, char **endptr);
extern int is_struct__10856_allow_double_conversion();
extern int struct__10856_to_double(const void *pValue, double *nValue);
extern int get_struct__10856_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10856(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10856_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10856_Utils;

/****************************************************************
 ** array__10862 
 ****************************************************************/
extern int array__10862_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10862_string(const char *str, char **endptr);
extern int string_to_array__10862(const char *str, void *pValue, char **endptr);
extern int is_array__10862_allow_double_conversion();
extern int array__10862_to_double(const void *pValue, double *nValue);
extern int get_array__10862_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10862(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10862_default_value(void *pValue);
extern SimTypeUtils _Type_array__10862_Utils;

/****************************************************************
 ** array__10865 
 ****************************************************************/
extern int array__10865_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10865_string(const char *str, char **endptr);
extern int string_to_array__10865(const char *str, void *pValue, char **endptr);
extern int is_array__10865_allow_double_conversion();
extern int array__10865_to_double(const void *pValue, double *nValue);
extern int get_array__10865_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10865(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10865_default_value(void *pValue);
extern SimTypeUtils _Type_array__10865_Utils;

/****************************************************************
 ** struct__10868 
 ****************************************************************/
extern int struct__10868_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10868_string(const char *str, char **endptr);
extern int string_to_struct__10868(const char *str, void *pValue, char **endptr);
extern int is_struct__10868_allow_double_conversion();
extern int struct__10868_to_double(const void *pValue, double *nValue);
extern int get_struct__10868_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10868(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10868_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10868_Utils;

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
 ** struct__10885 
 ****************************************************************/
extern int struct__10885_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10885_string(const char *str, char **endptr);
extern int string_to_struct__10885(const char *str, void *pValue, char **endptr);
extern int is_struct__10885_allow_double_conversion();
extern int struct__10885_to_double(const void *pValue, double *nValue);
extern int get_struct__10885_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10885(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10885_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10885_Utils;

/****************************************************************
 ** struct__10914 
 ****************************************************************/
extern int struct__10914_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10914_string(const char *str, char **endptr);
extern int string_to_struct__10914(const char *str, void *pValue, char **endptr);
extern int is_struct__10914_allow_double_conversion();
extern int struct__10914_to_double(const void *pValue, double *nValue);
extern int get_struct__10914_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10914(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10914_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10914_Utils;

/****************************************************************
 ** struct__10932 
 ****************************************************************/
extern int struct__10932_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10932_string(const char *str, char **endptr);
extern int string_to_struct__10932(const char *str, void *pValue, char **endptr);
extern int is_struct__10932_allow_double_conversion();
extern int struct__10932_to_double(const void *pValue, double *nValue);
extern int get_struct__10932_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10932(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10932_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10932_Utils;

/****************************************************************
 ** struct__10937 
 ****************************************************************/
extern int struct__10937_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10937_string(const char *str, char **endptr);
extern int string_to_struct__10937(const char *str, void *pValue, char **endptr);
extern int is_struct__10937_allow_double_conversion();
extern int struct__10937_to_double(const void *pValue, double *nValue);
extern int get_struct__10937_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10937(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10937_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10937_Utils;

/****************************************************************
 ** struct__10943 
 ****************************************************************/
extern int struct__10943_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10943_string(const char *str, char **endptr);
extern int string_to_struct__10943(const char *str, void *pValue, char **endptr);
extern int is_struct__10943_allow_double_conversion();
extern int struct__10943_to_double(const void *pValue, double *nValue);
extern int get_struct__10943_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10943(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10943_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10943_Utils;

/****************************************************************
 ** struct__10957 
 ****************************************************************/
extern int struct__10957_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10957_string(const char *str, char **endptr);
extern int string_to_struct__10957(const char *str, void *pValue, char **endptr);
extern int is_struct__10957_allow_double_conversion();
extern int struct__10957_to_double(const void *pValue, double *nValue);
extern int get_struct__10957_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10957(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10957_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10957_Utils;

/****************************************************************
 ** array__10966 
 ****************************************************************/
extern int array__10966_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__10966_string(const char *str, char **endptr);
extern int string_to_array__10966(const char *str, void *pValue, char **endptr);
extern int is_array__10966_allow_double_conversion();
extern int array__10966_to_double(const void *pValue, double *nValue);
extern int get_array__10966_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__10966(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__10966_default_value(void *pValue);
extern SimTypeUtils _Type_array__10966_Utils;

/****************************************************************
 ** struct__10969 
 ****************************************************************/
extern int struct__10969_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10969_string(const char *str, char **endptr);
extern int string_to_struct__10969(const char *str, void *pValue, char **endptr);
extern int is_struct__10969_allow_double_conversion();
extern int struct__10969_to_double(const void *pValue, double *nValue);
extern int get_struct__10969_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10969(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10969_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10969_Utils;

/****************************************************************
 ** struct__10976 
 ****************************************************************/
extern int struct__10976_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10976_string(const char *str, char **endptr);
extern int string_to_struct__10976(const char *str, void *pValue, char **endptr);
extern int is_struct__10976_allow_double_conversion();
extern int struct__10976_to_double(const void *pValue, double *nValue);
extern int get_struct__10976_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10976(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10976_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10976_Utils;

/****************************************************************
 ** struct__10982 
 ****************************************************************/
extern int struct__10982_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10982_string(const char *str, char **endptr);
extern int string_to_struct__10982(const char *str, void *pValue, char **endptr);
extern int is_struct__10982_allow_double_conversion();
extern int struct__10982_to_double(const void *pValue, double *nValue);
extern int get_struct__10982_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10982(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10982_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10982_Utils;

/****************************************************************
 ** struct__10992 
 ****************************************************************/
extern int struct__10992_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__10992_string(const char *str, char **endptr);
extern int string_to_struct__10992(const char *str, void *pValue, char **endptr);
extern int is_struct__10992_allow_double_conversion();
extern int struct__10992_to_double(const void *pValue, double *nValue);
extern int get_struct__10992_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__10992(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__10992_default_value(void *pValue);
extern SimTypeUtils _Type_struct__10992_Utils;

/****************************************************************
 ** struct__11010 
 ****************************************************************/
extern int struct__11010_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__11010_string(const char *str, char **endptr);
extern int string_to_struct__11010(const char *str, void *pValue, char **endptr);
extern int is_struct__11010_allow_double_conversion();
extern int struct__11010_to_double(const void *pValue, double *nValue);
extern int get_struct__11010_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__11010(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__11010_default_value(void *pValue);
extern SimTypeUtils _Type_struct__11010_Utils;

/****************************************************************
 ** struct__11016 
 ****************************************************************/
extern int struct__11016_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__11016_string(const char *str, char **endptr);
extern int string_to_struct__11016(const char *str, void *pValue, char **endptr);
extern int is_struct__11016_allow_double_conversion();
extern int struct__11016_to_double(const void *pValue, double *nValue);
extern int get_struct__11016_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__11016(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__11016_default_value(void *pValue);
extern SimTypeUtils _Type_struct__11016_Utils;

/****************************************************************
 ** struct__11027 
 ****************************************************************/
extern int struct__11027_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__11027_string(const char *str, char **endptr);
extern int string_to_struct__11027(const char *str, void *pValue, char **endptr);
extern int is_struct__11027_allow_double_conversion();
extern int struct__11027_to_double(const void *pValue, double *nValue);
extern int get_struct__11027_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__11027(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__11027_default_value(void *pValue);
extern SimTypeUtils _Type_struct__11027_Utils;

/****************************************************************
 ** struct__11044 
 ****************************************************************/
extern int struct__11044_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__11044_string(const char *str, char **endptr);
extern int string_to_struct__11044(const char *str, void *pValue, char **endptr);
extern int is_struct__11044_allow_double_conversion();
extern int struct__11044_to_double(const void *pValue, double *nValue);
extern int get_struct__11044_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__11044(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__11044_default_value(void *pValue);
extern SimTypeUtils _Type_struct__11044_Utils;

/****************************************************************
 ** struct__11051 
 ****************************************************************/
extern int struct__11051_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__11051_string(const char *str, char **endptr);
extern int string_to_struct__11051(const char *str, void *pValue, char **endptr);
extern int is_struct__11051_allow_double_conversion();
extern int struct__11051_to_double(const void *pValue, double *nValue);
extern int get_struct__11051_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__11051(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__11051_default_value(void *pValue);
extern SimTypeUtils _Type_struct__11051_Utils;

/****************************************************************
 ** struct__11063 
 ****************************************************************/
extern int struct__11063_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__11063_string(const char *str, char **endptr);
extern int string_to_struct__11063(const char *str, void *pValue, char **endptr);
extern int is_struct__11063_allow_double_conversion();
extern int struct__11063_to_double(const void *pValue, double *nValue);
extern int get_struct__11063_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__11063(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__11063_default_value(void *pValue);
extern SimTypeUtils _Type_struct__11063_Utils;

/****************************************************************
 ** struct__11073 
 ****************************************************************/
extern int struct__11073_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__11073_string(const char *str, char **endptr);
extern int string_to_struct__11073(const char *str, void *pValue, char **endptr);
extern int is_struct__11073_allow_double_conversion();
extern int struct__11073_to_double(const void *pValue, double *nValue);
extern int get_struct__11073_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__11073(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__11073_default_value(void *pValue);
extern SimTypeUtils _Type_struct__11073_Utils;

/****************************************************************
 ** array__11080 
 ****************************************************************/
extern int array__11080_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__11080_string(const char *str, char **endptr);
extern int string_to_array__11080(const char *str, void *pValue, char **endptr);
extern int is_array__11080_allow_double_conversion();
extern int array__11080_to_double(const void *pValue, double *nValue);
extern int get_array__11080_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__11080(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__11080_default_value(void *pValue);
extern SimTypeUtils _Type_array__11080_Utils;

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
 ** struct__11086 
 ****************************************************************/
extern int struct__11086_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__11086_string(const char *str, char **endptr);
extern int string_to_struct__11086(const char *str, void *pValue, char **endptr);
extern int is_struct__11086_allow_double_conversion();
extern int struct__11086_to_double(const void *pValue, double *nValue);
extern int get_struct__11086_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__11086(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__11086_default_value(void *pValue);
extern SimTypeUtils _Type_struct__11086_Utils;

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
 ** array__11115 
 ****************************************************************/
extern int array__11115_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__11115_string(const char *str, char **endptr);
extern int string_to_array__11115(const char *str, void *pValue, char **endptr);
extern int is_array__11115_allow_double_conversion();
extern int array__11115_to_double(const void *pValue, double *nValue);
extern int get_array__11115_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__11115(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__11115_default_value(void *pValue);
extern SimTypeUtils _Type_array__11115_Utils;

/****************************************************************
 ** array__11118 
 ****************************************************************/
extern int array__11118_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__11118_string(const char *str, char **endptr);
extern int string_to_array__11118(const char *str, void *pValue, char **endptr);
extern int is_array__11118_allow_double_conversion();
extern int array__11118_to_double(const void *pValue, double *nValue);
extern int get_array__11118_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__11118(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__11118_default_value(void *pValue);
extern SimTypeUtils _Type_array__11118_Utils;

/****************************************************************
 ** array__11121 
 ****************************************************************/
extern int array__11121_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__11121_string(const char *str, char **endptr);
extern int string_to_array__11121(const char *str, void *pValue, char **endptr);
extern int is_array__11121_allow_double_conversion();
extern int array__11121_to_double(const void *pValue, double *nValue);
extern int get_array__11121_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__11121(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__11121_default_value(void *pValue);
extern SimTypeUtils _Type_array__11121_Utils;

/****************************************************************
 ** array__11124 
 ****************************************************************/
extern int array__11124_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__11124_string(const char *str, char **endptr);
extern int string_to_array__11124(const char *str, void *pValue, char **endptr);
extern int is_array__11124_allow_double_conversion();
extern int array__11124_to_double(const void *pValue, double *nValue);
extern int get_array__11124_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__11124(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__11124_default_value(void *pValue);
extern SimTypeUtils _Type_array__11124_Utils;

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
 ** array__11139 
 ****************************************************************/
extern int array__11139_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__11139_string(const char *str, char **endptr);
extern int string_to_array__11139(const char *str, void *pValue, char **endptr);
extern int is_array__11139_allow_double_conversion();
extern int array__11139_to_double(const void *pValue, double *nValue);
extern int get_array__11139_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__11139(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__11139_default_value(void *pValue);
extern SimTypeUtils _Type_array__11139_Utils;

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
 ** array__11148 
 ****************************************************************/
extern int array__11148_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__11148_string(const char *str, char **endptr);
extern int string_to_array__11148(const char *str, void *pValue, char **endptr);
extern int is_array__11148_allow_double_conversion();
extern int array__11148_to_double(const void *pValue, double *nValue);
extern int get_array__11148_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__11148(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__11148_default_value(void *pValue);
extern SimTypeUtils _Type_array__11148_Utils;

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
 ** array__11181 
 ****************************************************************/
extern int array__11181_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__11181_string(const char *str, char **endptr);
extern int string_to_array__11181(const char *str, void *pValue, char **endptr);
extern int is_array__11181_allow_double_conversion();
extern int array__11181_to_double(const void *pValue, double *nValue);
extern int get_array__11181_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__11181(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__11181_default_value(void *pValue);
extern SimTypeUtils _Type_array__11181_Utils;

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
 ** array__11193 
 ****************************************************************/
extern int array__11193_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__11193_string(const char *str, char **endptr);
extern int string_to_array__11193(const char *str, void *pValue, char **endptr);
extern int is_array__11193_allow_double_conversion();
extern int array__11193_to_double(const void *pValue, double *nValue);
extern int get_array__11193_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__11193(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__11193_default_value(void *pValue);
extern SimTypeUtils _Type_array__11193_Utils;

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
