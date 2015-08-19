#ifndef ROOT_TYPES_CONVERTION
#define ROOT_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__1527_Utils;
extern TypeUtils _SCSIM_struct__1532_Utils;
extern TypeUtils _SCSIM_struct__1537_Utils;
extern TypeUtils _SCSIM_struct__1542_Utils;
extern TypeUtils _SCSIM_array__1547_Utils;
extern TypeUtils _SCSIM_array__1550_Utils;
extern TypeUtils _SCSIM_array__1553_Utils;
extern TypeUtils _SCSIM_array_real_8_Utils;
extern TypeUtils _SCSIM_array_real_25_Utils;
extern TypeUtils _SCSIM_array__1562_Utils;
extern TypeUtils _SCSIM_array_real_24_Utils;
extern TypeUtils _SCSIM_array_real_1_Utils;
extern TypeUtils _SCSIM_array_real_2_Utils;
extern TypeUtils _SCSIM_array__1574_Utils;
extern TypeUtils _SCSIM_array_bool_25_Utils;
extern TypeUtils _SCSIM_array_bool_1_Utils;
extern TypeUtils _SCSIM_array_bool_24_Utils;
extern TypeUtils _SCSIM_array__1586_Utils;
extern TypeUtils _SCSIM_array__1589_Utils;
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
 ** struct__1527
 ****************************************************************/
extern const char * struct__1527_to_string(const void* pValue);
extern int check_struct__1527_string(const char* strValue);
extern int string_to_struct__1527(const char* strValue, void* pValue);
int is_struct__1527_allow_double_convertion();
extern const char * get_struct__1527_signature();
extern int compare_struct__1527_type(int*, const char*, const void*);
#define struct__1527_filter_size 2
extern FilterUtils get_struct__1527_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1527_filter_values[2];
/****************************************************************
 ** struct__1532
 ****************************************************************/
extern const char * struct__1532_to_string(const void* pValue);
extern int check_struct__1532_string(const char* strValue);
extern int string_to_struct__1532(const char* strValue, void* pValue);
int is_struct__1532_allow_double_convertion();
extern const char * get_struct__1532_signature();
extern int compare_struct__1532_type(int*, const char*, const void*);
#define struct__1532_filter_size 2
extern FilterUtils get_struct__1532_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1532_filter_values[2];
/****************************************************************
 ** struct__1537
 ****************************************************************/
extern const char * struct__1537_to_string(const void* pValue);
extern int check_struct__1537_string(const char* strValue);
extern int string_to_struct__1537(const char* strValue, void* pValue);
int is_struct__1537_allow_double_convertion();
extern const char * get_struct__1537_signature();
extern int compare_struct__1537_type(int*, const char*, const void*);
#define struct__1537_filter_size 2
extern FilterUtils get_struct__1537_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1537_filter_values[2];
/****************************************************************
 ** struct__1542
 ****************************************************************/
extern const char * struct__1542_to_string(const void* pValue);
extern int check_struct__1542_string(const char* strValue);
extern int string_to_struct__1542(const char* strValue, void* pValue);
int is_struct__1542_allow_double_convertion();
extern const char * get_struct__1542_signature();
extern int compare_struct__1542_type(int*, const char*, const void*);
#define struct__1542_filter_size 2
extern FilterUtils get_struct__1542_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__1542_filter_values[2];
/****************************************************************
 ** array__1547
 ****************************************************************/
extern const char * array__1547_to_string(const void* pValue);
extern int check_array__1547_string(const char* strValue);
extern int string_to_array__1547(const char* strValue, void* pValue);
int is_array__1547_allow_double_convertion();
extern const char * get_array__1547_signature();
extern int compare_array__1547_type(int*, const char*, const void*);
#define array__1547_filter_size 2
extern FilterUtils get_array__1547_filter_utils(const char* strFilter, void* pValue);
#define array__1547_filter_values 0
/****************************************************************
 ** array__1550
 ****************************************************************/
extern const char * array__1550_to_string(const void* pValue);
extern int check_array__1550_string(const char* strValue);
extern int string_to_array__1550(const char* strValue, void* pValue);
int is_array__1550_allow_double_convertion();
extern const char * get_array__1550_signature();
extern int compare_array__1550_type(int*, const char*, const void*);
#define array__1550_filter_size 2
extern FilterUtils get_array__1550_filter_utils(const char* strFilter, void* pValue);
#define array__1550_filter_values 0
/****************************************************************
 ** array__1553
 ****************************************************************/
extern const char * array__1553_to_string(const void* pValue);
extern int check_array__1553_string(const char* strValue);
extern int string_to_array__1553(const char* strValue, void* pValue);
int is_array__1553_allow_double_convertion();
extern const char * get_array__1553_signature();
extern int compare_array__1553_type(int*, const char*, const void*);
#define array__1553_filter_size 8
extern FilterUtils get_array__1553_filter_utils(const char* strFilter, void* pValue);
#define array__1553_filter_values 0
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
 ** array__1562
 ****************************************************************/
extern const char * array__1562_to_string(const void* pValue);
extern int check_array__1562_string(const char* strValue);
extern int string_to_array__1562(const char* strValue, void* pValue);
int is_array__1562_allow_double_convertion();
extern const char * get_array__1562_signature();
extern int compare_array__1562_type(int*, const char*, const void*);
#define array__1562_filter_size 25
extern FilterUtils get_array__1562_filter_utils(const char* strFilter, void* pValue);
#define array__1562_filter_values 0
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
 ** array__1574
 ****************************************************************/
extern const char * array__1574_to_string(const void* pValue);
extern int check_array__1574_string(const char* strValue);
extern int string_to_array__1574(const char* strValue, void* pValue);
int is_array__1574_allow_double_convertion();
extern const char * get_array__1574_signature();
extern int compare_array__1574_type(int*, const char*, const void*);
#define array__1574_filter_size 25
extern FilterUtils get_array__1574_filter_utils(const char* strFilter, void* pValue);
#define array__1574_filter_values 0
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
 ** array__1586
 ****************************************************************/
extern const char * array__1586_to_string(const void* pValue);
extern int check_array__1586_string(const char* strValue);
extern int string_to_array__1586(const char* strValue, void* pValue);
int is_array__1586_allow_double_convertion();
extern const char * get_array__1586_signature();
extern int compare_array__1586_type(int*, const char*, const void*);
#define array__1586_filter_size 25
extern FilterUtils get_array__1586_filter_utils(const char* strFilter, void* pValue);
#define array__1586_filter_values 0
/****************************************************************
 ** array__1589
 ****************************************************************/
extern const char * array__1589_to_string(const void* pValue);
extern int check_array__1589_string(const char* strValue);
extern int string_to_array__1589(const char* strValue, void* pValue);
int is_array__1589_allow_double_convertion();
extern const char * get_array__1589_signature();
extern int compare_array__1589_type(int*, const char*, const void*);
#define array__1589_filter_size 25
extern FilterUtils get_array__1589_filter_utils(const char* strFilter, void* pValue);
#define array__1589_filter_values 0
/****************************************************************
 ** TY_DistValue
 ****************************************************************/
extern const char * TY_DistValue_to_string(const void* pValue);
extern int check_TY_DistValue_string(const char* strValue);
extern int string_to_TY_DistValue(const char* strValue, void* pValue);
int is_TY_DistValue_allow_double_convertion();
extern int TY_DistValue_to_double(double * nValue, const void*);
#define get_TY_DistValue_signature get_struct__1542_signature
#define compare_TY_DistValue_type compare_struct__1542_type
#define TY_DistValue_filter_size struct__1542_filter_size
#define get_TY_DistValue_filter_utils get_struct__1542_filter_utils
#define TY_DistValue_filter_values struct__1542_filter_values
/****************************************************************
 ** TY_Adh
 ****************************************************************/
extern const char * TY_Adh_to_string(const void* pValue);
extern int check_TY_Adh_string(const char* strValue);
extern int string_to_TY_Adh(const char* strValue, void* pValue);
int is_TY_Adh_allow_double_convertion();
extern int TY_Adh_to_double(double * nValue, const void*);
#define get_TY_Adh_signature get_struct__1537_signature
#define compare_TY_Adh_type compare_struct__1537_type
#define TY_Adh_filter_size struct__1537_filter_size
#define get_TY_Adh_filter_utils get_struct__1537_filter_utils
#define TY_Adh_filter_values struct__1537_filter_values
/****************************************************************
 ** TY_EB_Type
 ****************************************************************/
extern const char * TY_EB_Type_to_string(const void* pValue);
extern int check_TY_EB_Type_string(const char* strValue);
extern int string_to_TY_EB_Type(const char* strValue, void* pValue);
int is_TY_EB_Type_allow_double_convertion();
extern int TY_EB_Type_to_double(double * nValue, const void*);
#define get_TY_EB_Type_signature get_struct__1532_signature
#define compare_TY_EB_Type_type compare_struct__1532_type
#define TY_EB_Type_filter_size struct__1532_filter_size
#define get_TY_EB_Type_filter_utils get_struct__1532_filter_utils
#define TY_EB_Type_filter_values struct__1532_filter_values
/****************************************************************
 ** TY_SizePos
 ****************************************************************/
extern const char * TY_SizePos_to_string(const void* pValue);
extern int check_TY_SizePos_string(const char* strValue);
extern int string_to_TY_SizePos(const char* strValue, void* pValue);
int is_TY_SizePos_allow_double_convertion();
extern int TY_SizePos_to_double(double * nValue, const void*);
#define get_TY_SizePos_signature get_struct__1527_signature
#define compare_TY_SizePos_type compare_struct__1527_type
#define TY_SizePos_filter_size struct__1527_filter_size
#define get_TY_SizePos_filter_utils get_struct__1527_filter_utils
#define TY_SizePos_filter_values struct__1527_filter_values

#endif /*ROOT_TYPES_CONVERTION */
