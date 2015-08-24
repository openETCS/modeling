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
 ** UAB_struct__21238 
 ****************************************************************/
extern int UAB_struct__21238_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21238_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21238(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21238_allow_double_conversion();
extern int UAB_struct__21238_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21238_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21238(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21238_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21238_Utils;

/****************************************************************
 ** UAB_array_int_500 
 ****************************************************************/
extern int UAB_array_int_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_500_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_500(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_500_allow_double_conversion();
extern int UAB_array_int_500_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_500(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_500_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_500_Utils;

/****************************************************************
 ** UAB_struct__21247 
 ****************************************************************/
extern int UAB_struct__21247_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21247_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21247(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21247_allow_double_conversion();
extern int UAB_struct__21247_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21247_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21247(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21247_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21247_Utils;

/****************************************************************
 ** UAB_array__21255 
 ****************************************************************/
extern int UAB_array__21255_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array__21255_string(const char *str, char **endptr);
extern int string_to_UAB_array__21255(const char *str, void *pValue, char **endptr);
extern int is_UAB_array__21255_allow_double_conversion();
extern int UAB_array__21255_to_double(const void *pValue, double *nValue);
extern int get_UAB_array__21255_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array__21255(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array__21255_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array__21255_Utils;

/****************************************************************
 ** UAB_struct__21258 
 ****************************************************************/
extern int UAB_struct__21258_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21258_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21258(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21258_allow_double_conversion();
extern int UAB_struct__21258_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21258_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21258(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21258_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21258_Utils;

/****************************************************************
 ** UAB_struct__21263 
 ****************************************************************/
extern int UAB_struct__21263_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21263_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21263(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21263_allow_double_conversion();
extern int UAB_struct__21263_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21263_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21263(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21263_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21263_Utils;

/****************************************************************
 ** UAB_struct__21276 
 ****************************************************************/
extern int UAB_struct__21276_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21276_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21276(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21276_allow_double_conversion();
extern int UAB_struct__21276_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21276_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21276(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21276_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21276_Utils;

/****************************************************************
 ** UAB_struct__21281 
 ****************************************************************/
extern int UAB_struct__21281_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21281_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21281(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21281_allow_double_conversion();
extern int UAB_struct__21281_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21281_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21281(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21281_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21281_Utils;

/****************************************************************
 ** UAB_struct__21286 
 ****************************************************************/
extern int UAB_struct__21286_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21286_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21286(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21286_allow_double_conversion();
extern int UAB_struct__21286_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21286_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21286(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21286_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21286_Utils;

/****************************************************************
 ** UAB_struct__21294 
 ****************************************************************/
extern int UAB_struct__21294_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21294_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21294(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21294_allow_double_conversion();
extern int UAB_struct__21294_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21294_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21294(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21294_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21294_Utils;

/****************************************************************
 ** UAB_struct__21303 
 ****************************************************************/
extern int UAB_struct__21303_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21303_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21303(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21303_allow_double_conversion();
extern int UAB_struct__21303_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21303_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21303(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21303_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21303_Utils;

/****************************************************************
 ** UAB_struct__21308 
 ****************************************************************/
extern int UAB_struct__21308_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21308_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21308(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21308_allow_double_conversion();
extern int UAB_struct__21308_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21308_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21308(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21308_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21308_Utils;

/****************************************************************
 ** UAB_array_int_3 
 ****************************************************************/
extern int UAB_array_int_3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_3_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_3(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_3_allow_double_conversion();
extern int UAB_array_int_3_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_3(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_3_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_3_Utils;

/****************************************************************
 ** UAB_struct__21319 
 ****************************************************************/
extern int UAB_struct__21319_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21319_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21319(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21319_allow_double_conversion();
extern int UAB_struct__21319_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21319_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21319(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21319_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21319_Utils;

/****************************************************************
 ** UAB_array_int_3_33 
 ****************************************************************/
extern int UAB_array_int_3_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_3_33_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_3_33(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_3_33_allow_double_conversion();
extern int UAB_array_int_3_33_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_3_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_3_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_3_33_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_3_33_Utils;

/****************************************************************
 ** UAB_array_int_99 
 ****************************************************************/
extern int UAB_array_int_99_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_99_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_99(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_99_allow_double_conversion();
extern int UAB_array_int_99_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_99_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_99(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_99_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_99_Utils;

/****************************************************************
 ** UAB_array__21331 
 ****************************************************************/
extern int UAB_array__21331_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array__21331_string(const char *str, char **endptr);
extern int string_to_UAB_array__21331(const char *str, void *pValue, char **endptr);
extern int is_UAB_array__21331_allow_double_conversion();
extern int UAB_array__21331_to_double(const void *pValue, double *nValue);
extern int get_UAB_array__21331_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array__21331(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array__21331_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array__21331_Utils;

/****************************************************************
 ** UAB_array__21334 
 ****************************************************************/
extern int UAB_array__21334_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array__21334_string(const char *str, char **endptr);
extern int string_to_UAB_array__21334(const char *str, void *pValue, char **endptr);
extern int is_UAB_array__21334_allow_double_conversion();
extern int UAB_array__21334_to_double(const void *pValue, double *nValue);
extern int get_UAB_array__21334_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array__21334(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array__21334_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array__21334_Utils;

/****************************************************************
 ** UAB_struct__21337 
 ****************************************************************/
extern int UAB_struct__21337_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21337_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21337(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21337_allow_double_conversion();
extern int UAB_struct__21337_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21337_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21337(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21337_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21337_Utils;

/****************************************************************
 ** UAB_array_int_2 
 ****************************************************************/
extern int UAB_array_int_2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_2_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_2(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_2_allow_double_conversion();
extern int UAB_array_int_2_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_2_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_2_Utils;

/****************************************************************
 ** UAB_struct__21354 
 ****************************************************************/
extern int UAB_struct__21354_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21354_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21354(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21354_allow_double_conversion();
extern int UAB_struct__21354_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21354_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21354(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21354_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21354_Utils;

/****************************************************************
 ** UAB_array_int_2_33 
 ****************************************************************/
extern int UAB_array_int_2_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_2_33_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_2_33(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_2_33_allow_double_conversion();
extern int UAB_array_int_2_33_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_2_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_2_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_2_33_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_2_33_Utils;

/****************************************************************
 ** UAB_array_int_66 
 ****************************************************************/
extern int UAB_array_int_66_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_66_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_66(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_66_allow_double_conversion();
extern int UAB_array_int_66_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_66_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_66(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_66_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_66_Utils;

/****************************************************************
 ** UAB_array__21365 
 ****************************************************************/
extern int UAB_array__21365_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array__21365_string(const char *str, char **endptr);
extern int string_to_UAB_array__21365(const char *str, void *pValue, char **endptr);
extern int is_UAB_array__21365_allow_double_conversion();
extern int UAB_array__21365_to_double(const void *pValue, double *nValue);
extern int get_UAB_array__21365_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array__21365(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array__21365_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array__21365_Utils;

/****************************************************************
 ** UAB_array__21368 
 ****************************************************************/
extern int UAB_array__21368_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array__21368_string(const char *str, char **endptr);
extern int string_to_UAB_array__21368(const char *str, void *pValue, char **endptr);
extern int is_UAB_array__21368_allow_double_conversion();
extern int UAB_array__21368_to_double(const void *pValue, double *nValue);
extern int get_UAB_array__21368_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array__21368(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array__21368_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array__21368_Utils;

/****************************************************************
 ** UAB_struct__21371 
 ****************************************************************/
extern int UAB_struct__21371_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21371_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21371(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21371_allow_double_conversion();
extern int UAB_struct__21371_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21371_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21371(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21371_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21371_Utils;

/****************************************************************
 ** UAB_struct__21382 
 ****************************************************************/
extern int UAB_struct__21382_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21382_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21382(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21382_allow_double_conversion();
extern int UAB_struct__21382_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21382_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21382(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21382_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21382_Utils;

/****************************************************************
 ** UAB_array_int_32 
 ****************************************************************/
extern int UAB_array_int_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_32_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_32(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_32_allow_double_conversion();
extern int UAB_array_int_32_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_32_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_32_Utils;

/****************************************************************
 ** UAB_struct__21397 
 ****************************************************************/
extern int UAB_struct__21397_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21397_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21397(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21397_allow_double_conversion();
extern int UAB_struct__21397_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21397_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21397(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21397_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21397_Utils;

/****************************************************************
 ** UAB_struct__21426 
 ****************************************************************/
extern int UAB_struct__21426_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__21426_string(const char *str, char **endptr);
extern int string_to_UAB_struct__21426(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__21426_allow_double_conversion();
extern int UAB_struct__21426_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__21426_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__21426(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__21426_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__21426_Utils;

/****************************************************************
 ** UAB_array_int_430 
 ****************************************************************/
extern int UAB_array_int_430_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_430_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_430(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_430_allow_double_conversion();
extern int UAB_array_int_430_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_430_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_430(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_430_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_430_Utils;

/****************************************************************
 ** UAB_array_int_444 
 ****************************************************************/
extern int UAB_array_int_444_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_444_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_444(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_444_allow_double_conversion();
extern int UAB_array_int_444_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_444_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_444(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_444_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_444_Utils;

/****************************************************************
 ** UAB_array_int_395 
 ****************************************************************/
extern int UAB_array_int_395_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_395_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_395(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_395_allow_double_conversion();
extern int UAB_array_int_395_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_395_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_395(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_395_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_395_Utils;

/****************************************************************
 ** UAB_NID_PACKET 
 ****************************************************************/
extern int UAB_NID_PACKET_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_NID_PACKET_string(const char *str, char **endptr);
extern int string_to_UAB_NID_PACKET(const char *str, void *pValue, char **endptr);
extern int is_UAB_NID_PACKET_allow_double_conversion();
extern int UAB_NID_PACKET_to_double(const void *pValue, double *nValue);
extern int get_UAB_NID_PACKET_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_NID_PACKET(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_NID_PACKET_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_NID_PACKET_Utils;

/****************************************************************
 ** UAB_Q_DIR 
 ****************************************************************/
extern int UAB_Q_DIR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_Q_DIR_string(const char *str, char **endptr);
extern int string_to_UAB_Q_DIR(const char *str, void *pValue, char **endptr);
extern int is_UAB_Q_DIR_allow_double_conversion();
extern int UAB_Q_DIR_to_double(const void *pValue, double *nValue);
extern int get_UAB_Q_DIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_Q_DIR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_Q_DIR_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_Q_DIR_Utils;

/****************************************************************
 ** UAB_BaliseGroupData_Basics 
 ****************************************************************/
extern int UAB_BaliseGroupData_Basics_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_BaliseGroupData_Basics_string(const char *str, char **endptr);
extern int string_to_UAB_BaliseGroupData_Basics(const char *str, void *pValue, char **endptr);
extern int is_UAB_BaliseGroupData_Basics_allow_double_conversion();
extern int UAB_BaliseGroupData_Basics_to_double(const void *pValue, double *nValue);
extern int get_UAB_BaliseGroupData_Basics_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_BaliseGroupData_Basics(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_BaliseGroupData_Basics_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_BaliseGroupData_Basics_Utils;

/****************************************************************
 ** UAB_OrBG_TM 
 ****************************************************************/
extern int UAB_OrBG_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_OrBG_TM_string(const char *str, char **endptr);
extern int string_to_UAB_OrBG_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_OrBG_TM_allow_double_conversion();
extern int UAB_OrBG_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_OrBG_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_OrBG_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_OrBG_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_OrBG_TM_Utils;

/****************************************************************
 ** UAB_OrLine_TM 
 ****************************************************************/
extern int UAB_OrLine_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_OrLine_TM_string(const char *str, char **endptr);
extern int string_to_UAB_OrLine_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_OrLine_TM_allow_double_conversion();
extern int UAB_OrLine_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_OrLine_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_OrLine_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_OrLine_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_OrLine_TM_Utils;

/****************************************************************
 ** UAB_BaliseTelegramHeader_int_T_TM 
 ****************************************************************/
extern int UAB_BaliseTelegramHeader_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_BaliseTelegramHeader_int_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_BaliseTelegramHeader_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_BaliseTelegramHeader_int_T_TM_allow_double_conversion();
extern int UAB_BaliseTelegramHeader_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_BaliseTelegramHeader_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_BaliseTelegramHeader_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_BaliseTelegramHeader_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_BaliseTelegramHeader_int_T_TM_Utils;

/****************************************************************
 ** UAB_P255_trackside_int_T_TM 
 ****************************************************************/
extern int UAB_P255_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P255_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P255_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P255_trackside_int_T_TM_allow_double_conversion();
extern int UAB_P255_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P255_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P255_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P255_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P255_trackside_int_T_TM_Utils;

/****************************************************************
 ** UAB_nid_packet_meta_TM 
 ****************************************************************/
extern int UAB_nid_packet_meta_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_nid_packet_meta_TM_string(const char *str, char **endptr);
extern int string_to_UAB_nid_packet_meta_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_nid_packet_meta_TM_allow_double_conversion();
extern int UAB_nid_packet_meta_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_nid_packet_meta_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_nid_packet_meta_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_nid_packet_meta_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_nid_packet_meta_TM_Utils;

/****************************************************************
 ** UAB_P045_trackside_int_T_TM 
 ****************************************************************/
extern int UAB_P045_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P045_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P045_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P045_trackside_int_T_TM_allow_double_conversion();
extern int UAB_P045_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P045_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P045_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P045_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P045_trackside_int_T_TM_Utils;

/****************************************************************
 ** UAB_BaliseGroupData_TM 
 ****************************************************************/
extern int UAB_BaliseGroupData_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_BaliseGroupData_TM_string(const char *str, char **endptr);
extern int string_to_UAB_BaliseGroupData_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_BaliseGroupData_TM_allow_double_conversion();
extern int UAB_BaliseGroupData_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_BaliseGroupData_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_BaliseGroupData_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_BaliseGroupData_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_BaliseGroupData_TM_Utils;

/****************************************************************
 ** UAB_CompressedBaliseMessage_TM 
 ****************************************************************/
extern int UAB_CompressedBaliseMessage_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_CompressedBaliseMessage_TM_string(const char *str, char **endptr);
extern int string_to_UAB_CompressedBaliseMessage_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_CompressedBaliseMessage_TM_allow_double_conversion();
extern int UAB_CompressedBaliseMessage_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_CompressedBaliseMessage_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_CompressedBaliseMessage_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_CompressedBaliseMessage_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_CompressedBaliseMessage_TM_Utils;

/****************************************************************
 ** UAB_P042_trackside_int_T_TM 
 ****************************************************************/
extern int UAB_P042_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P042_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P042_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P042_trackside_int_T_TM_allow_double_conversion();
extern int UAB_P042_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P042_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P042_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P042_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P042_trackside_int_T_TM_Utils;

/****************************************************************
 ** UAB_P046_trackside_int_T_TM 
 ****************************************************************/
extern int UAB_P046_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P046_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P046_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P046_trackside_int_T_TM_allow_double_conversion();
extern int UAB_P046_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P046_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P046_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P046_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P046_trackside_int_T_TM_Utils;

/****************************************************************
 ** UAB_P046_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int UAB_P046_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P046_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P046_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P046_trackide_sectionlist_T_TM_allow_double_conversion();
extern int UAB_P046_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P046_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P046_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P046_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P046_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** UAB_P046_section_int_T_TM 
 ****************************************************************/
extern int UAB_P046_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P046_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P046_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P046_section_int_T_TM_allow_double_conversion();
extern int UAB_P046_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P046_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P046_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P046_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P046_section_int_T_TM_Utils;

/****************************************************************
 ** UAB_P046_sections_array_flat_T_TM 
 ****************************************************************/
extern int UAB_P046_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P046_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P046_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P046_sections_array_flat_T_TM_allow_double_conversion();
extern int UAB_P046_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P046_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P046_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P046_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P046_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** UAB_P046_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int UAB_P046_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P046_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P046_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P046_OBU_sectionlist_array_T_TM_allow_double_conversion();
extern int UAB_P046_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P046_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P046_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P046_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P046_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** UAB_P046_section_array_T_TM 
 ****************************************************************/
extern int UAB_P046_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P046_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P046_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P046_section_array_T_TM_allow_double_conversion();
extern int UAB_P046_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P046_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P046_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P046_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P046_section_array_T_TM_Utils;

/****************************************************************
 ** UAB_P046_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int UAB_P046_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P046_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P046_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P046_OBU_sectionlist_int_T_TM_allow_double_conversion();
extern int UAB_P046_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P046_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P046_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P046_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P046_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** UAB_P041_trackside_int_T_TM 
 ****************************************************************/
extern int UAB_P041_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P041_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P041_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P041_trackside_int_T_TM_allow_double_conversion();
extern int UAB_P041_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P041_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P041_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P041_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P041_trackside_int_T_TM_Utils;

/****************************************************************
 ** UAB_P041_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int UAB_P041_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P041_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P041_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P041_trackide_sectionlist_T_TM_allow_double_conversion();
extern int UAB_P041_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P041_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P041_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P041_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P041_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** UAB_P041_section_int_T_TM 
 ****************************************************************/
extern int UAB_P041_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P041_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P041_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P041_section_int_T_TM_allow_double_conversion();
extern int UAB_P041_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P041_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P041_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P041_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P041_section_int_T_TM_Utils;

/****************************************************************
 ** UAB_P041_sections_array_flat_T_TM 
 ****************************************************************/
extern int UAB_P041_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P041_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P041_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P041_sections_array_flat_T_TM_allow_double_conversion();
extern int UAB_P041_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P041_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P041_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P041_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P041_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** UAB_P041_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int UAB_P041_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P041_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P041_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P041_OBU_sectionlist_array_T_TM_allow_double_conversion();
extern int UAB_P041_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P041_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P041_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P041_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P041_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** UAB_P041_section_array_T_TM 
 ****************************************************************/
extern int UAB_P041_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P041_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P041_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P041_section_array_T_TM_allow_double_conversion();
extern int UAB_P041_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P041_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P041_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P041_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P041_section_array_T_TM_Utils;

/****************************************************************
 ** UAB_P041_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int UAB_P041_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P041_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P041_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P041_OBU_sectionlist_int_T_TM_allow_double_conversion();
extern int UAB_P041_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P041_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P041_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P041_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P041_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** UAB_P137_trackside_int_T_TM 
 ****************************************************************/
extern int UAB_P137_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P137_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P137_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P137_trackside_int_T_TM_allow_double_conversion();
extern int UAB_P137_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P137_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P137_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P137_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P137_trackside_int_T_TM_Utils;

/****************************************************************
 ** UAB_B_data_internal_T_InfraLib 
 ****************************************************************/
extern int UAB_B_data_internal_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_B_data_internal_T_InfraLib_string(const char *str, char **endptr);
extern int string_to_UAB_B_data_internal_T_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_UAB_B_data_internal_T_InfraLib_allow_double_conversion();
extern int UAB_B_data_internal_T_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_UAB_B_data_internal_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_B_data_internal_T_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_B_data_internal_T_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_B_data_internal_T_InfraLib_Utils;

/****************************************************************
 ** UAB_TrackSectionData_T_InfraLib 
 ****************************************************************/
extern int UAB_TrackSectionData_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_TrackSectionData_T_InfraLib_string(const char *str, char **endptr);
extern int string_to_UAB_TrackSectionData_T_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_UAB_TrackSectionData_T_InfraLib_allow_double_conversion();
extern int UAB_TrackSectionData_T_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_UAB_TrackSectionData_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_TrackSectionData_T_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_TrackSectionData_T_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_TrackSectionData_T_InfraLib_Utils;

/****************************************************************
 ** UAB_TrainPosRaw_T_InfraLib 
 ****************************************************************/
extern int UAB_TrainPosRaw_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_TrainPosRaw_T_InfraLib_string(const char *str, char **endptr);
extern int string_to_UAB_TrainPosRaw_T_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_UAB_TrainPosRaw_T_InfraLib_allow_double_conversion();
extern int UAB_TrainPosRaw_T_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_UAB_TrainPosRaw_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_TrainPosRaw_T_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_TrainPosRaw_T_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_TrainPosRaw_T_InfraLib_Utils;

/****************************************************************
 ** UAB_CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/
extern int UAB_CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_CompressedPackets_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_UAB_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_UAB_CompressedPackets_T_Common_Types_Pkg_allow_double_conversion();
extern int UAB_CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_UAB_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_CompressedPackets_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_CompressedPackets_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** UAB_Metadata_T_Common_Types_Pkg 
 ****************************************************************/
extern int UAB_Metadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_Metadata_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_UAB_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_UAB_Metadata_T_Common_Types_Pkg_allow_double_conversion();
extern int UAB_Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_UAB_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_Metadata_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_Metadata_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_Metadata_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** UAB_MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/
extern int UAB_MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_MetadataElement_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_UAB_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_UAB_MetadataElement_T_Common_Types_Pkg_allow_double_conversion();
extern int UAB_MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_UAB_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_MetadataElement_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_MetadataElement_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** UAB_CompressedPacketData_T_Common_Types_Pkg 
 ****************************************************************/
extern int UAB_CompressedPacketData_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_CompressedPacketData_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_UAB_CompressedPacketData_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_UAB_CompressedPacketData_T_Common_Types_Pkg_allow_double_conversion();
extern int UAB_CompressedPacketData_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_UAB_CompressedPacketData_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_CompressedPacketData_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_CompressedPacketData_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_CompressedPacketData_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** UAB_P003V1_trackside_int_T_TM_baseline2 
 ****************************************************************/
extern int UAB_P003V1_trackside_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P003V1_trackside_int_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_UAB_P003V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_UAB_P003V1_trackside_int_T_TM_baseline2_allow_double_conversion();
extern int UAB_P003V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_UAB_P003V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P003V1_trackside_int_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P003V1_trackside_int_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P003V1_trackside_int_T_TM_baseline2_Utils;

/****************************************************************
 ** UAB_P003V1_trackide_sectionlist_T_TM_baseline2 
 ****************************************************************/
extern int UAB_P003V1_trackide_sectionlist_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_UAB_P003V1_trackide_sectionlist_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_allow_double_conversion();
extern int UAB_P003V1_trackide_sectionlist_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P003V1_trackide_sectionlist_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P003V1_trackide_sectionlist_T_TM_baseline2_Utils;


#endif /*UTRECHTAMSTERDAM_OETCS_TYPES_CONVERSION */
