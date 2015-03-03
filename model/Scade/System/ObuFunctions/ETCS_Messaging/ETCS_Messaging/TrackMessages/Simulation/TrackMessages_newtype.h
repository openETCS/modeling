#ifndef TRACKMESSAGES_TYPES_CONVERTION
#define TRACKMESSAGES_TYPES_CONVERTION

#include "NewSmuTypes.h"

/****************************************************************
 ** SSM_ST_SM1 
 ****************************************************************/
extern int SSM_ST_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_ST_SM1_string(const char *str, char **endptr);
extern int string_to_SSM_ST_SM1(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_SM1_allow_double_convertion();
extern int SSM_ST_SM1_to_double(const void *pValue, double *nValue);
extern int get_SSM_ST_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_ST_SM1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_ST_SM1_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_SM1_Utils;

/****************************************************************
 ** SSM_TR_SM1 
 ****************************************************************/
extern int SSM_TR_SM1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_TR_SM1_string(const char *str, char **endptr);
extern int string_to_SSM_TR_SM1(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_SM1_allow_double_convertion();
extern int SSM_TR_SM1_to_double(const void *pValue, double *nValue);
extern int get_SSM_TR_SM1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_TR_SM1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_TR_SM1_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_SM1_Utils;

/****************************************************************
 ** SSM_ST_SM2_SM1_State1 
 ****************************************************************/
extern int SSM_ST_SM2_SM1_State1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_ST_SM2_SM1_State1_string(const char *str, char **endptr);
extern int string_to_SSM_ST_SM2_SM1_State1(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_SM2_SM1_State1_allow_double_convertion();
extern int SSM_ST_SM2_SM1_State1_to_double(const void *pValue, double *nValue);
extern int get_SSM_ST_SM2_SM1_State1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_ST_SM2_SM1_State1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_ST_SM2_SM1_State1_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_SM2_SM1_State1_Utils;

/****************************************************************
 ** SSM_TR_SM2_SM1_State1 
 ****************************************************************/
extern int SSM_TR_SM2_SM1_State1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_TR_SM2_SM1_State1_string(const char *str, char **endptr);
extern int string_to_SSM_TR_SM2_SM1_State1(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_SM2_SM1_State1_allow_double_convertion();
extern int SSM_TR_SM2_SM1_State1_to_double(const void *pValue, double *nValue);
extern int get_SSM_TR_SM2_SM1_State1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_TR_SM2_SM1_State1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_TR_SM2_SM1_State1_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_SM2_SM1_State1_Utils;

/****************************************************************
 ** SSM_ST_SM3_SM1_State1 
 ****************************************************************/
extern int SSM_ST_SM3_SM1_State1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_ST_SM3_SM1_State1_string(const char *str, char **endptr);
extern int string_to_SSM_ST_SM3_SM1_State1(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_SM3_SM1_State1_allow_double_convertion();
extern int SSM_ST_SM3_SM1_State1_to_double(const void *pValue, double *nValue);
extern int get_SSM_ST_SM3_SM1_State1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_ST_SM3_SM1_State1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_ST_SM3_SM1_State1_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_SM3_SM1_State1_Utils;

/****************************************************************
 ** SSM_TR_SM3_SM1_State1 
 ****************************************************************/
extern int SSM_TR_SM3_SM1_State1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_SSM_TR_SM3_SM1_State1_string(const char *str, char **endptr);
extern int string_to_SSM_TR_SM3_SM1_State1(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_SM3_SM1_State1_allow_double_convertion();
extern int SSM_TR_SM3_SM1_State1_to_double(const void *pValue, double *nValue);
extern int get_SSM_TR_SM3_SM1_State1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_SSM_TR_SM3_SM1_State1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_SSM_TR_SM3_SM1_State1_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_SM3_SM1_State1_Utils;

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
 ** struct__371 
 ****************************************************************/
extern int struct__371_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__371_string(const char *str, char **endptr);
extern int string_to_struct__371(const char *str, void *pValue, char **endptr);
extern int is_struct__371_allow_double_convertion();
extern int struct__371_to_double(const void *pValue, double *nValue);
extern int get_struct__371_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__371(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__371_default_value(void *pValue);
extern SimTypeUtils _Type_struct__371_Utils;

/****************************************************************
 ** BaliseGroupData 
 ****************************************************************/
extern int BaliseGroupData_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BaliseGroupData_string(const char *str, char **endptr);
extern int string_to_BaliseGroupData(const char *str, void *pValue, char **endptr);
extern int is_BaliseGroupData_allow_double_convertion();
extern int BaliseGroupData_to_double(const void *pValue, double *nValue);
extern int get_BaliseGroupData_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BaliseGroupData(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BaliseGroupData_default_value(void *pValue);
extern SimTypeUtils _Type_BaliseGroupData_Utils;

/****************************************************************
 ** OrBG 
 ****************************************************************/
extern int OrBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OrBG_string(const char *str, char **endptr);
extern int string_to_OrBG(const char *str, void *pValue, char **endptr);
extern int is_OrBG_allow_double_convertion();
extern int OrBG_to_double(const void *pValue, double *nValue);
extern int get_OrBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OrBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OrBG_default_value(void *pValue);
extern SimTypeUtils _Type_OrBG_Utils;

/****************************************************************
 ** OrLine 
 ****************************************************************/
extern int OrLine_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OrLine_string(const char *str, char **endptr);
extern int string_to_OrLine(const char *str, void *pValue, char **endptr);
extern int is_OrLine_allow_double_convertion();
extern int OrLine_to_double(const void *pValue, double *nValue);
extern int get_OrLine_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OrLine(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OrLine_default_value(void *pValue);
extern SimTypeUtils _Type_OrLine_Utils;


#endif /*TRACKMESSAGES_TYPES_CONVERTION */
