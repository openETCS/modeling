#ifndef TRACKDISCONTINUITY_CALCTR_INFRALIB_TYPES_CONVERTION
#define TRACKDISCONTINUITY_CALCTR_INFRALIB_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__181_Utils;
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_struct__190_Utils;
extern TypeUtils _SCSIM_array__198_Utils;
extern TypeUtils _SCSIM_struct__201_Utils;
extern TypeUtils _SCSIM_struct__206_Utils;
extern TypeUtils _SCSIM_struct__219_Utils;
extern TypeUtils _SCSIM_struct__224_Utils;
extern TypeUtils _SCSIM_TM_CompressedBaliseMessage_Utils;
extern TypeUtils _SCSIM_TM_BaliseTelegramHeader_int_T_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_TrackSectionData_T_InfraLib_Utils;
extern TypeUtils _SCSIM_TrainPosRaw_T_InfraLib_Utils;
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
 ** struct__181
 ****************************************************************/
extern const char * struct__181_to_string(const void* pValue);
extern int check_struct__181_string(const char* strValue);
extern int string_to_struct__181(const char* strValue, void* pValue);
int is_struct__181_allow_double_convertion();
extern const char * get_struct__181_signature();
extern int compare_struct__181_type(int*, const char*, const void*);
#define struct__181_filter_size 3
extern FilterUtils get_struct__181_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__181_filter_values[3];
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
 ** struct__190
 ****************************************************************/
extern const char * struct__190_to_string(const void* pValue);
extern int check_struct__190_string(const char* strValue);
extern int string_to_struct__190(const char* strValue, void* pValue);
int is_struct__190_allow_double_convertion();
extern const char * get_struct__190_signature();
extern int compare_struct__190_type(int*, const char*, const void*);
#define struct__190_filter_size 5
extern FilterUtils get_struct__190_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__190_filter_values[5];
/****************************************************************
 ** array__198
 ****************************************************************/
extern const char * array__198_to_string(const void* pValue);
extern int check_array__198_string(const char* strValue);
extern int string_to_array__198(const char* strValue, void* pValue);
int is_array__198_allow_double_convertion();
extern const char * get_array__198_signature();
extern int compare_array__198_type(int*, const char*, const void*);
#define array__198_filter_size 30
extern FilterUtils get_array__198_filter_utils(const char* strFilter, void* pValue);
#define array__198_filter_values 0
/****************************************************************
 ** struct__201
 ****************************************************************/
extern const char * struct__201_to_string(const void* pValue);
extern int check_struct__201_string(const char* strValue);
extern int string_to_struct__201(const char* strValue, void* pValue);
int is_struct__201_allow_double_convertion();
extern const char * get_struct__201_signature();
extern int compare_struct__201_type(int*, const char*, const void*);
#define struct__201_filter_size 2
extern FilterUtils get_struct__201_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__201_filter_values[2];
/****************************************************************
 ** struct__206
 ****************************************************************/
extern const char * struct__206_to_string(const void* pValue);
extern int check_struct__206_string(const char* strValue);
extern int string_to_struct__206(const char* strValue, void* pValue);
int is_struct__206_allow_double_convertion();
extern const char * get_struct__206_signature();
extern int compare_struct__206_type(int*, const char*, const void*);
#define struct__206_filter_size 10
extern FilterUtils get_struct__206_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__206_filter_values[10];
/****************************************************************
 ** struct__219
 ****************************************************************/
extern const char * struct__219_to_string(const void* pValue);
extern int check_struct__219_string(const char* strValue);
extern int string_to_struct__219(const char* strValue, void* pValue);
int is_struct__219_allow_double_convertion();
extern const char * get_struct__219_signature();
extern int compare_struct__219_type(int*, const char*, const void*);
#define struct__219_filter_size 2
extern FilterUtils get_struct__219_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__219_filter_values[2];
/****************************************************************
 ** struct__224
 ****************************************************************/
extern const char * struct__224_to_string(const void* pValue);
extern int check_struct__224_string(const char* strValue);
extern int string_to_struct__224(const char* strValue, void* pValue);
int is_struct__224_allow_double_convertion();
extern const char * get_struct__224_signature();
extern int compare_struct__224_type(int*, const char*, const void*);
#define struct__224_filter_size 2
extern FilterUtils get_struct__224_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__224_filter_values[2];
/****************************************************************
 ** TM_CompressedBaliseMessage
 ****************************************************************/
extern const char * TM_CompressedBaliseMessage_to_string(const void* pValue);
extern int check_TM_CompressedBaliseMessage_string(const char* strValue);
extern int string_to_TM_CompressedBaliseMessage(const char* strValue, void* pValue);
int is_TM_CompressedBaliseMessage_allow_double_convertion();
extern int TM_CompressedBaliseMessage_to_double(double * nValue, const void*);
#define get_TM_CompressedBaliseMessage_signature get_struct__219_signature
#define compare_TM_CompressedBaliseMessage_type compare_struct__219_type
#define TM_CompressedBaliseMessage_filter_size struct__219_filter_size
#define get_TM_CompressedBaliseMessage_filter_utils get_struct__219_filter_utils
#define TM_CompressedBaliseMessage_filter_values struct__219_filter_values
/****************************************************************
 ** TM_BaliseTelegramHeader_int_T
 ****************************************************************/
extern const char * TM_BaliseTelegramHeader_int_T_to_string(const void* pValue);
extern int check_TM_BaliseTelegramHeader_int_T_string(const char* strValue);
extern int string_to_TM_BaliseTelegramHeader_int_T(const char* strValue, void* pValue);
int is_TM_BaliseTelegramHeader_int_T_allow_double_convertion();
extern int TM_BaliseTelegramHeader_int_T_to_double(double * nValue, const void*);
#define get_TM_BaliseTelegramHeader_int_T_signature get_struct__206_signature
#define compare_TM_BaliseTelegramHeader_int_T_type compare_struct__206_type
#define TM_BaliseTelegramHeader_int_T_filter_size struct__206_filter_size
#define get_TM_BaliseTelegramHeader_int_T_filter_utils get_struct__206_filter_utils
#define TM_BaliseTelegramHeader_int_T_filter_values struct__206_filter_values
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
#define get_TrackSectionData_T_InfraLib_signature get_struct__224_signature
#define compare_TrackSectionData_T_InfraLib_type compare_struct__224_type
#define TrackSectionData_T_InfraLib_filter_size struct__224_filter_size
#define get_TrackSectionData_T_InfraLib_filter_utils get_struct__224_filter_utils
#define TrackSectionData_T_InfraLib_filter_values struct__224_filter_values
/****************************************************************
 ** TrainPosRaw_T_InfraLib
 ****************************************************************/
extern const char * TrainPosRaw_T_InfraLib_to_string(const void* pValue);
extern int check_TrainPosRaw_T_InfraLib_string(const char* strValue);
extern int string_to_TrainPosRaw_T_InfraLib(const char* strValue, void* pValue);
int is_TrainPosRaw_T_InfraLib_allow_double_convertion();
extern int TrainPosRaw_T_InfraLib_to_double(double * nValue, const void*);
#define get_TrainPosRaw_T_InfraLib_signature get_struct__181_signature
#define compare_TrainPosRaw_T_InfraLib_type compare_struct__181_type
#define TrainPosRaw_T_InfraLib_filter_size struct__181_filter_size
#define get_TrainPosRaw_T_InfraLib_filter_utils get_struct__181_filter_utils
#define TrainPosRaw_T_InfraLib_filter_values struct__181_filter_values
/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
extern const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_CompressedPackets_T_Common_Types_Pkg_signature get_struct__201_signature
#define compare_CompressedPackets_T_Common_Types_Pkg_type compare_struct__201_type
#define CompressedPackets_T_Common_Types_Pkg_filter_size struct__201_filter_size
#define get_CompressedPackets_T_Common_Types_Pkg_filter_utils get_struct__201_filter_utils
#define CompressedPackets_T_Common_Types_Pkg_filter_values struct__201_filter_values
/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
extern const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_Metadata_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
extern int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_Metadata_T_Common_Types_Pkg_signature get_array__198_signature
#define compare_Metadata_T_Common_Types_Pkg_type compare_array__198_type
#define Metadata_T_Common_Types_Pkg_filter_size array__198_filter_size
#define get_Metadata_T_Common_Types_Pkg_filter_utils get_array__198_filter_utils
#define Metadata_T_Common_Types_Pkg_filter_values array__198_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__190_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__190_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__190_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__190_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__190_filter_values
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

#endif /*TRACKDISCONTINUITY_CALCTR_INFRALIB_TYPES_CONVERTION */
