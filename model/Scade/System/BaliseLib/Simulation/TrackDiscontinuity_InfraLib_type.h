#ifndef TRACKDISCONTINUITY_INFRALIB_TYPES_CONVERTION
#define TRACKDISCONTINUITY_INFRALIB_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__297_Utils;
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_struct__306_Utils;
extern TypeUtils _SCSIM_array__314_Utils;
extern TypeUtils _SCSIM_struct__317_Utils;
extern TypeUtils _SCSIM_struct__322_Utils;
extern TypeUtils _SCSIM_struct__335_Utils;
extern TypeUtils _SCSIM_struct__340_Utils;
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
 ** struct__297
 ****************************************************************/
extern const char * struct__297_to_string(const void* pValue);
extern int check_struct__297_string(const char* strValue);
extern int string_to_struct__297(const char* strValue, void* pValue);
int is_struct__297_allow_double_convertion();
extern const char * get_struct__297_signature();
extern int compare_struct__297_type(int*, const char*, const void*);
#define struct__297_filter_size 3
extern FilterUtils get_struct__297_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__297_filter_values[3];
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
 ** struct__306
 ****************************************************************/
extern const char * struct__306_to_string(const void* pValue);
extern int check_struct__306_string(const char* strValue);
extern int string_to_struct__306(const char* strValue, void* pValue);
int is_struct__306_allow_double_convertion();
extern const char * get_struct__306_signature();
extern int compare_struct__306_type(int*, const char*, const void*);
#define struct__306_filter_size 5
extern FilterUtils get_struct__306_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__306_filter_values[5];
/****************************************************************
 ** array__314
 ****************************************************************/
extern const char * array__314_to_string(const void* pValue);
extern int check_array__314_string(const char* strValue);
extern int string_to_array__314(const char* strValue, void* pValue);
int is_array__314_allow_double_convertion();
extern const char * get_array__314_signature();
extern int compare_array__314_type(int*, const char*, const void*);
#define array__314_filter_size 30
extern FilterUtils get_array__314_filter_utils(const char* strFilter, void* pValue);
#define array__314_filter_values 0
/****************************************************************
 ** struct__317
 ****************************************************************/
extern const char * struct__317_to_string(const void* pValue);
extern int check_struct__317_string(const char* strValue);
extern int string_to_struct__317(const char* strValue, void* pValue);
int is_struct__317_allow_double_convertion();
extern const char * get_struct__317_signature();
extern int compare_struct__317_type(int*, const char*, const void*);
#define struct__317_filter_size 2
extern FilterUtils get_struct__317_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__317_filter_values[2];
/****************************************************************
 ** struct__322
 ****************************************************************/
extern const char * struct__322_to_string(const void* pValue);
extern int check_struct__322_string(const char* strValue);
extern int string_to_struct__322(const char* strValue, void* pValue);
int is_struct__322_allow_double_convertion();
extern const char * get_struct__322_signature();
extern int compare_struct__322_type(int*, const char*, const void*);
#define struct__322_filter_size 10
extern FilterUtils get_struct__322_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__322_filter_values[10];
/****************************************************************
 ** struct__335
 ****************************************************************/
extern const char * struct__335_to_string(const void* pValue);
extern int check_struct__335_string(const char* strValue);
extern int string_to_struct__335(const char* strValue, void* pValue);
int is_struct__335_allow_double_convertion();
extern const char * get_struct__335_signature();
extern int compare_struct__335_type(int*, const char*, const void*);
#define struct__335_filter_size 2
extern FilterUtils get_struct__335_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__335_filter_values[2];
/****************************************************************
 ** struct__340
 ****************************************************************/
extern const char * struct__340_to_string(const void* pValue);
extern int check_struct__340_string(const char* strValue);
extern int string_to_struct__340(const char* strValue, void* pValue);
int is_struct__340_allow_double_convertion();
extern const char * get_struct__340_signature();
extern int compare_struct__340_type(int*, const char*, const void*);
#define struct__340_filter_size 2
extern FilterUtils get_struct__340_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__340_filter_values[2];
/****************************************************************
 ** TM_CompressedBaliseMessage
 ****************************************************************/
extern const char * TM_CompressedBaliseMessage_to_string(const void* pValue);
extern int check_TM_CompressedBaliseMessage_string(const char* strValue);
extern int string_to_TM_CompressedBaliseMessage(const char* strValue, void* pValue);
int is_TM_CompressedBaliseMessage_allow_double_convertion();
extern int TM_CompressedBaliseMessage_to_double(double * nValue, const void*);
#define get_TM_CompressedBaliseMessage_signature get_struct__335_signature
#define compare_TM_CompressedBaliseMessage_type compare_struct__335_type
#define TM_CompressedBaliseMessage_filter_size struct__335_filter_size
#define get_TM_CompressedBaliseMessage_filter_utils get_struct__335_filter_utils
#define TM_CompressedBaliseMessage_filter_values struct__335_filter_values
/****************************************************************
 ** TM_BaliseTelegramHeader_int_T
 ****************************************************************/
extern const char * TM_BaliseTelegramHeader_int_T_to_string(const void* pValue);
extern int check_TM_BaliseTelegramHeader_int_T_string(const char* strValue);
extern int string_to_TM_BaliseTelegramHeader_int_T(const char* strValue, void* pValue);
int is_TM_BaliseTelegramHeader_int_T_allow_double_convertion();
extern int TM_BaliseTelegramHeader_int_T_to_double(double * nValue, const void*);
#define get_TM_BaliseTelegramHeader_int_T_signature get_struct__322_signature
#define compare_TM_BaliseTelegramHeader_int_T_type compare_struct__322_type
#define TM_BaliseTelegramHeader_int_T_filter_size struct__322_filter_size
#define get_TM_BaliseTelegramHeader_int_T_filter_utils get_struct__322_filter_utils
#define TM_BaliseTelegramHeader_int_T_filter_values struct__322_filter_values
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
#define get_TrackSectionData_T_InfraLib_signature get_struct__340_signature
#define compare_TrackSectionData_T_InfraLib_type compare_struct__340_type
#define TrackSectionData_T_InfraLib_filter_size struct__340_filter_size
#define get_TrackSectionData_T_InfraLib_filter_utils get_struct__340_filter_utils
#define TrackSectionData_T_InfraLib_filter_values struct__340_filter_values
/****************************************************************
 ** TrainPosRaw_T_InfraLib
 ****************************************************************/
extern const char * TrainPosRaw_T_InfraLib_to_string(const void* pValue);
extern int check_TrainPosRaw_T_InfraLib_string(const char* strValue);
extern int string_to_TrainPosRaw_T_InfraLib(const char* strValue, void* pValue);
int is_TrainPosRaw_T_InfraLib_allow_double_convertion();
extern int TrainPosRaw_T_InfraLib_to_double(double * nValue, const void*);
#define get_TrainPosRaw_T_InfraLib_signature get_struct__297_signature
#define compare_TrainPosRaw_T_InfraLib_type compare_struct__297_type
#define TrainPosRaw_T_InfraLib_filter_size struct__297_filter_size
#define get_TrainPosRaw_T_InfraLib_filter_utils get_struct__297_filter_utils
#define TrainPosRaw_T_InfraLib_filter_values struct__297_filter_values
/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
extern const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_CompressedPackets_T_Common_Types_Pkg_signature get_struct__317_signature
#define compare_CompressedPackets_T_Common_Types_Pkg_type compare_struct__317_type
#define CompressedPackets_T_Common_Types_Pkg_filter_size struct__317_filter_size
#define get_CompressedPackets_T_Common_Types_Pkg_filter_utils get_struct__317_filter_utils
#define CompressedPackets_T_Common_Types_Pkg_filter_values struct__317_filter_values
/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
extern const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_Metadata_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
extern int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_Metadata_T_Common_Types_Pkg_signature get_array__314_signature
#define compare_Metadata_T_Common_Types_Pkg_type compare_array__314_type
#define Metadata_T_Common_Types_Pkg_filter_size array__314_filter_size
#define get_Metadata_T_Common_Types_Pkg_filter_utils get_array__314_filter_utils
#define Metadata_T_Common_Types_Pkg_filter_values array__314_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__306_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__306_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__306_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__306_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__306_filter_values
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

#endif /*TRACKDISCONTINUITY_INFRALIB_TYPES_CONVERTION */
