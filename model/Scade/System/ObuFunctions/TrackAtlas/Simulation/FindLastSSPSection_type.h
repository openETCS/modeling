#ifndef FINDLASTSSPSECTION_TYPES_CONVERTION
#define FINDLASTSSPSECTION_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__267_Utils;
extern TypeUtils _SCSIM_struct__272_Utils;
extern TypeUtils _SCSIM_array__277_Utils;
extern TypeUtils _SCSIM_struct__280_Utils;
extern TypeUtils _SCSIM_SSP_section_t_Utils;
extern TypeUtils _SCSIM_SSP_t_section_t_Utils;
extern TypeUtils _SCSIM_SSP_s_section_t_Utils;
extern TypeUtils _SCSIM_SSP_Mark_ValidSSPsection_Utils;
extern TypeUtils _SCSIM_SSP_valid_section_t_Utils;
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
 ** struct__267
 ****************************************************************/
extern const char * struct__267_to_string(const void* pValue);
extern int check_struct__267_string(const char* strValue);
extern int string_to_struct__267(const char* strValue, void* pValue);
int is_struct__267_allow_double_convertion();
extern const char * get_struct__267_signature();
extern int compare_struct__267_type(int*, const char*, const void*);
#define struct__267_filter_size 2
extern FilterUtils get_struct__267_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__267_filter_values[2];
/****************************************************************
 ** struct__272
 ****************************************************************/
extern const char * struct__272_to_string(const void* pValue);
extern int check_struct__272_string(const char* strValue);
extern int string_to_struct__272(const char* strValue, void* pValue);
int is_struct__272_allow_double_convertion();
extern const char * get_struct__272_signature();
extern int compare_struct__272_type(int*, const char*, const void*);
#define struct__272_filter_size 2
extern FilterUtils get_struct__272_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__272_filter_values[2];
/****************************************************************
 ** array__277
 ****************************************************************/
extern const char * array__277_to_string(const void* pValue);
extern int check_array__277_string(const char* strValue);
extern int string_to_array__277(const char* strValue, void* pValue);
int is_array__277_allow_double_convertion();
extern const char * get_array__277_signature();
extern int compare_array__277_type(int*, const char*, const void*);
#define array__277_filter_size 8
extern FilterUtils get_array__277_filter_utils(const char* strFilter, void* pValue);
#define array__277_filter_values 0
/****************************************************************
 ** struct__280
 ****************************************************************/
extern const char * struct__280_to_string(const void* pValue);
extern int check_struct__280_string(const char* strValue);
extern int string_to_struct__280(const char* strValue, void* pValue);
int is_struct__280_allow_double_convertion();
extern const char * get_struct__280_signature();
extern int compare_struct__280_type(int*, const char*, const void*);
#define struct__280_filter_size 3
extern FilterUtils get_struct__280_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__280_filter_values[3];
/****************************************************************
 ** SSP_section_t
 ****************************************************************/
extern const char * SSP_section_t_to_string(const void* pValue);
extern int check_SSP_section_t_string(const char* strValue);
extern int string_to_SSP_section_t(const char* strValue, void* pValue);
int is_SSP_section_t_allow_double_convertion();
extern int SSP_section_t_to_double(double * nValue, const void*);
#define get_SSP_section_t_signature get_struct__267_signature
#define compare_SSP_section_t_type compare_struct__267_type
#define SSP_section_t_filter_size struct__267_filter_size
#define get_SSP_section_t_filter_utils get_struct__267_filter_utils
#define SSP_section_t_filter_values struct__267_filter_values
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
 ** SSP_Mark_ValidSSPsection
 ****************************************************************/
extern const char * SSP_Mark_ValidSSPsection_to_string(const void* pValue);
extern int check_SSP_Mark_ValidSSPsection_string(const char* strValue);
extern int string_to_SSP_Mark_ValidSSPsection(const char* strValue, void* pValue);
int is_SSP_Mark_ValidSSPsection_allow_double_convertion();
extern int SSP_Mark_ValidSSPsection_to_double(double * nValue, const void*);
#define get_SSP_Mark_ValidSSPsection_signature get_struct__272_signature
#define compare_SSP_Mark_ValidSSPsection_type compare_struct__272_type
#define SSP_Mark_ValidSSPsection_filter_size struct__272_filter_size
#define get_SSP_Mark_ValidSSPsection_filter_utils get_struct__272_filter_utils
#define SSP_Mark_ValidSSPsection_filter_values struct__272_filter_values
/****************************************************************
 ** SSP_valid_section_t
 ****************************************************************/
extern const char * SSP_valid_section_t_to_string(const void* pValue);
extern int check_SSP_valid_section_t_string(const char* strValue);
extern int string_to_SSP_valid_section_t(const char* strValue, void* pValue);
int is_SSP_valid_section_t_allow_double_convertion();
extern int SSP_valid_section_t_to_double(double * nValue, const void*);
#define get_SSP_valid_section_t_signature get_struct__280_signature
#define compare_SSP_valid_section_t_type compare_struct__280_type
#define SSP_valid_section_t_filter_size struct__280_filter_size
#define get_SSP_valid_section_t_filter_utils get_struct__280_filter_utils
#define SSP_valid_section_t_filter_values struct__280_filter_values
/****************************************************************
 ** SSP_cat_t
 ****************************************************************/
extern const char * SSP_cat_t_to_string(const void* pValue);
extern int check_SSP_cat_t_string(const char* strValue);
extern int string_to_SSP_cat_t(const char* strValue, void* pValue);
int is_SSP_cat_t_allow_double_convertion();
extern int SSP_cat_t_to_double(double * nValue, const void*);
#define get_SSP_cat_t_signature get_array__277_signature
#define compare_SSP_cat_t_type compare_array__277_type
#define SSP_cat_t_filter_size array__277_filter_size
#define get_SSP_cat_t_filter_utils get_array__277_filter_utils
#define SSP_cat_t_filter_values array__277_filter_values

#endif /*FINDLASTSSPSECTION_TYPES_CONVERTION */
