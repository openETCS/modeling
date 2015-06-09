#ifndef WRITE_P027V1_TM_TRACKSIDE_TYPES_CONVERTION
#define WRITE_P027V1_TM_TRACKSIDE_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__862_Utils;
extern TypeUtils _SCSIM_array_int_64_Utils;
extern TypeUtils _SCSIM_struct__873_Utils;
extern TypeUtils _SCSIM_array__878_Utils;
extern TypeUtils _SCSIM_struct__881_Utils;
extern TypeUtils _SCSIM_array_int_2_Utils;
extern TypeUtils _SCSIM_array_int_2_32_Utils;
extern TypeUtils _SCSIM_array__895_Utils;
extern TypeUtils _SCSIM_struct__898_Utils;
extern TypeUtils _SCSIM_array__903_Utils;
extern TypeUtils _SCSIM_array__906_Utils;
extern TypeUtils _SCSIM_struct__909_Utils;
extern TypeUtils _SCSIM_array_int_500_500_Utils;
extern TypeUtils _SCSIM_array_int_494_Utils;
extern TypeUtils _SCSIM_array_int_6_Utils;
extern TypeUtils _SCSIM_array__933_Utils;
extern TypeUtils _SCSIM_array_int_2_32_32_Utils;
extern TypeUtils _SCSIM_array_int_432_Utils;
extern TypeUtils _SCSIM_array_int_4_Utils;
extern TypeUtils _SCSIM_array_int_68_Utils;
extern TypeUtils _SCSIM_array_int_33_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_P027V1_trackside_int_T_TM_Utils;
extern TypeUtils _SCSIM_P027V1_trackide_qdifflist_T_TM_Utils;
extern TypeUtils _SCSIM_P027V1_section_int_qdiff_T_TM_Utils;
extern TypeUtils _SCSIM_P027V1_trackide_sectionlist_T_TM_Utils;
extern TypeUtils _SCSIM_P027V1_section_int_T_TM_Utils;
extern TypeUtils _SCSIM_nid_packet_meta_TM_Utils;
extern TypeUtils _SCSIM__2_P027V1_OBU_sectionlist_int_T_TM_Utils;
extern TypeUtils _SCSIM_P027V1_sections_array_flat_qdiff_T_TM_Utils;
extern TypeUtils _SCSIM__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_Utils;
extern TypeUtils _SCSIM_P027V1_section_array_qdiff_T_TM_Utils;
extern TypeUtils _SCSIM_P027V1_OBU_sectionlist_int_qdiff_T_TM_Utils;
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
 ** struct__862
 ****************************************************************/
extern const char * struct__862_to_string(const void* pValue);
extern int check_struct__862_string(const char* strValue);
extern int string_to_struct__862(const char* strValue, void* pValue);
int is_struct__862_allow_double_convertion();
extern const char * get_struct__862_signature();
extern int compare_struct__862_type(int*, const char*, const void*);
#define struct__862_filter_size 5
extern FilterUtils get_struct__862_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__862_filter_values[5];
/****************************************************************
 ** array_int_64
 ****************************************************************/
extern const char * array_int_64_to_string(const void* pValue);
extern int check_array_int_64_string(const char* strValue);
extern int string_to_array_int_64(const char* strValue, void* pValue);
int is_array_int_64_allow_double_convertion();
extern const char * get_array_int_64_signature();
extern int compare_array_int_64_type(int*, const char*, const void*);
#define array_int_64_filter_size 64
extern FilterUtils get_array_int_64_filter_utils(const char* strFilter, void* pValue);
#define array_int_64_filter_values 0
/****************************************************************
 ** struct__873
 ****************************************************************/
extern const char * struct__873_to_string(const void* pValue);
extern int check_struct__873_string(const char* strValue);
extern int string_to_struct__873(const char* strValue, void* pValue);
int is_struct__873_allow_double_convertion();
extern const char * get_struct__873_signature();
extern int compare_struct__873_type(int*, const char*, const void*);
#define struct__873_filter_size 2
extern FilterUtils get_struct__873_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__873_filter_values[2];
/****************************************************************
 ** array__878
 ****************************************************************/
extern const char * array__878_to_string(const void* pValue);
extern int check_array__878_string(const char* strValue);
extern int string_to_array__878(const char* strValue, void* pValue);
int is_array__878_allow_double_convertion();
extern const char * get_array__878_signature();
extern int compare_array__878_type(int*, const char*, const void*);
#define array__878_filter_size 32
extern FilterUtils get_array__878_filter_utils(const char* strFilter, void* pValue);
#define array__878_filter_values 0
/****************************************************************
 ** struct__881
 ****************************************************************/
extern const char * struct__881_to_string(const void* pValue);
extern int check_struct__881_string(const char* strValue);
extern int string_to_struct__881(const char* strValue, void* pValue);
int is_struct__881_allow_double_convertion();
extern const char * get_struct__881_signature();
extern int compare_struct__881_type(int*, const char*, const void*);
#define struct__881_filter_size 5
extern FilterUtils get_struct__881_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__881_filter_values[5];
/****************************************************************
 ** array_int_2
 ****************************************************************/
extern const char * array_int_2_to_string(const void* pValue);
extern int check_array_int_2_string(const char* strValue);
extern int string_to_array_int_2(const char* strValue, void* pValue);
int is_array_int_2_allow_double_convertion();
extern const char * get_array_int_2_signature();
extern int compare_array_int_2_type(int*, const char*, const void*);
#define array_int_2_filter_size 2
extern FilterUtils get_array_int_2_filter_utils(const char* strFilter, void* pValue);
#define array_int_2_filter_values 0
/****************************************************************
 ** array_int_2_32
 ****************************************************************/
extern const char * array_int_2_32_to_string(const void* pValue);
extern int check_array_int_2_32_string(const char* strValue);
extern int string_to_array_int_2_32(const char* strValue, void* pValue);
int is_array_int_2_32_allow_double_convertion();
extern const char * get_array_int_2_32_signature();
extern int compare_array_int_2_32_type(int*, const char*, const void*);
#define array_int_2_32_filter_size 32
extern FilterUtils get_array_int_2_32_filter_utils(const char* strFilter, void* pValue);
#define array_int_2_32_filter_values 0
/****************************************************************
 ** array__895
 ****************************************************************/
extern const char * array__895_to_string(const void* pValue);
extern int check_array__895_string(const char* strValue);
extern int string_to_array__895(const char* strValue, void* pValue);
int is_array__895_allow_double_convertion();
extern const char * get_array__895_signature();
extern int compare_array__895_type(int*, const char*, const void*);
#define array__895_filter_size 30
extern FilterUtils get_array__895_filter_utils(const char* strFilter, void* pValue);
#define array__895_filter_values 0
/****************************************************************
 ** struct__898
 ****************************************************************/
extern const char * struct__898_to_string(const void* pValue);
extern int check_struct__898_string(const char* strValue);
extern int string_to_struct__898(const char* strValue, void* pValue);
int is_struct__898_allow_double_convertion();
extern const char * get_struct__898_signature();
extern int compare_struct__898_type(int*, const char*, const void*);
#define struct__898_filter_size 2
extern FilterUtils get_struct__898_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__898_filter_values[2];
/****************************************************************
 ** array__903
 ****************************************************************/
extern const char * array__903_to_string(const void* pValue);
extern int check_array__903_string(const char* strValue);
extern int string_to_array__903(const char* strValue, void* pValue);
int is_array__903_allow_double_convertion();
extern const char * get_array__903_signature();
extern int compare_array__903_type(int*, const char*, const void*);
#define array__903_filter_size 33
extern FilterUtils get_array__903_filter_utils(const char* strFilter, void* pValue);
#define array__903_filter_values 0
/****************************************************************
 ** array__906
 ****************************************************************/
extern const char * array__906_to_string(const void* pValue);
extern int check_array__906_string(const char* strValue);
extern int string_to_array__906(const char* strValue, void* pValue);
int is_array__906_allow_double_convertion();
extern const char * get_array__906_signature();
extern int compare_array__906_type(int*, const char*, const void*);
#define array__906_filter_size 32
extern FilterUtils get_array__906_filter_utils(const char* strFilter, void* pValue);
#define array__906_filter_values 0
/****************************************************************
 ** struct__909
 ****************************************************************/
extern const char * struct__909_to_string(const void* pValue);
extern int check_struct__909_string(const char* strValue);
extern int string_to_struct__909(const char* strValue, void* pValue);
int is_struct__909_allow_double_convertion();
extern const char * get_struct__909_signature();
extern int compare_struct__909_type(int*, const char*, const void*);
#define struct__909_filter_size 12
extern FilterUtils get_struct__909_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__909_filter_values[12];
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
 ** array__933
 ****************************************************************/
extern const char * array__933_to_string(const void* pValue);
extern int check_array__933_string(const char* strValue);
extern int string_to_array__933(const char* strValue, void* pValue);
int is_array__933_allow_double_convertion();
extern const char * get_array__933_signature();
extern int compare_array__933_type(int*, const char*, const void*);
#define array__933_filter_size 1
extern FilterUtils get_array__933_filter_utils(const char* strFilter, void* pValue);
#define array__933_filter_values 0
/****************************************************************
 ** array_int_2_32_32
 ****************************************************************/
extern const char * array_int_2_32_32_to_string(const void* pValue);
extern int check_array_int_2_32_32_string(const char* strValue);
extern int string_to_array_int_2_32_32(const char* strValue, void* pValue);
int is_array_int_2_32_32_allow_double_convertion();
extern const char * get_array_int_2_32_32_signature();
extern int compare_array_int_2_32_32_type(int*, const char*, const void*);
#define array_int_2_32_32_filter_size 32
extern FilterUtils get_array_int_2_32_32_filter_utils(const char* strFilter, void* pValue);
#define array_int_2_32_32_filter_values 0
/****************************************************************
 ** array_int_432
 ****************************************************************/
extern const char * array_int_432_to_string(const void* pValue);
extern int check_array_int_432_string(const char* strValue);
extern int string_to_array_int_432(const char* strValue, void* pValue);
int is_array_int_432_allow_double_convertion();
extern const char * get_array_int_432_signature();
extern int compare_array_int_432_type(int*, const char*, const void*);
#define array_int_432_filter_size 432
extern FilterUtils get_array_int_432_filter_utils(const char* strFilter, void* pValue);
#define array_int_432_filter_values 0
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
 ** array_int_68
 ****************************************************************/
extern const char * array_int_68_to_string(const void* pValue);
extern int check_array_int_68_string(const char* strValue);
extern int string_to_array_int_68(const char* strValue, void* pValue);
int is_array_int_68_allow_double_convertion();
extern const char * get_array_int_68_signature();
extern int compare_array_int_68_type(int*, const char*, const void*);
#define array_int_68_filter_size 68
extern FilterUtils get_array_int_68_filter_utils(const char* strFilter, void* pValue);
#define array_int_68_filter_values 0
/****************************************************************
 ** array_int_33
 ****************************************************************/
extern const char * array_int_33_to_string(const void* pValue);
extern int check_array_int_33_string(const char* strValue);
extern int string_to_array_int_33(const char* strValue, void* pValue);
int is_array_int_33_allow_double_convertion();
extern const char * get_array_int_33_signature();
extern int compare_array_int_33_type(int*, const char*, const void*);
#define array_int_33_filter_size 33
extern FilterUtils get_array_int_33_filter_utils(const char* strFilter, void* pValue);
#define array_int_33_filter_values 0
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
 ** P027V1_trackside_int_T_TM
 ****************************************************************/
extern const char * P027V1_trackside_int_T_TM_to_string(const void* pValue);
extern int check_P027V1_trackside_int_T_TM_string(const char* strValue);
extern int string_to_P027V1_trackside_int_T_TM(const char* strValue, void* pValue);
int is_P027V1_trackside_int_T_TM_allow_double_convertion();
extern int P027V1_trackside_int_T_TM_to_double(double * nValue, const void*);
#define get_P027V1_trackside_int_T_TM_signature get_struct__909_signature
#define compare_P027V1_trackside_int_T_TM_type compare_struct__909_type
#define P027V1_trackside_int_T_TM_filter_size struct__909_filter_size
#define get_P027V1_trackside_int_T_TM_filter_utils get_struct__909_filter_utils
#define P027V1_trackside_int_T_TM_filter_values struct__909_filter_values
/****************************************************************
 ** P027V1_trackide_qdifflist_T_TM
 ****************************************************************/
extern const char * P027V1_trackide_qdifflist_T_TM_to_string(const void* pValue);
extern int check_P027V1_trackide_qdifflist_T_TM_string(const char* strValue);
extern int string_to_P027V1_trackide_qdifflist_T_TM(const char* strValue, void* pValue);
int is_P027V1_trackide_qdifflist_T_TM_allow_double_convertion();
extern int P027V1_trackide_qdifflist_T_TM_to_double(double * nValue, const void*);
#define get_P027V1_trackide_qdifflist_T_TM_signature get_array__878_signature
#define compare_P027V1_trackide_qdifflist_T_TM_type compare_array__878_type
#define P027V1_trackide_qdifflist_T_TM_filter_size array__878_filter_size
#define get_P027V1_trackide_qdifflist_T_TM_filter_utils get_array__878_filter_utils
#define P027V1_trackide_qdifflist_T_TM_filter_values array__878_filter_values
/****************************************************************
 ** P027V1_section_int_qdiff_T_TM
 ****************************************************************/
extern const char * P027V1_section_int_qdiff_T_TM_to_string(const void* pValue);
extern int check_P027V1_section_int_qdiff_T_TM_string(const char* strValue);
extern int string_to_P027V1_section_int_qdiff_T_TM(const char* strValue, void* pValue);
int is_P027V1_section_int_qdiff_T_TM_allow_double_convertion();
extern int P027V1_section_int_qdiff_T_TM_to_double(double * nValue, const void*);
#define get_P027V1_section_int_qdiff_T_TM_signature get_struct__873_signature
#define compare_P027V1_section_int_qdiff_T_TM_type compare_struct__873_type
#define P027V1_section_int_qdiff_T_TM_filter_size struct__873_filter_size
#define get_P027V1_section_int_qdiff_T_TM_filter_utils get_struct__873_filter_utils
#define P027V1_section_int_qdiff_T_TM_filter_values struct__873_filter_values
/****************************************************************
 ** P027V1_trackide_sectionlist_T_TM
 ****************************************************************/
extern const char * P027V1_trackide_sectionlist_T_TM_to_string(const void* pValue);
extern int check_P027V1_trackide_sectionlist_T_TM_string(const char* strValue);
extern int string_to_P027V1_trackide_sectionlist_T_TM(const char* strValue, void* pValue);
int is_P027V1_trackide_sectionlist_T_TM_allow_double_convertion();
extern int P027V1_trackide_sectionlist_T_TM_to_double(double * nValue, const void*);
#define get_P027V1_trackide_sectionlist_T_TM_signature get_array__906_signature
#define compare_P027V1_trackide_sectionlist_T_TM_type compare_array__906_type
#define P027V1_trackide_sectionlist_T_TM_filter_size array__906_filter_size
#define get_P027V1_trackide_sectionlist_T_TM_filter_utils get_array__906_filter_utils
#define P027V1_trackide_sectionlist_T_TM_filter_values array__906_filter_values
/****************************************************************
 ** P027V1_section_int_T_TM
 ****************************************************************/
extern const char * P027V1_section_int_T_TM_to_string(const void* pValue);
extern int check_P027V1_section_int_T_TM_string(const char* strValue);
extern int string_to_P027V1_section_int_T_TM(const char* strValue, void* pValue);
int is_P027V1_section_int_T_TM_allow_double_convertion();
extern int P027V1_section_int_T_TM_to_double(double * nValue, const void*);
#define get_P027V1_section_int_T_TM_signature get_struct__881_signature
#define compare_P027V1_section_int_T_TM_type compare_struct__881_type
#define P027V1_section_int_T_TM_filter_size struct__881_filter_size
#define get_P027V1_section_int_T_TM_filter_utils get_struct__881_filter_utils
#define P027V1_section_int_T_TM_filter_values struct__881_filter_values
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
 ** _2_P027V1_OBU_sectionlist_int_T_TM
 ****************************************************************/
extern const char * _2_P027V1_OBU_sectionlist_int_T_TM_to_string(const void* pValue);
extern int check__2_P027V1_OBU_sectionlist_int_T_TM_string(const char* strValue);
extern int string_to__2_P027V1_OBU_sectionlist_int_T_TM(const char* strValue, void* pValue);
int is__2_P027V1_OBU_sectionlist_int_T_TM_allow_double_convertion();
extern int _2_P027V1_OBU_sectionlist_int_T_TM_to_double(double * nValue, const void*);
#define get__2_P027V1_OBU_sectionlist_int_T_TM_signature get_array__903_signature
#define compare__2_P027V1_OBU_sectionlist_int_T_TM_type compare_array__903_type
#define _2_P027V1_OBU_sectionlist_int_T_TM_filter_size array__903_filter_size
#define get__2_P027V1_OBU_sectionlist_int_T_TM_filter_utils get_array__903_filter_utils
#define _2_P027V1_OBU_sectionlist_int_T_TM_filter_values array__903_filter_values
/****************************************************************
 ** P027V1_sections_array_flat_qdiff_T_TM
 ****************************************************************/
extern const char * P027V1_sections_array_flat_qdiff_T_TM_to_string(const void* pValue);
extern int check_P027V1_sections_array_flat_qdiff_T_TM_string(const char* strValue);
extern int string_to_P027V1_sections_array_flat_qdiff_T_TM(const char* strValue, void* pValue);
int is_P027V1_sections_array_flat_qdiff_T_TM_allow_double_convertion();
extern int P027V1_sections_array_flat_qdiff_T_TM_to_double(double * nValue, const void*);
#define get_P027V1_sections_array_flat_qdiff_T_TM_signature get_array_int_64_signature
#define compare_P027V1_sections_array_flat_qdiff_T_TM_type compare_array_int_64_type
#define P027V1_sections_array_flat_qdiff_T_TM_filter_size array_int_64_filter_size
#define get_P027V1_sections_array_flat_qdiff_T_TM_filter_utils get_array_int_64_filter_utils
#define P027V1_sections_array_flat_qdiff_T_TM_filter_values array_int_64_filter_values
/****************************************************************
 ** _1_P027V1_OBU_sectionlist_array_qdiff_T_TM
 ****************************************************************/
extern const char * _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_to_string(const void* pValue);
extern int check__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_string(const char* strValue);
extern int string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM(const char* strValue, void* pValue);
int is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_allow_double_convertion();
extern int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_to_double(double * nValue, const void*);
#define get__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_signature get_array_int_2_32_signature
#define compare__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_type compare_array_int_2_32_type
#define _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_filter_size array_int_2_32_filter_size
#define get__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_filter_utils get_array_int_2_32_filter_utils
#define _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_filter_values array_int_2_32_filter_values
/****************************************************************
 ** P027V1_section_array_qdiff_T_TM
 ****************************************************************/
extern const char * P027V1_section_array_qdiff_T_TM_to_string(const void* pValue);
extern int check_P027V1_section_array_qdiff_T_TM_string(const char* strValue);
extern int string_to_P027V1_section_array_qdiff_T_TM(const char* strValue, void* pValue);
int is_P027V1_section_array_qdiff_T_TM_allow_double_convertion();
extern int P027V1_section_array_qdiff_T_TM_to_double(double * nValue, const void*);
#define get_P027V1_section_array_qdiff_T_TM_signature get_array_int_2_signature
#define compare_P027V1_section_array_qdiff_T_TM_type compare_array_int_2_type
#define P027V1_section_array_qdiff_T_TM_filter_size array_int_2_filter_size
#define get_P027V1_section_array_qdiff_T_TM_filter_utils get_array_int_2_filter_utils
#define P027V1_section_array_qdiff_T_TM_filter_values array_int_2_filter_values
/****************************************************************
 ** P027V1_OBU_sectionlist_int_qdiff_T_TM
 ****************************************************************/
extern const char * P027V1_OBU_sectionlist_int_qdiff_T_TM_to_string(const void* pValue);
extern int check_P027V1_OBU_sectionlist_int_qdiff_T_TM_string(const char* strValue);
extern int string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM(const char* strValue, void* pValue);
int is_P027V1_OBU_sectionlist_int_qdiff_T_TM_allow_double_convertion();
extern int P027V1_OBU_sectionlist_int_qdiff_T_TM_to_double(double * nValue, const void*);
#define get_P027V1_OBU_sectionlist_int_qdiff_T_TM_signature get_array__878_signature
#define compare_P027V1_OBU_sectionlist_int_qdiff_T_TM_type compare_array__878_type
#define P027V1_OBU_sectionlist_int_qdiff_T_TM_filter_size array__878_filter_size
#define get_P027V1_OBU_sectionlist_int_qdiff_T_TM_filter_utils get_array__878_filter_utils
#define P027V1_OBU_sectionlist_int_qdiff_T_TM_filter_values array__878_filter_values
/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
extern const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_Metadata_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
extern int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_Metadata_T_Common_Types_Pkg_signature get_array__895_signature
#define compare_Metadata_T_Common_Types_Pkg_type compare_array__895_type
#define Metadata_T_Common_Types_Pkg_filter_size array__895_filter_size
#define get_Metadata_T_Common_Types_Pkg_filter_utils get_array__895_filter_utils
#define Metadata_T_Common_Types_Pkg_filter_values array__895_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__862_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__862_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__862_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__862_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__862_filter_values
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
#define get_CompressedPackets_T_Common_Types_Pkg_signature get_struct__898_signature
#define compare_CompressedPackets_T_Common_Types_Pkg_type compare_struct__898_type
#define CompressedPackets_T_Common_Types_Pkg_filter_size struct__898_filter_size
#define get_CompressedPackets_T_Common_Types_Pkg_filter_utils get_struct__898_filter_utils
#define CompressedPackets_T_Common_Types_Pkg_filter_values struct__898_filter_values

#endif /*WRITE_P027V1_TM_TRACKSIDE_TYPES_CONVERTION */
