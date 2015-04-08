#ifndef RECV_READRADIOMESSAGE_TYPES_CONVERTION
#define RECV_READRADIOMESSAGE_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__284_Utils;
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_array__295_Utils;
extern TypeUtils _SCSIM_struct__298_Utils;
extern TypeUtils _SCSIM_array_int_30_Utils;
extern TypeUtils _SCSIM_array_int_500_500_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_CompressedRadioHeaders_Utils;
extern TypeUtils _SCSIM_CompressedRadioData_Utils;
extern TypeUtils _SCSIM_CompressedRadioPackets_Utils;
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
 ** struct__284
 ****************************************************************/
extern const char * struct__284_to_string(const void* pValue);
extern int check_struct__284_string(const char* strValue);
extern int string_to_struct__284(const char* strValue, void* pValue);
int is_struct__284_allow_double_convertion();
extern const char * get_struct__284_signature();
extern int compare_struct__284_type(int*, const char*, const void*);
#define struct__284_filter_size 5
extern FilterUtils get_struct__284_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__284_filter_values[5];
/****************************************************************
 ** array_int_500
 ****************************************************************/
extern const char * array_int_500_to_string(const void* pValue);
extern int check_array_int_500_string(const char* strValue);
extern int string_to_array_int_500(const char* strValue, void* pValue);
int is_array_int_500_allow_double_convertion();
extern const char * get_array_int_500_signature();
extern int compare_array_int_500_type(int*, const char*, const void*);
#define array_int_500_filter_size 500
extern FilterUtils get_array_int_500_filter_utils(const char* strFilter, void* pValue);
#define array_int_500_filter_values 0
/****************************************************************
 ** array__295
 ****************************************************************/
extern const char * array__295_to_string(const void* pValue);
extern int check_array__295_string(const char* strValue);
extern int string_to_array__295(const char* strValue, void* pValue);
int is_array__295_allow_double_convertion();
extern const char * get_array__295_signature();
extern int compare_array__295_type(int*, const char*, const void*);
#define array__295_filter_size 30
extern FilterUtils get_array__295_filter_utils(const char* strFilter, void* pValue);
#define array__295_filter_values 0
/****************************************************************
 ** struct__298
 ****************************************************************/
extern const char * struct__298_to_string(const void* pValue);
extern int check_struct__298_string(const char* strValue);
extern int string_to_struct__298(const char* strValue, void* pValue);
int is_struct__298_allow_double_convertion();
extern const char * get_struct__298_signature();
extern int compare_struct__298_type(int*, const char*, const void*);
#define struct__298_filter_size 2
extern FilterUtils get_struct__298_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__298_filter_values[2];
/****************************************************************
 ** array_int_30
 ****************************************************************/
extern const char * array_int_30_to_string(const void* pValue);
extern int check_array_int_30_string(const char* strValue);
extern int string_to_array_int_30(const char* strValue, void* pValue);
int is_array_int_30_allow_double_convertion();
extern const char * get_array_int_30_signature();
extern int compare_array_int_30_type(int*, const char*, const void*);
#define array_int_30_filter_size 30
extern FilterUtils get_array_int_30_filter_utils(const char* strFilter, void* pValue);
#define array_int_30_filter_values 0
/****************************************************************
 ** array_int_500_500
 ****************************************************************/
extern const char * array_int_500_500_to_string(const void* pValue);
extern int check_array_int_500_500_string(const char* strValue);
extern int string_to_array_int_500_500(const char* strValue, void* pValue);
int is_array_int_500_500_allow_double_convertion();
extern const char * get_array_int_500_500_signature();
extern int compare_array_int_500_500_type(int*, const char*, const void*);
#define array_int_500_500_filter_size 500
extern FilterUtils get_array_int_500_500_filter_utils(const char* strFilter, void* pValue);
#define array_int_500_500_filter_values 0
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
 ** CompressedRadioHeaders
 ****************************************************************/
extern const char * CompressedRadioHeaders_to_string(const void* pValue);
extern int check_CompressedRadioHeaders_string(const char* strValue);
extern int string_to_CompressedRadioHeaders(const char* strValue, void* pValue);
int is_CompressedRadioHeaders_allow_double_convertion();
extern int CompressedRadioHeaders_to_double(double * nValue, const void*);
#define get_CompressedRadioHeaders_signature get_array__295_signature
#define compare_CompressedRadioHeaders_type compare_array__295_type
#define CompressedRadioHeaders_filter_size array__295_filter_size
#define get_CompressedRadioHeaders_filter_utils get_array__295_filter_utils
#define CompressedRadioHeaders_filter_values array__295_filter_values
/****************************************************************
 ** CompressedRadioData
 ****************************************************************/
extern const char * CompressedRadioData_to_string(const void* pValue);
extern int check_CompressedRadioData_string(const char* strValue);
extern int string_to_CompressedRadioData(const char* strValue, void* pValue);
int is_CompressedRadioData_allow_double_convertion();
extern int CompressedRadioData_to_double(double * nValue, const void*);
#define get_CompressedRadioData_signature get_array_int_500_signature
#define compare_CompressedRadioData_type compare_array_int_500_type
#define CompressedRadioData_filter_size array_int_500_filter_size
#define get_CompressedRadioData_filter_utils get_array_int_500_filter_utils
#define CompressedRadioData_filter_values array_int_500_filter_values
/****************************************************************
 ** CompressedRadioPackets
 ****************************************************************/
extern const char * CompressedRadioPackets_to_string(const void* pValue);
extern int check_CompressedRadioPackets_string(const char* strValue);
extern int string_to_CompressedRadioPackets(const char* strValue, void* pValue);
int is_CompressedRadioPackets_allow_double_convertion();
extern int CompressedRadioPackets_to_double(double * nValue, const void*);
#define get_CompressedRadioPackets_signature get_struct__298_signature
#define compare_CompressedRadioPackets_type compare_struct__298_type
#define CompressedRadioPackets_filter_size struct__298_filter_size
#define get_CompressedRadioPackets_filter_utils get_struct__298_filter_utils
#define CompressedRadioPackets_filter_values struct__298_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__284_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__284_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__284_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__284_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__284_filter_values

#endif /*RECV_READRADIOMESSAGE_TYPES_CONVERTION */
