#ifndef C_P005_TRACKSIM_COMPR_TM_CONVERSIONS_TYPES_CONVERTION
#define C_P005_TRACKSIM_COMPR_TM_CONVERSIONS_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__429_Utils;
extern TypeUtils _SCSIM_array_int_7_32_Utils;
extern TypeUtils _SCSIM_array_int_224_Utils;
extern TypeUtils _SCSIM_array__445_Utils;
extern TypeUtils _SCSIM_array__448_Utils;
extern TypeUtils _SCSIM_struct__451_Utils;
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_struct__470_Utils;
extern TypeUtils _SCSIM_array_int_7_32_224_Utils;
extern TypeUtils _SCSIM_array_int_272_Utils;
extern TypeUtils _SCSIM_array_int_3_Utils;
extern TypeUtils _SCSIM_array_int_1_Utils;
extern TypeUtils _SCSIM_array_int_4_Utils;
extern TypeUtils _SCSIM_array_int_228_Utils;
extern TypeUtils _SCSIM_array__496_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_MetadataElement_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_P005_trackside_TM_Utils;
extern TypeUtils _SCSIM_P005_trackide_sectionlist_T_TM_Utils;
extern TypeUtils _SCSIM__1_P005_trackside_section_TM_Utils;
extern TypeUtils _SCSIM_P005_sections_array_flat_TM_Utils;
extern TypeUtils _SCSIM_P005_OBU_sectionlist_array_T_TM_Utils;
extern TypeUtils _SCSIM_P005_trackside_section_array_TM_Utils;
extern TypeUtils _SCSIM_P005_OBU_sectionlist_T_TM_Utils;

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
 ** struct__429
 ****************************************************************/
extern const char * struct__429_to_string(const void* pValue);
extern int check_struct__429_string(const char* strValue);
extern int string_to_struct__429(const char* strValue, void* pValue);
int is_struct__429_allow_double_convertion();
extern const char * get_struct__429_signature();
extern int compare_struct__429_type(int*, const char*, const void*);
#define struct__429_filter_size 7
extern FilterUtils get_struct__429_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__429_filter_values[7];
/****************************************************************
 ** array_int_7_32
 ****************************************************************/
extern const char * array_int_7_32_to_string(const void* pValue);
extern int check_array_int_7_32_string(const char* strValue);
extern int string_to_array_int_7_32(const char* strValue, void* pValue);
int is_array_int_7_32_allow_double_convertion();
extern const char * get_array_int_7_32_signature();
extern int compare_array_int_7_32_type(int*, const char*, const void*);
#define array_int_7_32_filter_size 32
extern FilterUtils get_array_int_7_32_filter_utils(const char* strFilter, void* pValue);
#define array_int_7_32_filter_values 0
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
 ** array__445
 ****************************************************************/
extern const char * array__445_to_string(const void* pValue);
extern int check_array__445_string(const char* strValue);
extern int string_to_array__445(const char* strValue, void* pValue);
int is_array__445_allow_double_convertion();
extern const char * get_array__445_signature();
extern int compare_array__445_type(int*, const char*, const void*);
#define array__445_filter_size 32
extern FilterUtils get_array__445_filter_utils(const char* strFilter, void* pValue);
#define array__445_filter_values 0
/****************************************************************
 ** array__448
 ****************************************************************/
extern const char * array__448_to_string(const void* pValue);
extern int check_array__448_string(const char* strValue);
extern int string_to_array__448(const char* strValue, void* pValue);
int is_array__448_allow_double_convertion();
extern const char * get_array__448_signature();
extern int compare_array__448_type(int*, const char*, const void*);
#define array__448_filter_size 31
extern FilterUtils get_array__448_filter_utils(const char* strFilter, void* pValue);
#define array__448_filter_values 0
/****************************************************************
 ** struct__451
 ****************************************************************/
extern const char * struct__451_to_string(const void* pValue);
extern int check_struct__451_string(const char* strValue);
extern int string_to_struct__451(const char* strValue, void* pValue);
int is_struct__451_allow_double_convertion();
extern const char * get_struct__451_signature();
extern int compare_struct__451_type(int*, const char*, const void*);
#define struct__451_filter_size 13
extern FilterUtils get_struct__451_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__451_filter_values[13];
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
 ** struct__470
 ****************************************************************/
extern const char * struct__470_to_string(const void* pValue);
extern int check_struct__470_string(const char* strValue);
extern int string_to_struct__470(const char* strValue, void* pValue);
int is_struct__470_allow_double_convertion();
extern const char * get_struct__470_signature();
extern int compare_struct__470_type(int*, const char*, const void*);
#define struct__470_filter_size 5
extern FilterUtils get_struct__470_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__470_filter_values[5];
/****************************************************************
 ** array_int_7_32_224
 ****************************************************************/
extern const char * array_int_7_32_224_to_string(const void* pValue);
extern int check_array_int_7_32_224_string(const char* strValue);
extern int string_to_array_int_7_32_224(const char* strValue, void* pValue);
int is_array_int_7_32_224_allow_double_convertion();
extern const char * get_array_int_7_32_224_signature();
extern int compare_array_int_7_32_224_type(int*, const char*, const void*);
#define array_int_7_32_224_filter_size 224
extern FilterUtils get_array_int_7_32_224_filter_utils(const char* strFilter, void* pValue);
#define array_int_7_32_224_filter_values 0
/****************************************************************
 ** array_int_272
 ****************************************************************/
extern const char * array_int_272_to_string(const void* pValue);
extern int check_array_int_272_string(const char* strValue);
extern int string_to_array_int_272(const char* strValue, void* pValue);
int is_array_int_272_allow_double_convertion();
extern const char * get_array_int_272_signature();
extern int compare_array_int_272_type(int*, const char*, const void*);
#define array_int_272_filter_size 272
extern FilterUtils get_array_int_272_filter_utils(const char* strFilter, void* pValue);
#define array_int_272_filter_values 0
/****************************************************************
 ** array_int_3
 ****************************************************************/
extern const char * array_int_3_to_string(const void* pValue);
extern int check_array_int_3_string(const char* strValue);
extern int string_to_array_int_3(const char* strValue, void* pValue);
int is_array_int_3_allow_double_convertion();
extern const char * get_array_int_3_signature();
extern int compare_array_int_3_type(int*, const char*, const void*);
#define array_int_3_filter_size 3
extern FilterUtils get_array_int_3_filter_utils(const char* strFilter, void* pValue);
#define array_int_3_filter_values 0
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
 ** array_int_228
 ****************************************************************/
extern const char * array_int_228_to_string(const void* pValue);
extern int check_array_int_228_string(const char* strValue);
extern int string_to_array_int_228(const char* strValue, void* pValue);
int is_array_int_228_allow_double_convertion();
extern const char * get_array_int_228_signature();
extern int compare_array_int_228_type(int*, const char*, const void*);
#define array_int_228_filter_size 228
extern FilterUtils get_array_int_228_filter_utils(const char* strFilter, void* pValue);
#define array_int_228_filter_values 0
/****************************************************************
 ** array__496
 ****************************************************************/
extern const char * array__496_to_string(const void* pValue);
extern int check_array__496_string(const char* strValue);
extern int string_to_array__496(const char* strValue, void* pValue);
int is_array__496_allow_double_convertion();
extern const char * get_array__496_signature();
extern int compare_array__496_type(int*, const char*, const void*);
#define array__496_filter_size 1
extern FilterUtils get_array__496_filter_utils(const char* strFilter, void* pValue);
#define array__496_filter_values 0
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
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__470_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__470_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__470_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__470_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__470_filter_values
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
 ** P005_trackside_TM
 ****************************************************************/
extern const char * P005_trackside_TM_to_string(const void* pValue);
extern int check_P005_trackside_TM_string(const char* strValue);
extern int string_to_P005_trackside_TM(const char* strValue, void* pValue);
int is_P005_trackside_TM_allow_double_convertion();
extern int P005_trackside_TM_to_double(double * nValue, const void*);
#define get_P005_trackside_TM_signature get_struct__451_signature
#define compare_P005_trackside_TM_type compare_struct__451_type
#define P005_trackside_TM_filter_size struct__451_filter_size
#define get_P005_trackside_TM_filter_utils get_struct__451_filter_utils
#define P005_trackside_TM_filter_values struct__451_filter_values
/****************************************************************
 ** P005_trackide_sectionlist_T_TM
 ****************************************************************/
extern const char * P005_trackide_sectionlist_T_TM_to_string(const void* pValue);
extern int check_P005_trackide_sectionlist_T_TM_string(const char* strValue);
extern int string_to_P005_trackide_sectionlist_T_TM(const char* strValue, void* pValue);
int is_P005_trackide_sectionlist_T_TM_allow_double_convertion();
extern int P005_trackide_sectionlist_T_TM_to_double(double * nValue, const void*);
#define get_P005_trackide_sectionlist_T_TM_signature get_array__448_signature
#define compare_P005_trackide_sectionlist_T_TM_type compare_array__448_type
#define P005_trackide_sectionlist_T_TM_filter_size array__448_filter_size
#define get_P005_trackide_sectionlist_T_TM_filter_utils get_array__448_filter_utils
#define P005_trackide_sectionlist_T_TM_filter_values array__448_filter_values
/****************************************************************
 ** _1_P005_trackside_section_TM
 ****************************************************************/
extern const char * _1_P005_trackside_section_TM_to_string(const void* pValue);
extern int check__1_P005_trackside_section_TM_string(const char* strValue);
extern int string_to__1_P005_trackside_section_TM(const char* strValue, void* pValue);
int is__1_P005_trackside_section_TM_allow_double_convertion();
extern int _1_P005_trackside_section_TM_to_double(double * nValue, const void*);
#define get__1_P005_trackside_section_TM_signature get_struct__429_signature
#define compare__1_P005_trackside_section_TM_type compare_struct__429_type
#define _1_P005_trackside_section_TM_filter_size struct__429_filter_size
#define get__1_P005_trackside_section_TM_filter_utils get_struct__429_filter_utils
#define _1_P005_trackside_section_TM_filter_values struct__429_filter_values
/****************************************************************
 ** P005_sections_array_flat_TM
 ****************************************************************/
extern const char * P005_sections_array_flat_TM_to_string(const void* pValue);
extern int check_P005_sections_array_flat_TM_string(const char* strValue);
extern int string_to_P005_sections_array_flat_TM(const char* strValue, void* pValue);
int is_P005_sections_array_flat_TM_allow_double_convertion();
extern int P005_sections_array_flat_TM_to_double(double * nValue, const void*);
#define get_P005_sections_array_flat_TM_signature get_array_int_224_signature
#define compare_P005_sections_array_flat_TM_type compare_array_int_224_type
#define P005_sections_array_flat_TM_filter_size array_int_224_filter_size
#define get_P005_sections_array_flat_TM_filter_utils get_array_int_224_filter_utils
#define P005_sections_array_flat_TM_filter_values array_int_224_filter_values
/****************************************************************
 ** P005_OBU_sectionlist_array_T_TM
 ****************************************************************/
extern const char * P005_OBU_sectionlist_array_T_TM_to_string(const void* pValue);
extern int check_P005_OBU_sectionlist_array_T_TM_string(const char* strValue);
extern int string_to_P005_OBU_sectionlist_array_T_TM(const char* strValue, void* pValue);
int is_P005_OBU_sectionlist_array_T_TM_allow_double_convertion();
extern int P005_OBU_sectionlist_array_T_TM_to_double(double * nValue, const void*);
#define get_P005_OBU_sectionlist_array_T_TM_signature get_array_int_7_32_signature
#define compare_P005_OBU_sectionlist_array_T_TM_type compare_array_int_7_32_type
#define P005_OBU_sectionlist_array_T_TM_filter_size array_int_7_32_filter_size
#define get_P005_OBU_sectionlist_array_T_TM_filter_utils get_array_int_7_32_filter_utils
#define P005_OBU_sectionlist_array_T_TM_filter_values array_int_7_32_filter_values
/****************************************************************
 ** P005_trackside_section_array_TM
 ****************************************************************/
extern const char * P005_trackside_section_array_TM_to_string(const void* pValue);
extern int check_P005_trackside_section_array_TM_string(const char* strValue);
extern int string_to_P005_trackside_section_array_TM(const char* strValue, void* pValue);
int is_P005_trackside_section_array_TM_allow_double_convertion();
extern int P005_trackside_section_array_TM_to_double(double * nValue, const void*);
#define get_P005_trackside_section_array_TM_signature get_array_int_7_signature
#define compare_P005_trackside_section_array_TM_type compare_array_int_7_type
#define P005_trackside_section_array_TM_filter_size array_int_7_filter_size
#define get_P005_trackside_section_array_TM_filter_utils get_array_int_7_filter_utils
#define P005_trackside_section_array_TM_filter_values array_int_7_filter_values
/****************************************************************
 ** P005_OBU_sectionlist_T_TM
 ****************************************************************/
extern const char * P005_OBU_sectionlist_T_TM_to_string(const void* pValue);
extern int check_P005_OBU_sectionlist_T_TM_string(const char* strValue);
extern int string_to_P005_OBU_sectionlist_T_TM(const char* strValue, void* pValue);
int is_P005_OBU_sectionlist_T_TM_allow_double_convertion();
extern int P005_OBU_sectionlist_T_TM_to_double(double * nValue, const void*);
#define get_P005_OBU_sectionlist_T_TM_signature get_array__445_signature
#define compare_P005_OBU_sectionlist_T_TM_type compare_array__445_type
#define P005_OBU_sectionlist_T_TM_filter_size array__445_filter_size
#define get_P005_OBU_sectionlist_T_TM_filter_utils get_array__445_filter_utils
#define P005_OBU_sectionlist_T_TM_filter_values array__445_filter_values

#endif /*C_P005_TRACKSIM_COMPR_TM_CONVERSIONS_TYPES_CONVERTION */
