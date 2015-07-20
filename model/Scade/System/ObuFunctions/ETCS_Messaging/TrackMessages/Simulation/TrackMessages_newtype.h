#ifndef TRACKMESSAGES_TYPES_CONVERSION
#define TRACKMESSAGES_TYPES_CONVERSION

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
 ** struct__244 
 ****************************************************************/
extern int struct__244_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__244_string(const char *str, char **endptr);
extern int string_to_struct__244(const char *str, void *pValue, char **endptr);
extern int is_struct__244_allow_double_conversion();
extern int struct__244_to_double(const void *pValue, double *nValue);
extern int get_struct__244_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__244(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__244_default_value(void *pValue);
extern SimTypeUtils _Type_struct__244_Utils;

/****************************************************************
 ** array_int_20 
 ****************************************************************/
extern int array_int_20_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_20_string(const char *str, char **endptr);
extern int string_to_array_int_20(const char *str, void *pValue, char **endptr);
extern int is_array_int_20_allow_double_conversion();
extern int array_int_20_to_double(const void *pValue, double *nValue);
extern int get_array_int_20_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_20(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_20_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_20_Utils;

/****************************************************************
 ** array__258 
 ****************************************************************/
extern int array__258_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__258_string(const char *str, char **endptr);
extern int string_to_array__258(const char *str, void *pValue, char **endptr);
extern int is_array__258_allow_double_conversion();
extern int array__258_to_double(const void *pValue, double *nValue);
extern int get_array__258_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__258(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__258_default_value(void *pValue);
extern SimTypeUtils _Type_array__258_Utils;

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
 ** L_MESSAGE 
 ****************************************************************/
extern int L_MESSAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_MESSAGE_string(const char *str, char **endptr);
extern int string_to_L_MESSAGE(const char *str, void *pValue, char **endptr);
extern int is_L_MESSAGE_allow_double_conversion();
extern int L_MESSAGE_to_double(const void *pValue, double *nValue);
extern int get_L_MESSAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_MESSAGE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_MESSAGE_default_value(void *pValue);
extern SimTypeUtils _Type_L_MESSAGE_Utils;

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
 ** M_TrainTrack_Radio_TM_radio_messages 
 ****************************************************************/
extern int M_TrainTrack_Radio_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_TrainTrack_Radio_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_TrainTrack_Radio_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_TrainTrack_Radio_TM_radio_messages_allow_double_conversion();
extern int M_TrainTrack_Radio_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_TrainTrack_Radio_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_TrainTrack_Radio_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_TrainTrack_Radio_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_TrainTrack_Radio_TM_radio_messages_Utils;


#endif /*TRACKMESSAGES_TYPES_CONVERSION */
