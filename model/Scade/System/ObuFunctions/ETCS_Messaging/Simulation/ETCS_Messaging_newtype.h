#ifndef ETCS_MESSAGING_TYPES_CONVERTION
#define ETCS_MESSAGING_TYPES_CONVERTION

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
 ** array_int_20 
 ****************************************************************/
extern int array_int_20_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_20_string(const char *str, char **endptr);
extern int string_to_array_int_20(const char *str, void *pValue, char **endptr);
extern int is_array_int_20_allow_double_convertion();
extern int array_int_20_to_double(const void *pValue, double *nValue);
extern int get_array_int_20_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_20(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_20_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_20_Utils;

/****************************************************************
 ** Information_T_BM_Types_Flat 
 ****************************************************************/
extern int Information_T_BM_Types_Flat_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Information_T_BM_Types_Flat_string(const char *str, char **endptr);
extern int string_to_Information_T_BM_Types_Flat(const char *str, void *pValue, char **endptr);
extern int is_Information_T_BM_Types_Flat_allow_double_convertion();
extern int Information_T_BM_Types_Flat_to_double(const void *pValue, double *nValue);
extern int get_Information_T_BM_Types_Flat_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Information_T_BM_Types_Flat(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Information_T_BM_Types_Flat_default_value(void *pValue);
extern SimTypeUtils _Type_Information_T_BM_Types_Flat_Utils;

/****************************************************************
 ** InfoElement_T_BM_Types_Flat 
 ****************************************************************/
extern int InfoElement_T_BM_Types_Flat_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_InfoElement_T_BM_Types_Flat_string(const char *str, char **endptr);
extern int string_to_InfoElement_T_BM_Types_Flat(const char *str, void *pValue, char **endptr);
extern int is_InfoElement_T_BM_Types_Flat_allow_double_convertion();
extern int InfoElement_T_BM_Types_Flat_to_double(const void *pValue, double *nValue);
extern int get_InfoElement_T_BM_Types_Flat_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_InfoElement_T_BM_Types_Flat(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_InfoElement_T_BM_Types_Flat_default_value(void *pValue);
extern SimTypeUtils _Type_InfoElement_T_BM_Types_Flat_Utils;

/****************************************************************
 ** NID_VBCMK_T_Types_Notfound 
 ****************************************************************/
extern int NID_VBCMK_T_Types_Notfound_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_VBCMK_T_Types_Notfound_string(const char *str, char **endptr);
extern int string_to_NID_VBCMK_T_Types_Notfound(const char *str, void *pValue, char **endptr);
extern int is_NID_VBCMK_T_Types_Notfound_allow_double_convertion();
extern int NID_VBCMK_T_Types_Notfound_to_double(const void *pValue, double *nValue);
extern int get_NID_VBCMK_T_Types_Notfound_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_VBCMK_T_Types_Notfound(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_VBCMK_T_Types_Notfound_default_value(void *pValue);
extern SimTypeUtils _Type_NID_VBCMK_T_Types_Notfound_Utils;


#endif /*ETCS_MESSAGING_TYPES_CONVERTION */
