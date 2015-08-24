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
 ** struct__20922 
 ****************************************************************/
extern int struct__20922_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__20922_string(const char *str, char **endptr);
extern int string_to_struct__20922(const char *str, void *pValue, char **endptr);
extern int is_struct__20922_allow_double_conversion();
extern int struct__20922_to_double(const void *pValue, double *nValue);
extern int get_struct__20922_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__20922(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__20922_default_value(void *pValue);
extern SimTypeUtils _Type_struct__20922_Utils;

/****************************************************************
 ** array__20930 
 ****************************************************************/
extern int array__20930_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__20930_string(const char *str, char **endptr);
extern int string_to_array__20930(const char *str, void *pValue, char **endptr);
extern int is_array__20930_allow_double_conversion();
extern int array__20930_to_double(const void *pValue, double *nValue);
extern int get_array__20930_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__20930(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__20930_default_value(void *pValue);
extern SimTypeUtils _Type_array__20930_Utils;

/****************************************************************
 ** struct__20933 
 ****************************************************************/
extern int struct__20933_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__20933_string(const char *str, char **endptr);
extern int string_to_struct__20933(const char *str, void *pValue, char **endptr);
extern int is_struct__20933_allow_double_conversion();
extern int struct__20933_to_double(const void *pValue, double *nValue);
extern int get_struct__20933_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__20933(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__20933_default_value(void *pValue);
extern SimTypeUtils _Type_struct__20933_Utils;

/****************************************************************
 ** struct__20938 
 ****************************************************************/
extern int struct__20938_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__20938_string(const char *str, char **endptr);
extern int string_to_struct__20938(const char *str, void *pValue, char **endptr);
extern int is_struct__20938_allow_double_conversion();
extern int struct__20938_to_double(const void *pValue, double *nValue);
extern int get_struct__20938_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__20938(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__20938_default_value(void *pValue);
extern SimTypeUtils _Type_struct__20938_Utils;

/****************************************************************
 ** struct__20951 
 ****************************************************************/
extern int struct__20951_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__20951_string(const char *str, char **endptr);
extern int string_to_struct__20951(const char *str, void *pValue, char **endptr);
extern int is_struct__20951_allow_double_conversion();
extern int struct__20951_to_double(const void *pValue, double *nValue);
extern int get_struct__20951_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__20951(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__20951_default_value(void *pValue);
extern SimTypeUtils _Type_struct__20951_Utils;

/****************************************************************
 ** struct__20956 
 ****************************************************************/
extern int struct__20956_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__20956_string(const char *str, char **endptr);
extern int string_to_struct__20956(const char *str, void *pValue, char **endptr);
extern int is_struct__20956_allow_double_conversion();
extern int struct__20956_to_double(const void *pValue, double *nValue);
extern int get_struct__20956_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__20956(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__20956_default_value(void *pValue);
extern SimTypeUtils _Type_struct__20956_Utils;

/****************************************************************
 ** struct__20964 
 ****************************************************************/
extern int struct__20964_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__20964_string(const char *str, char **endptr);
extern int string_to_struct__20964(const char *str, void *pValue, char **endptr);
extern int is_struct__20964_allow_double_conversion();
extern int struct__20964_to_double(const void *pValue, double *nValue);
extern int get_struct__20964_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__20964(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__20964_default_value(void *pValue);
extern SimTypeUtils _Type_struct__20964_Utils;

/****************************************************************
 ** struct__20973 
 ****************************************************************/
extern int struct__20973_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__20973_string(const char *str, char **endptr);
extern int string_to_struct__20973(const char *str, void *pValue, char **endptr);
extern int is_struct__20973_allow_double_conversion();
extern int struct__20973_to_double(const void *pValue, double *nValue);
extern int get_struct__20973_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__20973(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__20973_default_value(void *pValue);
extern SimTypeUtils _Type_struct__20973_Utils;

/****************************************************************
 ** struct__20979 
 ****************************************************************/
extern int struct__20979_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__20979_string(const char *str, char **endptr);
extern int string_to_struct__20979(const char *str, void *pValue, char **endptr);
extern int is_struct__20979_allow_double_conversion();
extern int struct__20979_to_double(const void *pValue, double *nValue);
extern int get_struct__20979_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__20979(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__20979_default_value(void *pValue);
extern SimTypeUtils _Type_struct__20979_Utils;

/****************************************************************
 ** struct__20984 
 ****************************************************************/
extern int struct__20984_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__20984_string(const char *str, char **endptr);
extern int string_to_struct__20984(const char *str, void *pValue, char **endptr);
extern int is_struct__20984_allow_double_conversion();
extern int struct__20984_to_double(const void *pValue, double *nValue);
extern int get_struct__20984_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__20984(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__20984_default_value(void *pValue);
extern SimTypeUtils _Type_struct__20984_Utils;

/****************************************************************
 ** struct__20989 
 ****************************************************************/
extern int struct__20989_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__20989_string(const char *str, char **endptr);
extern int string_to_struct__20989(const char *str, void *pValue, char **endptr);
extern int is_struct__20989_allow_double_conversion();
extern int struct__20989_to_double(const void *pValue, double *nValue);
extern int get_struct__20989_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__20989(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__20989_default_value(void *pValue);
extern SimTypeUtils _Type_struct__20989_Utils;

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
 ** struct__21000 
 ****************************************************************/
extern int struct__21000_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21000_string(const char *str, char **endptr);
extern int string_to_struct__21000(const char *str, void *pValue, char **endptr);
extern int is_struct__21000_allow_double_conversion();
extern int struct__21000_to_double(const void *pValue, double *nValue);
extern int get_struct__21000_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21000(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21000_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21000_Utils;

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
 ** array__21012 
 ****************************************************************/
extern int array__21012_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__21012_string(const char *str, char **endptr);
extern int string_to_array__21012(const char *str, void *pValue, char **endptr);
extern int is_array__21012_allow_double_conversion();
extern int array__21012_to_double(const void *pValue, double *nValue);
extern int get_array__21012_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__21012(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__21012_default_value(void *pValue);
extern SimTypeUtils _Type_array__21012_Utils;

/****************************************************************
 ** array__21015 
 ****************************************************************/
extern int array__21015_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__21015_string(const char *str, char **endptr);
extern int string_to_array__21015(const char *str, void *pValue, char **endptr);
extern int is_array__21015_allow_double_conversion();
extern int array__21015_to_double(const void *pValue, double *nValue);
extern int get_array__21015_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__21015(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__21015_default_value(void *pValue);
extern SimTypeUtils _Type_array__21015_Utils;

/****************************************************************
 ** struct__21018 
 ****************************************************************/
extern int struct__21018_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21018_string(const char *str, char **endptr);
extern int string_to_struct__21018(const char *str, void *pValue, char **endptr);
extern int is_struct__21018_allow_double_conversion();
extern int struct__21018_to_double(const void *pValue, double *nValue);
extern int get_struct__21018_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21018(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21018_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21018_Utils;

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
 ** struct__21035 
 ****************************************************************/
extern int struct__21035_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21035_string(const char *str, char **endptr);
extern int string_to_struct__21035(const char *str, void *pValue, char **endptr);
extern int is_struct__21035_allow_double_conversion();
extern int struct__21035_to_double(const void *pValue, double *nValue);
extern int get_struct__21035_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21035(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21035_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21035_Utils;

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
 ** array__21046 
 ****************************************************************/
extern int array__21046_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__21046_string(const char *str, char **endptr);
extern int string_to_array__21046(const char *str, void *pValue, char **endptr);
extern int is_array__21046_allow_double_conversion();
extern int array__21046_to_double(const void *pValue, double *nValue);
extern int get_array__21046_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__21046(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__21046_default_value(void *pValue);
extern SimTypeUtils _Type_array__21046_Utils;

/****************************************************************
 ** array__21049 
 ****************************************************************/
extern int array__21049_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__21049_string(const char *str, char **endptr);
extern int string_to_array__21049(const char *str, void *pValue, char **endptr);
extern int is_array__21049_allow_double_conversion();
extern int array__21049_to_double(const void *pValue, double *nValue);
extern int get_array__21049_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__21049(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__21049_default_value(void *pValue);
extern SimTypeUtils _Type_array__21049_Utils;

/****************************************************************
 ** struct__21052 
 ****************************************************************/
extern int struct__21052_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21052_string(const char *str, char **endptr);
extern int string_to_struct__21052(const char *str, void *pValue, char **endptr);
extern int is_struct__21052_allow_double_conversion();
extern int struct__21052_to_double(const void *pValue, double *nValue);
extern int get_struct__21052_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21052(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21052_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21052_Utils;

/****************************************************************
 ** struct__21063 
 ****************************************************************/
extern int struct__21063_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21063_string(const char *str, char **endptr);
extern int string_to_struct__21063(const char *str, void *pValue, char **endptr);
extern int is_struct__21063_allow_double_conversion();
extern int struct__21063_to_double(const void *pValue, double *nValue);
extern int get_struct__21063_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21063(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21063_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21063_Utils;

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
 ** struct__21078 
 ****************************************************************/
extern int struct__21078_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21078_string(const char *str, char **endptr);
extern int string_to_struct__21078(const char *str, void *pValue, char **endptr);
extern int is_struct__21078_allow_double_conversion();
extern int struct__21078_to_double(const void *pValue, double *nValue);
extern int get_struct__21078_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21078(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21078_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21078_Utils;

/****************************************************************
 ** struct__21107 
 ****************************************************************/
extern int struct__21107_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21107_string(const char *str, char **endptr);
extern int string_to_struct__21107(const char *str, void *pValue, char **endptr);
extern int is_struct__21107_allow_double_conversion();
extern int struct__21107_to_double(const void *pValue, double *nValue);
extern int get_struct__21107_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21107(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21107_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21107_Utils;

/****************************************************************
 ** struct__21115 
 ****************************************************************/
extern int struct__21115_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__21115_string(const char *str, char **endptr);
extern int string_to_struct__21115(const char *str, void *pValue, char **endptr);
extern int is_struct__21115_allow_double_conversion();
extern int struct__21115_to_double(const void *pValue, double *nValue);
extern int get_struct__21115_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__21115(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__21115_default_value(void *pValue);
extern SimTypeUtils _Type_struct__21115_Utils;

/****************************************************************
 ** array__21120 
 ****************************************************************/
extern int array__21120_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__21120_string(const char *str, char **endptr);
extern int string_to_array__21120(const char *str, void *pValue, char **endptr);
extern int is_array__21120_allow_double_conversion();
extern int array__21120_to_double(const void *pValue, double *nValue);
extern int get_array__21120_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__21120(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__21120_default_value(void *pValue);
extern SimTypeUtils _Type_array__21120_Utils;

/****************************************************************
 ** array_int_100 
 ****************************************************************/
extern int array_int_100_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_100_string(const char *str, char **endptr);
extern int string_to_array_int_100(const char *str, void *pValue, char **endptr);
extern int is_array_int_100_allow_double_conversion();
extern int array_int_100_to_double(const void *pValue, double *nValue);
extern int get_array_int_100_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_100(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_100_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_100_Utils;

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
 ** array__21156 
 ****************************************************************/
extern int array__21156_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__21156_string(const char *str, char **endptr);
extern int string_to_array__21156(const char *str, void *pValue, char **endptr);
extern int is_array__21156_allow_double_conversion();
extern int array__21156_to_double(const void *pValue, double *nValue);
extern int get_array__21156_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__21156(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__21156_default_value(void *pValue);
extern SimTypeUtils _Type_array__21156_Utils;

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
 ** array__21186 
 ****************************************************************/
extern int array__21186_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__21186_string(const char *str, char **endptr);
extern int string_to_array__21186(const char *str, void *pValue, char **endptr);
extern int is_array__21186_allow_double_conversion();
extern int array__21186_to_double(const void *pValue, double *nValue);
extern int get_array__21186_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__21186(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__21186_default_value(void *pValue);
extern SimTypeUtils _Type_array__21186_Utils;

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
 ** BPos_Internal_Tests 
 ****************************************************************/
extern int BPos_Internal_Tests_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BPos_Internal_Tests_string(const char *str, char **endptr);
extern int string_to_BPos_Internal_Tests(const char *str, void *pValue, char **endptr);
extern int is_BPos_Internal_Tests_allow_double_conversion();
extern int BPos_Internal_Tests_to_double(const void *pValue, double *nValue);
extern int get_BPos_Internal_Tests_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BPos_Internal_Tests(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BPos_Internal_Tests_default_value(void *pValue);
extern SimTypeUtils _Type_BPos_Internal_Tests_Utils;

/****************************************************************
 ** BPos_Single_Internal_Tests 
 ****************************************************************/
extern int BPos_Single_Internal_Tests_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BPos_Single_Internal_Tests_string(const char *str, char **endptr);
extern int string_to_BPos_Single_Internal_Tests(const char *str, void *pValue, char **endptr);
extern int is_BPos_Single_Internal_Tests_allow_double_conversion();
extern int BPos_Single_Internal_Tests_to_double(const void *pValue, double *nValue);
extern int get_BPos_Single_Internal_Tests_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BPos_Single_Internal_Tests(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BPos_Single_Internal_Tests_default_value(void *pValue);
extern SimTypeUtils _Type_BPos_Single_Internal_Tests_Utils;

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


#endif /*UTRECHTAMSTERDAM_OETCS_TYPES_CONVERSION */
