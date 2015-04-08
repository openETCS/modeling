#ifndef RECV_READRADIODATAELEMENT_TYPES_CONVERTION
#define RECV_READRADIODATAELEMENT_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__163_Utils;
extern TypeUtils _SCSIM_array_int_200_Utils;
extern TypeUtils _SCSIM_array_int_100_Utils;
extern TypeUtils _SCSIM_array__177_Utils;
extern TypeUtils _SCSIM_array_int_200_100_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_CompressedRadioData_Utils;
extern TypeUtils _SCSIM_DataElememtsAsArray_Utils;
extern TypeUtils _SCSIM_MetadataElement_T_Common_Types_Pkg_Utils;

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
 ** struct__163
 ****************************************************************/
extern const char * struct__163_to_string(const void* pValue);
extern int check_struct__163_string(const char* strValue);
extern int string_to_struct__163(const char* strValue, void* pValue);
int is_struct__163_allow_double_convertion();
extern const char * get_struct__163_signature();
extern int compare_struct__163_type(int*, const char*, const void*);
#define struct__163_filter_size 5
extern FilterUtils get_struct__163_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__163_filter_values[5];
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
 ** array_int_100
 ****************************************************************/
extern const char * array_int_100_to_string(const void* pValue);
extern int check_array_int_100_string(const char* strValue);
extern int string_to_array_int_100(const char* strValue, void* pValue);
int is_array_int_100_allow_double_convertion();
extern const char * get_array_int_100_signature();
extern int compare_array_int_100_type(int*, const char*, const void*);
#define array_int_100_filter_size 100
extern FilterUtils get_array_int_100_filter_utils(const char* strFilter, void* pValue);
#define array_int_100_filter_values 0
/****************************************************************
 ** array__177
 ****************************************************************/
extern const char * array__177_to_string(const void* pValue);
extern int check_array__177_string(const char* strValue);
extern int string_to_array__177(const char* strValue, void* pValue);
int is_array__177_allow_double_convertion();
extern const char * get_array__177_signature();
extern int compare_array__177_type(int*, const char*, const void*);
#define array__177_filter_size 100
extern FilterUtils get_array__177_filter_utils(const char* strFilter, void* pValue);
#define array__177_filter_values 0
/****************************************************************
 ** array_int_200_100
 ****************************************************************/
extern const char * array_int_200_100_to_string(const void* pValue);
extern int check_array_int_200_100_string(const char* strValue);
extern int string_to_array_int_200_100(const char* strValue, void* pValue);
int is_array_int_200_100_allow_double_convertion();
extern const char * get_array_int_200_100_signature();
extern int compare_array_int_200_100_type(int*, const char*, const void*);
#define array_int_200_100_filter_size 100
extern FilterUtils get_array_int_200_100_filter_utils(const char* strFilter, void* pValue);
#define array_int_200_100_filter_values 0
/****************************************************************
 ** NID_PACKET
 ****************************************************************/
extern const char * NID_PACKET_to_string(const void* pValue);
extern int check_NID_PACKET_string(const char* strValue);
extern int string_to_NID_PACKET(const char* strValue, void* pValue);
int is_NID_PACKET_allow_double_convertion();
extern int NID_PACKET_to_double(double * nValue, const void*);
#define get_NID_PACKET_signature get_kcg_int_signature
#define compare_NID_PACKET_type compare_kcg_int_type
#define NID_PACKET_filter_size kcg_int_filter_size
#define get_NID_PACKET_filter_utils get_kcg_int_filter_utils
#define NID_PACKET_filter_values kcg_int_filter_values
/****************************************************************
 ** Q_DIR
 ****************************************************************/
extern const char * Q_DIR_to_string(const void* pValue);
extern int check_Q_DIR_string(const char* strValue);
extern int string_to_Q_DIR(const char* strValue, void* pValue);
int is_Q_DIR_allow_double_convertion();
extern int Q_DIR_to_double(double * nValue, const void*);
extern const char * get_Q_DIR_signature();
extern int compare_Q_DIR_type(int*, const char*, const void*);
#define Q_DIR_filter_size 0
#define get_Q_DIR_filter_utils 0
#define Q_DIR_filter_values 0
/****************************************************************
 ** CompressedRadioData
 ****************************************************************/
extern const char * CompressedRadioData_to_string(const void* pValue);
extern int check_CompressedRadioData_string(const char* strValue);
extern int string_to_CompressedRadioData(const char* strValue, void* pValue);
int is_CompressedRadioData_allow_double_convertion();
extern int CompressedRadioData_to_double(double * nValue, const void*);
#define get_CompressedRadioData_signature get_array_int_200_signature
#define compare_CompressedRadioData_type compare_array_int_200_type
#define CompressedRadioData_filter_size array_int_200_filter_size
#define get_CompressedRadioData_filter_utils get_array_int_200_filter_utils
#define CompressedRadioData_filter_values array_int_200_filter_values
/****************************************************************
 ** DataElememtsAsArray
 ****************************************************************/
extern const char * DataElememtsAsArray_to_string(const void* pValue);
extern int check_DataElememtsAsArray_string(const char* strValue);
extern int string_to_DataElememtsAsArray(const char* strValue, void* pValue);
int is_DataElememtsAsArray_allow_double_convertion();
extern int DataElememtsAsArray_to_double(double * nValue, const void*);
#define get_DataElememtsAsArray_signature get_array_int_100_signature
#define compare_DataElememtsAsArray_type compare_array_int_100_type
#define DataElememtsAsArray_filter_size array_int_100_filter_size
#define get_DataElememtsAsArray_filter_utils get_array_int_100_filter_utils
#define DataElememtsAsArray_filter_values array_int_100_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__163_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__163_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__163_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__163_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__163_filter_values

#endif /*RECV_READRADIODATAELEMENT_TYPES_CONVERTION */
