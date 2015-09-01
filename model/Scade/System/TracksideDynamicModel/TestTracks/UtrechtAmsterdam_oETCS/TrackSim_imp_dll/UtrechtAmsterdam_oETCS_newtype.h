#ifndef UTRECHTAMSTERDAM_OETCS_TYPES_CONVERSION
#define UTRECHTAMSTERDAM_OETCS_TYPES_CONVERSION

#include "NewSmuTypes.h"

/****************************************************************
 ** kcg_real 
 ****************************************************************/
extern int kcg_real_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_real_string(const char *str, char **endptr);
extern int string_to_kcg_real(const char *str, void *pValue, char **endptr);
extern int is_kcg_real_allow_double_conversion();
extern int kcg_real_to_double(const void *pValue, double *nValue);
extern int get_kcg_real_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_real(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_real_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_real_Utils;

/****************************************************************
 ** kcg_bool 
 ****************************************************************/
extern int kcg_bool_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_bool_string(const char *str, char **endptr);
extern int string_to_kcg_bool(const char *str, void *pValue, char **endptr);
extern int is_kcg_bool_allow_double_conversion();
extern int kcg_bool_to_double(const void *pValue, double *nValue);
extern int get_kcg_bool_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_bool(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_bool_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_bool_Utils;

/****************************************************************
 ** kcg_char 
 ****************************************************************/
extern int kcg_char_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_char_string(const char *str, char **endptr);
extern int string_to_kcg_char(const char *str, void *pValue, char **endptr);
extern int is_kcg_char_allow_double_conversion();
extern int kcg_char_to_double(const void *pValue, double *nValue);
extern int get_kcg_char_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_char(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_char_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_char_Utils;

/****************************************************************
 ** kcg_int 
 ****************************************************************/
extern int kcg_int_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_int_string(const char *str, char **endptr);
extern int string_to_kcg_int(const char *str, void *pValue, char **endptr);
extern int is_kcg_int_allow_double_conversion();
extern int kcg_int_to_double(const void *pValue, double *nValue);
extern int get_kcg_int_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_int(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_int_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_int_Utils;

/****************************************************************
 ** UAB_struct__2619 
 ****************************************************************/
extern int UAB_struct__2619_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__2619_string(const char *str, char **endptr);
extern int string_to_UAB_struct__2619(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__2619_allow_double_conversion();
extern int UAB_struct__2619_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__2619_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__2619(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__2619_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__2619_Utils;

/****************************************************************
 ** UAB_array__2626 
 ****************************************************************/
extern int UAB_array__2626_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array__2626_string(const char *str, char **endptr);
extern int string_to_UAB_array__2626(const char *str, void *pValue, char **endptr);
extern int is_UAB_array__2626_allow_double_conversion();
extern int UAB_array__2626_to_double(const void *pValue, double *nValue);
extern int get_UAB_array__2626_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array__2626(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array__2626_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array__2626_Utils;

/****************************************************************
 ** UAB_struct__2629 
 ****************************************************************/
extern int UAB_struct__2629_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__2629_string(const char *str, char **endptr);
extern int string_to_UAB_struct__2629(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__2629_allow_double_conversion();
extern int UAB_struct__2629_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__2629_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__2629(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__2629_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__2629_Utils;

/****************************************************************
 ** UAB_array_int_500 
 ****************************************************************/
extern int UAB_array_int_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_500_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_500(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_500_allow_double_conversion();
extern int UAB_array_int_500_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_500(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_500_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_500_Utils;

/****************************************************************
 ** UAB_struct__2659 
 ****************************************************************/
extern int UAB_struct__2659_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__2659_string(const char *str, char **endptr);
extern int string_to_UAB_struct__2659(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__2659_allow_double_conversion();
extern int UAB_struct__2659_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__2659_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__2659(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__2659_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__2659_Utils;

/****************************************************************
 ** UAB_array_int_4 
 ****************************************************************/
extern int UAB_array_int_4_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_4_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_4(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_4_allow_double_conversion();
extern int UAB_array_int_4_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_4_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_4(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_4_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_4_Utils;

/****************************************************************
 ** UAB_array_int_4_32 
 ****************************************************************/
extern int UAB_array_int_4_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_4_32_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_4_32(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_4_32_allow_double_conversion();
extern int UAB_array_int_4_32_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_4_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_4_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_4_32_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_4_32_Utils;

/****************************************************************
 ** UAB_array_int_128 
 ****************************************************************/
extern int UAB_array_int_128_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_128_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_128(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_128_allow_double_conversion();
extern int UAB_array_int_128_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_128_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_128(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_128_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_128_Utils;

/****************************************************************
 ** UAB_array__2676 
 ****************************************************************/
extern int UAB_array__2676_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array__2676_string(const char *str, char **endptr);
extern int string_to_UAB_array__2676(const char *str, void *pValue, char **endptr);
extern int is_UAB_array__2676_allow_double_conversion();
extern int UAB_array__2676_to_double(const void *pValue, double *nValue);
extern int get_UAB_array__2676_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array__2676(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array__2676_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array__2676_Utils;

/****************************************************************
 ** UAB_struct__2679 
 ****************************************************************/
extern int UAB_struct__2679_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__2679_string(const char *str, char **endptr);
extern int string_to_UAB_struct__2679(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__2679_allow_double_conversion();
extern int UAB_struct__2679_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__2679_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__2679(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__2679_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__2679_Utils;

/****************************************************************
 ** UAB_struct__2684 
 ****************************************************************/
extern int UAB_struct__2684_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__2684_string(const char *str, char **endptr);
extern int string_to_UAB_struct__2684(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__2684_allow_double_conversion();
extern int UAB_struct__2684_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__2684_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__2684(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__2684_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__2684_Utils;

/****************************************************************
 ** UAB_array__2692 
 ****************************************************************/
extern int UAB_array__2692_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array__2692_string(const char *str, char **endptr);
extern int string_to_UAB_array__2692(const char *str, void *pValue, char **endptr);
extern int is_UAB_array__2692_allow_double_conversion();
extern int UAB_array__2692_to_double(const void *pValue, double *nValue);
extern int get_UAB_array__2692_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array__2692(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array__2692_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array__2692_Utils;

/****************************************************************
 ** UAB_struct__2695 
 ****************************************************************/
extern int UAB_struct__2695_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_struct__2695_string(const char *str, char **endptr);
extern int string_to_UAB_struct__2695(const char *str, void *pValue, char **endptr);
extern int is_UAB_struct__2695_allow_double_conversion();
extern int UAB_struct__2695_to_double(const void *pValue, double *nValue);
extern int get_UAB_struct__2695_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_struct__2695(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_struct__2695_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_struct__2695_Utils;

/****************************************************************
 ** UAB_array_int_15 
 ****************************************************************/
extern int UAB_array_int_15_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_15_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_15(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_15_allow_double_conversion();
extern int UAB_array_int_15_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_15_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_15(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_15_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_15_Utils;

/****************************************************************
 ** UAB_array_int_6 
 ****************************************************************/
extern int UAB_array_int_6_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_6_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_6(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_6_allow_double_conversion();
extern int UAB_array_int_6_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_6_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_6(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_6_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_6_Utils;

/****************************************************************
 ** UAB_array_int_350 
 ****************************************************************/
extern int UAB_array_int_350_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_array_int_350_string(const char *str, char **endptr);
extern int string_to_UAB_array_int_350(const char *str, void *pValue, char **endptr);
extern int is_UAB_array_int_350_allow_double_conversion();
extern int UAB_array_int_350_to_double(const void *pValue, double *nValue);
extern int get_UAB_array_int_350_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_array_int_350(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_array_int_350_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_array_int_350_Utils;

/****************************************************************
 ** UAB_NID_PACKET 
 ****************************************************************/
extern int UAB_NID_PACKET_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_NID_PACKET_string(const char *str, char **endptr);
extern int string_to_UAB_NID_PACKET(const char *str, void *pValue, char **endptr);
extern int is_UAB_NID_PACKET_allow_double_conversion();
extern int UAB_NID_PACKET_to_double(const void *pValue, double *nValue);
extern int get_UAB_NID_PACKET_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_NID_PACKET(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_NID_PACKET_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_NID_PACKET_Utils;

/****************************************************************
 ** UAB_Q_DIR 
 ****************************************************************/
extern int UAB_Q_DIR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_Q_DIR_string(const char *str, char **endptr);
extern int string_to_UAB_Q_DIR(const char *str, void *pValue, char **endptr);
extern int is_UAB_Q_DIR_allow_double_conversion();
extern int UAB_Q_DIR_to_double(const void *pValue, double *nValue);
extern int get_UAB_Q_DIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_Q_DIR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_Q_DIR_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_Q_DIR_Utils;

/****************************************************************
 ** UAB_D_DP 
 ****************************************************************/
extern int UAB_D_DP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_D_DP_string(const char *str, char **endptr);
extern int string_to_UAB_D_DP(const char *str, void *pValue, char **endptr);
extern int is_UAB_D_DP_allow_double_conversion();
extern int UAB_D_DP_to_double(const void *pValue, double *nValue);
extern int get_UAB_D_DP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_D_DP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_D_DP_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_D_DP_Utils;

/****************************************************************
 ** UAB_D_OL 
 ****************************************************************/
extern int UAB_D_OL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_D_OL_string(const char *str, char **endptr);
extern int string_to_UAB_D_OL(const char *str, void *pValue, char **endptr);
extern int is_UAB_D_OL_allow_double_conversion();
extern int UAB_D_OL_to_double(const void *pValue, double *nValue);
extern int get_UAB_D_OL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_D_OL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_D_OL_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_D_OL_Utils;

/****************************************************************
 ** UAB_V_LOA 
 ****************************************************************/
extern int UAB_V_LOA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_V_LOA_string(const char *str, char **endptr);
extern int string_to_UAB_V_LOA(const char *str, void *pValue, char **endptr);
extern int is_UAB_V_LOA_allow_double_conversion();
extern int UAB_V_LOA_to_double(const void *pValue, double *nValue);
extern int get_UAB_V_LOA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_V_LOA(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_V_LOA_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_V_LOA_Utils;

/****************************************************************
 ** UAB_T_ENDTIMER 
 ****************************************************************/
extern int UAB_T_ENDTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_T_ENDTIMER_string(const char *str, char **endptr);
extern int string_to_UAB_T_ENDTIMER(const char *str, void *pValue, char **endptr);
extern int is_UAB_T_ENDTIMER_allow_double_conversion();
extern int UAB_T_ENDTIMER_to_double(const void *pValue, double *nValue);
extern int get_UAB_T_ENDTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_T_ENDTIMER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_T_ENDTIMER_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_T_ENDTIMER_Utils;

/****************************************************************
 ** UAB_L_SECTION 
 ****************************************************************/
extern int UAB_L_SECTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_L_SECTION_string(const char *str, char **endptr);
extern int string_to_UAB_L_SECTION(const char *str, void *pValue, char **endptr);
extern int is_UAB_L_SECTION_allow_double_conversion();
extern int UAB_L_SECTION_to_double(const void *pValue, double *nValue);
extern int get_UAB_L_SECTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_L_SECTION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_L_SECTION_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_L_SECTION_Utils;

/****************************************************************
 ** UAB_Q_SECTIONTIMER 
 ****************************************************************/
extern int UAB_Q_SECTIONTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_Q_SECTIONTIMER_string(const char *str, char **endptr);
extern int string_to_UAB_Q_SECTIONTIMER(const char *str, void *pValue, char **endptr);
extern int is_UAB_Q_SECTIONTIMER_allow_double_conversion();
extern int UAB_Q_SECTIONTIMER_to_double(const void *pValue, double *nValue);
extern int get_UAB_Q_SECTIONTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_Q_SECTIONTIMER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_Q_SECTIONTIMER_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_Q_SECTIONTIMER_Utils;

/****************************************************************
 ** UAB_T_SECTIONTIMER 
 ****************************************************************/
extern int UAB_T_SECTIONTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_T_SECTIONTIMER_string(const char *str, char **endptr);
extern int string_to_UAB_T_SECTIONTIMER(const char *str, void *pValue, char **endptr);
extern int is_UAB_T_SECTIONTIMER_allow_double_conversion();
extern int UAB_T_SECTIONTIMER_to_double(const void *pValue, double *nValue);
extern int get_UAB_T_SECTIONTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_T_SECTIONTIMER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_T_SECTIONTIMER_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_T_SECTIONTIMER_Utils;

/****************************************************************
 ** UAB_D_SECTIONTIMERSTOPLOC 
 ****************************************************************/
extern int UAB_D_SECTIONTIMERSTOPLOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_D_SECTIONTIMERSTOPLOC_string(const char *str, char **endptr);
extern int string_to_UAB_D_SECTIONTIMERSTOPLOC(const char *str, void *pValue, char **endptr);
extern int is_UAB_D_SECTIONTIMERSTOPLOC_allow_double_conversion();
extern int UAB_D_SECTIONTIMERSTOPLOC_to_double(const void *pValue, double *nValue);
extern int get_UAB_D_SECTIONTIMERSTOPLOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_D_SECTIONTIMERSTOPLOC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_D_SECTIONTIMERSTOPLOC_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_D_SECTIONTIMERSTOPLOC_Utils;

/****************************************************************
 ** UAB_Q_OVERLAP 
 ****************************************************************/
extern int UAB_Q_OVERLAP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_Q_OVERLAP_string(const char *str, char **endptr);
extern int string_to_UAB_Q_OVERLAP(const char *str, void *pValue, char **endptr);
extern int is_UAB_Q_OVERLAP_allow_double_conversion();
extern int UAB_Q_OVERLAP_to_double(const void *pValue, double *nValue);
extern int get_UAB_Q_OVERLAP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_Q_OVERLAP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_Q_OVERLAP_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_Q_OVERLAP_Utils;

/****************************************************************
 ** UAB_Q_DANGERPOINT 
 ****************************************************************/
extern int UAB_Q_DANGERPOINT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_Q_DANGERPOINT_string(const char *str, char **endptr);
extern int string_to_UAB_Q_DANGERPOINT(const char *str, void *pValue, char **endptr);
extern int is_UAB_Q_DANGERPOINT_allow_double_conversion();
extern int UAB_Q_DANGERPOINT_to_double(const void *pValue, double *nValue);
extern int get_UAB_Q_DANGERPOINT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_Q_DANGERPOINT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_Q_DANGERPOINT_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_Q_DANGERPOINT_Utils;

/****************************************************************
 ** UAB_T_LOA 
 ****************************************************************/
extern int UAB_T_LOA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_T_LOA_string(const char *str, char **endptr);
extern int string_to_UAB_T_LOA(const char *str, void *pValue, char **endptr);
extern int is_UAB_T_LOA_allow_double_conversion();
extern int UAB_T_LOA_to_double(const void *pValue, double *nValue);
extern int get_UAB_T_LOA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_T_LOA(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_T_LOA_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_T_LOA_Utils;

/****************************************************************
 ** UAB_Q_SCALE 
 ****************************************************************/
extern int UAB_Q_SCALE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_Q_SCALE_string(const char *str, char **endptr);
extern int string_to_UAB_Q_SCALE(const char *str, void *pValue, char **endptr);
extern int is_UAB_Q_SCALE_allow_double_conversion();
extern int UAB_Q_SCALE_to_double(const void *pValue, double *nValue);
extern int get_UAB_Q_SCALE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_Q_SCALE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_Q_SCALE_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_Q_SCALE_Utils;

/****************************************************************
 ** UAB_N_ITER 
 ****************************************************************/
extern int UAB_N_ITER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_N_ITER_string(const char *str, char **endptr);
extern int string_to_UAB_N_ITER(const char *str, void *pValue, char **endptr);
extern int is_UAB_N_ITER_allow_double_conversion();
extern int UAB_N_ITER_to_double(const void *pValue, double *nValue);
extern int get_UAB_N_ITER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_N_ITER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_N_ITER_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_N_ITER_Utils;

/****************************************************************
 ** UAB_L_ENDSECTION 
 ****************************************************************/
extern int UAB_L_ENDSECTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_L_ENDSECTION_string(const char *str, char **endptr);
extern int string_to_UAB_L_ENDSECTION(const char *str, void *pValue, char **endptr);
extern int is_UAB_L_ENDSECTION_allow_double_conversion();
extern int UAB_L_ENDSECTION_to_double(const void *pValue, double *nValue);
extern int get_UAB_L_ENDSECTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_L_ENDSECTION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_L_ENDSECTION_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_L_ENDSECTION_Utils;

/****************************************************************
 ** UAB_Q_ENDTIMER 
 ****************************************************************/
extern int UAB_Q_ENDTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_Q_ENDTIMER_string(const char *str, char **endptr);
extern int string_to_UAB_Q_ENDTIMER(const char *str, void *pValue, char **endptr);
extern int is_UAB_Q_ENDTIMER_allow_double_conversion();
extern int UAB_Q_ENDTIMER_to_double(const void *pValue, double *nValue);
extern int get_UAB_Q_ENDTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_Q_ENDTIMER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_Q_ENDTIMER_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_Q_ENDTIMER_Utils;

/****************************************************************
 ** UAB_D_ENDTIMERSTARTLOC 
 ****************************************************************/
extern int UAB_D_ENDTIMERSTARTLOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_D_ENDTIMERSTARTLOC_string(const char *str, char **endptr);
extern int string_to_UAB_D_ENDTIMERSTARTLOC(const char *str, void *pValue, char **endptr);
extern int is_UAB_D_ENDTIMERSTARTLOC_allow_double_conversion();
extern int UAB_D_ENDTIMERSTARTLOC_to_double(const void *pValue, double *nValue);
extern int get_UAB_D_ENDTIMERSTARTLOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_D_ENDTIMERSTARTLOC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_D_ENDTIMERSTARTLOC_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_D_ENDTIMERSTARTLOC_Utils;

/****************************************************************
 ** UAB_V_RELEASEDP 
 ****************************************************************/
extern int UAB_V_RELEASEDP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_V_RELEASEDP_string(const char *str, char **endptr);
extern int string_to_UAB_V_RELEASEDP(const char *str, void *pValue, char **endptr);
extern int is_UAB_V_RELEASEDP_allow_double_conversion();
extern int UAB_V_RELEASEDP_to_double(const void *pValue, double *nValue);
extern int get_UAB_V_RELEASEDP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_V_RELEASEDP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_V_RELEASEDP_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_V_RELEASEDP_Utils;

/****************************************************************
 ** UAB_D_STARTOL 
 ****************************************************************/
extern int UAB_D_STARTOL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_D_STARTOL_string(const char *str, char **endptr);
extern int string_to_UAB_D_STARTOL(const char *str, void *pValue, char **endptr);
extern int is_UAB_D_STARTOL_allow_double_conversion();
extern int UAB_D_STARTOL_to_double(const void *pValue, double *nValue);
extern int get_UAB_D_STARTOL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_D_STARTOL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_D_STARTOL_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_D_STARTOL_Utils;

/****************************************************************
 ** UAB_T_OL 
 ****************************************************************/
extern int UAB_T_OL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_T_OL_string(const char *str, char **endptr);
extern int string_to_UAB_T_OL(const char *str, void *pValue, char **endptr);
extern int is_UAB_T_OL_allow_double_conversion();
extern int UAB_T_OL_to_double(const void *pValue, double *nValue);
extern int get_UAB_T_OL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_T_OL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_T_OL_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_T_OL_Utils;

/****************************************************************
 ** UAB_V_RELEASEOL 
 ****************************************************************/
extern int UAB_V_RELEASEOL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_V_RELEASEOL_string(const char *str, char **endptr);
extern int string_to_UAB_V_RELEASEOL(const char *str, void *pValue, char **endptr);
extern int is_UAB_V_RELEASEOL_allow_double_conversion();
extern int UAB_V_RELEASEOL_to_double(const void *pValue, double *nValue);
extern int get_UAB_V_RELEASEOL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_V_RELEASEOL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_V_RELEASEOL_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_V_RELEASEOL_Utils;

/****************************************************************
 ** UAB_Array06_TM 
 ****************************************************************/
extern int UAB_Array06_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_Array06_TM_string(const char *str, char **endptr);
extern int string_to_UAB_Array06_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_Array06_TM_allow_double_conversion();
extern int UAB_Array06_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_Array06_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_Array06_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_Array06_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_Array06_TM_Utils;

/****************************************************************
 ** UAB_P015_section_enum_T_TM 
 ****************************************************************/
extern int UAB_P015_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P015_section_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P015_section_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P015_section_enum_T_TM_allow_double_conversion();
extern int UAB_P015_section_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P015_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P015_section_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P015_section_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P015_section_enum_T_TM_Utils;

/****************************************************************
 ** UAB_P015_sections_array_flat_T_TM 
 ****************************************************************/
extern int UAB_P015_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P015_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P015_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P015_sections_array_flat_T_TM_allow_double_conversion();
extern int UAB_P015_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P015_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P015_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P015_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P015_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** UAB_P015_OBU_sectionlist_enum_T_TM 
 ****************************************************************/
extern int UAB_P015_OBU_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P015_OBU_sectionlist_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P015_OBU_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P015_OBU_sectionlist_enum_T_TM_allow_double_conversion();
extern int UAB_P015_OBU_sectionlist_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P015_OBU_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P015_OBU_sectionlist_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P015_OBU_sectionlist_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P015_OBU_sectionlist_enum_T_TM_Utils;

/****************************************************************
 ** UAB_Array15_TM 
 ****************************************************************/
extern int UAB_Array15_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_Array15_TM_string(const char *str, char **endptr);
extern int string_to_UAB_Array15_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_Array15_TM_allow_double_conversion();
extern int UAB_Array15_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_Array15_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_Array15_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_Array15_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_Array15_TM_Utils;

/****************************************************************
 ** UAB_P015_OBU_T_TM 
 ****************************************************************/
extern int UAB_P015_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P015_OBU_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P015_OBU_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P015_OBU_T_TM_allow_double_conversion();
extern int UAB_P015_OBU_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P015_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P015_OBU_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P015_OBU_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P015_OBU_T_TM_Utils;

/****************************************************************
 ** UAB_P015_trackside_int_T_TM 
 ****************************************************************/
extern int UAB_P015_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P015_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P015_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P015_trackside_int_T_TM_allow_double_conversion();
extern int UAB_P015_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P015_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P015_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P015_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P015_trackside_int_T_TM_Utils;

/****************************************************************
 ** UAB_P015_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int UAB_P015_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P015_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P015_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P015_trackide_sectionlist_T_TM_allow_double_conversion();
extern int UAB_P015_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P015_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P015_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P015_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P015_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** UAB_P015_section_int_T_TM 
 ****************************************************************/
extern int UAB_P015_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P015_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P015_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P015_section_int_T_TM_allow_double_conversion();
extern int UAB_P015_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P015_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P015_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P015_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P015_section_int_T_TM_Utils;

/****************************************************************
 ** UAB_P015_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int UAB_P015_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P015_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P015_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P015_OBU_sectionlist_array_T_TM_allow_double_conversion();
extern int UAB_P015_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P015_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P015_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P015_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P015_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** UAB_P015_section_array_T_TM 
 ****************************************************************/
extern int UAB_P015_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P015_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P015_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P015_section_array_T_TM_allow_double_conversion();
extern int UAB_P015_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P015_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P015_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P015_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P015_section_array_T_TM_Utils;

/****************************************************************
 ** UAB_P015_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int UAB_P015_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_P015_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_UAB_P015_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_P015_OBU_sectionlist_int_T_TM_allow_double_conversion();
extern int UAB_P015_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_P015_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_P015_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_P015_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_P015_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** UAB_nid_packet_meta_TM 
 ****************************************************************/
extern int UAB_nid_packet_meta_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_nid_packet_meta_TM_string(const char *str, char **endptr);
extern int string_to_UAB_nid_packet_meta_TM(const char *str, void *pValue, char **endptr);
extern int is_UAB_nid_packet_meta_TM_allow_double_conversion();
extern int UAB_nid_packet_meta_TM_to_double(const void *pValue, double *nValue);
extern int get_UAB_nid_packet_meta_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_nid_packet_meta_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_nid_packet_meta_TM_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_nid_packet_meta_TM_Utils;

/****************************************************************
 ** UAB_MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/
extern int UAB_MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_MetadataElement_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_UAB_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_UAB_MetadataElement_T_Common_Types_Pkg_allow_double_conversion();
extern int UAB_MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_UAB_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_MetadataElement_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_MetadataElement_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** UAB_Metadata_T_Common_Types_Pkg 
 ****************************************************************/
extern int UAB_Metadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_Metadata_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_UAB_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_UAB_Metadata_T_Common_Types_Pkg_allow_double_conversion();
extern int UAB_Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_UAB_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_Metadata_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_Metadata_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_Metadata_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** UAB_CompressedPacketData_T_Common_Types_Pkg 
 ****************************************************************/
extern int UAB_CompressedPacketData_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_CompressedPacketData_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_UAB_CompressedPacketData_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_UAB_CompressedPacketData_T_Common_Types_Pkg_allow_double_conversion();
extern int UAB_CompressedPacketData_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_UAB_CompressedPacketData_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_CompressedPacketData_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_CompressedPacketData_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_CompressedPacketData_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** UAB_CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/
extern int UAB_CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_UAB_CompressedPackets_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_UAB_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_UAB_CompressedPackets_T_Common_Types_Pkg_allow_double_conversion();
extern int UAB_CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_UAB_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_UAB_CompressedPackets_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_UAB_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_UAB_CompressedPackets_T_Common_Types_Pkg_Utils;


#endif /*UTRECHTAMSTERDAM_OETCS_TYPES_CONVERSION */
