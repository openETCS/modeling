#ifndef BUILDTARGETLIST_TYPES_CONVERTION
#define BUILDTARGETLIST_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_array_int_8_Utils;
extern TypeUtils _SCSIM_array_int_8_11_Utils;
extern TypeUtils _SCSIM_struct__346_Utils;
extern TypeUtils _SCSIM_struct__352_Utils;
extern TypeUtils _SCSIM_array__357_Utils;
extern TypeUtils _SCSIM_array__360_Utils;
extern TypeUtils _SCSIM_array__363_Utils;
extern TypeUtils _SCSIM_SSP_target_t_Utils;
extern TypeUtils _SCSIM_SSP_t_section_t_Utils;
extern TypeUtils _SCSIM_SSP_t_indexed_trgt_t_Utils;
extern TypeUtils _SCSIM_SSP_t_cat_t_Utils;
extern TypeUtils _SCSIM_SSP_t_matrix_t_Utils;
extern TypeUtils _SCSIM_SSP_t_indexed_targets_list_t_Utils;
extern TypeUtils _SCSIM_SSP_t_indexed_matrix_element_Utils;
extern TypeUtils _SCSIM_SSP_t_list_t_Utils;

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
 ** struct__346
 ****************************************************************/
extern const char * struct__346_to_string(const void* pValue);
extern int check_struct__346_string(const char* strValue);
extern int string_to_struct__346(const char* strValue, void* pValue);
int is_struct__346_allow_double_convertion();
extern const char * get_struct__346_signature();
extern int compare_struct__346_type(int*, const char*, const void*);
#define struct__346_filter_size 3
extern FilterUtils get_struct__346_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__346_filter_values[3];
/****************************************************************
 ** struct__352
 ****************************************************************/
extern const char * struct__352_to_string(const void* pValue);
extern int check_struct__352_string(const char* strValue);
extern int string_to_struct__352(const char* strValue, void* pValue);
int is_struct__352_allow_double_convertion();
extern const char * get_struct__352_signature();
extern int compare_struct__352_type(int*, const char*, const void*);
#define struct__352_filter_size 2
extern FilterUtils get_struct__352_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__352_filter_values[2];
/****************************************************************
 ** array__357
 ****************************************************************/
extern const char * array__357_to_string(const void* pValue);
extern int check_array__357_string(const char* strValue);
extern int string_to_array__357(const char* strValue, void* pValue);
int is_array__357_allow_double_convertion();
extern const char * get_array__357_signature();
extern int compare_array__357_type(int*, const char*, const void*);
#define array__357_filter_size 11
extern FilterUtils get_array__357_filter_utils(const char* strFilter, void* pValue);
#define array__357_filter_values 0
/****************************************************************
 ** array__360
 ****************************************************************/
extern const char * array__360_to_string(const void* pValue);
extern int check_array__360_string(const char* strValue);
extern int string_to_array__360(const char* strValue, void* pValue);
int is_array__360_allow_double_convertion();
extern const char * get_array__360_signature();
extern int compare_array__360_type(int*, const char*, const void*);
#define array__360_filter_size 33
extern FilterUtils get_array__360_filter_utils(const char* strFilter, void* pValue);
#define array__360_filter_values 0
/****************************************************************
 ** array__363
 ****************************************************************/
extern const char * array__363_to_string(const void* pValue);
extern int check_array__363_string(const char* strValue);
extern int string_to_array__363(const char* strValue, void* pValue);
int is_array__363_allow_double_convertion();
extern const char * get_array__363_signature();
extern int compare_array__363_type(int*, const char*, const void*);
#define array__363_filter_size 11
extern FilterUtils get_array__363_filter_utils(const char* strFilter, void* pValue);
#define array__363_filter_values 0
/****************************************************************
 ** SSP_target_t
 ****************************************************************/
extern const char * SSP_target_t_to_string(const void* pValue);
extern int check_SSP_target_t_string(const char* strValue);
extern int string_to_SSP_target_t(const char* strValue, void* pValue);
int is_SSP_target_t_allow_double_convertion();
extern int SSP_target_t_to_double(double * nValue, const void*);
#define get_SSP_target_t_signature get_kcg_int_signature
#define compare_SSP_target_t_type compare_kcg_int_type
#define SSP_target_t_filter_size kcg_int_filter_size
#define get_SSP_target_t_filter_utils get_kcg_int_filter_utils
#define SSP_target_t_filter_values kcg_int_filter_values
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
 ** SSP_t_indexed_trgt_t
 ****************************************************************/
extern const char * SSP_t_indexed_trgt_t_to_string(const void* pValue);
extern int check_SSP_t_indexed_trgt_t_string(const char* strValue);
extern int string_to_SSP_t_indexed_trgt_t(const char* strValue, void* pValue);
int is_SSP_t_indexed_trgt_t_allow_double_convertion();
extern int SSP_t_indexed_trgt_t_to_double(double * nValue, const void*);
#define get_SSP_t_indexed_trgt_t_signature get_struct__352_signature
#define compare_SSP_t_indexed_trgt_t_type compare_struct__352_type
#define SSP_t_indexed_trgt_t_filter_size struct__352_filter_size
#define get_SSP_t_indexed_trgt_t_filter_utils get_struct__352_filter_utils
#define SSP_t_indexed_trgt_t_filter_values struct__352_filter_values
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
/****************************************************************
 ** SSP_t_indexed_targets_list_t
 ****************************************************************/
extern const char * SSP_t_indexed_targets_list_t_to_string(const void* pValue);
extern int check_SSP_t_indexed_targets_list_t_string(const char* strValue);
extern int string_to_SSP_t_indexed_targets_list_t(const char* strValue, void* pValue);
int is_SSP_t_indexed_targets_list_t_allow_double_convertion();
extern int SSP_t_indexed_targets_list_t_to_double(double * nValue, const void*);
#define get_SSP_t_indexed_targets_list_t_signature get_array__357_signature
#define compare_SSP_t_indexed_targets_list_t_type compare_array__357_type
#define SSP_t_indexed_targets_list_t_filter_size array__357_filter_size
#define get_SSP_t_indexed_targets_list_t_filter_utils get_array__357_filter_utils
#define SSP_t_indexed_targets_list_t_filter_values array__357_filter_values
/****************************************************************
 ** SSP_t_indexed_matrix_element
 ****************************************************************/
extern const char * SSP_t_indexed_matrix_element_to_string(const void* pValue);
extern int check_SSP_t_indexed_matrix_element_string(const char* strValue);
extern int string_to_SSP_t_indexed_matrix_element(const char* strValue, void* pValue);
int is_SSP_t_indexed_matrix_element_allow_double_convertion();
extern int SSP_t_indexed_matrix_element_to_double(double * nValue, const void*);
#define get_SSP_t_indexed_matrix_element_signature get_struct__346_signature
#define compare_SSP_t_indexed_matrix_element_type compare_struct__346_type
#define SSP_t_indexed_matrix_element_filter_size struct__346_filter_size
#define get_SSP_t_indexed_matrix_element_filter_utils get_struct__346_filter_utils
#define SSP_t_indexed_matrix_element_filter_values struct__346_filter_values
/****************************************************************
 ** SSP_t_list_t
 ****************************************************************/
extern const char * SSP_t_list_t_to_string(const void* pValue);
extern int check_SSP_t_list_t_string(const char* strValue);
extern int string_to_SSP_t_list_t(const char* strValue, void* pValue);
int is_SSP_t_list_t_allow_double_convertion();
extern int SSP_t_list_t_to_double(double * nValue, const void*);
#define get_SSP_t_list_t_signature get_array__360_signature
#define compare_SSP_t_list_t_type compare_array__360_type
#define SSP_t_list_t_filter_size array__360_filter_size
#define get_SSP_t_list_t_filter_utils get_array__360_filter_utils
#define SSP_t_list_t_filter_values array__360_filter_values

#endif /*BUILDTARGETLIST_TYPES_CONVERTION */
