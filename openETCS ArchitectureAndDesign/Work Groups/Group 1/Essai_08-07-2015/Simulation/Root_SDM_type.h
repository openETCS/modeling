#ifndef ROOT_SDM_TYPES_CONVERTION
#define ROOT_SDM_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__1591_Utils;
extern TypeUtils _SCSIM_struct__1596_Utils;
extern TypeUtils _SCSIM_struct__1601_Utils;
extern TypeUtils _SCSIM_struct__1606_Utils;
extern TypeUtils _SCSIM_array__1611_Utils;
extern TypeUtils _SCSIM_array__1614_Utils;
extern TypeUtils _SCSIM_array_real_8_Utils;
extern TypeUtils _SCSIM_array_real_25_Utils;
extern TypeUtils _SCSIM_array_real_1_Utils;
extern TypeUtils _SCSIM_array_real_24_Utils;
extern TypeUtils _SCSIM_array__1629_Utils;
extern TypeUtils _SCSIM_array_real_2_Utils;
extern TypeUtils _SCSIM_array__1635_Utils;
extern TypeUtils _SCSIM_array__1638_Utils;
extern TypeUtils _SCSIM_array__1641_Utils;
extern TypeUtils _SCSIM_array_bool_25_Utils;
extern TypeUtils _SCSIM_array__1647_Utils;
extern TypeUtils _SCSIM_array_bool_1_Utils;
extern TypeUtils _SCSIM_array_bool_24_Utils;
extern TypeUtils _SCSIM_array__1656_Utils;
extern TypeUtils _SCSIM_array__1659_Utils;
extern TypeUtils _SCSIM_TY_DistValue_Utils;
extern TypeUtils _SCSIM_TY_Adh_Utils;
extern TypeUtils _SCSIM_TY_EB_Type_Utils;
extern TypeUtils _SCSIM_TY_SizePos_Utils;

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
 ** struct__1591
 ****************************************************************/
extern const char * struct__1591_to_string(const void* pValue);
extern int check_struct__1591_string(const char* strValue);
extern int string_to_struct__1591(const char* strValue, void* pValue);
int is_struct__1591_allow_double_convertion();
extern const char * get_struct__1591_signature();
extern int compare_struct__1591_type(int*, const char*, const void*);
#define struct__1591_filter_size 2
extern FilterUtils get_struct__1591_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1591_filter_values[2];
/****************************************************************
 ** struct__1596
 ****************************************************************/
extern const char * struct__1596_to_string(const void* pValue);
extern int check_struct__1596_string(const char* strValue);
extern int string_to_struct__1596(const char* strValue, void* pValue);
int is_struct__1596_allow_double_convertion();
extern const char * get_struct__1596_signature();
extern int compare_struct__1596_type(int*, const char*, const void*);
#define struct__1596_filter_size 2
extern FilterUtils get_struct__1596_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1596_filter_values[2];
/****************************************************************
 ** struct__1601
 ****************************************************************/
extern const char * struct__1601_to_string(const void* pValue);
extern int check_struct__1601_string(const char* strValue);
extern int string_to_struct__1601(const char* strValue, void* pValue);
int is_struct__1601_allow_double_convertion();
extern const char * get_struct__1601_signature();
extern int compare_struct__1601_type(int*, const char*, const void*);
#define struct__1601_filter_size 2
extern FilterUtils get_struct__1601_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1601_filter_values[2];
/****************************************************************
 ** struct__1606
 ****************************************************************/
extern const char * struct__1606_to_string(const void* pValue);
extern int check_struct__1606_string(const char* strValue);
extern int string_to_struct__1606(const char* strValue, void* pValue);
int is_struct__1606_allow_double_convertion();
extern const char * get_struct__1606_signature();
extern int compare_struct__1606_type(int*, const char*, const void*);
#define struct__1606_filter_size 2
extern FilterUtils get_struct__1606_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1606_filter_values[2];
/****************************************************************
 ** array__1611
 ****************************************************************/
extern const char * array__1611_to_string(const void* pValue);
extern int check_array__1611_string(const char* strValue);
extern int string_to_array__1611(const char* strValue, void* pValue);
int is_array__1611_allow_double_convertion();
extern const char * get_array__1611_signature();
extern int compare_array__1611_type(int*, const char*, const void*);
#define array__1611_filter_size 2
extern FilterUtils get_array__1611_filter_utils(const char* strFilter, void* pValue);
#define array__1611_filter_values 0
/****************************************************************
 ** array__1614
 ****************************************************************/
extern const char * array__1614_to_string(const void* pValue);
extern int check_array__1614_string(const char* strValue);
extern int string_to_array__1614(const char* strValue, void* pValue);
int is_array__1614_allow_double_convertion();
extern const char * get_array__1614_signature();
extern int compare_array__1614_type(int*, const char*, const void*);
#define array__1614_filter_size 8
extern FilterUtils get_array__1614_filter_utils(const char* strFilter, void* pValue);
#define array__1614_filter_values 0
/****************************************************************
 ** array_real_8
 ****************************************************************/
extern const char * array_real_8_to_string(const void* pValue);
extern int check_array_real_8_string(const char* strValue);
extern int string_to_array_real_8(const char* strValue, void* pValue);
int is_array_real_8_allow_double_convertion();
extern const char * get_array_real_8_signature();
extern int compare_array_real_8_type(int*, const char*, const void*);
#define array_real_8_filter_size 8
extern FilterUtils get_array_real_8_filter_utils(const char* strFilter, void* pValue);
#define array_real_8_filter_values 0
/****************************************************************
 ** array_real_25
 ****************************************************************/
extern const char * array_real_25_to_string(const void* pValue);
extern int check_array_real_25_string(const char* strValue);
extern int string_to_array_real_25(const char* strValue, void* pValue);
int is_array_real_25_allow_double_convertion();
extern const char * get_array_real_25_signature();
extern int compare_array_real_25_type(int*, const char*, const void*);
#define array_real_25_filter_size 25
extern FilterUtils get_array_real_25_filter_utils(const char* strFilter, void* pValue);
#define array_real_25_filter_values 0
/****************************************************************
 ** array_real_1
 ****************************************************************/
extern const char * array_real_1_to_string(const void* pValue);
extern int check_array_real_1_string(const char* strValue);
extern int string_to_array_real_1(const char* strValue, void* pValue);
int is_array_real_1_allow_double_convertion();
extern const char * get_array_real_1_signature();
extern int compare_array_real_1_type(int*, const char*, const void*);
#define array_real_1_filter_size 1
extern FilterUtils get_array_real_1_filter_utils(const char* strFilter, void* pValue);
#define array_real_1_filter_values 0
/****************************************************************
 ** array_real_24
 ****************************************************************/
extern const char * array_real_24_to_string(const void* pValue);
extern int check_array_real_24_string(const char* strValue);
extern int string_to_array_real_24(const char* strValue, void* pValue);
int is_array_real_24_allow_double_convertion();
extern const char * get_array_real_24_signature();
extern int compare_array_real_24_type(int*, const char*, const void*);
#define array_real_24_filter_size 24
extern FilterUtils get_array_real_24_filter_utils(const char* strFilter, void* pValue);
#define array_real_24_filter_values 0
/****************************************************************
 ** array__1629
 ****************************************************************/
extern const char * array__1629_to_string(const void* pValue);
extern int check_array__1629_string(const char* strValue);
extern int string_to_array__1629(const char* strValue, void* pValue);
int is_array__1629_allow_double_convertion();
extern const char * get_array__1629_signature();
extern int compare_array__1629_type(int*, const char*, const void*);
#define array__1629_filter_size 25
extern FilterUtils get_array__1629_filter_utils(const char* strFilter, void* pValue);
#define array__1629_filter_values 0
/****************************************************************
 ** array_real_2
 ****************************************************************/
extern const char * array_real_2_to_string(const void* pValue);
extern int check_array_real_2_string(const char* strValue);
extern int string_to_array_real_2(const char* strValue, void* pValue);
int is_array_real_2_allow_double_convertion();
extern const char * get_array_real_2_signature();
extern int compare_array_real_2_type(int*, const char*, const void*);
#define array_real_2_filter_size 2
extern FilterUtils get_array_real_2_filter_utils(const char* strFilter, void* pValue);
#define array_real_2_filter_values 0
/****************************************************************
 ** array__1635
 ****************************************************************/
extern const char * array__1635_to_string(const void* pValue);
extern int check_array__1635_string(const char* strValue);
extern int string_to_array__1635(const char* strValue, void* pValue);
int is_array__1635_allow_double_convertion();
extern const char * get_array__1635_signature();
extern int compare_array__1635_type(int*, const char*, const void*);
#define array__1635_filter_size 25
extern FilterUtils get_array__1635_filter_utils(const char* strFilter, void* pValue);
#define array__1635_filter_values 0
/****************************************************************
 ** array__1638
 ****************************************************************/
extern const char * array__1638_to_string(const void* pValue);
extern int check_array__1638_string(const char* strValue);
extern int string_to_array__1638(const char* strValue, void* pValue);
int is_array__1638_allow_double_convertion();
extern const char * get_array__1638_signature();
extern int compare_array__1638_type(int*, const char*, const void*);
#define array__1638_filter_size 1
extern FilterUtils get_array__1638_filter_utils(const char* strFilter, void* pValue);
#define array__1638_filter_values 0
/****************************************************************
 ** array__1641
 ****************************************************************/
extern const char * array__1641_to_string(const void* pValue);
extern int check_array__1641_string(const char* strValue);
extern int string_to_array__1641(const char* strValue, void* pValue);
int is_array__1641_allow_double_convertion();
extern const char * get_array__1641_signature();
extern int compare_array__1641_type(int*, const char*, const void*);
#define array__1641_filter_size 25
extern FilterUtils get_array__1641_filter_utils(const char* strFilter, void* pValue);
#define array__1641_filter_values 0
/****************************************************************
 ** array_bool_25
 ****************************************************************/
extern const char * array_bool_25_to_string(const void* pValue);
extern int check_array_bool_25_string(const char* strValue);
extern int string_to_array_bool_25(const char* strValue, void* pValue);
int is_array_bool_25_allow_double_convertion();
extern const char * get_array_bool_25_signature();
extern int compare_array_bool_25_type(int*, const char*, const void*);
#define array_bool_25_filter_size 25
extern FilterUtils get_array_bool_25_filter_utils(const char* strFilter, void* pValue);
#define array_bool_25_filter_values 0
/****************************************************************
 ** array__1647
 ****************************************************************/
extern const char * array__1647_to_string(const void* pValue);
extern int check_array__1647_string(const char* strValue);
extern int string_to_array__1647(const char* strValue, void* pValue);
int is_array__1647_allow_double_convertion();
extern const char * get_array__1647_signature();
extern int compare_array__1647_type(int*, const char*, const void*);
#define array__1647_filter_size 2
extern FilterUtils get_array__1647_filter_utils(const char* strFilter, void* pValue);
#define array__1647_filter_values 0
/****************************************************************
 ** array_bool_1
 ****************************************************************/
extern const char * array_bool_1_to_string(const void* pValue);
extern int check_array_bool_1_string(const char* strValue);
extern int string_to_array_bool_1(const char* strValue, void* pValue);
int is_array_bool_1_allow_double_convertion();
extern const char * get_array_bool_1_signature();
extern int compare_array_bool_1_type(int*, const char*, const void*);
#define array_bool_1_filter_size 1
extern FilterUtils get_array_bool_1_filter_utils(const char* strFilter, void* pValue);
#define array_bool_1_filter_values 0
/****************************************************************
 ** array_bool_24
 ****************************************************************/
extern const char * array_bool_24_to_string(const void* pValue);
extern int check_array_bool_24_string(const char* strValue);
extern int string_to_array_bool_24(const char* strValue, void* pValue);
int is_array_bool_24_allow_double_convertion();
extern const char * get_array_bool_24_signature();
extern int compare_array_bool_24_type(int*, const char*, const void*);
#define array_bool_24_filter_size 24
extern FilterUtils get_array_bool_24_filter_utils(const char* strFilter, void* pValue);
#define array_bool_24_filter_values 0
/****************************************************************
 ** array__1656
 ****************************************************************/
extern const char * array__1656_to_string(const void* pValue);
extern int check_array__1656_string(const char* strValue);
extern int string_to_array__1656(const char* strValue, void* pValue);
int is_array__1656_allow_double_convertion();
extern const char * get_array__1656_signature();
extern int compare_array__1656_type(int*, const char*, const void*);
#define array__1656_filter_size 25
extern FilterUtils get_array__1656_filter_utils(const char* strFilter, void* pValue);
#define array__1656_filter_values 0
/****************************************************************
 ** array__1659
 ****************************************************************/
extern const char * array__1659_to_string(const void* pValue);
extern int check_array__1659_string(const char* strValue);
extern int string_to_array__1659(const char* strValue, void* pValue);
int is_array__1659_allow_double_convertion();
extern const char * get_array__1659_signature();
extern int compare_array__1659_type(int*, const char*, const void*);
#define array__1659_filter_size 25
extern FilterUtils get_array__1659_filter_utils(const char* strFilter, void* pValue);
#define array__1659_filter_values 0
/****************************************************************
 ** TY_DistValue
 ****************************************************************/
extern const char * TY_DistValue_to_string(const void* pValue);
extern int check_TY_DistValue_string(const char* strValue);
extern int string_to_TY_DistValue(const char* strValue, void* pValue);
int is_TY_DistValue_allow_double_convertion();
extern int TY_DistValue_to_double(double * nValue, const void*);
#define get_TY_DistValue_signature get_struct__1606_signature
#define compare_TY_DistValue_type compare_struct__1606_type
#define TY_DistValue_filter_size struct__1606_filter_size
#define get_TY_DistValue_filter_utils get_struct__1606_filter_utils
#define TY_DistValue_filter_values struct__1606_filter_values
/****************************************************************
 ** TY_Adh
 ****************************************************************/
extern const char * TY_Adh_to_string(const void* pValue);
extern int check_TY_Adh_string(const char* strValue);
extern int string_to_TY_Adh(const char* strValue, void* pValue);
int is_TY_Adh_allow_double_convertion();
extern int TY_Adh_to_double(double * nValue, const void*);
#define get_TY_Adh_signature get_struct__1601_signature
#define compare_TY_Adh_type compare_struct__1601_type
#define TY_Adh_filter_size struct__1601_filter_size
#define get_TY_Adh_filter_utils get_struct__1601_filter_utils
#define TY_Adh_filter_values struct__1601_filter_values
/****************************************************************
 ** TY_EB_Type
 ****************************************************************/
extern const char * TY_EB_Type_to_string(const void* pValue);
extern int check_TY_EB_Type_string(const char* strValue);
extern int string_to_TY_EB_Type(const char* strValue, void* pValue);
int is_TY_EB_Type_allow_double_convertion();
extern int TY_EB_Type_to_double(double * nValue, const void*);
#define get_TY_EB_Type_signature get_struct__1596_signature
#define compare_TY_EB_Type_type compare_struct__1596_type
#define TY_EB_Type_filter_size struct__1596_filter_size
#define get_TY_EB_Type_filter_utils get_struct__1596_filter_utils
#define TY_EB_Type_filter_values struct__1596_filter_values
/****************************************************************
 ** TY_SizePos
 ****************************************************************/
extern const char * TY_SizePos_to_string(const void* pValue);
extern int check_TY_SizePos_string(const char* strValue);
extern int string_to_TY_SizePos(const char* strValue, void* pValue);
int is_TY_SizePos_allow_double_convertion();
extern int TY_SizePos_to_double(double * nValue, const void*);
#define get_TY_SizePos_signature get_struct__1591_signature
#define compare_TY_SizePos_type compare_struct__1591_type
#define TY_SizePos_filter_size struct__1591_filter_size
#define get_TY_SizePos_filter_utils get_struct__1591_filter_utils
#define TY_SizePos_filter_values struct__1591_filter_values

#endif /*ROOT_SDM_TYPES_CONVERTION */
