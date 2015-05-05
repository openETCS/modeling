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
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_struct__308_Utils;
extern TypeUtils _SCSIM_array__316_Utils;
extern TypeUtils _SCSIM_struct__319_Utils;
extern TypeUtils _SCSIM_struct__324_Utils;
extern TypeUtils _SCSIM_struct__337_Utils;
extern TypeUtils _SCSIM_TM_BaliseTelegramHeader_int_T_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_B_data_internal_InfraLib_Utils;
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
 ** struct__308
 ****************************************************************/
extern const char * struct__308_to_string(const void* pValue);
extern int check_struct__308_string(const char* strValue);
extern int string_to_struct__308(const char* strValue, void* pValue);
int is_struct__308_allow_double_convertion();
extern const char * get_struct__308_signature();
extern int compare_struct__308_type(int*, const char*, const void*);
#define struct__308_filter_size 5
extern FilterUtils get_struct__308_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__308_filter_values[5];
/****************************************************************
 ** array__316
 ****************************************************************/
extern const char * array__316_to_string(const void* pValue);
extern int check_array__316_string(const char* strValue);
extern int string_to_array__316(const char* strValue, void* pValue);
int is_array__316_allow_double_convertion();
extern const char * get_array__316_signature();
extern int compare_array__316_type(int*, const char*, const void*);
#define array__316_filter_size 30
extern FilterUtils get_array__316_filter_utils(const char* strFilter, void* pValue);
#define array__316_filter_values 0
/****************************************************************
 ** struct__319
 ****************************************************************/
extern const char * struct__319_to_string(const void* pValue);
extern int check_struct__319_string(const char* strValue);
extern int string_to_struct__319(const char* strValue, void* pValue);
int is_struct__319_allow_double_convertion();
extern const char * get_struct__319_signature();
extern int compare_struct__319_type(int*, const char*, const void*);
#define struct__319_filter_size 2
extern FilterUtils get_struct__319_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__319_filter_values[2];
/****************************************************************
 ** struct__324
 ****************************************************************/
extern const char * struct__324_to_string(const void* pValue);
extern int check_struct__324_string(const char* strValue);
extern int string_to_struct__324(const char* strValue, void* pValue);
int is_struct__324_allow_double_convertion();
extern const char * get_struct__324_signature();
extern int compare_struct__324_type(int*, const char*, const void*);
#define struct__324_filter_size 10
extern FilterUtils get_struct__324_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__324_filter_values[10];
/****************************************************************
 ** struct__337
 ****************************************************************/
extern const char * struct__337_to_string(const void* pValue);
extern int check_struct__337_string(const char* strValue);
extern int string_to_struct__337(const char* strValue, void* pValue);
int is_struct__337_allow_double_convertion();
extern const char * get_struct__337_signature();
extern int compare_struct__337_type(int*, const char*, const void*);
#define struct__337_filter_size 5
extern FilterUtils get_struct__337_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__337_filter_values[5];
/****************************************************************
 ** TM_BaliseTelegramHeader_int_T
 ****************************************************************/
extern const char * TM_BaliseTelegramHeader_int_T_to_string(const void* pValue);
extern int check_TM_BaliseTelegramHeader_int_T_string(const char* strValue);
extern int string_to_TM_BaliseTelegramHeader_int_T(const char* strValue, void* pValue);
int is_TM_BaliseTelegramHeader_int_T_allow_double_convertion();
extern int TM_BaliseTelegramHeader_int_T_to_double(double * nValue, const void*);
#define get_TM_BaliseTelegramHeader_int_T_signature get_struct__324_signature
#define compare_TM_BaliseTelegramHeader_int_T_type compare_struct__324_type
#define TM_BaliseTelegramHeader_int_T_filter_size struct__324_filter_size
#define get_TM_BaliseTelegramHeader_int_T_filter_utils get_struct__324_filter_utils
#define TM_BaliseTelegramHeader_int_T_filter_values struct__324_filter_values
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
 ** B_data_internal_InfraLib
 ****************************************************************/
extern const char * B_data_internal_InfraLib_to_string(const void* pValue);
extern int check_B_data_internal_InfraLib_string(const char* strValue);
extern int string_to_B_data_internal_InfraLib(const char* strValue, void* pValue);
int is_B_data_internal_InfraLib_allow_double_convertion();
extern int B_data_internal_InfraLib_to_double(double * nValue, const void*);
#define get_B_data_internal_InfraLib_signature get_struct__337_signature
#define compare_B_data_internal_InfraLib_type compare_struct__337_type
#define B_data_internal_InfraLib_filter_size struct__337_filter_size
#define get_B_data_internal_InfraLib_filter_utils get_struct__337_filter_utils
#define B_data_internal_InfraLib_filter_values struct__337_filter_values
/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
extern const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_CompressedPackets_T_Common_Types_Pkg_signature get_struct__319_signature
#define compare_CompressedPackets_T_Common_Types_Pkg_type compare_struct__319_type
#define CompressedPackets_T_Common_Types_Pkg_filter_size struct__319_filter_size
#define get_CompressedPackets_T_Common_Types_Pkg_filter_utils get_struct__319_filter_utils
#define CompressedPackets_T_Common_Types_Pkg_filter_values struct__319_filter_values
/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
extern const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_Metadata_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
extern int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_Metadata_T_Common_Types_Pkg_signature get_array__316_signature
#define compare_Metadata_T_Common_Types_Pkg_type compare_array__316_type
#define Metadata_T_Common_Types_Pkg_filter_size array__316_filter_size
#define get_Metadata_T_Common_Types_Pkg_filter_utils get_array__316_filter_utils
#define Metadata_T_Common_Types_Pkg_filter_values array__316_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__308_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__308_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__308_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__308_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__308_filter_values
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
