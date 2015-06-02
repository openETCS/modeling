#ifndef TESTSTORYY00A_P005_INTERNAL_TYPES_CONVERTION
#define TESTSTORYY00A_P005_INTERNAL_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__4835_Utils;
extern TypeUtils _SCSIM_array__4849_Utils;
extern TypeUtils _SCSIM_struct__4852_Utils;
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_struct__4868_Utils;
extern TypeUtils _SCSIM_array__4876_Utils;
extern TypeUtils _SCSIM_struct__4879_Utils;
extern TypeUtils _SCSIM_array_int_4_Utils;
extern TypeUtils _SCSIM_array_int_7_Utils;
extern TypeUtils _SCSIM_array_int_39_Utils;
extern TypeUtils _SCSIM_struct__4893_Utils;
extern TypeUtils _SCSIM_struct__4906_Utils;
extern TypeUtils _SCSIM_struct__4911_Utils;
extern TypeUtils _SCSIM_struct__4919_Utils;
extern TypeUtils _SCSIM_struct__4928_Utils;
extern TypeUtils _SCSIM_array__4939_Utils;
extern TypeUtils _SCSIM_struct__4942_Utils;
extern TypeUtils _SCSIM_array_int_500_500_Utils;
extern TypeUtils _SCSIM_array_int_461_Utils;
extern TypeUtils _SCSIM_array_int_11_Utils;
extern TypeUtils _SCSIM_array_int_18_Utils;
extern TypeUtils _SCSIM_array_int_25_Utils;
extern TypeUtils _SCSIM_array_int_32_Utils;
extern TypeUtils _SCSIM_array_int_30_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
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
extern TypeUtils _SCSIM_Q_LINKREACTION_Utils;
extern TypeUtils _SCSIM_Q_LINKORIENTATION_Utils;
extern TypeUtils _SCSIM_Q_NEWCOUNTRY_Utils;
extern TypeUtils _SCSIM_NID_LRBG_Utils;
extern TypeUtils _SCSIM_Q_SCALE_Utils;
extern TypeUtils _SCSIM_D_LINK_Utils;
extern TypeUtils _SCSIM_Q_LOCACC_Utils;
extern TypeUtils _SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils;
extern TypeUtils _SCSIM_CompressedBaliseMessage_TM_Utils;
extern TypeUtils _SCSIM_BaliseTelegramHeader_int_T_TM_Utils;
extern TypeUtils _SCSIM_OrBG_TM_Utils;
extern TypeUtils _SCSIM_OrLine_TM_Utils;
extern TypeUtils _SCSIM_P005_TM_Utils;
extern TypeUtils _SCSIM_P005Es_T_TM_Utils;
extern TypeUtils _SCSIM_P005E_T_TM_Utils;
extern TypeUtils _SCSIM_P005E_array_T_TM_Utils;
extern TypeUtils _SCSIM_BaliseGroupData_TM_Utils;
extern TypeUtils _SCSIM_P005_array_T_TM_Utils;
extern TypeUtils _SCSIM_Array4_TM_Utils;
extern TypeUtils _SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_Metadata_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_MetadataElement_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_BaliseGroupData_Basics_Utils;
extern TypeUtils _SCSIM_TelegramHeader_T_BG_Types_Pkg_Utils;
extern TypeUtils _SCSIM_LinkedBG_T_BG_Types_Pkg_Utils;
extern TypeUtils _SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils;

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
 ** struct__4835
 ****************************************************************/
extern const char * struct__4835_to_string(const void* pValue);
extern int check_struct__4835_string(const char* strValue);
extern int string_to_struct__4835(const char* strValue, void* pValue);
int is_struct__4835_allow_double_convertion();
extern const char * get_struct__4835_signature();
extern int compare_struct__4835_type(int*, const char*, const void*);
#define struct__4835_filter_size 11
extern FilterUtils get_struct__4835_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__4835_filter_values[11];
/****************************************************************
 ** array__4849
 ****************************************************************/
extern const char * array__4849_to_string(const void* pValue);
extern int check_array__4849_string(const char* strValue);
extern int string_to_array__4849(const char* strValue, void* pValue);
int is_array__4849_allow_double_convertion();
extern const char * get_array__4849_signature();
extern int compare_array__4849_type(int*, const char*, const void*);
#define array__4849_filter_size 4
extern FilterUtils get_array__4849_filter_utils(const char* strFilter, void* pValue);
#define array__4849_filter_values 0
/****************************************************************
 ** struct__4852
 ****************************************************************/
extern const char * struct__4852_to_string(const void* pValue);
extern int check_struct__4852_string(const char* strValue);
extern int string_to_struct__4852(const char* strValue, void* pValue);
int is_struct__4852_allow_double_convertion();
extern const char * get_struct__4852_signature();
extern int compare_struct__4852_type(int*, const char*, const void*);
#define struct__4852_filter_size 10
extern FilterUtils get_struct__4852_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__4852_filter_values[10];
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
 ** struct__4868
 ****************************************************************/
extern const char * struct__4868_to_string(const void* pValue);
extern int check_struct__4868_string(const char* strValue);
extern int string_to_struct__4868(const char* strValue, void* pValue);
int is_struct__4868_allow_double_convertion();
extern const char * get_struct__4868_signature();
extern int compare_struct__4868_type(int*, const char*, const void*);
#define struct__4868_filter_size 5
extern FilterUtils get_struct__4868_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__4868_filter_values[5];
/****************************************************************
 ** array__4876
 ****************************************************************/
extern const char * array__4876_to_string(const void* pValue);
extern int check_array__4876_string(const char* strValue);
extern int string_to_array__4876(const char* strValue, void* pValue);
int is_array__4876_allow_double_convertion();
extern const char * get_array__4876_signature();
extern int compare_array__4876_type(int*, const char*, const void*);
#define array__4876_filter_size 30
extern FilterUtils get_array__4876_filter_utils(const char* strFilter, void* pValue);
#define array__4876_filter_values 0
/****************************************************************
 ** struct__4879
 ****************************************************************/
extern const char * struct__4879_to_string(const void* pValue);
extern int check_struct__4879_string(const char* strValue);
extern int string_to_struct__4879(const char* strValue, void* pValue);
int is_struct__4879_allow_double_convertion();
extern const char * get_struct__4879_signature();
extern int compare_struct__4879_type(int*, const char*, const void*);
#define struct__4879_filter_size 2
extern FilterUtils get_struct__4879_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__4879_filter_values[2];
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
 ** struct__4893
 ****************************************************************/
extern const char * struct__4893_to_string(const void* pValue);
extern int check_struct__4893_string(const char* strValue);
extern int string_to_struct__4893(const char* strValue, void* pValue);
int is_struct__4893_allow_double_convertion();
extern const char * get_struct__4893_signature();
extern int compare_struct__4893_type(int*, const char*, const void*);
#define struct__4893_filter_size 10
extern FilterUtils get_struct__4893_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__4893_filter_values[10];
/****************************************************************
 ** struct__4906
 ****************************************************************/
extern const char * struct__4906_to_string(const void* pValue);
extern int check_struct__4906_string(const char* strValue);
extern int string_to_struct__4906(const char* strValue, void* pValue);
int is_struct__4906_allow_double_convertion();
extern const char * get_struct__4906_signature();
extern int compare_struct__4906_type(int*, const char*, const void*);
#define struct__4906_filter_size 2
extern FilterUtils get_struct__4906_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__4906_filter_values[2];
/****************************************************************
 ** struct__4911
 ****************************************************************/
extern const char * struct__4911_to_string(const void* pValue);
extern int check_struct__4911_string(const char* strValue);
extern int string_to_struct__4911(const char* strValue, void* pValue);
int is_struct__4911_allow_double_convertion();
extern const char * get_struct__4911_signature();
extern int compare_struct__4911_type(int*, const char*, const void*);
#define struct__4911_filter_size 5
extern FilterUtils get_struct__4911_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__4911_filter_values[5];
/****************************************************************
 ** struct__4919
 ****************************************************************/
extern const char * struct__4919_to_string(const void* pValue);
extern int check_struct__4919_string(const char* strValue);
extern int string_to_struct__4919(const char* strValue, void* pValue);
int is_struct__4919_allow_double_convertion();
extern const char * get_struct__4919_signature();
extern int compare_struct__4919_type(int*, const char*, const void*);
#define struct__4919_filter_size 6
extern FilterUtils get_struct__4919_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__4919_filter_values[6];
/****************************************************************
 ** struct__4928
 ****************************************************************/
extern const char * struct__4928_to_string(const void* pValue);
extern int check_struct__4928_string(const char* strValue);
extern int string_to_struct__4928(const char* strValue, void* pValue);
int is_struct__4928_allow_double_convertion();
extern const char * get_struct__4928_signature();
extern int compare_struct__4928_type(int*, const char*, const void*);
#define struct__4928_filter_size 8
extern FilterUtils get_struct__4928_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__4928_filter_values[8];
/****************************************************************
 ** array__4939
 ****************************************************************/
extern const char * array__4939_to_string(const void* pValue);
extern int check_array__4939_string(const char* strValue);
extern int string_to_array__4939(const char* strValue, void* pValue);
int is_array__4939_allow_double_convertion();
extern const char * get_array__4939_signature();
extern int compare_array__4939_type(int*, const char*, const void*);
#define array__4939_filter_size 5
extern FilterUtils get_array__4939_filter_utils(const char* strFilter, void* pValue);
#define array__4939_filter_values 0
/****************************************************************
 ** struct__4942
 ****************************************************************/
extern const char * struct__4942_to_string(const void* pValue);
extern int check_struct__4942_string(const char* strValue);
extern int string_to_struct__4942(const char* strValue, void* pValue);
int is_struct__4942_allow_double_convertion();
extern const char * get_struct__4942_signature();
extern int compare_struct__4942_type(int*, const char*, const void*);
#define struct__4942_filter_size 6
extern FilterUtils get_struct__4942_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__4942_filter_values[6];
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
 ** array_int_30
 ****************************************************************/
extern const char * array_int_30_to_string(const void* pValue);
extern int check_array_int_30_string(const char* strValue);
extern int string_to_array_int_30(const char* strValue, void* pValue);
int is_array_int_30_allow_double_convertion();
extern const char * get_array_int_30_signature();
extern int compare_array_int_30_type(int*, const char*, const void*);
#define array_int_30_filter_size 30
extern FilterUtils get_array_int_30_filter_utils(const char* strFilter, void* pValue);
#define array_int_30_filter_values 0
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
 ** Q_LINKREACTION
 ****************************************************************/
extern const char * Q_LINKREACTION_to_string(const void* pValue);
extern int check_Q_LINKREACTION_string(const char* strValue);
extern int string_to_Q_LINKREACTION(const char* strValue, void* pValue);
int is_Q_LINKREACTION_allow_double_convertion();
extern int Q_LINKREACTION_to_double(double * nValue, const void*);
extern const char * get_Q_LINKREACTION_signature();
extern int compare_Q_LINKREACTION_type(int*, const char*, const void*);
#define Q_LINKREACTION_filter_size 0
#define get_Q_LINKREACTION_filter_utils 0
#define Q_LINKREACTION_filter_values 0
/****************************************************************
 ** Q_LINKORIENTATION
 ****************************************************************/
extern const char * Q_LINKORIENTATION_to_string(const void* pValue);
extern int check_Q_LINKORIENTATION_string(const char* strValue);
extern int string_to_Q_LINKORIENTATION(const char* strValue, void* pValue);
int is_Q_LINKORIENTATION_allow_double_convertion();
extern int Q_LINKORIENTATION_to_double(double * nValue, const void*);
extern const char * get_Q_LINKORIENTATION_signature();
extern int compare_Q_LINKORIENTATION_type(int*, const char*, const void*);
#define Q_LINKORIENTATION_filter_size 0
#define get_Q_LINKORIENTATION_filter_utils 0
#define Q_LINKORIENTATION_filter_values 0
/****************************************************************
 ** Q_NEWCOUNTRY
 ****************************************************************/
extern const char * Q_NEWCOUNTRY_to_string(const void* pValue);
extern int check_Q_NEWCOUNTRY_string(const char* strValue);
extern int string_to_Q_NEWCOUNTRY(const char* strValue, void* pValue);
int is_Q_NEWCOUNTRY_allow_double_convertion();
extern int Q_NEWCOUNTRY_to_double(double * nValue, const void*);
extern const char * get_Q_NEWCOUNTRY_signature();
extern int compare_Q_NEWCOUNTRY_type(int*, const char*, const void*);
#define Q_NEWCOUNTRY_filter_size 0
#define get_Q_NEWCOUNTRY_filter_utils 0
#define Q_NEWCOUNTRY_filter_values 0
/****************************************************************
 ** NID_LRBG
 ****************************************************************/
extern const char * NID_LRBG_to_string(const void* pValue);
extern int check_NID_LRBG_string(const char* strValue);
extern int string_to_NID_LRBG(const char* strValue, void* pValue);
int is_NID_LRBG_allow_double_convertion();
extern int NID_LRBG_to_double(double * nValue, const void*);
#define get_NID_LRBG_signature get_kcg_int_signature
#define compare_NID_LRBG_type compare_kcg_int_type
#define NID_LRBG_filter_size kcg_int_filter_size
#define get_NID_LRBG_filter_utils get_kcg_int_filter_utils
#define NID_LRBG_filter_values kcg_int_filter_values
/****************************************************************
 ** Q_SCALE
 ****************************************************************/
extern const char * Q_SCALE_to_string(const void* pValue);
extern int check_Q_SCALE_string(const char* strValue);
extern int string_to_Q_SCALE(const char* strValue, void* pValue);
int is_Q_SCALE_allow_double_convertion();
extern int Q_SCALE_to_double(double * nValue, const void*);
extern const char * get_Q_SCALE_signature();
extern int compare_Q_SCALE_type(int*, const char*, const void*);
#define Q_SCALE_filter_size 0
#define get_Q_SCALE_filter_utils 0
#define Q_SCALE_filter_values 0
/****************************************************************
 ** D_LINK
 ****************************************************************/
extern const char * D_LINK_to_string(const void* pValue);
extern int check_D_LINK_string(const char* strValue);
extern int string_to_D_LINK(const char* strValue, void* pValue);
int is_D_LINK_allow_double_convertion();
extern int D_LINK_to_double(double * nValue, const void*);
#define get_D_LINK_signature get_kcg_int_signature
#define compare_D_LINK_type compare_kcg_int_type
#define D_LINK_filter_size kcg_int_filter_size
#define get_D_LINK_filter_utils get_kcg_int_filter_utils
#define D_LINK_filter_values kcg_int_filter_values
/****************************************************************
 ** Q_LOCACC
 ****************************************************************/
extern const char * Q_LOCACC_to_string(const void* pValue);
extern int check_Q_LOCACC_string(const char* strValue);
extern int string_to_Q_LOCACC(const char* strValue, void* pValue);
int is_Q_LOCACC_allow_double_convertion();
extern int Q_LOCACC_to_double(double * nValue, const void*);
#define get_Q_LOCACC_signature get_kcg_int_signature
#define compare_Q_LOCACC_type compare_kcg_int_type
#define Q_LOCACC_filter_size kcg_int_filter_size
#define get_Q_LOCACC_filter_utils get_kcg_int_filter_utils
#define Q_LOCACC_filter_values kcg_int_filter_values
/****************************************************************
 ** B_data_internal_FirstTest_InfraLibInt
 ****************************************************************/
extern const char * B_data_internal_FirstTest_InfraLibInt_to_string(const void* pValue);
extern int check_B_data_internal_FirstTest_InfraLibInt_string(const char* strValue);
extern int string_to_B_data_internal_FirstTest_InfraLibInt(const char* strValue, void* pValue);
int is_B_data_internal_FirstTest_InfraLibInt_allow_double_convertion();
extern int B_data_internal_FirstTest_InfraLibInt_to_double(double * nValue, const void*);
#define get_B_data_internal_FirstTest_InfraLibInt_signature get_struct__4919_signature
#define compare_B_data_internal_FirstTest_InfraLibInt_type compare_struct__4919_type
#define B_data_internal_FirstTest_InfraLibInt_filter_size struct__4919_filter_size
#define get_B_data_internal_FirstTest_InfraLibInt_filter_utils get_struct__4919_filter_utils
#define B_data_internal_FirstTest_InfraLibInt_filter_values struct__4919_filter_values
/****************************************************************
 ** CompressedBaliseMessage_TM
 ****************************************************************/
extern const char * CompressedBaliseMessage_TM_to_string(const void* pValue);
extern int check_CompressedBaliseMessage_TM_string(const char* strValue);
extern int string_to_CompressedBaliseMessage_TM(const char* strValue, void* pValue);
int is_CompressedBaliseMessage_TM_allow_double_convertion();
extern int CompressedBaliseMessage_TM_to_double(double * nValue, const void*);
#define get_CompressedBaliseMessage_TM_signature get_struct__4906_signature
#define compare_CompressedBaliseMessage_TM_type compare_struct__4906_type
#define CompressedBaliseMessage_TM_filter_size struct__4906_filter_size
#define get_CompressedBaliseMessage_TM_filter_utils get_struct__4906_filter_utils
#define CompressedBaliseMessage_TM_filter_values struct__4906_filter_values
/****************************************************************
 ** BaliseTelegramHeader_int_T_TM
 ****************************************************************/
extern const char * BaliseTelegramHeader_int_T_TM_to_string(const void* pValue);
extern int check_BaliseTelegramHeader_int_T_TM_string(const char* strValue);
extern int string_to_BaliseTelegramHeader_int_T_TM(const char* strValue, void* pValue);
int is_BaliseTelegramHeader_int_T_TM_allow_double_convertion();
extern int BaliseTelegramHeader_int_T_TM_to_double(double * nValue, const void*);
#define get_BaliseTelegramHeader_int_T_TM_signature get_struct__4893_signature
#define compare_BaliseTelegramHeader_int_T_TM_type compare_struct__4893_type
#define BaliseTelegramHeader_int_T_TM_filter_size struct__4893_filter_size
#define get_BaliseTelegramHeader_int_T_TM_filter_utils get_struct__4893_filter_utils
#define BaliseTelegramHeader_int_T_TM_filter_values struct__4893_filter_values
/****************************************************************
 ** OrBG_TM
 ****************************************************************/
extern const char * OrBG_TM_to_string(const void* pValue);
extern int check_OrBG_TM_string(const char* strValue);
extern int string_to_OrBG_TM(const char* strValue, void* pValue);
int is_OrBG_TM_allow_double_convertion();
extern int OrBG_TM_to_double(double * nValue, const void*);
extern const char * get_OrBG_TM_signature();
extern int compare_OrBG_TM_type(int*, const char*, const void*);
#define OrBG_TM_filter_size 0
#define get_OrBG_TM_filter_utils 0
#define OrBG_TM_filter_values 0
/****************************************************************
 ** OrLine_TM
 ****************************************************************/
extern const char * OrLine_TM_to_string(const void* pValue);
extern int check_OrLine_TM_string(const char* strValue);
extern int string_to_OrLine_TM(const char* strValue, void* pValue);
int is_OrLine_TM_allow_double_convertion();
extern int OrLine_TM_to_double(double * nValue, const void*);
extern const char * get_OrLine_TM_signature();
extern int compare_OrLine_TM_type(int*, const char*, const void*);
#define OrLine_TM_filter_size 0
#define get_OrLine_TM_filter_utils 0
#define OrLine_TM_filter_values 0
/****************************************************************
 ** P005_TM
 ****************************************************************/
extern const char * P005_TM_to_string(const void* pValue);
extern int check_P005_TM_string(const char* strValue);
extern int string_to_P005_TM(const char* strValue, void* pValue);
int is_P005_TM_allow_double_convertion();
extern int P005_TM_to_double(double * nValue, const void*);
#define get_P005_TM_signature get_struct__4942_signature
#define compare_P005_TM_type compare_struct__4942_type
#define P005_TM_filter_size struct__4942_filter_size
#define get_P005_TM_filter_utils get_struct__4942_filter_utils
#define P005_TM_filter_values struct__4942_filter_values
/****************************************************************
 ** P005Es_T_TM
 ****************************************************************/
extern const char * P005Es_T_TM_to_string(const void* pValue);
extern int check_P005Es_T_TM_string(const char* strValue);
extern int string_to_P005Es_T_TM(const char* strValue, void* pValue);
int is_P005Es_T_TM_allow_double_convertion();
extern int P005Es_T_TM_to_double(double * nValue, const void*);
#define get_P005Es_T_TM_signature get_array__4939_signature
#define compare_P005Es_T_TM_type compare_array__4939_type
#define P005Es_T_TM_filter_size array__4939_filter_size
#define get_P005Es_T_TM_filter_utils get_array__4939_filter_utils
#define P005Es_T_TM_filter_values array__4939_filter_values
/****************************************************************
 ** P005E_T_TM
 ****************************************************************/
extern const char * P005E_T_TM_to_string(const void* pValue);
extern int check_P005E_T_TM_string(const char* strValue);
extern int string_to_P005E_T_TM(const char* strValue, void* pValue);
int is_P005E_T_TM_allow_double_convertion();
extern int P005E_T_TM_to_double(double * nValue, const void*);
#define get_P005E_T_TM_signature get_struct__4928_signature
#define compare_P005E_T_TM_type compare_struct__4928_type
#define P005E_T_TM_filter_size struct__4928_filter_size
#define get_P005E_T_TM_filter_utils get_struct__4928_filter_utils
#define P005E_T_TM_filter_values struct__4928_filter_values
/****************************************************************
 ** P005E_array_T_TM
 ****************************************************************/
extern const char * P005E_array_T_TM_to_string(const void* pValue);
extern int check_P005E_array_T_TM_string(const char* strValue);
extern int string_to_P005E_array_T_TM(const char* strValue, void* pValue);
int is_P005E_array_T_TM_allow_double_convertion();
extern int P005E_array_T_TM_to_double(double * nValue, const void*);
#define get_P005E_array_T_TM_signature get_array_int_7_signature
#define compare_P005E_array_T_TM_type compare_array_int_7_type
#define P005E_array_T_TM_filter_size array_int_7_filter_size
#define get_P005E_array_T_TM_filter_utils get_array_int_7_filter_utils
#define P005E_array_T_TM_filter_values array_int_7_filter_values
/****************************************************************
 ** BaliseGroupData_TM
 ****************************************************************/
extern const char * BaliseGroupData_TM_to_string(const void* pValue);
extern int check_BaliseGroupData_TM_string(const char* strValue);
extern int string_to_BaliseGroupData_TM(const char* strValue, void* pValue);
int is_BaliseGroupData_TM_allow_double_convertion();
extern int BaliseGroupData_TM_to_double(double * nValue, const void*);
#define get_BaliseGroupData_TM_signature get_struct__4911_signature
#define compare_BaliseGroupData_TM_type compare_struct__4911_type
#define BaliseGroupData_TM_filter_size struct__4911_filter_size
#define get_BaliseGroupData_TM_filter_utils get_struct__4911_filter_utils
#define BaliseGroupData_TM_filter_values struct__4911_filter_values
/****************************************************************
 ** P005_array_T_TM
 ****************************************************************/
extern const char * P005_array_T_TM_to_string(const void* pValue);
extern int check_P005_array_T_TM_string(const char* strValue);
extern int string_to_P005_array_T_TM(const char* strValue, void* pValue);
int is_P005_array_T_TM_allow_double_convertion();
extern int P005_array_T_TM_to_double(double * nValue, const void*);
#define get_P005_array_T_TM_signature get_array_int_39_signature
#define compare_P005_array_T_TM_type compare_array_int_39_type
#define P005_array_T_TM_filter_size array_int_39_filter_size
#define get_P005_array_T_TM_filter_utils get_array_int_39_filter_utils
#define P005_array_T_TM_filter_values array_int_39_filter_values
/****************************************************************
 ** Array4_TM
 ****************************************************************/
extern const char * Array4_TM_to_string(const void* pValue);
extern int check_Array4_TM_string(const char* strValue);
extern int string_to_Array4_TM(const char* strValue, void* pValue);
int is_Array4_TM_allow_double_convertion();
extern int Array4_TM_to_double(double * nValue, const void*);
#define get_Array4_TM_signature get_array_int_4_signature
#define compare_Array4_TM_type compare_array_int_4_type
#define Array4_TM_filter_size array_int_4_filter_size
#define get_Array4_TM_filter_utils get_array_int_4_filter_utils
#define Array4_TM_filter_values array_int_4_filter_values
/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
extern const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_CompressedPackets_T_Common_Types_Pkg_signature get_struct__4879_signature
#define compare_CompressedPackets_T_Common_Types_Pkg_type compare_struct__4879_type
#define CompressedPackets_T_Common_Types_Pkg_filter_size struct__4879_filter_size
#define get_CompressedPackets_T_Common_Types_Pkg_filter_utils get_struct__4879_filter_utils
#define CompressedPackets_T_Common_Types_Pkg_filter_values struct__4879_filter_values
/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
extern const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_Metadata_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
extern int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_Metadata_T_Common_Types_Pkg_signature get_array__4876_signature
#define compare_Metadata_T_Common_Types_Pkg_type compare_array__4876_type
#define Metadata_T_Common_Types_Pkg_filter_size array__4876_filter_size
#define get_Metadata_T_Common_Types_Pkg_filter_utils get_array__4876_filter_utils
#define Metadata_T_Common_Types_Pkg_filter_values array__4876_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__4868_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__4868_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__4868_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__4868_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__4868_filter_values
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
#define get_BaliseGroupData_Basics_signature get_struct__4911_signature
#define compare_BaliseGroupData_Basics_type compare_struct__4911_type
#define BaliseGroupData_Basics_filter_size struct__4911_filter_size
#define get_BaliseGroupData_Basics_filter_utils get_struct__4911_filter_utils
#define BaliseGroupData_Basics_filter_values struct__4911_filter_values
/****************************************************************
 ** TelegramHeader_T_BG_Types_Pkg
 ****************************************************************/
extern const char * TelegramHeader_T_BG_Types_Pkg_to_string(const void* pValue);
extern int check_TelegramHeader_T_BG_Types_Pkg_string(const char* strValue);
extern int string_to_TelegramHeader_T_BG_Types_Pkg(const char* strValue, void* pValue);
int is_TelegramHeader_T_BG_Types_Pkg_allow_double_convertion();
extern int TelegramHeader_T_BG_Types_Pkg_to_double(double * nValue, const void*);
#define get_TelegramHeader_T_BG_Types_Pkg_signature get_struct__4852_signature
#define compare_TelegramHeader_T_BG_Types_Pkg_type compare_struct__4852_type
#define TelegramHeader_T_BG_Types_Pkg_filter_size struct__4852_filter_size
#define get_TelegramHeader_T_BG_Types_Pkg_filter_utils get_struct__4852_filter_utils
#define TelegramHeader_T_BG_Types_Pkg_filter_values struct__4852_filter_values
/****************************************************************
 ** LinkedBG_T_BG_Types_Pkg
 ****************************************************************/
extern const char * LinkedBG_T_BG_Types_Pkg_to_string(const void* pValue);
extern int check_LinkedBG_T_BG_Types_Pkg_string(const char* strValue);
extern int string_to_LinkedBG_T_BG_Types_Pkg(const char* strValue, void* pValue);
int is_LinkedBG_T_BG_Types_Pkg_allow_double_convertion();
extern int LinkedBG_T_BG_Types_Pkg_to_double(double * nValue, const void*);
#define get_LinkedBG_T_BG_Types_Pkg_signature get_struct__4835_signature
#define compare_LinkedBG_T_BG_Types_Pkg_type compare_struct__4835_type
#define LinkedBG_T_BG_Types_Pkg_filter_size struct__4835_filter_size
#define get_LinkedBG_T_BG_Types_Pkg_filter_utils get_struct__4835_filter_utils
#define LinkedBG_T_BG_Types_Pkg_filter_values struct__4835_filter_values
/****************************************************************
 ** LinkedBGs_T_BG_Types_Pkg
 ****************************************************************/
extern const char * LinkedBGs_T_BG_Types_Pkg_to_string(const void* pValue);
extern int check_LinkedBGs_T_BG_Types_Pkg_string(const char* strValue);
extern int string_to_LinkedBGs_T_BG_Types_Pkg(const char* strValue, void* pValue);
int is_LinkedBGs_T_BG_Types_Pkg_allow_double_convertion();
extern int LinkedBGs_T_BG_Types_Pkg_to_double(double * nValue, const void*);
#define get_LinkedBGs_T_BG_Types_Pkg_signature get_array__4849_signature
#define compare_LinkedBGs_T_BG_Types_Pkg_type compare_array__4849_type
#define LinkedBGs_T_BG_Types_Pkg_filter_size array__4849_filter_size
#define get_LinkedBGs_T_BG_Types_Pkg_filter_utils get_array__4849_filter_utils
#define LinkedBGs_T_BG_Types_Pkg_filter_values array__4849_filter_values

#endif /*TESTSTORYY00A_P005_INTERNAL_TYPES_CONVERTION */
