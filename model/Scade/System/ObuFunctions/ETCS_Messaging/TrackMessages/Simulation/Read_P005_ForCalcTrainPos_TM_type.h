#ifndef READ_P005_FORCALCTRAINPOS_TM_TYPES_CONVERTION
#define READ_P005_FORCALCTRAINPOS_TM_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__1397_Utils;
extern TypeUtils _SCSIM_array__1411_Utils;
extern TypeUtils _SCSIM_struct__1414_Utils;
extern TypeUtils _SCSIM_array__1425_Utils;
extern TypeUtils _SCSIM_struct__1428_Utils;
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_struct__1440_Utils;
extern TypeUtils _SCSIM_array__1448_Utils;
extern TypeUtils _SCSIM_struct__1451_Utils;
extern TypeUtils _SCSIM_array_int_224_Utils;
extern TypeUtils _SCSIM_array_int_3_Utils;
extern TypeUtils _SCSIM_array_int_30_Utils;
extern TypeUtils _SCSIM_array_int_500_500_Utils;
extern TypeUtils _SCSIM_array_int_33_Utils;
extern TypeUtils _SCSIM_array_int_224_33_Utils;
extern TypeUtils _SCSIM_array_int_1_Utils;
extern TypeUtils _SCSIM_array__1477_Utils;
extern TypeUtils _SCSIM_array__1480_Utils;
extern TypeUtils _SCSIM_array__1483_Utils;
extern TypeUtils _SCSIM_array_int_4_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_Q_SCALE_Utils;
extern TypeUtils _SCSIM_D_LINK_Utils;
extern TypeUtils _SCSIM_Q_NEWCOUNTRY_Utils;
extern TypeUtils _SCSIM_NID_C_Utils;
extern TypeUtils _SCSIM_NID_BG_Utils;
extern TypeUtils _SCSIM_Q_LINKORIENTATION_Utils;
extern TypeUtils _SCSIM_Q_LINKREACTION_Utils;
extern TypeUtils _SCSIM_Q_LOCACC_Utils;
extern TypeUtils _SCSIM_N_ITER_Utils;
extern TypeUtils _SCSIM_L_PACKET_Utils;
extern TypeUtils _SCSIM_NID_LRBG_Utils;
extern TypeUtils _SCSIM_P005_section_enum_T_TM_Utils;
extern TypeUtils _SCSIM_P005_sections_array_flat_T_TM_Utils;
extern TypeUtils _SCSIM_P005_OBU_sectionlist_enum_T_TM_Utils;
extern TypeUtils _SCSIM_P005_OBU_T_TM_Utils;
extern TypeUtils _SCSIM_Array03_TM_Utils;
extern TypeUtils _SCSIM_MetadataElement_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_Metadata_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_LinkedBG_T_BG_Types_Pkg_Utils;
extern TypeUtils _SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils;

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
 ** struct__1397
 ****************************************************************/
extern const char * struct__1397_to_string(const void* pValue);
extern int check_struct__1397_string(const char* strValue);
extern int string_to_struct__1397(const char* strValue, void* pValue);
int is_struct__1397_allow_double_convertion();
extern const char * get_struct__1397_signature();
extern int compare_struct__1397_type(int*, const char*, const void*);
#define struct__1397_filter_size 11
extern FilterUtils get_struct__1397_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1397_filter_values[11];
/****************************************************************
 ** array__1411
 ****************************************************************/
extern const char * array__1411_to_string(const void* pValue);
extern int check_array__1411_string(const char* strValue);
extern int string_to_array__1411(const char* strValue, void* pValue);
int is_array__1411_allow_double_convertion();
extern const char * get_array__1411_signature();
extern int compare_array__1411_type(int*, const char*, const void*);
#define array__1411_filter_size 4
extern FilterUtils get_array__1411_filter_utils(const char* strFilter, void* pValue);
#define array__1411_filter_values 0
/****************************************************************
 ** struct__1414
 ****************************************************************/
extern const char * struct__1414_to_string(const void* pValue);
extern int check_struct__1414_string(const char* strValue);
extern int string_to_struct__1414(const char* strValue, void* pValue);
int is_struct__1414_allow_double_convertion();
extern const char * get_struct__1414_signature();
extern int compare_struct__1414_type(int*, const char*, const void*);
#define struct__1414_filter_size 8
extern FilterUtils get_struct__1414_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1414_filter_values[8];
/****************************************************************
 ** array__1425
 ****************************************************************/
extern const char * array__1425_to_string(const void* pValue);
extern int check_array__1425_string(const char* strValue);
extern int string_to_array__1425(const char* strValue, void* pValue);
int is_array__1425_allow_double_convertion();
extern const char * get_array__1425_signature();
extern int compare_array__1425_type(int*, const char*, const void*);
#define array__1425_filter_size 33
extern FilterUtils get_array__1425_filter_utils(const char* strFilter, void* pValue);
#define array__1425_filter_values 0
/****************************************************************
 ** struct__1428
 ****************************************************************/
extern const char * struct__1428_to_string(const void* pValue);
extern int check_struct__1428_string(const char* strValue);
extern int string_to_struct__1428(const char* strValue, void* pValue);
int is_struct__1428_allow_double_convertion();
extern const char * get_struct__1428_signature();
extern int compare_struct__1428_type(int*, const char*, const void*);
#define struct__1428_filter_size 6
extern FilterUtils get_struct__1428_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1428_filter_values[6];
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
 ** struct__1440
 ****************************************************************/
extern const char * struct__1440_to_string(const void* pValue);
extern int check_struct__1440_string(const char* strValue);
extern int string_to_struct__1440(const char* strValue, void* pValue);
int is_struct__1440_allow_double_convertion();
extern const char * get_struct__1440_signature();
extern int compare_struct__1440_type(int*, const char*, const void*);
#define struct__1440_filter_size 5
extern FilterUtils get_struct__1440_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1440_filter_values[5];
/****************************************************************
 ** array__1448
 ****************************************************************/
extern const char * array__1448_to_string(const void* pValue);
extern int check_array__1448_string(const char* strValue);
extern int string_to_array__1448(const char* strValue, void* pValue);
int is_array__1448_allow_double_convertion();
extern const char * get_array__1448_signature();
extern int compare_array__1448_type(int*, const char*, const void*);
#define array__1448_filter_size 30
extern FilterUtils get_array__1448_filter_utils(const char* strFilter, void* pValue);
#define array__1448_filter_values 0
/****************************************************************
 ** struct__1451
 ****************************************************************/
extern const char * struct__1451_to_string(const void* pValue);
extern int check_struct__1451_string(const char* strValue);
extern int string_to_struct__1451(const char* strValue, void* pValue);
int is_struct__1451_allow_double_convertion();
extern const char * get_struct__1451_signature();
extern int compare_struct__1451_type(int*, const char*, const void*);
#define struct__1451_filter_size 2
extern FilterUtils get_struct__1451_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1451_filter_values[2];
/****************************************************************
 ** array_int_224
 ****************************************************************/
extern const char * array_int_224_to_string(const void* pValue);
extern int check_array_int_224_string(const char* strValue);
extern int string_to_array_int_224(const char* strValue, void* pValue);
int is_array_int_224_allow_double_convertion();
extern const char * get_array_int_224_signature();
extern int compare_array_int_224_type(int*, const char*, const void*);
#define array_int_224_filter_size 224
extern FilterUtils get_array_int_224_filter_utils(const char* strFilter, void* pValue);
#define array_int_224_filter_values 0
/****************************************************************
 ** array_int_3
 ****************************************************************/
extern const char * array_int_3_to_string(const void* pValue);
extern int check_array_int_3_string(const char* strValue);
extern int string_to_array_int_3(const char* strValue, void* pValue);
int is_array_int_3_allow_double_convertion();
extern const char * get_array_int_3_signature();
extern int compare_array_int_3_type(int*, const char*, const void*);
#define array_int_3_filter_size 3
extern FilterUtils get_array_int_3_filter_utils(const char* strFilter, void* pValue);
#define array_int_3_filter_values 0
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
 ** array_int_33
 ****************************************************************/
extern const char * array_int_33_to_string(const void* pValue);
extern int check_array_int_33_string(const char* strValue);
extern int string_to_array_int_33(const char* strValue, void* pValue);
int is_array_int_33_allow_double_convertion();
extern const char * get_array_int_33_signature();
extern int compare_array_int_33_type(int*, const char*, const void*);
#define array_int_33_filter_size 33
extern FilterUtils get_array_int_33_filter_utils(const char* strFilter, void* pValue);
#define array_int_33_filter_values 0
/****************************************************************
 ** array_int_224_33
 ****************************************************************/
extern const char * array_int_224_33_to_string(const void* pValue);
extern int check_array_int_224_33_string(const char* strValue);
extern int string_to_array_int_224_33(const char* strValue, void* pValue);
int is_array_int_224_33_allow_double_convertion();
extern const char * get_array_int_224_33_signature();
extern int compare_array_int_224_33_type(int*, const char*, const void*);
#define array_int_224_33_filter_size 33
extern FilterUtils get_array_int_224_33_filter_utils(const char* strFilter, void* pValue);
#define array_int_224_33_filter_values 0
/****************************************************************
 ** array_int_1
 ****************************************************************/
extern const char * array_int_1_to_string(const void* pValue);
extern int check_array_int_1_string(const char* strValue);
extern int string_to_array_int_1(const char* strValue, void* pValue);
int is_array_int_1_allow_double_convertion();
extern const char * get_array_int_1_signature();
extern int compare_array_int_1_type(int*, const char*, const void*);
#define array_int_1_filter_size 1
extern FilterUtils get_array_int_1_filter_utils(const char* strFilter, void* pValue);
#define array_int_1_filter_values 0
/****************************************************************
 ** array__1477
 ****************************************************************/
extern const char * array__1477_to_string(const void* pValue);
extern int check_array__1477_string(const char* strValue);
extern int string_to_array__1477(const char* strValue, void* pValue);
int is_array__1477_allow_double_convertion();
extern const char * get_array__1477_signature();
extern int compare_array__1477_type(int*, const char*, const void*);
#define array__1477_filter_size 4
extern FilterUtils get_array__1477_filter_utils(const char* strFilter, void* pValue);
#define array__1477_filter_values 0
/****************************************************************
 ** array__1480
 ****************************************************************/
extern const char * array__1480_to_string(const void* pValue);
extern int check_array__1480_string(const char* strValue);
extern int string_to_array__1480(const char* strValue, void* pValue);
int is_array__1480_allow_double_convertion();
extern const char * get_array__1480_signature();
extern int compare_array__1480_type(int*, const char*, const void*);
#define array__1480_filter_size 4
extern FilterUtils get_array__1480_filter_utils(const char* strFilter, void* pValue);
#define array__1480_filter_values 0
/****************************************************************
 ** array__1483
 ****************************************************************/
extern const char * array__1483_to_string(const void* pValue);
extern int check_array__1483_string(const char* strValue);
extern int string_to_array__1483(const char* strValue, void* pValue);
int is_array__1483_allow_double_convertion();
extern const char * get_array__1483_signature();
extern int compare_array__1483_type(int*, const char*, const void*);
#define array__1483_filter_size 4
extern FilterUtils get_array__1483_filter_utils(const char* strFilter, void* pValue);
#define array__1483_filter_values 0
/****************************************************************
 ** array_int_4
 ****************************************************************/
extern const char * array_int_4_to_string(const void* pValue);
extern int check_array_int_4_string(const char* strValue);
extern int string_to_array_int_4(const char* strValue, void* pValue);
int is_array_int_4_allow_double_convertion();
extern const char * get_array_int_4_signature();
extern int compare_array_int_4_type(int*, const char*, const void*);
#define array_int_4_filter_size 4
extern FilterUtils get_array_int_4_filter_utils(const char* strFilter, void* pValue);
#define array_int_4_filter_values 0
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
 ** Q_SCALE
 ****************************************************************/
extern const char * Q_SCALE_to_string(const void* pValue);
extern int check_Q_SCALE_string(const char* strValue);
extern int string_to_Q_SCALE(const char* strValue, void* pValue);
int is_Q_SCALE_allow_double_convertion();
extern int Q_SCALE_to_double(double * nValue, const void*);
extern const char * get_Q_SCALE_signature();
extern int compare_Q_SCALE_type(int*, const char*, const void*);
#define Q_SCALE_filter_size 0
#define get_Q_SCALE_filter_utils 0
#define Q_SCALE_filter_values 0
/****************************************************************
 ** D_LINK
 ****************************************************************/
extern const char * D_LINK_to_string(const void* pValue);
extern int check_D_LINK_string(const char* strValue);
extern int string_to_D_LINK(const char* strValue, void* pValue);
int is_D_LINK_allow_double_convertion();
extern int D_LINK_to_double(double * nValue, const void*);
#define get_D_LINK_signature get_kcg_int_signature
#define compare_D_LINK_type compare_kcg_int_type
#define D_LINK_filter_size kcg_int_filter_size
#define get_D_LINK_filter_utils get_kcg_int_filter_utils
#define D_LINK_filter_values kcg_int_filter_values
/****************************************************************
 ** Q_NEWCOUNTRY
 ****************************************************************/
extern const char * Q_NEWCOUNTRY_to_string(const void* pValue);
extern int check_Q_NEWCOUNTRY_string(const char* strValue);
extern int string_to_Q_NEWCOUNTRY(const char* strValue, void* pValue);
int is_Q_NEWCOUNTRY_allow_double_convertion();
extern int Q_NEWCOUNTRY_to_double(double * nValue, const void*);
extern const char * get_Q_NEWCOUNTRY_signature();
extern int compare_Q_NEWCOUNTRY_type(int*, const char*, const void*);
#define Q_NEWCOUNTRY_filter_size 0
#define get_Q_NEWCOUNTRY_filter_utils 0
#define Q_NEWCOUNTRY_filter_values 0
/****************************************************************
 ** NID_C
 ****************************************************************/
extern const char * NID_C_to_string(const void* pValue);
extern int check_NID_C_string(const char* strValue);
extern int string_to_NID_C(const char* strValue, void* pValue);
int is_NID_C_allow_double_convertion();
extern int NID_C_to_double(double * nValue, const void*);
#define get_NID_C_signature get_kcg_int_signature
#define compare_NID_C_type compare_kcg_int_type
#define NID_C_filter_size kcg_int_filter_size
#define get_NID_C_filter_utils get_kcg_int_filter_utils
#define NID_C_filter_values kcg_int_filter_values
/****************************************************************
 ** NID_BG
 ****************************************************************/
extern const char * NID_BG_to_string(const void* pValue);
extern int check_NID_BG_string(const char* strValue);
extern int string_to_NID_BG(const char* strValue, void* pValue);
int is_NID_BG_allow_double_convertion();
extern int NID_BG_to_double(double * nValue, const void*);
#define get_NID_BG_signature get_kcg_int_signature
#define compare_NID_BG_type compare_kcg_int_type
#define NID_BG_filter_size kcg_int_filter_size
#define get_NID_BG_filter_utils get_kcg_int_filter_utils
#define NID_BG_filter_values kcg_int_filter_values
/****************************************************************
 ** Q_LINKORIENTATION
 ****************************************************************/
extern const char * Q_LINKORIENTATION_to_string(const void* pValue);
extern int check_Q_LINKORIENTATION_string(const char* strValue);
extern int string_to_Q_LINKORIENTATION(const char* strValue, void* pValue);
int is_Q_LINKORIENTATION_allow_double_convertion();
extern int Q_LINKORIENTATION_to_double(double * nValue, const void*);
extern const char * get_Q_LINKORIENTATION_signature();
extern int compare_Q_LINKORIENTATION_type(int*, const char*, const void*);
#define Q_LINKORIENTATION_filter_size 0
#define get_Q_LINKORIENTATION_filter_utils 0
#define Q_LINKORIENTATION_filter_values 0
/****************************************************************
 ** Q_LINKREACTION
 ****************************************************************/
extern const char * Q_LINKREACTION_to_string(const void* pValue);
extern int check_Q_LINKREACTION_string(const char* strValue);
extern int string_to_Q_LINKREACTION(const char* strValue, void* pValue);
int is_Q_LINKREACTION_allow_double_convertion();
extern int Q_LINKREACTION_to_double(double * nValue, const void*);
extern const char * get_Q_LINKREACTION_signature();
extern int compare_Q_LINKREACTION_type(int*, const char*, const void*);
#define Q_LINKREACTION_filter_size 0
#define get_Q_LINKREACTION_filter_utils 0
#define Q_LINKREACTION_filter_values 0
/****************************************************************
 ** Q_LOCACC
 ****************************************************************/
extern const char * Q_LOCACC_to_string(const void* pValue);
extern int check_Q_LOCACC_string(const char* strValue);
extern int string_to_Q_LOCACC(const char* strValue, void* pValue);
int is_Q_LOCACC_allow_double_convertion();
extern int Q_LOCACC_to_double(double * nValue, const void*);
#define get_Q_LOCACC_signature get_kcg_int_signature
#define compare_Q_LOCACC_type compare_kcg_int_type
#define Q_LOCACC_filter_size kcg_int_filter_size
#define get_Q_LOCACC_filter_utils get_kcg_int_filter_utils
#define Q_LOCACC_filter_values kcg_int_filter_values
/****************************************************************
 ** N_ITER
 ****************************************************************/
extern const char * N_ITER_to_string(const void* pValue);
extern int check_N_ITER_string(const char* strValue);
extern int string_to_N_ITER(const char* strValue, void* pValue);
int is_N_ITER_allow_double_convertion();
extern int N_ITER_to_double(double * nValue, const void*);
#define get_N_ITER_signature get_kcg_int_signature
#define compare_N_ITER_type compare_kcg_int_type
#define N_ITER_filter_size kcg_int_filter_size
#define get_N_ITER_filter_utils get_kcg_int_filter_utils
#define N_ITER_filter_values kcg_int_filter_values
/****************************************************************
 ** L_PACKET
 ****************************************************************/
extern const char * L_PACKET_to_string(const void* pValue);
extern int check_L_PACKET_string(const char* strValue);
extern int string_to_L_PACKET(const char* strValue, void* pValue);
int is_L_PACKET_allow_double_convertion();
extern int L_PACKET_to_double(double * nValue, const void*);
#define get_L_PACKET_signature get_kcg_int_signature
#define compare_L_PACKET_type compare_kcg_int_type
#define L_PACKET_filter_size kcg_int_filter_size
#define get_L_PACKET_filter_utils get_kcg_int_filter_utils
#define L_PACKET_filter_values kcg_int_filter_values
/****************************************************************
 ** NID_LRBG
 ****************************************************************/
extern const char * NID_LRBG_to_string(const void* pValue);
extern int check_NID_LRBG_string(const char* strValue);
extern int string_to_NID_LRBG(const char* strValue, void* pValue);
int is_NID_LRBG_allow_double_convertion();
extern int NID_LRBG_to_double(double * nValue, const void*);
#define get_NID_LRBG_signature get_kcg_int_signature
#define compare_NID_LRBG_type compare_kcg_int_type
#define NID_LRBG_filter_size kcg_int_filter_size
#define get_NID_LRBG_filter_utils get_kcg_int_filter_utils
#define NID_LRBG_filter_values kcg_int_filter_values
/****************************************************************
 ** P005_section_enum_T_TM
 ****************************************************************/
extern const char * P005_section_enum_T_TM_to_string(const void* pValue);
extern int check_P005_section_enum_T_TM_string(const char* strValue);
extern int string_to_P005_section_enum_T_TM(const char* strValue, void* pValue);
int is_P005_section_enum_T_TM_allow_double_convertion();
extern int P005_section_enum_T_TM_to_double(double * nValue, const void*);
#define get_P005_section_enum_T_TM_signature get_struct__1414_signature
#define compare_P005_section_enum_T_TM_type compare_struct__1414_type
#define P005_section_enum_T_TM_filter_size struct__1414_filter_size
#define get_P005_section_enum_T_TM_filter_utils get_struct__1414_filter_utils
#define P005_section_enum_T_TM_filter_values struct__1414_filter_values
/****************************************************************
 ** P005_sections_array_flat_T_TM
 ****************************************************************/
extern const char * P005_sections_array_flat_T_TM_to_string(const void* pValue);
extern int check_P005_sections_array_flat_T_TM_string(const char* strValue);
extern int string_to_P005_sections_array_flat_T_TM(const char* strValue, void* pValue);
int is_P005_sections_array_flat_T_TM_allow_double_convertion();
extern int P005_sections_array_flat_T_TM_to_double(double * nValue, const void*);
#define get_P005_sections_array_flat_T_TM_signature get_array_int_224_signature
#define compare_P005_sections_array_flat_T_TM_type compare_array_int_224_type
#define P005_sections_array_flat_T_TM_filter_size array_int_224_filter_size
#define get_P005_sections_array_flat_T_TM_filter_utils get_array_int_224_filter_utils
#define P005_sections_array_flat_T_TM_filter_values array_int_224_filter_values
/****************************************************************
 ** P005_OBU_sectionlist_enum_T_TM
 ****************************************************************/
extern const char * P005_OBU_sectionlist_enum_T_TM_to_string(const void* pValue);
extern int check_P005_OBU_sectionlist_enum_T_TM_string(const char* strValue);
extern int string_to_P005_OBU_sectionlist_enum_T_TM(const char* strValue, void* pValue);
int is_P005_OBU_sectionlist_enum_T_TM_allow_double_convertion();
extern int P005_OBU_sectionlist_enum_T_TM_to_double(double * nValue, const void*);
#define get_P005_OBU_sectionlist_enum_T_TM_signature get_array__1425_signature
#define compare_P005_OBU_sectionlist_enum_T_TM_type compare_array__1425_type
#define P005_OBU_sectionlist_enum_T_TM_filter_size array__1425_filter_size
#define get_P005_OBU_sectionlist_enum_T_TM_filter_utils get_array__1425_filter_utils
#define P005_OBU_sectionlist_enum_T_TM_filter_values array__1425_filter_values
/****************************************************************
 ** P005_OBU_T_TM
 ****************************************************************/
extern const char * P005_OBU_T_TM_to_string(const void* pValue);
extern int check_P005_OBU_T_TM_string(const char* strValue);
extern int string_to_P005_OBU_T_TM(const char* strValue, void* pValue);
int is_P005_OBU_T_TM_allow_double_convertion();
extern int P005_OBU_T_TM_to_double(double * nValue, const void*);
#define get_P005_OBU_T_TM_signature get_struct__1428_signature
#define compare_P005_OBU_T_TM_type compare_struct__1428_type
#define P005_OBU_T_TM_filter_size struct__1428_filter_size
#define get_P005_OBU_T_TM_filter_utils get_struct__1428_filter_utils
#define P005_OBU_T_TM_filter_values struct__1428_filter_values
/****************************************************************
 ** Array03_TM
 ****************************************************************/
extern const char * Array03_TM_to_string(const void* pValue);
extern int check_Array03_TM_string(const char* strValue);
extern int string_to_Array03_TM(const char* strValue, void* pValue);
int is_Array03_TM_allow_double_convertion();
extern int Array03_TM_to_double(double * nValue, const void*);
#define get_Array03_TM_signature get_array_int_3_signature
#define compare_Array03_TM_type compare_array_int_3_type
#define Array03_TM_filter_size array_int_3_filter_size
#define get_Array03_TM_filter_utils get_array_int_3_filter_utils
#define Array03_TM_filter_values array_int_3_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__1440_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__1440_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__1440_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__1440_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__1440_filter_values
/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
extern const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_Metadata_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
extern int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_Metadata_T_Common_Types_Pkg_signature get_array__1448_signature
#define compare_Metadata_T_Common_Types_Pkg_type compare_array__1448_type
#define Metadata_T_Common_Types_Pkg_filter_size array__1448_filter_size
#define get_Metadata_T_Common_Types_Pkg_filter_utils get_array__1448_filter_utils
#define Metadata_T_Common_Types_Pkg_filter_values array__1448_filter_values
/****************************************************************
 ** CompressedPacketData_T_Common_Types_Pkg
 ****************************************************************/
extern const char * CompressedPacketData_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_CompressedPacketData_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_CompressedPacketData_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_CompressedPacketData_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPacketData_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_CompressedPacketData_T_Common_Types_Pkg_signature get_array_int_500_signature
#define compare_CompressedPacketData_T_Common_Types_Pkg_type compare_array_int_500_type
#define CompressedPacketData_T_Common_Types_Pkg_filter_size array_int_500_filter_size
#define get_CompressedPacketData_T_Common_Types_Pkg_filter_utils get_array_int_500_filter_utils
#define CompressedPacketData_T_Common_Types_Pkg_filter_values array_int_500_filter_values
/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
extern const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_CompressedPackets_T_Common_Types_Pkg_signature get_struct__1451_signature
#define compare_CompressedPackets_T_Common_Types_Pkg_type compare_struct__1451_type
#define CompressedPackets_T_Common_Types_Pkg_filter_size struct__1451_filter_size
#define get_CompressedPackets_T_Common_Types_Pkg_filter_utils get_struct__1451_filter_utils
#define CompressedPackets_T_Common_Types_Pkg_filter_values struct__1451_filter_values
/****************************************************************
 ** LinkedBG_T_BG_Types_Pkg
 ****************************************************************/
extern const char * LinkedBG_T_BG_Types_Pkg_to_string(const void* pValue);
extern int check_LinkedBG_T_BG_Types_Pkg_string(const char* strValue);
extern int string_to_LinkedBG_T_BG_Types_Pkg(const char* strValue, void* pValue);
int is_LinkedBG_T_BG_Types_Pkg_allow_double_convertion();
extern int LinkedBG_T_BG_Types_Pkg_to_double(double * nValue, const void*);
#define get_LinkedBG_T_BG_Types_Pkg_signature get_struct__1397_signature
#define compare_LinkedBG_T_BG_Types_Pkg_type compare_struct__1397_type
#define LinkedBG_T_BG_Types_Pkg_filter_size struct__1397_filter_size
#define get_LinkedBG_T_BG_Types_Pkg_filter_utils get_struct__1397_filter_utils
#define LinkedBG_T_BG_Types_Pkg_filter_values struct__1397_filter_values
/****************************************************************
 ** LinkedBGs_T_BG_Types_Pkg
 ****************************************************************/
extern const char * LinkedBGs_T_BG_Types_Pkg_to_string(const void* pValue);
extern int check_LinkedBGs_T_BG_Types_Pkg_string(const char* strValue);
extern int string_to_LinkedBGs_T_BG_Types_Pkg(const char* strValue, void* pValue);
int is_LinkedBGs_T_BG_Types_Pkg_allow_double_convertion();
extern int LinkedBGs_T_BG_Types_Pkg_to_double(double * nValue, const void*);
#define get_LinkedBGs_T_BG_Types_Pkg_signature get_array__1411_signature
#define compare_LinkedBGs_T_BG_Types_Pkg_type compare_array__1411_type
#define LinkedBGs_T_BG_Types_Pkg_filter_size array__1411_filter_size
#define get_LinkedBGs_T_BG_Types_Pkg_filter_utils get_array__1411_filter_utils
#define LinkedBGs_T_BG_Types_Pkg_filter_values array__1411_filter_values

#endif /*READ_P005_FORCALCTRAINPOS_TM_TYPES_CONVERTION */
