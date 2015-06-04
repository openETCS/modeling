#ifndef TRACKMESSAGES_TYPES_CONVERTION
#define TRACKMESSAGES_TYPES_CONVERTION

#include "NewSmuTypes.h"

/****************************************************************
 ** kcg_real 
 ****************************************************************/
extern int kcg_real_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_real_string(const char *str, char **endptr);
extern int string_to_kcg_real(const char *str, void *pValue, char **endptr);
extern int is_kcg_real_allow_double_convertion();
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
extern int is_kcg_bool_allow_double_convertion();
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
extern int is_kcg_char_allow_double_convertion();
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
extern int is_kcg_int_allow_double_convertion();
extern int kcg_int_to_double(const void *pValue, double *nValue);
extern int get_kcg_int_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_int(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_int_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_int_Utils;

/****************************************************************
 ** struct__532 
 ****************************************************************/
extern int struct__532_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__532_string(const char *str, char **endptr);
extern int string_to_struct__532(const char *str, void *pValue, char **endptr);
extern int is_struct__532_allow_double_convertion();
extern int struct__532_to_double(const void *pValue, double *nValue);
extern int get_struct__532_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__532(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__532_default_value(void *pValue);
extern SimTypeUtils _Type_struct__532_Utils;

/****************************************************************
 ** array__543 
 ****************************************************************/
extern int array__543_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__543_string(const char *str, char **endptr);
extern int string_to_array__543(const char *str, void *pValue, char **endptr);
extern int is_array__543_allow_double_convertion();
extern int array__543_to_double(const void *pValue, double *nValue);
extern int get_array__543_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__543(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__543_default_value(void *pValue);
extern SimTypeUtils _Type_array__543_Utils;

/****************************************************************
 ** array_int_224 
 ****************************************************************/
extern int array_int_224_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_224_string(const char *str, char **endptr);
extern int string_to_array_int_224(const char *str, void *pValue, char **endptr);
extern int is_array_int_224_allow_double_convertion();
extern int array_int_224_to_double(const void *pValue, double *nValue);
extern int get_array_int_224_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_224(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_224_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_224_Utils;

/****************************************************************
 ** array_int_32 
 ****************************************************************/
extern int array_int_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_32_string(const char *str, char **endptr);
extern int string_to_array_int_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_32_allow_double_convertion();
extern int array_int_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_32_Utils;

/****************************************************************
 ** array_int_224_32 
 ****************************************************************/
extern int array_int_224_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_224_32_string(const char *str, char **endptr);
extern int string_to_array_int_224_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_224_32_allow_double_convertion();
extern int array_int_224_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_224_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_224_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_224_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_224_32_Utils;

/****************************************************************
 ** D_LINK 
 ****************************************************************/
extern int D_LINK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_LINK_string(const char *str, char **endptr);
extern int string_to_D_LINK(const char *str, void *pValue, char **endptr);
extern int is_D_LINK_allow_double_convertion();
extern int D_LINK_to_double(const void *pValue, double *nValue);
extern int get_D_LINK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_LINK(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_LINK_default_value(void *pValue);
extern SimTypeUtils _Type_D_LINK_Utils;

/****************************************************************
 ** Q_NEWCOUNTRY 
 ****************************************************************/
extern int Q_NEWCOUNTRY_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NEWCOUNTRY_string(const char *str, char **endptr);
extern int string_to_Q_NEWCOUNTRY(const char *str, void *pValue, char **endptr);
extern int is_Q_NEWCOUNTRY_allow_double_convertion();
extern int Q_NEWCOUNTRY_to_double(const void *pValue, double *nValue);
extern int get_Q_NEWCOUNTRY_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NEWCOUNTRY(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NEWCOUNTRY_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NEWCOUNTRY_Utils;

/****************************************************************
 ** NID_C 
 ****************************************************************/
extern int NID_C_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_C_string(const char *str, char **endptr);
extern int string_to_NID_C(const char *str, void *pValue, char **endptr);
extern int is_NID_C_allow_double_convertion();
extern int NID_C_to_double(const void *pValue, double *nValue);
extern int get_NID_C_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_C(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_C_default_value(void *pValue);
extern SimTypeUtils _Type_NID_C_Utils;

/****************************************************************
 ** NID_BG 
 ****************************************************************/
extern int NID_BG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_BG_string(const char *str, char **endptr);
extern int string_to_NID_BG(const char *str, void *pValue, char **endptr);
extern int is_NID_BG_allow_double_convertion();
extern int NID_BG_to_double(const void *pValue, double *nValue);
extern int get_NID_BG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_BG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_BG_default_value(void *pValue);
extern SimTypeUtils _Type_NID_BG_Utils;

/****************************************************************
 ** Q_LINKORIENTATION 
 ****************************************************************/
extern int Q_LINKORIENTATION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINKORIENTATION_string(const char *str, char **endptr);
extern int string_to_Q_LINKORIENTATION(const char *str, void *pValue, char **endptr);
extern int is_Q_LINKORIENTATION_allow_double_convertion();
extern int Q_LINKORIENTATION_to_double(const void *pValue, double *nValue);
extern int get_Q_LINKORIENTATION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINKORIENTATION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINKORIENTATION_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINKORIENTATION_Utils;

/****************************************************************
 ** Q_LINKREACTION 
 ****************************************************************/
extern int Q_LINKREACTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINKREACTION_string(const char *str, char **endptr);
extern int string_to_Q_LINKREACTION(const char *str, void *pValue, char **endptr);
extern int is_Q_LINKREACTION_allow_double_convertion();
extern int Q_LINKREACTION_to_double(const void *pValue, double *nValue);
extern int get_Q_LINKREACTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINKREACTION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINKREACTION_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINKREACTION_Utils;

/****************************************************************
 ** Q_LOCACC 
 ****************************************************************/
extern int Q_LOCACC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LOCACC_string(const char *str, char **endptr);
extern int string_to_Q_LOCACC(const char *str, void *pValue, char **endptr);
extern int is_Q_LOCACC_allow_double_convertion();
extern int Q_LOCACC_to_double(const void *pValue, double *nValue);
extern int get_Q_LOCACC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LOCACC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LOCACC_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LOCACC_Utils;

/****************************************************************
 ** P005_OBU_section_TM 
 ****************************************************************/
extern int P005_OBU_section_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_OBU_section_TM_string(const char *str, char **endptr);
extern int string_to_P005_OBU_section_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_OBU_section_TM_allow_double_convertion();
extern int P005_OBU_section_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_OBU_section_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_OBU_section_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_OBU_section_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_OBU_section_TM_Utils;

/****************************************************************
 ** P005_sections_array_flat_TM 
 ****************************************************************/
extern int P005_sections_array_flat_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_sections_array_flat_TM_string(const char *str, char **endptr);
extern int string_to_P005_sections_array_flat_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_sections_array_flat_TM_allow_double_convertion();
extern int P005_sections_array_flat_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_sections_array_flat_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_sections_array_flat_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_sections_array_flat_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_sections_array_flat_TM_Utils;

/****************************************************************
 ** P005_OBU_sectionlist_TM 
 ****************************************************************/
extern int P005_OBU_sectionlist_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_OBU_sectionlist_TM_string(const char *str, char **endptr);
extern int string_to_P005_OBU_sectionlist_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_OBU_sectionlist_TM_allow_double_convertion();
extern int P005_OBU_sectionlist_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_OBU_sectionlist_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_OBU_sectionlist_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_OBU_sectionlist_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_OBU_sectionlist_TM_Utils;


#endif /*TRACKMESSAGES_TYPES_CONVERTION */
