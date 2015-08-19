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
 ** struct__431 
 ****************************************************************/
extern int struct__431_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__431_string(const char *str, char **endptr);
extern int string_to_struct__431(const char *str, void *pValue, char **endptr);
extern int is_struct__431_allow_double_conversion();
extern int struct__431_to_double(const void *pValue, double *nValue);
extern int get_struct__431_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__431(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__431_default_value(void *pValue);
extern SimTypeUtils _Type_struct__431_Utils;

/****************************************************************
 ** struct__437 
 ****************************************************************/
extern int struct__437_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__437_string(const char *str, char **endptr);
extern int string_to_struct__437(const char *str, void *pValue, char **endptr);
extern int is_struct__437_allow_double_conversion();
extern int struct__437_to_double(const void *pValue, double *nValue);
extern int get_struct__437_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__437(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__437_default_value(void *pValue);
extern SimTypeUtils _Type_struct__437_Utils;

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
 ** struct__450 
 ****************************************************************/
extern int struct__450_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__450_string(const char *str, char **endptr);
extern int string_to_struct__450(const char *str, void *pValue, char **endptr);
extern int is_struct__450_allow_double_conversion();
extern int struct__450_to_double(const void *pValue, double *nValue);
extern int get_struct__450_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__450(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__450_default_value(void *pValue);
extern SimTypeUtils _Type_struct__450_Utils;

/****************************************************************
 ** array__455 
 ****************************************************************/
extern int array__455_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__455_string(const char *str, char **endptr);
extern int string_to_array__455(const char *str, void *pValue, char **endptr);
extern int is_array__455_allow_double_conversion();
extern int array__455_to_double(const void *pValue, double *nValue);
extern int get_array__455_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__455(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__455_default_value(void *pValue);
extern SimTypeUtils _Type_array__455_Utils;

/****************************************************************
 ** struct__458 
 ****************************************************************/
extern int struct__458_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__458_string(const char *str, char **endptr);
extern int string_to_struct__458(const char *str, void *pValue, char **endptr);
extern int is_struct__458_allow_double_conversion();
extern int struct__458_to_double(const void *pValue, double *nValue);
extern int get_struct__458_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__458(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__458_default_value(void *pValue);
extern SimTypeUtils _Type_struct__458_Utils;

/****************************************************************
 ** struct__474 
 ****************************************************************/
extern int struct__474_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__474_string(const char *str, char **endptr);
extern int string_to_struct__474(const char *str, void *pValue, char **endptr);
extern int is_struct__474_allow_double_conversion();
extern int struct__474_to_double(const void *pValue, double *nValue);
extern int get_struct__474_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__474(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__474_default_value(void *pValue);
extern SimTypeUtils _Type_struct__474_Utils;

/****************************************************************
 ** struct__479 
 ****************************************************************/
extern int struct__479_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__479_string(const char *str, char **endptr);
extern int string_to_struct__479(const char *str, void *pValue, char **endptr);
extern int is_struct__479_allow_double_conversion();
extern int struct__479_to_double(const void *pValue, double *nValue);
extern int get_struct__479_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__479(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__479_default_value(void *pValue);
extern SimTypeUtils _Type_struct__479_Utils;

/****************************************************************
 ** struct__484 
 ****************************************************************/
extern int struct__484_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__484_string(const char *str, char **endptr);
extern int string_to_struct__484(const char *str, void *pValue, char **endptr);
extern int is_struct__484_allow_double_conversion();
extern int struct__484_to_double(const void *pValue, double *nValue);
extern int get_struct__484_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__484(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__484_default_value(void *pValue);
extern SimTypeUtils _Type_struct__484_Utils;

/****************************************************************
 ** array_int_15 
 ****************************************************************/
extern int array_int_15_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_15_string(const char *str, char **endptr);
extern int string_to_array_int_15(const char *str, void *pValue, char **endptr);
extern int is_array_int_15_allow_double_conversion();
extern int array_int_15_to_double(const void *pValue, double *nValue);
extern int get_array_int_15_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_15(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_15_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_15_Utils;

/****************************************************************
 ** struct__492 
 ****************************************************************/
extern int struct__492_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__492_string(const char *str, char **endptr);
extern int string_to_struct__492(const char *str, void *pValue, char **endptr);
extern int is_struct__492_allow_double_conversion();
extern int struct__492_to_double(const void *pValue, double *nValue);
extern int get_struct__492_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__492(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__492_default_value(void *pValue);
extern SimTypeUtils _Type_struct__492_Utils;

/****************************************************************
 ** array__497 
 ****************************************************************/
extern int array__497_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__497_string(const char *str, char **endptr);
extern int string_to_array__497(const char *str, void *pValue, char **endptr);
extern int is_array__497_allow_double_conversion();
extern int array__497_to_double(const void *pValue, double *nValue);
extern int get_array__497_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__497(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__497_default_value(void *pValue);
extern SimTypeUtils _Type_array__497_Utils;

/****************************************************************
 ** struct__500 
 ****************************************************************/
extern int struct__500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__500_string(const char *str, char **endptr);
extern int string_to_struct__500(const char *str, void *pValue, char **endptr);
extern int is_struct__500_allow_double_conversion();
extern int struct__500_to_double(const void *pValue, double *nValue);
extern int get_struct__500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__500(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__500_default_value(void *pValue);
extern SimTypeUtils _Type_struct__500_Utils;

/****************************************************************
 ** struct__506 
 ****************************************************************/
extern int struct__506_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__506_string(const char *str, char **endptr);
extern int string_to_struct__506(const char *str, void *pValue, char **endptr);
extern int is_struct__506_allow_double_conversion();
extern int struct__506_to_double(const void *pValue, double *nValue);
extern int get_struct__506_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__506(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__506_default_value(void *pValue);
extern SimTypeUtils _Type_struct__506_Utils;

/****************************************************************
 ** struct__526 
 ****************************************************************/
extern int struct__526_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__526_string(const char *str, char **endptr);
extern int string_to_struct__526(const char *str, void *pValue, char **endptr);
extern int is_struct__526_allow_double_conversion();
extern int struct__526_to_double(const void *pValue, double *nValue);
extern int get_struct__526_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__526(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__526_default_value(void *pValue);
extern SimTypeUtils _Type_struct__526_Utils;

/****************************************************************
 ** struct__531 
 ****************************************************************/
extern int struct__531_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__531_string(const char *str, char **endptr);
extern int string_to_struct__531(const char *str, void *pValue, char **endptr);
extern int is_struct__531_allow_double_conversion();
extern int struct__531_to_double(const void *pValue, double *nValue);
extern int get_struct__531_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__531(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__531_default_value(void *pValue);
extern SimTypeUtils _Type_struct__531_Utils;

/****************************************************************
 ** struct__550 
 ****************************************************************/
extern int struct__550_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__550_string(const char *str, char **endptr);
extern int string_to_struct__550(const char *str, void *pValue, char **endptr);
extern int is_struct__550_allow_double_conversion();
extern int struct__550_to_double(const void *pValue, double *nValue);
extern int get_struct__550_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__550(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__550_default_value(void *pValue);
extern SimTypeUtils _Type_struct__550_Utils;

/****************************************************************
 ** struct__555 
 ****************************************************************/
extern int struct__555_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__555_string(const char *str, char **endptr);
extern int string_to_struct__555(const char *str, void *pValue, char **endptr);
extern int is_struct__555_allow_double_conversion();
extern int struct__555_to_double(const void *pValue, double *nValue);
extern int get_struct__555_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__555(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__555_default_value(void *pValue);
extern SimTypeUtils _Type_struct__555_Utils;

/****************************************************************
 ** struct__565 
 ****************************************************************/
extern int struct__565_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__565_string(const char *str, char **endptr);
extern int string_to_struct__565(const char *str, void *pValue, char **endptr);
extern int is_struct__565_allow_double_conversion();
extern int struct__565_to_double(const void *pValue, double *nValue);
extern int get_struct__565_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__565(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__565_default_value(void *pValue);
extern SimTypeUtils _Type_struct__565_Utils;

/****************************************************************
 ** struct__577 
 ****************************************************************/
extern int struct__577_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__577_string(const char *str, char **endptr);
extern int string_to_struct__577(const char *str, void *pValue, char **endptr);
extern int is_struct__577_allow_double_conversion();
extern int struct__577_to_double(const void *pValue, double *nValue);
extern int get_struct__577_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__577(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__577_default_value(void *pValue);
extern SimTypeUtils _Type_struct__577_Utils;

/****************************************************************
 ** Q_MARQSTREASON 
 ****************************************************************/
extern int Q_MARQSTREASON_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_MARQSTREASON_string(const char *str, char **endptr);
extern int string_to_Q_MARQSTREASON(const char *str, void *pValue, char **endptr);
extern int is_Q_MARQSTREASON_allow_double_conversion();
extern int Q_MARQSTREASON_to_double(const void *pValue, double *nValue);
extern int get_Q_MARQSTREASON_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_MARQSTREASON(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_MARQSTREASON_default_value(void *pValue);
extern SimTypeUtils _Type_Q_MARQSTREASON_Utils;

/****************************************************************
 ** NID_MESSAGE 
 ****************************************************************/
extern int NID_MESSAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_MESSAGE_string(const char *str, char **endptr);
extern int string_to_NID_MESSAGE(const char *str, void *pValue, char **endptr);
extern int is_NID_MESSAGE_allow_double_conversion();
extern int NID_MESSAGE_to_double(const void *pValue, double *nValue);
extern int get_NID_MESSAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_MESSAGE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_MESSAGE_default_value(void *pValue);
extern SimTypeUtils _Type_NID_MESSAGE_Utils;

/****************************************************************
 ** T_TRAIN 
 ****************************************************************/
extern int T_TRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_TRAIN_string(const char *str, char **endptr);
extern int string_to_T_TRAIN(const char *str, void *pValue, char **endptr);
extern int is_T_TRAIN_allow_double_conversion();
extern int T_TRAIN_to_double(const void *pValue, double *nValue);
extern int get_T_TRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_TRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_TRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_T_TRAIN_Utils;

/****************************************************************
 ** NID_ENGINE 
 ****************************************************************/
extern int NID_ENGINE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_ENGINE_string(const char *str, char **endptr);
extern int string_to_NID_ENGINE(const char *str, void *pValue, char **endptr);
extern int is_NID_ENGINE_allow_double_conversion();
extern int NID_ENGINE_to_double(const void *pValue, double *nValue);
extern int get_NID_ENGINE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_ENGINE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_ENGINE_default_value(void *pValue);
extern SimTypeUtils _Type_NID_ENGINE_Utils;

/****************************************************************
 ** NID_EM 
 ****************************************************************/
extern int NID_EM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_EM_string(const char *str, char **endptr);
extern int string_to_NID_EM(const char *str, void *pValue, char **endptr);
extern int is_NID_EM_allow_double_conversion();
extern int NID_EM_to_double(const void *pValue, double *nValue);
extern int get_NID_EM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_EM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_EM_default_value(void *pValue);
extern SimTypeUtils _Type_NID_EM_Utils;

/****************************************************************
 ** Q_EMERGENCYSTOP 
 ****************************************************************/
extern int Q_EMERGENCYSTOP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_EMERGENCYSTOP_string(const char *str, char **endptr);
extern int string_to_Q_EMERGENCYSTOP(const char *str, void *pValue, char **endptr);
extern int is_Q_EMERGENCYSTOP_allow_double_conversion();
extern int Q_EMERGENCYSTOP_to_double(const void *pValue, double *nValue);
extern int get_Q_EMERGENCYSTOP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_EMERGENCYSTOP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_EMERGENCYSTOP_default_value(void *pValue);
extern SimTypeUtils _Type_Q_EMERGENCYSTOP_Utils;

/****************************************************************
 ** NID_TEXTMESSAGE 
 ****************************************************************/
extern int NID_TEXTMESSAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_TEXTMESSAGE_string(const char *str, char **endptr);
extern int string_to_NID_TEXTMESSAGE(const char *str, void *pValue, char **endptr);
extern int is_NID_TEXTMESSAGE_allow_double_conversion();
extern int NID_TEXTMESSAGE_to_double(const void *pValue, double *nValue);
extern int get_NID_TEXTMESSAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_TEXTMESSAGE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_TEXTMESSAGE_default_value(void *pValue);
extern SimTypeUtils _Type_NID_TEXTMESSAGE_Utils;

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
 ** Q_DIRLRBG 
 ****************************************************************/
extern int Q_DIRLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIRLRBG_string(const char *str, char **endptr);
extern int string_to_Q_DIRLRBG(const char *str, void *pValue, char **endptr);
extern int is_Q_DIRLRBG_allow_double_conversion();
extern int Q_DIRLRBG_to_double(const void *pValue, double *nValue);
extern int get_Q_DIRLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIRLRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIRLRBG_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIRLRBG_Utils;

/****************************************************************
 ** Q_DLRBG 
 ****************************************************************/
extern int Q_DLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DLRBG_string(const char *str, char **endptr);
extern int string_to_Q_DLRBG(const char *str, void *pValue, char **endptr);
extern int is_Q_DLRBG_allow_double_conversion();
extern int Q_DLRBG_to_double(const void *pValue, double *nValue);
extern int get_Q_DLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DLRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DLRBG_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DLRBG_Utils;

/****************************************************************
 ** Q_LENGTH 
 ****************************************************************/
extern int Q_LENGTH_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LENGTH_string(const char *str, char **endptr);
extern int string_to_Q_LENGTH(const char *str, void *pValue, char **endptr);
extern int is_Q_LENGTH_allow_double_conversion();
extern int Q_LENGTH_to_double(const void *pValue, double *nValue);
extern int get_Q_LENGTH_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LENGTH(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LENGTH_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LENGTH_Utils;

/****************************************************************
 ** Q_DIRTRAIN 
 ****************************************************************/
extern int Q_DIRTRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIRTRAIN_string(const char *str, char **endptr);
extern int string_to_Q_DIRTRAIN(const char *str, void *pValue, char **endptr);
extern int is_Q_DIRTRAIN_allow_double_conversion();
extern int Q_DIRTRAIN_to_double(const void *pValue, double *nValue);
extern int get_Q_DIRTRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIRTRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIRTRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIRTRAIN_Utils;

/****************************************************************
 ** M_MODE 
 ****************************************************************/
extern int M_MODE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_MODE_string(const char *str, char **endptr);
extern int string_to_M_MODE(const char *str, void *pValue, char **endptr);
extern int is_M_MODE_allow_double_conversion();
extern int M_MODE_to_double(const void *pValue, double *nValue);
extern int get_M_MODE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_MODE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_MODE_default_value(void *pValue);
extern SimTypeUtils _Type_M_MODE_Utils;

/****************************************************************
 ** M_LEVEL 
 ****************************************************************/
extern int M_LEVEL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_LEVEL_string(const char *str, char **endptr);
extern int string_to_M_LEVEL(const char *str, void *pValue, char **endptr);
extern int is_M_LEVEL_allow_double_conversion();
extern int M_LEVEL_to_double(const void *pValue, double *nValue);
extern int get_M_LEVEL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_LEVEL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_LEVEL_default_value(void *pValue);
extern SimTypeUtils _Type_M_LEVEL_Utils;

/****************************************************************
 ** M_ERROR 
 ****************************************************************/
extern int M_ERROR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_ERROR_string(const char *str, char **endptr);
extern int string_to_M_ERROR(const char *str, void *pValue, char **endptr);
extern int is_M_ERROR_allow_double_conversion();
extern int M_ERROR_to_double(const void *pValue, double *nValue);
extern int get_M_ERROR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_ERROR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_ERROR_default_value(void *pValue);
extern SimTypeUtils _Type_M_ERROR_Utils;

/****************************************************************
 ** NID_OPERATIONAL 
 ****************************************************************/
extern int NID_OPERATIONAL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_OPERATIONAL_string(const char *str, char **endptr);
extern int string_to_NID_OPERATIONAL(const char *str, void *pValue, char **endptr);
extern int is_NID_OPERATIONAL_allow_double_conversion();
extern int NID_OPERATIONAL_to_double(const void *pValue, double *nValue);
extern int get_NID_OPERATIONAL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_OPERATIONAL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_OPERATIONAL_default_value(void *pValue);
extern SimTypeUtils _Type_NID_OPERATIONAL_Utils;

/****************************************************************
 ** NID_LTRBG 
 ****************************************************************/
extern int NID_LTRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_LTRBG_string(const char *str, char **endptr);
extern int string_to_NID_LTRBG(const char *str, void *pValue, char **endptr);
extern int is_NID_LTRBG_allow_double_conversion();
extern int NID_LTRBG_to_double(const void *pValue, double *nValue);
extern int get_NID_LTRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_LTRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_LTRBG_default_value(void *pValue);
extern SimTypeUtils _Type_NID_LTRBG_Utils;

/****************************************************************
 ** NC_CDTRAIN 
 ****************************************************************/
extern int NC_CDTRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NC_CDTRAIN_string(const char *str, char **endptr);
extern int string_to_NC_CDTRAIN(const char *str, void *pValue, char **endptr);
extern int is_NC_CDTRAIN_allow_double_conversion();
extern int NC_CDTRAIN_to_double(const void *pValue, double *nValue);
extern int get_NC_CDTRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NC_CDTRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NC_CDTRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_NC_CDTRAIN_Utils;

/****************************************************************
 ** NC_TRAIN 
 ****************************************************************/
extern int NC_TRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NC_TRAIN_string(const char *str, char **endptr);
extern int string_to_NC_TRAIN(const char *str, void *pValue, char **endptr);
extern int is_NC_TRAIN_allow_double_conversion();
extern int NC_TRAIN_to_double(const void *pValue, double *nValue);
extern int get_NC_TRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NC_TRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NC_TRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_NC_TRAIN_Utils;

/****************************************************************
 ** M_LOADINGGAUGE 
 ****************************************************************/
extern int M_LOADINGGAUGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_LOADINGGAUGE_string(const char *str, char **endptr);
extern int string_to_M_LOADINGGAUGE(const char *str, void *pValue, char **endptr);
extern int is_M_LOADINGGAUGE_allow_double_conversion();
extern int M_LOADINGGAUGE_to_double(const void *pValue, double *nValue);
extern int get_M_LOADINGGAUGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_LOADINGGAUGE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_LOADINGGAUGE_default_value(void *pValue);
extern SimTypeUtils _Type_M_LOADINGGAUGE_Utils;

/****************************************************************
 ** M_AXLELOADCAT 
 ****************************************************************/
extern int M_AXLELOADCAT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_AXLELOADCAT_string(const char *str, char **endptr);
extern int string_to_M_AXLELOADCAT(const char *str, void *pValue, char **endptr);
extern int is_M_AXLELOADCAT_allow_double_conversion();
extern int M_AXLELOADCAT_to_double(const void *pValue, double *nValue);
extern int get_M_AXLELOADCAT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_AXLELOADCAT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_AXLELOADCAT_default_value(void *pValue);
extern SimTypeUtils _Type_M_AXLELOADCAT_Utils;

/****************************************************************
 ** M_AIRTIGHT 
 ****************************************************************/
extern int M_AIRTIGHT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_AIRTIGHT_string(const char *str, char **endptr);
extern int string_to_M_AIRTIGHT(const char *str, void *pValue, char **endptr);
extern int is_M_AIRTIGHT_allow_double_conversion();
extern int M_AIRTIGHT_to_double(const void *pValue, double *nValue);
extern int get_M_AIRTIGHT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_AIRTIGHT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_AIRTIGHT_default_value(void *pValue);
extern SimTypeUtils _Type_M_AIRTIGHT_Utils;

/****************************************************************
 ** N_AXLE 
 ****************************************************************/
extern int N_AXLE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_AXLE_string(const char *str, char **endptr);
extern int string_to_N_AXLE(const char *str, void *pValue, char **endptr);
extern int is_N_AXLE_allow_double_conversion();
extern int N_AXLE_to_double(const void *pValue, double *nValue);
extern int get_N_AXLE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_AXLE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_AXLE_default_value(void *pValue);
extern SimTypeUtils _Type_N_AXLE_Utils;

/****************************************************************
 ** M_VOLTAGE 
 ****************************************************************/
extern int M_VOLTAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_VOLTAGE_string(const char *str, char **endptr);
extern int string_to_M_VOLTAGE(const char *str, void *pValue, char **endptr);
extern int is_M_VOLTAGE_allow_double_conversion();
extern int M_VOLTAGE_to_double(const void *pValue, double *nValue);
extern int get_M_VOLTAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_VOLTAGE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_VOLTAGE_default_value(void *pValue);
extern SimTypeUtils _Type_M_VOLTAGE_Utils;

/****************************************************************
 ** NID_CTRACTION 
 ****************************************************************/
extern int NID_CTRACTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_CTRACTION_string(const char *str, char **endptr);
extern int string_to_NID_CTRACTION(const char *str, void *pValue, char **endptr);
extern int is_NID_CTRACTION_allow_double_conversion();
extern int NID_CTRACTION_to_double(const void *pValue, double *nValue);
extern int get_NID_CTRACTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_CTRACTION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_CTRACTION_default_value(void *pValue);
extern SimTypeUtils _Type_NID_CTRACTION_Utils;

/****************************************************************
 ** NID_NTC 
 ****************************************************************/
extern int NID_NTC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_NTC_string(const char *str, char **endptr);
extern int string_to_NID_NTC(const char *str, void *pValue, char **endptr);
extern int is_NID_NTC_allow_double_conversion();
extern int NID_NTC_to_double(const void *pValue, double *nValue);
extern int get_NID_NTC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_NTC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_NTC_default_value(void *pValue);
extern SimTypeUtils _Type_NID_NTC_Utils;

/****************************************************************
 ** L_TRAIN 
 ****************************************************************/
extern int L_TRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_TRAIN_string(const char *str, char **endptr);
extern int string_to_L_TRAIN(const char *str, void *pValue, char **endptr);
extern int is_L_TRAIN_allow_double_conversion();
extern int L_TRAIN_to_double(const void *pValue, double *nValue);
extern int get_L_TRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_TRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_TRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_L_TRAIN_Utils;

/****************************************************************
 ** Radio_TrainTrack_Header_T_Radio_Types_Pkg 
 ****************************************************************/
extern int Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Radio_TrainTrack_Header_T_Radio_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Radio_TrainTrack_Header_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Radio_TrainTrack_Header_T_Radio_Types_Pkg_allow_double_conversion();
extern int Radio_TrainTrack_Header_T_Radio_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Radio_TrainTrack_Header_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Radio_TrainTrack_Header_T_Radio_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Radio_TrainTrack_Header_T_Radio_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Radio_TrainTrack_Header_T_Radio_Types_Pkg_Utils;

/****************************************************************
 ** Radio_TrainTrack_Message_T_Radio_Types_Pkg 
 ****************************************************************/
extern int Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Radio_TrainTrack_Message_T_Radio_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Radio_TrainTrack_Message_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Radio_TrainTrack_Message_T_Radio_Types_Pkg_allow_double_conversion();
extern int Radio_TrainTrack_Message_T_Radio_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Radio_TrainTrack_Message_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Radio_TrainTrack_Message_T_Radio_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Radio_TrainTrack_Message_T_Radio_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils;

/****************************************************************
 ** outPackets_T_Common_Types_Pkg 
 ****************************************************************/
extern int outPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_outPackets_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_outPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_outPackets_T_Common_Types_Pkg_allow_double_conversion();
extern int outPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_outPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_outPackets_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_outPackets_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_outPackets_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** PT0_PositionReport_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_PT0_PositionReport_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_PT0_PositionReport_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_PT0_PositionReport_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int PT0_PositionReport_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_PT0_PositionReport_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_PT0_PositionReport_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_PT0_PositionReport_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_PT0_PositionReport_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** aNID_RADIO_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int aNID_RADIO_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_aNID_RADIO_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_aNID_RADIO_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_aNID_RADIO_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int aNID_RADIO_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_aNID_RADIO_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_aNID_RADIO_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_aNID_RADIO_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_aNID_RADIO_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** sNID_RADIO_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int sNID_RADIO_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_sNID_RADIO_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_sNID_RADIO_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_sNID_RADIO_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int sNID_RADIO_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_sNID_RADIO_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_sNID_RADIO_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_sNID_RADIO_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_sNID_RADIO_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** telephoneNumber_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int telephoneNumber_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_telephoneNumber_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_telephoneNumber_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_telephoneNumber_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int telephoneNumber_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_telephoneNumber_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_telephoneNumber_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_telephoneNumber_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_telephoneNumber_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** PT4_ErrorReporting_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** PT5_TrainRunningNumber_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** aTractionIdentity_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int aTractionIdentity_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_aTractionIdentity_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_aTractionIdentity_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_aTractionIdentity_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int aTractionIdentity_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_aTractionIdentity_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_aTractionIdentity_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_aTractionIdentity_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_aTractionIdentity_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** sTractionIdentity_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int sTractionIdentity_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_sTractionIdentity_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_sTractionIdentity_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_sTractionIdentity_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int sTractionIdentity_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_sTractionIdentity_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_sTractionIdentity_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_sTractionIdentity_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_sTractionIdentity_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** aNID_NTC_T_Packet_TrainTypes_Pkg 
 ****************************************************************/
extern int aNID_NTC_T_Packet_TrainTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_aNID_NTC_T_Packet_TrainTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_aNID_NTC_T_Packet_TrainTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_aNID_NTC_T_Packet_TrainTypes_Pkg_allow_double_conversion();
extern int aNID_NTC_T_Packet_TrainTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_aNID_NTC_T_Packet_TrainTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_aNID_NTC_T_Packet_TrainTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_aNID_NTC_T_Packet_TrainTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_aNID_NTC_T_Packet_TrainTypes_Pkg_Utils;

/****************************************************************
 ** Position_Report_TrainToTrack 
 ****************************************************************/
extern int Position_Report_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Position_Report_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_Position_Report_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_Position_Report_TrainToTrack_allow_double_conversion();
extern int Position_Report_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_Position_Report_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Position_Report_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Position_Report_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_Position_Report_TrainToTrack_Utils;

/****************************************************************
 ** Position_Report_based_on_two_balise_groups_TrainToTrack 
 ****************************************************************/
extern int Position_Report_based_on_two_balise_groups_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Position_Report_based_on_two_balise_groups_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_Position_Report_based_on_two_balise_groups_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_Position_Report_based_on_two_balise_groups_TrainToTrack_allow_double_conversion();
extern int Position_Report_based_on_two_balise_groups_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_Position_Report_based_on_two_balise_groups_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Position_Report_based_on_two_balise_groups_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Position_Report_based_on_two_balise_groups_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_Position_Report_based_on_two_balise_groups_TrainToTrack_Utils;

/****************************************************************
 ** BCD_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int BCD_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BCD_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_BCD_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_BCD_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int BCD_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_BCD_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BCD_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BCD_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_BCD_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** L_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int L_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_L_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_L_internal_Type_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int L_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_L_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** V_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int V_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_V_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_V_internal_Type_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int V_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_V_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** LocWithInAcc_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_LocWithInAcc_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_LocWithInAcc_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_LocWithInAcc_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_LocWithInAcc_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_LocWithInAcc_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** trainProperties_T_TrainPosition_Types_Pck 
 ****************************************************************/
extern int trainProperties_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_trainProperties_T_TrainPosition_Types_Pck_string(const char *str, char **endptr);
extern int string_to_trainProperties_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr);
extern int is_trainProperties_T_TrainPosition_Types_Pck_allow_double_conversion();
extern int trainProperties_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nValue);
extern int get_trainProperties_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_trainProperties_T_TrainPosition_Types_Pck(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_trainProperties_T_TrainPosition_Types_Pck_default_value(void *pValue);
extern SimTypeUtils _Type_trainProperties_T_TrainPosition_Types_Pck_Utils;


#endif /*TRACKATLAS_TYPES_CONVERSION */
