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
 ** struct__176 
 ****************************************************************/
extern int struct__176_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__176_string(const char *str, char **endptr);
extern int string_to_struct__176(const char *str, void *pValue, char **endptr);
extern int is_struct__176_allow_double_conversion();
extern int struct__176_to_double(const void *pValue, double *nValue);
extern int get_struct__176_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__176(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__176_default_value(void *pValue);
extern SimTypeUtils _Type_struct__176_Utils;

/****************************************************************
 ** array__181 
 ****************************************************************/
extern int array__181_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__181_string(const char *str, char **endptr);
extern int string_to_array__181(const char *str, void *pValue, char **endptr);
extern int is_array__181_allow_double_conversion();
extern int array__181_to_double(const void *pValue, double *nValue);
extern int get_array__181_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__181(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__181_default_value(void *pValue);
extern SimTypeUtils _Type_array__181_Utils;

/****************************************************************
 ** array__184 
 ****************************************************************/
extern int array__184_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__184_string(const char *str, char **endptr);
extern int string_to_array__184(const char *str, void *pValue, char **endptr);
extern int is_array__184_allow_double_conversion();
extern int array__184_to_double(const void *pValue, double *nValue);
extern int get_array__184_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__184(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__184_default_value(void *pValue);
extern SimTypeUtils _Type_array__184_Utils;

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


#endif /*TRACKATLAS_TYPES_CONVERSION */
