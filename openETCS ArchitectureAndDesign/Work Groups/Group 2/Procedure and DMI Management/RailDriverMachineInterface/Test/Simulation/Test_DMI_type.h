#ifndef TEST_DMI_TYPES_CONVERTION
#define TEST_DMI_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_array_bool_12_Utils;
extern TypeUtils _SCSIM_array_real_12_Utils;
extern TypeUtils _SCSIM_array_int_1_Utils;

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
 ** array_bool_12
 ****************************************************************/
extern const char * array_bool_12_to_string(const void* pValue);
extern int check_array_bool_12_string(const char* strValue);
extern int string_to_array_bool_12(const char* strValue, void* pValue);
int is_array_bool_12_allow_double_convertion();
extern const char * get_array_bool_12_signature();
extern int compare_array_bool_12_type(int*, const char*, const void*);
#define array_bool_12_filter_size 12
extern FilterUtils get_array_bool_12_filter_utils(const char* strFilter, void* pValue);
#define array_bool_12_filter_values 0
/****************************************************************
 ** array_real_12
 ****************************************************************/
extern const char * array_real_12_to_string(const void* pValue);
extern int check_array_real_12_string(const char* strValue);
extern int string_to_array_real_12(const char* strValue, void* pValue);
int is_array_real_12_allow_double_convertion();
extern const char * get_array_real_12_signature();
extern int compare_array_real_12_type(int*, const char*, const void*);
#define array_real_12_filter_size 12
extern FilterUtils get_array_real_12_filter_utils(const char* strFilter, void* pValue);
#define array_real_12_filter_values 0
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

#endif /*TEST_DMI_TYPES_CONVERTION */
