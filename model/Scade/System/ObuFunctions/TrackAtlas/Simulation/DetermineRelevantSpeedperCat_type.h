#ifndef DETERMINERELEVANTSPEEDPERCAT_TYPES_CONVERTION
#define DETERMINERELEVANTSPEEDPERCAT_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__376_Utils;
extern TypeUtils _SCSIM_struct__381_Utils;
extern TypeUtils _SCSIM_array__386_Utils;
extern TypeUtils _SCSIM_struct__389_Utils;
extern TypeUtils _SCSIM_struct__395_Utils;
extern TypeUtils _SCSIM_array_int_8_Utils;
extern TypeUtils _SCSIM_array__403_Utils;
extern TypeUtils _SCSIM_SSP_valid_section_t_Utils;
extern TypeUtils _SCSIM_SSP_t_section_t_Utils;
extern TypeUtils _SCSIM_SSP_section_t_Utils;
extern TypeUtils _SCSIM_SSP_s_section_t_Utils;
extern TypeUtils _SCSIM_SSP_relevant_target_t_Utils;
extern TypeUtils _SCSIM_SSP_Mark_ValidSSPsection_Utils;
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
 ** struct__376
 ****************************************************************/
extern const char * struct__376_to_string(const void* pValue);
extern int check_struct__376_string(const char* strValue);
extern int string_to_struct__376(const char* strValue, void* pValue);
int is_struct__376_allow_double_convertion();
extern const char * get_struct__376_signature();
extern int compare_struct__376_type(int*, const char*, const void*);
#define struct__376_filter_size 2
extern FilterUtils get_struct__376_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__376_filter_values[2];
/****************************************************************
 ** struct__381
 ****************************************************************/
extern const char * struct__381_to_string(const void* pValue);
extern int check_struct__381_string(const char* strValue);
extern int string_to_struct__381(const char* strValue, void* pValue);
int is_struct__381_allow_double_convertion();
extern const char * get_struct__381_signature();
extern int compare_struct__381_type(int*, const char*, const void*);
#define struct__381_filter_size 2
extern FilterUtils get_struct__381_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__381_filter_values[2];
/****************************************************************
 ** array__386
 ****************************************************************/
extern const char * array__386_to_string(const void* pValue);
extern int check_array__386_string(const char* strValue);
extern int string_to_array__386(const char* strValue, void* pValue);
int is_array__386_allow_double_convertion();
extern const char * get_array__386_signature();
extern int compare_array__386_type(int*, const char*, const void*);
#define array__386_filter_size 8
extern FilterUtils get_array__386_filter_utils(const char* strFilter, void* pValue);
#define array__386_filter_values 0
/****************************************************************
 ** struct__389
 ****************************************************************/
extern const char * struct__389_to_string(const void* pValue);
extern int check_struct__389_string(const char* strValue);
extern int string_to_struct__389(const char* strValue, void* pValue);
int is_struct__389_allow_double_convertion();
extern const char * get_struct__389_signature();
extern int compare_struct__389_type(int*, const char*, const void*);
#define struct__389_filter_size 3
extern FilterUtils get_struct__389_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__389_filter_values[3];
/****************************************************************
 ** struct__395
 ****************************************************************/
extern const char * struct__395_to_string(const void* pValue);
extern int check_struct__395_string(const char* strValue);
extern int string_to_struct__395(const char* strValue, void* pValue);
int is_struct__395_allow_double_convertion();
extern const char * get_struct__395_signature();
extern int compare_struct__395_type(int*, const char*, const void*);
#define struct__395_filter_size 2
extern FilterUtils get_struct__395_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__395_filter_values[2];
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
 ** array__403
 ****************************************************************/
extern const char * array__403_to_string(const void* pValue);
extern int check_array__403_string(const char* strValue);
extern int string_to_array__403(const char* strValue, void* pValue);
int is_array__403_allow_double_convertion();
extern const char * get_array__403_signature();
extern int compare_array__403_type(int*, const char*, const void*);
#define array__403_filter_size 8
extern FilterUtils get_array__403_filter_utils(const char* strFilter, void* pValue);
#define array__403_filter_values 0
/****************************************************************
 ** SSP_valid_section_t
 ****************************************************************/
extern const char * SSP_valid_section_t_to_string(const void* pValue);
extern int check_SSP_valid_section_t_string(const char* strValue);
extern int string_to_SSP_valid_section_t(const char* strValue, void* pValue);
int is_SSP_valid_section_t_allow_double_convertion();
extern int SSP_valid_section_t_to_double(double * nValue, const void*);
#define get_SSP_valid_section_t_signature get_struct__389_signature
#define compare_SSP_valid_section_t_type compare_struct__389_type
#define SSP_valid_section_t_filter_size struct__389_filter_size
#define get_SSP_valid_section_t_filter_utils get_struct__389_filter_utils
#define SSP_valid_section_t_filter_values struct__389_filter_values
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
#define get_SSP_section_t_signature get_struct__376_signature
#define compare_SSP_section_t_type compare_struct__376_type
#define SSP_section_t_filter_size struct__376_filter_size
#define get_SSP_section_t_filter_utils get_struct__376_filter_utils
#define SSP_section_t_filter_values struct__376_filter_values
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
#define get_SSP_relevant_target_t_signature get_struct__395_signature
#define compare_SSP_relevant_target_t_type compare_struct__395_type
#define SSP_relevant_target_t_filter_size struct__395_filter_size
#define get_SSP_relevant_target_t_filter_utils get_struct__395_filter_utils
#define SSP_relevant_target_t_filter_values struct__395_filter_values
/****************************************************************
 ** SSP_Mark_ValidSSPsection
 ****************************************************************/
extern const char * SSP_Mark_ValidSSPsection_to_string(const void* pValue);
extern int check_SSP_Mark_ValidSSPsection_string(const char* strValue);
extern int string_to_SSP_Mark_ValidSSPsection(const char* strValue, void* pValue);
int is_SSP_Mark_ValidSSPsection_allow_double_convertion();
extern int SSP_Mark_ValidSSPsection_to_double(double * nValue, const void*);
#define get_SSP_Mark_ValidSSPsection_signature get_struct__381_signature
#define compare_SSP_Mark_ValidSSPsection_type compare_struct__381_type
#define SSP_Mark_ValidSSPsection_filter_size struct__381_filter_size
#define get_SSP_Mark_ValidSSPsection_filter_utils get_struct__381_filter_utils
#define SSP_Mark_ValidSSPsection_filter_values struct__381_filter_values
/****************************************************************
 ** SSP_cat_t
 ****************************************************************/
extern const char * SSP_cat_t_to_string(const void* pValue);
extern int check_SSP_cat_t_string(const char* strValue);
extern int string_to_SSP_cat_t(const char* strValue, void* pValue);
int is_SSP_cat_t_allow_double_convertion();
extern int SSP_cat_t_to_double(double * nValue, const void*);
#define get_SSP_cat_t_signature get_array__386_signature
#define compare_SSP_cat_t_type compare_array__386_type
#define SSP_cat_t_filter_size array__386_filter_size
#define get_SSP_cat_t_filter_utils get_array__386_filter_utils
#define SSP_cat_t_filter_values array__386_filter_values

#endif /*DETERMINERELEVANTSPEEDPERCAT_TYPES_CONVERTION */
