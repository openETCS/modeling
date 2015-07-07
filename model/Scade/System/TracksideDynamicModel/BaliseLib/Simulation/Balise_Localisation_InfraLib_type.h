#ifndef BALISE_LOCALISATION_INFRALIB_TYPES_CONVERTION
#define BALISE_LOCALISATION_INFRALIB_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__358_Utils;
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_struct__374_Utils;
extern TypeUtils _SCSIM_array__382_Utils;
extern TypeUtils _SCSIM_struct__385_Utils;
extern TypeUtils _SCSIM_struct__390_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_B_data_internal_T_InfraLib_Utils;
extern TypeUtils _SCSIM_BaliseTelegramHeader_int_T_TM_Utils;
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
 ** struct__358
 ****************************************************************/
extern const char * struct__358_to_string(const void* pValue);
extern int check_struct__358_string(const char* strValue);
extern int string_to_struct__358(const char* strValue, void* pValue);
int is_struct__358_allow_double_convertion();
extern const char * get_struct__358_signature();
extern int compare_struct__358_type(int*, const char*, const void*);
#define struct__358_filter_size 10
extern FilterUtils get_struct__358_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__358_filter_values[10];
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
 ** struct__374
 ****************************************************************/
extern const char * struct__374_to_string(const void* pValue);
extern int check_struct__374_string(const char* strValue);
extern int string_to_struct__374(const char* strValue, void* pValue);
int is_struct__374_allow_double_convertion();
extern const char * get_struct__374_signature();
extern int compare_struct__374_type(int*, const char*, const void*);
#define struct__374_filter_size 5
extern FilterUtils get_struct__374_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__374_filter_values[5];
/****************************************************************
 ** array__382
 ****************************************************************/
extern const char * array__382_to_string(const void* pValue);
extern int check_array__382_string(const char* strValue);
extern int string_to_array__382(const char* strValue, void* pValue);
int is_array__382_allow_double_convertion();
extern const char * get_array__382_signature();
extern int compare_array__382_type(int*, const char*, const void*);
#define array__382_filter_size 30
extern FilterUtils get_array__382_filter_utils(const char* strFilter, void* pValue);
#define array__382_filter_values 0
/****************************************************************
 ** struct__385
 ****************************************************************/
extern const char * struct__385_to_string(const void* pValue);
extern int check_struct__385_string(const char* strValue);
extern int string_to_struct__385(const char* strValue, void* pValue);
int is_struct__385_allow_double_convertion();
extern const char * get_struct__385_signature();
extern int compare_struct__385_type(int*, const char*, const void*);
#define struct__385_filter_size 2
extern FilterUtils get_struct__385_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__385_filter_values[2];
/****************************************************************
 ** struct__390
 ****************************************************************/
extern const char * struct__390_to_string(const void* pValue);
extern int check_struct__390_string(const char* strValue);
extern int string_to_struct__390(const char* strValue, void* pValue);
int is_struct__390_allow_double_convertion();
extern const char * get_struct__390_signature();
extern int compare_struct__390_type(int*, const char*, const void*);
#define struct__390_filter_size 6
extern FilterUtils get_struct__390_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__390_filter_values[6];
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
 ** B_data_internal_T_InfraLib
 ****************************************************************/
extern const char * B_data_internal_T_InfraLib_to_string(const void* pValue);
extern int check_B_data_internal_T_InfraLib_string(const char* strValue);
extern int string_to_B_data_internal_T_InfraLib(const char* strValue, void* pValue);
int is_B_data_internal_T_InfraLib_allow_double_convertion();
extern int B_data_internal_T_InfraLib_to_double(double * nValue, const void*);
#define get_B_data_internal_T_InfraLib_signature get_struct__390_signature
#define compare_B_data_internal_T_InfraLib_type compare_struct__390_type
#define B_data_internal_T_InfraLib_filter_size struct__390_filter_size
#define get_B_data_internal_T_InfraLib_filter_utils get_struct__390_filter_utils
#define B_data_internal_T_InfraLib_filter_values struct__390_filter_values
/****************************************************************
 ** BaliseTelegramHeader_int_T_TM
 ****************************************************************/
extern const char * BaliseTelegramHeader_int_T_TM_to_string(const void* pValue);
extern int check_BaliseTelegramHeader_int_T_TM_string(const char* strValue);
extern int string_to_BaliseTelegramHeader_int_T_TM(const char* strValue, void* pValue);
int is_BaliseTelegramHeader_int_T_TM_allow_double_convertion();
extern int BaliseTelegramHeader_int_T_TM_to_double(double * nValue, const void*);
#define get_BaliseTelegramHeader_int_T_TM_signature get_struct__358_signature
#define compare_BaliseTelegramHeader_int_T_TM_type compare_struct__358_type
#define BaliseTelegramHeader_int_T_TM_filter_size struct__358_filter_size
#define get_BaliseTelegramHeader_int_T_TM_filter_utils get_struct__358_filter_utils
#define BaliseTelegramHeader_int_T_TM_filter_values struct__358_filter_values
/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
extern const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_CompressedPackets_T_Common_Types_Pkg_signature get_struct__385_signature
#define compare_CompressedPackets_T_Common_Types_Pkg_type compare_struct__385_type
#define CompressedPackets_T_Common_Types_Pkg_filter_size struct__385_filter_size
#define get_CompressedPackets_T_Common_Types_Pkg_filter_utils get_struct__385_filter_utils
#define CompressedPackets_T_Common_Types_Pkg_filter_values struct__385_filter_values
/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
extern const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_Metadata_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
extern int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_Metadata_T_Common_Types_Pkg_signature get_array__382_signature
#define compare_Metadata_T_Common_Types_Pkg_type compare_array__382_type
#define Metadata_T_Common_Types_Pkg_filter_size array__382_filter_size
#define get_Metadata_T_Common_Types_Pkg_filter_utils get_array__382_filter_utils
#define Metadata_T_Common_Types_Pkg_filter_values array__382_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__374_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__374_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__374_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__374_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__374_filter_values
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

#endif /*BALISE_LOCALISATION_INFRALIB_TYPES_CONVERTION */
