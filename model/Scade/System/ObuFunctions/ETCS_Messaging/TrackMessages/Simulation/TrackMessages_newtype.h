#ifndef TRACKMESSAGES_TYPES_CONVERTION
#define TRACKMESSAGES_TYPES_CONVERTION

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
 ** array_int_500 
 ****************************************************************/
extern int array_int_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_500_string(const char *str, char **endptr);
extern int string_to_array_int_500(const char *str, void *pValue, char **endptr);
extern int is_array_int_500_allow_double_convertion();
extern int array_int_500_to_double(const void *pValue, double *nValue);
extern int get_array_int_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_500(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_500_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_500_Utils;

/****************************************************************
 ** struct__862 
 ****************************************************************/
extern int struct__862_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__862_string(const char *str, char **endptr);
extern int string_to_struct__862(const char *str, void *pValue, char **endptr);
extern int is_struct__862_allow_double_convertion();
extern int struct__862_to_double(const void *pValue, double *nValue);
extern int get_struct__862_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__862(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__862_default_value(void *pValue);
extern SimTypeUtils _Type_struct__862_Utils;

/****************************************************************
 ** array_int_64 
 ****************************************************************/
extern int array_int_64_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_64_string(const char *str, char **endptr);
extern int string_to_array_int_64(const char *str, void *pValue, char **endptr);
extern int is_array_int_64_allow_double_convertion();
extern int array_int_64_to_double(const void *pValue, double *nValue);
extern int get_array_int_64_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_64(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_64_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_64_Utils;

/****************************************************************
 ** struct__873 
 ****************************************************************/
extern int struct__873_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__873_string(const char *str, char **endptr);
extern int string_to_struct__873(const char *str, void *pValue, char **endptr);
extern int is_struct__873_allow_double_convertion();
extern int struct__873_to_double(const void *pValue, double *nValue);
extern int get_struct__873_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__873(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__873_default_value(void *pValue);
extern SimTypeUtils _Type_struct__873_Utils;

/****************************************************************
 ** array__878 
 ****************************************************************/
extern int array__878_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__878_string(const char *str, char **endptr);
extern int string_to_array__878(const char *str, void *pValue, char **endptr);
extern int is_array__878_allow_double_convertion();
extern int array__878_to_double(const void *pValue, double *nValue);
extern int get_array__878_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__878(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__878_default_value(void *pValue);
extern SimTypeUtils _Type_array__878_Utils;

/****************************************************************
 ** struct__881 
 ****************************************************************/
extern int struct__881_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__881_string(const char *str, char **endptr);
extern int string_to_struct__881(const char *str, void *pValue, char **endptr);
extern int is_struct__881_allow_double_convertion();
extern int struct__881_to_double(const void *pValue, double *nValue);
extern int get_struct__881_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__881(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__881_default_value(void *pValue);
extern SimTypeUtils _Type_struct__881_Utils;

/****************************************************************
 ** array_int_2 
 ****************************************************************/
extern int array_int_2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_2_string(const char *str, char **endptr);
extern int string_to_array_int_2(const char *str, void *pValue, char **endptr);
extern int is_array_int_2_allow_double_convertion();
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
extern int is_array_int_2_32_allow_double_convertion();
extern int array_int_2_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_2_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_2_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_2_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_2_32_Utils;

/****************************************************************
 ** array__895 
 ****************************************************************/
extern int array__895_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__895_string(const char *str, char **endptr);
extern int string_to_array__895(const char *str, void *pValue, char **endptr);
extern int is_array__895_allow_double_convertion();
extern int array__895_to_double(const void *pValue, double *nValue);
extern int get_array__895_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__895(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__895_default_value(void *pValue);
extern SimTypeUtils _Type_array__895_Utils;

/****************************************************************
 ** struct__898 
 ****************************************************************/
extern int struct__898_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__898_string(const char *str, char **endptr);
extern int string_to_struct__898(const char *str, void *pValue, char **endptr);
extern int is_struct__898_allow_double_convertion();
extern int struct__898_to_double(const void *pValue, double *nValue);
extern int get_struct__898_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__898(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__898_default_value(void *pValue);
extern SimTypeUtils _Type_struct__898_Utils;

/****************************************************************
 ** array__903 
 ****************************************************************/
extern int array__903_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__903_string(const char *str, char **endptr);
extern int string_to_array__903(const char *str, void *pValue, char **endptr);
extern int is_array__903_allow_double_convertion();
extern int array__903_to_double(const void *pValue, double *nValue);
extern int get_array__903_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__903(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__903_default_value(void *pValue);
extern SimTypeUtils _Type_array__903_Utils;

/****************************************************************
 ** array__906 
 ****************************************************************/
extern int array__906_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__906_string(const char *str, char **endptr);
extern int string_to_array__906(const char *str, void *pValue, char **endptr);
extern int is_array__906_allow_double_convertion();
extern int array__906_to_double(const void *pValue, double *nValue);
extern int get_array__906_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__906(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__906_default_value(void *pValue);
extern SimTypeUtils _Type_array__906_Utils;

/****************************************************************
 ** struct__909 
 ****************************************************************/
extern int struct__909_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__909_string(const char *str, char **endptr);
extern int string_to_struct__909(const char *str, void *pValue, char **endptr);
extern int is_struct__909_allow_double_convertion();
extern int struct__909_to_double(const void *pValue, double *nValue);
extern int get_struct__909_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__909(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__909_default_value(void *pValue);
extern SimTypeUtils _Type_struct__909_Utils;

/****************************************************************
 ** array_int_500_500 
 ****************************************************************/
extern int array_int_500_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_500_500_string(const char *str, char **endptr);
extern int string_to_array_int_500_500(const char *str, void *pValue, char **endptr);
extern int is_array_int_500_500_allow_double_convertion();
extern int array_int_500_500_to_double(const void *pValue, double *nValue);
extern int get_array_int_500_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_500_500(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_500_500_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_500_500_Utils;

/****************************************************************
 ** array_int_494 
 ****************************************************************/
extern int array_int_494_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_494_string(const char *str, char **endptr);
extern int string_to_array_int_494(const char *str, void *pValue, char **endptr);
extern int is_array_int_494_allow_double_convertion();
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
extern int is_array_int_6_allow_double_convertion();
extern int array_int_6_to_double(const void *pValue, double *nValue);
extern int get_array_int_6_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_6(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_6_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_6_Utils;

/****************************************************************
 ** array__933 
 ****************************************************************/
extern int array__933_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__933_string(const char *str, char **endptr);
extern int string_to_array__933(const char *str, void *pValue, char **endptr);
extern int is_array__933_allow_double_convertion();
extern int array__933_to_double(const void *pValue, double *nValue);
extern int get_array__933_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__933(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__933_default_value(void *pValue);
extern SimTypeUtils _Type_array__933_Utils;

/****************************************************************
 ** array_int_2_32_32 
 ****************************************************************/
extern int array_int_2_32_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_2_32_32_string(const char *str, char **endptr);
extern int string_to_array_int_2_32_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_2_32_32_allow_double_convertion();
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
extern int is_array_int_432_allow_double_convertion();
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
extern int is_array_int_4_allow_double_convertion();
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
extern int is_array_int_68_allow_double_convertion();
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
extern int is_array_int_33_allow_double_convertion();
extern int array_int_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_33_Utils;

/****************************************************************
 ** NID_PACKET 
 ****************************************************************/
extern int NID_PACKET_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_PACKET_string(const char *str, char **endptr);
extern int string_to_NID_PACKET(const char *str, void *pValue, char **endptr);
extern int is_NID_PACKET_allow_double_convertion();
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
extern int is_Q_DIR_allow_double_convertion();
extern int Q_DIR_to_double(const void *pValue, double *nValue);
extern int get_Q_DIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIR_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIR_Utils;

/****************************************************************
 ** P027V1_trackside_int_T_TM 
 ****************************************************************/
extern int P027V1_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P027V1_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P027V1_trackside_int_T_TM_allow_double_convertion();
extern int P027V1_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P027V1_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_trackside_int_T_TM_Utils;

/****************************************************************
 ** P027V1_trackide_qdifflist_T_TM 
 ****************************************************************/
extern int P027V1_trackide_qdifflist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_trackide_qdifflist_T_TM_string(const char *str, char **endptr);
extern int string_to_P027V1_trackide_qdifflist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P027V1_trackide_qdifflist_T_TM_allow_double_convertion();
extern int P027V1_trackide_qdifflist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P027V1_trackide_qdifflist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_trackide_qdifflist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_trackide_qdifflist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_trackide_qdifflist_T_TM_Utils;

/****************************************************************
 ** P027V1_section_int_qdiff_T_TM 
 ****************************************************************/
extern int P027V1_section_int_qdiff_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_section_int_qdiff_T_TM_string(const char *str, char **endptr);
extern int string_to_P027V1_section_int_qdiff_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P027V1_section_int_qdiff_T_TM_allow_double_convertion();
extern int P027V1_section_int_qdiff_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P027V1_section_int_qdiff_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_section_int_qdiff_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_section_int_qdiff_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_section_int_qdiff_T_TM_Utils;

/****************************************************************
 ** P027V1_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int P027V1_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_P027V1_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P027V1_trackide_sectionlist_T_TM_allow_double_convertion();
extern int P027V1_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P027V1_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** P027V1_section_int_T_TM 
 ****************************************************************/
extern int P027V1_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P027V1_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P027V1_section_int_T_TM_allow_double_convertion();
extern int P027V1_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P027V1_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_section_int_T_TM_Utils;

/****************************************************************
 ** nid_packet_meta_TM 
 ****************************************************************/
extern int nid_packet_meta_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_nid_packet_meta_TM_string(const char *str, char **endptr);
extern int string_to_nid_packet_meta_TM(const char *str, void *pValue, char **endptr);
extern int is_nid_packet_meta_TM_allow_double_convertion();
extern int nid_packet_meta_TM_to_double(const void *pValue, double *nValue);
extern int get_nid_packet_meta_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_nid_packet_meta_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_nid_packet_meta_TM_default_value(void *pValue);
extern SimTypeUtils _Type_nid_packet_meta_TM_Utils;

/****************************************************************
 ** _2_P027V1_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int _2_P027V1_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__2_P027V1_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to__2_P027V1_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is__2_P027V1_OBU_sectionlist_int_T_TM_allow_double_convertion();
extern int _2_P027V1_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get__2_P027V1_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__2_P027V1_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__2_P027V1_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type__2_P027V1_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** P027V1_sections_array_flat_qdiff_T_TM 
 ****************************************************************/
extern int P027V1_sections_array_flat_qdiff_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_sections_array_flat_qdiff_T_TM_string(const char *str, char **endptr);
extern int string_to_P027V1_sections_array_flat_qdiff_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P027V1_sections_array_flat_qdiff_T_TM_allow_double_convertion();
extern int P027V1_sections_array_flat_qdiff_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P027V1_sections_array_flat_qdiff_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_sections_array_flat_qdiff_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_sections_array_flat_qdiff_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_sections_array_flat_qdiff_T_TM_Utils;

/****************************************************************
 ** _1_P027V1_OBU_sectionlist_array_qdiff_T_TM 
 ****************************************************************/
extern int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_string(const char *str, char **endptr);
extern int string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM(const char *str, void *pValue, char **endptr);
extern int is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_allow_double_convertion();
extern int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_to_double(const void *pValue, double *nValue);
extern int get__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__1_P027V1_OBU_sectionlist_array_qdiff_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_Utils;

/****************************************************************
 ** P027V1_section_array_qdiff_T_TM 
 ****************************************************************/
extern int P027V1_section_array_qdiff_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_section_array_qdiff_T_TM_string(const char *str, char **endptr);
extern int string_to_P027V1_section_array_qdiff_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P027V1_section_array_qdiff_T_TM_allow_double_convertion();
extern int P027V1_section_array_qdiff_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P027V1_section_array_qdiff_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_section_array_qdiff_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_section_array_qdiff_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_section_array_qdiff_T_TM_Utils;

/****************************************************************
 ** P027V1_OBU_sectionlist_int_qdiff_T_TM 
 ****************************************************************/
extern int P027V1_OBU_sectionlist_int_qdiff_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_OBU_sectionlist_int_qdiff_T_TM_string(const char *str, char **endptr);
extern int string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P027V1_OBU_sectionlist_int_qdiff_T_TM_allow_double_convertion();
extern int P027V1_OBU_sectionlist_int_qdiff_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P027V1_OBU_sectionlist_int_qdiff_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_OBU_sectionlist_int_qdiff_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_OBU_sectionlist_int_qdiff_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_OBU_sectionlist_int_qdiff_T_TM_Utils;

/****************************************************************
 ** Metadata_T_Common_Types_Pkg 
 ****************************************************************/
extern int Metadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Metadata_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
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
extern int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
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
extern int is_CompressedPacketData_T_Common_Types_Pkg_allow_double_convertion();
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
extern int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedPackets_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedPackets_T_Common_Types_Pkg_Utils;


#endif /*TRACKMESSAGES_TYPES_CONVERTION */
