#ifndef TRACKATLAS_TYPES_CONVERSION
#define TRACKATLAS_TYPES_CONVERSION

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
 ** struct__237 
 ****************************************************************/
extern int struct__237_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__237_string(const char *str, char **endptr);
extern int string_to_struct__237(const char *str, void *pValue, char **endptr);
extern int is_struct__237_allow_double_conversion();
extern int struct__237_to_double(const void *pValue, double *nValue);
extern int get_struct__237_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__237(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__237_default_value(void *pValue);
extern SimTypeUtils _Type_struct__237_Utils;

/****************************************************************
 ** array__245 
 ****************************************************************/
extern int array__245_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__245_string(const char *str, char **endptr);
extern int string_to_array__245(const char *str, void *pValue, char **endptr);
extern int is_array__245_allow_double_conversion();
extern int array__245_to_double(const void *pValue, double *nValue);
extern int get_array__245_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__245(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__245_default_value(void *pValue);
extern SimTypeUtils _Type_array__245_Utils;

/****************************************************************
 ** array__248 
 ****************************************************************/
extern int array__248_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__248_string(const char *str, char **endptr);
extern int string_to_array__248(const char *str, void *pValue, char **endptr);
extern int is_array__248_allow_double_conversion();
extern int array__248_to_double(const void *pValue, double *nValue);
extern int get_array__248_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__248(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__248_default_value(void *pValue);
extern SimTypeUtils _Type_array__248_Utils;

/****************************************************************
 ** array_int_33 
 ****************************************************************/
extern int array_int_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_33_string(const char *str, char **endptr);
extern int string_to_array_int_33(const char *str, void *pValue, char **endptr);
extern int is_array_int_33_allow_double_conversion();
extern int array_int_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_33_Utils;

/****************************************************************
 ** Gradient_section_t_TrackAtlasTypes 
 ****************************************************************/
extern int Gradient_section_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Gradient_section_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_Gradient_section_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_Gradient_section_t_TrackAtlasTypes_allow_double_conversion();
extern int Gradient_section_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_Gradient_section_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Gradient_section_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Gradient_section_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_Gradient_section_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** GradientProfile_t_TrackAtlasTypes 
 ****************************************************************/
extern int GradientProfile_t_TrackAtlasTypes_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_GradientProfile_t_TrackAtlasTypes_string(const char *str, char **endptr);
extern int string_to_GradientProfile_t_TrackAtlasTypes(const char *str, void *pValue, char **endptr);
extern int is_GradientProfile_t_TrackAtlasTypes_allow_double_conversion();
extern int GradientProfile_t_TrackAtlasTypes_to_double(const void *pValue, double *nValue);
extern int get_GradientProfile_t_TrackAtlasTypes_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_GradientProfile_t_TrackAtlasTypes(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_GradientProfile_t_TrackAtlasTypes_default_value(void *pValue);
extern SimTypeUtils _Type_GradientProfile_t_TrackAtlasTypes_Utils;

/****************************************************************
 ** L_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int L_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_L_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_L_internal_Type_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int L_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_L_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** G_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int G_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_G_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_G_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_G_internal_Type_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int G_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_G_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_G_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_G_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_G_internal_Type_Obu_BasicTypes_Pkg_Utils;


#endif /*TRACKATLAS_TYPES_CONVERSION */
