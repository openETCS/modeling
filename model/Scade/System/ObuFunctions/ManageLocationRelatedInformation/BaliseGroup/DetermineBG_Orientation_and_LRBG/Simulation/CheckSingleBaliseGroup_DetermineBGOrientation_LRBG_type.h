#ifndef CHECKSINGLEBALISEGROUP_DETERMINEBGORIENTATION_LRBG_TYPES_CONVERTION
#define CHECKSINGLEBALISEGROUP_DETERMINEBGORIENTATION_LRBG_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__464_Utils;
extern TypeUtils _SCSIM_struct__469_Utils;
extern TypeUtils _SCSIM_struct__482_Utils;
extern TypeUtils _SCSIM_struct__486_Utils;
extern TypeUtils _SCSIM_array__491_Utils;
extern TypeUtils _SCSIM_struct__494_Utils;
extern TypeUtils _SCSIM_struct__499_Utils;
extern TypeUtils _SCSIM_struct__504_Utils;
extern TypeUtils _SCSIM_struct__508_Utils;
extern TypeUtils _SCSIM_array__513_Utils;
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
 ** struct__464
 ****************************************************************/
extern const char * struct__464_to_string(const void* pValue);
extern int check_struct__464_string(const char* strValue);
extern int string_to_struct__464(const char* strValue, void* pValue);
int is_struct__464_allow_double_convertion();
extern const char * get_struct__464_signature();
extern int compare_struct__464_type(int*, const char*, const void*);
#define struct__464_filter_size 2
extern FilterUtils get_struct__464_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__464_filter_values[2];
/****************************************************************
 ** struct__469
 ****************************************************************/
extern const char * struct__469_to_string(const void* pValue);
extern int check_struct__469_string(const char* strValue);
extern int string_to_struct__469(const char* strValue, void* pValue);
int is_struct__469_allow_double_convertion();
extern const char * get_struct__469_signature();
extern int compare_struct__469_type(int*, const char*, const void*);
#define struct__469_filter_size 10
extern FilterUtils get_struct__469_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__469_filter_values[10];
/****************************************************************
 ** struct__482
 ****************************************************************/
extern const char * struct__482_to_string(const void* pValue);
extern int check_struct__482_string(const char* strValue);
extern int string_to_struct__482(const char* strValue, void* pValue);
int is_struct__482_allow_double_convertion();
extern const char * get_struct__482_signature();
extern int compare_struct__482_type(int*, const char*, const void*);
#define struct__482_filter_size 1
extern FilterUtils get_struct__482_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__482_filter_values[1];
/****************************************************************
 ** struct__486
 ****************************************************************/
extern const char * struct__486_to_string(const void* pValue);
extern int check_struct__486_string(const char* strValue);
extern int string_to_struct__486(const char* strValue, void* pValue);
int is_struct__486_allow_double_convertion();
extern const char * get_struct__486_signature();
extern int compare_struct__486_type(int*, const char*, const void*);
#define struct__486_filter_size 2
extern FilterUtils get_struct__486_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__486_filter_values[2];
/****************************************************************
 ** array__491
 ****************************************************************/
extern const char * array__491_to_string(const void* pValue);
extern int check_array__491_string(const char* strValue);
extern int string_to_array__491(const char* strValue, void* pValue);
int is_array__491_allow_double_convertion();
extern const char * get_array__491_signature();
extern int compare_array__491_type(int*, const char*, const void*);
#define array__491_filter_size 8
extern FilterUtils get_array__491_filter_utils(const char* strFilter, void* pValue);
#define array__491_filter_values 0
/****************************************************************
 ** struct__494
 ****************************************************************/
extern const char * struct__494_to_string(const void* pValue);
extern int check_struct__494_string(const char* strValue);
extern int string_to_struct__494(const char* strValue, void* pValue);
int is_struct__494_allow_double_convertion();
extern const char * get_struct__494_signature();
extern int compare_struct__494_type(int*, const char*, const void*);
#define struct__494_filter_size 2
extern FilterUtils get_struct__494_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__494_filter_values[2];
/****************************************************************
 ** struct__499
 ****************************************************************/
extern const char * struct__499_to_string(const void* pValue);
extern int check_struct__499_string(const char* strValue);
extern int string_to_struct__499(const char* strValue, void* pValue);
int is_struct__499_allow_double_convertion();
extern const char * get_struct__499_signature();
extern int compare_struct__499_type(int*, const char*, const void*);
#define struct__499_filter_size 2
extern FilterUtils get_struct__499_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__499_filter_values[2];
/****************************************************************
 ** struct__504
 ****************************************************************/
extern const char * struct__504_to_string(const void* pValue);
extern int check_struct__504_string(const char* strValue);
extern int string_to_struct__504(const char* strValue, void* pValue);
int is_struct__504_allow_double_convertion();
extern const char * get_struct__504_signature();
extern int compare_struct__504_type(int*, const char*, const void*);
#define struct__504_filter_size 1
extern FilterUtils get_struct__504_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__504_filter_values[1];
/****************************************************************
 ** struct__508
 ****************************************************************/
extern const char * struct__508_to_string(const void* pValue);
extern int check_struct__508_string(const char* strValue);
extern int string_to_struct__508(const char* strValue, void* pValue);
int is_struct__508_allow_double_convertion();
extern const char * get_struct__508_signature();
extern int compare_struct__508_type(int*, const char*, const void*);
#define struct__508_filter_size 2
extern FilterUtils get_struct__508_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__508_filter_values[2];
/****************************************************************
 ** array__513
 ****************************************************************/
extern const char * array__513_to_string(const void* pValue);
extern int check_array__513_string(const char* strValue);
extern int string_to_array__513(const char* strValue, void* pValue);
int is_array__513_allow_double_convertion();
extern const char * get_array__513_signature();
extern int compare_array__513_type(int*, const char*, const void*);
#define array__513_filter_size 20
extern FilterUtils get_array__513_filter_utils(const char* strFilter, void* pValue);
#define array__513_filter_values 0
/****************************************************************
 ** ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs
 ****************************************************************/
extern const char * ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_string(const void* pValue);
extern int check_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_string(const char* strValue);
extern int string_to_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs(const char* strValue, void* pValue);
int is_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_allow_double_convertion();
extern int ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_to_double(double * nValue, const void*);
#define get_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_signature get_array__513_signature
#define compare_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_type compare_array__513_type
#define ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_filter_size array__513_filter_size
#define get_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_filter_utils get_array__513_filter_utils
#define ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_filter_values array__513_filter_values
/****************************************************************
 ** CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG
 ****************************************************************/
extern const char * CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string(const void* pValue);
extern int check_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string(const char* strValue);
extern int string_to_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(const char* strValue, void* pValue);
int is_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_allow_double_convertion();
extern int CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double(double * nValue, const void*);
#define get_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature get_struct__508_signature
#define compare_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_type compare_struct__508_type
#define CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_size struct__508_filter_size
#define get_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_utils get_struct__508_filter_utils
#define CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_values struct__508_filter_values
/****************************************************************
 ** Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG
 ****************************************************************/
extern const char * Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_string(const void* pValue);
extern int check_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_string(const char* strValue);
extern int string_to_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(const char* strValue, void* pValue);
int is_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_allow_double_convertion();
extern int Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_to_double(double * nValue, const void*);
#define get_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_signature get_struct__504_signature
#define compare_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_type compare_struct__504_type
#define Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_size struct__504_filter_size
#define get_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_utils get_struct__504_filter_utils
#define Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_filter_values struct__504_filter_values
/****************************************************************
 ** FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage
 ****************************************************************/
extern const char * FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_string(const void* pValue);
extern int check_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_string(const char* strValue);
extern int string_to_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(const char* strValue, void* pValue);
int is_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_allow_double_convertion();
extern int FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_to_double(double * nValue, const void*);
#define get_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_signature get_struct__499_signature
#define compare_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_type compare_struct__499_type
#define FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_filter_size struct__499_filter_size
#define get_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_filter_utils get_struct__499_filter_utils
#define FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_filter_values struct__499_filter_values
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
#define get_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_struct__494_signature
#define compare_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_struct__494_type
#define CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size struct__494_filter_size
#define get_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_struct__494_filter_utils
#define CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values struct__494_filter_values
/****************************************************************
 ** HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
extern const char * HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue);
extern int check_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue);
extern int string_to_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue);
int is_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void*);
#define get_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_array__491_signature
#define compare_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_array__491_type
#define HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size array__491_filter_size
#define get_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_array__491_filter_utils
#define HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values array__491_filter_values
/****************************************************************
 ** HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
extern const char * HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue);
extern int check_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue);
extern int string_to_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue);
int is_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void*);
#define get_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_struct__486_signature
#define compare_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_struct__486_type
#define HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size struct__486_filter_size
#define get_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_struct__486_filter_utils
#define HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values struct__486_filter_values
/****************************************************************
 ** Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage
 ****************************************************************/
extern const char * Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_string(const void* pValue);
extern int check_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_string(const char* strValue);
extern int string_to_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(const char* strValue, void* pValue);
int is_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_allow_double_convertion();
extern int Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_to_double(double * nValue, const void*);
#define get_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_signature get_struct__482_signature
#define compare_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_type compare_struct__482_type
#define Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_size struct__482_filter_size
#define get_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_utils get_struct__482_filter_utils
#define Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_filter_values struct__482_filter_values
/****************************************************************
 ** Header_DetermineBGOrientation_LRBG_DataDctionary_BTM
 ****************************************************************/
extern const char * Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_string(const void* pValue);
extern int check_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_string(const char* strValue);
extern int string_to_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(const char* strValue, void* pValue);
int is_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_allow_double_convertion();
extern int Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_to_double(double * nValue, const void*);
#define get_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_signature get_struct__469_signature
#define compare_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_type compare_struct__469_type
#define Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_size struct__469_filter_size
#define get_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_utils get_struct__469_filter_utils
#define Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_filter_values struct__469_filter_values
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
#define get_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_signature get_struct__464_signature
#define compare_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_type compare_struct__464_type
#define TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_filter_size struct__464_filter_size
#define get_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_filter_utils get_struct__464_filter_utils
#define TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_filter_values struct__464_filter_values

#endif /*CHECKSINGLEBALISEGROUP_DETERMINEBGORIENTATION_LRBG_TYPES_CONVERTION */
