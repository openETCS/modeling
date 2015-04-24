#ifndef STORY00A_FIRSTTEST_TYPES_CONVERTION
#define STORY00A_FIRSTTEST_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__3653_Utils;
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_struct__3669_Utils;
extern TypeUtils _SCSIM_array__3677_Utils;
extern TypeUtils _SCSIM_struct__3680_Utils;
extern TypeUtils _SCSIM_struct__3685_Utils;
extern TypeUtils _SCSIM_struct__3693_Utils;
extern TypeUtils _SCSIM_struct__3706_Utils;
extern TypeUtils _SCSIM_struct__3715_Utils;
extern TypeUtils _SCSIM_struct__3720_Utils;
extern TypeUtils _SCSIM_array__3731_Utils;
extern TypeUtils _SCSIM_struct__3734_Utils;
extern TypeUtils _SCSIM_array_int_7_Utils;
extern TypeUtils _SCSIM_array_int_461_Utils;
extern TypeUtils _SCSIM_array_int_11_Utils;
extern TypeUtils _SCSIM_array_int_18_Utils;
extern TypeUtils _SCSIM_array_int_25_Utils;
extern TypeUtils _SCSIM_array_int_32_Utils;
extern TypeUtils _SCSIM_array_int_39_Utils;
extern TypeUtils _SCSIM_array_int_4_Utils;
extern TypeUtils _SCSIM_array_int_500_500_Utils;
extern TypeUtils _SCSIM_TM_CompressedBaliseMessage_Utils;
extern TypeUtils _SCSIM_TM_BaliseTelegramHeader_int_T_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_TM_OrBG_Utils;
extern TypeUtils _SCSIM_TM_OrLine_Utils;
extern TypeUtils _SCSIM_TM_P005_Utils;
extern TypeUtils _SCSIM_TM_P05Es_T_Utils;
extern TypeUtils _SCSIM_TM_P005E_T_Utils;
extern TypeUtils _SCSIM_TM_P005E_array_T_Utils;
extern TypeUtils _SCSIM_TM_BaliseGroupData_Utils;
extern TypeUtils _SCSIM_Q_UPDOWN_Utils;
extern TypeUtils _SCSIM_M_VERSION_Utils;
extern TypeUtils _SCSIM_Q_MEDIA_Utils;
extern TypeUtils _SCSIM_N_PIG_Utils;
extern TypeUtils _SCSIM_N_TOTAL_Utils;
extern TypeUtils _SCSIM_M_DUP_Utils;
extern TypeUtils _SCSIM_M_MCOUNT_Utils;
extern TypeUtils _SCSIM_NID_C_Utils;
extern TypeUtils _SCSIM_NID_BG_Utils;
extern TypeUtils _SCSIM_Q_LINK_Utils;
extern TypeUtils _SCSIM_B_data_internal_FirstTest_InfraLib_Utils;
extern TypeUtils _SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_Metadata_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_MetadataElement_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_BaliseGroupData_Basics_Utils;
extern TypeUtils _SCSIM_TelegramHeader_T_BG_Types_Pkg_Utils;

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
 ** struct__3653
 ****************************************************************/
extern const char * struct__3653_to_string(const void* pValue);
extern int check_struct__3653_string(const char* strValue);
extern int string_to_struct__3653(const char* strValue, void* pValue);
int is_struct__3653_allow_double_convertion();
extern const char * get_struct__3653_signature();
extern int compare_struct__3653_type(int*, const char*, const void*);
#define struct__3653_filter_size 10
extern FilterUtils get_struct__3653_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__3653_filter_values[10];
/****************************************************************
 ** array_int_500
 ****************************************************************/
extern const char * array_int_500_to_string(const void* pValue);
extern int check_array_int_500_string(const char* strValue);
extern int string_to_array_int_500(const char* strValue, void* pValue);
int is_array_int_500_allow_double_convertion();
extern const char * get_array_int_500_signature();
extern int compare_array_int_500_type(int*, const char*, const void*);
#define array_int_500_filter_size 500
extern FilterUtils get_array_int_500_filter_utils(const char* strFilter, void* pValue);
#define array_int_500_filter_values 0
/****************************************************************
 ** struct__3669
 ****************************************************************/
extern const char * struct__3669_to_string(const void* pValue);
extern int check_struct__3669_string(const char* strValue);
extern int string_to_struct__3669(const char* strValue, void* pValue);
int is_struct__3669_allow_double_convertion();
extern const char * get_struct__3669_signature();
extern int compare_struct__3669_type(int*, const char*, const void*);
#define struct__3669_filter_size 5
extern FilterUtils get_struct__3669_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__3669_filter_values[5];
/****************************************************************
 ** array__3677
 ****************************************************************/
extern const char * array__3677_to_string(const void* pValue);
extern int check_array__3677_string(const char* strValue);
extern int string_to_array__3677(const char* strValue, void* pValue);
int is_array__3677_allow_double_convertion();
extern const char * get_array__3677_signature();
extern int compare_array__3677_type(int*, const char*, const void*);
#define array__3677_filter_size 30
extern FilterUtils get_array__3677_filter_utils(const char* strFilter, void* pValue);
#define array__3677_filter_values 0
/****************************************************************
 ** struct__3680
 ****************************************************************/
extern const char * struct__3680_to_string(const void* pValue);
extern int check_struct__3680_string(const char* strValue);
extern int string_to_struct__3680(const char* strValue, void* pValue);
int is_struct__3680_allow_double_convertion();
extern const char * get_struct__3680_signature();
extern int compare_struct__3680_type(int*, const char*, const void*);
#define struct__3680_filter_size 2
extern FilterUtils get_struct__3680_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__3680_filter_values[2];
/****************************************************************
 ** struct__3685
 ****************************************************************/
extern const char * struct__3685_to_string(const void* pValue);
extern int check_struct__3685_string(const char* strValue);
extern int string_to_struct__3685(const char* strValue, void* pValue);
int is_struct__3685_allow_double_convertion();
extern const char * get_struct__3685_signature();
extern int compare_struct__3685_type(int*, const char*, const void*);
#define struct__3685_filter_size 5
extern FilterUtils get_struct__3685_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__3685_filter_values[5];
/****************************************************************
 ** struct__3693
 ****************************************************************/
extern const char * struct__3693_to_string(const void* pValue);
extern int check_struct__3693_string(const char* strValue);
extern int string_to_struct__3693(const char* strValue, void* pValue);
int is_struct__3693_allow_double_convertion();
extern const char * get_struct__3693_signature();
extern int compare_struct__3693_type(int*, const char*, const void*);
#define struct__3693_filter_size 10
extern FilterUtils get_struct__3693_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__3693_filter_values[10];
/****************************************************************
 ** struct__3706
 ****************************************************************/
extern const char * struct__3706_to_string(const void* pValue);
extern int check_struct__3706_string(const char* strValue);
extern int string_to_struct__3706(const char* strValue, void* pValue);
int is_struct__3706_allow_double_convertion();
extern const char * get_struct__3706_signature();
extern int compare_struct__3706_type(int*, const char*, const void*);
#define struct__3706_filter_size 6
extern FilterUtils get_struct__3706_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__3706_filter_values[6];
/****************************************************************
 ** struct__3715
 ****************************************************************/
extern const char * struct__3715_to_string(const void* pValue);
extern int check_struct__3715_string(const char* strValue);
extern int string_to_struct__3715(const char* strValue, void* pValue);
int is_struct__3715_allow_double_convertion();
extern const char * get_struct__3715_signature();
extern int compare_struct__3715_type(int*, const char*, const void*);
#define struct__3715_filter_size 2
extern FilterUtils get_struct__3715_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__3715_filter_values[2];
/****************************************************************
 ** struct__3720
 ****************************************************************/
extern const char * struct__3720_to_string(const void* pValue);
extern int check_struct__3720_string(const char* strValue);
extern int string_to_struct__3720(const char* strValue, void* pValue);
int is_struct__3720_allow_double_convertion();
extern const char * get_struct__3720_signature();
extern int compare_struct__3720_type(int*, const char*, const void*);
#define struct__3720_filter_size 8
extern FilterUtils get_struct__3720_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__3720_filter_values[8];
/****************************************************************
 ** array__3731
 ****************************************************************/
extern const char * array__3731_to_string(const void* pValue);
extern int check_array__3731_string(const char* strValue);
extern int string_to_array__3731(const char* strValue, void* pValue);
int is_array__3731_allow_double_convertion();
extern const char * get_array__3731_signature();
extern int compare_array__3731_type(int*, const char*, const void*);
#define array__3731_filter_size 5
extern FilterUtils get_array__3731_filter_utils(const char* strFilter, void* pValue);
#define array__3731_filter_values 0
/****************************************************************
 ** struct__3734
 ****************************************************************/
extern const char * struct__3734_to_string(const void* pValue);
extern int check_struct__3734_string(const char* strValue);
extern int string_to_struct__3734(const char* strValue, void* pValue);
int is_struct__3734_allow_double_convertion();
extern const char * get_struct__3734_signature();
extern int compare_struct__3734_type(int*, const char*, const void*);
#define struct__3734_filter_size 6
extern FilterUtils get_struct__3734_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__3734_filter_values[6];
/****************************************************************
 ** array_int_7
 ****************************************************************/
extern const char * array_int_7_to_string(const void* pValue);
extern int check_array_int_7_string(const char* strValue);
extern int string_to_array_int_7(const char* strValue, void* pValue);
int is_array_int_7_allow_double_convertion();
extern const char * get_array_int_7_signature();
extern int compare_array_int_7_type(int*, const char*, const void*);
#define array_int_7_filter_size 7
extern FilterUtils get_array_int_7_filter_utils(const char* strFilter, void* pValue);
#define array_int_7_filter_values 0
/****************************************************************
 ** array_int_461
 ****************************************************************/
extern const char * array_int_461_to_string(const void* pValue);
extern int check_array_int_461_string(const char* strValue);
extern int string_to_array_int_461(const char* strValue, void* pValue);
int is_array_int_461_allow_double_convertion();
extern const char * get_array_int_461_signature();
extern int compare_array_int_461_type(int*, const char*, const void*);
#define array_int_461_filter_size 461
extern FilterUtils get_array_int_461_filter_utils(const char* strFilter, void* pValue);
#define array_int_461_filter_values 0
/****************************************************************
 ** array_int_11
 ****************************************************************/
extern const char * array_int_11_to_string(const void* pValue);
extern int check_array_int_11_string(const char* strValue);
extern int string_to_array_int_11(const char* strValue, void* pValue);
int is_array_int_11_allow_double_convertion();
extern const char * get_array_int_11_signature();
extern int compare_array_int_11_type(int*, const char*, const void*);
#define array_int_11_filter_size 11
extern FilterUtils get_array_int_11_filter_utils(const char* strFilter, void* pValue);
#define array_int_11_filter_values 0
/****************************************************************
 ** array_int_18
 ****************************************************************/
extern const char * array_int_18_to_string(const void* pValue);
extern int check_array_int_18_string(const char* strValue);
extern int string_to_array_int_18(const char* strValue, void* pValue);
int is_array_int_18_allow_double_convertion();
extern const char * get_array_int_18_signature();
extern int compare_array_int_18_type(int*, const char*, const void*);
#define array_int_18_filter_size 18
extern FilterUtils get_array_int_18_filter_utils(const char* strFilter, void* pValue);
#define array_int_18_filter_values 0
/****************************************************************
 ** array_int_25
 ****************************************************************/
extern const char * array_int_25_to_string(const void* pValue);
extern int check_array_int_25_string(const char* strValue);
extern int string_to_array_int_25(const char* strValue, void* pValue);
int is_array_int_25_allow_double_convertion();
extern const char * get_array_int_25_signature();
extern int compare_array_int_25_type(int*, const char*, const void*);
#define array_int_25_filter_size 25
extern FilterUtils get_array_int_25_filter_utils(const char* strFilter, void* pValue);
#define array_int_25_filter_values 0
/****************************************************************
 ** array_int_32
 ****************************************************************/
extern const char * array_int_32_to_string(const void* pValue);
extern int check_array_int_32_string(const char* strValue);
extern int string_to_array_int_32(const char* strValue, void* pValue);
int is_array_int_32_allow_double_convertion();
extern const char * get_array_int_32_signature();
extern int compare_array_int_32_type(int*, const char*, const void*);
#define array_int_32_filter_size 32
extern FilterUtils get_array_int_32_filter_utils(const char* strFilter, void* pValue);
#define array_int_32_filter_values 0
/****************************************************************
 ** array_int_39
 ****************************************************************/
extern const char * array_int_39_to_string(const void* pValue);
extern int check_array_int_39_string(const char* strValue);
extern int string_to_array_int_39(const char* strValue, void* pValue);
int is_array_int_39_allow_double_convertion();
extern const char * get_array_int_39_signature();
extern int compare_array_int_39_type(int*, const char*, const void*);
#define array_int_39_filter_size 39
extern FilterUtils get_array_int_39_filter_utils(const char* strFilter, void* pValue);
#define array_int_39_filter_values 0
/****************************************************************
 ** array_int_4
 ****************************************************************/
extern const char * array_int_4_to_string(const void* pValue);
extern int check_array_int_4_string(const char* strValue);
extern int string_to_array_int_4(const char* strValue, void* pValue);
int is_array_int_4_allow_double_convertion();
extern const char * get_array_int_4_signature();
extern int compare_array_int_4_type(int*, const char*, const void*);
#define array_int_4_filter_size 4
extern FilterUtils get_array_int_4_filter_utils(const char* strFilter, void* pValue);
#define array_int_4_filter_values 0
/****************************************************************
 ** array_int_500_500
 ****************************************************************/
extern const char * array_int_500_500_to_string(const void* pValue);
extern int check_array_int_500_500_string(const char* strValue);
extern int string_to_array_int_500_500(const char* strValue, void* pValue);
int is_array_int_500_500_allow_double_convertion();
extern const char * get_array_int_500_500_signature();
extern int compare_array_int_500_500_type(int*, const char*, const void*);
#define array_int_500_500_filter_size 500
extern FilterUtils get_array_int_500_500_filter_utils(const char* strFilter, void* pValue);
#define array_int_500_500_filter_values 0
/****************************************************************
 ** TM_CompressedBaliseMessage
 ****************************************************************/
extern const char * TM_CompressedBaliseMessage_to_string(const void* pValue);
extern int check_TM_CompressedBaliseMessage_string(const char* strValue);
extern int string_to_TM_CompressedBaliseMessage(const char* strValue, void* pValue);
int is_TM_CompressedBaliseMessage_allow_double_convertion();
extern int TM_CompressedBaliseMessage_to_double(double * nValue, const void*);
#define get_TM_CompressedBaliseMessage_signature get_struct__3715_signature
#define compare_TM_CompressedBaliseMessage_type compare_struct__3715_type
#define TM_CompressedBaliseMessage_filter_size struct__3715_filter_size
#define get_TM_CompressedBaliseMessage_filter_utils get_struct__3715_filter_utils
#define TM_CompressedBaliseMessage_filter_values struct__3715_filter_values
/****************************************************************
 ** TM_BaliseTelegramHeader_int_T
 ****************************************************************/
extern const char * TM_BaliseTelegramHeader_int_T_to_string(const void* pValue);
extern int check_TM_BaliseTelegramHeader_int_T_string(const char* strValue);
extern int string_to_TM_BaliseTelegramHeader_int_T(const char* strValue, void* pValue);
int is_TM_BaliseTelegramHeader_int_T_allow_double_convertion();
extern int TM_BaliseTelegramHeader_int_T_to_double(double * nValue, const void*);
#define get_TM_BaliseTelegramHeader_int_T_signature get_struct__3693_signature
#define compare_TM_BaliseTelegramHeader_int_T_type compare_struct__3693_type
#define TM_BaliseTelegramHeader_int_T_filter_size struct__3693_filter_size
#define get_TM_BaliseTelegramHeader_int_T_filter_utils get_struct__3693_filter_utils
#define TM_BaliseTelegramHeader_int_T_filter_values struct__3693_filter_values
/****************************************************************
 ** NID_PACKET
 ****************************************************************/
extern const char * NID_PACKET_to_string(const void* pValue);
extern int check_NID_PACKET_string(const char* strValue);
extern int string_to_NID_PACKET(const char* strValue, void* pValue);
int is_NID_PACKET_allow_double_convertion();
extern int NID_PACKET_to_double(double * nValue, const void*);
#define get_NID_PACKET_signature get_kcg_int_signature
#define compare_NID_PACKET_type compare_kcg_int_type
#define NID_PACKET_filter_size kcg_int_filter_size
#define get_NID_PACKET_filter_utils get_kcg_int_filter_utils
#define NID_PACKET_filter_values kcg_int_filter_values
/****************************************************************
 ** Q_DIR
 ****************************************************************/
extern const char * Q_DIR_to_string(const void* pValue);
extern int check_Q_DIR_string(const char* strValue);
extern int string_to_Q_DIR(const char* strValue, void* pValue);
int is_Q_DIR_allow_double_convertion();
extern int Q_DIR_to_double(double * nValue, const void*);
extern const char * get_Q_DIR_signature();
extern int compare_Q_DIR_type(int*, const char*, const void*);
#define Q_DIR_filter_size 0
#define get_Q_DIR_filter_utils 0
#define Q_DIR_filter_values 0
/****************************************************************
 ** TM_OrBG
 ****************************************************************/
extern const char * TM_OrBG_to_string(const void* pValue);
extern int check_TM_OrBG_string(const char* strValue);
extern int string_to_TM_OrBG(const char* strValue, void* pValue);
int is_TM_OrBG_allow_double_convertion();
extern int TM_OrBG_to_double(double * nValue, const void*);
extern const char * get_TM_OrBG_signature();
extern int compare_TM_OrBG_type(int*, const char*, const void*);
#define TM_OrBG_filter_size 0
#define get_TM_OrBG_filter_utils 0
#define TM_OrBG_filter_values 0
/****************************************************************
 ** TM_OrLine
 ****************************************************************/
extern const char * TM_OrLine_to_string(const void* pValue);
extern int check_TM_OrLine_string(const char* strValue);
extern int string_to_TM_OrLine(const char* strValue, void* pValue);
int is_TM_OrLine_allow_double_convertion();
extern int TM_OrLine_to_double(double * nValue, const void*);
extern const char * get_TM_OrLine_signature();
extern int compare_TM_OrLine_type(int*, const char*, const void*);
#define TM_OrLine_filter_size 0
#define get_TM_OrLine_filter_utils 0
#define TM_OrLine_filter_values 0
/****************************************************************
 ** TM_P005
 ****************************************************************/
extern const char * TM_P005_to_string(const void* pValue);
extern int check_TM_P005_string(const char* strValue);
extern int string_to_TM_P005(const char* strValue, void* pValue);
int is_TM_P005_allow_double_convertion();
extern int TM_P005_to_double(double * nValue, const void*);
#define get_TM_P005_signature get_struct__3734_signature
#define compare_TM_P005_type compare_struct__3734_type
#define TM_P005_filter_size struct__3734_filter_size
#define get_TM_P005_filter_utils get_struct__3734_filter_utils
#define TM_P005_filter_values struct__3734_filter_values
/****************************************************************
 ** TM_P05Es_T
 ****************************************************************/
extern const char * TM_P05Es_T_to_string(const void* pValue);
extern int check_TM_P05Es_T_string(const char* strValue);
extern int string_to_TM_P05Es_T(const char* strValue, void* pValue);
int is_TM_P05Es_T_allow_double_convertion();
extern int TM_P05Es_T_to_double(double * nValue, const void*);
#define get_TM_P05Es_T_signature get_array__3731_signature
#define compare_TM_P05Es_T_type compare_array__3731_type
#define TM_P05Es_T_filter_size array__3731_filter_size
#define get_TM_P05Es_T_filter_utils get_array__3731_filter_utils
#define TM_P05Es_T_filter_values array__3731_filter_values
/****************************************************************
 ** TM_P005E_T
 ****************************************************************/
extern const char * TM_P005E_T_to_string(const void* pValue);
extern int check_TM_P005E_T_string(const char* strValue);
extern int string_to_TM_P005E_T(const char* strValue, void* pValue);
int is_TM_P005E_T_allow_double_convertion();
extern int TM_P005E_T_to_double(double * nValue, const void*);
#define get_TM_P005E_T_signature get_struct__3720_signature
#define compare_TM_P005E_T_type compare_struct__3720_type
#define TM_P005E_T_filter_size struct__3720_filter_size
#define get_TM_P005E_T_filter_utils get_struct__3720_filter_utils
#define TM_P005E_T_filter_values struct__3720_filter_values
/****************************************************************
 ** TM_P005E_array_T
 ****************************************************************/
extern const char * TM_P005E_array_T_to_string(const void* pValue);
extern int check_TM_P005E_array_T_string(const char* strValue);
extern int string_to_TM_P005E_array_T(const char* strValue, void* pValue);
int is_TM_P005E_array_T_allow_double_convertion();
extern int TM_P005E_array_T_to_double(double * nValue, const void*);
#define get_TM_P005E_array_T_signature get_array_int_7_signature
#define compare_TM_P005E_array_T_type compare_array_int_7_type
#define TM_P005E_array_T_filter_size array_int_7_filter_size
#define get_TM_P005E_array_T_filter_utils get_array_int_7_filter_utils
#define TM_P005E_array_T_filter_values array_int_7_filter_values
/****************************************************************
 ** TM_BaliseGroupData
 ****************************************************************/
extern const char * TM_BaliseGroupData_to_string(const void* pValue);
extern int check_TM_BaliseGroupData_string(const char* strValue);
extern int string_to_TM_BaliseGroupData(const char* strValue, void* pValue);
int is_TM_BaliseGroupData_allow_double_convertion();
extern int TM_BaliseGroupData_to_double(double * nValue, const void*);
#define get_TM_BaliseGroupData_signature get_struct__3685_signature
#define compare_TM_BaliseGroupData_type compare_struct__3685_type
#define TM_BaliseGroupData_filter_size struct__3685_filter_size
#define get_TM_BaliseGroupData_filter_utils get_struct__3685_filter_utils
#define TM_BaliseGroupData_filter_values struct__3685_filter_values
/****************************************************************
 ** Q_UPDOWN
 ****************************************************************/
extern const char * Q_UPDOWN_to_string(const void* pValue);
extern int check_Q_UPDOWN_string(const char* strValue);
extern int string_to_Q_UPDOWN(const char* strValue, void* pValue);
int is_Q_UPDOWN_allow_double_convertion();
extern int Q_UPDOWN_to_double(double * nValue, const void*);
extern const char * get_Q_UPDOWN_signature();
extern int compare_Q_UPDOWN_type(int*, const char*, const void*);
#define Q_UPDOWN_filter_size 0
#define get_Q_UPDOWN_filter_utils 0
#define Q_UPDOWN_filter_values 0
/****************************************************************
 ** M_VERSION
 ****************************************************************/
extern const char * M_VERSION_to_string(const void* pValue);
extern int check_M_VERSION_string(const char* strValue);
extern int string_to_M_VERSION(const char* strValue, void* pValue);
int is_M_VERSION_allow_double_convertion();
extern int M_VERSION_to_double(double * nValue, const void*);
extern const char * get_M_VERSION_signature();
extern int compare_M_VERSION_type(int*, const char*, const void*);
#define M_VERSION_filter_size 0
#define get_M_VERSION_filter_utils 0
#define M_VERSION_filter_values 0
/****************************************************************
 ** Q_MEDIA
 ****************************************************************/
extern const char * Q_MEDIA_to_string(const void* pValue);
extern int check_Q_MEDIA_string(const char* strValue);
extern int string_to_Q_MEDIA(const char* strValue, void* pValue);
int is_Q_MEDIA_allow_double_convertion();
extern int Q_MEDIA_to_double(double * nValue, const void*);
extern const char * get_Q_MEDIA_signature();
extern int compare_Q_MEDIA_type(int*, const char*, const void*);
#define Q_MEDIA_filter_size 0
#define get_Q_MEDIA_filter_utils 0
#define Q_MEDIA_filter_values 0
/****************************************************************
 ** N_PIG
 ****************************************************************/
extern const char * N_PIG_to_string(const void* pValue);
extern int check_N_PIG_string(const char* strValue);
extern int string_to_N_PIG(const char* strValue, void* pValue);
int is_N_PIG_allow_double_convertion();
extern int N_PIG_to_double(double * nValue, const void*);
extern const char * get_N_PIG_signature();
extern int compare_N_PIG_type(int*, const char*, const void*);
#define N_PIG_filter_size 0
#define get_N_PIG_filter_utils 0
#define N_PIG_filter_values 0
/****************************************************************
 ** N_TOTAL
 ****************************************************************/
extern const char * N_TOTAL_to_string(const void* pValue);
extern int check_N_TOTAL_string(const char* strValue);
extern int string_to_N_TOTAL(const char* strValue, void* pValue);
int is_N_TOTAL_allow_double_convertion();
extern int N_TOTAL_to_double(double * nValue, const void*);
extern const char * get_N_TOTAL_signature();
extern int compare_N_TOTAL_type(int*, const char*, const void*);
#define N_TOTAL_filter_size 0
#define get_N_TOTAL_filter_utils 0
#define N_TOTAL_filter_values 0
/****************************************************************
 ** M_DUP
 ****************************************************************/
extern const char * M_DUP_to_string(const void* pValue);
extern int check_M_DUP_string(const char* strValue);
extern int string_to_M_DUP(const char* strValue, void* pValue);
int is_M_DUP_allow_double_convertion();
extern int M_DUP_to_double(double * nValue, const void*);
extern const char * get_M_DUP_signature();
extern int compare_M_DUP_type(int*, const char*, const void*);
#define M_DUP_filter_size 0
#define get_M_DUP_filter_utils 0
#define M_DUP_filter_values 0
/****************************************************************
 ** M_MCOUNT
 ****************************************************************/
extern const char * M_MCOUNT_to_string(const void* pValue);
extern int check_M_MCOUNT_string(const char* strValue);
extern int string_to_M_MCOUNT(const char* strValue, void* pValue);
int is_M_MCOUNT_allow_double_convertion();
extern int M_MCOUNT_to_double(double * nValue, const void*);
#define get_M_MCOUNT_signature get_kcg_int_signature
#define compare_M_MCOUNT_type compare_kcg_int_type
#define M_MCOUNT_filter_size kcg_int_filter_size
#define get_M_MCOUNT_filter_utils get_kcg_int_filter_utils
#define M_MCOUNT_filter_values kcg_int_filter_values
/****************************************************************
 ** NID_C
 ****************************************************************/
extern const char * NID_C_to_string(const void* pValue);
extern int check_NID_C_string(const char* strValue);
extern int string_to_NID_C(const char* strValue, void* pValue);
int is_NID_C_allow_double_convertion();
extern int NID_C_to_double(double * nValue, const void*);
#define get_NID_C_signature get_kcg_int_signature
#define compare_NID_C_type compare_kcg_int_type
#define NID_C_filter_size kcg_int_filter_size
#define get_NID_C_filter_utils get_kcg_int_filter_utils
#define NID_C_filter_values kcg_int_filter_values
/****************************************************************
 ** NID_BG
 ****************************************************************/
extern const char * NID_BG_to_string(const void* pValue);
extern int check_NID_BG_string(const char* strValue);
extern int string_to_NID_BG(const char* strValue, void* pValue);
int is_NID_BG_allow_double_convertion();
extern int NID_BG_to_double(double * nValue, const void*);
#define get_NID_BG_signature get_kcg_int_signature
#define compare_NID_BG_type compare_kcg_int_type
#define NID_BG_filter_size kcg_int_filter_size
#define get_NID_BG_filter_utils get_kcg_int_filter_utils
#define NID_BG_filter_values kcg_int_filter_values
/****************************************************************
 ** Q_LINK
 ****************************************************************/
extern const char * Q_LINK_to_string(const void* pValue);
extern int check_Q_LINK_string(const char* strValue);
extern int string_to_Q_LINK(const char* strValue, void* pValue);
int is_Q_LINK_allow_double_convertion();
extern int Q_LINK_to_double(double * nValue, const void*);
extern const char * get_Q_LINK_signature();
extern int compare_Q_LINK_type(int*, const char*, const void*);
#define Q_LINK_filter_size 0
#define get_Q_LINK_filter_utils 0
#define Q_LINK_filter_values 0
/****************************************************************
 ** B_data_internal_FirstTest_InfraLib
 ****************************************************************/
extern const char * B_data_internal_FirstTest_InfraLib_to_string(const void* pValue);
extern int check_B_data_internal_FirstTest_InfraLib_string(const char* strValue);
extern int string_to_B_data_internal_FirstTest_InfraLib(const char* strValue, void* pValue);
int is_B_data_internal_FirstTest_InfraLib_allow_double_convertion();
extern int B_data_internal_FirstTest_InfraLib_to_double(double * nValue, const void*);
#define get_B_data_internal_FirstTest_InfraLib_signature get_struct__3706_signature
#define compare_B_data_internal_FirstTest_InfraLib_type compare_struct__3706_type
#define B_data_internal_FirstTest_InfraLib_filter_size struct__3706_filter_size
#define get_B_data_internal_FirstTest_InfraLib_filter_utils get_struct__3706_filter_utils
#define B_data_internal_FirstTest_InfraLib_filter_values struct__3706_filter_values
/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
extern const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_CompressedPackets_T_Common_Types_Pkg_signature get_struct__3680_signature
#define compare_CompressedPackets_T_Common_Types_Pkg_type compare_struct__3680_type
#define CompressedPackets_T_Common_Types_Pkg_filter_size struct__3680_filter_size
#define get_CompressedPackets_T_Common_Types_Pkg_filter_utils get_struct__3680_filter_utils
#define CompressedPackets_T_Common_Types_Pkg_filter_values struct__3680_filter_values
/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
extern const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_Metadata_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
extern int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_Metadata_T_Common_Types_Pkg_signature get_array__3677_signature
#define compare_Metadata_T_Common_Types_Pkg_type compare_array__3677_type
#define Metadata_T_Common_Types_Pkg_filter_size array__3677_filter_size
#define get_Metadata_T_Common_Types_Pkg_filter_utils get_array__3677_filter_utils
#define Metadata_T_Common_Types_Pkg_filter_values array__3677_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__3669_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__3669_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__3669_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__3669_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__3669_filter_values
/****************************************************************
 ** CompressedPacketData_T_Common_Types_Pkg
 ****************************************************************/
extern const char * CompressedPacketData_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_CompressedPacketData_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_CompressedPacketData_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_CompressedPacketData_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPacketData_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_CompressedPacketData_T_Common_Types_Pkg_signature get_array_int_500_signature
#define compare_CompressedPacketData_T_Common_Types_Pkg_type compare_array_int_500_type
#define CompressedPacketData_T_Common_Types_Pkg_filter_size array_int_500_filter_size
#define get_CompressedPacketData_T_Common_Types_Pkg_filter_utils get_array_int_500_filter_utils
#define CompressedPacketData_T_Common_Types_Pkg_filter_values array_int_500_filter_values
/****************************************************************
 ** BaliseGroupData_Basics
 ****************************************************************/
extern const char * BaliseGroupData_Basics_to_string(const void* pValue);
extern int check_BaliseGroupData_Basics_string(const char* strValue);
extern int string_to_BaliseGroupData_Basics(const char* strValue, void* pValue);
int is_BaliseGroupData_Basics_allow_double_convertion();
extern int BaliseGroupData_Basics_to_double(double * nValue, const void*);
#define get_BaliseGroupData_Basics_signature get_struct__3685_signature
#define compare_BaliseGroupData_Basics_type compare_struct__3685_type
#define BaliseGroupData_Basics_filter_size struct__3685_filter_size
#define get_BaliseGroupData_Basics_filter_utils get_struct__3685_filter_utils
#define BaliseGroupData_Basics_filter_values struct__3685_filter_values
/****************************************************************
 ** TelegramHeader_T_BG_Types_Pkg
 ****************************************************************/
extern const char * TelegramHeader_T_BG_Types_Pkg_to_string(const void* pValue);
extern int check_TelegramHeader_T_BG_Types_Pkg_string(const char* strValue);
extern int string_to_TelegramHeader_T_BG_Types_Pkg(const char* strValue, void* pValue);
int is_TelegramHeader_T_BG_Types_Pkg_allow_double_convertion();
extern int TelegramHeader_T_BG_Types_Pkg_to_double(double * nValue, const void*);
#define get_TelegramHeader_T_BG_Types_Pkg_signature get_struct__3653_signature
#define compare_TelegramHeader_T_BG_Types_Pkg_type compare_struct__3653_type
#define TelegramHeader_T_BG_Types_Pkg_filter_size struct__3653_filter_size
#define get_TelegramHeader_T_BG_Types_Pkg_filter_utils get_struct__3653_filter_utils
#define TelegramHeader_T_BG_Types_Pkg_filter_values struct__3653_filter_values

#endif /*STORY00A_FIRSTTEST_TYPES_CONVERTION */
