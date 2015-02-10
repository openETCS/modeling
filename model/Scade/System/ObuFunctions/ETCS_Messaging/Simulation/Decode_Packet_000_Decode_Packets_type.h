#ifndef DECODE_PACKET_000_DECODE_PACKETS_TYPES_CONVERTION
#define DECODE_PACKET_000_DECODE_PACKETS_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_array_int_20_Utils;
extern TypeUtils _SCSIM_Information_T_BM_Types_Flat_Utils;
extern TypeUtils _SCSIM_InfoElement_T_BM_Types_Flat_Utils;
extern TypeUtils _SCSIM_NID_VBCMK_T_Types_Notfound_Utils;

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
 ** array_int_20
 ****************************************************************/
extern const char * array_int_20_to_string(const void* pValue);
extern int check_array_int_20_string(const char* strValue);
extern int string_to_array_int_20(const char* strValue, void* pValue);
int is_array_int_20_allow_double_convertion();
extern const char * get_array_int_20_signature();
extern int compare_array_int_20_type(int*, const char*, const void*);
#define array_int_20_filter_size 20
extern FilterUtils get_array_int_20_filter_utils(const char* strFilter, void* pValue);
#define array_int_20_filter_values 0
/****************************************************************
 ** Information_T_BM_Types_Flat
 ****************************************************************/
extern const char * Information_T_BM_Types_Flat_to_string(const void* pValue);
extern int check_Information_T_BM_Types_Flat_string(const char* strValue);
extern int string_to_Information_T_BM_Types_Flat(const char* strValue, void* pValue);
int is_Information_T_BM_Types_Flat_allow_double_convertion();
extern int Information_T_BM_Types_Flat_to_double(double * nValue, const void*);
#define get_Information_T_BM_Types_Flat_signature get_array_int_20_signature
#define compare_Information_T_BM_Types_Flat_type compare_array_int_20_type
#define Information_T_BM_Types_Flat_filter_size array_int_20_filter_size
#define get_Information_T_BM_Types_Flat_filter_utils get_array_int_20_filter_utils
#define Information_T_BM_Types_Flat_filter_values array_int_20_filter_values
/****************************************************************
 ** InfoElement_T_BM_Types_Flat
 ****************************************************************/
extern const char * InfoElement_T_BM_Types_Flat_to_string(const void* pValue);
extern int check_InfoElement_T_BM_Types_Flat_string(const char* strValue);
extern int string_to_InfoElement_T_BM_Types_Flat(const char* strValue, void* pValue);
int is_InfoElement_T_BM_Types_Flat_allow_double_convertion();
extern int InfoElement_T_BM_Types_Flat_to_double(double * nValue, const void*);
#define get_InfoElement_T_BM_Types_Flat_signature get_kcg_int_signature
#define compare_InfoElement_T_BM_Types_Flat_type compare_kcg_int_type
#define InfoElement_T_BM_Types_Flat_filter_size kcg_int_filter_size
#define get_InfoElement_T_BM_Types_Flat_filter_utils get_kcg_int_filter_utils
#define InfoElement_T_BM_Types_Flat_filter_values kcg_int_filter_values
/****************************************************************
 ** NID_VBCMK_T_Types_Notfound
 ****************************************************************/
extern const char * NID_VBCMK_T_Types_Notfound_to_string(const void* pValue);
extern int check_NID_VBCMK_T_Types_Notfound_string(const char* strValue);
extern int string_to_NID_VBCMK_T_Types_Notfound(const char* strValue, void* pValue);
int is_NID_VBCMK_T_Types_Notfound_allow_double_convertion();
extern int NID_VBCMK_T_Types_Notfound_to_double(double * nValue, const void*);
#define get_NID_VBCMK_T_Types_Notfound_signature get_kcg_int_signature
#define compare_NID_VBCMK_T_Types_Notfound_type compare_kcg_int_type
#define NID_VBCMK_T_Types_Notfound_filter_size kcg_int_filter_size
#define get_NID_VBCMK_T_Types_Notfound_filter_utils get_kcg_int_filter_utils
#define NID_VBCMK_T_Types_Notfound_filter_values kcg_int_filter_values

#endif /*DECODE_PACKET_000_DECODE_PACKETS_TYPES_CONVERTION */
