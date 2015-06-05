#ifndef TESTSTORY00A_P005_INTERNAL_TYPES_CONVERTION
#define TESTSTORY00A_P005_INTERNAL_TYPES_CONVERTION

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
extern TypeUtils _SCSIM_struct__5532_Utils;
extern TypeUtils _SCSIM_array__5546_Utils;
extern TypeUtils _SCSIM_struct__5549_Utils;
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_struct__5565_Utils;
extern TypeUtils _SCSIM_array__5573_Utils;
extern TypeUtils _SCSIM_struct__5576_Utils;
extern TypeUtils _SCSIM_struct__5581_Utils;
extern TypeUtils _SCSIM_array__5592_Utils;
extern TypeUtils _SCSIM_struct__5595_Utils;
extern TypeUtils _SCSIM_array_int_224_Utils;
extern TypeUtils _SCSIM_array_int_3_Utils;
extern TypeUtils _SCSIM_struct__5610_Utils;
extern TypeUtils _SCSIM_struct__5623_Utils;
extern TypeUtils _SCSIM_struct__5628_Utils;
extern TypeUtils _SCSIM_struct__5636_Utils;
extern TypeUtils _SCSIM_struct__5645_Utils;
extern TypeUtils _SCSIM_array__5655_Utils;
extern TypeUtils _SCSIM_struct__5658_Utils;
extern TypeUtils _SCSIM_array_int_7_Utils;
extern TypeUtils _SCSIM_array_int_7_33_Utils;
extern TypeUtils _SCSIM_array__5681_Utils;
extern TypeUtils _SCSIM_array_int_500_500_Utils;
extern TypeUtils _SCSIM_array_int_7_33_231_Utils;
extern TypeUtils _SCSIM_array_int_271_Utils;
extern TypeUtils _SCSIM_array_int_4_Utils;
extern TypeUtils _SCSIM_array_int_1_Utils;
extern TypeUtils _SCSIM_array_int_5_Utils;
extern TypeUtils _SCSIM_array_int_229_Utils;
extern TypeUtils _SCSIM_array__5705_Utils;
extern TypeUtils _SCSIM_array_int_30_Utils;
extern TypeUtils _SCSIM_array_int_33_Utils;
extern TypeUtils _SCSIM_array_int_224_33_Utils;
extern TypeUtils _SCSIM_array__5717_Utils;
extern TypeUtils _SCSIM_array__5720_Utils;
extern TypeUtils _SCSIM_array__5723_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_Q_UPDOWN_Utils;
extern TypeUtils _SCSIM_M_VERSION_Utils;
extern TypeUtils _SCSIM_Q_MEDIA_Utils;
extern TypeUtils _SCSIM_N_PIG_Utils;
extern TypeUtils _SCSIM_N_TOTAL_Utils;
extern TypeUtils _SCSIM_M_DUP_Utils;
extern TypeUtils _SCSIM_M_MCOUNT_Utils;
extern TypeUtils _SCSIM_NID_C_Utils;
extern TypeUtils _SCSIM_NID_BG_Utils;
extern TypeUtils _SCSIM_Q_LINK_Utils;
extern TypeUtils _SCSIM_Q_SCALE_Utils;
extern TypeUtils _SCSIM_D_LINK_Utils;
extern TypeUtils _SCSIM_Q_NEWCOUNTRY_Utils;
extern TypeUtils _SCSIM_Q_LINKORIENTATION_Utils;
extern TypeUtils _SCSIM_Q_LINKREACTION_Utils;
extern TypeUtils _SCSIM_Q_LOCACC_Utils;
extern TypeUtils _SCSIM_N_ITER_Utils;
extern TypeUtils _SCSIM_L_PACKET_Utils;
extern TypeUtils _SCSIM_NID_LRBG_Utils;
extern TypeUtils _SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils;
extern TypeUtils _SCSIM_CompressedBaliseMessage_TM_Utils;
extern TypeUtils _SCSIM_BaliseTelegramHeader_int_T_TM_Utils;
extern TypeUtils _SCSIM_OrBG_TM_Utils;
extern TypeUtils _SCSIM_OrLine_TM_Utils;
extern TypeUtils _SCSIM_P005_trackside_int_T_TM_Utils;
extern TypeUtils _SCSIM_P005_trackide_sectionlist_T_TM_Utils;
extern TypeUtils _SCSIM_P005_section_int_T_TM_Utils;
extern TypeUtils _SCSIM_P005_sections_array_flat_T_TM_Utils;
extern TypeUtils _SCSIM_P005_OBU_sectionlist_array_T_TM_Utils;
extern TypeUtils _SCSIM_P005_section_array_T_TM_Utils;
extern TypeUtils _SCSIM_P005_OBU_sectionlist_int_T_TM_Utils;
extern TypeUtils _SCSIM_BaliseGroupData_TM_Utils;
extern TypeUtils _SCSIM_P005_section_enum_T_TM_Utils;
extern TypeUtils _SCSIM_P005_OBU_sectionlist_enum_T_TM_Utils;
extern TypeUtils _SCSIM_P005_OBU_T_TM_Utils;
extern TypeUtils _SCSIM_Array03_TM_Utils;
extern TypeUtils _SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_Metadata_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_MetadataElement_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_BaliseGroupData_Basics_Utils;
extern TypeUtils _SCSIM_B_data_internal_T_InfraLib_Utils;
extern TypeUtils _SCSIM_TelegramHeader_T_BG_Types_Pkg_Utils;
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
 ** struct__5532
 ****************************************************************/
extern const char * struct__5532_to_string(const void* pValue);
extern int check_struct__5532_string(const char* strValue);
extern int string_to_struct__5532(const char* strValue, void* pValue);
int is_struct__5532_allow_double_convertion();
extern const char * get_struct__5532_signature();
extern int compare_struct__5532_type(int*, const char*, const void*);
#define struct__5532_filter_size 11
extern FilterUtils get_struct__5532_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__5532_filter_values[11];
/****************************************************************
 ** array__5546
 ****************************************************************/
extern const char * array__5546_to_string(const void* pValue);
extern int check_array__5546_string(const char* strValue);
extern int string_to_array__5546(const char* strValue, void* pValue);
int is_array__5546_allow_double_convertion();
extern const char * get_array__5546_signature();
extern int compare_array__5546_type(int*, const char*, const void*);
#define array__5546_filter_size 4
extern FilterUtils get_array__5546_filter_utils(const char* strFilter, void* pValue);
#define array__5546_filter_values 0
/****************************************************************
 ** struct__5549
 ****************************************************************/
extern const char * struct__5549_to_string(const void* pValue);
extern int check_struct__5549_string(const char* strValue);
extern int string_to_struct__5549(const char* strValue, void* pValue);
int is_struct__5549_allow_double_convertion();
extern const char * get_struct__5549_signature();
extern int compare_struct__5549_type(int*, const char*, const void*);
#define struct__5549_filter_size 10
extern FilterUtils get_struct__5549_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__5549_filter_values[10];
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
 ** struct__5565
 ****************************************************************/
extern const char * struct__5565_to_string(const void* pValue);
extern int check_struct__5565_string(const char* strValue);
extern int string_to_struct__5565(const char* strValue, void* pValue);
int is_struct__5565_allow_double_convertion();
extern const char * get_struct__5565_signature();
extern int compare_struct__5565_type(int*, const char*, const void*);
#define struct__5565_filter_size 5
extern FilterUtils get_struct__5565_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__5565_filter_values[5];
/****************************************************************
 ** array__5573
 ****************************************************************/
extern const char * array__5573_to_string(const void* pValue);
extern int check_array__5573_string(const char* strValue);
extern int string_to_array__5573(const char* strValue, void* pValue);
int is_array__5573_allow_double_convertion();
extern const char * get_array__5573_signature();
extern int compare_array__5573_type(int*, const char*, const void*);
#define array__5573_filter_size 30
extern FilterUtils get_array__5573_filter_utils(const char* strFilter, void* pValue);
#define array__5573_filter_values 0
/****************************************************************
 ** struct__5576
 ****************************************************************/
extern const char * struct__5576_to_string(const void* pValue);
extern int check_struct__5576_string(const char* strValue);
extern int string_to_struct__5576(const char* strValue, void* pValue);
int is_struct__5576_allow_double_convertion();
extern const char * get_struct__5576_signature();
extern int compare_struct__5576_type(int*, const char*, const void*);
#define struct__5576_filter_size 2
extern FilterUtils get_struct__5576_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__5576_filter_values[2];
/****************************************************************
 ** struct__5581
 ****************************************************************/
extern const char * struct__5581_to_string(const void* pValue);
extern int check_struct__5581_string(const char* strValue);
extern int string_to_struct__5581(const char* strValue, void* pValue);
int is_struct__5581_allow_double_convertion();
extern const char * get_struct__5581_signature();
extern int compare_struct__5581_type(int*, const char*, const void*);
#define struct__5581_filter_size 8
extern FilterUtils get_struct__5581_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__5581_filter_values[8];
/****************************************************************
 ** array__5592
 ****************************************************************/
extern const char * array__5592_to_string(const void* pValue);
extern int check_array__5592_string(const char* strValue);
extern int string_to_array__5592(const char* strValue, void* pValue);
int is_array__5592_allow_double_convertion();
extern const char * get_array__5592_signature();
extern int compare_array__5592_type(int*, const char*, const void*);
#define array__5592_filter_size 33
extern FilterUtils get_array__5592_filter_utils(const char* strFilter, void* pValue);
#define array__5592_filter_values 0
/****************************************************************
 ** struct__5595
 ****************************************************************/
extern const char * struct__5595_to_string(const void* pValue);
extern int check_struct__5595_string(const char* strValue);
extern int string_to_struct__5595(const char* strValue, void* pValue);
int is_struct__5595_allow_double_convertion();
extern const char * get_struct__5595_signature();
extern int compare_struct__5595_type(int*, const char*, const void*);
#define struct__5595_filter_size 6
extern FilterUtils get_struct__5595_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__5595_filter_values[6];
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
 ** struct__5610
 ****************************************************************/
extern const char * struct__5610_to_string(const void* pValue);
extern int check_struct__5610_string(const char* strValue);
extern int string_to_struct__5610(const char* strValue, void* pValue);
int is_struct__5610_allow_double_convertion();
extern const char * get_struct__5610_signature();
extern int compare_struct__5610_type(int*, const char*, const void*);
#define struct__5610_filter_size 10
extern FilterUtils get_struct__5610_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__5610_filter_values[10];
/****************************************************************
 ** struct__5623
 ****************************************************************/
extern const char * struct__5623_to_string(const void* pValue);
extern int check_struct__5623_string(const char* strValue);
extern int string_to_struct__5623(const char* strValue, void* pValue);
int is_struct__5623_allow_double_convertion();
extern const char * get_struct__5623_signature();
extern int compare_struct__5623_type(int*, const char*, const void*);
#define struct__5623_filter_size 2
extern FilterUtils get_struct__5623_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__5623_filter_values[2];
/****************************************************************
 ** struct__5628
 ****************************************************************/
extern const char * struct__5628_to_string(const void* pValue);
extern int check_struct__5628_string(const char* strValue);
extern int string_to_struct__5628(const char* strValue, void* pValue);
int is_struct__5628_allow_double_convertion();
extern const char * get_struct__5628_signature();
extern int compare_struct__5628_type(int*, const char*, const void*);
#define struct__5628_filter_size 5
extern FilterUtils get_struct__5628_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__5628_filter_values[5];
/****************************************************************
 ** struct__5636
 ****************************************************************/
extern const char * struct__5636_to_string(const void* pValue);
extern int check_struct__5636_string(const char* strValue);
extern int string_to_struct__5636(const char* strValue, void* pValue);
int is_struct__5636_allow_double_convertion();
extern const char * get_struct__5636_signature();
extern int compare_struct__5636_type(int*, const char*, const void*);
#define struct__5636_filter_size 6
extern FilterUtils get_struct__5636_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__5636_filter_values[6];
/****************************************************************
 ** struct__5645
 ****************************************************************/
extern const char * struct__5645_to_string(const void* pValue);
extern int check_struct__5645_string(const char* strValue);
extern int string_to_struct__5645(const char* strValue, void* pValue);
int is_struct__5645_allow_double_convertion();
extern const char * get_struct__5645_signature();
extern int compare_struct__5645_type(int*, const char*, const void*);
#define struct__5645_filter_size 7
extern FilterUtils get_struct__5645_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__5645_filter_values[7];
/****************************************************************
 ** array__5655
 ****************************************************************/
extern const char * array__5655_to_string(const void* pValue);
extern int check_array__5655_string(const char* strValue);
extern int string_to_array__5655(const char* strValue, void* pValue);
int is_array__5655_allow_double_convertion();
extern const char * get_array__5655_signature();
extern int compare_array__5655_type(int*, const char*, const void*);
#define array__5655_filter_size 32
extern FilterUtils get_array__5655_filter_utils(const char* strFilter, void* pValue);
#define array__5655_filter_values 0
/****************************************************************
 ** struct__5658
 ****************************************************************/
extern const char * struct__5658_to_string(const void* pValue);
extern int check_struct__5658_string(const char* strValue);
extern int string_to_struct__5658(const char* strValue, void* pValue);
int is_struct__5658_allow_double_convertion();
extern const char * get_struct__5658_signature();
extern int compare_struct__5658_type(int*, const char*, const void*);
#define struct__5658_filter_size 14
extern FilterUtils get_struct__5658_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__5658_filter_values[14];
/****************************************************************
 ** array_int_7
 ****************************************************************/
extern const char * array_int_7_to_string(const void* pValue);
extern int check_array_int_7_string(const char* strValue);
extern int string_to_array_int_7(const char* strValue, void* pValue);
int is_array_int_7_allow_double_convertion();
extern const char * get_array_int_7_signature();
extern int compare_array_int_7_type(int*, const char*, const void*);
#define array_int_7_filter_size 7
extern FilterUtils get_array_int_7_filter_utils(const char* strFilter, void* pValue);
#define array_int_7_filter_values 0
/****************************************************************
 ** array_int_7_33
 ****************************************************************/
extern const char * array_int_7_33_to_string(const void* pValue);
extern int check_array_int_7_33_string(const char* strValue);
extern int string_to_array_int_7_33(const char* strValue, void* pValue);
int is_array_int_7_33_allow_double_convertion();
extern const char * get_array_int_7_33_signature();
extern int compare_array_int_7_33_type(int*, const char*, const void*);
#define array_int_7_33_filter_size 33
extern FilterUtils get_array_int_7_33_filter_utils(const char* strFilter, void* pValue);
#define array_int_7_33_filter_values 0
/****************************************************************
 ** array__5681
 ****************************************************************/
extern const char * array__5681_to_string(const void* pValue);
extern int check_array__5681_string(const char* strValue);
extern int string_to_array__5681(const char* strValue, void* pValue);
int is_array__5681_allow_double_convertion();
extern const char * get_array__5681_signature();
extern int compare_array__5681_type(int*, const char*, const void*);
#define array__5681_filter_size 33
extern FilterUtils get_array__5681_filter_utils(const char* strFilter, void* pValue);
#define array__5681_filter_values 0
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
 ** array_int_7_33_231
 ****************************************************************/
extern const char * array_int_7_33_231_to_string(const void* pValue);
extern int check_array_int_7_33_231_string(const char* strValue);
extern int string_to_array_int_7_33_231(const char* strValue, void* pValue);
int is_array_int_7_33_231_allow_double_convertion();
extern const char * get_array_int_7_33_231_signature();
extern int compare_array_int_7_33_231_type(int*, const char*, const void*);
#define array_int_7_33_231_filter_size 231
extern FilterUtils get_array_int_7_33_231_filter_utils(const char* strFilter, void* pValue);
#define array_int_7_33_231_filter_values 0
/****************************************************************
 ** array_int_271
 ****************************************************************/
extern const char * array_int_271_to_string(const void* pValue);
extern int check_array_int_271_string(const char* strValue);
extern int string_to_array_int_271(const char* strValue, void* pValue);
int is_array_int_271_allow_double_convertion();
extern const char * get_array_int_271_signature();
extern int compare_array_int_271_type(int*, const char*, const void*);
#define array_int_271_filter_size 271
extern FilterUtils get_array_int_271_filter_utils(const char* strFilter, void* pValue);
#define array_int_271_filter_values 0
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
 ** array_int_5
 ****************************************************************/
extern const char * array_int_5_to_string(const void* pValue);
extern int check_array_int_5_string(const char* strValue);
extern int string_to_array_int_5(const char* strValue, void* pValue);
int is_array_int_5_allow_double_convertion();
extern const char * get_array_int_5_signature();
extern int compare_array_int_5_type(int*, const char*, const void*);
#define array_int_5_filter_size 5
extern FilterUtils get_array_int_5_filter_utils(const char* strFilter, void* pValue);
#define array_int_5_filter_values 0
/****************************************************************
 ** array_int_229
 ****************************************************************/
extern const char * array_int_229_to_string(const void* pValue);
extern int check_array_int_229_string(const char* strValue);
extern int string_to_array_int_229(const char* strValue, void* pValue);
int is_array_int_229_allow_double_convertion();
extern const char * get_array_int_229_signature();
extern int compare_array_int_229_type(int*, const char*, const void*);
#define array_int_229_filter_size 229
extern FilterUtils get_array_int_229_filter_utils(const char* strFilter, void* pValue);
#define array_int_229_filter_values 0
/****************************************************************
 ** array__5705
 ****************************************************************/
extern const char * array__5705_to_string(const void* pValue);
extern int check_array__5705_string(const char* strValue);
extern int string_to_array__5705(const char* strValue, void* pValue);
int is_array__5705_allow_double_convertion();
extern const char * get_array__5705_signature();
extern int compare_array__5705_type(int*, const char*, const void*);
#define array__5705_filter_size 1
extern FilterUtils get_array__5705_filter_utils(const char* strFilter, void* pValue);
#define array__5705_filter_values 0
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
 ** array__5717
 ****************************************************************/
extern const char * array__5717_to_string(const void* pValue);
extern int check_array__5717_string(const char* strValue);
extern int string_to_array__5717(const char* strValue, void* pValue);
int is_array__5717_allow_double_convertion();
extern const char * get_array__5717_signature();
extern int compare_array__5717_type(int*, const char*, const void*);
#define array__5717_filter_size 4
extern FilterUtils get_array__5717_filter_utils(const char* strFilter, void* pValue);
#define array__5717_filter_values 0
/****************************************************************
 ** array__5720
 ****************************************************************/
extern const char * array__5720_to_string(const void* pValue);
extern int check_array__5720_string(const char* strValue);
extern int string_to_array__5720(const char* strValue, void* pValue);
int is_array__5720_allow_double_convertion();
extern const char * get_array__5720_signature();
extern int compare_array__5720_type(int*, const char*, const void*);
#define array__5720_filter_size 4
extern FilterUtils get_array__5720_filter_utils(const char* strFilter, void* pValue);
#define array__5720_filter_values 0
/****************************************************************
 ** array__5723
 ****************************************************************/
extern const char * array__5723_to_string(const void* pValue);
extern int check_array__5723_string(const char* strValue);
extern int string_to_array__5723(const char* strValue, void* pValue);
int is_array__5723_allow_double_convertion();
extern const char * get_array__5723_signature();
extern int compare_array__5723_type(int*, const char*, const void*);
#define array__5723_filter_size 4
extern FilterUtils get_array__5723_filter_utils(const char* strFilter, void* pValue);
#define array__5723_filter_values 0
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
 ** Q_UPDOWN
 ****************************************************************/
extern const char * Q_UPDOWN_to_string(const void* pValue);
extern int check_Q_UPDOWN_string(const char* strValue);
extern int string_to_Q_UPDOWN(const char* strValue, void* pValue);
int is_Q_UPDOWN_allow_double_convertion();
extern int Q_UPDOWN_to_double(double * nValue, const void*);
extern const char * get_Q_UPDOWN_signature();
extern int compare_Q_UPDOWN_type(int*, const char*, const void*);
#define Q_UPDOWN_filter_size 0
#define get_Q_UPDOWN_filter_utils 0
#define Q_UPDOWN_filter_values 0
/****************************************************************
 ** M_VERSION
 ****************************************************************/
extern const char * M_VERSION_to_string(const void* pValue);
extern int check_M_VERSION_string(const char* strValue);
extern int string_to_M_VERSION(const char* strValue, void* pValue);
int is_M_VERSION_allow_double_convertion();
extern int M_VERSION_to_double(double * nValue, const void*);
extern const char * get_M_VERSION_signature();
extern int compare_M_VERSION_type(int*, const char*, const void*);
#define M_VERSION_filter_size 0
#define get_M_VERSION_filter_utils 0
#define M_VERSION_filter_values 0
/****************************************************************
 ** Q_MEDIA
 ****************************************************************/
extern const char * Q_MEDIA_to_string(const void* pValue);
extern int check_Q_MEDIA_string(const char* strValue);
extern int string_to_Q_MEDIA(const char* strValue, void* pValue);
int is_Q_MEDIA_allow_double_convertion();
extern int Q_MEDIA_to_double(double * nValue, const void*);
extern const char * get_Q_MEDIA_signature();
extern int compare_Q_MEDIA_type(int*, const char*, const void*);
#define Q_MEDIA_filter_size 0
#define get_Q_MEDIA_filter_utils 0
#define Q_MEDIA_filter_values 0
/****************************************************************
 ** N_PIG
 ****************************************************************/
extern const char * N_PIG_to_string(const void* pValue);
extern int check_N_PIG_string(const char* strValue);
extern int string_to_N_PIG(const char* strValue, void* pValue);
int is_N_PIG_allow_double_convertion();
extern int N_PIG_to_double(double * nValue, const void*);
extern const char * get_N_PIG_signature();
extern int compare_N_PIG_type(int*, const char*, const void*);
#define N_PIG_filter_size 0
#define get_N_PIG_filter_utils 0
#define N_PIG_filter_values 0
/****************************************************************
 ** N_TOTAL
 ****************************************************************/
extern const char * N_TOTAL_to_string(const void* pValue);
extern int check_N_TOTAL_string(const char* strValue);
extern int string_to_N_TOTAL(const char* strValue, void* pValue);
int is_N_TOTAL_allow_double_convertion();
extern int N_TOTAL_to_double(double * nValue, const void*);
extern const char * get_N_TOTAL_signature();
extern int compare_N_TOTAL_type(int*, const char*, const void*);
#define N_TOTAL_filter_size 0
#define get_N_TOTAL_filter_utils 0
#define N_TOTAL_filter_values 0
/****************************************************************
 ** M_DUP
 ****************************************************************/
extern const char * M_DUP_to_string(const void* pValue);
extern int check_M_DUP_string(const char* strValue);
extern int string_to_M_DUP(const char* strValue, void* pValue);
int is_M_DUP_allow_double_convertion();
extern int M_DUP_to_double(double * nValue, const void*);
extern const char * get_M_DUP_signature();
extern int compare_M_DUP_type(int*, const char*, const void*);
#define M_DUP_filter_size 0
#define get_M_DUP_filter_utils 0
#define M_DUP_filter_values 0
/****************************************************************
 ** M_MCOUNT
 ****************************************************************/
extern const char * M_MCOUNT_to_string(const void* pValue);
extern int check_M_MCOUNT_string(const char* strValue);
extern int string_to_M_MCOUNT(const char* strValue, void* pValue);
int is_M_MCOUNT_allow_double_convertion();
extern int M_MCOUNT_to_double(double * nValue, const void*);
#define get_M_MCOUNT_signature get_kcg_int_signature
#define compare_M_MCOUNT_type compare_kcg_int_type
#define M_MCOUNT_filter_size kcg_int_filter_size
#define get_M_MCOUNT_filter_utils get_kcg_int_filter_utils
#define M_MCOUNT_filter_values kcg_int_filter_values
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
 ** Q_LINK
 ****************************************************************/
extern const char * Q_LINK_to_string(const void* pValue);
extern int check_Q_LINK_string(const char* strValue);
extern int string_to_Q_LINK(const char* strValue, void* pValue);
int is_Q_LINK_allow_double_convertion();
extern int Q_LINK_to_double(double * nValue, const void*);
extern const char * get_Q_LINK_signature();
extern int compare_Q_LINK_type(int*, const char*, const void*);
#define Q_LINK_filter_size 0
#define get_Q_LINK_filter_utils 0
#define Q_LINK_filter_values 0
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
 ** B_data_internal_FirstTest_InfraLibInt
 ****************************************************************/
extern const char * B_data_internal_FirstTest_InfraLibInt_to_string(const void* pValue);
extern int check_B_data_internal_FirstTest_InfraLibInt_string(const char* strValue);
extern int string_to_B_data_internal_FirstTest_InfraLibInt(const char* strValue, void* pValue);
int is_B_data_internal_FirstTest_InfraLibInt_allow_double_convertion();
extern int B_data_internal_FirstTest_InfraLibInt_to_double(double * nValue, const void*);
#define get_B_data_internal_FirstTest_InfraLibInt_signature get_struct__5636_signature
#define compare_B_data_internal_FirstTest_InfraLibInt_type compare_struct__5636_type
#define B_data_internal_FirstTest_InfraLibInt_filter_size struct__5636_filter_size
#define get_B_data_internal_FirstTest_InfraLibInt_filter_utils get_struct__5636_filter_utils
#define B_data_internal_FirstTest_InfraLibInt_filter_values struct__5636_filter_values
/****************************************************************
 ** CompressedBaliseMessage_TM
 ****************************************************************/
extern const char * CompressedBaliseMessage_TM_to_string(const void* pValue);
extern int check_CompressedBaliseMessage_TM_string(const char* strValue);
extern int string_to_CompressedBaliseMessage_TM(const char* strValue, void* pValue);
int is_CompressedBaliseMessage_TM_allow_double_convertion();
extern int CompressedBaliseMessage_TM_to_double(double * nValue, const void*);
#define get_CompressedBaliseMessage_TM_signature get_struct__5623_signature
#define compare_CompressedBaliseMessage_TM_type compare_struct__5623_type
#define CompressedBaliseMessage_TM_filter_size struct__5623_filter_size
#define get_CompressedBaliseMessage_TM_filter_utils get_struct__5623_filter_utils
#define CompressedBaliseMessage_TM_filter_values struct__5623_filter_values
/****************************************************************
 ** BaliseTelegramHeader_int_T_TM
 ****************************************************************/
extern const char * BaliseTelegramHeader_int_T_TM_to_string(const void* pValue);
extern int check_BaliseTelegramHeader_int_T_TM_string(const char* strValue);
extern int string_to_BaliseTelegramHeader_int_T_TM(const char* strValue, void* pValue);
int is_BaliseTelegramHeader_int_T_TM_allow_double_convertion();
extern int BaliseTelegramHeader_int_T_TM_to_double(double * nValue, const void*);
#define get_BaliseTelegramHeader_int_T_TM_signature get_struct__5610_signature
#define compare_BaliseTelegramHeader_int_T_TM_type compare_struct__5610_type
#define BaliseTelegramHeader_int_T_TM_filter_size struct__5610_filter_size
#define get_BaliseTelegramHeader_int_T_TM_filter_utils get_struct__5610_filter_utils
#define BaliseTelegramHeader_int_T_TM_filter_values struct__5610_filter_values
/****************************************************************
 ** OrBG_TM
 ****************************************************************/
extern const char * OrBG_TM_to_string(const void* pValue);
extern int check_OrBG_TM_string(const char* strValue);
extern int string_to_OrBG_TM(const char* strValue, void* pValue);
int is_OrBG_TM_allow_double_convertion();
extern int OrBG_TM_to_double(double * nValue, const void*);
extern const char * get_OrBG_TM_signature();
extern int compare_OrBG_TM_type(int*, const char*, const void*);
#define OrBG_TM_filter_size 0
#define get_OrBG_TM_filter_utils 0
#define OrBG_TM_filter_values 0
/****************************************************************
 ** OrLine_TM
 ****************************************************************/
extern const char * OrLine_TM_to_string(const void* pValue);
extern int check_OrLine_TM_string(const char* strValue);
extern int string_to_OrLine_TM(const char* strValue, void* pValue);
int is_OrLine_TM_allow_double_convertion();
extern int OrLine_TM_to_double(double * nValue, const void*);
extern const char * get_OrLine_TM_signature();
extern int compare_OrLine_TM_type(int*, const char*, const void*);
#define OrLine_TM_filter_size 0
#define get_OrLine_TM_filter_utils 0
#define OrLine_TM_filter_values 0
/****************************************************************
 ** P005_trackside_int_T_TM
 ****************************************************************/
extern const char * P005_trackside_int_T_TM_to_string(const void* pValue);
extern int check_P005_trackside_int_T_TM_string(const char* strValue);
extern int string_to_P005_trackside_int_T_TM(const char* strValue, void* pValue);
int is_P005_trackside_int_T_TM_allow_double_convertion();
extern int P005_trackside_int_T_TM_to_double(double * nValue, const void*);
#define get_P005_trackside_int_T_TM_signature get_struct__5658_signature
#define compare_P005_trackside_int_T_TM_type compare_struct__5658_type
#define P005_trackside_int_T_TM_filter_size struct__5658_filter_size
#define get_P005_trackside_int_T_TM_filter_utils get_struct__5658_filter_utils
#define P005_trackside_int_T_TM_filter_values struct__5658_filter_values
/****************************************************************
 ** P005_trackide_sectionlist_T_TM
 ****************************************************************/
extern const char * P005_trackide_sectionlist_T_TM_to_string(const void* pValue);
extern int check_P005_trackide_sectionlist_T_TM_string(const char* strValue);
extern int string_to_P005_trackide_sectionlist_T_TM(const char* strValue, void* pValue);
int is_P005_trackide_sectionlist_T_TM_allow_double_convertion();
extern int P005_trackide_sectionlist_T_TM_to_double(double * nValue, const void*);
#define get_P005_trackide_sectionlist_T_TM_signature get_array__5655_signature
#define compare_P005_trackide_sectionlist_T_TM_type compare_array__5655_type
#define P005_trackide_sectionlist_T_TM_filter_size array__5655_filter_size
#define get_P005_trackide_sectionlist_T_TM_filter_utils get_array__5655_filter_utils
#define P005_trackide_sectionlist_T_TM_filter_values array__5655_filter_values
/****************************************************************
 ** P005_section_int_T_TM
 ****************************************************************/
extern const char * P005_section_int_T_TM_to_string(const void* pValue);
extern int check_P005_section_int_T_TM_string(const char* strValue);
extern int string_to_P005_section_int_T_TM(const char* strValue, void* pValue);
int is_P005_section_int_T_TM_allow_double_convertion();
extern int P005_section_int_T_TM_to_double(double * nValue, const void*);
#define get_P005_section_int_T_TM_signature get_struct__5645_signature
#define compare_P005_section_int_T_TM_type compare_struct__5645_type
#define P005_section_int_T_TM_filter_size struct__5645_filter_size
#define get_P005_section_int_T_TM_filter_utils get_struct__5645_filter_utils
#define P005_section_int_T_TM_filter_values struct__5645_filter_values
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
 ** P005_OBU_sectionlist_array_T_TM
 ****************************************************************/
extern const char * P005_OBU_sectionlist_array_T_TM_to_string(const void* pValue);
extern int check_P005_OBU_sectionlist_array_T_TM_string(const char* strValue);
extern int string_to_P005_OBU_sectionlist_array_T_TM(const char* strValue, void* pValue);
int is_P005_OBU_sectionlist_array_T_TM_allow_double_convertion();
extern int P005_OBU_sectionlist_array_T_TM_to_double(double * nValue, const void*);
#define get_P005_OBU_sectionlist_array_T_TM_signature get_array_int_7_33_signature
#define compare_P005_OBU_sectionlist_array_T_TM_type compare_array_int_7_33_type
#define P005_OBU_sectionlist_array_T_TM_filter_size array_int_7_33_filter_size
#define get_P005_OBU_sectionlist_array_T_TM_filter_utils get_array_int_7_33_filter_utils
#define P005_OBU_sectionlist_array_T_TM_filter_values array_int_7_33_filter_values
/****************************************************************
 ** P005_section_array_T_TM
 ****************************************************************/
extern const char * P005_section_array_T_TM_to_string(const void* pValue);
extern int check_P005_section_array_T_TM_string(const char* strValue);
extern int string_to_P005_section_array_T_TM(const char* strValue, void* pValue);
int is_P005_section_array_T_TM_allow_double_convertion();
extern int P005_section_array_T_TM_to_double(double * nValue, const void*);
#define get_P005_section_array_T_TM_signature get_array_int_7_signature
#define compare_P005_section_array_T_TM_type compare_array_int_7_type
#define P005_section_array_T_TM_filter_size array_int_7_filter_size
#define get_P005_section_array_T_TM_filter_utils get_array_int_7_filter_utils
#define P005_section_array_T_TM_filter_values array_int_7_filter_values
/****************************************************************
 ** P005_OBU_sectionlist_int_T_TM
 ****************************************************************/
extern const char * P005_OBU_sectionlist_int_T_TM_to_string(const void* pValue);
extern int check_P005_OBU_sectionlist_int_T_TM_string(const char* strValue);
extern int string_to_P005_OBU_sectionlist_int_T_TM(const char* strValue, void* pValue);
int is_P005_OBU_sectionlist_int_T_TM_allow_double_convertion();
extern int P005_OBU_sectionlist_int_T_TM_to_double(double * nValue, const void*);
#define get_P005_OBU_sectionlist_int_T_TM_signature get_array__5681_signature
#define compare_P005_OBU_sectionlist_int_T_TM_type compare_array__5681_type
#define P005_OBU_sectionlist_int_T_TM_filter_size array__5681_filter_size
#define get_P005_OBU_sectionlist_int_T_TM_filter_utils get_array__5681_filter_utils
#define P005_OBU_sectionlist_int_T_TM_filter_values array__5681_filter_values
/****************************************************************
 ** BaliseGroupData_TM
 ****************************************************************/
extern const char * BaliseGroupData_TM_to_string(const void* pValue);
extern int check_BaliseGroupData_TM_string(const char* strValue);
extern int string_to_BaliseGroupData_TM(const char* strValue, void* pValue);
int is_BaliseGroupData_TM_allow_double_convertion();
extern int BaliseGroupData_TM_to_double(double * nValue, const void*);
#define get_BaliseGroupData_TM_signature get_struct__5628_signature
#define compare_BaliseGroupData_TM_type compare_struct__5628_type
#define BaliseGroupData_TM_filter_size struct__5628_filter_size
#define get_BaliseGroupData_TM_filter_utils get_struct__5628_filter_utils
#define BaliseGroupData_TM_filter_values struct__5628_filter_values
/****************************************************************
 ** P005_section_enum_T_TM
 ****************************************************************/
extern const char * P005_section_enum_T_TM_to_string(const void* pValue);
extern int check_P005_section_enum_T_TM_string(const char* strValue);
extern int string_to_P005_section_enum_T_TM(const char* strValue, void* pValue);
int is_P005_section_enum_T_TM_allow_double_convertion();
extern int P005_section_enum_T_TM_to_double(double * nValue, const void*);
#define get_P005_section_enum_T_TM_signature get_struct__5581_signature
#define compare_P005_section_enum_T_TM_type compare_struct__5581_type
#define P005_section_enum_T_TM_filter_size struct__5581_filter_size
#define get_P005_section_enum_T_TM_filter_utils get_struct__5581_filter_utils
#define P005_section_enum_T_TM_filter_values struct__5581_filter_values
/****************************************************************
 ** P005_OBU_sectionlist_enum_T_TM
 ****************************************************************/
extern const char * P005_OBU_sectionlist_enum_T_TM_to_string(const void* pValue);
extern int check_P005_OBU_sectionlist_enum_T_TM_string(const char* strValue);
extern int string_to_P005_OBU_sectionlist_enum_T_TM(const char* strValue, void* pValue);
int is_P005_OBU_sectionlist_enum_T_TM_allow_double_convertion();
extern int P005_OBU_sectionlist_enum_T_TM_to_double(double * nValue, const void*);
#define get_P005_OBU_sectionlist_enum_T_TM_signature get_array__5592_signature
#define compare_P005_OBU_sectionlist_enum_T_TM_type compare_array__5592_type
#define P005_OBU_sectionlist_enum_T_TM_filter_size array__5592_filter_size
#define get_P005_OBU_sectionlist_enum_T_TM_filter_utils get_array__5592_filter_utils
#define P005_OBU_sectionlist_enum_T_TM_filter_values array__5592_filter_values
/****************************************************************
 ** P005_OBU_T_TM
 ****************************************************************/
extern const char * P005_OBU_T_TM_to_string(const void* pValue);
extern int check_P005_OBU_T_TM_string(const char* strValue);
extern int string_to_P005_OBU_T_TM(const char* strValue, void* pValue);
int is_P005_OBU_T_TM_allow_double_convertion();
extern int P005_OBU_T_TM_to_double(double * nValue, const void*);
#define get_P005_OBU_T_TM_signature get_struct__5595_signature
#define compare_P005_OBU_T_TM_type compare_struct__5595_type
#define P005_OBU_T_TM_filter_size struct__5595_filter_size
#define get_P005_OBU_T_TM_filter_utils get_struct__5595_filter_utils
#define P005_OBU_T_TM_filter_values struct__5595_filter_values
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
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
extern const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_CompressedPackets_T_Common_Types_Pkg_signature get_struct__5576_signature
#define compare_CompressedPackets_T_Common_Types_Pkg_type compare_struct__5576_type
#define CompressedPackets_T_Common_Types_Pkg_filter_size struct__5576_filter_size
#define get_CompressedPackets_T_Common_Types_Pkg_filter_utils get_struct__5576_filter_utils
#define CompressedPackets_T_Common_Types_Pkg_filter_values struct__5576_filter_values
/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
extern const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_Metadata_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
extern int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_Metadata_T_Common_Types_Pkg_signature get_array__5573_signature
#define compare_Metadata_T_Common_Types_Pkg_type compare_array__5573_type
#define Metadata_T_Common_Types_Pkg_filter_size array__5573_filter_size
#define get_Metadata_T_Common_Types_Pkg_filter_utils get_array__5573_filter_utils
#define Metadata_T_Common_Types_Pkg_filter_values array__5573_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__5565_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__5565_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__5565_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__5565_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__5565_filter_values
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
 ** BaliseGroupData_Basics
 ****************************************************************/
extern const char * BaliseGroupData_Basics_to_string(const void* pValue);
extern int check_BaliseGroupData_Basics_string(const char* strValue);
extern int string_to_BaliseGroupData_Basics(const char* strValue, void* pValue);
int is_BaliseGroupData_Basics_allow_double_convertion();
extern int BaliseGroupData_Basics_to_double(double * nValue, const void*);
#define get_BaliseGroupData_Basics_signature get_struct__5628_signature
#define compare_BaliseGroupData_Basics_type compare_struct__5628_type
#define BaliseGroupData_Basics_filter_size struct__5628_filter_size
#define get_BaliseGroupData_Basics_filter_utils get_struct__5628_filter_utils
#define BaliseGroupData_Basics_filter_values struct__5628_filter_values
/****************************************************************
 ** B_data_internal_T_InfraLib
 ****************************************************************/
extern const char * B_data_internal_T_InfraLib_to_string(const void* pValue);
extern int check_B_data_internal_T_InfraLib_string(const char* strValue);
extern int string_to_B_data_internal_T_InfraLib(const char* strValue, void* pValue);
int is_B_data_internal_T_InfraLib_allow_double_convertion();
extern int B_data_internal_T_InfraLib_to_double(double * nValue, const void*);
#define get_B_data_internal_T_InfraLib_signature get_struct__5636_signature
#define compare_B_data_internal_T_InfraLib_type compare_struct__5636_type
#define B_data_internal_T_InfraLib_filter_size struct__5636_filter_size
#define get_B_data_internal_T_InfraLib_filter_utils get_struct__5636_filter_utils
#define B_data_internal_T_InfraLib_filter_values struct__5636_filter_values
/****************************************************************
 ** TelegramHeader_T_BG_Types_Pkg
 ****************************************************************/
extern const char * TelegramHeader_T_BG_Types_Pkg_to_string(const void* pValue);
extern int check_TelegramHeader_T_BG_Types_Pkg_string(const char* strValue);
extern int string_to_TelegramHeader_T_BG_Types_Pkg(const char* strValue, void* pValue);
int is_TelegramHeader_T_BG_Types_Pkg_allow_double_convertion();
extern int TelegramHeader_T_BG_Types_Pkg_to_double(double * nValue, const void*);
#define get_TelegramHeader_T_BG_Types_Pkg_signature get_struct__5549_signature
#define compare_TelegramHeader_T_BG_Types_Pkg_type compare_struct__5549_type
#define TelegramHeader_T_BG_Types_Pkg_filter_size struct__5549_filter_size
#define get_TelegramHeader_T_BG_Types_Pkg_filter_utils get_struct__5549_filter_utils
#define TelegramHeader_T_BG_Types_Pkg_filter_values struct__5549_filter_values
/****************************************************************
 ** LinkedBG_T_BG_Types_Pkg
 ****************************************************************/
extern const char * LinkedBG_T_BG_Types_Pkg_to_string(const void* pValue);
extern int check_LinkedBG_T_BG_Types_Pkg_string(const char* strValue);
extern int string_to_LinkedBG_T_BG_Types_Pkg(const char* strValue, void* pValue);
int is_LinkedBG_T_BG_Types_Pkg_allow_double_convertion();
extern int LinkedBG_T_BG_Types_Pkg_to_double(double * nValue, const void*);
#define get_LinkedBG_T_BG_Types_Pkg_signature get_struct__5532_signature
#define compare_LinkedBG_T_BG_Types_Pkg_type compare_struct__5532_type
#define LinkedBG_T_BG_Types_Pkg_filter_size struct__5532_filter_size
#define get_LinkedBG_T_BG_Types_Pkg_filter_utils get_struct__5532_filter_utils
#define LinkedBG_T_BG_Types_Pkg_filter_values struct__5532_filter_values
/****************************************************************
 ** LinkedBGs_T_BG_Types_Pkg
 ****************************************************************/
extern const char * LinkedBGs_T_BG_Types_Pkg_to_string(const void* pValue);
extern int check_LinkedBGs_T_BG_Types_Pkg_string(const char* strValue);
extern int string_to_LinkedBGs_T_BG_Types_Pkg(const char* strValue, void* pValue);
int is_LinkedBGs_T_BG_Types_Pkg_allow_double_convertion();
extern int LinkedBGs_T_BG_Types_Pkg_to_double(double * nValue, const void*);
#define get_LinkedBGs_T_BG_Types_Pkg_signature get_array__5546_signature
#define compare_LinkedBGs_T_BG_Types_Pkg_type compare_array__5546_type
#define LinkedBGs_T_BG_Types_Pkg_filter_size array__5546_filter_size
#define get_LinkedBGs_T_BG_Types_Pkg_filter_utils get_array__5546_filter_utils
#define LinkedBGs_T_BG_Types_Pkg_filter_values array__5546_filter_values

#endif /*TESTSTORY00A_P005_INTERNAL_TYPES_CONVERTION */
