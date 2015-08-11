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
 ** struct__1774 
 ****************************************************************/
extern int struct__1774_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1774_string(const char *str, char **endptr);
extern int string_to_struct__1774(const char *str, void *pValue, char **endptr);
extern int is_struct__1774_allow_double_conversion();
extern int struct__1774_to_double(const void *pValue, double *nValue);
extern int get_struct__1774_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1774(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1774_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1774_Utils;

/****************************************************************
 ** array__1783 
 ****************************************************************/
extern int array__1783_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1783_string(const char *str, char **endptr);
extern int string_to_array__1783(const char *str, void *pValue, char **endptr);
extern int is_array__1783_allow_double_conversion();
extern int array__1783_to_double(const void *pValue, double *nValue);
extern int get_array__1783_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1783(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1783_default_value(void *pValue);
extern SimTypeUtils _Type_array__1783_Utils;

/****************************************************************
 ** struct__1786 
 ****************************************************************/
extern int struct__1786_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1786_string(const char *str, char **endptr);
extern int string_to_struct__1786(const char *str, void *pValue, char **endptr);
extern int is_struct__1786_allow_double_conversion();
extern int struct__1786_to_double(const void *pValue, double *nValue);
extern int get_struct__1786_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1786(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1786_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1786_Utils;

/****************************************************************
 ** array__1792 
 ****************************************************************/
extern int array__1792_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1792_string(const char *str, char **endptr);
extern int string_to_array__1792(const char *str, void *pValue, char **endptr);
extern int is_array__1792_allow_double_conversion();
extern int array__1792_to_double(const void *pValue, double *nValue);
extern int get_array__1792_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1792(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1792_default_value(void *pValue);
extern SimTypeUtils _Type_array__1792_Utils;

/****************************************************************
 ** struct__1795 
 ****************************************************************/
extern int struct__1795_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1795_string(const char *str, char **endptr);
extern int string_to_struct__1795(const char *str, void *pValue, char **endptr);
extern int is_struct__1795_allow_double_conversion();
extern int struct__1795_to_double(const void *pValue, double *nValue);
extern int get_struct__1795_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1795(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1795_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1795_Utils;

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
 ** struct__1811 
 ****************************************************************/
extern int struct__1811_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1811_string(const char *str, char **endptr);
extern int string_to_struct__1811(const char *str, void *pValue, char **endptr);
extern int is_struct__1811_allow_double_conversion();
extern int struct__1811_to_double(const void *pValue, double *nValue);
extern int get_struct__1811_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1811(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1811_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1811_Utils;

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
 ** array__1828 
 ****************************************************************/
extern int array__1828_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1828_string(const char *str, char **endptr);
extern int string_to_array__1828(const char *str, void *pValue, char **endptr);
extern int is_array__1828_allow_double_conversion();
extern int array__1828_to_double(const void *pValue, double *nValue);
extern int get_array__1828_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1828(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1828_default_value(void *pValue);
extern SimTypeUtils _Type_array__1828_Utils;

/****************************************************************
 ** array__1831 
 ****************************************************************/
extern int array__1831_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1831_string(const char *str, char **endptr);
extern int string_to_array__1831(const char *str, void *pValue, char **endptr);
extern int is_array__1831_allow_double_conversion();
extern int array__1831_to_double(const void *pValue, double *nValue);
extern int get_array__1831_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1831(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1831_default_value(void *pValue);
extern SimTypeUtils _Type_array__1831_Utils;

/****************************************************************
 ** struct__1834 
 ****************************************************************/
extern int struct__1834_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1834_string(const char *str, char **endptr);
extern int string_to_struct__1834(const char *str, void *pValue, char **endptr);
extern int is_struct__1834_allow_double_conversion();
extern int struct__1834_to_double(const void *pValue, double *nValue);
extern int get_struct__1834_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1834(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1834_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1834_Utils;

/****************************************************************
 ** struct__1839 
 ****************************************************************/
extern int struct__1839_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1839_string(const char *str, char **endptr);
extern int string_to_struct__1839(const char *str, void *pValue, char **endptr);
extern int is_struct__1839_allow_double_conversion();
extern int struct__1839_to_double(const void *pValue, double *nValue);
extern int get_struct__1839_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1839(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1839_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1839_Utils;

/****************************************************************
 ** array__1846 
 ****************************************************************/
extern int array__1846_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1846_string(const char *str, char **endptr);
extern int string_to_array__1846(const char *str, void *pValue, char **endptr);
extern int is_array__1846_allow_double_conversion();
extern int array__1846_to_double(const void *pValue, double *nValue);
extern int get_array__1846_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1846(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1846_default_value(void *pValue);
extern SimTypeUtils _Type_array__1846_Utils;

/****************************************************************
 ** struct__1849 
 ****************************************************************/
extern int struct__1849_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1849_string(const char *str, char **endptr);
extern int string_to_struct__1849(const char *str, void *pValue, char **endptr);
extern int is_struct__1849_allow_double_conversion();
extern int struct__1849_to_double(const void *pValue, double *nValue);
extern int get_struct__1849_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1849(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1849_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1849_Utils;

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
 ** array__1890 
 ****************************************************************/
extern int array__1890_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1890_string(const char *str, char **endptr);
extern int string_to_array__1890(const char *str, void *pValue, char **endptr);
extern int is_array__1890_allow_double_conversion();
extern int array__1890_to_double(const void *pValue, double *nValue);
extern int get_array__1890_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1890(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1890_default_value(void *pValue);
extern SimTypeUtils _Type_array__1890_Utils;

/****************************************************************
 ** array__1893 
 ****************************************************************/
extern int array__1893_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1893_string(const char *str, char **endptr);
extern int string_to_array__1893(const char *str, void *pValue, char **endptr);
extern int is_array__1893_allow_double_conversion();
extern int array__1893_to_double(const void *pValue, double *nValue);
extern int get_array__1893_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1893(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1893_default_value(void *pValue);
extern SimTypeUtils _Type_array__1893_Utils;

/****************************************************************
 ** array__1896 
 ****************************************************************/
extern int array__1896_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1896_string(const char *str, char **endptr);
extern int string_to_array__1896(const char *str, void *pValue, char **endptr);
extern int is_array__1896_allow_double_conversion();
extern int array__1896_to_double(const void *pValue, double *nValue);
extern int get_array__1896_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1896(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1896_default_value(void *pValue);
extern SimTypeUtils _Type_array__1896_Utils;

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


#endif /*UTRECHTAMSTERDAM_OETCS_TYPES_CONVERSION */
