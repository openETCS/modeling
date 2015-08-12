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
 ** struct__149 
 ****************************************************************/
extern int struct__149_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__149_string(const char *str, char **endptr);
extern int string_to_struct__149(const char *str, void *pValue, char **endptr);
extern int is_struct__149_allow_double_conversion();
extern int struct__149_to_double(const void *pValue, double *nValue);
extern int get_struct__149_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__149(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__149_default_value(void *pValue);
extern SimTypeUtils _Type_struct__149_Utils;

/****************************************************************
 ** array__154 
 ****************************************************************/
extern int array__154_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__154_string(const char *str, char **endptr);
extern int string_to_array__154(const char *str, void *pValue, char **endptr);
extern int is_array__154_allow_double_conversion();
extern int array__154_to_double(const void *pValue, double *nValue);
extern int get_array__154_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__154(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__154_default_value(void *pValue);
extern SimTypeUtils _Type_array__154_Utils;

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


#endif /*UTRECHTAMSTERDAM_OETCS_TYPES_CONVERSION */
