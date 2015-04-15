#ifndef INDEX_FLAT_SSP_TYPES_CONVERTION
#define INDEX_FLAT_SSP_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__109_Utils;
extern TypeUtils _SCSIM_SSP_index_t_Utils;
extern TypeUtils _SCSIM_SSP_section_t_Utils;
extern TypeUtils _SCSIM_SSP_indexed_list_t_Utils;
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
 ** struct__109
 ****************************************************************/
extern const char * struct__109_to_string(const void* pValue);
extern int check_struct__109_string(const char* strValue);
extern int string_to_struct__109(const char* strValue, void* pValue);
int is_struct__109_allow_double_convertion();
extern const char * get_struct__109_signature();
extern int compare_struct__109_type(int*, const char*, const void*);
#define struct__109_filter_size 2
extern FilterUtils get_struct__109_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__109_filter_values[2];
/****************************************************************
 ** SSP_index_t
 ****************************************************************/
extern const char * SSP_index_t_to_string(const void* pValue);
extern int check_SSP_index_t_string(const char* strValue);
extern int string_to_SSP_index_t(const char* strValue, void* pValue);
int is_SSP_index_t_allow_double_convertion();
extern int SSP_index_t_to_double(double * nValue, const void*);
#define get_SSP_index_t_signature get_array_int_33_signature
#define compare_SSP_index_t_type compare_array_int_33_type
#define SSP_index_t_filter_size array_int_33_filter_size
#define get_SSP_index_t_filter_utils get_array_int_33_filter_utils
#define SSP_index_t_filter_values array_int_33_filter_values
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
 ** SSP_indexed_list_t
 ****************************************************************/
extern const char * SSP_indexed_list_t_to_string(const void* pValue);
extern int check_SSP_indexed_list_t_string(const char* strValue);
extern int string_to_SSP_indexed_list_t(const char* strValue, void* pValue);
int is_SSP_indexed_list_t_allow_double_convertion();
extern int SSP_indexed_list_t_to_double(double * nValue, const void*);
#define get_SSP_indexed_list_t_signature get_struct__109_signature
#define compare_SSP_indexed_list_t_type compare_struct__109_type
#define SSP_indexed_list_t_filter_size struct__109_filter_size
#define get_SSP_indexed_list_t_filter_utils get_struct__109_filter_utils
#define SSP_indexed_list_t_filter_values struct__109_filter_values
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

#endif /*INDEX_FLAT_SSP_TYPES_CONVERTION */
