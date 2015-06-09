#ifndef C_P027V1_TRACKSIM_COMPR_BODY_TM_CONVERSIONS_TYPES_CONVERTION
#define C_P027V1_TRACKSIM_COMPR_BODY_TM_CONVERSIONS_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__413_Utils;
extern TypeUtils _SCSIM_array__418_Utils;
extern TypeUtils _SCSIM_struct__421_Utils;
extern TypeUtils _SCSIM_array__429_Utils;
extern TypeUtils _SCSIM_array__432_Utils;
extern TypeUtils _SCSIM_struct__435_Utils;
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_struct__453_Utils;
extern TypeUtils _SCSIM_array_int_494_Utils;
extern TypeUtils _SCSIM_array_int_6_Utils;
extern TypeUtils _SCSIM_array__467_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_MetadataElement_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_P027V1_trackside_int_T_TM_Utils;
extern TypeUtils _SCSIM_P027V1_trackide_qdifflist_T_TM_Utils;
extern TypeUtils _SCSIM_P027V1_section_int_qdiff_T_TM_Utils;
extern TypeUtils _SCSIM_P027V1_trackide_sectionlist_T_TM_Utils;
extern TypeUtils _SCSIM_P027V1_section_int_T_TM_Utils;
extern TypeUtils _SCSIM_nid_packet_meta_TM_Utils;
extern TypeUtils _SCSIM_P027V1_OBU_sectionlist_int_T_TM_Utils;

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
 ** struct__413
 ****************************************************************/
extern const char * struct__413_to_string(const void* pValue);
extern int check_struct__413_string(const char* strValue);
extern int string_to_struct__413(const char* strValue, void* pValue);
int is_struct__413_allow_double_convertion();
extern const char * get_struct__413_signature();
extern int compare_struct__413_type(int*, const char*, const void*);
#define struct__413_filter_size 2
extern FilterUtils get_struct__413_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__413_filter_values[2];
/****************************************************************
 ** array__418
 ****************************************************************/
extern const char * array__418_to_string(const void* pValue);
extern int check_array__418_string(const char* strValue);
extern int string_to_array__418(const char* strValue, void* pValue);
int is_array__418_allow_double_convertion();
extern const char * get_array__418_signature();
extern int compare_array__418_type(int*, const char*, const void*);
#define array__418_filter_size 32
extern FilterUtils get_array__418_filter_utils(const char* strFilter, void* pValue);
#define array__418_filter_values 0
/****************************************************************
 ** struct__421
 ****************************************************************/
extern const char * struct__421_to_string(const void* pValue);
extern int check_struct__421_string(const char* strValue);
extern int string_to_struct__421(const char* strValue, void* pValue);
int is_struct__421_allow_double_convertion();
extern const char * get_struct__421_signature();
extern int compare_struct__421_type(int*, const char*, const void*);
#define struct__421_filter_size 5
extern FilterUtils get_struct__421_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__421_filter_values[5];
/****************************************************************
 ** array__429
 ****************************************************************/
extern const char * array__429_to_string(const void* pValue);
extern int check_array__429_string(const char* strValue);
extern int string_to_array__429(const char* strValue, void* pValue);
int is_array__429_allow_double_convertion();
extern const char * get_array__429_signature();
extern int compare_array__429_type(int*, const char*, const void*);
#define array__429_filter_size 33
extern FilterUtils get_array__429_filter_utils(const char* strFilter, void* pValue);
#define array__429_filter_values 0
/****************************************************************
 ** array__432
 ****************************************************************/
extern const char * array__432_to_string(const void* pValue);
extern int check_array__432_string(const char* strValue);
extern int string_to_array__432(const char* strValue, void* pValue);
int is_array__432_allow_double_convertion();
extern const char * get_array__432_signature();
extern int compare_array__432_type(int*, const char*, const void*);
#define array__432_filter_size 32
extern FilterUtils get_array__432_filter_utils(const char* strFilter, void* pValue);
#define array__432_filter_values 0
/****************************************************************
 ** struct__435
 ****************************************************************/
extern const char * struct__435_to_string(const void* pValue);
extern int check_struct__435_string(const char* strValue);
extern int string_to_struct__435(const char* strValue, void* pValue);
int is_struct__435_allow_double_convertion();
extern const char * get_struct__435_signature();
extern int compare_struct__435_type(int*, const char*, const void*);
#define struct__435_filter_size 12
extern FilterUtils get_struct__435_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__435_filter_values[12];
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
 ** struct__453
 ****************************************************************/
extern const char * struct__453_to_string(const void* pValue);
extern int check_struct__453_string(const char* strValue);
extern int string_to_struct__453(const char* strValue, void* pValue);
int is_struct__453_allow_double_convertion();
extern const char * get_struct__453_signature();
extern int compare_struct__453_type(int*, const char*, const void*);
#define struct__453_filter_size 5
extern FilterUtils get_struct__453_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__453_filter_values[5];
/****************************************************************
 ** array_int_494
 ****************************************************************/
extern const char * array_int_494_to_string(const void* pValue);
extern int check_array_int_494_string(const char* strValue);
extern int string_to_array_int_494(const char* strValue, void* pValue);
int is_array_int_494_allow_double_convertion();
extern const char * get_array_int_494_signature();
extern int compare_array_int_494_type(int*, const char*, const void*);
#define array_int_494_filter_size 494
extern FilterUtils get_array_int_494_filter_utils(const char* strFilter, void* pValue);
#define array_int_494_filter_values 0
/****************************************************************
 ** array_int_6
 ****************************************************************/
extern const char * array_int_6_to_string(const void* pValue);
extern int check_array_int_6_string(const char* strValue);
extern int string_to_array_int_6(const char* strValue, void* pValue);
int is_array_int_6_allow_double_convertion();
extern const char * get_array_int_6_signature();
extern int compare_array_int_6_type(int*, const char*, const void*);
#define array_int_6_filter_size 6
extern FilterUtils get_array_int_6_filter_utils(const char* strFilter, void* pValue);
#define array_int_6_filter_values 0
/****************************************************************
 ** array__467
 ****************************************************************/
extern const char * array__467_to_string(const void* pValue);
extern int check_array__467_string(const char* strValue);
extern int string_to_array__467(const char* strValue, void* pValue);
int is_array__467_allow_double_convertion();
extern const char * get_array__467_signature();
extern int compare_array__467_type(int*, const char*, const void*);
#define array__467_filter_size 1
extern FilterUtils get_array__467_filter_utils(const char* strFilter, void* pValue);
#define array__467_filter_values 0
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
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__453_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__453_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__453_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__453_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__453_filter_values
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
 ** P027V1_trackside_int_T_TM
 ****************************************************************/
extern const char * P027V1_trackside_int_T_TM_to_string(const void* pValue);
extern int check_P027V1_trackside_int_T_TM_string(const char* strValue);
extern int string_to_P027V1_trackside_int_T_TM(const char* strValue, void* pValue);
int is_P027V1_trackside_int_T_TM_allow_double_convertion();
extern int P027V1_trackside_int_T_TM_to_double(double * nValue, const void*);
#define get_P027V1_trackside_int_T_TM_signature get_struct__435_signature
#define compare_P027V1_trackside_int_T_TM_type compare_struct__435_type
#define P027V1_trackside_int_T_TM_filter_size struct__435_filter_size
#define get_P027V1_trackside_int_T_TM_filter_utils get_struct__435_filter_utils
#define P027V1_trackside_int_T_TM_filter_values struct__435_filter_values
/****************************************************************
 ** P027V1_trackide_qdifflist_T_TM
 ****************************************************************/
extern const char * P027V1_trackide_qdifflist_T_TM_to_string(const void* pValue);
extern int check_P027V1_trackide_qdifflist_T_TM_string(const char* strValue);
extern int string_to_P027V1_trackide_qdifflist_T_TM(const char* strValue, void* pValue);
int is_P027V1_trackide_qdifflist_T_TM_allow_double_convertion();
extern int P027V1_trackide_qdifflist_T_TM_to_double(double * nValue, const void*);
#define get_P027V1_trackide_qdifflist_T_TM_signature get_array__418_signature
#define compare_P027V1_trackide_qdifflist_T_TM_type compare_array__418_type
#define P027V1_trackide_qdifflist_T_TM_filter_size array__418_filter_size
#define get_P027V1_trackide_qdifflist_T_TM_filter_utils get_array__418_filter_utils
#define P027V1_trackide_qdifflist_T_TM_filter_values array__418_filter_values
/****************************************************************
 ** P027V1_section_int_qdiff_T_TM
 ****************************************************************/
extern const char * P027V1_section_int_qdiff_T_TM_to_string(const void* pValue);
extern int check_P027V1_section_int_qdiff_T_TM_string(const char* strValue);
extern int string_to_P027V1_section_int_qdiff_T_TM(const char* strValue, void* pValue);
int is_P027V1_section_int_qdiff_T_TM_allow_double_convertion();
extern int P027V1_section_int_qdiff_T_TM_to_double(double * nValue, const void*);
#define get_P027V1_section_int_qdiff_T_TM_signature get_struct__413_signature
#define compare_P027V1_section_int_qdiff_T_TM_type compare_struct__413_type
#define P027V1_section_int_qdiff_T_TM_filter_size struct__413_filter_size
#define get_P027V1_section_int_qdiff_T_TM_filter_utils get_struct__413_filter_utils
#define P027V1_section_int_qdiff_T_TM_filter_values struct__413_filter_values
/****************************************************************
 ** P027V1_trackide_sectionlist_T_TM
 ****************************************************************/
extern const char * P027V1_trackide_sectionlist_T_TM_to_string(const void* pValue);
extern int check_P027V1_trackide_sectionlist_T_TM_string(const char* strValue);
extern int string_to_P027V1_trackide_sectionlist_T_TM(const char* strValue, void* pValue);
int is_P027V1_trackide_sectionlist_T_TM_allow_double_convertion();
extern int P027V1_trackide_sectionlist_T_TM_to_double(double * nValue, const void*);
#define get_P027V1_trackide_sectionlist_T_TM_signature get_array__432_signature
#define compare_P027V1_trackide_sectionlist_T_TM_type compare_array__432_type
#define P027V1_trackide_sectionlist_T_TM_filter_size array__432_filter_size
#define get_P027V1_trackide_sectionlist_T_TM_filter_utils get_array__432_filter_utils
#define P027V1_trackide_sectionlist_T_TM_filter_values array__432_filter_values
/****************************************************************
 ** P027V1_section_int_T_TM
 ****************************************************************/
extern const char * P027V1_section_int_T_TM_to_string(const void* pValue);
extern int check_P027V1_section_int_T_TM_string(const char* strValue);
extern int string_to_P027V1_section_int_T_TM(const char* strValue, void* pValue);
int is_P027V1_section_int_T_TM_allow_double_convertion();
extern int P027V1_section_int_T_TM_to_double(double * nValue, const void*);
#define get_P027V1_section_int_T_TM_signature get_struct__421_signature
#define compare_P027V1_section_int_T_TM_type compare_struct__421_type
#define P027V1_section_int_T_TM_filter_size struct__421_filter_size
#define get_P027V1_section_int_T_TM_filter_utils get_struct__421_filter_utils
#define P027V1_section_int_T_TM_filter_values struct__421_filter_values
/****************************************************************
 ** nid_packet_meta_TM
 ****************************************************************/
extern const char * nid_packet_meta_TM_to_string(const void* pValue);
extern int check_nid_packet_meta_TM_string(const char* strValue);
extern int string_to_nid_packet_meta_TM(const char* strValue, void* pValue);
int is_nid_packet_meta_TM_allow_double_convertion();
extern int nid_packet_meta_TM_to_double(double * nValue, const void*);
#define get_nid_packet_meta_TM_signature get_kcg_int_signature
#define compare_nid_packet_meta_TM_type compare_kcg_int_type
#define nid_packet_meta_TM_filter_size kcg_int_filter_size
#define get_nid_packet_meta_TM_filter_utils get_kcg_int_filter_utils
#define nid_packet_meta_TM_filter_values kcg_int_filter_values
/****************************************************************
 ** P027V1_OBU_sectionlist_int_T_TM
 ****************************************************************/
extern const char * P027V1_OBU_sectionlist_int_T_TM_to_string(const void* pValue);
extern int check_P027V1_OBU_sectionlist_int_T_TM_string(const char* strValue);
extern int string_to_P027V1_OBU_sectionlist_int_T_TM(const char* strValue, void* pValue);
int is_P027V1_OBU_sectionlist_int_T_TM_allow_double_convertion();
extern int P027V1_OBU_sectionlist_int_T_TM_to_double(double * nValue, const void*);
#define get_P027V1_OBU_sectionlist_int_T_TM_signature get_array__429_signature
#define compare_P027V1_OBU_sectionlist_int_T_TM_type compare_array__429_type
#define P027V1_OBU_sectionlist_int_T_TM_filter_size array__429_filter_size
#define get_P027V1_OBU_sectionlist_int_T_TM_filter_utils get_array__429_filter_utils
#define P027V1_OBU_sectionlist_int_T_TM_filter_values array__429_filter_values

#endif /*C_P027V1_TRACKSIM_COMPR_BODY_TM_CONVERSIONS_TYPES_CONVERTION */
