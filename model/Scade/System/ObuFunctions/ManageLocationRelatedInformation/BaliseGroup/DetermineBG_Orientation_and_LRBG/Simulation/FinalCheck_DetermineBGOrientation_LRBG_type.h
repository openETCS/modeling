#ifndef FINALCHECK_DETERMINEBGORIENTATION_LRBG_TYPES_CONVERTION
#define FINALCHECK_DETERMINEBGORIENTATION_LRBG_TYPES_CONVERTION

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
extern int _SCSIM_BoolEntity_is_active(void* pValue);

/****************************************************************
 ** Type utils declarations
 ****************************************************************/
extern TypeUtils _SCSIM_kcg_real_Utils;
extern TypeUtils _SCSIM_kcg_bool_Utils;
extern TypeUtils _SCSIM_kcg_char_Utils;
extern TypeUtils _SCSIM_kcg_int_Utils;
extern TypeUtils _SCSIM_struct__316_Utils;
extern TypeUtils _SCSIM_struct__325_Utils;
extern TypeUtils _SCSIM_struct__329_Utils;
extern TypeUtils _SCSIM_struct__334_Utils;
extern TypeUtils _SCSIM_struct__347_Utils;
extern TypeUtils _SCSIM_struct__351_Utils;
extern TypeUtils _SCSIM_array__356_Utils;
extern TypeUtils _SCSIM_struct__359_Utils;
extern TypeUtils _SCSIM_struct__364_Utils;
extern TypeUtils _SCSIM_struct__369_Utils;
extern TypeUtils _SCSIM_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils;
extern TypeUtils _SCSIM_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils;
extern TypeUtils _SCSIM_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils;
extern TypeUtils _SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;
extern TypeUtils _SCSIM_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;
extern TypeUtils _SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;
extern TypeUtils _SCSIM_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;
extern TypeUtils _SCSIM_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils;
extern TypeUtils _SCSIM_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils;
extern TypeUtils _SCSIM_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils;
extern TypeUtils _SCSIM_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils;

/****************************************************************
 ** kcg_real
 ****************************************************************/
extern const char * kcg_real_to_string(const void* pValue);
extern int check_kcg_real_string(const char* strValue);
extern int string_to_kcg_real(const char* strValue, void* pValue);
int is_kcg_real_allow_double_convertion();
extern int kcg_real_to_double(double * nValue, const void*);
extern const char * get_kcg_real_signature();
extern int compare_kcg_real_type(int*, const char*, const void*);
#define kcg_real_filter_size 0
#define get_kcg_real_filter_utils 0
#define kcg_real_filter_values 0
/****************************************************************
 ** kcg_bool
 ****************************************************************/
extern const char * kcg_bool_to_string(const void* pValue);
extern int check_kcg_bool_string(const char* strValue);
extern int string_to_kcg_bool(const char* strValue, void* pValue);
int is_kcg_bool_allow_double_convertion();
extern int kcg_bool_to_double(double * nValue, const void*);
extern const char * get_kcg_bool_signature();
extern int compare_kcg_bool_type(int*, const char*, const void*);
#define kcg_bool_filter_size 0
#define get_kcg_bool_filter_utils 0
#define kcg_bool_filter_values 0
/****************************************************************
 ** kcg_char
 ****************************************************************/
extern const char * kcg_char_to_string(const void* pValue);
extern int check_kcg_char_string(const char* strValue);
extern int string_to_kcg_char(const char* strValue, void* pValue);
int is_kcg_char_allow_double_convertion();
extern int kcg_char_to_double(double * nValue, const void*);
extern const char * get_kcg_char_signature();
extern int compare_kcg_char_type(int*, const char*, const void*);
#define kcg_char_filter_size 0
#define get_kcg_char_filter_utils 0
#define kcg_char_filter_values 0
/****************************************************************
 ** kcg_int
 ****************************************************************/
extern const char * kcg_int_to_string(const void* pValue);
extern int check_kcg_int_string(const char* strValue);
extern int string_to_kcg_int(const char* strValue, void* pValue);
int is_kcg_int_allow_double_convertion();
extern int kcg_int_to_double(double * nValue, const void*);
extern const char * get_kcg_int_signature();
extern int compare_kcg_int_type(int*, const char*, const void*);
#define kcg_int_filter_size 0
#define get_kcg_int_filter_utils 0
#define kcg_int_filter_values 0
/****************************************************************
 ** struct__316
 ****************************************************************/
extern const char * struct__316_to_string(const void* pValue);
extern int check_struct__316_string(const char* strValue);
extern int string_to_struct__316(const char* strValue, void* pValue);
int is_struct__316_allow_double_convertion();
extern const char * get_struct__316_signature();
extern int compare_struct__316_type(int*, const char*, const void*);
#define struct__316_filter_size 6
extern FilterUtils get_struct__316_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__316_filter_values[6];
/****************************************************************
 ** struct__325
 ****************************************************************/
extern const char * struct__325_to_string(const void* pValue);
extern int check_struct__325_string(const char* strValue);
extern int string_to_struct__325(const char* strValue, void* pValue);
int is_struct__325_allow_double_convertion();
extern const char * get_struct__325_signature();
extern int compare_struct__325_type(int*, const char*, const void*);
#define struct__325_filter_size 1
extern FilterUtils get_struct__325_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__325_filter_values[1];
/****************************************************************
 ** struct__329
 ****************************************************************/
extern const char * struct__329_to_string(const void* pValue);
extern int check_struct__329_string(const char* strValue);
extern int string_to_struct__329(const char* strValue, void* pValue);
int is_struct__329_allow_double_convertion();
extern const char * get_struct__329_signature();
extern int compare_struct__329_type(int*, const char*, const void*);
#define struct__329_filter_size 2
extern FilterUtils get_struct__329_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__329_filter_values[2];
/****************************************************************
 ** struct__334
 ****************************************************************/
extern const char * struct__334_to_string(const void* pValue);
extern int check_struct__334_string(const char* strValue);
extern int string_to_struct__334(const char* strValue, void* pValue);
int is_struct__334_allow_double_convertion();
extern const char * get_struct__334_signature();
extern int compare_struct__334_type(int*, const char*, const void*);
#define struct__334_filter_size 10
extern FilterUtils get_struct__334_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__334_filter_values[10];
/****************************************************************
 ** struct__347
 ****************************************************************/
extern const char * struct__347_to_string(const void* pValue);
extern int check_struct__347_string(const char* strValue);
extern int string_to_struct__347(const char* strValue, void* pValue);
int is_struct__347_allow_double_convertion();
extern const char * get_struct__347_signature();
extern int compare_struct__347_type(int*, const char*, const void*);
#define struct__347_filter_size 1
extern FilterUtils get_struct__347_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__347_filter_values[1];
/****************************************************************
 ** struct__351
 ****************************************************************/
extern const char * struct__351_to_string(const void* pValue);
extern int check_struct__351_string(const char* strValue);
extern int string_to_struct__351(const char* strValue, void* pValue);
int is_struct__351_allow_double_convertion();
extern const char * get_struct__351_signature();
extern int compare_struct__351_type(int*, const char*, const void*);
#define struct__351_filter_size 2
extern FilterUtils get_struct__351_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__351_filter_values[2];
/****************************************************************
 ** array__356
 ****************************************************************/
extern const char * array__356_to_string(const void* pValue);
extern int check_array__356_string(const char* strValue);
extern int string_to_array__356(const char* strValue, void* pValue);
int is_array__356_allow_double_convertion();
extern const char * get_array__356_signature();
extern int compare_array__356_type(int*, const char*, const void*);
#define array__356_filter_size 8
extern FilterUtils get_array__356_filter_utils(const char* strFilter, void* pValue);
#define array__356_filter_values 0
/****************************************************************
 ** struct__359
 ****************************************************************/
extern const char * struct__359_to_string(const void* pValue);
extern int check_struct__359_string(const char* strValue);
extern int string_to_struct__359(const char* strValue, void* pValue);
int is_struct__359_allow_double_convertion();
extern const char * get_struct__359_signature();
extern int compare_struct__359_type(int*, const char*, const void*);
#define struct__359_filter_size 2
extern FilterUtils get_struct__359_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__359_filter_values[2];
/****************************************************************
 ** struct__364
 ****************************************************************/
extern const char * struct__364_to_string(const void* pValue);
extern int check_struct__364_string(const char* strValue);
extern int string_to_struct__364(const char* strValue, void* pValue);
int is_struct__364_allow_double_convertion();
extern const char * get_struct__364_signature();
extern int compare_struct__364_type(int*, const char*, const void*);
#define struct__364_filter_size 2
extern FilterUtils get_struct__364_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__364_filter_values[2];
/****************************************************************
 ** struct__369
 ****************************************************************/
extern const char * struct__369_to_string(const void* pValue);
extern int check_struct__369_string(const char* strValue);
extern int string_to_struct__369(const char* strValue, void* pValue);
int is_struct__369_allow_double_convertion();
extern const char * get_struct__369_signature();
extern int compare_struct__369_type(int*, const char*, const void*);
#define struct__369_filter_size 3
extern FilterUtils get_struct__369_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__369_filter_values[3];
/****************************************************************
 ** Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets
 ****************************************************************/
extern const char * Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_string(const void* pValue);
extern int check_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_string(const char* strValue);
extern int string_to_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(const char* strValue, void* pValue);
int is_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_allow_double_convertion();
extern int Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_double(double * nValue, const void*);
#define get_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_signature get_struct__369_signature
#define compare_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_type compare_struct__369_type
#define Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_filter_size struct__369_filter_size
#define get_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_filter_utils get_struct__369_filter_utils
#define Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_filter_values struct__369_filter_values
/****************************************************************
 ** Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets
 ****************************************************************/
extern const char * Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_string(const void* pValue);
extern int check_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_string(const char* strValue);
extern int string_to_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets(const char* strValue, void* pValue);
int is_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_allow_double_convertion();
extern int Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_double(double * nValue, const void*);
#define get_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_signature get_struct__316_signature
#define compare_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_type compare_struct__316_type
#define Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_filter_size struct__316_filter_size
#define get_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_filter_utils get_struct__316_filter_utils
#define Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_filter_values struct__316_filter_values
/****************************************************************
 ** NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
#define get_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature get_kcg_int_signature
#define compare_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_type compare_kcg_int_type
#define NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size kcg_int_filter_size
#define get_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils get_kcg_int_filter_utils
#define NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values kcg_int_filter_values
/****************************************************************
 ** L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
#define get_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature get_kcg_real_signature
#define compare_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_type compare_kcg_real_type
#define L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size kcg_real_filter_size
#define get_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils get_kcg_real_filter_utils
#define L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values kcg_real_filter_values
/****************************************************************
 ** T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
#define get_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature get_kcg_real_signature
#define compare_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_type compare_kcg_real_type
#define T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size kcg_real_filter_size
#define get_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils get_kcg_real_filter_utils
#define T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values kcg_real_filter_values
/****************************************************************
 ** Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
extern const char * get_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature();
extern int compare_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int*, const char*, const void*);
#define Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size 0
#define get_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils 0
#define Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values 0
/****************************************************************
 ** M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
extern const char * get_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature();
extern int compare_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int*, const char*, const void*);
#define M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size 0
#define get_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils 0
#define M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values 0
/****************************************************************
 ** N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
extern const char * get_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature();
extern int compare_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int*, const char*, const void*);
#define N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size 0
#define get_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils 0
#define N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values 0
/****************************************************************
 ** N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
extern const char * get_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature();
extern int compare_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int*, const char*, const void*);
#define N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size 0
#define get_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils 0
#define N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values 0
/****************************************************************
 ** Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
extern const char * get_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature();
extern int compare_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int*, const char*, const void*);
#define Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size 0
#define get_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils 0
#define Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values 0
/****************************************************************
 ** Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
extern const char * get_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature();
extern int compare_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int*, const char*, const void*);
#define Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size 0
#define get_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils 0
#define Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values 0
/****************************************************************
 ** Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
extern const char * get_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature();
extern int compare_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int*, const char*, const void*);
#define Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size 0
#define get_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils 0
#define Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values 0
/****************************************************************
 ** NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
#define get_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature get_kcg_int_signature
#define compare_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_type compare_kcg_int_type
#define NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size kcg_int_filter_size
#define get_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils get_kcg_int_filter_utils
#define NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values kcg_int_filter_values
/****************************************************************
 ** NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
#define get_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature get_kcg_int_signature
#define compare_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_type compare_kcg_int_type
#define NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size kcg_int_filter_size
#define get_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils get_kcg_int_filter_utils
#define NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values kcg_int_filter_values
/****************************************************************
 ** M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
extern const char * get_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature();
extern int compare_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int*, const char*, const void*);
#define M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size 0
#define get_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils 0
#define M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values 0
/****************************************************************
 ** M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
extern const char * get_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature();
extern int compare_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int*, const char*, const void*);
#define M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size 0
#define get_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils 0
#define M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values 0
/****************************************************************
 ** M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
extern const char * get_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature();
extern int compare_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int*, const char*, const void*);
#define M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size 0
#define get_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils 0
#define M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values 0
/****************************************************************
 ** M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
extern const char * get_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature();
extern int compare_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int*, const char*, const void*);
#define M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size 0
#define get_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils 0
#define M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values 0
/****************************************************************
 ** M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
extern const char * get_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature();
extern int compare_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int*, const char*, const void*);
#define M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size 0
#define get_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils 0
#define M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values 0
/****************************************************************
 ** NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
#define get_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature get_kcg_int_signature
#define compare_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_type compare_kcg_int_type
#define NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size kcg_int_filter_size
#define get_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils get_kcg_int_filter_utils
#define NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values kcg_int_filter_values
/****************************************************************
 ** Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
extern const char * get_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature();
extern int compare_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int*, const char*, const void*);
#define Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size 0
#define get_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils 0
#define Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values 0
/****************************************************************
 ** FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage
 ****************************************************************/
extern const char * FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_string(const void* pValue);
extern int check_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_string(const char* strValue);
extern int string_to_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(const char* strValue, void* pValue);
int is_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_allow_double_convertion();
extern int FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_double(double * nValue, const void*);
#define get_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_signature get_struct__364_signature
#define compare_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_type compare_struct__364_type
#define FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_filter_size struct__364_filter_size
#define get_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_filter_utils get_struct__364_filter_utils
#define FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_filter_values struct__364_filter_values
/****************************************************************
 ** CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
extern const char * CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue);
extern int check_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue);
extern int string_to_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue);
int is_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void*);
#define get_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_struct__359_signature
#define compare_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_struct__359_type
#define CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size struct__359_filter_size
#define get_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_struct__359_filter_utils
#define CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values struct__359_filter_values
/****************************************************************
 ** HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
extern const char * HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue);
extern int check_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue);
extern int string_to_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue);
int is_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void*);
#define get_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_array__356_signature
#define compare_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_array__356_type
#define HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size array__356_filter_size
#define get_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_array__356_filter_utils
#define HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values array__356_filter_values
/****************************************************************
 ** HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
extern const char * HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue);
extern int check_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue);
extern int string_to_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue);
int is_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void*);
#define get_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_struct__351_signature
#define compare_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_struct__351_type
#define HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size struct__351_filter_size
#define get_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_struct__351_filter_utils
#define HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values struct__351_filter_values
/****************************************************************
 ** Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
extern const char * Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue);
extern int check_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue);
extern int string_to_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue);
int is_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void*);
#define get_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_struct__347_signature
#define compare_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_struct__347_type
#define Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size struct__347_filter_size
#define get_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_struct__347_filter_utils
#define Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values struct__347_filter_values
/****************************************************************
 ** Header_DetermineBGOrientation_LRBG_DataDctionary_BTM
 ****************************************************************/
extern const char * Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string(const void* pValue);
extern int check_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_string(const char* strValue);
extern int string_to_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(const char* strValue, void* pValue);
int is_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_allow_double_convertion();
extern int Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double(double * nValue, const void*);
#define get_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature get_struct__334_signature
#define compare_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_type compare_struct__334_type
#define Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_size struct__334_filter_size
#define get_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_utils get_struct__334_filter_utils
#define Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_values struct__334_filter_values
/****************************************************************
 ** AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM
 ****************************************************************/
extern const char * AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string(const void* pValue);
extern int check_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_string(const char* strValue);
extern int string_to_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM(const char* strValue, void* pValue);
int is_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_allow_double_convertion();
extern int AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double(double * nValue, const void*);
extern const char * get_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature();
extern int compare_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_type(int*, const char*, const void*);
#define AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_size 0
#define get_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_utils 0
#define AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_values 0
/****************************************************************
 ** TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo
 ****************************************************************/
extern const char * TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_to_string(const void* pValue);
extern int check_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_string(const char* strValue);
extern int string_to_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo(const char* strValue, void* pValue);
int is_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_allow_double_convertion();
extern int TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_to_double(double * nValue, const void*);
#define get_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_signature get_struct__329_signature
#define compare_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_type compare_struct__329_type
#define TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_filter_size struct__329_filter_size
#define get_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_filter_utils get_struct__329_filter_utils
#define TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_filter_values struct__329_filter_values
/****************************************************************
 ** RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport
 ****************************************************************/
extern const char * RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_to_string(const void* pValue);
extern int check_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_string(const char* strValue);
extern int string_to_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport(const char* strValue, void* pValue);
int is_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_allow_double_convertion();
extern int RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_to_double(double * nValue, const void*);
#define get_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_signature get_struct__325_signature
#define compare_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_type compare_struct__325_type
#define RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_filter_size struct__325_filter_size
#define get_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_filter_utils get_struct__325_filter_utils
#define RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_filter_values struct__325_filter_values

#endif /*FINALCHECK_DETERMINEBGORIENTATION_LRBG_TYPES_CONVERTION */
