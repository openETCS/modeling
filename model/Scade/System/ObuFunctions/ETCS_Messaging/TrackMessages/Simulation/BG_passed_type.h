#ifndef BG_PASSED_TYPES_CONVERTION
#define BG_PASSED_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__371_Utils;
extern TypeUtils _SCSIM_BaliseGroupData_Utils;
extern TypeUtils _SCSIM_OrBG_Utils;
extern TypeUtils _SCSIM_OrLine_Utils;

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
 ** struct__371
 ****************************************************************/
extern const char * struct__371_to_string(const void* pValue);
extern int check_struct__371_string(const char* strValue);
extern int string_to_struct__371(const char* strValue, void* pValue);
int is_struct__371_allow_double_convertion();
extern const char * get_struct__371_signature();
extern int compare_struct__371_type(int*, const char*, const void*);
#define struct__371_filter_size 5
extern FilterUtils get_struct__371_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__371_filter_values[5];
/****************************************************************
 ** BaliseGroupData
 ****************************************************************/
extern const char * BaliseGroupData_to_string(const void* pValue);
extern int check_BaliseGroupData_string(const char* strValue);
extern int string_to_BaliseGroupData(const char* strValue, void* pValue);
int is_BaliseGroupData_allow_double_convertion();
extern int BaliseGroupData_to_double(double * nValue, const void*);
#define get_BaliseGroupData_signature get_struct__371_signature
#define compare_BaliseGroupData_type compare_struct__371_type
#define BaliseGroupData_filter_size struct__371_filter_size
#define get_BaliseGroupData_filter_utils get_struct__371_filter_utils
#define BaliseGroupData_filter_values struct__371_filter_values
/****************************************************************
 ** OrBG
 ****************************************************************/
extern const char * OrBG_to_string(const void* pValue);
extern int check_OrBG_string(const char* strValue);
extern int string_to_OrBG(const char* strValue, void* pValue);
int is_OrBG_allow_double_convertion();
extern int OrBG_to_double(double * nValue, const void*);
extern const char * get_OrBG_signature();
extern int compare_OrBG_type(int*, const char*, const void*);
#define OrBG_filter_size 0
#define get_OrBG_filter_utils 0
#define OrBG_filter_values 0
/****************************************************************
 ** OrLine
 ****************************************************************/
extern const char * OrLine_to_string(const void* pValue);
extern int check_OrLine_string(const char* strValue);
extern int string_to_OrLine(const char* strValue, void* pValue);
int is_OrLine_allow_double_convertion();
extern int OrLine_to_double(double * nValue, const void*);
extern const char * get_OrLine_signature();
extern int compare_OrLine_type(int*, const char*, const void*);
#define OrLine_filter_size 0
#define get_OrLine_filter_utils 0
#define OrLine_filter_values 0

#endif /*BG_PASSED_TYPES_CONVERTION */
