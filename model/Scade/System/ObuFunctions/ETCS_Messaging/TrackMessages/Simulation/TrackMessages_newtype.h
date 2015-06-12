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
 ** struct__413 
 ****************************************************************/
extern int struct__413_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__413_string(const char *str, char **endptr);
extern int string_to_struct__413(const char *str, void *pValue, char **endptr);
extern int is_struct__413_allow_double_convertion();
extern int struct__413_to_double(const void *pValue, double *nValue);
extern int get_struct__413_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__413(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__413_default_value(void *pValue);
extern SimTypeUtils _Type_struct__413_Utils;

/****************************************************************
 ** array__418 
 ****************************************************************/
extern int array__418_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__418_string(const char *str, char **endptr);
extern int string_to_array__418(const char *str, void *pValue, char **endptr);
extern int is_array__418_allow_double_convertion();
extern int array__418_to_double(const void *pValue, double *nValue);
extern int get_array__418_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__418(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__418_default_value(void *pValue);
extern SimTypeUtils _Type_array__418_Utils;

/****************************************************************
 ** struct__421 
 ****************************************************************/
extern int struct__421_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__421_string(const char *str, char **endptr);
extern int string_to_struct__421(const char *str, void *pValue, char **endptr);
extern int is_struct__421_allow_double_convertion();
extern int struct__421_to_double(const void *pValue, double *nValue);
extern int get_struct__421_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__421(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__421_default_value(void *pValue);
extern SimTypeUtils _Type_struct__421_Utils;

/****************************************************************
 ** array__429 
 ****************************************************************/
extern int array__429_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__429_string(const char *str, char **endptr);
extern int string_to_array__429(const char *str, void *pValue, char **endptr);
extern int is_array__429_allow_double_convertion();
extern int array__429_to_double(const void *pValue, double *nValue);
extern int get_array__429_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__429(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__429_default_value(void *pValue);
extern SimTypeUtils _Type_array__429_Utils;

/****************************************************************
 ** array__432 
 ****************************************************************/
extern int array__432_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__432_string(const char *str, char **endptr);
extern int string_to_array__432(const char *str, void *pValue, char **endptr);
extern int is_array__432_allow_double_convertion();
extern int array__432_to_double(const void *pValue, double *nValue);
extern int get_array__432_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__432(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__432_default_value(void *pValue);
extern SimTypeUtils _Type_array__432_Utils;

/****************************************************************
 ** struct__435 
 ****************************************************************/
extern int struct__435_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__435_string(const char *str, char **endptr);
extern int string_to_struct__435(const char *str, void *pValue, char **endptr);
extern int is_struct__435_allow_double_convertion();
extern int struct__435_to_double(const void *pValue, double *nValue);
extern int get_struct__435_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__435(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__435_default_value(void *pValue);
extern SimTypeUtils _Type_struct__435_Utils;

/****************************************************************
 ** array_int_500 
 ****************************************************************/
extern int array_int_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_500_string(const char *str, char **endptr);
extern int string_to_array_int_500(const char *str, void *pValue, char **endptr);
extern int is_array_int_500_allow_double_convertion();
extern int array_int_500_to_double(const void *pValue, double *nValue);
extern int get_array_int_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_500(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_500_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_500_Utils;

/****************************************************************
 ** struct__453 
 ****************************************************************/
extern int struct__453_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__453_string(const char *str, char **endptr);
extern int string_to_struct__453(const char *str, void *pValue, char **endptr);
extern int is_struct__453_allow_double_convertion();
extern int struct__453_to_double(const void *pValue, double *nValue);
extern int get_struct__453_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__453(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__453_default_value(void *pValue);
extern SimTypeUtils _Type_struct__453_Utils;

/****************************************************************
 ** array_int_494 
 ****************************************************************/
extern int array_int_494_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_494_string(const char *str, char **endptr);
extern int string_to_array_int_494(const char *str, void *pValue, char **endptr);
extern int is_array_int_494_allow_double_convertion();
extern int array_int_494_to_double(const void *pValue, double *nValue);
extern int get_array_int_494_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_494(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_494_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_494_Utils;

/****************************************************************
 ** array_int_6 
 ****************************************************************/
extern int array_int_6_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_6_string(const char *str, char **endptr);
extern int string_to_array_int_6(const char *str, void *pValue, char **endptr);
extern int is_array_int_6_allow_double_convertion();
extern int array_int_6_to_double(const void *pValue, double *nValue);
extern int get_array_int_6_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_6(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_6_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_6_Utils;

/****************************************************************
 ** array__467 
 ****************************************************************/
extern int array__467_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__467_string(const char *str, char **endptr);
extern int string_to_array__467(const char *str, void *pValue, char **endptr);
extern int is_array__467_allow_double_convertion();
extern int array__467_to_double(const void *pValue, double *nValue);
extern int get_array__467_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__467(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__467_default_value(void *pValue);
extern SimTypeUtils _Type_array__467_Utils;

/****************************************************************
 ** NID_PACKET 
 ****************************************************************/
extern int NID_PACKET_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_PACKET_string(const char *str, char **endptr);
extern int string_to_NID_PACKET(const char *str, void *pValue, char **endptr);
extern int is_NID_PACKET_allow_double_convertion();
extern int NID_PACKET_to_double(const void *pValue, double *nValue);
extern int get_NID_PACKET_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_PACKET(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_PACKET_default_value(void *pValue);
extern SimTypeUtils _Type_NID_PACKET_Utils;

/****************************************************************
 ** Q_DIR 
 ****************************************************************/
extern int Q_DIR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIR_string(const char *str, char **endptr);
extern int string_to_Q_DIR(const char *str, void *pValue, char **endptr);
extern int is_Q_DIR_allow_double_convertion();
extern int Q_DIR_to_double(const void *pValue, double *nValue);
extern int get_Q_DIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIR_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIR_Utils;

/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/
extern int MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MetadataElement_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_MetadataElement_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** CompressedPacketData_T_Common_Types_Pkg 
 ****************************************************************/
extern int CompressedPacketData_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CompressedPacketData_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_CompressedPacketData_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_CompressedPacketData_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPacketData_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_CompressedPacketData_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedPacketData_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedPacketData_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedPacketData_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** P027V1_trackside_int_T_TM 
 ****************************************************************/
extern int P027V1_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P027V1_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P027V1_trackside_int_T_TM_allow_double_convertion();
extern int P027V1_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P027V1_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_trackside_int_T_TM_Utils;

/****************************************************************
 ** P027V1_trackide_qdifflist_T_TM 
 ****************************************************************/
extern int P027V1_trackide_qdifflist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_trackide_qdifflist_T_TM_string(const char *str, char **endptr);
extern int string_to_P027V1_trackide_qdifflist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P027V1_trackide_qdifflist_T_TM_allow_double_convertion();
extern int P027V1_trackide_qdifflist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P027V1_trackide_qdifflist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_trackide_qdifflist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_trackide_qdifflist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_trackide_qdifflist_T_TM_Utils;

/****************************************************************
 ** P027V1_section_int_qdiff_T_TM 
 ****************************************************************/
extern int P027V1_section_int_qdiff_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_section_int_qdiff_T_TM_string(const char *str, char **endptr);
extern int string_to_P027V1_section_int_qdiff_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P027V1_section_int_qdiff_T_TM_allow_double_convertion();
extern int P027V1_section_int_qdiff_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P027V1_section_int_qdiff_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_section_int_qdiff_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_section_int_qdiff_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_section_int_qdiff_T_TM_Utils;

/****************************************************************
 ** P027V1_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int P027V1_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_P027V1_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P027V1_trackide_sectionlist_T_TM_allow_double_convertion();
extern int P027V1_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P027V1_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** P027V1_section_int_T_TM 
 ****************************************************************/
extern int P027V1_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P027V1_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P027V1_section_int_T_TM_allow_double_convertion();
extern int P027V1_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P027V1_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_section_int_T_TM_Utils;

/****************************************************************
 ** nid_packet_meta_TM 
 ****************************************************************/
extern int nid_packet_meta_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_nid_packet_meta_TM_string(const char *str, char **endptr);
extern int string_to_nid_packet_meta_TM(const char *str, void *pValue, char **endptr);
extern int is_nid_packet_meta_TM_allow_double_convertion();
extern int nid_packet_meta_TM_to_double(const void *pValue, double *nValue);
extern int get_nid_packet_meta_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_nid_packet_meta_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_nid_packet_meta_TM_default_value(void *pValue);
extern SimTypeUtils _Type_nid_packet_meta_TM_Utils;

/****************************************************************
 ** P027V1_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int P027V1_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P027V1_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P027V1_OBU_sectionlist_int_T_TM_allow_double_convertion();
extern int P027V1_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P027V1_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_OBU_sectionlist_int_T_TM_Utils;


#endif /*TRACKMESSAGES_TYPES_CONVERTION */
