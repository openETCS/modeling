#ifndef C_P005_UNFLATTEN_SECTIONS_TM_LIB_INTERNAL_TYPES_CONVERTION
#define C_P005_UNFLATTEN_SECTIONS_TM_LIB_INTERNAL_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__532_Utils;
extern TypeUtils _SCSIM_array__543_Utils;
extern TypeUtils _SCSIM_array_int_224_Utils;
extern TypeUtils _SCSIM_array_int_32_Utils;
extern TypeUtils _SCSIM_array_int_224_32_Utils;
extern TypeUtils _SCSIM_D_LINK_Utils;
extern TypeUtils _SCSIM_Q_NEWCOUNTRY_Utils;
extern TypeUtils _SCSIM_NID_C_Utils;
extern TypeUtils _SCSIM_NID_BG_Utils;
extern TypeUtils _SCSIM_Q_LINKORIENTATION_Utils;
extern TypeUtils _SCSIM_Q_LINKREACTION_Utils;
extern TypeUtils _SCSIM_Q_LOCACC_Utils;
extern TypeUtils _SCSIM_P005_OBU_section_TM_Utils;
extern TypeUtils _SCSIM_P005_sections_array_flat_TM_Utils;
extern TypeUtils _SCSIM_P005_OBU_sectionlist_TM_Utils;

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
 ** struct__532
 ****************************************************************/
extern const char * struct__532_to_string(const void* pValue);
extern int check_struct__532_string(const char* strValue);
extern int string_to_struct__532(const char* strValue, void* pValue);
int is_struct__532_allow_double_convertion();
extern const char * get_struct__532_signature();
extern int compare_struct__532_type(int*, const char*, const void*);
#define struct__532_filter_size 8
extern FilterUtils get_struct__532_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__532_filter_values[8];
/****************************************************************
 ** array__543
 ****************************************************************/
extern const char * array__543_to_string(const void* pValue);
extern int check_array__543_string(const char* strValue);
extern int string_to_array__543(const char* strValue, void* pValue);
int is_array__543_allow_double_convertion();
extern const char * get_array__543_signature();
extern int compare_array__543_type(int*, const char*, const void*);
#define array__543_filter_size 32
extern FilterUtils get_array__543_filter_utils(const char* strFilter, void* pValue);
#define array__543_filter_values 0
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
 ** array_int_224_32
 ****************************************************************/
extern const char * array_int_224_32_to_string(const void* pValue);
extern int check_array_int_224_32_string(const char* strValue);
extern int string_to_array_int_224_32(const char* strValue, void* pValue);
int is_array_int_224_32_allow_double_convertion();
extern const char * get_array_int_224_32_signature();
extern int compare_array_int_224_32_type(int*, const char*, const void*);
#define array_int_224_32_filter_size 32
extern FilterUtils get_array_int_224_32_filter_utils(const char* strFilter, void* pValue);
#define array_int_224_32_filter_values 0
/****************************************************************
 ** D_LINK
 ****************************************************************/
extern const char * D_LINK_to_string(const void* pValue);
extern int check_D_LINK_string(const char* strValue);
extern int string_to_D_LINK(const char* strValue, void* pValue);
int is_D_LINK_allow_double_convertion();
extern int D_LINK_to_double(double * nValue, const void*);
#define get_D_LINK_signature get_kcg_int_signature
#define compare_D_LINK_type compare_kcg_int_type
#define D_LINK_filter_size kcg_int_filter_size
#define get_D_LINK_filter_utils get_kcg_int_filter_utils
#define D_LINK_filter_values kcg_int_filter_values
/****************************************************************
 ** Q_NEWCOUNTRY
 ****************************************************************/
extern const char * Q_NEWCOUNTRY_to_string(const void* pValue);
extern int check_Q_NEWCOUNTRY_string(const char* strValue);
extern int string_to_Q_NEWCOUNTRY(const char* strValue, void* pValue);
int is_Q_NEWCOUNTRY_allow_double_convertion();
extern int Q_NEWCOUNTRY_to_double(double * nValue, const void*);
extern const char * get_Q_NEWCOUNTRY_signature();
extern int compare_Q_NEWCOUNTRY_type(int*, const char*, const void*);
#define Q_NEWCOUNTRY_filter_size 0
#define get_Q_NEWCOUNTRY_filter_utils 0
#define Q_NEWCOUNTRY_filter_values 0
/****************************************************************
 ** NID_C
 ****************************************************************/
extern const char * NID_C_to_string(const void* pValue);
extern int check_NID_C_string(const char* strValue);
extern int string_to_NID_C(const char* strValue, void* pValue);
int is_NID_C_allow_double_convertion();
extern int NID_C_to_double(double * nValue, const void*);
#define get_NID_C_signature get_kcg_int_signature
#define compare_NID_C_type compare_kcg_int_type
#define NID_C_filter_size kcg_int_filter_size
#define get_NID_C_filter_utils get_kcg_int_filter_utils
#define NID_C_filter_values kcg_int_filter_values
/****************************************************************
 ** NID_BG
 ****************************************************************/
extern const char * NID_BG_to_string(const void* pValue);
extern int check_NID_BG_string(const char* strValue);
extern int string_to_NID_BG(const char* strValue, void* pValue);
int is_NID_BG_allow_double_convertion();
extern int NID_BG_to_double(double * nValue, const void*);
#define get_NID_BG_signature get_kcg_int_signature
#define compare_NID_BG_type compare_kcg_int_type
#define NID_BG_filter_size kcg_int_filter_size
#define get_NID_BG_filter_utils get_kcg_int_filter_utils
#define NID_BG_filter_values kcg_int_filter_values
/****************************************************************
 ** Q_LINKORIENTATION
 ****************************************************************/
extern const char * Q_LINKORIENTATION_to_string(const void* pValue);
extern int check_Q_LINKORIENTATION_string(const char* strValue);
extern int string_to_Q_LINKORIENTATION(const char* strValue, void* pValue);
int is_Q_LINKORIENTATION_allow_double_convertion();
extern int Q_LINKORIENTATION_to_double(double * nValue, const void*);
extern const char * get_Q_LINKORIENTATION_signature();
extern int compare_Q_LINKORIENTATION_type(int*, const char*, const void*);
#define Q_LINKORIENTATION_filter_size 0
#define get_Q_LINKORIENTATION_filter_utils 0
#define Q_LINKORIENTATION_filter_values 0
/****************************************************************
 ** Q_LINKREACTION
 ****************************************************************/
extern const char * Q_LINKREACTION_to_string(const void* pValue);
extern int check_Q_LINKREACTION_string(const char* strValue);
extern int string_to_Q_LINKREACTION(const char* strValue, void* pValue);
int is_Q_LINKREACTION_allow_double_convertion();
extern int Q_LINKREACTION_to_double(double * nValue, const void*);
extern const char * get_Q_LINKREACTION_signature();
extern int compare_Q_LINKREACTION_type(int*, const char*, const void*);
#define Q_LINKREACTION_filter_size 0
#define get_Q_LINKREACTION_filter_utils 0
#define Q_LINKREACTION_filter_values 0
/****************************************************************
 ** Q_LOCACC
 ****************************************************************/
extern const char * Q_LOCACC_to_string(const void* pValue);
extern int check_Q_LOCACC_string(const char* strValue);
extern int string_to_Q_LOCACC(const char* strValue, void* pValue);
int is_Q_LOCACC_allow_double_convertion();
extern int Q_LOCACC_to_double(double * nValue, const void*);
#define get_Q_LOCACC_signature get_kcg_int_signature
#define compare_Q_LOCACC_type compare_kcg_int_type
#define Q_LOCACC_filter_size kcg_int_filter_size
#define get_Q_LOCACC_filter_utils get_kcg_int_filter_utils
#define Q_LOCACC_filter_values kcg_int_filter_values
/****************************************************************
 ** P005_OBU_section_TM
 ****************************************************************/
extern const char * P005_OBU_section_TM_to_string(const void* pValue);
extern int check_P005_OBU_section_TM_string(const char* strValue);
extern int string_to_P005_OBU_section_TM(const char* strValue, void* pValue);
int is_P005_OBU_section_TM_allow_double_convertion();
extern int P005_OBU_section_TM_to_double(double * nValue, const void*);
#define get_P005_OBU_section_TM_signature get_struct__532_signature
#define compare_P005_OBU_section_TM_type compare_struct__532_type
#define P005_OBU_section_TM_filter_size struct__532_filter_size
#define get_P005_OBU_section_TM_filter_utils get_struct__532_filter_utils
#define P005_OBU_section_TM_filter_values struct__532_filter_values
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
 ** P005_OBU_sectionlist_TM
 ****************************************************************/
extern const char * P005_OBU_sectionlist_TM_to_string(const void* pValue);
extern int check_P005_OBU_sectionlist_TM_string(const char* strValue);
extern int string_to_P005_OBU_sectionlist_TM(const char* strValue, void* pValue);
int is_P005_OBU_sectionlist_TM_allow_double_convertion();
extern int P005_OBU_sectionlist_TM_to_double(double * nValue, const void*);
#define get_P005_OBU_sectionlist_TM_signature get_array__543_signature
#define compare_P005_OBU_sectionlist_TM_type compare_array__543_type
#define P005_OBU_sectionlist_TM_filter_size array__543_filter_size
#define get_P005_OBU_sectionlist_TM_filter_utils get_array__543_filter_utils
#define P005_OBU_sectionlist_TM_filter_values array__543_filter_values

#endif /*C_P005_UNFLATTEN_SECTIONS_TM_LIB_INTERNAL_TYPES_CONVERTION */
