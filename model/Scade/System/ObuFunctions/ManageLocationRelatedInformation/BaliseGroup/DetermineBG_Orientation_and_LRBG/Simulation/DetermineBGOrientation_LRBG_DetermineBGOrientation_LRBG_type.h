#ifndef DETERMINEBGORIENTATION_LRBG_DETERMINEBGORIENTATION_LRBG_TYPES_CONVERTION
#define DETERMINEBGORIENTATION_LRBG_DETERMINEBGORIENTATION_LRBG_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__755_Utils;
extern TypeUtils _SCSIM_struct__764_Utils;
extern TypeUtils _SCSIM_struct__768_Utils;
extern TypeUtils _SCSIM_struct__774_Utils;
extern TypeUtils _SCSIM_struct__779_Utils;
extern TypeUtils _SCSIM_struct__792_Utils;
extern TypeUtils _SCSIM_struct__796_Utils;
extern TypeUtils _SCSIM_array__801_Utils;
extern TypeUtils _SCSIM_struct__804_Utils;
extern TypeUtils _SCSIM_struct__809_Utils;
extern TypeUtils _SCSIM_struct__814_Utils;
extern TypeUtils _SCSIM_struct__818_Utils;
extern TypeUtils _SCSIM_array__823_Utils;
extern TypeUtils _SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils;
extern TypeUtils _SCSIM_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils;
extern TypeUtils _SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils;
extern TypeUtils _SCSIM_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils;
extern TypeUtils _SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils;
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
extern TypeUtils _SCSIM_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;
extern TypeUtils _SCSIM_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;
extern TypeUtils _SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;
extern TypeUtils _SCSIM_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;
extern TypeUtils _SCSIM_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils;
extern TypeUtils _SCSIM_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils;
extern TypeUtils _SCSIM_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils;
extern TypeUtils _SCSIM_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils;
extern TypeUtils _SCSIM_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils;
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
 ** struct__755
 ****************************************************************/
extern const char * struct__755_to_string(const void* pValue);
extern int check_struct__755_string(const char* strValue);
extern int string_to_struct__755(const char* strValue, void* pValue);
int is_struct__755_allow_double_convertion();
extern const char * get_struct__755_signature();
extern int compare_struct__755_type(int*, const char*, const void*);
#define struct__755_filter_size 6
extern FilterUtils get_struct__755_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__755_filter_values[6];
/****************************************************************
 ** struct__764
 ****************************************************************/
extern const char * struct__764_to_string(const void* pValue);
extern int check_struct__764_string(const char* strValue);
extern int string_to_struct__764(const char* strValue, void* pValue);
int is_struct__764_allow_double_convertion();
extern const char * get_struct__764_signature();
extern int compare_struct__764_type(int*, const char*, const void*);
#define struct__764_filter_size 1
extern FilterUtils get_struct__764_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__764_filter_values[1];
/****************************************************************
 ** struct__768
 ****************************************************************/
extern const char * struct__768_to_string(const void* pValue);
extern int check_struct__768_string(const char* strValue);
extern int string_to_struct__768(const char* strValue, void* pValue);
int is_struct__768_allow_double_convertion();
extern const char * get_struct__768_signature();
extern int compare_struct__768_type(int*, const char*, const void*);
#define struct__768_filter_size 3
extern FilterUtils get_struct__768_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__768_filter_values[3];
/****************************************************************
 ** struct__774
 ****************************************************************/
extern const char * struct__774_to_string(const void* pValue);
extern int check_struct__774_string(const char* strValue);
extern int string_to_struct__774(const char* strValue, void* pValue);
int is_struct__774_allow_double_convertion();
extern const char * get_struct__774_signature();
extern int compare_struct__774_type(int*, const char*, const void*);
#define struct__774_filter_size 2
extern FilterUtils get_struct__774_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__774_filter_values[2];
/****************************************************************
 ** struct__779
 ****************************************************************/
extern const char * struct__779_to_string(const void* pValue);
extern int check_struct__779_string(const char* strValue);
extern int string_to_struct__779(const char* strValue, void* pValue);
int is_struct__779_allow_double_convertion();
extern const char * get_struct__779_signature();
extern int compare_struct__779_type(int*, const char*, const void*);
#define struct__779_filter_size 10
extern FilterUtils get_struct__779_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__779_filter_values[10];
/****************************************************************
 ** struct__792
 ****************************************************************/
extern const char * struct__792_to_string(const void* pValue);
extern int check_struct__792_string(const char* strValue);
extern int string_to_struct__792(const char* strValue, void* pValue);
int is_struct__792_allow_double_convertion();
extern const char * get_struct__792_signature();
extern int compare_struct__792_type(int*, const char*, const void*);
#define struct__792_filter_size 1
extern FilterUtils get_struct__792_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__792_filter_values[1];
/****************************************************************
 ** struct__796
 ****************************************************************/
extern const char * struct__796_to_string(const void* pValue);
extern int check_struct__796_string(const char* strValue);
extern int string_to_struct__796(const char* strValue, void* pValue);
int is_struct__796_allow_double_convertion();
extern const char * get_struct__796_signature();
extern int compare_struct__796_type(int*, const char*, const void*);
#define struct__796_filter_size 2
extern FilterUtils get_struct__796_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__796_filter_values[2];
/****************************************************************
 ** array__801
 ****************************************************************/
extern const char * array__801_to_string(const void* pValue);
extern int check_array__801_string(const char* strValue);
extern int string_to_array__801(const char* strValue, void* pValue);
int is_array__801_allow_double_convertion();
extern const char * get_array__801_signature();
extern int compare_array__801_type(int*, const char*, const void*);
#define array__801_filter_size 8
extern FilterUtils get_array__801_filter_utils(const char* strFilter, void* pValue);
#define array__801_filter_values 0
/****************************************************************
 ** struct__804
 ****************************************************************/
extern const char * struct__804_to_string(const void* pValue);
extern int check_struct__804_string(const char* strValue);
extern int string_to_struct__804(const char* strValue, void* pValue);
int is_struct__804_allow_double_convertion();
extern const char * get_struct__804_signature();
extern int compare_struct__804_type(int*, const char*, const void*);
#define struct__804_filter_size 2
extern FilterUtils get_struct__804_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__804_filter_values[2];
/****************************************************************
 ** struct__809
 ****************************************************************/
extern const char * struct__809_to_string(const void* pValue);
extern int check_struct__809_string(const char* strValue);
extern int string_to_struct__809(const char* strValue, void* pValue);
int is_struct__809_allow_double_convertion();
extern const char * get_struct__809_signature();
extern int compare_struct__809_type(int*, const char*, const void*);
#define struct__809_filter_size 2
extern FilterUtils get_struct__809_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__809_filter_values[2];
/****************************************************************
 ** struct__814
 ****************************************************************/
extern const char * struct__814_to_string(const void* pValue);
extern int check_struct__814_string(const char* strValue);
extern int string_to_struct__814(const char* strValue, void* pValue);
int is_struct__814_allow_double_convertion();
extern const char * get_struct__814_signature();
extern int compare_struct__814_type(int*, const char*, const void*);
#define struct__814_filter_size 1
extern FilterUtils get_struct__814_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__814_filter_values[1];
/****************************************************************
 ** struct__818
 ****************************************************************/
extern const char * struct__818_to_string(const void* pValue);
extern int check_struct__818_string(const char* strValue);
extern int string_to_struct__818(const char* strValue, void* pValue);
int is_struct__818_allow_double_convertion();
extern const char * get_struct__818_signature();
extern int compare_struct__818_type(int*, const char*, const void*);
#define struct__818_filter_size 2
extern FilterUtils get_struct__818_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__818_filter_values[2];
/****************************************************************
 ** array__823
 ****************************************************************/
extern const char * array__823_to_string(const void* pValue);
extern int check_array__823_string(const char* strValue);
extern int string_to_array__823(const char* strValue, void* pValue);
int is_array__823_allow_double_convertion();
extern const char * get_array__823_signature();
extern int compare_array__823_type(int*, const char*, const void*);
#define array__823_filter_size 20
extern FilterUtils get_array__823_filter_utils(const char* strFilter, void* pValue);
#define array__823_filter_values 0
/****************************************************************
 ** Orientation_DetermineBGOrientation_LRBG_DataDctionary
 ****************************************************************/
extern const char * Orientation_DetermineBGOrientation_LRBG_DataDctionary_to_string(const void* pValue);
extern int check_Orientation_DetermineBGOrientation_LRBG_DataDctionary_string(const char* strValue);
extern int string_to_Orientation_DetermineBGOrientation_LRBG_DataDctionary(const char* strValue, void* pValue);
int is_Orientation_DetermineBGOrientation_LRBG_DataDctionary_allow_double_convertion();
extern int Orientation_DetermineBGOrientation_LRBG_DataDctionary_to_double(double * nValue, const void*);
extern const char * get_Orientation_DetermineBGOrientation_LRBG_DataDctionary_signature();
extern int compare_Orientation_DetermineBGOrientation_LRBG_DataDctionary_type(int*, const char*, const void*);
#define Orientation_DetermineBGOrientation_LRBG_DataDctionary_filter_size 0
#define get_Orientation_DetermineBGOrientation_LRBG_DataDctionary_filter_utils 0
#define Orientation_DetermineBGOrientation_LRBG_DataDctionary_filter_values 0
/****************************************************************
 ** ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs
 ****************************************************************/
extern const char * ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_string(const void* pValue);
extern int check_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_string(const char* strValue);
extern int string_to_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs(const char* strValue, void* pValue);
int is_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_allow_double_convertion();
extern int ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_double(double * nValue, const void*);
#define get_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_signature get_array__823_signature
#define compare_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_type compare_array__823_type
#define ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_filter_size array__823_filter_size
#define get_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_filter_utils get_array__823_filter_utils
#define ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_filter_values array__823_filter_values
/****************************************************************
 ** CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG
 ****************************************************************/
extern const char * CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string(const void* pValue);
extern int check_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string(const char* strValue);
extern int string_to_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(const char* strValue, void* pValue);
int is_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_allow_double_convertion();
extern int CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double(double * nValue, const void*);
#define get_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature get_struct__818_signature
#define compare_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_type compare_struct__818_type
#define CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_size struct__818_filter_size
#define get_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_utils get_struct__818_filter_utils
#define CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_values struct__818_filter_values
/****************************************************************
 ** Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG
 ****************************************************************/
extern const char * Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string(const void* pValue);
extern int check_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string(const char* strValue);
extern int string_to_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(const char* strValue, void* pValue);
int is_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_allow_double_convertion();
extern int Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double(double * nValue, const void*);
#define get_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature get_struct__814_signature
#define compare_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_type compare_struct__814_type
#define Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_size struct__814_filter_size
#define get_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_utils get_struct__814_filter_utils
#define Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_values struct__814_filter_values
/****************************************************************
 ** FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage
 ****************************************************************/
extern const char * FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_string(const void* pValue);
extern int check_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_string(const char* strValue);
extern int string_to_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(const char* strValue, void* pValue);
int is_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_allow_double_convertion();
extern int FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_double(double * nValue, const void*);
#define get_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_signature get_struct__809_signature
#define compare_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_type compare_struct__809_type
#define FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_filter_size struct__809_filter_size
#define get_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_filter_utils get_struct__809_filter_utils
#define FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_filter_values struct__809_filter_values
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
 ** CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
extern const char * CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue);
extern int check_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue);
extern int string_to_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue);
int is_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void*);
#define get_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_struct__804_signature
#define compare_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_struct__804_type
#define CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size struct__804_filter_size
#define get_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_struct__804_filter_utils
#define CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values struct__804_filter_values
/****************************************************************
 ** HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
extern const char * HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue);
extern int check_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue);
extern int string_to_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue);
int is_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void*);
#define get_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_array__801_signature
#define compare_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_array__801_type
#define HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size array__801_filter_size
#define get_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_array__801_filter_utils
#define HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values array__801_filter_values
/****************************************************************
 ** HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
extern const char * HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue);
extern int check_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue);
extern int string_to_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue);
int is_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void*);
#define get_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_struct__796_signature
#define compare_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_struct__796_type
#define HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size struct__796_filter_size
#define get_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_struct__796_filter_utils
#define HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values struct__796_filter_values
/****************************************************************
 ** Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
extern const char * Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue);
extern int check_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue);
extern int string_to_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue);
int is_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void*);
#define get_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_struct__792_signature
#define compare_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_struct__792_type
#define Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size struct__792_filter_size
#define get_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_struct__792_filter_utils
#define Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values struct__792_filter_values
/****************************************************************
 ** Header_DetermineBGOrientation_LRBG_DataDctionary_BTM
 ****************************************************************/
extern const char * Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string(const void* pValue);
extern int check_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_string(const char* strValue);
extern int string_to_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(const char* strValue, void* pValue);
int is_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_allow_double_convertion();
extern int Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double(double * nValue, const void*);
#define get_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature get_struct__779_signature
#define compare_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_type compare_struct__779_type
#define Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_size struct__779_filter_size
#define get_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_utils get_struct__779_filter_utils
#define Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_values struct__779_filter_values
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
#define get_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_signature get_struct__774_signature
#define compare_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_type compare_struct__774_type
#define TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_filter_size struct__774_filter_size
#define get_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_filter_utils get_struct__774_filter_utils
#define TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_filter_values struct__774_filter_values
/****************************************************************
 ** Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets
 ****************************************************************/
extern const char * Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_string(const void* pValue);
extern int check_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_string(const char* strValue);
extern int string_to_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(const char* strValue, void* pValue);
int is_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_allow_double_convertion();
extern int Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_double(double * nValue, const void*);
#define get_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_signature get_struct__768_signature
#define compare_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_type compare_struct__768_type
#define Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_filter_size struct__768_filter_size
#define get_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_filter_utils get_struct__768_filter_utils
#define Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_filter_values struct__768_filter_values
/****************************************************************
 ** Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets
 ****************************************************************/
extern const char * Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_string(const void* pValue);
extern int check_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_string(const char* strValue);
extern int string_to_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets(const char* strValue, void* pValue);
int is_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_allow_double_convertion();
extern int Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_to_double(double * nValue, const void*);
#define get_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_signature get_struct__755_signature
#define compare_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_type compare_struct__755_type
#define Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_filter_size struct__755_filter_size
#define get_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_filter_utils get_struct__755_filter_utils
#define Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_filter_values struct__755_filter_values
/****************************************************************
 ** RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport
 ****************************************************************/
extern const char * RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_to_string(const void* pValue);
extern int check_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_string(const char* strValue);
extern int string_to_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport(const char* strValue, void* pValue);
int is_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_allow_double_convertion();
extern int RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_to_double(double * nValue, const void*);
#define get_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_signature get_struct__764_signature
#define compare_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_type compare_struct__764_type
#define RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_filter_size struct__764_filter_size
#define get_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_filter_utils get_struct__764_filter_utils
#define RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_filter_values struct__764_filter_values

#endif /*DETERMINEBGORIENTATION_LRBG_DETERMINEBGORIENTATION_LRBG_TYPES_CONVERTION */
