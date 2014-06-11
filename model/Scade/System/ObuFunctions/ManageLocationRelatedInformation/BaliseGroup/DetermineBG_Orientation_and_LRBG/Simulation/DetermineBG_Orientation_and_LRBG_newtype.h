#ifndef DETERMINEBG_ORIENTATION_AND_LRBG_TYPES_CONVERTION
#define DETERMINEBG_ORIENTATION_AND_LRBG_TYPES_CONVERTION

#include "NewSmuTypes.h"

/****************************************************************
 ** SSM_ST_SM1 
 ****************************************************************/
extern int SSM_ST_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_ST_SM1_string(const char *str, char **endptr);
extern int string_to_SSM_ST_SM1(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_SM1_allow_double_convertion();
extern int SSM_ST_SM1_to_double(const void *pValue, double *nValue);
extern int get_SSM_ST_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_ST_SM1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_ST_SM1_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_SM1_Utils;

/****************************************************************
 ** SSM_TR_SM1 
 ****************************************************************/
extern int SSM_TR_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_TR_SM1_string(const char *str, char **endptr);
extern int string_to_SSM_TR_SM1(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_SM1_allow_double_convertion();
extern int SSM_TR_SM1_to_double(const void *pValue, double *nValue);
extern int get_SSM_TR_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_TR_SM1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_TR_SM1_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_SM1_Utils;

/****************************************************************
 ** SSM_ST_SM2_SM1_Level2or3 
 ****************************************************************/
extern int SSM_ST_SM2_SM1_Level2or3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_ST_SM2_SM1_Level2or3_string(const char *str, char **endptr);
extern int string_to_SSM_ST_SM2_SM1_Level2or3(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_SM2_SM1_Level2or3_allow_double_convertion();
extern int SSM_ST_SM2_SM1_Level2or3_to_double(const void *pValue, double *nValue);
extern int get_SSM_ST_SM2_SM1_Level2or3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_ST_SM2_SM1_Level2or3(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_ST_SM2_SM1_Level2or3_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_SM2_SM1_Level2or3_Utils;

/****************************************************************
 ** SSM_TR_SM2_SM1_Level2or3 
 ****************************************************************/
extern int SSM_TR_SM2_SM1_Level2or3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_TR_SM2_SM1_Level2or3_string(const char *str, char **endptr);
extern int string_to_SSM_TR_SM2_SM1_Level2or3(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_SM2_SM1_Level2or3_allow_double_convertion();
extern int SSM_TR_SM2_SM1_Level2or3_to_double(const void *pValue, double *nValue);
extern int get_SSM_TR_SM2_SM1_Level2or3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_TR_SM2_SM1_Level2or3(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_TR_SM2_SM1_Level2or3_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_SM2_SM1_Level2or3_Utils;

/****************************************************************
 ** TrainInfo 
 ****************************************************************/
extern int TrainInfo_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TrainInfo_string(const char *str, char **endptr);
extern int string_to_TrainInfo(const char *str, void *pValue, char **endptr);
extern int is_TrainInfo_allow_double_convertion();
extern int TrainInfo_to_double(const void *pValue, double *nValue);
extern int get_TrainInfo_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TrainInfo(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TrainInfo_default_value(void *pValue);
extern SimTypeUtils _Type_TrainInfo_Utils;

/****************************************************************
 ** CurrentLRBG 
 ****************************************************************/
extern int CurrentLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CurrentLRBG_string(const char *str, char **endptr);
extern int string_to_CurrentLRBG(const char *str, void *pValue, char **endptr);
extern int is_CurrentLRBG_allow_double_convertion();
extern int CurrentLRBG_to_double(const void *pValue, double *nValue);
extern int get_CurrentLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CurrentLRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CurrentLRBG_default_value(void *pValue);
extern SimTypeUtils _Type_CurrentLRBG_Utils;

/****************************************************************
 ** FilteredBGMessage 
 ****************************************************************/
extern int FilteredBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_FilteredBGMessage_string(const char *str, char **endptr);
extern int string_to_FilteredBGMessage(const char *str, void *pValue, char **endptr);
extern int is_FilteredBGMessage_allow_double_convertion();
extern int FilteredBGMessage_to_double(const void *pValue, double *nValue);
extern int get_FilteredBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_FilteredBGMessage(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_FilteredBGMessage_default_value(void *pValue);
extern SimTypeUtils _Type_FilteredBGMessage_Utils;

/****************************************************************
 ** CheckedBGMessage 
 ****************************************************************/
extern int CheckedBGMessage_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CheckedBGMessage_string(const char *str, char **endptr);
extern int string_to_CheckedBGMessage(const char *str, void *pValue, char **endptr);
extern int is_CheckedBGMessage_allow_double_convertion();
extern int CheckedBGMessage_to_double(const void *pValue, double *nValue);
extern int get_CheckedBGMessage_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CheckedBGMessage(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CheckedBGMessage_default_value(void *pValue);
extern SimTypeUtils _Type_CheckedBGMessage_Utils;

/****************************************************************
 ** HederArray 
 ****************************************************************/
extern int HederArray_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_HederArray_string(const char *str, char **endptr);
extern int string_to_HederArray(const char *str, void *pValue, char **endptr);
extern int is_HederArray_allow_double_convertion();
extern int HederArray_to_double(const void *pValue, double *nValue);
extern int get_HederArray_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_HederArray(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_HederArray_default_value(void *pValue);
extern SimTypeUtils _Type_HederArray_Utils;

/****************************************************************
 ** HeaderFlag 
 ****************************************************************/
extern int HeaderFlag_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_HeaderFlag_string(const char *str, char **endptr);
extern int string_to_HeaderFlag(const char *str, void *pValue, char **endptr);
extern int is_HeaderFlag_allow_double_convertion();
extern int HeaderFlag_to_double(const void *pValue, double *nValue);
extern int get_HeaderFlag_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_HeaderFlag(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_HeaderFlag_default_value(void *pValue);
extern SimTypeUtils _Type_HeaderFlag_Utils;

/****************************************************************
 ** Header 
 ****************************************************************/
extern int Header_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Header_string(const char *str, char **endptr);
extern int string_to_Header(const char *str, void *pValue, char **endptr);
extern int is_Header_allow_double_convertion();
extern int Header_to_double(const void *pValue, double *nValue);
extern int get_Header_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Header(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Header_default_value(void *pValue);
extern SimTypeUtils _Type_Header_Utils;

/****************************************************************
 ** Flag 
 ****************************************************************/
extern int Flag_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Flag_string(const char *str, char **endptr);
extern int string_to_Flag(const char *str, void *pValue, char **endptr);
extern int is_Flag_allow_double_convertion();
extern int Flag_to_double(const void *pValue, double *nValue);
extern int get_Flag_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Flag(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Flag_default_value(void *pValue);
extern SimTypeUtils _Type_Flag_Utils;

/****************************************************************
 ** Position 
 ****************************************************************/
extern int Position_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Position_string(const char *str, char **endptr);
extern int string_to_Position(const char *str, void *pValue, char **endptr);
extern int is_Position_allow_double_convertion();
extern int Position_to_double(const void *pValue, double *nValue);
extern int get_Position_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Position(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Position_default_value(void *pValue);
extern SimTypeUtils _Type_Position_Utils;

/****************************************************************
 ** ListOfBGs 
 ****************************************************************/
extern int ListOfBGs_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_ListOfBGs_string(const char *str, char **endptr);
extern int string_to_ListOfBGs(const char *str, void *pValue, char **endptr);
extern int is_ListOfBGs_allow_double_convertion();
extern int ListOfBGs_to_double(const void *pValue, double *nValue);
extern int get_ListOfBGs_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_ListOfBGs(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_ListOfBGs_default_value(void *pValue);
extern SimTypeUtils _Type_ListOfBGs_Utils;

/****************************************************************
 ** RBCOrientationReport 
 ****************************************************************/
extern int RBCOrientationReport_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_RBCOrientationReport_string(const char *str, char **endptr);
extern int string_to_RBCOrientationReport(const char *str, void *pValue, char **endptr);
extern int is_RBCOrientationReport_allow_double_convertion();
extern int RBCOrientationReport_to_double(const void *pValue, double *nValue);
extern int get_RBCOrientationReport_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_RBCOrientationReport(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_RBCOrientationReport_default_value(void *pValue);
extern SimTypeUtils _Type_RBCOrientationReport_Utils;

/****************************************************************
 ** Train_Position_Report_Radio_TrainToTrack 
 ****************************************************************/
extern int Train_Position_Report_Radio_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Train_Position_Report_Radio_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_Train_Position_Report_Radio_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_Train_Position_Report_Radio_TrainToTrack_allow_double_convertion();
extern int Train_Position_Report_Radio_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_Train_Position_Report_Radio_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Train_Position_Report_Radio_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Train_Position_Report_Radio_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_Train_Position_Report_Radio_TrainToTrack_Utils;

/****************************************************************
 ** Assignment_of_coordinate_system_Radio_TrackToTrain 
 ****************************************************************/
extern int Assignment_of_coordinate_system_Radio_TrackToTrain_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Assignment_of_coordinate_system_Radio_TrackToTrain_string(const char *str, char **endptr);
extern int string_to_Assignment_of_coordinate_system_Radio_TrackToTrain(const char *str, void *pValue, char **endptr);
extern int is_Assignment_of_coordinate_system_Radio_TrackToTrain_allow_double_convertion();
extern int Assignment_of_coordinate_system_Radio_TrackToTrain_to_double(const void *pValue, double *nValue);
extern int get_Assignment_of_coordinate_system_Radio_TrackToTrain_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Assignment_of_coordinate_system_Radio_TrackToTrain(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Assignment_of_coordinate_system_Radio_TrackToTrain_default_value(void *pValue);
extern SimTypeUtils _Type_Assignment_of_coordinate_system_Radio_TrackToTrain_Utils;

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
 ** M_LEVELTR 
 ****************************************************************/
extern int M_LEVELTR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_LEVELTR_string(const char *str, char **endptr);
extern int string_to_M_LEVELTR(const char *str, void *pValue, char **endptr);
extern int is_M_LEVELTR_allow_double_convertion();
extern int M_LEVELTR_to_double(const void *pValue, double *nValue);
extern int get_M_LEVELTR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_LEVELTR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_LEVELTR_default_value(void *pValue);
extern SimTypeUtils _Type_M_LEVELTR_Utils;

/****************************************************************
 ** M_MODE 
 ****************************************************************/
extern int M_MODE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_MODE_string(const char *str, char **endptr);
extern int string_to_M_MODE(const char *str, void *pValue, char **endptr);
extern int is_M_MODE_allow_double_convertion();
extern int M_MODE_to_double(const void *pValue, double *nValue);
extern int get_M_MODE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_MODE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_MODE_default_value(void *pValue);
extern SimTypeUtils _Type_M_MODE_Utils;

/****************************************************************
 ** Q_DIRTRAIN 
 ****************************************************************/
extern int Q_DIRTRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIRTRAIN_string(const char *str, char **endptr);
extern int string_to_Q_DIRTRAIN(const char *str, void *pValue, char **endptr);
extern int is_Q_DIRTRAIN_allow_double_convertion();
extern int Q_DIRTRAIN_to_double(const void *pValue, double *nValue);
extern int get_Q_DIRTRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIRTRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIRTRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIRTRAIN_Utils;

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
 ** AdditionalInformation 
 ****************************************************************/
extern int AdditionalInformation_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_AdditionalInformation_string(const char *str, char **endptr);
extern int string_to_AdditionalInformation(const char *str, void *pValue, char **endptr);
extern int is_AdditionalInformation_allow_double_convertion();
extern int AdditionalInformation_to_double(const void *pValue, double *nValue);
extern int get_AdditionalInformation_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_AdditionalInformation(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_AdditionalInformation_default_value(void *pValue);
extern SimTypeUtils _Type_AdditionalInformation_Utils;

/****************************************************************
 ** Orientation 
 ****************************************************************/
extern int Orientation_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Orientation_string(const char *str, char **endptr);
extern int string_to_Orientation(const char *str, void *pValue, char **endptr);
extern int is_Orientation_allow_double_convertion();
extern int Orientation_to_double(const void *pValue, double *nValue);
extern int get_Orientation_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Orientation(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Orientation_default_value(void *pValue);
extern SimTypeUtils _Type_Orientation_Utils;


#endif /*DETERMINEBG_ORIENTATION_AND_LRBG_TYPES_CONVERTION */
