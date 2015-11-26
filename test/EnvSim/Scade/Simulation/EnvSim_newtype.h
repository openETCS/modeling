#ifndef ENVSIM_TYPES_CONVERSION
#define ENVSIM_TYPES_CONVERSION

#include "NewSmuTypes.h"

/****************************************************************
 ** GUI_to_EVC_EnvSim 
 ****************************************************************/
extern int GUI_to_EVC_EnvSim_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_GUI_to_EVC_EnvSim_string(const char *str, char **endptr);
extern int string_to_GUI_to_EVC_EnvSim(const char *str, void *pValue, char **endptr);
extern int is_GUI_to_EVC_EnvSim_allow_double_conversion();
extern int GUI_to_EVC_EnvSim_to_double(const void *pValue, double *nValue);
extern int get_GUI_to_EVC_EnvSim_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_GUI_to_EVC_EnvSim(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_GUI_to_EVC_EnvSim_default_value(void *pValue);
extern SimTypeUtils _Type_GUI_to_EVC_EnvSim_Utils;

/****************************************************************
 ** EVC_to_GUI_EnvSim 
 ****************************************************************/
extern int EVC_to_GUI_EnvSim_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_EVC_to_GUI_EnvSim_string(const char *str, char **endptr);
extern int string_to_EVC_to_GUI_EnvSim(const char *str, void *pValue, char **endptr);
extern int is_EVC_to_GUI_EnvSim_allow_double_conversion();
extern int EVC_to_GUI_EnvSim_to_double(const void *pValue, double *nValue);
extern int get_EVC_to_GUI_EnvSim_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_EVC_to_GUI_EnvSim(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_EVC_to_GUI_EnvSim_default_value(void *pValue);
extern SimTypeUtils _Type_EVC_to_GUI_EnvSim_Utils;

/****************************************************************
 ** DMI_to_EVC_Message_T_API_DMI_Pkg 
 ****************************************************************/
extern int DMI_to_EVC_Message_T_API_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_to_EVC_Message_T_API_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_to_EVC_Message_T_API_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_to_EVC_Message_T_API_DMI_Pkg_allow_double_conversion();
extern int DMI_to_EVC_Message_T_API_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_to_EVC_Message_T_API_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_to_EVC_Message_T_API_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_to_EVC_Message_T_API_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_to_EVC_Message_T_API_DMI_Pkg_Utils;

/****************************************************************
 ** EVC_to_DMI_Message_T_API_DMI_Pkg 
 ****************************************************************/
extern int EVC_to_DMI_Message_T_API_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_EVC_to_DMI_Message_T_API_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_EVC_to_DMI_Message_T_API_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_EVC_to_DMI_Message_T_API_DMI_Pkg_allow_double_conversion();
extern int EVC_to_DMI_Message_T_API_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_EVC_to_DMI_Message_T_API_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_EVC_to_DMI_Message_T_API_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_EVC_to_DMI_Message_T_API_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_EVC_to_DMI_Message_T_API_DMI_Pkg_Utils;

/****************************************************************
 ** DMI_to_EVC_Message_int_T_API_DMI_Pkg 
 ****************************************************************/
extern int DMI_to_EVC_Message_int_T_API_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_to_EVC_Message_int_T_API_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_to_EVC_Message_int_T_API_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_to_EVC_Message_int_T_API_DMI_Pkg_allow_double_conversion();
extern int DMI_to_EVC_Message_int_T_API_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_to_EVC_Message_int_T_API_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_to_EVC_Message_int_T_API_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_to_EVC_Message_int_T_API_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_to_EVC_Message_int_T_API_DMI_Pkg_Utils;

/****************************************************************
 ** EVC_to_DMI_Message_int_T_API_DMI_Pkg 
 ****************************************************************/
extern int EVC_to_DMI_Message_int_T_API_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_EVC_to_DMI_Message_int_T_API_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_EVC_to_DMI_Message_int_T_API_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_EVC_to_DMI_Message_int_T_API_DMI_Pkg_allow_double_conversion();
extern int EVC_to_DMI_Message_int_T_API_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_EVC_to_DMI_Message_int_T_API_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_EVC_to_DMI_Message_int_T_API_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_EVC_to_DMI_Message_int_T_API_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_EVC_to_DMI_Message_int_T_API_DMI_Pkg_Utils;

/****************************************************************
 ** DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg 
 ****************************************************************/
extern int DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg_allow_double_conversion();
extern int DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg_Utils;

/****************************************************************
 ** DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg 
 ****************************************************************/
extern int DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg_allow_double_conversion();
extern int DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg_Utils;

/****************************************************************
 ** DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg 
 ****************************************************************/
extern int DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg_allow_double_conversion();
extern int DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg_Utils;

/****************************************************************
 ** DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg 
 ****************************************************************/
extern int DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg_allow_double_conversion();
extern int DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg_Utils;

/****************************************************************
 ** DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg 
 ****************************************************************/
extern int DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_allow_double_conversion();
extern int DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_Utils;

/****************************************************************
 ** DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg 
 ****************************************************************/
extern int DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_allow_double_conversion();
extern int DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_Utils;

/****************************************************************
 ** DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg 
 ****************************************************************/
extern int DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_allow_double_conversion();
extern int DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg_Utils;

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
 ** odometry_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int odometry_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_odometry_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_odometry_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_odometry_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int odometry_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_odometry_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_odometry_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_odometry_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_odometry_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** OdometryLocations_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int OdometryLocations_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OdometryLocations_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_OdometryLocations_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_OdometryLocations_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int OdometryLocations_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_OdometryLocations_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OdometryLocations_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OdometryLocations_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** OdometrySpeeds_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OdometrySpeeds_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_OdometrySpeeds_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OdometrySpeeds_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OdometrySpeeds_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** DMI_TEXT_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_TEXT_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_TEXT_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_TEXT_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_TEXT_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_TEXT_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_TEXT_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_TEXT_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_TEXT_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_TEXT_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_level_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_level_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_level_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_level_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_level_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_level_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_level_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_level_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_level_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_level_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_Available_Menu_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_Available_Menu_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Available_Menu_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Available_Menu_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Available_Menu_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_Available_Menu_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Available_Menu_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Available_Menu_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Available_Menu_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Available_Menu_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_train_id_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_train_id_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_train_id_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_train_id_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_train_id_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_train_id_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_train_id_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_train_id_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_train_id_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_train_id_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_train_length_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_train_length_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_train_length_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_train_length_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_train_length_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_train_length_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_train_length_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_train_length_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_train_length_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_train_length_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_speedProfile_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_speedProfile_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_speedProfile_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_speedProfile_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_speedProfile_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_speedProfile_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_speedProfile_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_speedProfile_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_speedProfile_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_speedProfile_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_SpeedProfileArray_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_SpeedProfileArray_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_SpeedProfileArray_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_SpeedProfileArray_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_SpeedProfileArray_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_SpeedProfileArray_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_SpeedProfileArray_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_SpeedProfileArray_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_SpeedProfileArray_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_SpeedProfileArray_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_speedProfileElement_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_speedProfileElement_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_speedProfileElement_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_speedProfileElement_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_speedProfileElement_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_speedProfileElement_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_speedProfileElement_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_speedProfileElement_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_speedProfileElement_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_speedProfileElement_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_gradientProfile_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_gradientProfile_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_gradientProfile_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_gradientProfile_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_gradientProfile_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_gradientProfile_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_gradientProfile_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_gradientProfile_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_gradientProfile_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_gradientProfile_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_gradientProfileArray_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_gradientProfileArray_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_gradientProfileArray_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_gradientProfileArray_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_gradientProfileArray_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_gradientProfileArray_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_gradientProfileArray_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_gradientProfileArray_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_gradientProfileArray_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_gradientProfileArray_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_gradientProfileElement_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_gradientProfileElement_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_gradientProfileElement_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_gradientProfileElement_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_gradientProfileElement_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_gradientProfileElement_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_gradientProfileElement_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_gradientProfileElement_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_gradientProfileElement_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_gradientProfileElement_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_trackCondition_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_trackCondition_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_trackCondition_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_trackCondition_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_trackCondition_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_trackCondition_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_trackCondition_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_trackCondition_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_trackCondition_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_trackCondition_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_trackConditionArray_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_trackConditionArray_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_trackConditionArray_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_trackConditionArray_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_trackConditionArray_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_trackConditionArray_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_trackConditionArray_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_trackConditionArray_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_trackConditionArray_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_trackConditionArray_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_trackConditionElement_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_trackConditionElement_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_trackConditionElement_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_trackConditionElement_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_trackConditionElement_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_trackConditionElement_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_trackConditionElement_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_trackConditionElement_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_trackConditionElement_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_trackConditionElement_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_LevelList_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_LevelList_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_LevelList_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_LevelList_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_LevelList_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_LevelList_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_LevelList_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_LevelList_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_LevelList_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_LevelList_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_level_array_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_level_array_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_level_array_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_level_array_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_level_array_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_level_array_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_level_array_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_level_array_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_level_array_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_level_array_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg 
 ****************************************************************/
extern int DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg_allow_double_conversion();
extern int DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg_Utils;

/****************************************************************
 ** driverIdentifier_T_DMI_Messages_Bothways_Pkg 
 ****************************************************************/
extern int driverIdentifier_T_DMI_Messages_Bothways_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_driverIdentifier_T_DMI_Messages_Bothways_Pkg_string(const char *str, char **endptr);
extern int string_to_driverIdentifier_T_DMI_Messages_Bothways_Pkg(const char *str, void *pValue, char **endptr);
extern int is_driverIdentifier_T_DMI_Messages_Bothways_Pkg_allow_double_conversion();
extern int driverIdentifier_T_DMI_Messages_Bothways_Pkg_to_double(const void *pValue, double *nValue);
extern int get_driverIdentifier_T_DMI_Messages_Bothways_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_driverIdentifier_T_DMI_Messages_Bothways_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_driverIdentifier_T_DMI_Messages_Bothways_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_driverIdentifier_T_DMI_Messages_Bothways_Pkg_Utils;

/****************************************************************
 ** DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg 
 ****************************************************************/
extern int DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg_allow_double_conversion();
extern int DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg_Utils;

/****************************************************************
 ** DMI_Train_Data_T_DMI_Messages_Bothways_Pkg 
 ****************************************************************/
extern int DMI_Train_Data_T_DMI_Messages_Bothways_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg_allow_double_conversion();
extern int DMI_Train_Data_T_DMI_Messages_Bothways_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg_Utils;

/****************************************************************
 ** DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg 
 ****************************************************************/
extern int DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg_allow_double_conversion();
extern int DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg_Utils;

/****************************************************************
 ** DMI_Level_Data_T_DMI_Messages_Bothways_Pkg 
 ****************************************************************/
extern int DMI_Level_Data_T_DMI_Messages_Bothways_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg_allow_double_conversion();
extern int DMI_Level_Data_T_DMI_Messages_Bothways_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg_Utils;

/****************************************************************
 ** DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg 
 ****************************************************************/
extern int DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg_allow_double_conversion();
extern int DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg_Utils;

/****************************************************************
 ** DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg 
 ****************************************************************/
extern int DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg_allow_double_conversion();
extern int DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg_Utils;

/****************************************************************
 ** DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg 
 ****************************************************************/
extern int DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg_allow_double_conversion();
extern int DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg_Utils;

/****************************************************************
 ** DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg 
 ****************************************************************/
extern int DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg_allow_double_conversion();
extern int DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg_Utils;

/****************************************************************
 ** DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg 
 ****************************************************************/
extern int DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg_allow_double_conversion();
extern int DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg_Utils;

/****************************************************************
 ** DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg 
 ****************************************************************/
extern int DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg_allow_double_conversion();
extern int DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg_Utils;

/****************************************************************
 ** DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg 
 ****************************************************************/
extern int DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg_allow_double_conversion();
extern int DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg_Utils;

/****************************************************************
 ** DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg 
 ****************************************************************/
extern int DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg_allow_double_conversion();
extern int DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg_Utils;

/****************************************************************
 ** DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg 
 ****************************************************************/
extern int DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg_allow_double_conversion();
extern int DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg_Utils;

/****************************************************************
 ** DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg 
 ****************************************************************/
extern int DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg_allow_double_conversion();
extern int DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg_Utils;

/****************************************************************
 ** DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg 
 ****************************************************************/
extern int DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg_allow_double_conversion();
extern int DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg_Utils;

/****************************************************************
 ** DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg 
 ****************************************************************/
extern int DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg_allow_double_conversion();
extern int DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg_Utils;

/****************************************************************
 ** TIU_Input_msg_API_TIU_Pkg 
 ****************************************************************/
extern int TIU_Input_msg_API_TIU_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TIU_Input_msg_API_TIU_Pkg_string(const char *str, char **endptr);
extern int string_to_TIU_Input_msg_API_TIU_Pkg(const char *str, void *pValue, char **endptr);
extern int is_TIU_Input_msg_API_TIU_Pkg_allow_double_conversion();
extern int TIU_Input_msg_API_TIU_Pkg_to_double(const void *pValue, double *nValue);
extern int get_TIU_Input_msg_API_TIU_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TIU_Input_msg_API_TIU_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TIU_Input_msg_API_TIU_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_TIU_Input_msg_API_TIU_Pkg_Utils;

/****************************************************************
 ** Message_Train_Interface_to_EVC_T_TIU_Types_Pkg 
 ****************************************************************/
extern int Message_Train_Interface_to_EVC_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg_allow_double_conversion();
extern int Message_Train_Interface_to_EVC_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** Mode_control_and_train_status_T_TIU_Types_Pkg 
 ****************************************************************/
extern int Mode_control_and_train_status_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Mode_control_and_train_status_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Mode_control_and_train_status_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Mode_control_and_train_status_T_TIU_Types_Pkg_allow_double_conversion();
extern int Mode_control_and_train_status_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Mode_control_and_train_status_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Mode_control_and_train_status_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Mode_control_and_train_status_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Mode_control_and_train_status_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** Brake_status_T_TIU_Types_Pkg 
 ****************************************************************/
extern int Brake_status_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Brake_status_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Brake_status_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Brake_status_T_TIU_Types_Pkg_allow_double_conversion();
extern int Brake_status_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Brake_status_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Brake_status_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Brake_status_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Brake_status_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** Brake_pressure_value_T_TIU_Types_Pkg 
 ****************************************************************/
extern int Brake_pressure_value_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Brake_pressure_value_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Brake_pressure_value_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Brake_pressure_value_T_TIU_Types_Pkg_allow_double_conversion();
extern int Brake_pressure_value_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Brake_pressure_value_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Brake_pressure_value_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Brake_pressure_value_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Brake_pressure_value_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** trainData_T_TIU_Types_Pkg 
 ****************************************************************/
extern int trainData_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_trainData_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_trainData_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_trainData_T_TIU_Types_Pkg_allow_double_conversion();
extern int trainData_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_trainData_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_trainData_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_trainData_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_trainData_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg 
 ****************************************************************/
extern int Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg_allow_double_conversion();
extern int Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** nothing_to_resume_profile_follow_T_TIU_Types_Pkg 
 ****************************************************************/
extern int nothing_to_resume_profile_follow_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_nothing_to_resume_profile_follow_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_nothing_to_resume_profile_follow_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_nothing_to_resume_profile_follow_T_TIU_Types_Pkg_allow_double_conversion();
extern int nothing_to_resume_profile_follow_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_nothing_to_resume_profile_follow_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_nothing_to_resume_profile_follow_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_nothing_to_resume_profile_follow_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_nothing_to_resume_profile_follow_T_TIU_Types_Pkg_Utils;

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
 ** CompressedRadioMessage_TM 
 ****************************************************************/
extern int CompressedRadioMessage_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CompressedRadioMessage_TM_string(const char *str, char **endptr);
extern int string_to_CompressedRadioMessage_TM(const char *str, void *pValue, char **endptr);
extern int is_CompressedRadioMessage_TM_allow_double_conversion();
extern int CompressedRadioMessage_TM_to_double(const void *pValue, double *nValue);
extern int get_CompressedRadioMessage_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedRadioMessage_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedRadioMessage_TM_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedRadioMessage_TM_Utils;

/****************************************************************
 ** Radio_TrackTrain_Header_T_TM 
 ****************************************************************/
extern int Radio_TrackTrain_Header_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Radio_TrackTrain_Header_T_TM_string(const char *str, char **endptr);
extern int string_to_Radio_TrackTrain_Header_T_TM(const char *str, void *pValue, char **endptr);
extern int is_Radio_TrackTrain_Header_T_TM_allow_double_conversion();
extern int Radio_TrackTrain_Header_T_TM_to_double(const void *pValue, double *nValue);
extern int get_Radio_TrackTrain_Header_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Radio_TrackTrain_Header_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Radio_TrackTrain_Header_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_Radio_TrackTrain_Header_T_TM_Utils;

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
 ** MSG_Errors_T_Common_Types_Pkg 
 ****************************************************************/
extern int MSG_Errors_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MSG_Errors_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_MSG_Errors_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_MSG_Errors_T_Common_Types_Pkg_allow_double_conversion();
extern int MSG_Errors_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_MSG_Errors_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MSG_Errors_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MSG_Errors_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_MSG_Errors_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** M_TrainTrack_Message_T_TM_radio_messages 
 ****************************************************************/
extern int M_TrainTrack_Message_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_TrainTrack_Message_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_TrainTrack_Message_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_TrainTrack_Message_T_TM_radio_messages_allow_double_conversion();
extern int M_TrainTrack_Message_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_TrainTrack_Message_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_TrainTrack_Message_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_TrainTrack_Message_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_TrainTrack_Message_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_TrainTrack_MessageHd_T_TM_radio_messages 
 ****************************************************************/
extern int M_TrainTrack_MessageHd_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_TrainTrack_MessageHd_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_TrainTrack_MessageHd_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_TrainTrack_MessageHd_T_TM_radio_messages_allow_double_conversion();
extern int M_TrainTrack_MessageHd_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_TrainTrack_MessageHd_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_TrainTrack_MessageHd_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_TrainTrack_MessageHd_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_TrainTrack_MessageHd_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_TrainTrack_compressed_packets_T_TM_radio_messages 
 ****************************************************************/
extern int M_TrainTrack_compressed_packets_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_TrainTrack_compressed_packets_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_TrainTrack_compressed_packets_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_TrainTrack_compressed_packets_T_TM_radio_messages_allow_double_conversion();
extern int M_TrainTrack_compressed_packets_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_TrainTrack_compressed_packets_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_TrainTrack_compressed_packets_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_TrainTrack_compressed_packets_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_TrainTrack_compressed_packets_T_TM_radio_messages_Utils;

/****************************************************************
 ** TargetCollection_T_TargetManagement_types 
 ****************************************************************/
extern int TargetCollection_T_TargetManagement_types_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TargetCollection_T_TargetManagement_types_string(const char *str, char **endptr);
extern int string_to_TargetCollection_T_TargetManagement_types(const char *str, void *pValue, char **endptr);
extern int is_TargetCollection_T_TargetManagement_types_allow_double_conversion();
extern int TargetCollection_T_TargetManagement_types_to_double(const void *pValue, double *nValue);
extern int get_TargetCollection_T_TargetManagement_types_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TargetCollection_T_TargetManagement_types(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TargetCollection_T_TargetManagement_types_default_value(void *pValue);
extern SimTypeUtils _Type_TargetCollection_T_TargetManagement_types_Utils;

/****************************************************************
 ** Target_list_MRSP_real_T_TargetManagement_types 
 ****************************************************************/
extern int Target_list_MRSP_real_T_TargetManagement_types_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Target_list_MRSP_real_T_TargetManagement_types_string(const char *str, char **endptr);
extern int string_to_Target_list_MRSP_real_T_TargetManagement_types(const char *str, void *pValue, char **endptr);
extern int is_Target_list_MRSP_real_T_TargetManagement_types_allow_double_conversion();
extern int Target_list_MRSP_real_T_TargetManagement_types_to_double(const void *pValue, double *nValue);
extern int get_Target_list_MRSP_real_T_TargetManagement_types_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Target_list_MRSP_real_T_TargetManagement_types(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Target_list_MRSP_real_T_TargetManagement_types_default_value(void *pValue);
extern SimTypeUtils _Type_Target_list_MRSP_real_T_TargetManagement_types_Utils;

/****************************************************************
 ** Target_real_T_TargetManagement_types 
 ****************************************************************/
extern int Target_real_T_TargetManagement_types_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Target_real_T_TargetManagement_types_string(const char *str, char **endptr);
extern int string_to_Target_real_T_TargetManagement_types(const char *str, void *pValue, char **endptr);
extern int is_Target_real_T_TargetManagement_types_allow_double_conversion();
extern int Target_real_T_TargetManagement_types_to_double(const void *pValue, double *nValue);
extern int get_Target_real_T_TargetManagement_types_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Target_real_T_TargetManagement_types(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Target_real_T_TargetManagement_types_default_value(void *pValue);
extern SimTypeUtils _Type_Target_real_T_TargetManagement_types_Utils;

/****************************************************************
 ** Target_T_TargetManagement_types 
 ****************************************************************/
extern int Target_T_TargetManagement_types_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Target_T_TargetManagement_types_string(const char *str, char **endptr);
extern int string_to_Target_T_TargetManagement_types(const char *str, void *pValue, char **endptr);
extern int is_Target_T_TargetManagement_types_allow_double_conversion();
extern int Target_T_TargetManagement_types_to_double(const void *pValue, double *nValue);
extern int get_Target_T_TargetManagement_types_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Target_T_TargetManagement_types(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Target_T_TargetManagement_types_default_value(void *pValue);
extern SimTypeUtils _Type_Target_T_TargetManagement_types_Utils;

/****************************************************************
 ** CurveCollection_T_CalcBrakingCurves_types 
 ****************************************************************/
extern int CurveCollection_T_CalcBrakingCurves_types_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CurveCollection_T_CalcBrakingCurves_types_string(const char *str, char **endptr);
extern int string_to_CurveCollection_T_CalcBrakingCurves_types(const char *str, void *pValue, char **endptr);
extern int is_CurveCollection_T_CalcBrakingCurves_types_allow_double_conversion();
extern int CurveCollection_T_CalcBrakingCurves_types_to_double(const void *pValue, double *nValue);
extern int get_CurveCollection_T_CalcBrakingCurves_types_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CurveCollection_T_CalcBrakingCurves_types(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CurveCollection_T_CalcBrakingCurves_types_default_value(void *pValue);
extern SimTypeUtils _Type_CurveCollection_T_CalcBrakingCurves_types_Utils;

/****************************************************************
 ** ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types 
 ****************************************************************/
extern int ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types_string(const char *str, char **endptr);
extern int string_to_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(const char *str, void *pValue, char **endptr);
extern int is_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types_allow_double_conversion();
extern int ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types_to_double(const void *pValue, double *nValue);
extern int get_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types_default_value(void *pValue);
extern SimTypeUtils _Type_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types_Utils;

/****************************************************************
 ** ParabolaCurve_T_CalcBrakingCurves_types 
 ****************************************************************/
extern int ParabolaCurve_T_CalcBrakingCurves_types_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_ParabolaCurve_T_CalcBrakingCurves_types_string(const char *str, char **endptr);
extern int string_to_ParabolaCurve_T_CalcBrakingCurves_types(const char *str, void *pValue, char **endptr);
extern int is_ParabolaCurve_T_CalcBrakingCurves_types_allow_double_conversion();
extern int ParabolaCurve_T_CalcBrakingCurves_types_to_double(const void *pValue, double *nValue);
extern int get_ParabolaCurve_T_CalcBrakingCurves_types_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_ParabolaCurve_T_CalcBrakingCurves_types(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_ParabolaCurve_T_CalcBrakingCurves_types_default_value(void *pValue);
extern SimTypeUtils _Type_ParabolaCurve_T_CalcBrakingCurves_types_Utils;

/****************************************************************
 ** ParabolaCurveValid_T_CalcBrakingCurves_types 
 ****************************************************************/
extern int ParabolaCurveValid_T_CalcBrakingCurves_types_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_ParabolaCurveValid_T_CalcBrakingCurves_types_string(const char *str, char **endptr);
extern int string_to_ParabolaCurveValid_T_CalcBrakingCurves_types(const char *str, void *pValue, char **endptr);
extern int is_ParabolaCurveValid_T_CalcBrakingCurves_types_allow_double_conversion();
extern int ParabolaCurveValid_T_CalcBrakingCurves_types_to_double(const void *pValue, double *nValue);
extern int get_ParabolaCurveValid_T_CalcBrakingCurves_types_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_ParabolaCurveValid_T_CalcBrakingCurves_types(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_ParabolaCurveValid_T_CalcBrakingCurves_types_default_value(void *pValue);
extern SimTypeUtils _Type_ParabolaCurveValid_T_CalcBrakingCurves_types_Utils;

/****************************************************************
 ** LinkedBG_T_BG_Types_Pkg 
 ****************************************************************/
extern int LinkedBG_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_LinkedBG_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_LinkedBG_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_LinkedBG_T_BG_Types_Pkg_allow_double_conversion();
extern int LinkedBG_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_LinkedBG_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_LinkedBG_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_LinkedBG_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_LinkedBG_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** passedBG_T_BG_Types_Pkg 
 ****************************************************************/
extern int passedBG_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_passedBG_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_passedBG_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_passedBG_T_BG_Types_Pkg_allow_double_conversion();
extern int passedBG_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_passedBG_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_passedBG_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_passedBG_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_passedBG_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** BG_Header_T_BG_Types_Pkg 
 ****************************************************************/
extern int BG_Header_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BG_Header_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_BG_Header_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_BG_Header_T_BG_Types_Pkg_allow_double_conversion();
extern int BG_Header_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_BG_Header_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BG_Header_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BG_Header_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_BG_Header_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** LinkedBGs_T_BG_Types_Pkg 
 ****************************************************************/
extern int LinkedBGs_T_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_LinkedBGs_T_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_LinkedBGs_T_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_LinkedBGs_T_BG_Types_Pkg_allow_double_conversion();
extern int LinkedBGs_T_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_LinkedBGs_T_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_LinkedBGs_T_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_LinkedBGs_T_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_LinkedBGs_T_BG_Types_Pkg_Utils;

/****************************************************************
 ** positionErrors_T_TrainPosition_Types_Pck 
 ****************************************************************/
extern int positionErrors_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_positionErrors_T_TrainPosition_Types_Pck_string(const char *str, char **endptr);
extern int string_to_positionErrors_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr);
extern int is_positionErrors_T_TrainPosition_Types_Pck_allow_double_conversion();
extern int positionErrors_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nValue);
extern int get_positionErrors_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_positionErrors_T_TrainPosition_Types_Pck(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_positionErrors_T_TrainPosition_Types_Pck_default_value(void *pValue);
extern SimTypeUtils _Type_positionErrors_T_TrainPosition_Types_Pck_Utils;

/****************************************************************
 ** positionedBG_T_TrainPosition_Types_Pck 
 ****************************************************************/
extern int positionedBG_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_positionedBG_T_TrainPosition_Types_Pck_string(const char *str, char **endptr);
extern int string_to_positionedBG_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr);
extern int is_positionedBG_T_TrainPosition_Types_Pck_allow_double_conversion();
extern int positionedBG_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nValue);
extern int get_positionedBG_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_positionedBG_T_TrainPosition_Types_Pck(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_positionedBG_T_TrainPosition_Types_Pck_default_value(void *pValue);
extern SimTypeUtils _Type_positionedBG_T_TrainPosition_Types_Pck_Utils;

/****************************************************************
 ** infoFromLinking_T_TrainPosition_Types_Pck 
 ****************************************************************/
extern int infoFromLinking_T_TrainPosition_Types_Pck_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_infoFromLinking_T_TrainPosition_Types_Pck_string(const char *str, char **endptr);
extern int string_to_infoFromLinking_T_TrainPosition_Types_Pck(const char *str, void *pValue, char **endptr);
extern int is_infoFromLinking_T_TrainPosition_Types_Pck_allow_double_conversion();
extern int infoFromLinking_T_TrainPosition_Types_Pck_to_double(const void *pValue, double *nValue);
extern int get_infoFromLinking_T_TrainPosition_Types_Pck_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_infoFromLinking_T_TrainPosition_Types_Pck(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_infoFromLinking_T_TrainPosition_Types_Pck_default_value(void *pValue);
extern SimTypeUtils _Type_infoFromLinking_T_TrainPosition_Types_Pck_Utils;

/****************************************************************
 ** morcStatus_T_RCM_Session_Types_Pkg 
 ****************************************************************/
extern int morcStatus_T_RCM_Session_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_morcStatus_T_RCM_Session_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_morcStatus_T_RCM_Session_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_morcStatus_T_RCM_Session_Types_Pkg_allow_double_conversion();
extern int morcStatus_T_RCM_Session_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_morcStatus_T_RCM_Session_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_morcStatus_T_RCM_Session_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_morcStatus_T_RCM_Session_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_morcStatus_T_RCM_Session_Types_Pkg_Utils;

/****************************************************************
 ** sessionStatus_T_RCM_Session_Types_Pkg 
 ****************************************************************/
extern int sessionStatus_T_RCM_Session_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_sessionStatus_T_RCM_Session_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_sessionStatus_T_RCM_Session_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_sessionStatus_T_RCM_Session_Types_Pkg_allow_double_conversion();
extern int sessionStatus_T_RCM_Session_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_sessionStatus_T_RCM_Session_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_sessionStatus_T_RCM_Session_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_sessionStatus_T_RCM_Session_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils;

/****************************************************************
 ** mobileRegistrationContext_T_RCM_Types_Pkg 
 ****************************************************************/
extern int mobileRegistrationContext_T_RCM_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_mobileRegistrationContext_T_RCM_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_mobileRegistrationContext_T_RCM_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_mobileRegistrationContext_T_RCM_Types_Pkg_allow_double_conversion();
extern int mobileRegistrationContext_T_RCM_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_mobileRegistrationContext_T_RCM_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_mobileRegistrationContext_T_RCM_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_mobileRegistrationContext_T_RCM_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils;

/****************************************************************
 ** mobileConnectionContext_T_RCM_Types_Pkg 
 ****************************************************************/
extern int mobileConnectionContext_T_RCM_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_mobileConnectionContext_T_RCM_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_mobileConnectionContext_T_RCM_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_mobileConnectionContext_T_RCM_Types_Pkg_allow_double_conversion();
extern int mobileConnectionContext_T_RCM_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_mobileConnectionContext_T_RCM_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_mobileConnectionContext_T_RCM_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_mobileConnectionContext_T_RCM_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils;

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
 ** struct_1940 
 ****************************************************************/
extern int struct_1940_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct_1940_string(const char *str, char **endptr);
extern int string_to_struct_1940(const char *str, void *pValue, char **endptr);
extern int is_struct_1940_allow_double_conversion();
extern int struct_1940_to_double(const void *pValue, double *nValue);
extern int get_struct_1940_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct_1940(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct_1940_default_value(void *pValue);
extern SimTypeUtils _Type_struct_1940_Utils;

/****************************************************************
 ** struct_2019 
 ****************************************************************/
extern int struct_2019_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct_2019_string(const char *str, char **endptr);
extern int string_to_struct_2019(const char *str, void *pValue, char **endptr);
extern int is_struct_2019_allow_double_conversion();
extern int struct_2019_to_double(const void *pValue, double *nValue);
extern int get_struct_2019_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct_2019(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct_2019_default_value(void *pValue);
extern SimTypeUtils _Type_struct_2019_Utils;

/****************************************************************
 ** array_real_114 
 ****************************************************************/
extern int array_real_114_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_real_114_string(const char *str, char **endptr);
extern int string_to_array_real_114(const char *str, void *pValue, char **endptr);
extern int is_array_real_114_allow_double_conversion();
extern int array_real_114_to_double(const void *pValue, double *nValue);
extern int get_array_real_114_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_real_114(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_real_114_default_value(void *pValue);
extern SimTypeUtils _Type_array_real_114_Utils;

/****************************************************************
 ** L_TEXT 
 ****************************************************************/
extern int L_TEXT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_TEXT_string(const char *str, char **endptr);
extern int string_to_L_TEXT(const char *str, void *pValue, char **endptr);
extern int is_L_TEXT_allow_double_conversion();
extern int L_TEXT_to_double(const void *pValue, double *nValue);
extern int get_L_TEXT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_TEXT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_TEXT_default_value(void *pValue);
extern SimTypeUtils _Type_L_TEXT_Utils;

/****************************************************************
 ** M_VERSION 
 ****************************************************************/
extern int M_VERSION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_VERSION_string(const char *str, char **endptr);
extern int string_to_M_VERSION(const char *str, void *pValue, char **endptr);
extern int is_M_VERSION_allow_double_conversion();
extern int M_VERSION_to_double(const void *pValue, double *nValue);
extern int get_M_VERSION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_VERSION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_VERSION_default_value(void *pValue);
extern SimTypeUtils _Type_M_VERSION_Utils;

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
 ** M_ADHESION 
 ****************************************************************/
extern int M_ADHESION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_ADHESION_string(const char *str, char **endptr);
extern int string_to_M_ADHESION(const char *str, void *pValue, char **endptr);
extern int is_M_ADHESION_allow_double_conversion();
extern int M_ADHESION_to_double(const void *pValue, double *nValue);
extern int get_M_ADHESION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_ADHESION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_ADHESION_default_value(void *pValue);
extern SimTypeUtils _Type_M_ADHESION_Utils;

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
 ** NID_C 
 ****************************************************************/
extern int NID_C_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_C_string(const char *str, char **endptr);
extern int string_to_NID_C(const char *str, void *pValue, char **endptr);
extern int is_NID_C_allow_double_conversion();
extern int NID_C_to_double(const void *pValue, double *nValue);
extern int get_NID_C_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_C(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_C_default_value(void *pValue);
extern SimTypeUtils _Type_NID_C_Utils;

/****************************************************************
 ** Q_TEXTCLASS 
 ****************************************************************/
extern int Q_TEXTCLASS_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_TEXTCLASS_string(const char *str, char **endptr);
extern int string_to_Q_TEXTCLASS(const char *str, void *pValue, char **endptr);
extern int is_Q_TEXTCLASS_allow_double_conversion();
extern int Q_TEXTCLASS_to_double(const void *pValue, double *nValue);
extern int get_Q_TEXTCLASS_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_TEXTCLASS(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_TEXTCLASS_default_value(void *pValue);
extern SimTypeUtils _Type_Q_TEXTCLASS_Utils;

/****************************************************************
 ** Q_TEXTCONFIRM 
 ****************************************************************/
extern int Q_TEXTCONFIRM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_TEXTCONFIRM_string(const char *str, char **endptr);
extern int string_to_Q_TEXTCONFIRM(const char *str, void *pValue, char **endptr);
extern int is_Q_TEXTCONFIRM_allow_double_conversion();
extern int Q_TEXTCONFIRM_to_double(const void *pValue, double *nValue);
extern int get_Q_TEXTCONFIRM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_TEXTCONFIRM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_TEXTCONFIRM_default_value(void *pValue);
extern SimTypeUtils _Type_Q_TEXTCONFIRM_Utils;

/****************************************************************
 ** D_TRACKCOND 
 ****************************************************************/
extern int D_TRACKCOND_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_TRACKCOND_string(const char *str, char **endptr);
extern int string_to_D_TRACKCOND(const char *str, void *pValue, char **endptr);
extern int is_D_TRACKCOND_allow_double_conversion();
extern int D_TRACKCOND_to_double(const void *pValue, double *nValue);
extern int get_D_TRACKCOND_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_TRACKCOND(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_TRACKCOND_default_value(void *pValue);
extern SimTypeUtils _Type_D_TRACKCOND_Utils;

/****************************************************************
 ** M_TRACKCOND 
 ****************************************************************/
extern int M_TRACKCOND_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_TRACKCOND_string(const char *str, char **endptr);
extern int string_to_M_TRACKCOND(const char *str, void *pValue, char **endptr);
extern int is_M_TRACKCOND_allow_double_conversion();
extern int M_TRACKCOND_to_double(const void *pValue, double *nValue);
extern int get_M_TRACKCOND_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_TRACKCOND(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_TRACKCOND_default_value(void *pValue);
extern SimTypeUtils _Type_M_TRACKCOND_Utils;

/****************************************************************
 ** NID_MN 
 ****************************************************************/
extern int NID_MN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_MN_string(const char *str, char **endptr);
extern int string_to_NID_MN(const char *str, void *pValue, char **endptr);
extern int is_NID_MN_allow_double_conversion();
extern int NID_MN_to_double(const void *pValue, double *nValue);
extern int get_NID_MN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_MN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_MN_default_value(void *pValue);
extern SimTypeUtils _Type_NID_MN_Utils;

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
 ** Q_LINK 
 ****************************************************************/
extern int Q_LINK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINK_string(const char *str, char **endptr);
extern int string_to_Q_LINK(const char *str, void *pValue, char **endptr);
extern int is_Q_LINK_allow_double_conversion();
extern int Q_LINK_to_double(const void *pValue, double *nValue);
extern int get_Q_LINK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINK(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINK_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINK_Utils;

/****************************************************************
 ** NID_LRBG 
 ****************************************************************/
extern int NID_LRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_LRBG_string(const char *str, char **endptr);
extern int string_to_NID_LRBG(const char *str, void *pValue, char **endptr);
extern int is_NID_LRBG_allow_double_conversion();
extern int NID_LRBG_to_double(const void *pValue, double *nValue);
extern int get_NID_LRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_LRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_LRBG_default_value(void *pValue);
extern SimTypeUtils _Type_NID_LRBG_Utils;

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
 ** D_LINK 
 ****************************************************************/
extern int D_LINK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_LINK_string(const char *str, char **endptr);
extern int string_to_D_LINK(const char *str, void *pValue, char **endptr);
extern int is_D_LINK_allow_double_conversion();
extern int D_LINK_to_double(const void *pValue, double *nValue);
extern int get_D_LINK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_LINK(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_LINK_default_value(void *pValue);
extern SimTypeUtils _Type_D_LINK_Utils;

/****************************************************************
 ** Q_NEWCOUNTRY 
 ****************************************************************/
extern int Q_NEWCOUNTRY_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NEWCOUNTRY_string(const char *str, char **endptr);
extern int string_to_Q_NEWCOUNTRY(const char *str, void *pValue, char **endptr);
extern int is_Q_NEWCOUNTRY_allow_double_conversion();
extern int Q_NEWCOUNTRY_to_double(const void *pValue, double *nValue);
extern int get_Q_NEWCOUNTRY_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NEWCOUNTRY(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NEWCOUNTRY_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NEWCOUNTRY_Utils;

/****************************************************************
 ** Q_LINKORIENTATION 
 ****************************************************************/
extern int Q_LINKORIENTATION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINKORIENTATION_string(const char *str, char **endptr);
extern int string_to_Q_LINKORIENTATION(const char *str, void *pValue, char **endptr);
extern int is_Q_LINKORIENTATION_allow_double_conversion();
extern int Q_LINKORIENTATION_to_double(const void *pValue, double *nValue);
extern int get_Q_LINKORIENTATION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINKORIENTATION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINKORIENTATION_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINKORIENTATION_Utils;

/****************************************************************
 ** Q_LINKREACTION 
 ****************************************************************/
extern int Q_LINKREACTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINKREACTION_string(const char *str, char **endptr);
extern int string_to_Q_LINKREACTION(const char *str, void *pValue, char **endptr);
extern int is_Q_LINKREACTION_allow_double_conversion();
extern int Q_LINKREACTION_to_double(const void *pValue, double *nValue);
extern int get_Q_LINKREACTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINKREACTION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINKREACTION_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINKREACTION_Utils;

/****************************************************************
 ** Q_LOCACC 
 ****************************************************************/
extern int Q_LOCACC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LOCACC_string(const char *str, char **endptr);
extern int string_to_Q_LOCACC(const char *str, void *pValue, char **endptr);
extern int is_Q_LOCACC_allow_double_conversion();
extern int Q_LOCACC_to_double(const void *pValue, double *nValue);
extern int get_Q_LOCACC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LOCACC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LOCACC_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LOCACC_Utils;

/****************************************************************
 ** Q_UPDOWN 
 ****************************************************************/
extern int Q_UPDOWN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_UPDOWN_string(const char *str, char **endptr);
extern int string_to_Q_UPDOWN(const char *str, void *pValue, char **endptr);
extern int is_Q_UPDOWN_allow_double_conversion();
extern int Q_UPDOWN_to_double(const void *pValue, double *nValue);
extern int get_Q_UPDOWN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_UPDOWN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_UPDOWN_default_value(void *pValue);
extern SimTypeUtils _Type_Q_UPDOWN_Utils;

/****************************************************************
 ** Q_MEDIA 
 ****************************************************************/
extern int Q_MEDIA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_MEDIA_string(const char *str, char **endptr);
extern int string_to_Q_MEDIA(const char *str, void *pValue, char **endptr);
extern int is_Q_MEDIA_allow_double_conversion();
extern int Q_MEDIA_to_double(const void *pValue, double *nValue);
extern int get_Q_MEDIA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_MEDIA(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_MEDIA_default_value(void *pValue);
extern SimTypeUtils _Type_Q_MEDIA_Utils;

/****************************************************************
 ** N_TOTAL 
 ****************************************************************/
extern int N_TOTAL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_TOTAL_string(const char *str, char **endptr);
extern int string_to_N_TOTAL(const char *str, void *pValue, char **endptr);
extern int is_N_TOTAL_allow_double_conversion();
extern int N_TOTAL_to_double(const void *pValue, double *nValue);
extern int get_N_TOTAL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_TOTAL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_TOTAL_default_value(void *pValue);
extern SimTypeUtils _Type_N_TOTAL_Utils;

/****************************************************************
 ** M_MCOUNT 
 ****************************************************************/
extern int M_MCOUNT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_MCOUNT_string(const char *str, char **endptr);
extern int string_to_M_MCOUNT(const char *str, void *pValue, char **endptr);
extern int is_M_MCOUNT_allow_double_conversion();
extern int M_MCOUNT_to_double(const void *pValue, double *nValue);
extern int get_M_MCOUNT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_MCOUNT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_MCOUNT_default_value(void *pValue);
extern SimTypeUtils _Type_M_MCOUNT_Utils;

/****************************************************************
 ** Q_NVLOCACC 
 ****************************************************************/
extern int Q_NVLOCACC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NVLOCACC_string(const char *str, char **endptr);
extern int string_to_Q_NVLOCACC(const char *str, void *pValue, char **endptr);
extern int is_Q_NVLOCACC_allow_double_conversion();
extern int Q_NVLOCACC_to_double(const void *pValue, double *nValue);
extern int get_Q_NVLOCACC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NVLOCACC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NVLOCACC_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NVLOCACC_Utils;

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
 ** NID_RADIO 
 ****************************************************************/
extern int NID_RADIO_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_RADIO_string(const char *str, char **endptr);
extern int string_to_NID_RADIO(const char *str, void *pValue, char **endptr);
extern int is_NID_RADIO_allow_double_conversion();
extern int NID_RADIO_to_double(const void *pValue, double *nValue);
extern int get_NID_RADIO_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_RADIO(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_RADIO_default_value(void *pValue);
extern SimTypeUtils _Type_NID_RADIO_Utils;

/****************************************************************
 ** NID_RBC 
 ****************************************************************/
extern int NID_RBC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_RBC_string(const char *str, char **endptr);
extern int string_to_NID_RBC(const char *str, void *pValue, char **endptr);
extern int is_NID_RBC_allow_double_conversion();
extern int NID_RBC_to_double(const void *pValue, double *nValue);
extern int get_NID_RBC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_RBC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_RBC_default_value(void *pValue);
extern SimTypeUtils _Type_NID_RBC_Utils;

/****************************************************************
 ** T_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int T_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_T_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_T_internal_Type_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int T_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_T_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils;

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
 ** G_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int G_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_G_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_G_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_G_internal_Type_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int G_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_G_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_G_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_G_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_G_internal_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** V_odometry_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int V_odometry_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_odometry_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_V_odometry_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_V_odometry_Type_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int V_odometry_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_V_odometry_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_odometry_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_odometry_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_V_odometry_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** A_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int A_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_A_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_A_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_A_internal_Type_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int A_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_A_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_A_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_A_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** odoMotionState_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int odoMotionState_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_odoMotionState_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_odoMotionState_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_odoMotionState_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int odoMotionState_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_odoMotionState_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_odoMotionState_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_odoMotionState_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** odoMotionDirection_T_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int odoMotionDirection_T_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_odoMotionDirection_T_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_odoMotionDirection_T_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_odoMotionDirection_T_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int odoMotionDirection_T_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_odoMotionDirection_T_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_odoMotionDirection_T_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_odoMotionDirection_T_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** DMI_StatusSet_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_StatusSet_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_StatusSet_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_StatusSet_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_StatusSet_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_StatusSet_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_StatusSet_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_StatusSet_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_StatusSet_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_StatusSet_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_DMI_Identifier_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_DMI_Identifier_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_DMI_Identifier_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_DMI_Identifier_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_DMI_Identifier_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_DMI_Identifier_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_DMI_Identifier_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_DMI_Identifier_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_DMI_Identifier_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_DMI_Identifier_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_Cabin_Identifier_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_Cabin_Identifier_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Cabin_Identifier_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Cabin_Identifier_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Cabin_Identifier_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_Cabin_Identifier_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Cabin_Identifier_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Cabin_Identifier_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Cabin_Identifier_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Cabin_Identifier_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_Request_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_Request_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Request_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Request_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Request_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_Request_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Request_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Request_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Request_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Request_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_TextMessage_ID_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_TextMessage_ID_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_TextMessage_ID_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_TextMessage_ID_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_TextMessage_ID_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_TextMessage_ID_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_TextMessage_ID_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_TextMessage_ID_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_TextMessage_ID_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_TextMessage_ID_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** M_BRAKEPERCT_DMI_Types_Pkg 
 ****************************************************************/
extern int M_BRAKEPERCT_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_BRAKEPERCT_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_M_BRAKEPERCT_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_M_BRAKEPERCT_DMI_Types_Pkg_allow_double_conversion();
extern int M_BRAKEPERCT_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_M_BRAKEPERCT_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_BRAKEPERCT_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_BRAKEPERCT_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_M_BRAKEPERCT_DMI_Types_Pkg_Utils;

/****************************************************************
 ** NID_STM_DMI_Types_Pkg 
 ****************************************************************/
extern int NID_STM_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_STM_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_NID_STM_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_NID_STM_DMI_Types_Pkg_allow_double_conversion();
extern int NID_STM_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_NID_STM_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_STM_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_STM_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_NID_STM_DMI_Types_Pkg_Utils;

/****************************************************************
 ** M_SupervisionDisplay_T_DMI_Types_Pkg 
 ****************************************************************/
extern int M_SupervisionDisplay_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_SupervisionDisplay_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_M_SupervisionDisplay_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_M_SupervisionDisplay_T_DMI_Types_Pkg_allow_double_conversion();
extern int M_SupervisionDisplay_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_M_SupervisionDisplay_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_SupervisionDisplay_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_SupervisionDisplay_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_M_SupervisionDisplay_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** M_SUPERVISION_STATUS_DMI_Types_Pkg 
 ****************************************************************/
extern int M_SUPERVISION_STATUS_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_SUPERVISION_STATUS_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_M_SUPERVISION_STATUS_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_M_SUPERVISION_STATUS_DMI_Types_Pkg_allow_double_conversion();
extern int M_SUPERVISION_STATUS_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_M_SUPERVISION_STATUS_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_SUPERVISION_STATUS_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_SUPERVISION_STATUS_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_M_SUPERVISION_STATUS_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_List_Entry_Request_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_List_Entry_Request_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_List_Entry_Request_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_List_Entry_Request_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_List_Entry_Request_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_List_Entry_Request_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_List_Entry_Request_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_List_Entry_Request_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_List_Entry_Request_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_List_Entry_Request_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** BCD_DMI_Types_Pkg 
 ****************************************************************/
extern int BCD_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BCD_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_BCD_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_BCD_DMI_Types_Pkg_allow_double_conversion();
extern int BCD_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_BCD_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BCD_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BCD_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_BCD_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_brakeModel_id_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_brakeModel_id_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_brakeModel_id_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_brakeModel_id_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_brakeModel_id_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_brakeModel_id_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_brakeModel_id_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_brakeModel_id_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_brakeModel_id_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_brakeModel_id_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_vMax_id_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_vMax_id_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_vMax_id_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_vMax_id_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_vMax_id_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_vMax_id_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_vMax_id_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_vMax_id_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_vMax_id_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_vMax_id_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_airtightSystem_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_airtightSystem_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_airtightSystem_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_airtightSystem_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_airtightSystem_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_airtightSystem_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_airtightSystem_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_airtightSystem_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_airtightSystem_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_airtightSystem_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_loadingGauge_T_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_loadingGauge_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_loadingGauge_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_loadingGauge_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_loadingGauge_T_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_loadingGauge_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_loadingGauge_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_loadingGauge_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_loadingGauge_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_loadingGauge_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** DMI_Q_TEXT_DMI_Types_Pkg 
 ****************************************************************/
extern int DMI_Q_TEXT_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_DMI_Q_TEXT_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_DMI_Q_TEXT_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_DMI_Q_TEXT_DMI_Types_Pkg_allow_double_conversion();
extern int DMI_Q_TEXT_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_DMI_Q_TEXT_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_DMI_Q_TEXT_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_DMI_Q_TEXT_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_DMI_Q_TEXT_DMI_Types_Pkg_Utils;

/****************************************************************
 ** Icon_control_flag_T_DMI_Types_Pkg 
 ****************************************************************/
extern int Icon_control_flag_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Icon_control_flag_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Icon_control_flag_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Icon_control_flag_T_DMI_Types_Pkg_allow_double_conversion();
extern int Icon_control_flag_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Icon_control_flag_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Icon_control_flag_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Icon_control_flag_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Icon_control_flag_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** Icon_group_T_DMI_Types_Pkg 
 ****************************************************************/
extern int Icon_group_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Icon_group_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Icon_group_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Icon_group_T_DMI_Types_Pkg_allow_double_conversion();
extern int Icon_group_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Icon_group_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Icon_group_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Icon_group_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Icon_group_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** Area_group_T_DMI_Types_Pkg 
 ****************************************************************/
extern int Area_group_T_DMI_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Area_group_T_DMI_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Area_group_T_DMI_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Area_group_T_DMI_Types_Pkg_allow_double_conversion();
extern int Area_group_T_DMI_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Area_group_T_DMI_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Area_group_T_DMI_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Area_group_T_DMI_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Area_group_T_DMI_Types_Pkg_Utils;

/****************************************************************
 ** connectionStatusRadioUnit_T_API_RadioCommunication_Pkg 
 ****************************************************************/
extern int connectionStatusRadioUnit_T_API_RadioCommunication_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_connectionStatusRadioUnit_T_API_RadioCommunication_Pkg_string(const char *str, char **endptr);
extern int string_to_connectionStatusRadioUnit_T_API_RadioCommunication_Pkg(const char *str, void *pValue, char **endptr);
extern int is_connectionStatusRadioUnit_T_API_RadioCommunication_Pkg_allow_double_conversion();
extern int connectionStatusRadioUnit_T_API_RadioCommunication_Pkg_to_double(const void *pValue, double *nValue);
extern int get_connectionStatusRadioUnit_T_API_RadioCommunication_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_connectionStatusRadioUnit_T_API_RadioCommunication_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_connectionStatusRadioUnit_T_API_RadioCommunication_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_connectionStatusRadioUnit_T_API_RadioCommunication_Pkg_Utils;

/****************************************************************
 ** M_sleeping_signal_status_T_TIU_Types_Pkg 
 ****************************************************************/
extern int M_sleeping_signal_status_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_sleeping_signal_status_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_M_sleeping_signal_status_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_M_sleeping_signal_status_T_TIU_Types_Pkg_allow_double_conversion();
extern int M_sleeping_signal_status_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_M_sleeping_signal_status_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_sleeping_signal_status_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_sleeping_signal_status_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_M_sleeping_signal_status_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** M_passiveshunting_signal_status_T_TIU_Types_Pkg 
 ****************************************************************/
extern int M_passiveshunting_signal_status_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_passiveshunting_signal_status_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_M_passiveshunting_signal_status_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_M_passiveshunting_signal_status_T_TIU_Types_Pkg_allow_double_conversion();
extern int M_passiveshunting_signal_status_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_M_passiveshunting_signal_status_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_passiveshunting_signal_status_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_passiveshunting_signal_status_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_M_passiveshunting_signal_status_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** M_nonleading_signal_status_T_TIU_Types_Pkg 
 ****************************************************************/
extern int M_nonleading_signal_status_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_nonleading_signal_status_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_M_nonleading_signal_status_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_M_nonleading_signal_status_T_TIU_Types_Pkg_allow_double_conversion();
extern int M_nonleading_signal_status_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_M_nonleading_signal_status_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_nonleading_signal_status_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_nonleading_signal_status_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_M_nonleading_signal_status_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** M_cab_signal_status_T_TIU_Types_Pkg 
 ****************************************************************/
extern int M_cab_signal_status_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_cab_signal_status_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_M_cab_signal_status_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_M_cab_signal_status_T_TIU_Types_Pkg_allow_double_conversion();
extern int M_cab_signal_status_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_M_cab_signal_status_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_cab_signal_status_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_cab_signal_status_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_M_cab_signal_status_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** M_directioncontroller_signal_status_T_TIU_Types_Pkg 
 ****************************************************************/
extern int M_directioncontroller_signal_status_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_directioncontroller_signal_status_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_M_directioncontroller_signal_status_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_M_directioncontroller_signal_status_T_TIU_Types_Pkg_allow_double_conversion();
extern int M_directioncontroller_signal_status_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_M_directioncontroller_signal_status_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_directioncontroller_signal_status_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_directioncontroller_signal_status_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_M_directioncontroller_signal_status_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** M_trainintegrity_signal_status_T_TIU_Types_Pkg 
 ****************************************************************/
extern int M_trainintegrity_signal_status_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_trainintegrity_signal_status_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_M_trainintegrity_signal_status_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_M_trainintegrity_signal_status_T_TIU_Types_Pkg_allow_double_conversion();
extern int M_trainintegrity_signal_status_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_M_trainintegrity_signal_status_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_trainintegrity_signal_status_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_trainintegrity_signal_status_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_M_trainintegrity_signal_status_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** M_traction_signal_status_T_TIU_Types_Pkg 
 ****************************************************************/
extern int M_traction_signal_status_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_traction_signal_status_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_M_traction_signal_status_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_M_traction_signal_status_T_TIU_Types_Pkg_allow_double_conversion();
extern int M_traction_signal_status_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_M_traction_signal_status_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_traction_signal_status_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_traction_signal_status_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_M_traction_signal_status_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** M_brake_status_T_TIU_Types_Pkg 
 ****************************************************************/
extern int M_brake_status_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_brake_status_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_M_brake_status_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_M_brake_status_T_TIU_Types_Pkg_allow_double_conversion();
extern int M_brake_status_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_M_brake_status_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_brake_status_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_brake_status_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_M_brake_status_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** M_train_data_entry_type_T_TIU_Types_Pkg 
 ****************************************************************/
extern int M_train_data_entry_type_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_train_data_entry_type_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_M_train_data_entry_type_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_M_train_data_entry_type_T_TIU_Types_Pkg_allow_double_conversion();
extern int M_train_data_entry_type_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_M_train_data_entry_type_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_train_data_entry_type_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_train_data_entry_type_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_M_train_data_entry_type_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** D_test_trackcond_T_TIU_Types_Pkg 
 ****************************************************************/
extern int D_test_trackcond_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_test_trackcond_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_D_test_trackcond_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_D_test_trackcond_T_TIU_Types_Pkg_allow_double_conversion();
extern int D_test_trackcond_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_D_test_trackcond_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_test_trackcond_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_test_trackcond_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_D_test_trackcond_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** D_test_distance_T_TIU_Types_Pkg 
 ****************************************************************/
extern int D_test_distance_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_test_distance_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_D_test_distance_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_D_test_distance_T_TIU_Types_Pkg_allow_double_conversion();
extern int D_test_distance_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_D_test_distance_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_test_distance_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_test_distance_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_D_test_distance_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** L_test_trackcond_T_TIU_Types_Pkg 
 ****************************************************************/
extern int L_test_trackcond_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_test_trackcond_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_L_test_trackcond_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_L_test_trackcond_T_TIU_Types_Pkg_allow_double_conversion();
extern int L_test_trackcond_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_L_test_trackcond_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_test_trackcond_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_test_trackcond_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_L_test_trackcond_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** M_trackcond_T_TIU_Types_Pkg 
 ****************************************************************/
extern int M_trackcond_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_trackcond_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_M_trackcond_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_M_trackcond_T_TIU_Types_Pkg_allow_double_conversion();
extern int M_trackcond_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_M_trackcond_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_trackcond_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_trackcond_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_M_trackcond_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** D_test_trackinit_T_TIU_Types_Pkg 
 ****************************************************************/
extern int D_test_trackinit_T_TIU_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_test_trackinit_T_TIU_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_D_test_trackinit_T_TIU_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_D_test_trackinit_T_TIU_Types_Pkg_allow_double_conversion();
extern int D_test_trackinit_T_TIU_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_D_test_trackinit_T_TIU_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_test_trackinit_T_TIU_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_test_trackinit_T_TIU_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_D_test_trackinit_T_TIU_Types_Pkg_Utils;

/****************************************************************
 ** TargetType_T_TargetManagement_types 
 ****************************************************************/
extern int TargetType_T_TargetManagement_types_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TargetType_T_TargetManagement_types_string(const char *str, char **endptr);
extern int string_to_TargetType_T_TargetManagement_types(const char *str, void *pValue, char **endptr);
extern int is_TargetType_T_TargetManagement_types_allow_double_conversion();
extern int TargetType_T_TargetManagement_types_to_double(const void *pValue, double *nValue);
extern int get_TargetType_T_TargetManagement_types_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TargetType_T_TargetManagement_types(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TargetType_T_TargetManagement_types_default_value(void *pValue);
extern SimTypeUtils _Type_TargetType_T_TargetManagement_types_Utils;

/****************************************************************
 ** L_internal_real_Type_SDM_Types_Pkg 
 ****************************************************************/
extern int L_internal_real_Type_SDM_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_internal_real_Type_SDM_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_L_internal_real_Type_SDM_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_L_internal_real_Type_SDM_Types_Pkg_allow_double_conversion();
extern int L_internal_real_Type_SDM_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_L_internal_real_Type_SDM_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_internal_real_Type_SDM_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_internal_real_Type_SDM_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_L_internal_real_Type_SDM_Types_Pkg_Utils;

/****************************************************************
 ** V_internal_real_Type_SDM_Types_Pkg 
 ****************************************************************/
extern int V_internal_real_Type_SDM_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_internal_real_Type_SDM_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_V_internal_real_Type_SDM_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_V_internal_real_Type_SDM_Types_Pkg_allow_double_conversion();
extern int V_internal_real_Type_SDM_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_V_internal_real_Type_SDM_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_internal_real_Type_SDM_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_internal_real_Type_SDM_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_V_internal_real_Type_SDM_Types_Pkg_Utils;

/****************************************************************
 ** A_internal_real_Type_SDM_Types_Pkg 
 ****************************************************************/
extern int A_internal_real_Type_SDM_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_A_internal_real_Type_SDM_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_A_internal_real_Type_SDM_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_A_internal_real_Type_SDM_Types_Pkg_allow_double_conversion();
extern int A_internal_real_Type_SDM_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_A_internal_real_Type_SDM_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_A_internal_real_Type_SDM_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_A_internal_real_Type_SDM_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_A_internal_real_Type_SDM_Types_Pkg_Utils;

/****************************************************************
 ** ParabolaCurveDistances_T_CalcBrakingCurves_types 
 ****************************************************************/
extern int ParabolaCurveDistances_T_CalcBrakingCurves_types_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_ParabolaCurveDistances_T_CalcBrakingCurves_types_string(const char *str, char **endptr);
extern int string_to_ParabolaCurveDistances_T_CalcBrakingCurves_types(const char *str, void *pValue, char **endptr);
extern int is_ParabolaCurveDistances_T_CalcBrakingCurves_types_allow_double_conversion();
extern int ParabolaCurveDistances_T_CalcBrakingCurves_types_to_double(const void *pValue, double *nValue);
extern int get_ParabolaCurveDistances_T_CalcBrakingCurves_types_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_ParabolaCurveDistances_T_CalcBrakingCurves_types(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_ParabolaCurveDistances_T_CalcBrakingCurves_types_default_value(void *pValue);
extern SimTypeUtils _Type_ParabolaCurveDistances_T_CalcBrakingCurves_types_Utils;

/****************************************************************
 ** ParabolaCurveSpeeds_T_CalcBrakingCurves_types 
 ****************************************************************/
extern int ParabolaCurveSpeeds_T_CalcBrakingCurves_types_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_ParabolaCurveSpeeds_T_CalcBrakingCurves_types_string(const char *str, char **endptr);
extern int string_to_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(const char *str, void *pValue, char **endptr);
extern int is_ParabolaCurveSpeeds_T_CalcBrakingCurves_types_allow_double_conversion();
extern int ParabolaCurveSpeeds_T_CalcBrakingCurves_types_to_double(const void *pValue, double *nValue);
extern int get_ParabolaCurveSpeeds_T_CalcBrakingCurves_types_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_ParabolaCurveSpeeds_T_CalcBrakingCurves_types_default_value(void *pValue);
extern SimTypeUtils _Type_ParabolaCurveSpeeds_T_CalcBrakingCurves_types_Utils;

/****************************************************************
 ** ParabolaCurveAccelerations_T_CalcBrakingCurves_types 
 ****************************************************************/
extern int ParabolaCurveAccelerations_T_CalcBrakingCurves_types_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_ParabolaCurveAccelerations_T_CalcBrakingCurves_types_string(const char *str, char **endptr);
extern int string_to_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(const char *str, void *pValue, char **endptr);
extern int is_ParabolaCurveAccelerations_T_CalcBrakingCurves_types_allow_double_conversion();
extern int ParabolaCurveAccelerations_T_CalcBrakingCurves_types_to_double(const void *pValue, double *nValue);
extern int get_ParabolaCurveAccelerations_T_CalcBrakingCurves_types_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_ParabolaCurveAccelerations_T_CalcBrakingCurves_types_default_value(void *pValue);
extern SimTypeUtils _Type_ParabolaCurveAccelerations_T_CalcBrakingCurves_types_Utils;

/****************************************************************
 ** NID_ERRORBG_BG_Types_Pkg 
 ****************************************************************/
extern int NID_ERRORBG_BG_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_ERRORBG_BG_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_NID_ERRORBG_BG_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_NID_ERRORBG_BG_Types_Pkg_allow_double_conversion();
extern int NID_ERRORBG_BG_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_NID_ERRORBG_BG_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_ERRORBG_BG_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_ERRORBG_BG_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_NID_ERRORBG_BG_Types_Pkg_Utils;

/****************************************************************
 ** sessionPhase_T_RCM_Session_Types_Pkg 
 ****************************************************************/
extern int sessionPhase_T_RCM_Session_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_sessionPhase_T_RCM_Session_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_sessionPhase_T_RCM_Session_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_sessionPhase_T_RCM_Session_Types_Pkg_allow_double_conversion();
extern int sessionPhase_T_RCM_Session_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_sessionPhase_T_RCM_Session_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_sessionPhase_T_RCM_Session_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_sessionPhase_T_RCM_Session_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils;

/****************************************************************
 ** mobileHealthStatus_T_RCM_Types_Pkg 
 ****************************************************************/
extern int mobileHealthStatus_T_RCM_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_mobileHealthStatus_T_RCM_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_mobileHealthStatus_T_RCM_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_mobileHealthStatus_T_RCM_Types_Pkg_allow_double_conversion();
extern int mobileHealthStatus_T_RCM_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_mobileHealthStatus_T_RCM_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_mobileHealthStatus_T_RCM_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_mobileHealthStatus_T_RCM_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_mobileHealthStatus_T_RCM_Types_Pkg_Utils;

/****************************************************************
 ** mobileRegistrationStatus_T_RCM_Types_Pkg 
 ****************************************************************/
extern int mobileRegistrationStatus_T_RCM_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_mobileRegistrationStatus_T_RCM_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_mobileRegistrationStatus_T_RCM_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_mobileRegistrationStatus_T_RCM_Types_Pkg_allow_double_conversion();
extern int mobileRegistrationStatus_T_RCM_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_mobileRegistrationStatus_T_RCM_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_mobileRegistrationStatus_T_RCM_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_mobileRegistrationStatus_T_RCM_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils;

/****************************************************************
 ** mobileConnectionStatus_T_RCM_Types_Pkg 
 ****************************************************************/
extern int mobileConnectionStatus_T_RCM_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_mobileConnectionStatus_T_RCM_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_mobileConnectionStatus_T_RCM_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_mobileConnectionStatus_T_RCM_Types_Pkg_allow_double_conversion();
extern int mobileConnectionStatus_T_RCM_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_mobileConnectionStatus_T_RCM_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_mobileConnectionStatus_T_RCM_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_mobileConnectionStatus_T_RCM_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils;


#endif /*ENVSIM_TYPES_CONVERSION */
