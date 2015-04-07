#ifndef TEST_DETERMINERELEVANTSPE_TYPES_CONVERTION
#define TEST_DETERMINERELEVANTSPE_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__359_Utils;
extern TypeUtils _SCSIM_struct__364_Utils;
extern TypeUtils _SCSIM_array__369_Utils;
extern TypeUtils _SCSIM_struct__372_Utils;
extern TypeUtils _SCSIM_array_int_8_Utils;
extern TypeUtils _SCSIM_array__380_Utils;
extern TypeUtils _SCSIM_SSP_Mark_ValidSSPsection_Utils;
extern TypeUtils _SCSIM_SSP_t_section_t_Utils;
extern TypeUtils _SCSIM_SSP_section_t_Utils;
extern TypeUtils _SCSIM_SSP_s_section_t_Utils;
extern TypeUtils _SCSIM_SSP_relevant_target_t_Utils;
extern TypeUtils _SCSIM_SSP_cat_t_Utils;

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
 ** struct__359
 ****************************************************************/
extern const char * struct__359_to_string(const void* pValue);
extern int check_struct__359_string(const char* strValue);
extern int string_to_struct__359(const char* strValue, void* pValue);
int is_struct__359_allow_double_convertion();
extern const char * get_struct__359_signature();
extern int compare_struct__359_type(int*, const char*, const void*);
#define struct__359_filter_size 2
extern FilterUtils get_struct__359_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__359_filter_values[2];
/****************************************************************
 ** struct__364
 ****************************************************************/
extern const char * struct__364_to_string(const void* pValue);
extern int check_struct__364_string(const char* strValue);
extern int string_to_struct__364(const char* strValue, void* pValue);
int is_struct__364_allow_double_convertion();
extern const char * get_struct__364_signature();
extern int compare_struct__364_type(int*, const char*, const void*);
#define struct__364_filter_size 2
extern FilterUtils get_struct__364_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__364_filter_values[2];
/****************************************************************
 ** array__369
 ****************************************************************/
extern const char * array__369_to_string(const void* pValue);
extern int check_array__369_string(const char* strValue);
extern int string_to_array__369(const char* strValue, void* pValue);
int is_array__369_allow_double_convertion();
extern const char * get_array__369_signature();
extern int compare_array__369_type(int*, const char*, const void*);
#define array__369_filter_size 8
extern FilterUtils get_array__369_filter_utils(const char* strFilter, void* pValue);
#define array__369_filter_values 0
/****************************************************************
 ** struct__372
 ****************************************************************/
extern const char * struct__372_to_string(const void* pValue);
extern int check_struct__372_string(const char* strValue);
extern int string_to_struct__372(const char* strValue, void* pValue);
int is_struct__372_allow_double_convertion();
extern const char * get_struct__372_signature();
extern int compare_struct__372_type(int*, const char*, const void*);
#define struct__372_filter_size 2
extern FilterUtils get_struct__372_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__372_filter_values[2];
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
 ** array__380
 ****************************************************************/
extern const char * array__380_to_string(const void* pValue);
extern int check_array__380_string(const char* strValue);
extern int string_to_array__380(const char* strValue, void* pValue);
int is_array__380_allow_double_convertion();
extern const char * get_array__380_signature();
extern int compare_array__380_type(int*, const char*, const void*);
#define array__380_filter_size 8
extern FilterUtils get_array__380_filter_utils(const char* strFilter, void* pValue);
#define array__380_filter_values 0
/****************************************************************
 ** SSP_Mark_ValidSSPsection
 ****************************************************************/
extern const char * SSP_Mark_ValidSSPsection_to_string(const void* pValue);
extern int check_SSP_Mark_ValidSSPsection_string(const char* strValue);
extern int string_to_SSP_Mark_ValidSSPsection(const char* strValue, void* pValue);
int is_SSP_Mark_ValidSSPsection_allow_double_convertion();
extern int SSP_Mark_ValidSSPsection_to_double(double * nValue, const void*);
#define get_SSP_Mark_ValidSSPsection_signature get_struct__364_signature
#define compare_SSP_Mark_ValidSSPsection_type compare_struct__364_type
#define SSP_Mark_ValidSSPsection_filter_size struct__364_filter_size
#define get_SSP_Mark_ValidSSPsection_filter_utils get_struct__364_filter_utils
#define SSP_Mark_ValidSSPsection_filter_values struct__364_filter_values
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
#define get_SSP_section_t_signature get_struct__359_signature
#define compare_SSP_section_t_type compare_struct__359_type
#define SSP_section_t_filter_size struct__359_filter_size
#define get_SSP_section_t_filter_utils get_struct__359_filter_utils
#define SSP_section_t_filter_values struct__359_filter_values
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
#define get_SSP_relevant_target_t_signature get_struct__372_signature
#define compare_SSP_relevant_target_t_type compare_struct__372_type
#define SSP_relevant_target_t_filter_size struct__372_filter_size
#define get_SSP_relevant_target_t_filter_utils get_struct__372_filter_utils
#define SSP_relevant_target_t_filter_values struct__372_filter_values
/****************************************************************
 ** SSP_cat_t
 ****************************************************************/
extern const char * SSP_cat_t_to_string(const void* pValue);
extern int check_SSP_cat_t_string(const char* strValue);
extern int string_to_SSP_cat_t(const char* strValue, void* pValue);
int is_SSP_cat_t_allow_double_convertion();
extern int SSP_cat_t_to_double(double * nValue, const void*);
#define get_SSP_cat_t_signature get_array__369_signature
#define compare_SSP_cat_t_type compare_array__369_type
#define SSP_cat_t_filter_size array__369_filter_size
#define get_SSP_cat_t_filter_utils get_array__369_filter_utils
#define SSP_cat_t_filter_values array__369_filter_values

#endif /*TEST_DETERMINERELEVANTSPE_TYPES_CONVERTION */
