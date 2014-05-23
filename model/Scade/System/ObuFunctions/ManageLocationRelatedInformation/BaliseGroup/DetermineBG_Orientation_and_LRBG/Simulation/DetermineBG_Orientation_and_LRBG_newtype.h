#ifndef DETERMINEBG_ORIENTATION_AND_LRBG_TYPES_CONVERTION
#define DETERMINEBG_ORIENTATION_AND_LRBG_TYPES_CONVERTION

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
 ** struct__755 
 ****************************************************************/
extern int struct__755_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__755_string(const char *str, char **endptr);
extern int string_to_struct__755(const char *str, void *pValue, char **endptr);
extern int is_struct__755_allow_double_convertion();
extern int struct__755_to_double(const void *pValue, double *nValue);
extern int get_struct__755_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__755(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__755_default_value(void *pValue);
extern SimTypeUtils _Type_struct__755_Utils;

/****************************************************************
 ** struct__764 
 ****************************************************************/
extern int struct__764_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__764_string(const char *str, char **endptr);
extern int string_to_struct__764(const char *str, void *pValue, char **endptr);
extern int is_struct__764_allow_double_convertion();
extern int struct__764_to_double(const void *pValue, double *nValue);
extern int get_struct__764_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__764(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__764_default_value(void *pValue);
extern SimTypeUtils _Type_struct__764_Utils;

/****************************************************************
 ** struct__768 
 ****************************************************************/
extern int struct__768_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__768_string(const char *str, char **endptr);
extern int string_to_struct__768(const char *str, void *pValue, char **endptr);
extern int is_struct__768_allow_double_convertion();
extern int struct__768_to_double(const void *pValue, double *nValue);
extern int get_struct__768_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__768(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__768_default_value(void *pValue);
extern SimTypeUtils _Type_struct__768_Utils;

/****************************************************************
 ** struct__774 
 ****************************************************************/
extern int struct__774_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__774_string(const char *str, char **endptr);
extern int string_to_struct__774(const char *str, void *pValue, char **endptr);
extern int is_struct__774_allow_double_convertion();
extern int struct__774_to_double(const void *pValue, double *nValue);
extern int get_struct__774_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__774(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__774_default_value(void *pValue);
extern SimTypeUtils _Type_struct__774_Utils;

/****************************************************************
 ** struct__779 
 ****************************************************************/
extern int struct__779_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__779_string(const char *str, char **endptr);
extern int string_to_struct__779(const char *str, void *pValue, char **endptr);
extern int is_struct__779_allow_double_convertion();
extern int struct__779_to_double(const void *pValue, double *nValue);
extern int get_struct__779_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__779(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__779_default_value(void *pValue);
extern SimTypeUtils _Type_struct__779_Utils;

/****************************************************************
 ** struct__792 
 ****************************************************************/
extern int struct__792_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__792_string(const char *str, char **endptr);
extern int string_to_struct__792(const char *str, void *pValue, char **endptr);
extern int is_struct__792_allow_double_convertion();
extern int struct__792_to_double(const void *pValue, double *nValue);
extern int get_struct__792_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__792(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__792_default_value(void *pValue);
extern SimTypeUtils _Type_struct__792_Utils;

/****************************************************************
 ** struct__796 
 ****************************************************************/
extern int struct__796_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__796_string(const char *str, char **endptr);
extern int string_to_struct__796(const char *str, void *pValue, char **endptr);
extern int is_struct__796_allow_double_convertion();
extern int struct__796_to_double(const void *pValue, double *nValue);
extern int get_struct__796_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__796(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__796_default_value(void *pValue);
extern SimTypeUtils _Type_struct__796_Utils;

/****************************************************************
 ** array__801 
 ****************************************************************/
extern int array__801_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__801_string(const char *str, char **endptr);
extern int string_to_array__801(const char *str, void *pValue, char **endptr);
extern int is_array__801_allow_double_convertion();
extern int array__801_to_double(const void *pValue, double *nValue);
extern int get_array__801_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__801(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__801_default_value(void *pValue);
extern SimTypeUtils _Type_array__801_Utils;

/****************************************************************
 ** struct__804 
 ****************************************************************/
extern int struct__804_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__804_string(const char *str, char **endptr);
extern int string_to_struct__804(const char *str, void *pValue, char **endptr);
extern int is_struct__804_allow_double_convertion();
extern int struct__804_to_double(const void *pValue, double *nValue);
extern int get_struct__804_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__804(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__804_default_value(void *pValue);
extern SimTypeUtils _Type_struct__804_Utils;

/****************************************************************
 ** struct__809 
 ****************************************************************/
extern int struct__809_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__809_string(const char *str, char **endptr);
extern int string_to_struct__809(const char *str, void *pValue, char **endptr);
extern int is_struct__809_allow_double_convertion();
extern int struct__809_to_double(const void *pValue, double *nValue);
extern int get_struct__809_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__809(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__809_default_value(void *pValue);
extern SimTypeUtils _Type_struct__809_Utils;

/****************************************************************
 ** struct__814 
 ****************************************************************/
extern int struct__814_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__814_string(const char *str, char **endptr);
extern int string_to_struct__814(const char *str, void *pValue, char **endptr);
extern int is_struct__814_allow_double_convertion();
extern int struct__814_to_double(const void *pValue, double *nValue);
extern int get_struct__814_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__814(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__814_default_value(void *pValue);
extern SimTypeUtils _Type_struct__814_Utils;

/****************************************************************
 ** struct__818 
 ****************************************************************/
extern int struct__818_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__818_string(const char *str, char **endptr);
extern int string_to_struct__818(const char *str, void *pValue, char **endptr);
extern int is_struct__818_allow_double_convertion();
extern int struct__818_to_double(const void *pValue, double *nValue);
extern int get_struct__818_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__818(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__818_default_value(void *pValue);
extern SimTypeUtils _Type_struct__818_Utils;

/****************************************************************
 ** array__823 
 ****************************************************************/
extern int array__823_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__823_string(const char *str, char **endptr);
extern int string_to_array__823(const char *str, void *pValue, char **endptr);
extern int is_array__823_allow_double_convertion();
extern int array__823_to_double(const void *pValue, double *nValue);
extern int get_array__823_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__823(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__823_default_value(void *pValue);
extern SimTypeUtils _Type_array__823_Utils;

/****************************************************************
 ** Orientation_DetermineBGOrientation_LRBG_DataDctionary 
 ****************************************************************/
extern int Orientation_DetermineBGOrientation_LRBG_DataDctionary_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Orientation_DetermineBGOrientation_LRBG_DataDctionary_string(const char *str, char **endptr);
extern int string_to_Orientation_DetermineBGOrientation_LRBG_DataDctionary(const char *str, void *pValue, char **endptr);
extern int is_Orientation_DetermineBGOrientation_LRBG_DataDctionary_allow_double_convertion();
extern int Orientation_DetermineBGOrientation_LRBG_DataDctionary_to_double(const void *pValue, double *nValue);
extern int get_Orientation_DetermineBGOrientation_LRBG_DataDctionary_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Orientation_DetermineBGOrientation_LRBG_DataDctionary(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Orientation_DetermineBGOrientation_LRBG_DataDctionary_default_value(void *pValue);
extern SimTypeUtils _Type_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils;

/****************************************************************
 ** ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs 
 ****************************************************************/
extern int ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_string(const char *str, char **endptr);
extern int string_to_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs(const char *str, void *pValue, char **endptr);
extern int is_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_allow_double_convertion();
extern int ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_double(const void *pValue, double *nValue);
extern int get_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_default_value(void *pValue);
extern SimTypeUtils _Type_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils;

/****************************************************************
 ** CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG 
 ****************************************************************/
extern int CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string(const char *str, char **endptr);
extern int string_to_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(const char *str, void *pValue, char **endptr);
extern int is_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_allow_double_convertion();
extern int CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double(const void *pValue, double *nValue);
extern int get_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_default_value(void *pValue);
extern SimTypeUtils _Type_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils;

/****************************************************************
 ** Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG 
 ****************************************************************/
extern int Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string(const char *str, char **endptr);
extern int string_to_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(const char *str, void *pValue, char **endptr);
extern int is_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_allow_double_convertion();
extern int Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double(const void *pValue, double *nValue);
extern int get_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_default_value(void *pValue);
extern SimTypeUtils _Type_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils;

/****************************************************************
 ** FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage 
 ****************************************************************/
extern int FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_string(const char *str, char **endptr);
extern int string_to_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(const char *str, void *pValue, char **endptr);
extern int is_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_allow_double_convertion();
extern int FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_double(const void *pValue, double *nValue);
extern int get_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_default_value(void *pValue);
extern SimTypeUtils _Type_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils;

/****************************************************************
 ** Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable 
 ****************************************************************/
extern int Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char *str, char **endptr);
extern int string_to_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char *str, void *pValue, char **endptr);
extern int is_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(const void *pValue, double *nValue);
extern int get_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_default_value(void *pValue);
extern SimTypeUtils _Type_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;

/****************************************************************
 ** CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage 
 ****************************************************************/
extern int CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char *str, char **endptr);
extern int string_to_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char *str, void *pValue, char **endptr);
extern int is_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(const void *pValue, double *nValue);
extern int get_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value(void *pValue);
extern SimTypeUtils _Type_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;

/****************************************************************
 ** HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage 
 ****************************************************************/
extern int HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char *str, char **endptr);
extern int string_to_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char *str, void *pValue, char **endptr);
extern int is_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(const void *pValue, double *nValue);
extern int get_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value(void *pValue);
extern SimTypeUtils _Type_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;

/****************************************************************
 ** HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage 
 ****************************************************************/
extern int HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char *str, char **endptr);
extern int string_to_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char *str, void *pValue, char **endptr);
extern int is_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(const void *pValue, double *nValue);
extern int get_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value(void *pValue);
extern SimTypeUtils _Type_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;

/****************************************************************
 ** Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage 
 ****************************************************************/
extern int Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char *str, char **endptr);
extern int string_to_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char *str, void *pValue, char **endptr);
extern int is_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(const void *pValue, double *nValue);
extern int get_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_default_value(void *pValue);
extern SimTypeUtils _Type_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;

/****************************************************************
 ** Header_DetermineBGOrientation_LRBG_DataDctionary_BTM 
 ****************************************************************/
extern int Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_string(const char *str, char **endptr);
extern int string_to_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(const char *str, void *pValue, char **endptr);
extern int is_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_allow_double_convertion();
extern int Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double(const void *pValue, double *nValue);
extern int get_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_default_value(void *pValue);
extern SimTypeUtils _Type_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils;

/****************************************************************
 ** AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM 
 ****************************************************************/
extern int AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_string(const char *str, char **endptr);
extern int string_to_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM(const char *str, void *pValue, char **endptr);
extern int is_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_allow_double_convertion();
extern int AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double(const void *pValue, double *nValue);
extern int get_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_default_value(void *pValue);
extern SimTypeUtils _Type_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils;

/****************************************************************
 ** TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo 
 ****************************************************************/
extern int TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_string(const char *str, char **endptr);
extern int string_to_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo(const char *str, void *pValue, char **endptr);
extern int is_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_allow_double_convertion();
extern int TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_to_double(const void *pValue, double *nValue);
extern int get_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_default_value(void *pValue);
extern SimTypeUtils _Type_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils;

/****************************************************************
 ** Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets 
 ****************************************************************/
extern int Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_string(const char *str, char **endptr);
extern int string_to_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(const char *str, void *pValue, char **endptr);
extern int is_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_allow_double_convertion();
extern int Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_double(const void *pValue, double *nValue);
extern int get_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_default_value(void *pValue);
extern SimTypeUtils _Type_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils;

/****************************************************************
 ** Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets 
 ****************************************************************/
extern int Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_string(const char *str, char **endptr);
extern int string_to_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets(const char *str, void *pValue, char **endptr);
extern int is_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_allow_double_convertion();
extern int Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_double(const void *pValue, double *nValue);
extern int get_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_default_value(void *pValue);
extern SimTypeUtils _Type_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils;

/****************************************************************
 ** RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport 
 ****************************************************************/
extern int RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_string(const char *str, char **endptr);
extern int string_to_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport(const char *str, void *pValue, char **endptr);
extern int is_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_allow_double_convertion();
extern int RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_to_double(const void *pValue, double *nValue);
extern int get_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_default_value(void *pValue);
extern SimTypeUtils _Type_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils;


#endif /*DETERMINEBG_ORIENTATION_AND_LRBG_TYPES_CONVERTION */
