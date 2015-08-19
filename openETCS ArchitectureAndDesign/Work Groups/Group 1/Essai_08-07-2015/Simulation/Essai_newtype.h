#ifndef ESSAI_TYPES_CONVERTION
#define ESSAI_TYPES_CONVERTION

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
 ** struct__1527 
 ****************************************************************/
extern int struct__1527_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1527_string(const char *str, char **endptr);
extern int string_to_struct__1527(const char *str, void *pValue, char **endptr);
extern int is_struct__1527_allow_double_convertion();
extern int struct__1527_to_double(const void *pValue, double *nValue);
extern int get_struct__1527_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1527(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1527_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1527_Utils;

/****************************************************************
 ** struct__1532 
 ****************************************************************/
extern int struct__1532_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1532_string(const char *str, char **endptr);
extern int string_to_struct__1532(const char *str, void *pValue, char **endptr);
extern int is_struct__1532_allow_double_convertion();
extern int struct__1532_to_double(const void *pValue, double *nValue);
extern int get_struct__1532_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1532(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1532_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1532_Utils;

/****************************************************************
 ** struct__1537 
 ****************************************************************/
extern int struct__1537_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1537_string(const char *str, char **endptr);
extern int string_to_struct__1537(const char *str, void *pValue, char **endptr);
extern int is_struct__1537_allow_double_convertion();
extern int struct__1537_to_double(const void *pValue, double *nValue);
extern int get_struct__1537_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1537(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1537_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1537_Utils;

/****************************************************************
 ** struct__1542 
 ****************************************************************/
extern int struct__1542_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__1542_string(const char *str, char **endptr);
extern int string_to_struct__1542(const char *str, void *pValue, char **endptr);
extern int is_struct__1542_allow_double_convertion();
extern int struct__1542_to_double(const void *pValue, double *nValue);
extern int get_struct__1542_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__1542(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__1542_default_value(void *pValue);
extern SimTypeUtils _Type_struct__1542_Utils;

/****************************************************************
 ** array__1547 
 ****************************************************************/
extern int array__1547_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1547_string(const char *str, char **endptr);
extern int string_to_array__1547(const char *str, void *pValue, char **endptr);
extern int is_array__1547_allow_double_convertion();
extern int array__1547_to_double(const void *pValue, double *nValue);
extern int get_array__1547_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1547(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1547_default_value(void *pValue);
extern SimTypeUtils _Type_array__1547_Utils;

/****************************************************************
 ** array__1550 
 ****************************************************************/
extern int array__1550_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1550_string(const char *str, char **endptr);
extern int string_to_array__1550(const char *str, void *pValue, char **endptr);
extern int is_array__1550_allow_double_convertion();
extern int array__1550_to_double(const void *pValue, double *nValue);
extern int get_array__1550_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1550(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1550_default_value(void *pValue);
extern SimTypeUtils _Type_array__1550_Utils;

/****************************************************************
 ** array__1553 
 ****************************************************************/
extern int array__1553_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1553_string(const char *str, char **endptr);
extern int string_to_array__1553(const char *str, void *pValue, char **endptr);
extern int is_array__1553_allow_double_convertion();
extern int array__1553_to_double(const void *pValue, double *nValue);
extern int get_array__1553_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1553(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1553_default_value(void *pValue);
extern SimTypeUtils _Type_array__1553_Utils;

/****************************************************************
 ** array_real_8 
 ****************************************************************/
extern int array_real_8_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_real_8_string(const char *str, char **endptr);
extern int string_to_array_real_8(const char *str, void *pValue, char **endptr);
extern int is_array_real_8_allow_double_convertion();
extern int array_real_8_to_double(const void *pValue, double *nValue);
extern int get_array_real_8_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_real_8(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_real_8_default_value(void *pValue);
extern SimTypeUtils _Type_array_real_8_Utils;

/****************************************************************
 ** array_real_25 
 ****************************************************************/
extern int array_real_25_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_real_25_string(const char *str, char **endptr);
extern int string_to_array_real_25(const char *str, void *pValue, char **endptr);
extern int is_array_real_25_allow_double_convertion();
extern int array_real_25_to_double(const void *pValue, double *nValue);
extern int get_array_real_25_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_real_25(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_real_25_default_value(void *pValue);
extern SimTypeUtils _Type_array_real_25_Utils;

/****************************************************************
 ** array__1562 
 ****************************************************************/
extern int array__1562_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1562_string(const char *str, char **endptr);
extern int string_to_array__1562(const char *str, void *pValue, char **endptr);
extern int is_array__1562_allow_double_convertion();
extern int array__1562_to_double(const void *pValue, double *nValue);
extern int get_array__1562_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1562(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1562_default_value(void *pValue);
extern SimTypeUtils _Type_array__1562_Utils;

/****************************************************************
 ** array_real_24 
 ****************************************************************/
extern int array_real_24_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_real_24_string(const char *str, char **endptr);
extern int string_to_array_real_24(const char *str, void *pValue, char **endptr);
extern int is_array_real_24_allow_double_convertion();
extern int array_real_24_to_double(const void *pValue, double *nValue);
extern int get_array_real_24_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_real_24(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_real_24_default_value(void *pValue);
extern SimTypeUtils _Type_array_real_24_Utils;

/****************************************************************
 ** array_real_1 
 ****************************************************************/
extern int array_real_1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_real_1_string(const char *str, char **endptr);
extern int string_to_array_real_1(const char *str, void *pValue, char **endptr);
extern int is_array_real_1_allow_double_convertion();
extern int array_real_1_to_double(const void *pValue, double *nValue);
extern int get_array_real_1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_real_1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_real_1_default_value(void *pValue);
extern SimTypeUtils _Type_array_real_1_Utils;

/****************************************************************
 ** array_real_2 
 ****************************************************************/
extern int array_real_2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_real_2_string(const char *str, char **endptr);
extern int string_to_array_real_2(const char *str, void *pValue, char **endptr);
extern int is_array_real_2_allow_double_convertion();
extern int array_real_2_to_double(const void *pValue, double *nValue);
extern int get_array_real_2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_real_2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_real_2_default_value(void *pValue);
extern SimTypeUtils _Type_array_real_2_Utils;

/****************************************************************
 ** array__1574 
 ****************************************************************/
extern int array__1574_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1574_string(const char *str, char **endptr);
extern int string_to_array__1574(const char *str, void *pValue, char **endptr);
extern int is_array__1574_allow_double_convertion();
extern int array__1574_to_double(const void *pValue, double *nValue);
extern int get_array__1574_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1574(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1574_default_value(void *pValue);
extern SimTypeUtils _Type_array__1574_Utils;

/****************************************************************
 ** array_bool_25 
 ****************************************************************/
extern int array_bool_25_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_bool_25_string(const char *str, char **endptr);
extern int string_to_array_bool_25(const char *str, void *pValue, char **endptr);
extern int is_array_bool_25_allow_double_convertion();
extern int array_bool_25_to_double(const void *pValue, double *nValue);
extern int get_array_bool_25_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_bool_25(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_bool_25_default_value(void *pValue);
extern SimTypeUtils _Type_array_bool_25_Utils;

/****************************************************************
 ** array_bool_1 
 ****************************************************************/
extern int array_bool_1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_bool_1_string(const char *str, char **endptr);
extern int string_to_array_bool_1(const char *str, void *pValue, char **endptr);
extern int is_array_bool_1_allow_double_convertion();
extern int array_bool_1_to_double(const void *pValue, double *nValue);
extern int get_array_bool_1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_bool_1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_bool_1_default_value(void *pValue);
extern SimTypeUtils _Type_array_bool_1_Utils;

/****************************************************************
 ** array_bool_24 
 ****************************************************************/
extern int array_bool_24_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_bool_24_string(const char *str, char **endptr);
extern int string_to_array_bool_24(const char *str, void *pValue, char **endptr);
extern int is_array_bool_24_allow_double_convertion();
extern int array_bool_24_to_double(const void *pValue, double *nValue);
extern int get_array_bool_24_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_bool_24(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_bool_24_default_value(void *pValue);
extern SimTypeUtils _Type_array_bool_24_Utils;

/****************************************************************
 ** array__1586 
 ****************************************************************/
extern int array__1586_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1586_string(const char *str, char **endptr);
extern int string_to_array__1586(const char *str, void *pValue, char **endptr);
extern int is_array__1586_allow_double_convertion();
extern int array__1586_to_double(const void *pValue, double *nValue);
extern int get_array__1586_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1586(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1586_default_value(void *pValue);
extern SimTypeUtils _Type_array__1586_Utils;

/****************************************************************
 ** array__1589 
 ****************************************************************/
extern int array__1589_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__1589_string(const char *str, char **endptr);
extern int string_to_array__1589(const char *str, void *pValue, char **endptr);
extern int is_array__1589_allow_double_convertion();
extern int array__1589_to_double(const void *pValue, double *nValue);
extern int get_array__1589_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__1589(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__1589_default_value(void *pValue);
extern SimTypeUtils _Type_array__1589_Utils;

/****************************************************************
 ** TY_DistValue 
 ****************************************************************/
extern int TY_DistValue_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TY_DistValue_string(const char *str, char **endptr);
extern int string_to_TY_DistValue(const char *str, void *pValue, char **endptr);
extern int is_TY_DistValue_allow_double_convertion();
extern int TY_DistValue_to_double(const void *pValue, double *nValue);
extern int get_TY_DistValue_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TY_DistValue(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TY_DistValue_default_value(void *pValue);
extern SimTypeUtils _Type_TY_DistValue_Utils;

/****************************************************************
 ** TY_Adh 
 ****************************************************************/
extern int TY_Adh_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TY_Adh_string(const char *str, char **endptr);
extern int string_to_TY_Adh(const char *str, void *pValue, char **endptr);
extern int is_TY_Adh_allow_double_convertion();
extern int TY_Adh_to_double(const void *pValue, double *nValue);
extern int get_TY_Adh_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TY_Adh(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TY_Adh_default_value(void *pValue);
extern SimTypeUtils _Type_TY_Adh_Utils;

/****************************************************************
 ** TY_EB_Type 
 ****************************************************************/
extern int TY_EB_Type_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TY_EB_Type_string(const char *str, char **endptr);
extern int string_to_TY_EB_Type(const char *str, void *pValue, char **endptr);
extern int is_TY_EB_Type_allow_double_convertion();
extern int TY_EB_Type_to_double(const void *pValue, double *nValue);
extern int get_TY_EB_Type_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TY_EB_Type(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TY_EB_Type_default_value(void *pValue);
extern SimTypeUtils _Type_TY_EB_Type_Utils;

/****************************************************************
 ** TY_SizePos 
 ****************************************************************/
extern int TY_SizePos_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TY_SizePos_string(const char *str, char **endptr);
extern int string_to_TY_SizePos(const char *str, void *pValue, char **endptr);
extern int is_TY_SizePos_allow_double_convertion();
extern int TY_SizePos_to_double(const void *pValue, double *nValue);
extern int get_TY_SizePos_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TY_SizePos(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TY_SizePos_default_value(void *pValue);
extern SimTypeUtils _Type_TY_SizePos_Utils;


#endif /*ESSAI_TYPES_CONVERTION */
