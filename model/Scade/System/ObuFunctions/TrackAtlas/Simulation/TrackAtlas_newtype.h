#ifndef TRACKATLAS_TYPES_CONVERTION
#define TRACKATLAS_TYPES_CONVERTION

#include "NewSmuTypes.h"

/****************************************************************
 ** kcg_real 
 ****************************************************************/
extern int kcg_real_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_real_string(const char *str, char **endptr);
extern int string_to_kcg_real(const char *str, void *pValue, char **endptr);
extern int is_kcg_real_allow_double_convertion();
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
extern int is_kcg_bool_allow_double_convertion();
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
extern int is_kcg_char_allow_double_convertion();
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
extern int is_kcg_int_allow_double_convertion();
extern int kcg_int_to_double(const void *pValue, double *nValue);
extern int get_kcg_int_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_int(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_int_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_int_Utils;

/****************************************************************
 ** struct__147 
 ****************************************************************/
extern int struct__147_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__147_string(const char *str, char **endptr);
extern int string_to_struct__147(const char *str, void *pValue, char **endptr);
extern int is_struct__147_allow_double_convertion();
extern int struct__147_to_double(const void *pValue, double *nValue);
extern int get_struct__147_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__147(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__147_default_value(void *pValue);
extern SimTypeUtils _Type_struct__147_Utils;

/****************************************************************
 ** array__153 
 ****************************************************************/
extern int array__153_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__153_string(const char *str, char **endptr);
extern int string_to_array__153(const char *str, void *pValue, char **endptr);
extern int is_array__153_allow_double_convertion();
extern int array__153_to_double(const void *pValue, double *nValue);
extern int get_array__153_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__153(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__153_default_value(void *pValue);
extern SimTypeUtils _Type_array__153_Utils;

/****************************************************************
 ** SSP_t_indexed_matrix_element 
 ****************************************************************/
extern int SSP_t_indexed_matrix_element_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_t_indexed_matrix_element_string(const char *str, char **endptr);
extern int string_to_SSP_t_indexed_matrix_element(const char *str, void *pValue, char **endptr);
extern int is_SSP_t_indexed_matrix_element_allow_double_convertion();
extern int SSP_t_indexed_matrix_element_to_double(const void *pValue, double *nValue);
extern int get_SSP_t_indexed_matrix_element_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_t_indexed_matrix_element(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_t_indexed_matrix_element_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_t_indexed_matrix_element_Utils;

/****************************************************************
 ** SSP_target_t 
 ****************************************************************/
extern int SSP_target_t_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_target_t_string(const char *str, char **endptr);
extern int string_to_SSP_target_t(const char *str, void *pValue, char **endptr);
extern int is_SSP_target_t_allow_double_convertion();
extern int SSP_target_t_to_double(const void *pValue, double *nValue);
extern int get_SSP_target_t_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_target_t(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_target_t_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_target_t_Utils;

/****************************************************************
 ** SSP_t_list_t 
 ****************************************************************/
extern int SSP_t_list_t_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSP_t_list_t_string(const char *str, char **endptr);
extern int string_to_SSP_t_list_t(const char *str, void *pValue, char **endptr);
extern int is_SSP_t_list_t_allow_double_convertion();
extern int SSP_t_list_t_to_double(const void *pValue, double *nValue);
extern int get_SSP_t_list_t_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSP_t_list_t(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSP_t_list_t_default_value(void *pValue);
extern SimTypeUtils _Type_SSP_t_list_t_Utils;


#endif /*TRACKATLAS_TYPES_CONVERTION */
