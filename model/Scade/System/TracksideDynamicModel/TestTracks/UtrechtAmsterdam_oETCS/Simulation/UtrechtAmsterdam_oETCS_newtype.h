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
 ** struct__29593 
 ****************************************************************/
extern int struct__29593_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29593_string(const char *str, char **endptr);
extern int string_to_struct__29593(const char *str, void *pValue, char **endptr);
extern int is_struct__29593_allow_double_conversion();
extern int struct__29593_to_double(const void *pValue, double *nValue);
extern int get_struct__29593_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29593(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29593_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29593_Utils;

/****************************************************************
 ** struct__29611 
 ****************************************************************/
extern int struct__29611_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29611_string(const char *str, char **endptr);
extern int string_to_struct__29611(const char *str, void *pValue, char **endptr);
extern int is_struct__29611_allow_double_conversion();
extern int struct__29611_to_double(const void *pValue, double *nValue);
extern int get_struct__29611_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29611(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29611_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29611_Utils;

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
 ** struct__29627 
 ****************************************************************/
extern int struct__29627_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29627_string(const char *str, char **endptr);
extern int string_to_struct__29627(const char *str, void *pValue, char **endptr);
extern int is_struct__29627_allow_double_conversion();
extern int struct__29627_to_double(const void *pValue, double *nValue);
extern int get_struct__29627_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29627(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29627_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29627_Utils;

/****************************************************************
 ** array__29635 
 ****************************************************************/
extern int array__29635_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__29635_string(const char *str, char **endptr);
extern int string_to_array__29635(const char *str, void *pValue, char **endptr);
extern int is_array__29635_allow_double_conversion();
extern int array__29635_to_double(const void *pValue, double *nValue);
extern int get_array__29635_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__29635(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__29635_default_value(void *pValue);
extern SimTypeUtils _Type_array__29635_Utils;

/****************************************************************
 ** struct__29638 
 ****************************************************************/
extern int struct__29638_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29638_string(const char *str, char **endptr);
extern int string_to_struct__29638(const char *str, void *pValue, char **endptr);
extern int is_struct__29638_allow_double_conversion();
extern int struct__29638_to_double(const void *pValue, double *nValue);
extern int get_struct__29638_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29638(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29638_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29638_Utils;

/****************************************************************
 ** struct__29643 
 ****************************************************************/
extern int struct__29643_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29643_string(const char *str, char **endptr);
extern int string_to_struct__29643(const char *str, void *pValue, char **endptr);
extern int is_struct__29643_allow_double_conversion();
extern int struct__29643_to_double(const void *pValue, double *nValue);
extern int get_struct__29643_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29643(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29643_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29643_Utils;

/****************************************************************
 ** struct__29656 
 ****************************************************************/
extern int struct__29656_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29656_string(const char *str, char **endptr);
extern int string_to_struct__29656(const char *str, void *pValue, char **endptr);
extern int is_struct__29656_allow_double_conversion();
extern int struct__29656_to_double(const void *pValue, double *nValue);
extern int get_struct__29656_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29656(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29656_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29656_Utils;

/****************************************************************
 ** struct__29674 
 ****************************************************************/
extern int struct__29674_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29674_string(const char *str, char **endptr);
extern int string_to_struct__29674(const char *str, void *pValue, char **endptr);
extern int is_struct__29674_allow_double_conversion();
extern int struct__29674_to_double(const void *pValue, double *nValue);
extern int get_struct__29674_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29674(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29674_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29674_Utils;

/****************************************************************
 ** struct__29679 
 ****************************************************************/
extern int struct__29679_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29679_string(const char *str, char **endptr);
extern int string_to_struct__29679(const char *str, void *pValue, char **endptr);
extern int is_struct__29679_allow_double_conversion();
extern int struct__29679_to_double(const void *pValue, double *nValue);
extern int get_struct__29679_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29679(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29679_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29679_Utils;

/****************************************************************
 ** struct__29684 
 ****************************************************************/
extern int struct__29684_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29684_string(const char *str, char **endptr);
extern int string_to_struct__29684(const char *str, void *pValue, char **endptr);
extern int is_struct__29684_allow_double_conversion();
extern int struct__29684_to_double(const void *pValue, double *nValue);
extern int get_struct__29684_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29684(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29684_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29684_Utils;

/****************************************************************
 ** struct__29690 
 ****************************************************************/
extern int struct__29690_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29690_string(const char *str, char **endptr);
extern int string_to_struct__29690(const char *str, void *pValue, char **endptr);
extern int is_struct__29690_allow_double_conversion();
extern int struct__29690_to_double(const void *pValue, double *nValue);
extern int get_struct__29690_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29690(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29690_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29690_Utils;

/****************************************************************
 ** struct__29695 
 ****************************************************************/
extern int struct__29695_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29695_string(const char *str, char **endptr);
extern int string_to_struct__29695(const char *str, void *pValue, char **endptr);
extern int is_struct__29695_allow_double_conversion();
extern int struct__29695_to_double(const void *pValue, double *nValue);
extern int get_struct__29695_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29695(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29695_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29695_Utils;

/****************************************************************
 ** struct__29703 
 ****************************************************************/
extern int struct__29703_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29703_string(const char *str, char **endptr);
extern int string_to_struct__29703(const char *str, void *pValue, char **endptr);
extern int is_struct__29703_allow_double_conversion();
extern int struct__29703_to_double(const void *pValue, double *nValue);
extern int get_struct__29703_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29703(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29703_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29703_Utils;

/****************************************************************
 ** struct__29712 
 ****************************************************************/
extern int struct__29712_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29712_string(const char *str, char **endptr);
extern int string_to_struct__29712(const char *str, void *pValue, char **endptr);
extern int is_struct__29712_allow_double_conversion();
extern int struct__29712_to_double(const void *pValue, double *nValue);
extern int get_struct__29712_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29712(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29712_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29712_Utils;

/****************************************************************
 ** struct__29717 
 ****************************************************************/
extern int struct__29717_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29717_string(const char *str, char **endptr);
extern int string_to_struct__29717(const char *str, void *pValue, char **endptr);
extern int is_struct__29717_allow_double_conversion();
extern int struct__29717_to_double(const void *pValue, double *nValue);
extern int get_struct__29717_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29717(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29717_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29717_Utils;

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
 ** struct__29728 
 ****************************************************************/
extern int struct__29728_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29728_string(const char *str, char **endptr);
extern int string_to_struct__29728(const char *str, void *pValue, char **endptr);
extern int is_struct__29728_allow_double_conversion();
extern int struct__29728_to_double(const void *pValue, double *nValue);
extern int get_struct__29728_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29728(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29728_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29728_Utils;

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
 ** array__29740 
 ****************************************************************/
extern int array__29740_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__29740_string(const char *str, char **endptr);
extern int string_to_array__29740(const char *str, void *pValue, char **endptr);
extern int is_array__29740_allow_double_conversion();
extern int array__29740_to_double(const void *pValue, double *nValue);
extern int get_array__29740_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__29740(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__29740_default_value(void *pValue);
extern SimTypeUtils _Type_array__29740_Utils;

/****************************************************************
 ** array__29743 
 ****************************************************************/
extern int array__29743_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__29743_string(const char *str, char **endptr);
extern int string_to_array__29743(const char *str, void *pValue, char **endptr);
extern int is_array__29743_allow_double_conversion();
extern int array__29743_to_double(const void *pValue, double *nValue);
extern int get_array__29743_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__29743(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__29743_default_value(void *pValue);
extern SimTypeUtils _Type_array__29743_Utils;

/****************************************************************
 ** struct__29746 
 ****************************************************************/
extern int struct__29746_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29746_string(const char *str, char **endptr);
extern int string_to_struct__29746(const char *str, void *pValue, char **endptr);
extern int is_struct__29746_allow_double_conversion();
extern int struct__29746_to_double(const void *pValue, double *nValue);
extern int get_struct__29746_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29746(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29746_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29746_Utils;

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
 ** struct__29763 
 ****************************************************************/
extern int struct__29763_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29763_string(const char *str, char **endptr);
extern int string_to_struct__29763(const char *str, void *pValue, char **endptr);
extern int is_struct__29763_allow_double_conversion();
extern int struct__29763_to_double(const void *pValue, double *nValue);
extern int get_struct__29763_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29763(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29763_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29763_Utils;

/****************************************************************
 ** array_int_2_33 
 ****************************************************************/
extern int array_int_2_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_2_33_string(const char *str, char **endptr);
extern int string_to_array_int_2_33(const char *str, void *pValue, char **endptr);
extern int is_array_int_2_33_allow_double_conversion();
extern int array_int_2_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_2_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_2_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_2_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_2_33_Utils;

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
 ** array__29774 
 ****************************************************************/
extern int array__29774_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__29774_string(const char *str, char **endptr);
extern int string_to_array__29774(const char *str, void *pValue, char **endptr);
extern int is_array__29774_allow_double_conversion();
extern int array__29774_to_double(const void *pValue, double *nValue);
extern int get_array__29774_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__29774(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__29774_default_value(void *pValue);
extern SimTypeUtils _Type_array__29774_Utils;

/****************************************************************
 ** array__29777 
 ****************************************************************/
extern int array__29777_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__29777_string(const char *str, char **endptr);
extern int string_to_array__29777(const char *str, void *pValue, char **endptr);
extern int is_array__29777_allow_double_conversion();
extern int array__29777_to_double(const void *pValue, double *nValue);
extern int get_array__29777_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__29777(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__29777_default_value(void *pValue);
extern SimTypeUtils _Type_array__29777_Utils;

/****************************************************************
 ** struct__29780 
 ****************************************************************/
extern int struct__29780_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29780_string(const char *str, char **endptr);
extern int string_to_struct__29780(const char *str, void *pValue, char **endptr);
extern int is_struct__29780_allow_double_conversion();
extern int struct__29780_to_double(const void *pValue, double *nValue);
extern int get_struct__29780_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29780(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29780_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29780_Utils;

/****************************************************************
 ** struct__29791 
 ****************************************************************/
extern int struct__29791_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29791_string(const char *str, char **endptr);
extern int string_to_struct__29791(const char *str, void *pValue, char **endptr);
extern int is_struct__29791_allow_double_conversion();
extern int struct__29791_to_double(const void *pValue, double *nValue);
extern int get_struct__29791_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29791(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29791_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29791_Utils;

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
 ** struct__29806 
 ****************************************************************/
extern int struct__29806_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29806_string(const char *str, char **endptr);
extern int string_to_struct__29806(const char *str, void *pValue, char **endptr);
extern int is_struct__29806_allow_double_conversion();
extern int struct__29806_to_double(const void *pValue, double *nValue);
extern int get_struct__29806_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29806(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29806_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29806_Utils;

/****************************************************************
 ** struct__29835 
 ****************************************************************/
extern int struct__29835_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29835_string(const char *str, char **endptr);
extern int string_to_struct__29835(const char *str, void *pValue, char **endptr);
extern int is_struct__29835_allow_double_conversion();
extern int struct__29835_to_double(const void *pValue, double *nValue);
extern int get_struct__29835_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29835(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29835_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29835_Utils;

/****************************************************************
 ** struct__29843 
 ****************************************************************/
extern int struct__29843_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29843_string(const char *str, char **endptr);
extern int string_to_struct__29843(const char *str, void *pValue, char **endptr);
extern int is_struct__29843_allow_double_conversion();
extern int struct__29843_to_double(const void *pValue, double *nValue);
extern int get_struct__29843_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29843(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29843_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29843_Utils;

/****************************************************************
 ** struct__29852 
 ****************************************************************/
extern int struct__29852_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29852_string(const char *str, char **endptr);
extern int string_to_struct__29852(const char *str, void *pValue, char **endptr);
extern int is_struct__29852_allow_double_conversion();
extern int struct__29852_to_double(const void *pValue, double *nValue);
extern int get_struct__29852_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29852(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29852_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29852_Utils;

/****************************************************************
 ** struct__29862 
 ****************************************************************/
extern int struct__29862_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29862_string(const char *str, char **endptr);
extern int string_to_struct__29862(const char *str, void *pValue, char **endptr);
extern int is_struct__29862_allow_double_conversion();
extern int struct__29862_to_double(const void *pValue, double *nValue);
extern int get_struct__29862_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29862(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29862_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29862_Utils;

/****************************************************************
 ** struct__29876 
 ****************************************************************/
extern int struct__29876_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29876_string(const char *str, char **endptr);
extern int string_to_struct__29876(const char *str, void *pValue, char **endptr);
extern int is_struct__29876_allow_double_conversion();
extern int struct__29876_to_double(const void *pValue, double *nValue);
extern int get_struct__29876_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29876(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29876_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29876_Utils;

/****************************************************************
 ** struct__29886 
 ****************************************************************/
extern int struct__29886_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29886_string(const char *str, char **endptr);
extern int string_to_struct__29886(const char *str, void *pValue, char **endptr);
extern int is_struct__29886_allow_double_conversion();
extern int struct__29886_to_double(const void *pValue, double *nValue);
extern int get_struct__29886_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29886(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29886_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29886_Utils;

/****************************************************************
 ** struct__29901 
 ****************************************************************/
extern int struct__29901_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29901_string(const char *str, char **endptr);
extern int string_to_struct__29901(const char *str, void *pValue, char **endptr);
extern int is_struct__29901_allow_double_conversion();
extern int struct__29901_to_double(const void *pValue, double *nValue);
extern int get_struct__29901_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29901(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29901_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29901_Utils;

/****************************************************************
 ** struct__29908 
 ****************************************************************/
extern int struct__29908_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29908_string(const char *str, char **endptr);
extern int string_to_struct__29908(const char *str, void *pValue, char **endptr);
extern int is_struct__29908_allow_double_conversion();
extern int struct__29908_to_double(const void *pValue, double *nValue);
extern int get_struct__29908_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29908(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29908_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29908_Utils;

/****************************************************************
 ** struct__29922 
 ****************************************************************/
extern int struct__29922_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29922_string(const char *str, char **endptr);
extern int string_to_struct__29922(const char *str, void *pValue, char **endptr);
extern int is_struct__29922_allow_double_conversion();
extern int struct__29922_to_double(const void *pValue, double *nValue);
extern int get_struct__29922_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29922(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29922_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29922_Utils;

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
 ** struct__29934 
 ****************************************************************/
extern int struct__29934_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29934_string(const char *str, char **endptr);
extern int string_to_struct__29934(const char *str, void *pValue, char **endptr);
extern int is_struct__29934_allow_double_conversion();
extern int struct__29934_to_double(const void *pValue, double *nValue);
extern int get_struct__29934_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29934(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29934_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29934_Utils;

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
 ** array__29947 
 ****************************************************************/
extern int array__29947_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__29947_string(const char *str, char **endptr);
extern int string_to_array__29947(const char *str, void *pValue, char **endptr);
extern int is_array__29947_allow_double_conversion();
extern int array__29947_to_double(const void *pValue, double *nValue);
extern int get_array__29947_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__29947(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__29947_default_value(void *pValue);
extern SimTypeUtils _Type_array__29947_Utils;

/****************************************************************
 ** struct__29950 
 ****************************************************************/
extern int struct__29950_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29950_string(const char *str, char **endptr);
extern int string_to_struct__29950(const char *str, void *pValue, char **endptr);
extern int is_struct__29950_allow_double_conversion();
extern int struct__29950_to_double(const void *pValue, double *nValue);
extern int get_struct__29950_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29950(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29950_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29950_Utils;

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
 ** struct__29979 
 ****************************************************************/
extern int struct__29979_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__29979_string(const char *str, char **endptr);
extern int string_to_struct__29979(const char *str, void *pValue, char **endptr);
extern int is_struct__29979_allow_double_conversion();
extern int struct__29979_to_double(const void *pValue, double *nValue);
extern int get_struct__29979_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__29979(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__29979_default_value(void *pValue);
extern SimTypeUtils _Type_struct__29979_Utils;

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
 ** array__29995 
 ****************************************************************/
extern int array__29995_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__29995_string(const char *str, char **endptr);
extern int string_to_array__29995(const char *str, void *pValue, char **endptr);
extern int is_array__29995_allow_double_conversion();
extern int array__29995_to_double(const void *pValue, double *nValue);
extern int get_array__29995_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__29995(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__29995_default_value(void *pValue);
extern SimTypeUtils _Type_array__29995_Utils;

/****************************************************************
 ** array__29998 
 ****************************************************************/
extern int array__29998_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__29998_string(const char *str, char **endptr);
extern int string_to_array__29998(const char *str, void *pValue, char **endptr);
extern int is_array__29998_allow_double_conversion();
extern int array__29998_to_double(const void *pValue, double *nValue);
extern int get_array__29998_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__29998(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__29998_default_value(void *pValue);
extern SimTypeUtils _Type_array__29998_Utils;

/****************************************************************
 ** struct__30001 
 ****************************************************************/
extern int struct__30001_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__30001_string(const char *str, char **endptr);
extern int string_to_struct__30001(const char *str, void *pValue, char **endptr);
extern int is_struct__30001_allow_double_conversion();
extern int struct__30001_to_double(const void *pValue, double *nValue);
extern int get_struct__30001_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__30001(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__30001_default_value(void *pValue);
extern SimTypeUtils _Type_struct__30001_Utils;

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
 ** struct__30021 
 ****************************************************************/
extern int struct__30021_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__30021_string(const char *str, char **endptr);
extern int string_to_struct__30021(const char *str, void *pValue, char **endptr);
extern int is_struct__30021_allow_double_conversion();
extern int struct__30021_to_double(const void *pValue, double *nValue);
extern int get_struct__30021_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__30021(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__30021_default_value(void *pValue);
extern SimTypeUtils _Type_struct__30021_Utils;

/****************************************************************
 ** array__30026 
 ****************************************************************/
extern int array__30026_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__30026_string(const char *str, char **endptr);
extern int string_to_array__30026(const char *str, void *pValue, char **endptr);
extern int is_array__30026_allow_double_conversion();
extern int array__30026_to_double(const void *pValue, double *nValue);
extern int get_array__30026_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__30026(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__30026_default_value(void *pValue);
extern SimTypeUtils _Type_array__30026_Utils;

/****************************************************************
 ** struct__30029 
 ****************************************************************/
extern int struct__30029_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__30029_string(const char *str, char **endptr);
extern int string_to_struct__30029(const char *str, void *pValue, char **endptr);
extern int is_struct__30029_allow_double_conversion();
extern int struct__30029_to_double(const void *pValue, double *nValue);
extern int get_struct__30029_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__30029(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__30029_default_value(void *pValue);
extern SimTypeUtils _Type_struct__30029_Utils;

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
 ** array__30040 
 ****************************************************************/
extern int array__30040_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__30040_string(const char *str, char **endptr);
extern int string_to_array__30040(const char *str, void *pValue, char **endptr);
extern int is_array__30040_allow_double_conversion();
extern int array__30040_to_double(const void *pValue, double *nValue);
extern int get_array__30040_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__30040(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__30040_default_value(void *pValue);
extern SimTypeUtils _Type_array__30040_Utils;

/****************************************************************
 ** array__30043 
 ****************************************************************/
extern int array__30043_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__30043_string(const char *str, char **endptr);
extern int string_to_array__30043(const char *str, void *pValue, char **endptr);
extern int is_array__30043_allow_double_conversion();
extern int array__30043_to_double(const void *pValue, double *nValue);
extern int get_array__30043_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__30043(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__30043_default_value(void *pValue);
extern SimTypeUtils _Type_array__30043_Utils;

/****************************************************************
 ** struct__30046 
 ****************************************************************/
extern int struct__30046_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__30046_string(const char *str, char **endptr);
extern int string_to_struct__30046(const char *str, void *pValue, char **endptr);
extern int is_struct__30046_allow_double_conversion();
extern int struct__30046_to_double(const void *pValue, double *nValue);
extern int get_struct__30046_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__30046(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__30046_default_value(void *pValue);
extern SimTypeUtils _Type_struct__30046_Utils;

/****************************************************************
 ** struct__30061 
 ****************************************************************/
extern int struct__30061_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__30061_string(const char *str, char **endptr);
extern int string_to_struct__30061(const char *str, void *pValue, char **endptr);
extern int is_struct__30061_allow_double_conversion();
extern int struct__30061_to_double(const void *pValue, double *nValue);
extern int get_struct__30061_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__30061(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__30061_default_value(void *pValue);
extern SimTypeUtils _Type_struct__30061_Utils;

/****************************************************************
 ** array__30067 
 ****************************************************************/
extern int array__30067_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__30067_string(const char *str, char **endptr);
extern int string_to_array__30067(const char *str, void *pValue, char **endptr);
extern int is_array__30067_allow_double_conversion();
extern int array__30067_to_double(const void *pValue, double *nValue);
extern int get_array__30067_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__30067(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__30067_default_value(void *pValue);
extern SimTypeUtils _Type_array__30067_Utils;

/****************************************************************
 ** array__30070 
 ****************************************************************/
extern int array__30070_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__30070_string(const char *str, char **endptr);
extern int string_to_array__30070(const char *str, void *pValue, char **endptr);
extern int is_array__30070_allow_double_conversion();
extern int array__30070_to_double(const void *pValue, double *nValue);
extern int get_array__30070_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__30070(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__30070_default_value(void *pValue);
extern SimTypeUtils _Type_array__30070_Utils;

/****************************************************************
 ** struct__30073 
 ****************************************************************/
extern int struct__30073_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__30073_string(const char *str, char **endptr);
extern int string_to_struct__30073(const char *str, void *pValue, char **endptr);
extern int is_struct__30073_allow_double_conversion();
extern int struct__30073_to_double(const void *pValue, double *nValue);
extern int get_struct__30073_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__30073(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__30073_default_value(void *pValue);
extern SimTypeUtils _Type_struct__30073_Utils;

/****************************************************************
 ** struct__30086 
 ****************************************************************/
extern int struct__30086_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__30086_string(const char *str, char **endptr);
extern int string_to_struct__30086(const char *str, void *pValue, char **endptr);
extern int is_struct__30086_allow_double_conversion();
extern int struct__30086_to_double(const void *pValue, double *nValue);
extern int get_struct__30086_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__30086(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__30086_default_value(void *pValue);
extern SimTypeUtils _Type_struct__30086_Utils;

/****************************************************************
 ** struct__30099 
 ****************************************************************/
extern int struct__30099_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__30099_string(const char *str, char **endptr);
extern int string_to_struct__30099(const char *str, void *pValue, char **endptr);
extern int is_struct__30099_allow_double_conversion();
extern int struct__30099_to_double(const void *pValue, double *nValue);
extern int get_struct__30099_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__30099(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__30099_default_value(void *pValue);
extern SimTypeUtils _Type_struct__30099_Utils;

/****************************************************************
 ** struct__30109 
 ****************************************************************/
extern int struct__30109_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__30109_string(const char *str, char **endptr);
extern int string_to_struct__30109(const char *str, void *pValue, char **endptr);
extern int is_struct__30109_allow_double_conversion();
extern int struct__30109_to_double(const void *pValue, double *nValue);
extern int get_struct__30109_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__30109(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__30109_default_value(void *pValue);
extern SimTypeUtils _Type_struct__30109_Utils;

/****************************************************************
 ** array__30114 
 ****************************************************************/
extern int array__30114_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__30114_string(const char *str, char **endptr);
extern int string_to_array__30114(const char *str, void *pValue, char **endptr);
extern int is_array__30114_allow_double_conversion();
extern int array__30114_to_double(const void *pValue, double *nValue);
extern int get_array__30114_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__30114(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__30114_default_value(void *pValue);
extern SimTypeUtils _Type_array__30114_Utils;

/****************************************************************
 ** struct__30117 
 ****************************************************************/
extern int struct__30117_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__30117_string(const char *str, char **endptr);
extern int string_to_struct__30117(const char *str, void *pValue, char **endptr);
extern int is_struct__30117_allow_double_conversion();
extern int struct__30117_to_double(const void *pValue, double *nValue);
extern int get_struct__30117_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__30117(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__30117_default_value(void *pValue);
extern SimTypeUtils _Type_struct__30117_Utils;

/****************************************************************
 ** struct__30130 
 ****************************************************************/
extern int struct__30130_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__30130_string(const char *str, char **endptr);
extern int string_to_struct__30130(const char *str, void *pValue, char **endptr);
extern int is_struct__30130_allow_double_conversion();
extern int struct__30130_to_double(const void *pValue, double *nValue);
extern int get_struct__30130_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__30130(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__30130_default_value(void *pValue);
extern SimTypeUtils _Type_struct__30130_Utils;

/****************************************************************
 ** struct__30140 
 ****************************************************************/
extern int struct__30140_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__30140_string(const char *str, char **endptr);
extern int string_to_struct__30140(const char *str, void *pValue, char **endptr);
extern int is_struct__30140_allow_double_conversion();
extern int struct__30140_to_double(const void *pValue, double *nValue);
extern int get_struct__30140_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__30140(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__30140_default_value(void *pValue);
extern SimTypeUtils _Type_struct__30140_Utils;

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
 ** array_int_499 
 ****************************************************************/
extern int array_int_499_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_499_string(const char *str, char **endptr);
extern int string_to_array_int_499(const char *str, void *pValue, char **endptr);
extern int is_array_int_499_allow_double_conversion();
extern int array_int_499_to_double(const void *pValue, double *nValue);
extern int get_array_int_499_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_499(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_499_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_499_Utils;

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
 ** array_int_496 
 ****************************************************************/
extern int array_int_496_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_496_string(const char *str, char **endptr);
extern int string_to_array_int_496(const char *str, void *pValue, char **endptr);
extern int is_array_int_496_allow_double_conversion();
extern int array_int_496_to_double(const void *pValue, double *nValue);
extern int get_array_int_496_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_496(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_496_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_496_Utils;

/****************************************************************
 ** array_int_492 
 ****************************************************************/
extern int array_int_492_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_492_string(const char *str, char **endptr);
extern int string_to_array_int_492(const char *str, void *pValue, char **endptr);
extern int is_array_int_492_allow_double_conversion();
extern int array_int_492_to_double(const void *pValue, double *nValue);
extern int get_array_int_492_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_492(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_492_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_492_Utils;

/****************************************************************
 ** array_int_8 
 ****************************************************************/
extern int array_int_8_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_8_string(const char *str, char **endptr);
extern int string_to_array_int_8(const char *str, void *pValue, char **endptr);
extern int is_array_int_8_allow_double_conversion();
extern int array_int_8_to_double(const void *pValue, double *nValue);
extern int get_array_int_8_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_8(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_8_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_8_Utils;

/****************************************************************
 ** array_int_2_33_99 
 ****************************************************************/
extern int array_int_2_33_99_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_2_33_99_string(const char *str, char **endptr);
extern int string_to_array_int_2_33_99(const char *str, void *pValue, char **endptr);
extern int is_array_int_2_33_99_allow_double_conversion();
extern int array_int_2_33_99_to_double(const void *pValue, double *nValue);
extern int get_array_int_2_33_99_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_2_33_99(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_2_33_99_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_2_33_99_Utils;

/****************************************************************
 ** array_int_430 
 ****************************************************************/
extern int array_int_430_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_430_string(const char *str, char **endptr);
extern int string_to_array_int_430(const char *str, void *pValue, char **endptr);
extern int is_array_int_430_allow_double_conversion();
extern int array_int_430_to_double(const void *pValue, double *nValue);
extern int get_array_int_430_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_430(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_430_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_430_Utils;

/****************************************************************
 ** array_int_70 
 ****************************************************************/
extern int array_int_70_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_70_string(const char *str, char **endptr);
extern int string_to_array_int_70(const char *str, void *pValue, char **endptr);
extern int is_array_int_70_allow_double_conversion();
extern int array_int_70_to_double(const void *pValue, double *nValue);
extern int get_array_int_70_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_70(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_70_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_70_Utils;

/****************************************************************
 ** array__30177 
 ****************************************************************/
extern int array__30177_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__30177_string(const char *str, char **endptr);
extern int string_to_array__30177(const char *str, void *pValue, char **endptr);
extern int is_array__30177_allow_double_conversion();
extern int array__30177_to_double(const void *pValue, double *nValue);
extern int get_array__30177_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__30177(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__30177_default_value(void *pValue);
extern SimTypeUtils _Type_array__30177_Utils;

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
 ** array__30207 
 ****************************************************************/
extern int array__30207_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__30207_string(const char *str, char **endptr);
extern int string_to_array__30207(const char *str, void *pValue, char **endptr);
extern int is_array__30207_allow_double_conversion();
extern int array__30207_to_double(const void *pValue, double *nValue);
extern int get_array__30207_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__30207(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__30207_default_value(void *pValue);
extern SimTypeUtils _Type_array__30207_Utils;

/****************************************************************
 ** array_int_2_32_64 
 ****************************************************************/
extern int array_int_2_32_64_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_2_32_64_string(const char *str, char **endptr);
extern int string_to_array_int_2_32_64(const char *str, void *pValue, char **endptr);
extern int is_array_int_2_32_64_allow_double_conversion();
extern int array_int_2_32_64_to_double(const void *pValue, double *nValue);
extern int get_array_int_2_32_64_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_2_32_64(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_2_32_64_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_2_32_64_Utils;

/****************************************************************
 ** array_int_428 
 ****************************************************************/
extern int array_int_428_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_428_string(const char *str, char **endptr);
extern int string_to_array_int_428(const char *str, void *pValue, char **endptr);
extern int is_array_int_428_allow_double_conversion();
extern int array_int_428_to_double(const void *pValue, double *nValue);
extern int get_array_int_428_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_428(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_428_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_428_Utils;

/****************************************************************
 ** array_int_72 
 ****************************************************************/
extern int array_int_72_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_72_string(const char *str, char **endptr);
extern int string_to_array_int_72(const char *str, void *pValue, char **endptr);
extern int is_array_int_72_allow_double_conversion();
extern int array_int_72_to_double(const void *pValue, double *nValue);
extern int get_array_int_72_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_72(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_72_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_72_Utils;

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
 ** array__30231 
 ****************************************************************/
extern int array__30231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__30231_string(const char *str, char **endptr);
extern int string_to_array__30231(const char *str, void *pValue, char **endptr);
extern int is_array__30231_allow_double_conversion();
extern int array__30231_to_double(const void *pValue, double *nValue);
extern int get_array__30231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__30231(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__30231_default_value(void *pValue);
extern SimTypeUtils _Type_array__30231_Utils;

/****************************************************************
 ** array__30234 
 ****************************************************************/
extern int array__30234_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__30234_string(const char *str, char **endptr);
extern int string_to_array__30234(const char *str, void *pValue, char **endptr);
extern int is_array__30234_allow_double_conversion();
extern int array__30234_to_double(const void *pValue, double *nValue);
extern int get_array__30234_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__30234(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__30234_default_value(void *pValue);
extern SimTypeUtils _Type_array__30234_Utils;

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
 ** array__30258 
 ****************************************************************/
extern int array__30258_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__30258_string(const char *str, char **endptr);
extern int string_to_array__30258(const char *str, void *pValue, char **endptr);
extern int is_array__30258_allow_double_conversion();
extern int array__30258_to_double(const void *pValue, double *nValue);
extern int get_array__30258_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__30258(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__30258_default_value(void *pValue);
extern SimTypeUtils _Type_array__30258_Utils;

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
 ** array_int_351 
 ****************************************************************/
extern int array_int_351_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_351_string(const char *str, char **endptr);
extern int string_to_array_int_351(const char *str, void *pValue, char **endptr);
extern int is_array_int_351_allow_double_conversion();
extern int array_int_351_to_double(const void *pValue, double *nValue);
extern int get_array_int_351_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_351(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_351_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_351_Utils;

/****************************************************************
 ** array_int_20 
 ****************************************************************/
extern int array_int_20_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_20_string(const char *str, char **endptr);
extern int string_to_array_int_20(const char *str, void *pValue, char **endptr);
extern int is_array_int_20_allow_double_conversion();
extern int array_int_20_to_double(const void *pValue, double *nValue);
extern int get_array_int_20_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_20(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_20_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_20_Utils;

/****************************************************************
 ** array_int_149 
 ****************************************************************/
extern int array_int_149_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_149_string(const char *str, char **endptr);
extern int string_to_array_int_149(const char *str, void *pValue, char **endptr);
extern int is_array_int_149_allow_double_conversion();
extern int array_int_149_to_double(const void *pValue, double *nValue);
extern int get_array_int_149_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_149(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_149_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_149_Utils;

/****************************************************************
 ** array_int_14 
 ****************************************************************/
extern int array_int_14_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_14_string(const char *str, char **endptr);
extern int string_to_array_int_14(const char *str, void *pValue, char **endptr);
extern int is_array_int_14_allow_double_conversion();
extern int array_int_14_to_double(const void *pValue, double *nValue);
extern int get_array_int_14_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_14(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_14_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_14_Utils;

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
 ** N_PIG 
 ****************************************************************/
extern int N_PIG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_PIG_string(const char *str, char **endptr);
extern int string_to_N_PIG(const char *str, void *pValue, char **endptr);
extern int is_N_PIG_allow_double_conversion();
extern int N_PIG_to_double(const void *pValue, double *nValue);
extern int get_N_PIG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_PIG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_PIG_default_value(void *pValue);
extern SimTypeUtils _Type_N_PIG_Utils;

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
 ** M_DUP 
 ****************************************************************/
extern int M_DUP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_DUP_string(const char *str, char **endptr);
extern int string_to_M_DUP(const char *str, void *pValue, char **endptr);
extern int is_M_DUP_allow_double_conversion();
extern int M_DUP_to_double(const void *pValue, double *nValue);
extern int get_M_DUP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_DUP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_DUP_default_value(void *pValue);
extern SimTypeUtils _Type_M_DUP_Utils;

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
 ** BaliseGroupData_Basics 
 ****************************************************************/
extern int BaliseGroupData_Basics_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BaliseGroupData_Basics_string(const char *str, char **endptr);
extern int string_to_BaliseGroupData_Basics(const char *str, void *pValue, char **endptr);
extern int is_BaliseGroupData_Basics_allow_double_conversion();
extern int BaliseGroupData_Basics_to_double(const void *pValue, double *nValue);
extern int get_BaliseGroupData_Basics_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BaliseGroupData_Basics(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BaliseGroupData_Basics_default_value(void *pValue);
extern SimTypeUtils _Type_BaliseGroupData_Basics_Utils;

/****************************************************************
 ** OrBG_TM 
 ****************************************************************/
extern int OrBG_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OrBG_TM_string(const char *str, char **endptr);
extern int string_to_OrBG_TM(const char *str, void *pValue, char **endptr);
extern int is_OrBG_TM_allow_double_conversion();
extern int OrBG_TM_to_double(const void *pValue, double *nValue);
extern int get_OrBG_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OrBG_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OrBG_TM_default_value(void *pValue);
extern SimTypeUtils _Type_OrBG_TM_Utils;

/****************************************************************
 ** OrLine_TM 
 ****************************************************************/
extern int OrLine_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OrLine_TM_string(const char *str, char **endptr);
extern int string_to_OrLine_TM(const char *str, void *pValue, char **endptr);
extern int is_OrLine_TM_allow_double_conversion();
extern int OrLine_TM_to_double(const void *pValue, double *nValue);
extern int get_OrLine_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OrLine_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OrLine_TM_default_value(void *pValue);
extern SimTypeUtils _Type_OrLine_TM_Utils;

/****************************************************************
 ** BaliseTelegramHeader_int_T_TM 
 ****************************************************************/
extern int BaliseTelegramHeader_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BaliseTelegramHeader_int_T_TM_string(const char *str, char **endptr);
extern int string_to_BaliseTelegramHeader_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_BaliseTelegramHeader_int_T_TM_allow_double_conversion();
extern int BaliseTelegramHeader_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_BaliseTelegramHeader_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BaliseTelegramHeader_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BaliseTelegramHeader_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_BaliseTelegramHeader_int_T_TM_Utils;

/****************************************************************
 ** P255_trackside_int_T_TM 
 ****************************************************************/
extern int P255_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P255_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P255_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P255_trackside_int_T_TM_allow_double_conversion();
extern int P255_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P255_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P255_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P255_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P255_trackside_int_T_TM_Utils;

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
 ** P045_trackside_int_T_TM 
 ****************************************************************/
extern int P045_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P045_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P045_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P045_trackside_int_T_TM_allow_double_conversion();
extern int P045_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P045_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P045_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P045_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P045_trackside_int_T_TM_Utils;

/****************************************************************
 ** BaliseGroupData_TM 
 ****************************************************************/
extern int BaliseGroupData_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BaliseGroupData_TM_string(const char *str, char **endptr);
extern int string_to_BaliseGroupData_TM(const char *str, void *pValue, char **endptr);
extern int is_BaliseGroupData_TM_allow_double_conversion();
extern int BaliseGroupData_TM_to_double(const void *pValue, double *nValue);
extern int get_BaliseGroupData_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BaliseGroupData_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BaliseGroupData_TM_default_value(void *pValue);
extern SimTypeUtils _Type_BaliseGroupData_TM_Utils;

/****************************************************************
 ** CompressedBaliseMessage_TM 
 ****************************************************************/
extern int CompressedBaliseMessage_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CompressedBaliseMessage_TM_string(const char *str, char **endptr);
extern int string_to_CompressedBaliseMessage_TM(const char *str, void *pValue, char **endptr);
extern int is_CompressedBaliseMessage_TM_allow_double_conversion();
extern int CompressedBaliseMessage_TM_to_double(const void *pValue, double *nValue);
extern int get_CompressedBaliseMessage_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedBaliseMessage_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedBaliseMessage_TM_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedBaliseMessage_TM_Utils;

/****************************************************************
 ** P042_trackside_int_T_TM 
 ****************************************************************/
extern int P042_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P042_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P042_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P042_trackside_int_T_TM_allow_double_conversion();
extern int P042_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P042_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P042_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P042_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P042_trackside_int_T_TM_Utils;

/****************************************************************
 ** P046_trackside_int_T_TM 
 ****************************************************************/
extern int P046_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_trackside_int_T_TM_allow_double_conversion();
extern int P046_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_trackside_int_T_TM_Utils;

/****************************************************************
 ** P046_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int P046_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_trackide_sectionlist_T_TM_allow_double_conversion();
extern int P046_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** P046_section_int_T_TM 
 ****************************************************************/
extern int P046_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_section_int_T_TM_allow_double_conversion();
extern int P046_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_section_int_T_TM_Utils;

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
 ** P046_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int P046_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_OBU_sectionlist_array_T_TM_allow_double_conversion();
extern int P046_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** P046_section_array_T_TM 
 ****************************************************************/
extern int P046_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_section_array_T_TM_allow_double_conversion();
extern int P046_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_section_array_T_TM_Utils;

/****************************************************************
 ** P046_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int P046_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P046_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P046_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P046_OBU_sectionlist_int_T_TM_allow_double_conversion();
extern int P046_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P046_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P046_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P046_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P046_OBU_sectionlist_int_T_TM_Utils;

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
 ** P137_trackside_int_T_TM 
 ****************************************************************/
extern int P137_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P137_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P137_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P137_trackside_int_T_TM_allow_double_conversion();
extern int P137_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P137_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P137_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P137_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P137_trackside_int_T_TM_Utils;

/****************************************************************
 ** P058_trackside_int_T_TM 
 ****************************************************************/
extern int P058_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P058_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P058_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P058_trackside_int_T_TM_allow_double_conversion();
extern int P058_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P058_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P058_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P058_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P058_trackside_int_T_TM_Utils;

/****************************************************************
 ** P058_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int P058_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P058_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_P058_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P058_trackide_sectionlist_T_TM_allow_double_conversion();
extern int P058_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P058_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P058_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P058_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P058_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** P058_section_int_T_TM 
 ****************************************************************/
extern int P058_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P058_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P058_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P058_section_int_T_TM_allow_double_conversion();
extern int P058_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P058_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P058_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P058_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P058_section_int_T_TM_Utils;

/****************************************************************
 ** P058_sections_array_flat_T_TM 
 ****************************************************************/
extern int P058_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P058_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_P058_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P058_sections_array_flat_T_TM_allow_double_conversion();
extern int P058_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P058_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P058_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P058_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P058_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** P058_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int P058_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P058_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P058_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P058_OBU_sectionlist_array_T_TM_allow_double_conversion();
extern int P058_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P058_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P058_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P058_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P058_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** P058_section_array_T_TM 
 ****************************************************************/
extern int P058_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P058_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P058_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P058_section_array_T_TM_allow_double_conversion();
extern int P058_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P058_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P058_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P058_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P058_section_array_T_TM_Utils;

/****************************************************************
 ** P058_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int P058_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P058_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P058_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P058_OBU_sectionlist_int_T_TM_allow_double_conversion();
extern int P058_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P058_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P058_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P058_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P058_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** P057_trackside_int_T_TM 
 ****************************************************************/
extern int P057_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P057_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P057_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P057_trackside_int_T_TM_allow_double_conversion();
extern int P057_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P057_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P057_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P057_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P057_trackside_int_T_TM_Utils;

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
 ** _3_Radio_TrackTrain_Header_T_TM 
 ****************************************************************/
extern int _3_Radio_TrackTrain_Header_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__3_Radio_TrackTrain_Header_T_TM_string(const char *str, char **endptr);
extern int string_to__3_Radio_TrackTrain_Header_T_TM(const char *str, void *pValue, char **endptr);
extern int is__3_Radio_TrackTrain_Header_T_TM_allow_double_conversion();
extern int _3_Radio_TrackTrain_Header_T_TM_to_double(const void *pValue, double *nValue);
extern int get__3_Radio_TrackTrain_Header_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__3_Radio_TrackTrain_Header_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__3_Radio_TrackTrain_Header_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type__3_Radio_TrackTrain_Header_T_TM_Utils;

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
 ** B_data_internal_T_InfraLib 
 ****************************************************************/
extern int B_data_internal_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_B_data_internal_T_InfraLib_string(const char *str, char **endptr);
extern int string_to_B_data_internal_T_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_B_data_internal_T_InfraLib_allow_double_conversion();
extern int B_data_internal_T_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_B_data_internal_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_B_data_internal_T_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_B_data_internal_T_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_B_data_internal_T_InfraLib_Utils;

/****************************************************************
 ** TrackSectionData_T_InfraLib 
 ****************************************************************/
extern int TrackSectionData_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TrackSectionData_T_InfraLib_string(const char *str, char **endptr);
extern int string_to_TrackSectionData_T_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_TrackSectionData_T_InfraLib_allow_double_conversion();
extern int TrackSectionData_T_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_TrackSectionData_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TrackSectionData_T_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TrackSectionData_T_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_TrackSectionData_T_InfraLib_Utils;

/****************************************************************
 ** TrainPosRaw_T_InfraLib 
 ****************************************************************/
extern int TrainPosRaw_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TrainPosRaw_T_InfraLib_string(const char *str, char **endptr);
extern int string_to_TrainPosRaw_T_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_TrainPosRaw_T_InfraLib_allow_double_conversion();
extern int TrainPosRaw_T_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_TrainPosRaw_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TrainPosRaw_T_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TrainPosRaw_T_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_TrainPosRaw_T_InfraLib_Utils;

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
 ** TelegramHeader_T_BG_Types_Pkg 
 ****************************************************************/
extern int TelegramHeader_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TelegramHeader_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_TelegramHeader_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_TelegramHeader_T_BG_Types_Pkg_allow_double_conversion();
extern int TelegramHeader_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_TelegramHeader_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TelegramHeader_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TelegramHeader_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_TelegramHeader_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** M_032_int_T_TM_radio_messages 
 ****************************************************************/
extern int M_032_int_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_032_int_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_032_int_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_032_int_T_TM_radio_messages_allow_double_conversion();
extern int M_032_int_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_032_int_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_032_int_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_032_int_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_032_int_T_TM_radio_messages_Utils;

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
 ** M_008_int_T_TM_radio_messages 
 ****************************************************************/
extern int M_008_int_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_008_int_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_008_int_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_008_int_T_TM_radio_messages_allow_double_conversion();
extern int M_008_int_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_008_int_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_008_int_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_008_int_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_008_int_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_024_int_T_TM_radio_messages 
 ****************************************************************/
extern int M_024_int_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_024_int_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_024_int_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_024_int_T_TM_radio_messages_allow_double_conversion();
extern int M_024_int_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_024_int_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_024_int_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_024_int_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_024_int_T_TM_radio_messages_Utils;

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
 ** M_015_int_T_TM_radio_messages 
 ****************************************************************/
extern int M_015_int_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_015_int_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_015_int_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_015_int_T_TM_radio_messages_allow_double_conversion();
extern int M_015_int_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_015_int_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_015_int_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_015_int_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_015_int_T_TM_radio_messages_Utils;

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


#endif /*UTRECHTAMSTERDAM_OETCS_TYPES_CONVERSION */
