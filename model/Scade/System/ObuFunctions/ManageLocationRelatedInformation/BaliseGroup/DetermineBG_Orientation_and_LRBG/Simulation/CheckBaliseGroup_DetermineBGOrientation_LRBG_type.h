#ifndef CHECKBALISEGROUP_DETERMINEBGORIENTATION_LRBG_TYPES_CONVERTION
#define CHECKBALISEGROUP_DETERMINEBGORIENTATION_LRBG_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__505_Utils;
extern TypeUtils _SCSIM_struct__510_Utils;
extern TypeUtils _SCSIM_struct__523_Utils;
extern TypeUtils _SCSIM_struct__527_Utils;
extern TypeUtils _SCSIM_array__532_Utils;
extern TypeUtils _SCSIM_struct__535_Utils;
extern TypeUtils _SCSIM_struct__540_Utils;
extern TypeUtils _SCSIM_struct__545_Utils;
extern TypeUtils _SCSIM_struct__549_Utils;
extern TypeUtils _SCSIM_array__554_Utils;
extern TypeUtils _SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils;
extern TypeUtils _SCSIM_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils;
extern TypeUtils _SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils;
extern TypeUtils _SCSIM_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils;
extern TypeUtils _SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils;
extern TypeUtils _SCSIM_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
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
extern TypeUtils _SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils;
extern TypeUtils _SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;
extern TypeUtils _SCSIM_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;
extern TypeUtils _SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;
extern TypeUtils _SCSIM_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils;
extern TypeUtils _SCSIM_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils;
extern TypeUtils _SCSIM_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils;
extern TypeUtils _SCSIM_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils;

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
 ** struct__505
 ****************************************************************/
extern const char * struct__505_to_string(const void* pValue);
extern int check_struct__505_string(const char* strValue);
extern int string_to_struct__505(const char* strValue, void* pValue);
int is_struct__505_allow_double_convertion();
extern const char * get_struct__505_signature();
extern int compare_struct__505_type(int*, const char*, const void*);
#define struct__505_filter_size 2
extern FilterUtils get_struct__505_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__505_filter_values[2];
/****************************************************************
 ** struct__510
 ****************************************************************/
extern const char * struct__510_to_string(const void* pValue);
extern int check_struct__510_string(const char* strValue);
extern int string_to_struct__510(const char* strValue, void* pValue);
int is_struct__510_allow_double_convertion();
extern const char * get_struct__510_signature();
extern int compare_struct__510_type(int*, const char*, const void*);
#define struct__510_filter_size 10
extern FilterUtils get_struct__510_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__510_filter_values[10];
/****************************************************************
 ** struct__523
 ****************************************************************/
extern const char * struct__523_to_string(const void* pValue);
extern int check_struct__523_string(const char* strValue);
extern int string_to_struct__523(const char* strValue, void* pValue);
int is_struct__523_allow_double_convertion();
extern const char * get_struct__523_signature();
extern int compare_struct__523_type(int*, const char*, const void*);
#define struct__523_filter_size 1
extern FilterUtils get_struct__523_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__523_filter_values[1];
/****************************************************************
 ** struct__527
 ****************************************************************/
extern const char * struct__527_to_string(const void* pValue);
extern int check_struct__527_string(const char* strValue);
extern int string_to_struct__527(const char* strValue, void* pValue);
int is_struct__527_allow_double_convertion();
extern const char * get_struct__527_signature();
extern int compare_struct__527_type(int*, const char*, const void*);
#define struct__527_filter_size 2
extern FilterUtils get_struct__527_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__527_filter_values[2];
/****************************************************************
 ** array__532
 ****************************************************************/
extern const char * array__532_to_string(const void* pValue);
extern int check_array__532_string(const char* strValue);
extern int string_to_array__532(const char* strValue, void* pValue);
int is_array__532_allow_double_convertion();
extern const char * get_array__532_signature();
extern int compare_array__532_type(int*, const char*, const void*);
#define array__532_filter_size 8
extern FilterUtils get_array__532_filter_utils(const char* strFilter, void* pValue);
#define array__532_filter_values 0
/****************************************************************
 ** struct__535
 ****************************************************************/
extern const char * struct__535_to_string(const void* pValue);
extern int check_struct__535_string(const char* strValue);
extern int string_to_struct__535(const char* strValue, void* pValue);
int is_struct__535_allow_double_convertion();
extern const char * get_struct__535_signature();
extern int compare_struct__535_type(int*, const char*, const void*);
#define struct__535_filter_size 2
extern FilterUtils get_struct__535_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__535_filter_values[2];
/****************************************************************
 ** struct__540
 ****************************************************************/
extern const char * struct__540_to_string(const void* pValue);
extern int check_struct__540_string(const char* strValue);
extern int string_to_struct__540(const char* strValue, void* pValue);
int is_struct__540_allow_double_convertion();
extern const char * get_struct__540_signature();
extern int compare_struct__540_type(int*, const char*, const void*);
#define struct__540_filter_size 2
extern FilterUtils get_struct__540_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__540_filter_values[2];
/****************************************************************
 ** struct__545
 ****************************************************************/
extern const char * struct__545_to_string(const void* pValue);
extern int check_struct__545_string(const char* strValue);
extern int string_to_struct__545(const char* strValue, void* pValue);
int is_struct__545_allow_double_convertion();
extern const char * get_struct__545_signature();
extern int compare_struct__545_type(int*, const char*, const void*);
#define struct__545_filter_size 1
extern FilterUtils get_struct__545_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__545_filter_values[1];
/****************************************************************
 ** struct__549
 ****************************************************************/
extern const char * struct__549_to_string(const void* pValue);
extern int check_struct__549_string(const char* strValue);
extern int string_to_struct__549(const char* strValue, void* pValue);
int is_struct__549_allow_double_convertion();
extern const char * get_struct__549_signature();
extern int compare_struct__549_type(int*, const char*, const void*);
#define struct__549_filter_size 2
extern FilterUtils get_struct__549_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__549_filter_values[2];
/****************************************************************
 ** array__554
 ****************************************************************/
extern const char * array__554_to_string(const void* pValue);
extern int check_array__554_string(const char* strValue);
extern int string_to_array__554(const char* strValue, void* pValue);
int is_array__554_allow_double_convertion();
extern const char * get_array__554_signature();
extern int compare_array__554_type(int*, const char*, const void*);
#define array__554_filter_size 20
extern FilterUtils get_array__554_filter_utils(const char* strFilter, void* pValue);
#define array__554_filter_values 0
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
#define get_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_signature get_array__554_signature
#define compare_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_type compare_array__554_type
#define ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_filter_size array__554_filter_size
#define get_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_filter_utils get_array__554_filter_utils
#define ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_filter_values array__554_filter_values
/****************************************************************
 ** CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG
 ****************************************************************/
extern const char * CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string(const void* pValue);
extern int check_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string(const char* strValue);
extern int string_to_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(const char* strValue, void* pValue);
int is_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_allow_double_convertion();
extern int CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double(double * nValue, const void*);
#define get_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature get_struct__549_signature
#define compare_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_type compare_struct__549_type
#define CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_size struct__549_filter_size
#define get_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_utils get_struct__549_filter_utils
#define CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_values struct__549_filter_values
/****************************************************************
 ** Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG
 ****************************************************************/
extern const char * Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string(const void* pValue);
extern int check_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string(const char* strValue);
extern int string_to_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(const char* strValue, void* pValue);
int is_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_allow_double_convertion();
extern int Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double(double * nValue, const void*);
#define get_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature get_struct__545_signature
#define compare_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_type compare_struct__545_type
#define Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_size struct__545_filter_size
#define get_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_utils get_struct__545_filter_utils
#define Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_values struct__545_filter_values
/****************************************************************
 ** FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage
 ****************************************************************/
extern const char * FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_string(const void* pValue);
extern int check_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_string(const char* strValue);
extern int string_to_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(const char* strValue, void* pValue);
int is_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_allow_double_convertion();
extern int FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_double(double * nValue, const void*);
#define get_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_signature get_struct__540_signature
#define compare_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_type compare_struct__540_type
#define FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_filter_size struct__540_filter_size
#define get_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_filter_utils get_struct__540_filter_utils
#define FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_filter_values struct__540_filter_values
/****************************************************************
 ** Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable
 ****************************************************************/
extern const char * Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_string(const void* pValue);
extern int check_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_string(const char* strValue);
extern int string_to_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable(const char* strValue, void* pValue);
int is_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_allow_double_convertion();
extern int Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_to_double(double * nValue, const void*);
extern const char * get_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_signature();
extern int compare_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_type(int*, const char*, const void*);
#define Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_size 0
#define get_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_utils 0
#define Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_filter_values 0
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
 ** CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
extern const char * CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue);
extern int check_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue);
extern int string_to_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue);
int is_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void*);
#define get_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_struct__535_signature
#define compare_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_struct__535_type
#define CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size struct__535_filter_size
#define get_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_struct__535_filter_utils
#define CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values struct__535_filter_values
/****************************************************************
 ** HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
extern const char * HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue);
extern int check_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue);
extern int string_to_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue);
int is_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void*);
#define get_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_array__532_signature
#define compare_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_array__532_type
#define HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size array__532_filter_size
#define get_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_array__532_filter_utils
#define HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values array__532_filter_values
/****************************************************************
 ** HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
extern const char * HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue);
extern int check_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue);
extern int string_to_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue);
int is_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void*);
#define get_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_struct__527_signature
#define compare_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_struct__527_type
#define HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size struct__527_filter_size
#define get_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_struct__527_filter_utils
#define HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values struct__527_filter_values
/****************************************************************
 ** Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
extern const char * Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue);
extern int check_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue);
extern int string_to_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue);
int is_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void*);
#define get_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_struct__523_signature
#define compare_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_struct__523_type
#define Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size struct__523_filter_size
#define get_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_struct__523_filter_utils
#define Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values struct__523_filter_values
/****************************************************************
 ** Header_DetermineBGOrientation_LRBG_DataDctionary_BTM
 ****************************************************************/
extern const char * Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string(const void* pValue);
extern int check_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_string(const char* strValue);
extern int string_to_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(const char* strValue, void* pValue);
int is_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_allow_double_convertion();
extern int Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double(double * nValue, const void*);
#define get_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature get_struct__510_signature
#define compare_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_type compare_struct__510_type
#define Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_size struct__510_filter_size
#define get_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_utils get_struct__510_filter_utils
#define Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_values struct__510_filter_values
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
#define get_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_signature get_struct__505_signature
#define compare_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_type compare_struct__505_type
#define TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_filter_size struct__505_filter_size
#define get_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_filter_utils get_struct__505_filter_utils
#define TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_filter_values struct__505_filter_values

#endif /*CHECKBALISEGROUP_DETERMINEBGORIENTATION_LRBG_TYPES_CONVERTION */
