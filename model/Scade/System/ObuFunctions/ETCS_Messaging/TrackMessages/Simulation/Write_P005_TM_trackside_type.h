#ifndef WRITE_P005_TM_TRACKSIDE_TYPES_CONVERTION
#define WRITE_P005_TM_TRACKSIDE_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__714_Utils;
extern TypeUtils _SCSIM_array_int_7_33_Utils;
extern TypeUtils _SCSIM_array_int_224_Utils;
extern TypeUtils _SCSIM_array__730_Utils;
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_struct__736_Utils;
extern TypeUtils _SCSIM_array__744_Utils;
extern TypeUtils _SCSIM_struct__747_Utils;
extern TypeUtils _SCSIM_array__764_Utils;
extern TypeUtils _SCSIM_struct__767_Utils;
extern TypeUtils _SCSIM_array_int_500_500_Utils;
extern TypeUtils _SCSIM_array_int_7_33_231_Utils;
extern TypeUtils _SCSIM_array_int_271_Utils;
extern TypeUtils _SCSIM_array_int_4_Utils;
extern TypeUtils _SCSIM_array_int_1_Utils;
extern TypeUtils _SCSIM_array_int_5_Utils;
extern TypeUtils _SCSIM_array_int_229_Utils;
extern TypeUtils _SCSIM_array__793_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_P005_trackside_int_T_TM_Utils;
extern TypeUtils _SCSIM_P005_trackide_sectionlist_T_TM_Utils;
extern TypeUtils _SCSIM_P005_section_int_T_TM_Utils;
extern TypeUtils _SCSIM_P005_sections_array_flat_T_TM_Utils;
extern TypeUtils _SCSIM_P005_OBU_sectionlist_array_T_TM_Utils;
extern TypeUtils _SCSIM_P005_section_array_T_TM_Utils;
extern TypeUtils _SCSIM_P005_OBU_sectionlist_int_T_TM_Utils;
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
 ** struct__714
 ****************************************************************/
extern const char * struct__714_to_string(const void* pValue);
extern int check_struct__714_string(const char* strValue);
extern int string_to_struct__714(const char* strValue, void* pValue);
int is_struct__714_allow_double_convertion();
extern const char * get_struct__714_signature();
extern int compare_struct__714_type(int*, const char*, const void*);
#define struct__714_filter_size 7
extern FilterUtils get_struct__714_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__714_filter_values[7];
/****************************************************************
 ** array_int_7_33
 ****************************************************************/
extern const char * array_int_7_33_to_string(const void* pValue);
extern int check_array_int_7_33_string(const char* strValue);
extern int string_to_array_int_7_33(const char* strValue, void* pValue);
int is_array_int_7_33_allow_double_convertion();
extern const char * get_array_int_7_33_signature();
extern int compare_array_int_7_33_type(int*, const char*, const void*);
#define array_int_7_33_filter_size 33
extern FilterUtils get_array_int_7_33_filter_utils(const char* strFilter, void* pValue);
#define array_int_7_33_filter_values 0
/****************************************************************
 ** array_int_224
 ****************************************************************/
extern const char * array_int_224_to_string(const void* pValue);
extern int check_array_int_224_string(const char* strValue);
extern int string_to_array_int_224(const char* strValue, void* pValue);
int is_array_int_224_allow_double_convertion();
extern const char * get_array_int_224_signature();
extern int compare_array_int_224_type(int*, const char*, const void*);
#define array_int_224_filter_size 224
extern FilterUtils get_array_int_224_filter_utils(const char* strFilter, void* pValue);
#define array_int_224_filter_values 0
/****************************************************************
 ** array__730
 ****************************************************************/
extern const char * array__730_to_string(const void* pValue);
extern int check_array__730_string(const char* strValue);
extern int string_to_array__730(const char* strValue, void* pValue);
int is_array__730_allow_double_convertion();
extern const char * get_array__730_signature();
extern int compare_array__730_type(int*, const char*, const void*);
#define array__730_filter_size 33
extern FilterUtils get_array__730_filter_utils(const char* strFilter, void* pValue);
#define array__730_filter_values 0
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
 ** struct__736
 ****************************************************************/
extern const char * struct__736_to_string(const void* pValue);
extern int check_struct__736_string(const char* strValue);
extern int string_to_struct__736(const char* strValue, void* pValue);
int is_struct__736_allow_double_convertion();
extern const char * get_struct__736_signature();
extern int compare_struct__736_type(int*, const char*, const void*);
#define struct__736_filter_size 5
extern FilterUtils get_struct__736_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__736_filter_values[5];
/****************************************************************
 ** array__744
 ****************************************************************/
extern const char * array__744_to_string(const void* pValue);
extern int check_array__744_string(const char* strValue);
extern int string_to_array__744(const char* strValue, void* pValue);
int is_array__744_allow_double_convertion();
extern const char * get_array__744_signature();
extern int compare_array__744_type(int*, const char*, const void*);
#define array__744_filter_size 32
extern FilterUtils get_array__744_filter_utils(const char* strFilter, void* pValue);
#define array__744_filter_values 0
/****************************************************************
 ** struct__747
 ****************************************************************/
extern const char * struct__747_to_string(const void* pValue);
extern int check_struct__747_string(const char* strValue);
extern int string_to_struct__747(const char* strValue, void* pValue);
int is_struct__747_allow_double_convertion();
extern const char * get_struct__747_signature();
extern int compare_struct__747_type(int*, const char*, const void*);
#define struct__747_filter_size 14
extern FilterUtils get_struct__747_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__747_filter_values[14];
/****************************************************************
 ** array__764
 ****************************************************************/
extern const char * array__764_to_string(const void* pValue);
extern int check_array__764_string(const char* strValue);
extern int string_to_array__764(const char* strValue, void* pValue);
int is_array__764_allow_double_convertion();
extern const char * get_array__764_signature();
extern int compare_array__764_type(int*, const char*, const void*);
#define array__764_filter_size 30
extern FilterUtils get_array__764_filter_utils(const char* strFilter, void* pValue);
#define array__764_filter_values 0
/****************************************************************
 ** struct__767
 ****************************************************************/
extern const char * struct__767_to_string(const void* pValue);
extern int check_struct__767_string(const char* strValue);
extern int string_to_struct__767(const char* strValue, void* pValue);
int is_struct__767_allow_double_convertion();
extern const char * get_struct__767_signature();
extern int compare_struct__767_type(int*, const char*, const void*);
#define struct__767_filter_size 2
extern FilterUtils get_struct__767_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__767_filter_values[2];
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
 ** array_int_7_33_231
 ****************************************************************/
extern const char * array_int_7_33_231_to_string(const void* pValue);
extern int check_array_int_7_33_231_string(const char* strValue);
extern int string_to_array_int_7_33_231(const char* strValue, void* pValue);
int is_array_int_7_33_231_allow_double_convertion();
extern const char * get_array_int_7_33_231_signature();
extern int compare_array_int_7_33_231_type(int*, const char*, const void*);
#define array_int_7_33_231_filter_size 231
extern FilterUtils get_array_int_7_33_231_filter_utils(const char* strFilter, void* pValue);
#define array_int_7_33_231_filter_values 0
/****************************************************************
 ** array_int_271
 ****************************************************************/
extern const char * array_int_271_to_string(const void* pValue);
extern int check_array_int_271_string(const char* strValue);
extern int string_to_array_int_271(const char* strValue, void* pValue);
int is_array_int_271_allow_double_convertion();
extern const char * get_array_int_271_signature();
extern int compare_array_int_271_type(int*, const char*, const void*);
#define array_int_271_filter_size 271
extern FilterUtils get_array_int_271_filter_utils(const char* strFilter, void* pValue);
#define array_int_271_filter_values 0
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
 ** array_int_1
 ****************************************************************/
extern const char * array_int_1_to_string(const void* pValue);
extern int check_array_int_1_string(const char* strValue);
extern int string_to_array_int_1(const char* strValue, void* pValue);
int is_array_int_1_allow_double_convertion();
extern const char * get_array_int_1_signature();
extern int compare_array_int_1_type(int*, const char*, const void*);
#define array_int_1_filter_size 1
extern FilterUtils get_array_int_1_filter_utils(const char* strFilter, void* pValue);
#define array_int_1_filter_values 0
/****************************************************************
 ** array_int_5
 ****************************************************************/
extern const char * array_int_5_to_string(const void* pValue);
extern int check_array_int_5_string(const char* strValue);
extern int string_to_array_int_5(const char* strValue, void* pValue);
int is_array_int_5_allow_double_convertion();
extern const char * get_array_int_5_signature();
extern int compare_array_int_5_type(int*, const char*, const void*);
#define array_int_5_filter_size 5
extern FilterUtils get_array_int_5_filter_utils(const char* strFilter, void* pValue);
#define array_int_5_filter_values 0
/****************************************************************
 ** array_int_229
 ****************************************************************/
extern const char * array_int_229_to_string(const void* pValue);
extern int check_array_int_229_string(const char* strValue);
extern int string_to_array_int_229(const char* strValue, void* pValue);
int is_array_int_229_allow_double_convertion();
extern const char * get_array_int_229_signature();
extern int compare_array_int_229_type(int*, const char*, const void*);
#define array_int_229_filter_size 229
extern FilterUtils get_array_int_229_filter_utils(const char* strFilter, void* pValue);
#define array_int_229_filter_values 0
/****************************************************************
 ** array__793
 ****************************************************************/
extern const char * array__793_to_string(const void* pValue);
extern int check_array__793_string(const char* strValue);
extern int string_to_array__793(const char* strValue, void* pValue);
int is_array__793_allow_double_convertion();
extern const char * get_array__793_signature();
extern int compare_array__793_type(int*, const char*, const void*);
#define array__793_filter_size 1
extern FilterUtils get_array__793_filter_utils(const char* strFilter, void* pValue);
#define array__793_filter_values 0
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
 ** P005_trackside_int_T_TM
 ****************************************************************/
extern const char * P005_trackside_int_T_TM_to_string(const void* pValue);
extern int check_P005_trackside_int_T_TM_string(const char* strValue);
extern int string_to_P005_trackside_int_T_TM(const char* strValue, void* pValue);
int is_P005_trackside_int_T_TM_allow_double_convertion();
extern int P005_trackside_int_T_TM_to_double(double * nValue, const void*);
#define get_P005_trackside_int_T_TM_signature get_struct__747_signature
#define compare_P005_trackside_int_T_TM_type compare_struct__747_type
#define P005_trackside_int_T_TM_filter_size struct__747_filter_size
#define get_P005_trackside_int_T_TM_filter_utils get_struct__747_filter_utils
#define P005_trackside_int_T_TM_filter_values struct__747_filter_values
/****************************************************************
 ** P005_trackide_sectionlist_T_TM
 ****************************************************************/
extern const char * P005_trackide_sectionlist_T_TM_to_string(const void* pValue);
extern int check_P005_trackide_sectionlist_T_TM_string(const char* strValue);
extern int string_to_P005_trackide_sectionlist_T_TM(const char* strValue, void* pValue);
int is_P005_trackide_sectionlist_T_TM_allow_double_convertion();
extern int P005_trackide_sectionlist_T_TM_to_double(double * nValue, const void*);
#define get_P005_trackide_sectionlist_T_TM_signature get_array__744_signature
#define compare_P005_trackide_sectionlist_T_TM_type compare_array__744_type
#define P005_trackide_sectionlist_T_TM_filter_size array__744_filter_size
#define get_P005_trackide_sectionlist_T_TM_filter_utils get_array__744_filter_utils
#define P005_trackide_sectionlist_T_TM_filter_values array__744_filter_values
/****************************************************************
 ** P005_section_int_T_TM
 ****************************************************************/
extern const char * P005_section_int_T_TM_to_string(const void* pValue);
extern int check_P005_section_int_T_TM_string(const char* strValue);
extern int string_to_P005_section_int_T_TM(const char* strValue, void* pValue);
int is_P005_section_int_T_TM_allow_double_convertion();
extern int P005_section_int_T_TM_to_double(double * nValue, const void*);
#define get_P005_section_int_T_TM_signature get_struct__714_signature
#define compare_P005_section_int_T_TM_type compare_struct__714_type
#define P005_section_int_T_TM_filter_size struct__714_filter_size
#define get_P005_section_int_T_TM_filter_utils get_struct__714_filter_utils
#define P005_section_int_T_TM_filter_values struct__714_filter_values
/****************************************************************
 ** P005_sections_array_flat_T_TM
 ****************************************************************/
extern const char * P005_sections_array_flat_T_TM_to_string(const void* pValue);
extern int check_P005_sections_array_flat_T_TM_string(const char* strValue);
extern int string_to_P005_sections_array_flat_T_TM(const char* strValue, void* pValue);
int is_P005_sections_array_flat_T_TM_allow_double_convertion();
extern int P005_sections_array_flat_T_TM_to_double(double * nValue, const void*);
#define get_P005_sections_array_flat_T_TM_signature get_array_int_224_signature
#define compare_P005_sections_array_flat_T_TM_type compare_array_int_224_type
#define P005_sections_array_flat_T_TM_filter_size array_int_224_filter_size
#define get_P005_sections_array_flat_T_TM_filter_utils get_array_int_224_filter_utils
#define P005_sections_array_flat_T_TM_filter_values array_int_224_filter_values
/****************************************************************
 ** P005_OBU_sectionlist_array_T_TM
 ****************************************************************/
extern const char * P005_OBU_sectionlist_array_T_TM_to_string(const void* pValue);
extern int check_P005_OBU_sectionlist_array_T_TM_string(const char* strValue);
extern int string_to_P005_OBU_sectionlist_array_T_TM(const char* strValue, void* pValue);
int is_P005_OBU_sectionlist_array_T_TM_allow_double_convertion();
extern int P005_OBU_sectionlist_array_T_TM_to_double(double * nValue, const void*);
#define get_P005_OBU_sectionlist_array_T_TM_signature get_array_int_7_33_signature
#define compare_P005_OBU_sectionlist_array_T_TM_type compare_array_int_7_33_type
#define P005_OBU_sectionlist_array_T_TM_filter_size array_int_7_33_filter_size
#define get_P005_OBU_sectionlist_array_T_TM_filter_utils get_array_int_7_33_filter_utils
#define P005_OBU_sectionlist_array_T_TM_filter_values array_int_7_33_filter_values
/****************************************************************
 ** P005_section_array_T_TM
 ****************************************************************/
extern const char * P005_section_array_T_TM_to_string(const void* pValue);
extern int check_P005_section_array_T_TM_string(const char* strValue);
extern int string_to_P005_section_array_T_TM(const char* strValue, void* pValue);
int is_P005_section_array_T_TM_allow_double_convertion();
extern int P005_section_array_T_TM_to_double(double * nValue, const void*);
#define get_P005_section_array_T_TM_signature get_array_int_7_signature
#define compare_P005_section_array_T_TM_type compare_array_int_7_type
#define P005_section_array_T_TM_filter_size array_int_7_filter_size
#define get_P005_section_array_T_TM_filter_utils get_array_int_7_filter_utils
#define P005_section_array_T_TM_filter_values array_int_7_filter_values
/****************************************************************
 ** P005_OBU_sectionlist_int_T_TM
 ****************************************************************/
extern const char * P005_OBU_sectionlist_int_T_TM_to_string(const void* pValue);
extern int check_P005_OBU_sectionlist_int_T_TM_string(const char* strValue);
extern int string_to_P005_OBU_sectionlist_int_T_TM(const char* strValue, void* pValue);
int is_P005_OBU_sectionlist_int_T_TM_allow_double_convertion();
extern int P005_OBU_sectionlist_int_T_TM_to_double(double * nValue, const void*);
#define get_P005_OBU_sectionlist_int_T_TM_signature get_array__730_signature
#define compare_P005_OBU_sectionlist_int_T_TM_type compare_array__730_type
#define P005_OBU_sectionlist_int_T_TM_filter_size array__730_filter_size
#define get_P005_OBU_sectionlist_int_T_TM_filter_utils get_array__730_filter_utils
#define P005_OBU_sectionlist_int_T_TM_filter_values array__730_filter_values
/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
extern const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_Metadata_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
extern int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_Metadata_T_Common_Types_Pkg_signature get_array__764_signature
#define compare_Metadata_T_Common_Types_Pkg_type compare_array__764_type
#define Metadata_T_Common_Types_Pkg_filter_size array__764_filter_size
#define get_Metadata_T_Common_Types_Pkg_filter_utils get_array__764_filter_utils
#define Metadata_T_Common_Types_Pkg_filter_values array__764_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__736_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__736_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__736_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__736_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__736_filter_values
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
#define get_CompressedPackets_T_Common_Types_Pkg_signature get_struct__767_signature
#define compare_CompressedPackets_T_Common_Types_Pkg_type compare_struct__767_type
#define CompressedPackets_T_Common_Types_Pkg_filter_size struct__767_filter_size
#define get_CompressedPackets_T_Common_Types_Pkg_filter_utils get_struct__767_filter_utils
#define CompressedPackets_T_Common_Types_Pkg_filter_values struct__767_filter_values

#endif /*WRITE_P005_TM_TRACKSIDE_TYPES_CONVERTION */
