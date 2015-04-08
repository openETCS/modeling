#ifndef DETERMINE_MRS_TYPES_CONVERTION
#define DETERMINE_MRS_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__491_Utils;
extern TypeUtils _SCSIM_struct__496_Utils;
extern TypeUtils _SCSIM_array__501_Utils;
extern TypeUtils _SCSIM_struct__504_Utils;
extern TypeUtils _SCSIM_struct__510_Utils;
extern TypeUtils _SCSIM_array__515_Utils;
extern TypeUtils _SCSIM_array_int_8_Utils;
extern TypeUtils _SCSIM_array__521_Utils;
extern TypeUtils _SCSIM_array_int_11_Utils;
extern TypeUtils _SCSIM_SSP_t_section_t_Utils;
extern TypeUtils _SCSIM_SSP_valid_section_t_Utils;
extern TypeUtils _SCSIM_SSP_section_t_Utils;
extern TypeUtils _SCSIM_SSP_s_section_t_Utils;
extern TypeUtils _SCSIM_SSP_relevant_target_t_Utils;
extern TypeUtils _SCSIM_SSP_Mark_ValidSSPsection_Utils;
extern TypeUtils _SCSIM_SSP_cat_t_Utils;
extern TypeUtils _SCSIM_SSP_matrix_t_Utils;

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
 ** struct__491
 ****************************************************************/
extern const char * struct__491_to_string(const void* pValue);
extern int check_struct__491_string(const char* strValue);
extern int string_to_struct__491(const char* strValue, void* pValue);
int is_struct__491_allow_double_convertion();
extern const char * get_struct__491_signature();
extern int compare_struct__491_type(int*, const char*, const void*);
#define struct__491_filter_size 2
extern FilterUtils get_struct__491_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__491_filter_values[2];
/****************************************************************
 ** struct__496
 ****************************************************************/
extern const char * struct__496_to_string(const void* pValue);
extern int check_struct__496_string(const char* strValue);
extern int string_to_struct__496(const char* strValue, void* pValue);
int is_struct__496_allow_double_convertion();
extern const char * get_struct__496_signature();
extern int compare_struct__496_type(int*, const char*, const void*);
#define struct__496_filter_size 2
extern FilterUtils get_struct__496_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__496_filter_values[2];
/****************************************************************
 ** array__501
 ****************************************************************/
extern const char * array__501_to_string(const void* pValue);
extern int check_array__501_string(const char* strValue);
extern int string_to_array__501(const char* strValue, void* pValue);
int is_array__501_allow_double_convertion();
extern const char * get_array__501_signature();
extern int compare_array__501_type(int*, const char*, const void*);
#define array__501_filter_size 8
extern FilterUtils get_array__501_filter_utils(const char* strFilter, void* pValue);
#define array__501_filter_values 0
/****************************************************************
 ** struct__504
 ****************************************************************/
extern const char * struct__504_to_string(const void* pValue);
extern int check_struct__504_string(const char* strValue);
extern int string_to_struct__504(const char* strValue, void* pValue);
int is_struct__504_allow_double_convertion();
extern const char * get_struct__504_signature();
extern int compare_struct__504_type(int*, const char*, const void*);
#define struct__504_filter_size 3
extern FilterUtils get_struct__504_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__504_filter_values[3];
/****************************************************************
 ** struct__510
 ****************************************************************/
extern const char * struct__510_to_string(const void* pValue);
extern int check_struct__510_string(const char* strValue);
extern int string_to_struct__510(const char* strValue, void* pValue);
int is_struct__510_allow_double_convertion();
extern const char * get_struct__510_signature();
extern int compare_struct__510_type(int*, const char*, const void*);
#define struct__510_filter_size 2
extern FilterUtils get_struct__510_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__510_filter_values[2];
/****************************************************************
 ** array__515
 ****************************************************************/
extern const char * array__515_to_string(const void* pValue);
extern int check_array__515_string(const char* strValue);
extern int string_to_array__515(const char* strValue, void* pValue);
int is_array__515_allow_double_convertion();
extern const char * get_array__515_signature();
extern int compare_array__515_type(int*, const char*, const void*);
#define array__515_filter_size 11
extern FilterUtils get_array__515_filter_utils(const char* strFilter, void* pValue);
#define array__515_filter_values 0
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
 ** array__521
 ****************************************************************/
extern const char * array__521_to_string(const void* pValue);
extern int check_array__521_string(const char* strValue);
extern int string_to_array__521(const char* strValue, void* pValue);
int is_array__521_allow_double_convertion();
extern const char * get_array__521_signature();
extern int compare_array__521_type(int*, const char*, const void*);
#define array__521_filter_size 8
extern FilterUtils get_array__521_filter_utils(const char* strFilter, void* pValue);
#define array__521_filter_values 0
/****************************************************************
 ** array_int_11
 ****************************************************************/
extern const char * array_int_11_to_string(const void* pValue);
extern int check_array_int_11_string(const char* strValue);
extern int string_to_array_int_11(const char* strValue, void* pValue);
int is_array_int_11_allow_double_convertion();
extern const char * get_array_int_11_signature();
extern int compare_array_int_11_type(int*, const char*, const void*);
#define array_int_11_filter_size 11
extern FilterUtils get_array_int_11_filter_utils(const char* strFilter, void* pValue);
#define array_int_11_filter_values 0
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
 ** SSP_valid_section_t
 ****************************************************************/
extern const char * SSP_valid_section_t_to_string(const void* pValue);
extern int check_SSP_valid_section_t_string(const char* strValue);
extern int string_to_SSP_valid_section_t(const char* strValue, void* pValue);
int is_SSP_valid_section_t_allow_double_convertion();
extern int SSP_valid_section_t_to_double(double * nValue, const void*);
#define get_SSP_valid_section_t_signature get_struct__504_signature
#define compare_SSP_valid_section_t_type compare_struct__504_type
#define SSP_valid_section_t_filter_size struct__504_filter_size
#define get_SSP_valid_section_t_filter_utils get_struct__504_filter_utils
#define SSP_valid_section_t_filter_values struct__504_filter_values
/****************************************************************
 ** SSP_section_t
 ****************************************************************/
extern const char * SSP_section_t_to_string(const void* pValue);
extern int check_SSP_section_t_string(const char* strValue);
extern int string_to_SSP_section_t(const char* strValue, void* pValue);
int is_SSP_section_t_allow_double_convertion();
extern int SSP_section_t_to_double(double * nValue, const void*);
#define get_SSP_section_t_signature get_struct__491_signature
#define compare_SSP_section_t_type compare_struct__491_type
#define SSP_section_t_filter_size struct__491_filter_size
#define get_SSP_section_t_filter_utils get_struct__491_filter_utils
#define SSP_section_t_filter_values struct__491_filter_values
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
#define get_SSP_relevant_target_t_signature get_struct__510_signature
#define compare_SSP_relevant_target_t_type compare_struct__510_type
#define SSP_relevant_target_t_filter_size struct__510_filter_size
#define get_SSP_relevant_target_t_filter_utils get_struct__510_filter_utils
#define SSP_relevant_target_t_filter_values struct__510_filter_values
/****************************************************************
 ** SSP_Mark_ValidSSPsection
 ****************************************************************/
extern const char * SSP_Mark_ValidSSPsection_to_string(const void* pValue);
extern int check_SSP_Mark_ValidSSPsection_string(const char* strValue);
extern int string_to_SSP_Mark_ValidSSPsection(const char* strValue, void* pValue);
int is_SSP_Mark_ValidSSPsection_allow_double_convertion();
extern int SSP_Mark_ValidSSPsection_to_double(double * nValue, const void*);
#define get_SSP_Mark_ValidSSPsection_signature get_struct__496_signature
#define compare_SSP_Mark_ValidSSPsection_type compare_struct__496_type
#define SSP_Mark_ValidSSPsection_filter_size struct__496_filter_size
#define get_SSP_Mark_ValidSSPsection_filter_utils get_struct__496_filter_utils
#define SSP_Mark_ValidSSPsection_filter_values struct__496_filter_values
/****************************************************************
 ** SSP_cat_t
 ****************************************************************/
extern const char * SSP_cat_t_to_string(const void* pValue);
extern int check_SSP_cat_t_string(const char* strValue);
extern int string_to_SSP_cat_t(const char* strValue, void* pValue);
int is_SSP_cat_t_allow_double_convertion();
extern int SSP_cat_t_to_double(double * nValue, const void*);
#define get_SSP_cat_t_signature get_array__501_signature
#define compare_SSP_cat_t_type compare_array__501_type
#define SSP_cat_t_filter_size array__501_filter_size
#define get_SSP_cat_t_filter_utils get_array__501_filter_utils
#define SSP_cat_t_filter_values array__501_filter_values
/****************************************************************
 ** SSP_matrix_t
 ****************************************************************/
extern const char * SSP_matrix_t_to_string(const void* pValue);
extern int check_SSP_matrix_t_string(const char* strValue);
extern int string_to_SSP_matrix_t(const char* strValue, void* pValue);
int is_SSP_matrix_t_allow_double_convertion();
extern int SSP_matrix_t_to_double(double * nValue, const void*);
#define get_SSP_matrix_t_signature get_array__515_signature
#define compare_SSP_matrix_t_type compare_array__515_type
#define SSP_matrix_t_filter_size array__515_filter_size
#define get_SSP_matrix_t_filter_utils get_array__515_filter_utils
#define SSP_matrix_t_filter_values array__515_filter_values

#endif /*DETERMINE_MRS_TYPES_CONVERTION */
