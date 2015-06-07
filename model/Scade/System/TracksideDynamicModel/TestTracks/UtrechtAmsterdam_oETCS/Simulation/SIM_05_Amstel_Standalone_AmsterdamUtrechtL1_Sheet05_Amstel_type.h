#ifndef SIM_05_AMSTEL_STANDALONE_AMSTERDAMUTRECHTL1_SHEET05_AMSTEL_TYPES_CONVERTION
#define SIM_05_AMSTEL_STANDALONE_AMSTERDAMUTRECHTL1_SHEET05_AMSTEL_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_struct__1383_Utils;
extern TypeUtils _SCSIM_array__1391_Utils;
extern TypeUtils _SCSIM_struct__1394_Utils;
extern TypeUtils _SCSIM_struct__1399_Utils;
extern TypeUtils _SCSIM_struct__1412_Utils;
extern TypeUtils _SCSIM_struct__1417_Utils;
extern TypeUtils _SCSIM_struct__1423_Utils;
extern TypeUtils _SCSIM_struct__1428_Utils;
extern TypeUtils _SCSIM_struct__1436_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_TrackSectionData_T_InfraLib_Utils;
extern TypeUtils _SCSIM_TrainPosRaw_T_InfraLib_Utils;
extern TypeUtils _SCSIM_B_data_internal_T_InfraLib_Utils;
extern TypeUtils _SCSIM_CompressedBaliseMessage_TM_Utils;
extern TypeUtils _SCSIM_BaliseTelegramHeader_int_T_TM_Utils;
extern TypeUtils _SCSIM_OrBG_TM_Utils;
extern TypeUtils _SCSIM_OrLine_TM_Utils;
extern TypeUtils _SCSIM_BaliseGroupData_TM_Utils;
extern TypeUtils _SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_Metadata_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_MetadataElement_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_BaliseGroupData_Basics_Utils;

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
 ** struct__1383
 ****************************************************************/
extern const char * struct__1383_to_string(const void* pValue);
extern int check_struct__1383_string(const char* strValue);
extern int string_to_struct__1383(const char* strValue, void* pValue);
int is_struct__1383_allow_double_convertion();
extern const char * get_struct__1383_signature();
extern int compare_struct__1383_type(int*, const char*, const void*);
#define struct__1383_filter_size 5
extern FilterUtils get_struct__1383_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1383_filter_values[5];
/****************************************************************
 ** array__1391
 ****************************************************************/
extern const char * array__1391_to_string(const void* pValue);
extern int check_array__1391_string(const char* strValue);
extern int string_to_array__1391(const char* strValue, void* pValue);
int is_array__1391_allow_double_convertion();
extern const char * get_array__1391_signature();
extern int compare_array__1391_type(int*, const char*, const void*);
#define array__1391_filter_size 30
extern FilterUtils get_array__1391_filter_utils(const char* strFilter, void* pValue);
#define array__1391_filter_values 0
/****************************************************************
 ** struct__1394
 ****************************************************************/
extern const char * struct__1394_to_string(const void* pValue);
extern int check_struct__1394_string(const char* strValue);
extern int string_to_struct__1394(const char* strValue, void* pValue);
int is_struct__1394_allow_double_convertion();
extern const char * get_struct__1394_signature();
extern int compare_struct__1394_type(int*, const char*, const void*);
#define struct__1394_filter_size 2
extern FilterUtils get_struct__1394_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1394_filter_values[2];
/****************************************************************
 ** struct__1399
 ****************************************************************/
extern const char * struct__1399_to_string(const void* pValue);
extern int check_struct__1399_string(const char* strValue);
extern int string_to_struct__1399(const char* strValue, void* pValue);
int is_struct__1399_allow_double_convertion();
extern const char * get_struct__1399_signature();
extern int compare_struct__1399_type(int*, const char*, const void*);
#define struct__1399_filter_size 10
extern FilterUtils get_struct__1399_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1399_filter_values[10];
/****************************************************************
 ** struct__1412
 ****************************************************************/
extern const char * struct__1412_to_string(const void* pValue);
extern int check_struct__1412_string(const char* strValue);
extern int string_to_struct__1412(const char* strValue, void* pValue);
int is_struct__1412_allow_double_convertion();
extern const char * get_struct__1412_signature();
extern int compare_struct__1412_type(int*, const char*, const void*);
#define struct__1412_filter_size 2
extern FilterUtils get_struct__1412_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1412_filter_values[2];
/****************************************************************
 ** struct__1417
 ****************************************************************/
extern const char * struct__1417_to_string(const void* pValue);
extern int check_struct__1417_string(const char* strValue);
extern int string_to_struct__1417(const char* strValue, void* pValue);
int is_struct__1417_allow_double_convertion();
extern const char * get_struct__1417_signature();
extern int compare_struct__1417_type(int*, const char*, const void*);
#define struct__1417_filter_size 3
extern FilterUtils get_struct__1417_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1417_filter_values[3];
/****************************************************************
 ** struct__1423
 ****************************************************************/
extern const char * struct__1423_to_string(const void* pValue);
extern int check_struct__1423_string(const char* strValue);
extern int string_to_struct__1423(const char* strValue, void* pValue);
int is_struct__1423_allow_double_convertion();
extern const char * get_struct__1423_signature();
extern int compare_struct__1423_type(int*, const char*, const void*);
#define struct__1423_filter_size 2
extern FilterUtils get_struct__1423_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1423_filter_values[2];
/****************************************************************
 ** struct__1428
 ****************************************************************/
extern const char * struct__1428_to_string(const void* pValue);
extern int check_struct__1428_string(const char* strValue);
extern int string_to_struct__1428(const char* strValue, void* pValue);
int is_struct__1428_allow_double_convertion();
extern const char * get_struct__1428_signature();
extern int compare_struct__1428_type(int*, const char*, const void*);
#define struct__1428_filter_size 5
extern FilterUtils get_struct__1428_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1428_filter_values[5];
/****************************************************************
 ** struct__1436
 ****************************************************************/
extern const char * struct__1436_to_string(const void* pValue);
extern int check_struct__1436_string(const char* strValue);
extern int string_to_struct__1436(const char* strValue, void* pValue);
int is_struct__1436_allow_double_convertion();
extern const char * get_struct__1436_signature();
extern int compare_struct__1436_type(int*, const char*, const void*);
#define struct__1436_filter_size 6
extern FilterUtils get_struct__1436_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1436_filter_values[6];
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
 ** TrackSectionData_T_InfraLib
 ****************************************************************/
extern const char * TrackSectionData_T_InfraLib_to_string(const void* pValue);
extern int check_TrackSectionData_T_InfraLib_string(const char* strValue);
extern int string_to_TrackSectionData_T_InfraLib(const char* strValue, void* pValue);
int is_TrackSectionData_T_InfraLib_allow_double_convertion();
extern int TrackSectionData_T_InfraLib_to_double(double * nValue, const void*);
#define get_TrackSectionData_T_InfraLib_signature get_struct__1423_signature
#define compare_TrackSectionData_T_InfraLib_type compare_struct__1423_type
#define TrackSectionData_T_InfraLib_filter_size struct__1423_filter_size
#define get_TrackSectionData_T_InfraLib_filter_utils get_struct__1423_filter_utils
#define TrackSectionData_T_InfraLib_filter_values struct__1423_filter_values
/****************************************************************
 ** TrainPosRaw_T_InfraLib
 ****************************************************************/
extern const char * TrainPosRaw_T_InfraLib_to_string(const void* pValue);
extern int check_TrainPosRaw_T_InfraLib_string(const char* strValue);
extern int string_to_TrainPosRaw_T_InfraLib(const char* strValue, void* pValue);
int is_TrainPosRaw_T_InfraLib_allow_double_convertion();
extern int TrainPosRaw_T_InfraLib_to_double(double * nValue, const void*);
#define get_TrainPosRaw_T_InfraLib_signature get_struct__1417_signature
#define compare_TrainPosRaw_T_InfraLib_type compare_struct__1417_type
#define TrainPosRaw_T_InfraLib_filter_size struct__1417_filter_size
#define get_TrainPosRaw_T_InfraLib_filter_utils get_struct__1417_filter_utils
#define TrainPosRaw_T_InfraLib_filter_values struct__1417_filter_values
/****************************************************************
 ** B_data_internal_T_InfraLib
 ****************************************************************/
extern const char * B_data_internal_T_InfraLib_to_string(const void* pValue);
extern int check_B_data_internal_T_InfraLib_string(const char* strValue);
extern int string_to_B_data_internal_T_InfraLib(const char* strValue, void* pValue);
int is_B_data_internal_T_InfraLib_allow_double_convertion();
extern int B_data_internal_T_InfraLib_to_double(double * nValue, const void*);
#define get_B_data_internal_T_InfraLib_signature get_struct__1436_signature
#define compare_B_data_internal_T_InfraLib_type compare_struct__1436_type
#define B_data_internal_T_InfraLib_filter_size struct__1436_filter_size
#define get_B_data_internal_T_InfraLib_filter_utils get_struct__1436_filter_utils
#define B_data_internal_T_InfraLib_filter_values struct__1436_filter_values
/****************************************************************
 ** CompressedBaliseMessage_TM
 ****************************************************************/
extern const char * CompressedBaliseMessage_TM_to_string(const void* pValue);
extern int check_CompressedBaliseMessage_TM_string(const char* strValue);
extern int string_to_CompressedBaliseMessage_TM(const char* strValue, void* pValue);
int is_CompressedBaliseMessage_TM_allow_double_convertion();
extern int CompressedBaliseMessage_TM_to_double(double * nValue, const void*);
#define get_CompressedBaliseMessage_TM_signature get_struct__1412_signature
#define compare_CompressedBaliseMessage_TM_type compare_struct__1412_type
#define CompressedBaliseMessage_TM_filter_size struct__1412_filter_size
#define get_CompressedBaliseMessage_TM_filter_utils get_struct__1412_filter_utils
#define CompressedBaliseMessage_TM_filter_values struct__1412_filter_values
/****************************************************************
 ** BaliseTelegramHeader_int_T_TM
 ****************************************************************/
extern const char * BaliseTelegramHeader_int_T_TM_to_string(const void* pValue);
extern int check_BaliseTelegramHeader_int_T_TM_string(const char* strValue);
extern int string_to_BaliseTelegramHeader_int_T_TM(const char* strValue, void* pValue);
int is_BaliseTelegramHeader_int_T_TM_allow_double_convertion();
extern int BaliseTelegramHeader_int_T_TM_to_double(double * nValue, const void*);
#define get_BaliseTelegramHeader_int_T_TM_signature get_struct__1399_signature
#define compare_BaliseTelegramHeader_int_T_TM_type compare_struct__1399_type
#define BaliseTelegramHeader_int_T_TM_filter_size struct__1399_filter_size
#define get_BaliseTelegramHeader_int_T_TM_filter_utils get_struct__1399_filter_utils
#define BaliseTelegramHeader_int_T_TM_filter_values struct__1399_filter_values
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
 ** BaliseGroupData_TM
 ****************************************************************/
extern const char * BaliseGroupData_TM_to_string(const void* pValue);
extern int check_BaliseGroupData_TM_string(const char* strValue);
extern int string_to_BaliseGroupData_TM(const char* strValue, void* pValue);
int is_BaliseGroupData_TM_allow_double_convertion();
extern int BaliseGroupData_TM_to_double(double * nValue, const void*);
#define get_BaliseGroupData_TM_signature get_struct__1428_signature
#define compare_BaliseGroupData_TM_type compare_struct__1428_type
#define BaliseGroupData_TM_filter_size struct__1428_filter_size
#define get_BaliseGroupData_TM_filter_utils get_struct__1428_filter_utils
#define BaliseGroupData_TM_filter_values struct__1428_filter_values
/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
extern const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_CompressedPackets_T_Common_Types_Pkg_signature get_struct__1394_signature
#define compare_CompressedPackets_T_Common_Types_Pkg_type compare_struct__1394_type
#define CompressedPackets_T_Common_Types_Pkg_filter_size struct__1394_filter_size
#define get_CompressedPackets_T_Common_Types_Pkg_filter_utils get_struct__1394_filter_utils
#define CompressedPackets_T_Common_Types_Pkg_filter_values struct__1394_filter_values
/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
extern const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_Metadata_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
extern int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_Metadata_T_Common_Types_Pkg_signature get_array__1391_signature
#define compare_Metadata_T_Common_Types_Pkg_type compare_array__1391_type
#define Metadata_T_Common_Types_Pkg_filter_size array__1391_filter_size
#define get_Metadata_T_Common_Types_Pkg_filter_utils get_array__1391_filter_utils
#define Metadata_T_Common_Types_Pkg_filter_values array__1391_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__1383_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__1383_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__1383_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__1383_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__1383_filter_values
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
#define get_BaliseGroupData_Basics_signature get_struct__1428_signature
#define compare_BaliseGroupData_Basics_type compare_struct__1428_type
#define BaliseGroupData_Basics_filter_size struct__1428_filter_size
#define get_BaliseGroupData_Basics_filter_utils get_struct__1428_filter_utils
#define BaliseGroupData_Basics_filter_values struct__1428_filter_values

#endif /*SIM_05_AMSTEL_STANDALONE_AMSTERDAMUTRECHTL1_SHEET05_AMSTEL_TYPES_CONVERTION */
