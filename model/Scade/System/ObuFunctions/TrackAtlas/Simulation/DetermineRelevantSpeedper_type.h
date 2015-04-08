#ifndef DETERMINERELEVANTSPEEDPER_TYPES_CONVERTION
#define DETERMINERELEVANTSPEEDPER_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__160_Utils;
extern TypeUtils _SCSIM_struct__165_Utils;
extern TypeUtils _SCSIM_struct__170_Utils;
extern TypeUtils _SCSIM_SSP_valid_section_t_Utils;
extern TypeUtils _SCSIM_SSP_t_section_t_Utils;
extern TypeUtils _SCSIM_SSP_section_t_Utils;
extern TypeUtils _SCSIM_SSP_s_section_t_Utils;
extern TypeUtils _SCSIM_SSP_relevant_target_t_Utils;

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
 ** struct__160
 ****************************************************************/
extern const char * struct__160_to_string(const void* pValue);
extern int check_struct__160_string(const char* strValue);
extern int string_to_struct__160(const char* strValue, void* pValue);
int is_struct__160_allow_double_convertion();
extern const char * get_struct__160_signature();
extern int compare_struct__160_type(int*, const char*, const void*);
#define struct__160_filter_size 2
extern FilterUtils get_struct__160_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__160_filter_values[2];
/****************************************************************
 ** struct__165
 ****************************************************************/
extern const char * struct__165_to_string(const void* pValue);
extern int check_struct__165_string(const char* strValue);
extern int string_to_struct__165(const char* strValue, void* pValue);
int is_struct__165_allow_double_convertion();
extern const char * get_struct__165_signature();
extern int compare_struct__165_type(int*, const char*, const void*);
#define struct__165_filter_size 2
extern FilterUtils get_struct__165_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__165_filter_values[2];
/****************************************************************
 ** struct__170
 ****************************************************************/
extern const char * struct__170_to_string(const void* pValue);
extern int check_struct__170_string(const char* strValue);
extern int string_to_struct__170(const char* strValue, void* pValue);
int is_struct__170_allow_double_convertion();
extern const char * get_struct__170_signature();
extern int compare_struct__170_type(int*, const char*, const void*);
#define struct__170_filter_size 3
extern FilterUtils get_struct__170_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__170_filter_values[3];
/****************************************************************
 ** SSP_valid_section_t
 ****************************************************************/
extern const char * SSP_valid_section_t_to_string(const void* pValue);
extern int check_SSP_valid_section_t_string(const char* strValue);
extern int string_to_SSP_valid_section_t(const char* strValue, void* pValue);
int is_SSP_valid_section_t_allow_double_convertion();
extern int SSP_valid_section_t_to_double(double * nValue, const void*);
#define get_SSP_valid_section_t_signature get_struct__170_signature
#define compare_SSP_valid_section_t_type compare_struct__170_type
#define SSP_valid_section_t_filter_size struct__170_filter_size
#define get_SSP_valid_section_t_filter_utils get_struct__170_filter_utils
#define SSP_valid_section_t_filter_values struct__170_filter_values
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
 ** SSP_section_t
 ****************************************************************/
extern const char * SSP_section_t_to_string(const void* pValue);
extern int check_SSP_section_t_string(const char* strValue);
extern int string_to_SSP_section_t(const char* strValue, void* pValue);
int is_SSP_section_t_allow_double_convertion();
extern int SSP_section_t_to_double(double * nValue, const void*);
#define get_SSP_section_t_signature get_struct__165_signature
#define compare_SSP_section_t_type compare_struct__165_type
#define SSP_section_t_filter_size struct__165_filter_size
#define get_SSP_section_t_filter_utils get_struct__165_filter_utils
#define SSP_section_t_filter_values struct__165_filter_values
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
 ** SSP_relevant_target_t
 ****************************************************************/
extern const char * SSP_relevant_target_t_to_string(const void* pValue);
extern int check_SSP_relevant_target_t_string(const char* strValue);
extern int string_to_SSP_relevant_target_t(const char* strValue, void* pValue);
int is_SSP_relevant_target_t_allow_double_convertion();
extern int SSP_relevant_target_t_to_double(double * nValue, const void*);
#define get_SSP_relevant_target_t_signature get_struct__160_signature
#define compare_SSP_relevant_target_t_type compare_struct__160_type
#define SSP_relevant_target_t_filter_size struct__160_filter_size
#define get_SSP_relevant_target_t_filter_utils get_struct__160_filter_utils
#define SSP_relevant_target_t_filter_values struct__160_filter_values

#endif /*DETERMINERELEVANTSPEEDPER_TYPES_CONVERTION */
