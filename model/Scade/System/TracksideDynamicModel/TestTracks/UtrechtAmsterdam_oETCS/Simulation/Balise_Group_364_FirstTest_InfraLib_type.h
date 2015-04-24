#ifndef BALISE_GROUP_364_FIRSTTEST_INFRALIB_TYPES_CONVERTION
#define BALISE_GROUP_364_FIRSTTEST_INFRALIB_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__1329_Utils;
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_struct__1345_Utils;
extern TypeUtils _SCSIM_array__1353_Utils;
extern TypeUtils _SCSIM_struct__1356_Utils;
extern TypeUtils _SCSIM_struct__1361_Utils;
extern TypeUtils _SCSIM_array__1372_Utils;
extern TypeUtils _SCSIM_struct__1375_Utils;
extern TypeUtils _SCSIM_array_int_7_Utils;
extern TypeUtils _SCSIM_struct__1387_Utils;
extern TypeUtils _SCSIM_struct__1396_Utils;
extern TypeUtils _SCSIM_struct__1401_Utils;
extern TypeUtils _SCSIM_array_int_461_Utils;
extern TypeUtils _SCSIM_array_int_11_Utils;
extern TypeUtils _SCSIM_array_int_18_Utils;
extern TypeUtils _SCSIM_array_int_25_Utils;
extern TypeUtils _SCSIM_array_int_32_Utils;
extern TypeUtils _SCSIM_array_int_39_Utils;
extern TypeUtils _SCSIM_array_int_4_Utils;
extern TypeUtils _SCSIM_array_int_500_500_Utils;
extern TypeUtils _SCSIM_TM_BaliseTelegramHeader_int_T_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_TM_P005_Utils;
extern TypeUtils _SCSIM_TM_P05Es_T_Utils;
extern TypeUtils _SCSIM_TM_P005E_T_Utils;
extern TypeUtils _SCSIM_TM_P005E_array_T_Utils;
extern TypeUtils _SCSIM_TM_BaliseGroupData_Utils;
extern TypeUtils _SCSIM_TM_OrBG_Utils;
extern TypeUtils _SCSIM_TM_OrLine_Utils;
extern TypeUtils _SCSIM_TM_CompressedBaliseMessage_Utils;
extern TypeUtils _SCSIM_B_data_internal_FirstTest_InfraLib_Utils;
extern TypeUtils _SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_Metadata_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_MetadataElement_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils;

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
 ** struct__1329
 ****************************************************************/
extern const char * struct__1329_to_string(const void* pValue);
extern int check_struct__1329_string(const char* strValue);
extern int string_to_struct__1329(const char* strValue, void* pValue);
int is_struct__1329_allow_double_convertion();
extern const char * get_struct__1329_signature();
extern int compare_struct__1329_type(int*, const char*, const void*);
#define struct__1329_filter_size 10
extern FilterUtils get_struct__1329_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1329_filter_values[10];
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
 ** struct__1345
 ****************************************************************/
extern const char * struct__1345_to_string(const void* pValue);
extern int check_struct__1345_string(const char* strValue);
extern int string_to_struct__1345(const char* strValue, void* pValue);
int is_struct__1345_allow_double_convertion();
extern const char * get_struct__1345_signature();
extern int compare_struct__1345_type(int*, const char*, const void*);
#define struct__1345_filter_size 5
extern FilterUtils get_struct__1345_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1345_filter_values[5];
/****************************************************************
 ** array__1353
 ****************************************************************/
extern const char * array__1353_to_string(const void* pValue);
extern int check_array__1353_string(const char* strValue);
extern int string_to_array__1353(const char* strValue, void* pValue);
int is_array__1353_allow_double_convertion();
extern const char * get_array__1353_signature();
extern int compare_array__1353_type(int*, const char*, const void*);
#define array__1353_filter_size 30
extern FilterUtils get_array__1353_filter_utils(const char* strFilter, void* pValue);
#define array__1353_filter_values 0
/****************************************************************
 ** struct__1356
 ****************************************************************/
extern const char * struct__1356_to_string(const void* pValue);
extern int check_struct__1356_string(const char* strValue);
extern int string_to_struct__1356(const char* strValue, void* pValue);
int is_struct__1356_allow_double_convertion();
extern const char * get_struct__1356_signature();
extern int compare_struct__1356_type(int*, const char*, const void*);
#define struct__1356_filter_size 2
extern FilterUtils get_struct__1356_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1356_filter_values[2];
/****************************************************************
 ** struct__1361
 ****************************************************************/
extern const char * struct__1361_to_string(const void* pValue);
extern int check_struct__1361_string(const char* strValue);
extern int string_to_struct__1361(const char* strValue, void* pValue);
int is_struct__1361_allow_double_convertion();
extern const char * get_struct__1361_signature();
extern int compare_struct__1361_type(int*, const char*, const void*);
#define struct__1361_filter_size 8
extern FilterUtils get_struct__1361_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1361_filter_values[8];
/****************************************************************
 ** array__1372
 ****************************************************************/
extern const char * array__1372_to_string(const void* pValue);
extern int check_array__1372_string(const char* strValue);
extern int string_to_array__1372(const char* strValue, void* pValue);
int is_array__1372_allow_double_convertion();
extern const char * get_array__1372_signature();
extern int compare_array__1372_type(int*, const char*, const void*);
#define array__1372_filter_size 5
extern FilterUtils get_array__1372_filter_utils(const char* strFilter, void* pValue);
#define array__1372_filter_values 0
/****************************************************************
 ** struct__1375
 ****************************************************************/
extern const char * struct__1375_to_string(const void* pValue);
extern int check_struct__1375_string(const char* strValue);
extern int string_to_struct__1375(const char* strValue, void* pValue);
int is_struct__1375_allow_double_convertion();
extern const char * get_struct__1375_signature();
extern int compare_struct__1375_type(int*, const char*, const void*);
#define struct__1375_filter_size 6
extern FilterUtils get_struct__1375_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1375_filter_values[6];
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
 ** struct__1387
 ****************************************************************/
extern const char * struct__1387_to_string(const void* pValue);
extern int check_struct__1387_string(const char* strValue);
extern int string_to_struct__1387(const char* strValue, void* pValue);
int is_struct__1387_allow_double_convertion();
extern const char * get_struct__1387_signature();
extern int compare_struct__1387_type(int*, const char*, const void*);
#define struct__1387_filter_size 6
extern FilterUtils get_struct__1387_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1387_filter_values[6];
/****************************************************************
 ** struct__1396
 ****************************************************************/
extern const char * struct__1396_to_string(const void* pValue);
extern int check_struct__1396_string(const char* strValue);
extern int string_to_struct__1396(const char* strValue, void* pValue);
int is_struct__1396_allow_double_convertion();
extern const char * get_struct__1396_signature();
extern int compare_struct__1396_type(int*, const char*, const void*);
#define struct__1396_filter_size 2
extern FilterUtils get_struct__1396_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1396_filter_values[2];
/****************************************************************
 ** struct__1401
 ****************************************************************/
extern const char * struct__1401_to_string(const void* pValue);
extern int check_struct__1401_string(const char* strValue);
extern int string_to_struct__1401(const char* strValue, void* pValue);
int is_struct__1401_allow_double_convertion();
extern const char * get_struct__1401_signature();
extern int compare_struct__1401_type(int*, const char*, const void*);
#define struct__1401_filter_size 5
extern FilterUtils get_struct__1401_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1401_filter_values[5];
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
 ** TM_BaliseTelegramHeader_int_T
 ****************************************************************/
extern const char * TM_BaliseTelegramHeader_int_T_to_string(const void* pValue);
extern int check_TM_BaliseTelegramHeader_int_T_string(const char* strValue);
extern int string_to_TM_BaliseTelegramHeader_int_T(const char* strValue, void* pValue);
int is_TM_BaliseTelegramHeader_int_T_allow_double_convertion();
extern int TM_BaliseTelegramHeader_int_T_to_double(double * nValue, const void*);
#define get_TM_BaliseTelegramHeader_int_T_signature get_struct__1329_signature
#define compare_TM_BaliseTelegramHeader_int_T_type compare_struct__1329_type
#define TM_BaliseTelegramHeader_int_T_filter_size struct__1329_filter_size
#define get_TM_BaliseTelegramHeader_int_T_filter_utils get_struct__1329_filter_utils
#define TM_BaliseTelegramHeader_int_T_filter_values struct__1329_filter_values
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
 ** TM_P005
 ****************************************************************/
extern const char * TM_P005_to_string(const void* pValue);
extern int check_TM_P005_string(const char* strValue);
extern int string_to_TM_P005(const char* strValue, void* pValue);
int is_TM_P005_allow_double_convertion();
extern int TM_P005_to_double(double * nValue, const void*);
#define get_TM_P005_signature get_struct__1375_signature
#define compare_TM_P005_type compare_struct__1375_type
#define TM_P005_filter_size struct__1375_filter_size
#define get_TM_P005_filter_utils get_struct__1375_filter_utils
#define TM_P005_filter_values struct__1375_filter_values
/****************************************************************
 ** TM_P05Es_T
 ****************************************************************/
extern const char * TM_P05Es_T_to_string(const void* pValue);
extern int check_TM_P05Es_T_string(const char* strValue);
extern int string_to_TM_P05Es_T(const char* strValue, void* pValue);
int is_TM_P05Es_T_allow_double_convertion();
extern int TM_P05Es_T_to_double(double * nValue, const void*);
#define get_TM_P05Es_T_signature get_array__1372_signature
#define compare_TM_P05Es_T_type compare_array__1372_type
#define TM_P05Es_T_filter_size array__1372_filter_size
#define get_TM_P05Es_T_filter_utils get_array__1372_filter_utils
#define TM_P05Es_T_filter_values array__1372_filter_values
/****************************************************************
 ** TM_P005E_T
 ****************************************************************/
extern const char * TM_P005E_T_to_string(const void* pValue);
extern int check_TM_P005E_T_string(const char* strValue);
extern int string_to_TM_P005E_T(const char* strValue, void* pValue);
int is_TM_P005E_T_allow_double_convertion();
extern int TM_P005E_T_to_double(double * nValue, const void*);
#define get_TM_P005E_T_signature get_struct__1361_signature
#define compare_TM_P005E_T_type compare_struct__1361_type
#define TM_P005E_T_filter_size struct__1361_filter_size
#define get_TM_P005E_T_filter_utils get_struct__1361_filter_utils
#define TM_P005E_T_filter_values struct__1361_filter_values
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
#define get_TM_BaliseGroupData_signature get_struct__1401_signature
#define compare_TM_BaliseGroupData_type compare_struct__1401_type
#define TM_BaliseGroupData_filter_size struct__1401_filter_size
#define get_TM_BaliseGroupData_filter_utils get_struct__1401_filter_utils
#define TM_BaliseGroupData_filter_values struct__1401_filter_values
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
 ** TM_CompressedBaliseMessage
 ****************************************************************/
extern const char * TM_CompressedBaliseMessage_to_string(const void* pValue);
extern int check_TM_CompressedBaliseMessage_string(const char* strValue);
extern int string_to_TM_CompressedBaliseMessage(const char* strValue, void* pValue);
int is_TM_CompressedBaliseMessage_allow_double_convertion();
extern int TM_CompressedBaliseMessage_to_double(double * nValue, const void*);
#define get_TM_CompressedBaliseMessage_signature get_struct__1396_signature
#define compare_TM_CompressedBaliseMessage_type compare_struct__1396_type
#define TM_CompressedBaliseMessage_filter_size struct__1396_filter_size
#define get_TM_CompressedBaliseMessage_filter_utils get_struct__1396_filter_utils
#define TM_CompressedBaliseMessage_filter_values struct__1396_filter_values
/****************************************************************
 ** B_data_internal_FirstTest_InfraLib
 ****************************************************************/
extern const char * B_data_internal_FirstTest_InfraLib_to_string(const void* pValue);
extern int check_B_data_internal_FirstTest_InfraLib_string(const char* strValue);
extern int string_to_B_data_internal_FirstTest_InfraLib(const char* strValue, void* pValue);
int is_B_data_internal_FirstTest_InfraLib_allow_double_convertion();
extern int B_data_internal_FirstTest_InfraLib_to_double(double * nValue, const void*);
#define get_B_data_internal_FirstTest_InfraLib_signature get_struct__1387_signature
#define compare_B_data_internal_FirstTest_InfraLib_type compare_struct__1387_type
#define B_data_internal_FirstTest_InfraLib_filter_size struct__1387_filter_size
#define get_B_data_internal_FirstTest_InfraLib_filter_utils get_struct__1387_filter_utils
#define B_data_internal_FirstTest_InfraLib_filter_values struct__1387_filter_values
/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
extern const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_CompressedPackets_T_Common_Types_Pkg_signature get_struct__1356_signature
#define compare_CompressedPackets_T_Common_Types_Pkg_type compare_struct__1356_type
#define CompressedPackets_T_Common_Types_Pkg_filter_size struct__1356_filter_size
#define get_CompressedPackets_T_Common_Types_Pkg_filter_utils get_struct__1356_filter_utils
#define CompressedPackets_T_Common_Types_Pkg_filter_values struct__1356_filter_values
/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
extern const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_Metadata_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
extern int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_Metadata_T_Common_Types_Pkg_signature get_array__1353_signature
#define compare_Metadata_T_Common_Types_Pkg_type compare_array__1353_type
#define Metadata_T_Common_Types_Pkg_filter_size array__1353_filter_size
#define get_Metadata_T_Common_Types_Pkg_filter_utils get_array__1353_filter_utils
#define Metadata_T_Common_Types_Pkg_filter_values array__1353_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__1345_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__1345_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__1345_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__1345_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__1345_filter_values
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

#endif /*BALISE_GROUP_364_FIRSTTEST_INFRALIB_TYPES_CONVERTION */
