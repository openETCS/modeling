#ifndef UTRECHTAMSTERDAM_OETCS_TYPES_CONVERTION
#define UTRECHTAMSTERDAM_OETCS_TYPES_CONVERTION

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
 ** struct__3653 
 ****************************************************************/
extern int struct__3653_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__3653_string(const char *str, char **endptr);
extern int string_to_struct__3653(const char *str, void *pValue, char **endptr);
extern int is_struct__3653_allow_double_convertion();
extern int struct__3653_to_double(const void *pValue, double *nValue);
extern int get_struct__3653_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__3653(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__3653_default_value(void *pValue);
extern SimTypeUtils _Type_struct__3653_Utils;

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
 ** struct__3669 
 ****************************************************************/
extern int struct__3669_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__3669_string(const char *str, char **endptr);
extern int string_to_struct__3669(const char *str, void *pValue, char **endptr);
extern int is_struct__3669_allow_double_convertion();
extern int struct__3669_to_double(const void *pValue, double *nValue);
extern int get_struct__3669_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__3669(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__3669_default_value(void *pValue);
extern SimTypeUtils _Type_struct__3669_Utils;

/****************************************************************
 ** array__3677 
 ****************************************************************/
extern int array__3677_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__3677_string(const char *str, char **endptr);
extern int string_to_array__3677(const char *str, void *pValue, char **endptr);
extern int is_array__3677_allow_double_convertion();
extern int array__3677_to_double(const void *pValue, double *nValue);
extern int get_array__3677_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__3677(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__3677_default_value(void *pValue);
extern SimTypeUtils _Type_array__3677_Utils;

/****************************************************************
 ** struct__3680 
 ****************************************************************/
extern int struct__3680_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__3680_string(const char *str, char **endptr);
extern int string_to_struct__3680(const char *str, void *pValue, char **endptr);
extern int is_struct__3680_allow_double_convertion();
extern int struct__3680_to_double(const void *pValue, double *nValue);
extern int get_struct__3680_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__3680(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__3680_default_value(void *pValue);
extern SimTypeUtils _Type_struct__3680_Utils;

/****************************************************************
 ** struct__3685 
 ****************************************************************/
extern int struct__3685_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__3685_string(const char *str, char **endptr);
extern int string_to_struct__3685(const char *str, void *pValue, char **endptr);
extern int is_struct__3685_allow_double_convertion();
extern int struct__3685_to_double(const void *pValue, double *nValue);
extern int get_struct__3685_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__3685(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__3685_default_value(void *pValue);
extern SimTypeUtils _Type_struct__3685_Utils;

/****************************************************************
 ** struct__3693 
 ****************************************************************/
extern int struct__3693_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__3693_string(const char *str, char **endptr);
extern int string_to_struct__3693(const char *str, void *pValue, char **endptr);
extern int is_struct__3693_allow_double_convertion();
extern int struct__3693_to_double(const void *pValue, double *nValue);
extern int get_struct__3693_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__3693(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__3693_default_value(void *pValue);
extern SimTypeUtils _Type_struct__3693_Utils;

/****************************************************************
 ** struct__3706 
 ****************************************************************/
extern int struct__3706_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__3706_string(const char *str, char **endptr);
extern int string_to_struct__3706(const char *str, void *pValue, char **endptr);
extern int is_struct__3706_allow_double_convertion();
extern int struct__3706_to_double(const void *pValue, double *nValue);
extern int get_struct__3706_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__3706(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__3706_default_value(void *pValue);
extern SimTypeUtils _Type_struct__3706_Utils;

/****************************************************************
 ** struct__3715 
 ****************************************************************/
extern int struct__3715_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__3715_string(const char *str, char **endptr);
extern int string_to_struct__3715(const char *str, void *pValue, char **endptr);
extern int is_struct__3715_allow_double_convertion();
extern int struct__3715_to_double(const void *pValue, double *nValue);
extern int get_struct__3715_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__3715(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__3715_default_value(void *pValue);
extern SimTypeUtils _Type_struct__3715_Utils;

/****************************************************************
 ** struct__3720 
 ****************************************************************/
extern int struct__3720_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__3720_string(const char *str, char **endptr);
extern int string_to_struct__3720(const char *str, void *pValue, char **endptr);
extern int is_struct__3720_allow_double_convertion();
extern int struct__3720_to_double(const void *pValue, double *nValue);
extern int get_struct__3720_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__3720(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__3720_default_value(void *pValue);
extern SimTypeUtils _Type_struct__3720_Utils;

/****************************************************************
 ** array__3731 
 ****************************************************************/
extern int array__3731_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__3731_string(const char *str, char **endptr);
extern int string_to_array__3731(const char *str, void *pValue, char **endptr);
extern int is_array__3731_allow_double_convertion();
extern int array__3731_to_double(const void *pValue, double *nValue);
extern int get_array__3731_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__3731(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__3731_default_value(void *pValue);
extern SimTypeUtils _Type_array__3731_Utils;

/****************************************************************
 ** struct__3734 
 ****************************************************************/
extern int struct__3734_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__3734_string(const char *str, char **endptr);
extern int string_to_struct__3734(const char *str, void *pValue, char **endptr);
extern int is_struct__3734_allow_double_convertion();
extern int struct__3734_to_double(const void *pValue, double *nValue);
extern int get_struct__3734_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__3734(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__3734_default_value(void *pValue);
extern SimTypeUtils _Type_struct__3734_Utils;

/****************************************************************
 ** array_int_7 
 ****************************************************************/
extern int array_int_7_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_7_string(const char *str, char **endptr);
extern int string_to_array_int_7(const char *str, void *pValue, char **endptr);
extern int is_array_int_7_allow_double_convertion();
extern int array_int_7_to_double(const void *pValue, double *nValue);
extern int get_array_int_7_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_7(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_7_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_7_Utils;

/****************************************************************
 ** array_int_461 
 ****************************************************************/
extern int array_int_461_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_461_string(const char *str, char **endptr);
extern int string_to_array_int_461(const char *str, void *pValue, char **endptr);
extern int is_array_int_461_allow_double_convertion();
extern int array_int_461_to_double(const void *pValue, double *nValue);
extern int get_array_int_461_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_461(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_461_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_461_Utils;

/****************************************************************
 ** array_int_11 
 ****************************************************************/
extern int array_int_11_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_11_string(const char *str, char **endptr);
extern int string_to_array_int_11(const char *str, void *pValue, char **endptr);
extern int is_array_int_11_allow_double_convertion();
extern int array_int_11_to_double(const void *pValue, double *nValue);
extern int get_array_int_11_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_11(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_11_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_11_Utils;

/****************************************************************
 ** array_int_18 
 ****************************************************************/
extern int array_int_18_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_18_string(const char *str, char **endptr);
extern int string_to_array_int_18(const char *str, void *pValue, char **endptr);
extern int is_array_int_18_allow_double_convertion();
extern int array_int_18_to_double(const void *pValue, double *nValue);
extern int get_array_int_18_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_18(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_18_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_18_Utils;

/****************************************************************
 ** array_int_25 
 ****************************************************************/
extern int array_int_25_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_25_string(const char *str, char **endptr);
extern int string_to_array_int_25(const char *str, void *pValue, char **endptr);
extern int is_array_int_25_allow_double_convertion();
extern int array_int_25_to_double(const void *pValue, double *nValue);
extern int get_array_int_25_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_25(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_25_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_25_Utils;

/****************************************************************
 ** array_int_32 
 ****************************************************************/
extern int array_int_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_32_string(const char *str, char **endptr);
extern int string_to_array_int_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_32_allow_double_convertion();
extern int array_int_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_32_Utils;

/****************************************************************
 ** array_int_39 
 ****************************************************************/
extern int array_int_39_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_39_string(const char *str, char **endptr);
extern int string_to_array_int_39(const char *str, void *pValue, char **endptr);
extern int is_array_int_39_allow_double_convertion();
extern int array_int_39_to_double(const void *pValue, double *nValue);
extern int get_array_int_39_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_39(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_39_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_39_Utils;

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
 ** TM_CompressedBaliseMessage 
 ****************************************************************/
extern int TM_CompressedBaliseMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TM_CompressedBaliseMessage_string(const char *str, char **endptr);
extern int string_to_TM_CompressedBaliseMessage(const char *str, void *pValue, char **endptr);
extern int is_TM_CompressedBaliseMessage_allow_double_convertion();
extern int TM_CompressedBaliseMessage_to_double(const void *pValue, double *nValue);
extern int get_TM_CompressedBaliseMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TM_CompressedBaliseMessage(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TM_CompressedBaliseMessage_default_value(void *pValue);
extern SimTypeUtils _Type_TM_CompressedBaliseMessage_Utils;

/****************************************************************
 ** TM_BaliseTelegramHeader_int_T 
 ****************************************************************/
extern int TM_BaliseTelegramHeader_int_T_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TM_BaliseTelegramHeader_int_T_string(const char *str, char **endptr);
extern int string_to_TM_BaliseTelegramHeader_int_T(const char *str, void *pValue, char **endptr);
extern int is_TM_BaliseTelegramHeader_int_T_allow_double_convertion();
extern int TM_BaliseTelegramHeader_int_T_to_double(const void *pValue, double *nValue);
extern int get_TM_BaliseTelegramHeader_int_T_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TM_BaliseTelegramHeader_int_T(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TM_BaliseTelegramHeader_int_T_default_value(void *pValue);
extern SimTypeUtils _Type_TM_BaliseTelegramHeader_int_T_Utils;

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
 ** TM_OrBG 
 ****************************************************************/
extern int TM_OrBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TM_OrBG_string(const char *str, char **endptr);
extern int string_to_TM_OrBG(const char *str, void *pValue, char **endptr);
extern int is_TM_OrBG_allow_double_convertion();
extern int TM_OrBG_to_double(const void *pValue, double *nValue);
extern int get_TM_OrBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TM_OrBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TM_OrBG_default_value(void *pValue);
extern SimTypeUtils _Type_TM_OrBG_Utils;

/****************************************************************
 ** TM_OrLine 
 ****************************************************************/
extern int TM_OrLine_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TM_OrLine_string(const char *str, char **endptr);
extern int string_to_TM_OrLine(const char *str, void *pValue, char **endptr);
extern int is_TM_OrLine_allow_double_convertion();
extern int TM_OrLine_to_double(const void *pValue, double *nValue);
extern int get_TM_OrLine_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TM_OrLine(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TM_OrLine_default_value(void *pValue);
extern SimTypeUtils _Type_TM_OrLine_Utils;

/****************************************************************
 ** TM_P005 
 ****************************************************************/
extern int TM_P005_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TM_P005_string(const char *str, char **endptr);
extern int string_to_TM_P005(const char *str, void *pValue, char **endptr);
extern int is_TM_P005_allow_double_convertion();
extern int TM_P005_to_double(const void *pValue, double *nValue);
extern int get_TM_P005_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TM_P005(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TM_P005_default_value(void *pValue);
extern SimTypeUtils _Type_TM_P005_Utils;

/****************************************************************
 ** TM_P05Es_T 
 ****************************************************************/
extern int TM_P05Es_T_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TM_P05Es_T_string(const char *str, char **endptr);
extern int string_to_TM_P05Es_T(const char *str, void *pValue, char **endptr);
extern int is_TM_P05Es_T_allow_double_convertion();
extern int TM_P05Es_T_to_double(const void *pValue, double *nValue);
extern int get_TM_P05Es_T_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TM_P05Es_T(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TM_P05Es_T_default_value(void *pValue);
extern SimTypeUtils _Type_TM_P05Es_T_Utils;

/****************************************************************
 ** TM_P005E_T 
 ****************************************************************/
extern int TM_P005E_T_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TM_P005E_T_string(const char *str, char **endptr);
extern int string_to_TM_P005E_T(const char *str, void *pValue, char **endptr);
extern int is_TM_P005E_T_allow_double_convertion();
extern int TM_P005E_T_to_double(const void *pValue, double *nValue);
extern int get_TM_P005E_T_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TM_P005E_T(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TM_P005E_T_default_value(void *pValue);
extern SimTypeUtils _Type_TM_P005E_T_Utils;

/****************************************************************
 ** TM_P005E_array_T 
 ****************************************************************/
extern int TM_P005E_array_T_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TM_P005E_array_T_string(const char *str, char **endptr);
extern int string_to_TM_P005E_array_T(const char *str, void *pValue, char **endptr);
extern int is_TM_P005E_array_T_allow_double_convertion();
extern int TM_P005E_array_T_to_double(const void *pValue, double *nValue);
extern int get_TM_P005E_array_T_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TM_P005E_array_T(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TM_P005E_array_T_default_value(void *pValue);
extern SimTypeUtils _Type_TM_P005E_array_T_Utils;

/****************************************************************
 ** TM_BaliseGroupData 
 ****************************************************************/
extern int TM_BaliseGroupData_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TM_BaliseGroupData_string(const char *str, char **endptr);
extern int string_to_TM_BaliseGroupData(const char *str, void *pValue, char **endptr);
extern int is_TM_BaliseGroupData_allow_double_convertion();
extern int TM_BaliseGroupData_to_double(const void *pValue, double *nValue);
extern int get_TM_BaliseGroupData_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TM_BaliseGroupData(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TM_BaliseGroupData_default_value(void *pValue);
extern SimTypeUtils _Type_TM_BaliseGroupData_Utils;

/****************************************************************
 ** Q_UPDOWN 
 ****************************************************************/
extern int Q_UPDOWN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_UPDOWN_string(const char *str, char **endptr);
extern int string_to_Q_UPDOWN(const char *str, void *pValue, char **endptr);
extern int is_Q_UPDOWN_allow_double_convertion();
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
extern int is_M_VERSION_allow_double_convertion();
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
extern int is_Q_MEDIA_allow_double_convertion();
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
extern int is_N_PIG_allow_double_convertion();
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
extern int is_N_TOTAL_allow_double_convertion();
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
extern int is_M_DUP_allow_double_convertion();
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
extern int is_M_MCOUNT_allow_double_convertion();
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
extern int is_NID_C_allow_double_convertion();
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
extern int is_NID_BG_allow_double_convertion();
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
extern int is_Q_LINK_allow_double_convertion();
extern int Q_LINK_to_double(const void *pValue, double *nValue);
extern int get_Q_LINK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINK(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINK_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINK_Utils;

/****************************************************************
 ** B_data_internal_FirstTest_InfraLib 
 ****************************************************************/
extern int B_data_internal_FirstTest_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_B_data_internal_FirstTest_InfraLib_string(const char *str, char **endptr);
extern int string_to_B_data_internal_FirstTest_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_B_data_internal_FirstTest_InfraLib_allow_double_convertion();
extern int B_data_internal_FirstTest_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_B_data_internal_FirstTest_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_B_data_internal_FirstTest_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_B_data_internal_FirstTest_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_B_data_internal_FirstTest_InfraLib_Utils;

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
 ** BaliseGroupData_Basics 
 ****************************************************************/
extern int BaliseGroupData_Basics_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BaliseGroupData_Basics_string(const char *str, char **endptr);
extern int string_to_BaliseGroupData_Basics(const char *str, void *pValue, char **endptr);
extern int is_BaliseGroupData_Basics_allow_double_convertion();
extern int BaliseGroupData_Basics_to_double(const void *pValue, double *nValue);
extern int get_BaliseGroupData_Basics_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BaliseGroupData_Basics(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BaliseGroupData_Basics_default_value(void *pValue);
extern SimTypeUtils _Type_BaliseGroupData_Basics_Utils;

/****************************************************************
 ** TelegramHeader_T_BG_Types_Pkg 
 ****************************************************************/
extern int TelegramHeader_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TelegramHeader_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_TelegramHeader_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_TelegramHeader_T_BG_Types_Pkg_allow_double_convertion();
extern int TelegramHeader_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_TelegramHeader_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TelegramHeader_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TelegramHeader_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_TelegramHeader_T_BG_Types_Pkg_Utils;


#endif /*UTRECHTAMSTERDAM_OETCS_TYPES_CONVERTION */
