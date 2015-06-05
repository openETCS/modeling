#ifndef SEND_WRITEPACKET005_IT_LEGACY_TM_TRACKSIDE_TYPES_CONVERTION
#define SEND_WRITEPACKET005_IT_LEGACY_TM_TRACKSIDE_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_array_int_7_Utils;
extern TypeUtils _SCSIM_struct__658_Utils;
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_struct__672_Utils;
extern TypeUtils _SCSIM_array__680_Utils;
extern TypeUtils _SCSIM_struct__683_Utils;
extern TypeUtils _SCSIM_array__692_Utils;
extern TypeUtils _SCSIM_struct__695_Utils;
extern TypeUtils _SCSIM_array_int_500_500_Utils;
extern TypeUtils _SCSIM_array_int_461_Utils;
extern TypeUtils _SCSIM_array_int_11_Utils;
extern TypeUtils _SCSIM_array_int_18_Utils;
extern TypeUtils _SCSIM_array_int_25_Utils;
extern TypeUtils _SCSIM_array_int_32_Utils;
extern TypeUtils _SCSIM_array_int_39_Utils;
extern TypeUtils _SCSIM_array_int_4_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_P005old_TM_Utils;
extern TypeUtils _SCSIM_P005Es_Told_TM_Utils;
extern TypeUtils _SCSIM_P005E_Told_TM_Utils;
extern TypeUtils _SCSIM_P005E_array_Told_TM_Utils;
extern TypeUtils _SCSIM_Metadata_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_MetadataElement_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils;

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
 ** struct__658
 ****************************************************************/
extern const char * struct__658_to_string(const void* pValue);
extern int check_struct__658_string(const char* strValue);
extern int string_to_struct__658(const char* strValue, void* pValue);
int is_struct__658_allow_double_convertion();
extern const char * get_struct__658_signature();
extern int compare_struct__658_type(int*, const char*, const void*);
#define struct__658_filter_size 8
extern FilterUtils get_struct__658_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__658_filter_values[8];
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
 ** struct__672
 ****************************************************************/
extern const char * struct__672_to_string(const void* pValue);
extern int check_struct__672_string(const char* strValue);
extern int string_to_struct__672(const char* strValue, void* pValue);
int is_struct__672_allow_double_convertion();
extern const char * get_struct__672_signature();
extern int compare_struct__672_type(int*, const char*, const void*);
#define struct__672_filter_size 5
extern FilterUtils get_struct__672_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__672_filter_values[5];
/****************************************************************
 ** array__680
 ****************************************************************/
extern const char * array__680_to_string(const void* pValue);
extern int check_array__680_string(const char* strValue);
extern int string_to_array__680(const char* strValue, void* pValue);
int is_array__680_allow_double_convertion();
extern const char * get_array__680_signature();
extern int compare_array__680_type(int*, const char*, const void*);
#define array__680_filter_size 5
extern FilterUtils get_array__680_filter_utils(const char* strFilter, void* pValue);
#define array__680_filter_values 0
/****************************************************************
 ** struct__683
 ****************************************************************/
extern const char * struct__683_to_string(const void* pValue);
extern int check_struct__683_string(const char* strValue);
extern int string_to_struct__683(const char* strValue, void* pValue);
int is_struct__683_allow_double_convertion();
extern const char * get_struct__683_signature();
extern int compare_struct__683_type(int*, const char*, const void*);
#define struct__683_filter_size 6
extern FilterUtils get_struct__683_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__683_filter_values[6];
/****************************************************************
 ** array__692
 ****************************************************************/
extern const char * array__692_to_string(const void* pValue);
extern int check_array__692_string(const char* strValue);
extern int string_to_array__692(const char* strValue, void* pValue);
int is_array__692_allow_double_convertion();
extern const char * get_array__692_signature();
extern int compare_array__692_type(int*, const char*, const void*);
#define array__692_filter_size 30
extern FilterUtils get_array__692_filter_utils(const char* strFilter, void* pValue);
#define array__692_filter_values 0
/****************************************************************
 ** struct__695
 ****************************************************************/
extern const char * struct__695_to_string(const void* pValue);
extern int check_struct__695_string(const char* strValue);
extern int string_to_struct__695(const char* strValue, void* pValue);
int is_struct__695_allow_double_convertion();
extern const char * get_struct__695_signature();
extern int compare_struct__695_type(int*, const char*, const void*);
#define struct__695_filter_size 2
extern FilterUtils get_struct__695_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__695_filter_values[2];
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
 ** P005old_TM
 ****************************************************************/
extern const char * P005old_TM_to_string(const void* pValue);
extern int check_P005old_TM_string(const char* strValue);
extern int string_to_P005old_TM(const char* strValue, void* pValue);
int is_P005old_TM_allow_double_convertion();
extern int P005old_TM_to_double(double * nValue, const void*);
#define get_P005old_TM_signature get_struct__683_signature
#define compare_P005old_TM_type compare_struct__683_type
#define P005old_TM_filter_size struct__683_filter_size
#define get_P005old_TM_filter_utils get_struct__683_filter_utils
#define P005old_TM_filter_values struct__683_filter_values
/****************************************************************
 ** P005Es_Told_TM
 ****************************************************************/
extern const char * P005Es_Told_TM_to_string(const void* pValue);
extern int check_P005Es_Told_TM_string(const char* strValue);
extern int string_to_P005Es_Told_TM(const char* strValue, void* pValue);
int is_P005Es_Told_TM_allow_double_convertion();
extern int P005Es_Told_TM_to_double(double * nValue, const void*);
#define get_P005Es_Told_TM_signature get_array__680_signature
#define compare_P005Es_Told_TM_type compare_array__680_type
#define P005Es_Told_TM_filter_size array__680_filter_size
#define get_P005Es_Told_TM_filter_utils get_array__680_filter_utils
#define P005Es_Told_TM_filter_values array__680_filter_values
/****************************************************************
 ** P005E_Told_TM
 ****************************************************************/
extern const char * P005E_Told_TM_to_string(const void* pValue);
extern int check_P005E_Told_TM_string(const char* strValue);
extern int string_to_P005E_Told_TM(const char* strValue, void* pValue);
int is_P005E_Told_TM_allow_double_convertion();
extern int P005E_Told_TM_to_double(double * nValue, const void*);
#define get_P005E_Told_TM_signature get_struct__658_signature
#define compare_P005E_Told_TM_type compare_struct__658_type
#define P005E_Told_TM_filter_size struct__658_filter_size
#define get_P005E_Told_TM_filter_utils get_struct__658_filter_utils
#define P005E_Told_TM_filter_values struct__658_filter_values
/****************************************************************
 ** P005E_array_Told_TM
 ****************************************************************/
extern const char * P005E_array_Told_TM_to_string(const void* pValue);
extern int check_P005E_array_Told_TM_string(const char* strValue);
extern int string_to_P005E_array_Told_TM(const char* strValue, void* pValue);
int is_P005E_array_Told_TM_allow_double_convertion();
extern int P005E_array_Told_TM_to_double(double * nValue, const void*);
#define get_P005E_array_Told_TM_signature get_array_int_7_signature
#define compare_P005E_array_Told_TM_type compare_array_int_7_type
#define P005E_array_Told_TM_filter_size array_int_7_filter_size
#define get_P005E_array_Told_TM_filter_utils get_array_int_7_filter_utils
#define P005E_array_Told_TM_filter_values array_int_7_filter_values
/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
extern const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_Metadata_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
extern int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_Metadata_T_Common_Types_Pkg_signature get_array__692_signature
#define compare_Metadata_T_Common_Types_Pkg_type compare_array__692_type
#define Metadata_T_Common_Types_Pkg_filter_size array__692_filter_size
#define get_Metadata_T_Common_Types_Pkg_filter_utils get_array__692_filter_utils
#define Metadata_T_Common_Types_Pkg_filter_values array__692_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__672_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__672_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__672_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__672_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__672_filter_values
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
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
extern const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_CompressedPackets_T_Common_Types_Pkg_signature get_struct__695_signature
#define compare_CompressedPackets_T_Common_Types_Pkg_type compare_struct__695_type
#define CompressedPackets_T_Common_Types_Pkg_filter_size struct__695_filter_size
#define get_CompressedPackets_T_Common_Types_Pkg_filter_utils get_struct__695_filter_utils
#define CompressedPackets_T_Common_Types_Pkg_filter_values struct__695_filter_values

#endif /*SEND_WRITEPACKET005_IT_LEGACY_TM_TRACKSIDE_TYPES_CONVERTION */
