#ifndef FLATTEN_SSP_TYPES_CONVERTION
#define FLATTEN_SSP_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_array_int_33_Utils;
extern TypeUtils _SCSIM_array_int_3_Utils;
extern TypeUtils _SCSIM_array_int_3_11_Utils;
extern TypeUtils _SCSIM_array_int_6_Utils;
extern TypeUtils _SCSIM_array_int_9_Utils;
extern TypeUtils _SCSIM_array_int_12_Utils;
extern TypeUtils _SCSIM_array_int_15_Utils;
extern TypeUtils _SCSIM_array_int_18_Utils;
extern TypeUtils _SCSIM_array_int_21_Utils;
extern TypeUtils _SCSIM_array_int_24_Utils;
extern TypeUtils _SCSIM_array_int_27_Utils;
extern TypeUtils _SCSIM_array_int_30_Utils;
extern TypeUtils _SCSIM_SSP_matrix_t_Utils;
extern TypeUtils _SCSIM_SSP_section_t_Utils;
extern TypeUtils _SCSIM_SSP_list_t_Utils;

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
 ** array_int_3_11
 ****************************************************************/
extern const char * array_int_3_11_to_string(const void* pValue);
extern int check_array_int_3_11_string(const char* strValue);
extern int string_to_array_int_3_11(const char* strValue, void* pValue);
int is_array_int_3_11_allow_double_convertion();
extern const char * get_array_int_3_11_signature();
extern int compare_array_int_3_11_type(int*, const char*, const void*);
#define array_int_3_11_filter_size 11
extern FilterUtils get_array_int_3_11_filter_utils(const char* strFilter, void* pValue);
#define array_int_3_11_filter_values 0
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
 ** array_int_9
 ****************************************************************/
extern const char * array_int_9_to_string(const void* pValue);
extern int check_array_int_9_string(const char* strValue);
extern int string_to_array_int_9(const char* strValue, void* pValue);
int is_array_int_9_allow_double_convertion();
extern const char * get_array_int_9_signature();
extern int compare_array_int_9_type(int*, const char*, const void*);
#define array_int_9_filter_size 9
extern FilterUtils get_array_int_9_filter_utils(const char* strFilter, void* pValue);
#define array_int_9_filter_values 0
/****************************************************************
 ** array_int_12
 ****************************************************************/
extern const char * array_int_12_to_string(const void* pValue);
extern int check_array_int_12_string(const char* strValue);
extern int string_to_array_int_12(const char* strValue, void* pValue);
int is_array_int_12_allow_double_convertion();
extern const char * get_array_int_12_signature();
extern int compare_array_int_12_type(int*, const char*, const void*);
#define array_int_12_filter_size 12
extern FilterUtils get_array_int_12_filter_utils(const char* strFilter, void* pValue);
#define array_int_12_filter_values 0
/****************************************************************
 ** array_int_15
 ****************************************************************/
extern const char * array_int_15_to_string(const void* pValue);
extern int check_array_int_15_string(const char* strValue);
extern int string_to_array_int_15(const char* strValue, void* pValue);
int is_array_int_15_allow_double_convertion();
extern const char * get_array_int_15_signature();
extern int compare_array_int_15_type(int*, const char*, const void*);
#define array_int_15_filter_size 15
extern FilterUtils get_array_int_15_filter_utils(const char* strFilter, void* pValue);
#define array_int_15_filter_values 0
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
 ** array_int_21
 ****************************************************************/
extern const char * array_int_21_to_string(const void* pValue);
extern int check_array_int_21_string(const char* strValue);
extern int string_to_array_int_21(const char* strValue, void* pValue);
int is_array_int_21_allow_double_convertion();
extern const char * get_array_int_21_signature();
extern int compare_array_int_21_type(int*, const char*, const void*);
#define array_int_21_filter_size 21
extern FilterUtils get_array_int_21_filter_utils(const char* strFilter, void* pValue);
#define array_int_21_filter_values 0
/****************************************************************
 ** array_int_24
 ****************************************************************/
extern const char * array_int_24_to_string(const void* pValue);
extern int check_array_int_24_string(const char* strValue);
extern int string_to_array_int_24(const char* strValue, void* pValue);
int is_array_int_24_allow_double_convertion();
extern const char * get_array_int_24_signature();
extern int compare_array_int_24_type(int*, const char*, const void*);
#define array_int_24_filter_size 24
extern FilterUtils get_array_int_24_filter_utils(const char* strFilter, void* pValue);
#define array_int_24_filter_values 0
/****************************************************************
 ** array_int_27
 ****************************************************************/
extern const char * array_int_27_to_string(const void* pValue);
extern int check_array_int_27_string(const char* strValue);
extern int string_to_array_int_27(const char* strValue, void* pValue);
int is_array_int_27_allow_double_convertion();
extern const char * get_array_int_27_signature();
extern int compare_array_int_27_type(int*, const char*, const void*);
#define array_int_27_filter_size 27
extern FilterUtils get_array_int_27_filter_utils(const char* strFilter, void* pValue);
#define array_int_27_filter_values 0
/****************************************************************
 ** array_int_30
 ****************************************************************/
extern const char * array_int_30_to_string(const void* pValue);
extern int check_array_int_30_string(const char* strValue);
extern int string_to_array_int_30(const char* strValue, void* pValue);
int is_array_int_30_allow_double_convertion();
extern const char * get_array_int_30_signature();
extern int compare_array_int_30_type(int*, const char*, const void*);
#define array_int_30_filter_size 30
extern FilterUtils get_array_int_30_filter_utils(const char* strFilter, void* pValue);
#define array_int_30_filter_values 0
/****************************************************************
 ** SSP_matrix_t
 ****************************************************************/
extern const char * SSP_matrix_t_to_string(const void* pValue);
extern int check_SSP_matrix_t_string(const char* strValue);
extern int string_to_SSP_matrix_t(const char* strValue, void* pValue);
int is_SSP_matrix_t_allow_double_convertion();
extern int SSP_matrix_t_to_double(double * nValue, const void*);
#define get_SSP_matrix_t_signature get_array_int_3_11_signature
#define compare_SSP_matrix_t_type compare_array_int_3_11_type
#define SSP_matrix_t_filter_size array_int_3_11_filter_size
#define get_SSP_matrix_t_filter_utils get_array_int_3_11_filter_utils
#define SSP_matrix_t_filter_values array_int_3_11_filter_values
/****************************************************************
 ** SSP_section_t
 ****************************************************************/
extern const char * SSP_section_t_to_string(const void* pValue);
extern int check_SSP_section_t_string(const char* strValue);
extern int string_to_SSP_section_t(const char* strValue, void* pValue);
int is_SSP_section_t_allow_double_convertion();
extern int SSP_section_t_to_double(double * nValue, const void*);
#define get_SSP_section_t_signature get_kcg_int_signature
#define compare_SSP_section_t_type compare_kcg_int_type
#define SSP_section_t_filter_size kcg_int_filter_size
#define get_SSP_section_t_filter_utils get_kcg_int_filter_utils
#define SSP_section_t_filter_values kcg_int_filter_values
/****************************************************************
 ** SSP_list_t
 ****************************************************************/
extern const char * SSP_list_t_to_string(const void* pValue);
extern int check_SSP_list_t_string(const char* strValue);
extern int string_to_SSP_list_t(const char* strValue, void* pValue);
int is_SSP_list_t_allow_double_convertion();
extern int SSP_list_t_to_double(double * nValue, const void*);
#define get_SSP_list_t_signature get_array_int_33_signature
#define compare_SSP_list_t_type compare_array_int_33_type
#define SSP_list_t_filter_size array_int_33_filter_size
#define get_SSP_list_t_filter_utils get_array_int_33_filter_utils
#define SSP_list_t_filter_values array_int_33_filter_values

#endif /*FLATTEN_SSP_TYPES_CONVERTION */
