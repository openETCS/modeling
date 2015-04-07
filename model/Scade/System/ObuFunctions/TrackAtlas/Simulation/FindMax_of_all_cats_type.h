#ifndef FINDMAX_OF_ALL_CATS_TYPES_CONVERTION
#define FINDMAX_OF_ALL_CATS_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__181_Utils;
extern TypeUtils _SCSIM_struct__186_Utils;
extern TypeUtils _SCSIM_array__192_Utils;
extern TypeUtils _SCSIM_array__195_Utils;
extern TypeUtils _SCSIM_SSP_indexed_matrix_element_Utils;
extern TypeUtils _SCSIM_SSP_target_t_Utils;
extern TypeUtils _SCSIM_SSP_indexed_trgt_t_Utils;
extern TypeUtils _SCSIM_SSP_indexed_targets_list_t_Utils;

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
 ** struct__181
 ****************************************************************/
extern const char * struct__181_to_string(const void* pValue);
extern int check_struct__181_string(const char* strValue);
extern int string_to_struct__181(const char* strValue, void* pValue);
int is_struct__181_allow_double_convertion();
extern const char * get_struct__181_signature();
extern int compare_struct__181_type(int*, const char*, const void*);
#define struct__181_filter_size 2
extern FilterUtils get_struct__181_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__181_filter_values[2];
/****************************************************************
 ** struct__186
 ****************************************************************/
extern const char * struct__186_to_string(const void* pValue);
extern int check_struct__186_string(const char* strValue);
extern int string_to_struct__186(const char* strValue, void* pValue);
int is_struct__186_allow_double_convertion();
extern const char * get_struct__186_signature();
extern int compare_struct__186_type(int*, const char*, const void*);
#define struct__186_filter_size 3
extern FilterUtils get_struct__186_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__186_filter_values[3];
/****************************************************************
 ** array__192
 ****************************************************************/
extern const char * array__192_to_string(const void* pValue);
extern int check_array__192_string(const char* strValue);
extern int string_to_array__192(const char* strValue, void* pValue);
int is_array__192_allow_double_convertion();
extern const char * get_array__192_signature();
extern int compare_array__192_type(int*, const char*, const void*);
#define array__192_filter_size 11
extern FilterUtils get_array__192_filter_utils(const char* strFilter, void* pValue);
#define array__192_filter_values 0
/****************************************************************
 ** array__195
 ****************************************************************/
extern const char * array__195_to_string(const void* pValue);
extern int check_array__195_string(const char* strValue);
extern int string_to_array__195(const char* strValue, void* pValue);
int is_array__195_allow_double_convertion();
extern const char * get_array__195_signature();
extern int compare_array__195_type(int*, const char*, const void*);
#define array__195_filter_size 11
extern FilterUtils get_array__195_filter_utils(const char* strFilter, void* pValue);
#define array__195_filter_values 0
/****************************************************************
 ** SSP_indexed_matrix_element
 ****************************************************************/
extern const char * SSP_indexed_matrix_element_to_string(const void* pValue);
extern int check_SSP_indexed_matrix_element_string(const char* strValue);
extern int string_to_SSP_indexed_matrix_element(const char* strValue, void* pValue);
int is_SSP_indexed_matrix_element_allow_double_convertion();
extern int SSP_indexed_matrix_element_to_double(double * nValue, const void*);
#define get_SSP_indexed_matrix_element_signature get_struct__186_signature
#define compare_SSP_indexed_matrix_element_type compare_struct__186_type
#define SSP_indexed_matrix_element_filter_size struct__186_filter_size
#define get_SSP_indexed_matrix_element_filter_utils get_struct__186_filter_utils
#define SSP_indexed_matrix_element_filter_values struct__186_filter_values
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
 ** SSP_indexed_trgt_t
 ****************************************************************/
extern const char * SSP_indexed_trgt_t_to_string(const void* pValue);
extern int check_SSP_indexed_trgt_t_string(const char* strValue);
extern int string_to_SSP_indexed_trgt_t(const char* strValue, void* pValue);
int is_SSP_indexed_trgt_t_allow_double_convertion();
extern int SSP_indexed_trgt_t_to_double(double * nValue, const void*);
#define get_SSP_indexed_trgt_t_signature get_struct__181_signature
#define compare_SSP_indexed_trgt_t_type compare_struct__181_type
#define SSP_indexed_trgt_t_filter_size struct__181_filter_size
#define get_SSP_indexed_trgt_t_filter_utils get_struct__181_filter_utils
#define SSP_indexed_trgt_t_filter_values struct__181_filter_values
/****************************************************************
 ** SSP_indexed_targets_list_t
 ****************************************************************/
extern const char * SSP_indexed_targets_list_t_to_string(const void* pValue);
extern int check_SSP_indexed_targets_list_t_string(const char* strValue);
extern int string_to_SSP_indexed_targets_list_t(const char* strValue, void* pValue);
int is_SSP_indexed_targets_list_t_allow_double_convertion();
extern int SSP_indexed_targets_list_t_to_double(double * nValue, const void*);
#define get_SSP_indexed_targets_list_t_signature get_array__192_signature
#define compare_SSP_indexed_targets_list_t_type compare_array__192_type
#define SSP_indexed_targets_list_t_filter_size array__192_filter_size
#define get_SSP_indexed_targets_list_t_filter_utils get_array__192_filter_utils
#define SSP_indexed_targets_list_t_filter_values array__192_filter_values

#endif /*FINDMAX_OF_ALL_CATS_TYPES_CONVERTION */
