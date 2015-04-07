#ifndef SPLIT_AND_REVERSE_SSP_MATRIX_TYPES_CONVERTION
#define SPLIT_AND_REVERSE_SSP_MATRIX_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__136_Utils;
extern TypeUtils _SCSIM_array_int_8_Utils;
extern TypeUtils _SCSIM_array__144_Utils;
extern TypeUtils _SCSIM_array_int_8_11_Utils;
extern TypeUtils _SCSIM_array__150_Utils;
extern TypeUtils _SCSIM_SSP_section_t_Utils;
extern TypeUtils _SCSIM_SSP_t_section_t_Utils;
extern TypeUtils _SCSIM_SSP_s_section_t_Utils;
extern TypeUtils _SCSIM_SSP_cat_t_Utils;
extern TypeUtils _SCSIM_SSP_t_cat_t_Utils;
extern TypeUtils _SCSIM_SSP_matrix_t_Utils;
extern TypeUtils _SCSIM_SSP_t_matrix_t_Utils;

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
 ** struct__136
 ****************************************************************/
extern const char * struct__136_to_string(const void* pValue);
extern int check_struct__136_string(const char* strValue);
extern int string_to_struct__136(const char* strValue, void* pValue);
int is_struct__136_allow_double_convertion();
extern const char * get_struct__136_signature();
extern int compare_struct__136_type(int*, const char*, const void*);
#define struct__136_filter_size 2
extern FilterUtils get_struct__136_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__136_filter_values[2];
/****************************************************************
 ** array_int_8
 ****************************************************************/
extern const char * array_int_8_to_string(const void* pValue);
extern int check_array_int_8_string(const char* strValue);
extern int string_to_array_int_8(const char* strValue, void* pValue);
int is_array_int_8_allow_double_convertion();
extern const char * get_array_int_8_signature();
extern int compare_array_int_8_type(int*, const char*, const void*);
#define array_int_8_filter_size 8
extern FilterUtils get_array_int_8_filter_utils(const char* strFilter, void* pValue);
#define array_int_8_filter_values 0
/****************************************************************
 ** array__144
 ****************************************************************/
extern const char * array__144_to_string(const void* pValue);
extern int check_array__144_string(const char* strValue);
extern int string_to_array__144(const char* strValue, void* pValue);
int is_array__144_allow_double_convertion();
extern const char * get_array__144_signature();
extern int compare_array__144_type(int*, const char*, const void*);
#define array__144_filter_size 8
extern FilterUtils get_array__144_filter_utils(const char* strFilter, void* pValue);
#define array__144_filter_values 0
/****************************************************************
 ** array_int_8_11
 ****************************************************************/
extern const char * array_int_8_11_to_string(const void* pValue);
extern int check_array_int_8_11_string(const char* strValue);
extern int string_to_array_int_8_11(const char* strValue, void* pValue);
int is_array_int_8_11_allow_double_convertion();
extern const char * get_array_int_8_11_signature();
extern int compare_array_int_8_11_type(int*, const char*, const void*);
#define array_int_8_11_filter_size 11
extern FilterUtils get_array_int_8_11_filter_utils(const char* strFilter, void* pValue);
#define array_int_8_11_filter_values 0
/****************************************************************
 ** array__150
 ****************************************************************/
extern const char * array__150_to_string(const void* pValue);
extern int check_array__150_string(const char* strValue);
extern int string_to_array__150(const char* strValue, void* pValue);
int is_array__150_allow_double_convertion();
extern const char * get_array__150_signature();
extern int compare_array__150_type(int*, const char*, const void*);
#define array__150_filter_size 11
extern FilterUtils get_array__150_filter_utils(const char* strFilter, void* pValue);
#define array__150_filter_values 0
/****************************************************************
 ** SSP_section_t
 ****************************************************************/
extern const char * SSP_section_t_to_string(const void* pValue);
extern int check_SSP_section_t_string(const char* strValue);
extern int string_to_SSP_section_t(const char* strValue, void* pValue);
int is_SSP_section_t_allow_double_convertion();
extern int SSP_section_t_to_double(double * nValue, const void*);
#define get_SSP_section_t_signature get_struct__136_signature
#define compare_SSP_section_t_type compare_struct__136_type
#define SSP_section_t_filter_size struct__136_filter_size
#define get_SSP_section_t_filter_utils get_struct__136_filter_utils
#define SSP_section_t_filter_values struct__136_filter_values
/****************************************************************
 ** SSP_t_section_t
 ****************************************************************/
extern const char * SSP_t_section_t_to_string(const void* pValue);
extern int check_SSP_t_section_t_string(const char* strValue);
extern int string_to_SSP_t_section_t(const char* strValue, void* pValue);
int is_SSP_t_section_t_allow_double_convertion();
extern int SSP_t_section_t_to_double(double * nValue, const void*);
#define get_SSP_t_section_t_signature get_kcg_int_signature
#define compare_SSP_t_section_t_type compare_kcg_int_type
#define SSP_t_section_t_filter_size kcg_int_filter_size
#define get_SSP_t_section_t_filter_utils get_kcg_int_filter_utils
#define SSP_t_section_t_filter_values kcg_int_filter_values
/****************************************************************
 ** SSP_s_section_t
 ****************************************************************/
extern const char * SSP_s_section_t_to_string(const void* pValue);
extern int check_SSP_s_section_t_string(const char* strValue);
extern int string_to_SSP_s_section_t(const char* strValue, void* pValue);
int is_SSP_s_section_t_allow_double_convertion();
extern int SSP_s_section_t_to_double(double * nValue, const void*);
#define get_SSP_s_section_t_signature get_kcg_int_signature
#define compare_SSP_s_section_t_type compare_kcg_int_type
#define SSP_s_section_t_filter_size kcg_int_filter_size
#define get_SSP_s_section_t_filter_utils get_kcg_int_filter_utils
#define SSP_s_section_t_filter_values kcg_int_filter_values
/****************************************************************
 ** SSP_cat_t
 ****************************************************************/
extern const char * SSP_cat_t_to_string(const void* pValue);
extern int check_SSP_cat_t_string(const char* strValue);
extern int string_to_SSP_cat_t(const char* strValue, void* pValue);
int is_SSP_cat_t_allow_double_convertion();
extern int SSP_cat_t_to_double(double * nValue, const void*);
#define get_SSP_cat_t_signature get_array__144_signature
#define compare_SSP_cat_t_type compare_array__144_type
#define SSP_cat_t_filter_size array__144_filter_size
#define get_SSP_cat_t_filter_utils get_array__144_filter_utils
#define SSP_cat_t_filter_values array__144_filter_values
/****************************************************************
 ** SSP_t_cat_t
 ****************************************************************/
extern const char * SSP_t_cat_t_to_string(const void* pValue);
extern int check_SSP_t_cat_t_string(const char* strValue);
extern int string_to_SSP_t_cat_t(const char* strValue, void* pValue);
int is_SSP_t_cat_t_allow_double_convertion();
extern int SSP_t_cat_t_to_double(double * nValue, const void*);
#define get_SSP_t_cat_t_signature get_array_int_8_signature
#define compare_SSP_t_cat_t_type compare_array_int_8_type
#define SSP_t_cat_t_filter_size array_int_8_filter_size
#define get_SSP_t_cat_t_filter_utils get_array_int_8_filter_utils
#define SSP_t_cat_t_filter_values array_int_8_filter_values
/****************************************************************
 ** SSP_matrix_t
 ****************************************************************/
extern const char * SSP_matrix_t_to_string(const void* pValue);
extern int check_SSP_matrix_t_string(const char* strValue);
extern int string_to_SSP_matrix_t(const char* strValue, void* pValue);
int is_SSP_matrix_t_allow_double_convertion();
extern int SSP_matrix_t_to_double(double * nValue, const void*);
#define get_SSP_matrix_t_signature get_array__150_signature
#define compare_SSP_matrix_t_type compare_array__150_type
#define SSP_matrix_t_filter_size array__150_filter_size
#define get_SSP_matrix_t_filter_utils get_array__150_filter_utils
#define SSP_matrix_t_filter_values array__150_filter_values
/****************************************************************
 ** SSP_t_matrix_t
 ****************************************************************/
extern const char * SSP_t_matrix_t_to_string(const void* pValue);
extern int check_SSP_t_matrix_t_string(const char* strValue);
extern int string_to_SSP_t_matrix_t(const char* strValue, void* pValue);
int is_SSP_t_matrix_t_allow_double_convertion();
extern int SSP_t_matrix_t_to_double(double * nValue, const void*);
#define get_SSP_t_matrix_t_signature get_array_int_8_11_signature
#define compare_SSP_t_matrix_t_type compare_array_int_8_11_type
#define SSP_t_matrix_t_filter_size array_int_8_11_filter_size
#define get_SSP_t_matrix_t_filter_utils get_array_int_8_11_filter_utils
#define SSP_t_matrix_t_filter_values array_int_8_11_filter_values

#endif /*SPLIT_AND_REVERSE_SSP_MATRIX_TYPES_CONVERTION */
