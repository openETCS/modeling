#ifndef RECV_READRADIOPACKET15_TYPES_CONVERTION
#define RECV_READRADIOPACKET15_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_array_int_200_Utils;
extern TypeUtils _SCSIM_array_int_200_200_Utils;
extern TypeUtils _SCSIM_CompressedBaliseData_Utils;

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
 ** array_int_200
 ****************************************************************/
extern const char * array_int_200_to_string(const void* pValue);
extern int check_array_int_200_string(const char* strValue);
extern int string_to_array_int_200(const char* strValue, void* pValue);
int is_array_int_200_allow_double_convertion();
extern const char * get_array_int_200_signature();
extern int compare_array_int_200_type(int*, const char*, const void*);
#define array_int_200_filter_size 200
extern FilterUtils get_array_int_200_filter_utils(const char* strFilter, void* pValue);
#define array_int_200_filter_values 0
/****************************************************************
 ** array_int_200_200
 ****************************************************************/
extern const char * array_int_200_200_to_string(const void* pValue);
extern int check_array_int_200_200_string(const char* strValue);
extern int string_to_array_int_200_200(const char* strValue, void* pValue);
int is_array_int_200_200_allow_double_convertion();
extern const char * get_array_int_200_200_signature();
extern int compare_array_int_200_200_type(int*, const char*, const void*);
#define array_int_200_200_filter_size 200
extern FilterUtils get_array_int_200_200_filter_utils(const char* strFilter, void* pValue);
#define array_int_200_200_filter_values 0
/****************************************************************
 ** CompressedBaliseData
 ****************************************************************/
extern const char * CompressedBaliseData_to_string(const void* pValue);
extern int check_CompressedBaliseData_string(const char* strValue);
extern int string_to_CompressedBaliseData(const char* strValue, void* pValue);
int is_CompressedBaliseData_allow_double_convertion();
extern int CompressedBaliseData_to_double(double * nValue, const void*);
#define get_CompressedBaliseData_signature get_array_int_200_signature
#define compare_CompressedBaliseData_type compare_array_int_200_type
#define CompressedBaliseData_filter_size array_int_200_filter_size
#define get_CompressedBaliseData_filter_utils get_array_int_200_filter_utils
#define CompressedBaliseData_filter_values array_int_200_filter_values

#endif /*RECV_READRADIOPACKET15_TYPES_CONVERTION */
