#ifndef C_P005_FS_FLATTEN_ARRAY_TM_LIB_INTERNAL_TYPES_CONVERTION
#define C_P005_FS_FLATTEN_ARRAY_TM_LIB_INTERNAL_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_array_int_7_33_Utils;
extern TypeUtils _SCSIM_array_int_224_Utils;
extern TypeUtils _SCSIM_P005_sections_array_flat_T_TM_Utils;
extern TypeUtils _SCSIM_P005_OBU_sectionlist_array_T_TM_Utils;
extern TypeUtils _SCSIM_P005_section_array_T_TM_Utils;

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

#endif /*C_P005_FS_FLATTEN_ARRAY_TM_LIB_INTERNAL_TYPES_CONVERTION */
