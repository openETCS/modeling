
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "Write_P027V1_TM_trackside_type.h"
#include "Write_P027V1_TM_trackside_mapping.h"

extern ScSimulator * pSimulator;

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
int _SCSIM_BoolEntity_is_active(void* pValue) {
	return *((kcg_bool*)pValue) == kcg_true ? 1 : 0;
}

/****************************************************************
 ** Type utils declarations
 ****************************************************************/
TypeUtils _SCSIM_kcg_real_Utils = {kcg_real_to_string,
	check_kcg_real_string,
	string_to_kcg_real,
	is_kcg_real_allow_double_convertion,
	kcg_real_to_double,
	compare_kcg_real_type,
	get_kcg_real_signature,
	get_kcg_real_filter_utils,
	kcg_real_filter_size,
	kcg_real_filter_values};
TypeUtils _SCSIM_kcg_bool_Utils = {kcg_bool_to_string,
	check_kcg_bool_string,
	string_to_kcg_bool,
	is_kcg_bool_allow_double_convertion,
	kcg_bool_to_double,
	compare_kcg_bool_type,
	get_kcg_bool_signature,
	get_kcg_bool_filter_utils,
	kcg_bool_filter_size,
	kcg_bool_filter_values};
TypeUtils _SCSIM_kcg_char_Utils = {kcg_char_to_string,
	check_kcg_char_string,
	string_to_kcg_char,
	is_kcg_char_allow_double_convertion,
	kcg_char_to_double,
	compare_kcg_char_type,
	get_kcg_char_signature,
	get_kcg_char_filter_utils,
	kcg_char_filter_size,
	kcg_char_filter_values};
TypeUtils _SCSIM_kcg_int_Utils = {kcg_int_to_string,
	check_kcg_int_string,
	string_to_kcg_int,
	is_kcg_int_allow_double_convertion,
	kcg_int_to_double,
	compare_kcg_int_type,
	get_kcg_int_signature,
	get_kcg_int_filter_utils,
	kcg_int_filter_size,
	kcg_int_filter_values};
TypeUtils _SCSIM_array_int_500_Utils = {array_int_500_to_string,
	check_array_int_500_string,
	string_to_array_int_500,
	is_array_int_500_allow_double_convertion,
	0,
	compare_array_int_500_type,
	get_array_int_500_signature,
	get_array_int_500_filter_utils,
	array_int_500_filter_size,
	array_int_500_filter_values};
TypeUtils _SCSIM_struct__862_Utils = {struct__862_to_string,
	check_struct__862_string,
	string_to_struct__862,
	is_struct__862_allow_double_convertion,
	0,
	compare_struct__862_type,
	get_struct__862_signature,
	get_struct__862_filter_utils,
	struct__862_filter_size,
	struct__862_filter_values};
TypeUtils _SCSIM_array_int_64_Utils = {array_int_64_to_string,
	check_array_int_64_string,
	string_to_array_int_64,
	is_array_int_64_allow_double_convertion,
	0,
	compare_array_int_64_type,
	get_array_int_64_signature,
	get_array_int_64_filter_utils,
	array_int_64_filter_size,
	array_int_64_filter_values};
TypeUtils _SCSIM_struct__873_Utils = {struct__873_to_string,
	check_struct__873_string,
	string_to_struct__873,
	is_struct__873_allow_double_convertion,
	0,
	compare_struct__873_type,
	get_struct__873_signature,
	get_struct__873_filter_utils,
	struct__873_filter_size,
	struct__873_filter_values};
TypeUtils _SCSIM_array__878_Utils = {array__878_to_string,
	check_array__878_string,
	string_to_array__878,
	is_array__878_allow_double_convertion,
	0,
	compare_array__878_type,
	get_array__878_signature,
	get_array__878_filter_utils,
	array__878_filter_size,
	array__878_filter_values};
TypeUtils _SCSIM_struct__881_Utils = {struct__881_to_string,
	check_struct__881_string,
	string_to_struct__881,
	is_struct__881_allow_double_convertion,
	0,
	compare_struct__881_type,
	get_struct__881_signature,
	get_struct__881_filter_utils,
	struct__881_filter_size,
	struct__881_filter_values};
TypeUtils _SCSIM_array_int_2_Utils = {array_int_2_to_string,
	check_array_int_2_string,
	string_to_array_int_2,
	is_array_int_2_allow_double_convertion,
	0,
	compare_array_int_2_type,
	get_array_int_2_signature,
	get_array_int_2_filter_utils,
	array_int_2_filter_size,
	array_int_2_filter_values};
TypeUtils _SCSIM_array_int_2_32_Utils = {array_int_2_32_to_string,
	check_array_int_2_32_string,
	string_to_array_int_2_32,
	is_array_int_2_32_allow_double_convertion,
	0,
	compare_array_int_2_32_type,
	get_array_int_2_32_signature,
	get_array_int_2_32_filter_utils,
	array_int_2_32_filter_size,
	array_int_2_32_filter_values};
TypeUtils _SCSIM_array__895_Utils = {array__895_to_string,
	check_array__895_string,
	string_to_array__895,
	is_array__895_allow_double_convertion,
	0,
	compare_array__895_type,
	get_array__895_signature,
	get_array__895_filter_utils,
	array__895_filter_size,
	array__895_filter_values};
TypeUtils _SCSIM_struct__898_Utils = {struct__898_to_string,
	check_struct__898_string,
	string_to_struct__898,
	is_struct__898_allow_double_convertion,
	0,
	compare_struct__898_type,
	get_struct__898_signature,
	get_struct__898_filter_utils,
	struct__898_filter_size,
	struct__898_filter_values};
TypeUtils _SCSIM_array__903_Utils = {array__903_to_string,
	check_array__903_string,
	string_to_array__903,
	is_array__903_allow_double_convertion,
	0,
	compare_array__903_type,
	get_array__903_signature,
	get_array__903_filter_utils,
	array__903_filter_size,
	array__903_filter_values};
TypeUtils _SCSIM_array__906_Utils = {array__906_to_string,
	check_array__906_string,
	string_to_array__906,
	is_array__906_allow_double_convertion,
	0,
	compare_array__906_type,
	get_array__906_signature,
	get_array__906_filter_utils,
	array__906_filter_size,
	array__906_filter_values};
TypeUtils _SCSIM_struct__909_Utils = {struct__909_to_string,
	check_struct__909_string,
	string_to_struct__909,
	is_struct__909_allow_double_convertion,
	0,
	compare_struct__909_type,
	get_struct__909_signature,
	get_struct__909_filter_utils,
	struct__909_filter_size,
	struct__909_filter_values};
TypeUtils _SCSIM_array_int_500_500_Utils = {array_int_500_500_to_string,
	check_array_int_500_500_string,
	string_to_array_int_500_500,
	is_array_int_500_500_allow_double_convertion,
	0,
	compare_array_int_500_500_type,
	get_array_int_500_500_signature,
	get_array_int_500_500_filter_utils,
	array_int_500_500_filter_size,
	array_int_500_500_filter_values};
TypeUtils _SCSIM_array_int_494_Utils = {array_int_494_to_string,
	check_array_int_494_string,
	string_to_array_int_494,
	is_array_int_494_allow_double_convertion,
	0,
	compare_array_int_494_type,
	get_array_int_494_signature,
	get_array_int_494_filter_utils,
	array_int_494_filter_size,
	array_int_494_filter_values};
TypeUtils _SCSIM_array_int_6_Utils = {array_int_6_to_string,
	check_array_int_6_string,
	string_to_array_int_6,
	is_array_int_6_allow_double_convertion,
	0,
	compare_array_int_6_type,
	get_array_int_6_signature,
	get_array_int_6_filter_utils,
	array_int_6_filter_size,
	array_int_6_filter_values};
TypeUtils _SCSIM_array__933_Utils = {array__933_to_string,
	check_array__933_string,
	string_to_array__933,
	is_array__933_allow_double_convertion,
	0,
	compare_array__933_type,
	get_array__933_signature,
	get_array__933_filter_utils,
	array__933_filter_size,
	array__933_filter_values};
TypeUtils _SCSIM_array_int_2_32_32_Utils = {array_int_2_32_32_to_string,
	check_array_int_2_32_32_string,
	string_to_array_int_2_32_32,
	is_array_int_2_32_32_allow_double_convertion,
	0,
	compare_array_int_2_32_32_type,
	get_array_int_2_32_32_signature,
	get_array_int_2_32_32_filter_utils,
	array_int_2_32_32_filter_size,
	array_int_2_32_32_filter_values};
TypeUtils _SCSIM_array_int_432_Utils = {array_int_432_to_string,
	check_array_int_432_string,
	string_to_array_int_432,
	is_array_int_432_allow_double_convertion,
	0,
	compare_array_int_432_type,
	get_array_int_432_signature,
	get_array_int_432_filter_utils,
	array_int_432_filter_size,
	array_int_432_filter_values};
TypeUtils _SCSIM_array_int_4_Utils = {array_int_4_to_string,
	check_array_int_4_string,
	string_to_array_int_4,
	is_array_int_4_allow_double_convertion,
	0,
	compare_array_int_4_type,
	get_array_int_4_signature,
	get_array_int_4_filter_utils,
	array_int_4_filter_size,
	array_int_4_filter_values};
TypeUtils _SCSIM_array_int_68_Utils = {array_int_68_to_string,
	check_array_int_68_string,
	string_to_array_int_68,
	is_array_int_68_allow_double_convertion,
	0,
	compare_array_int_68_type,
	get_array_int_68_signature,
	get_array_int_68_filter_utils,
	array_int_68_filter_size,
	array_int_68_filter_values};
TypeUtils _SCSIM_array_int_33_Utils = {array_int_33_to_string,
	check_array_int_33_string,
	string_to_array_int_33,
	is_array_int_33_allow_double_convertion,
	0,
	compare_array_int_33_type,
	get_array_int_33_signature,
	get_array_int_33_filter_utils,
	array_int_33_filter_size,
	array_int_33_filter_values};
TypeUtils _SCSIM_NID_PACKET_Utils = {NID_PACKET_to_string,
	check_NID_PACKET_string,
	string_to_NID_PACKET,
	is_NID_PACKET_allow_double_convertion,
	NID_PACKET_to_double,
	compare_NID_PACKET_type,
	get_NID_PACKET_signature,
	get_NID_PACKET_filter_utils,
	NID_PACKET_filter_size,
	NID_PACKET_filter_values};
TypeUtils _SCSIM_Q_DIR_Utils = {Q_DIR_to_string,
	check_Q_DIR_string,
	string_to_Q_DIR,
	is_Q_DIR_allow_double_convertion,
	Q_DIR_to_double,
	compare_Q_DIR_type,
	get_Q_DIR_signature,
	get_Q_DIR_filter_utils,
	Q_DIR_filter_size,
	Q_DIR_filter_values};
TypeUtils _SCSIM_P027V1_trackside_int_T_TM_Utils = {P027V1_trackside_int_T_TM_to_string,
	check_P027V1_trackside_int_T_TM_string,
	string_to_P027V1_trackside_int_T_TM,
	is_P027V1_trackside_int_T_TM_allow_double_convertion,
	P027V1_trackside_int_T_TM_to_double,
	compare_P027V1_trackside_int_T_TM_type,
	get_P027V1_trackside_int_T_TM_signature,
	get_P027V1_trackside_int_T_TM_filter_utils,
	P027V1_trackside_int_T_TM_filter_size,
	P027V1_trackside_int_T_TM_filter_values};
TypeUtils _SCSIM_P027V1_trackide_qdifflist_T_TM_Utils = {P027V1_trackide_qdifflist_T_TM_to_string,
	check_P027V1_trackide_qdifflist_T_TM_string,
	string_to_P027V1_trackide_qdifflist_T_TM,
	is_P027V1_trackide_qdifflist_T_TM_allow_double_convertion,
	P027V1_trackide_qdifflist_T_TM_to_double,
	compare_P027V1_trackide_qdifflist_T_TM_type,
	get_P027V1_trackide_qdifflist_T_TM_signature,
	get_P027V1_trackide_qdifflist_T_TM_filter_utils,
	P027V1_trackide_qdifflist_T_TM_filter_size,
	P027V1_trackide_qdifflist_T_TM_filter_values};
TypeUtils _SCSIM_P027V1_section_int_qdiff_T_TM_Utils = {P027V1_section_int_qdiff_T_TM_to_string,
	check_P027V1_section_int_qdiff_T_TM_string,
	string_to_P027V1_section_int_qdiff_T_TM,
	is_P027V1_section_int_qdiff_T_TM_allow_double_convertion,
	P027V1_section_int_qdiff_T_TM_to_double,
	compare_P027V1_section_int_qdiff_T_TM_type,
	get_P027V1_section_int_qdiff_T_TM_signature,
	get_P027V1_section_int_qdiff_T_TM_filter_utils,
	P027V1_section_int_qdiff_T_TM_filter_size,
	P027V1_section_int_qdiff_T_TM_filter_values};
TypeUtils _SCSIM_P027V1_trackide_sectionlist_T_TM_Utils = {P027V1_trackide_sectionlist_T_TM_to_string,
	check_P027V1_trackide_sectionlist_T_TM_string,
	string_to_P027V1_trackide_sectionlist_T_TM,
	is_P027V1_trackide_sectionlist_T_TM_allow_double_convertion,
	P027V1_trackide_sectionlist_T_TM_to_double,
	compare_P027V1_trackide_sectionlist_T_TM_type,
	get_P027V1_trackide_sectionlist_T_TM_signature,
	get_P027V1_trackide_sectionlist_T_TM_filter_utils,
	P027V1_trackide_sectionlist_T_TM_filter_size,
	P027V1_trackide_sectionlist_T_TM_filter_values};
TypeUtils _SCSIM_P027V1_section_int_T_TM_Utils = {P027V1_section_int_T_TM_to_string,
	check_P027V1_section_int_T_TM_string,
	string_to_P027V1_section_int_T_TM,
	is_P027V1_section_int_T_TM_allow_double_convertion,
	P027V1_section_int_T_TM_to_double,
	compare_P027V1_section_int_T_TM_type,
	get_P027V1_section_int_T_TM_signature,
	get_P027V1_section_int_T_TM_filter_utils,
	P027V1_section_int_T_TM_filter_size,
	P027V1_section_int_T_TM_filter_values};
TypeUtils _SCSIM_nid_packet_meta_TM_Utils = {nid_packet_meta_TM_to_string,
	check_nid_packet_meta_TM_string,
	string_to_nid_packet_meta_TM,
	is_nid_packet_meta_TM_allow_double_convertion,
	nid_packet_meta_TM_to_double,
	compare_nid_packet_meta_TM_type,
	get_nid_packet_meta_TM_signature,
	get_nid_packet_meta_TM_filter_utils,
	nid_packet_meta_TM_filter_size,
	nid_packet_meta_TM_filter_values};
TypeUtils _SCSIM__2_P027V1_OBU_sectionlist_int_T_TM_Utils = {_2_P027V1_OBU_sectionlist_int_T_TM_to_string,
	check__2_P027V1_OBU_sectionlist_int_T_TM_string,
	string_to__2_P027V1_OBU_sectionlist_int_T_TM,
	is__2_P027V1_OBU_sectionlist_int_T_TM_allow_double_convertion,
	_2_P027V1_OBU_sectionlist_int_T_TM_to_double,
	compare__2_P027V1_OBU_sectionlist_int_T_TM_type,
	get__2_P027V1_OBU_sectionlist_int_T_TM_signature,
	get__2_P027V1_OBU_sectionlist_int_T_TM_filter_utils,
	_2_P027V1_OBU_sectionlist_int_T_TM_filter_size,
	_2_P027V1_OBU_sectionlist_int_T_TM_filter_values};
TypeUtils _SCSIM_P027V1_sections_array_flat_qdiff_T_TM_Utils = {P027V1_sections_array_flat_qdiff_T_TM_to_string,
	check_P027V1_sections_array_flat_qdiff_T_TM_string,
	string_to_P027V1_sections_array_flat_qdiff_T_TM,
	is_P027V1_sections_array_flat_qdiff_T_TM_allow_double_convertion,
	P027V1_sections_array_flat_qdiff_T_TM_to_double,
	compare_P027V1_sections_array_flat_qdiff_T_TM_type,
	get_P027V1_sections_array_flat_qdiff_T_TM_signature,
	get_P027V1_sections_array_flat_qdiff_T_TM_filter_utils,
	P027V1_sections_array_flat_qdiff_T_TM_filter_size,
	P027V1_sections_array_flat_qdiff_T_TM_filter_values};
TypeUtils _SCSIM__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_Utils = {_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_to_string,
	check__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_string,
	string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM,
	is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_allow_double_convertion,
	_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_to_double,
	compare__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_type,
	get__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_signature,
	get__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_filter_utils,
	_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_filter_size,
	_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_filter_values};
TypeUtils _SCSIM_P027V1_section_array_qdiff_T_TM_Utils = {P027V1_section_array_qdiff_T_TM_to_string,
	check_P027V1_section_array_qdiff_T_TM_string,
	string_to_P027V1_section_array_qdiff_T_TM,
	is_P027V1_section_array_qdiff_T_TM_allow_double_convertion,
	P027V1_section_array_qdiff_T_TM_to_double,
	compare_P027V1_section_array_qdiff_T_TM_type,
	get_P027V1_section_array_qdiff_T_TM_signature,
	get_P027V1_section_array_qdiff_T_TM_filter_utils,
	P027V1_section_array_qdiff_T_TM_filter_size,
	P027V1_section_array_qdiff_T_TM_filter_values};
TypeUtils _SCSIM_P027V1_OBU_sectionlist_int_qdiff_T_TM_Utils = {P027V1_OBU_sectionlist_int_qdiff_T_TM_to_string,
	check_P027V1_OBU_sectionlist_int_qdiff_T_TM_string,
	string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM,
	is_P027V1_OBU_sectionlist_int_qdiff_T_TM_allow_double_convertion,
	P027V1_OBU_sectionlist_int_qdiff_T_TM_to_double,
	compare_P027V1_OBU_sectionlist_int_qdiff_T_TM_type,
	get_P027V1_OBU_sectionlist_int_qdiff_T_TM_signature,
	get_P027V1_OBU_sectionlist_int_qdiff_T_TM_filter_utils,
	P027V1_OBU_sectionlist_int_qdiff_T_TM_filter_size,
	P027V1_OBU_sectionlist_int_qdiff_T_TM_filter_values};
TypeUtils _SCSIM_Metadata_T_Common_Types_Pkg_Utils = {Metadata_T_Common_Types_Pkg_to_string,
	check_Metadata_T_Common_Types_Pkg_string,
	string_to_Metadata_T_Common_Types_Pkg,
	is_Metadata_T_Common_Types_Pkg_allow_double_convertion,
	Metadata_T_Common_Types_Pkg_to_double,
	compare_Metadata_T_Common_Types_Pkg_type,
	get_Metadata_T_Common_Types_Pkg_signature,
	get_Metadata_T_Common_Types_Pkg_filter_utils,
	Metadata_T_Common_Types_Pkg_filter_size,
	Metadata_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_MetadataElement_T_Common_Types_Pkg_Utils = {MetadataElement_T_Common_Types_Pkg_to_string,
	check_MetadataElement_T_Common_Types_Pkg_string,
	string_to_MetadataElement_T_Common_Types_Pkg,
	is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion,
	MetadataElement_T_Common_Types_Pkg_to_double,
	compare_MetadataElement_T_Common_Types_Pkg_type,
	get_MetadataElement_T_Common_Types_Pkg_signature,
	get_MetadataElement_T_Common_Types_Pkg_filter_utils,
	MetadataElement_T_Common_Types_Pkg_filter_size,
	MetadataElement_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils = {CompressedPacketData_T_Common_Types_Pkg_to_string,
	check_CompressedPacketData_T_Common_Types_Pkg_string,
	string_to_CompressedPacketData_T_Common_Types_Pkg,
	is_CompressedPacketData_T_Common_Types_Pkg_allow_double_convertion,
	CompressedPacketData_T_Common_Types_Pkg_to_double,
	compare_CompressedPacketData_T_Common_Types_Pkg_type,
	get_CompressedPacketData_T_Common_Types_Pkg_signature,
	get_CompressedPacketData_T_Common_Types_Pkg_filter_utils,
	CompressedPacketData_T_Common_Types_Pkg_filter_size,
	CompressedPacketData_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils = {CompressedPackets_T_Common_Types_Pkg_to_string,
	check_CompressedPackets_T_Common_Types_Pkg_string,
	string_to_CompressedPackets_T_Common_Types_Pkg,
	is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion,
	CompressedPackets_T_Common_Types_Pkg_to_double,
	compare_CompressedPackets_T_Common_Types_Pkg_type,
	get_CompressedPackets_T_Common_Types_Pkg_signature,
	get_CompressedPackets_T_Common_Types_Pkg_filter_utils,
	CompressedPackets_T_Common_Types_Pkg_filter_size,
	CompressedPackets_T_Common_Types_Pkg_filter_values};

/****************************************************************
 ** kcg_real
 ****************************************************************/
struct SimTypeVTable* pSimDoubleVTable;
const char * kcg_real_to_string(const void* pValue) {
	if (pSimDoubleVTable != 0 && pSimDoubleVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		double value = (double)(*(const kcg_real*)pValue);
		return *(char**)pSimDoubleVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnRealToString((double)(*(const kcg_real*)pValue));
}

int string_to_kcg_real(const char* strValue, void* pValue) {
	double nTemp = 0;
	static double rTemp;
	int nResult;
	if (pSimDoubleVTable != 0 && pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimDoubleVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*(kcg_real*)pValue = (kcg_real)rTemp;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToReal(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_real*)pValue = (kcg_real)nTemp;
	return nResult;
}

int compare_kcg_real_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_real rTemp;
	const kcg_real* pCurrent = (const kcg_real*)pValue;
	if (string_to_kcg_real(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_real_allow_double_convertion() {
	if (pSimDoubleVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_real_to_double(double * nValue, const void* pValue) {
	if (pSimDoubleVTable != 0) {
		double value = (double)(*(const kcg_real*)pValue);
		if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimDoubleVTable->m_pfnToType(SptDouble, &value));
		else if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimDoubleVTable->m_pfnToType(SptFloat, &value));
		else if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimDoubleVTable->m_pfnToType(SptLong, &value));
		else if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimDoubleVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = (double)*((const kcg_real*)pValue);
	return 1;
}

const char * get_kcg_real_signature() {
	return "R";
}

int check_kcg_real_string(const char* strValue) {
	static kcg_real rTemp;
	return string_to_kcg_real(strValue, &rTemp);
}


/****************************************************************
 ** kcg_bool
 ****************************************************************/
struct SimTypeVTable* pSimBoolVTable;
const char * kcg_bool_to_string(const void* pValue) {
	if (pSimBoolVTable != 0 && pSimBoolVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
		return *(char**)pSimBoolVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnBoolToString((*(const kcg_bool*)pValue) == kcg_true ? 1 : 0);
}

int string_to_kcg_bool(const char* strValue, void* pValue) {
	int nTemp = 0;
	static SimBool rTemp;
	int nResult;
	if (pSimBoolVTable != 0 && pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimBoolVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((kcg_bool*)pValue) = (rTemp == SbTrue)? kcg_true : kcg_false;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToBool(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_bool*)pValue = nTemp == 1 ? kcg_true : kcg_false;
	return nResult;
}

int compare_kcg_bool_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_bool rTemp;
	const kcg_bool* pCurrent = (const kcg_bool*)pValue;
	if (string_to_kcg_bool(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_bool_allow_double_convertion() {
	if (pSimBoolVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_bool_to_double(double * nValue, const void* pValue) {
	if (pSimBoolVTable != 0) {
		SimBool value = (*(const kcg_bool*)pValue == kcg_true)? SbTrue : SbFalse;
		if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimBoolVTable->m_pfnToType(SptDouble, &value));
		else if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimBoolVTable->m_pfnToType(SptFloat, &value));
		else if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimBoolVTable->m_pfnToType(SptLong, &value));
		else if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimBoolVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = *((const kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
	return 1;
}

const char * get_kcg_bool_signature() {
	return "B";
}

int check_kcg_bool_string(const char* strValue) {
	static kcg_bool rTemp;
	return string_to_kcg_bool(strValue, &rTemp);
}


/****************************************************************
 ** kcg_char
 ****************************************************************/
struct SimTypeVTable* pSimCharVTable;
const char * kcg_char_to_string(const void* pValue) {
	if (pSimCharVTable != 0 && pSimCharVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		char value = (char)(*(const kcg_char*)pValue);
		return *(char**)pSimCharVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnCharToString((char)(*(const kcg_char*)pValue));
}

int string_to_kcg_char(const char* strValue, void* pValue) {
	char nTemp = 0;
	static char rTemp;
	int nResult;
	if (pSimCharVTable != 0 && pSimCharVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimCharVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*(kcg_char*)pValue = (kcg_char)rTemp;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToChar(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_char*)pValue = (kcg_char)nTemp;
	return nResult;
}

int compare_kcg_char_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_char rTemp;
	const kcg_char* pCurrent = (const kcg_char*)pValue;
	if (string_to_kcg_char(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_char_allow_double_convertion() {
	if (pSimCharVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_char_to_double(double * nValue, const void* pValue) {
	if (pSimCharVTable != 0) {
		char value = (char)(*(const kcg_char*)pValue);
		if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimCharVTable->m_pfnToType(SptDouble, &value));
		else if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimCharVTable->m_pfnToType(SptFloat, &value));
		else if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimCharVTable->m_pfnToType(SptLong, &value));
		else if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimCharVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = (double)*((const kcg_char*)pValue);
	return 1;
}

const char * get_kcg_char_signature() {
	return "C";
}

int check_kcg_char_string(const char* strValue) {
	static kcg_char rTemp;
	return string_to_kcg_char(strValue, &rTemp);
}


/****************************************************************
 ** kcg_int
 ****************************************************************/
struct SimTypeVTable* pSimLongVTable;
const char * kcg_int_to_string(const void* pValue) {
	if (pSimLongVTable != 0 && pSimLongVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		long value = (long)(*(const kcg_int*)pValue);
		return *(char**)pSimLongVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnIntToString(*(const int*)pValue);
}

int string_to_kcg_int(const char* strValue, void* pValue) {
	int nTemp = 0;
	static long rTemp;
	int nResult;
	if (pSimLongVTable != 0 && pSimLongVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimLongVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*(kcg_int*)pValue = (kcg_int)rTemp;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToInt(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_int*)pValue = (kcg_int)nTemp;
	return nResult;
}

int compare_kcg_int_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_int rTemp;
	const kcg_int* pCurrent = (const kcg_int*)pValue;
	if (string_to_kcg_int(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_int_allow_double_convertion() {
	if (pSimLongVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_int_to_double(double * nValue, const void* pValue) {
	if (pSimLongVTable != 0) {
		long value = (long)(*(const kcg_int*)pValue);
		if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimLongVTable->m_pfnToType(SptDouble, &value));
		else if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimLongVTable->m_pfnToType(SptFloat, &value));
		else if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimLongVTable->m_pfnToType(SptLong, &value));
		else if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimLongVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = (double)*((const kcg_int*)pValue);
	return 1;
}

const char * get_kcg_int_signature() {
	return "I";
}

int check_kcg_int_string(const char* strValue) {
	static kcg_int rTemp;
	return string_to_kcg_int(strValue, &rTemp);
}


/****************************************************************
 ** array_int_500
 ****************************************************************/
void* array_int_500_projection(void** pValues, int nIndex) {
	return &((*(array_int_500*)pValues)[nIndex]);
}

const char * array_int_500_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 500, array_int_500_projection);
}

int compare_array_int_500_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 500, array_int_500_projection);
}

int is_array_int_500_allow_double_convertion() {
	return 0;
}

int string_to_array_int_500(const char* strValue, void* pValue) {
	static array_int_500 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 500, array_int_500_projection);
	if (nResult == 1)
		kcg_copy_array_int_500(&(*((array_int_500*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_500_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 500);
}

FilterUtils get_array_int_500_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 500, array_int_500_projection);
}

int check_array_int_500_string(const char* strValue) {
	static array_int_500 rTemp;
	return string_to_array_int_500(strValue, &rTemp);
}


/****************************************************************
 ** struct__862
 ****************************************************************/
static void Fill_struct__862_StructSimValue(struct__862 * pStruct, StructSimValue * pValues) {
	/*nid_packet label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->nid_packet) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "nid_packet";
	/*q_dir label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->q_dir) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_Q_DIR_Utils;
	pValues[1].m_pszName = "q_dir";
	/*valid label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[2].m_pszName = "valid";
	/*startAddress label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->startAddress) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "startAddress";
	/*endAddress label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->endAddress) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "endAddress";
}

const char * struct__862_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__862_StructSimValue(((struct__862*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__862(const char* strValue, void* pValue) {
	static struct__862 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__862(&(rTemp), &(*((struct__862*)pValue)));
	Fill_struct__862_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__862(&(*((struct__862*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__862_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__862_StructSimValue((struct__862*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__862_allow_double_convertion() {
	return 0;
}


const char * get_struct__862_signature() {
	static StructSimValue values[5];
	Fill_struct__862_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__862_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__862_StructSimValue((struct__862*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__862_filter_values[5] = {"nid_packet", "q_dir", "valid", "startAddress", "endAddress"};
int check_struct__862_string(const char* strValue) {
	static struct__862 rTemp;
	return string_to_struct__862(strValue, &rTemp);
}


/****************************************************************
 ** array_int_64
 ****************************************************************/
void* array_int_64_projection(void** pValues, int nIndex) {
	return &((*(array_int_64*)pValues)[nIndex]);
}

const char * array_int_64_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 64, array_int_64_projection);
}

int compare_array_int_64_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 64, array_int_64_projection);
}

int is_array_int_64_allow_double_convertion() {
	return 0;
}

int string_to_array_int_64(const char* strValue, void* pValue) {
	static array_int_64 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 64, array_int_64_projection);
	if (nResult == 1)
		kcg_copy_array_int_64(&(*((array_int_64*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_64_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 64);
}

FilterUtils get_array_int_64_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 64, array_int_64_projection);
}

int check_array_int_64_string(const char* strValue) {
	static array_int_64 rTemp;
	return string_to_array_int_64(strValue, &rTemp);
}


/****************************************************************
 ** struct__873
 ****************************************************************/
static void Fill_struct__873_StructSimValue(struct__873 * pStruct, StructSimValue * pValues) {
	/*NC_DIFF label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->NC_DIFF) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "NC_DIFF";
	/*V_DIFF label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->V_DIFF) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "V_DIFF";
}

const char * struct__873_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__873_StructSimValue(((struct__873*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__873(const char* strValue, void* pValue) {
	static struct__873 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__873(&(rTemp), &(*((struct__873*)pValue)));
	Fill_struct__873_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__873(&(*((struct__873*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__873_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__873_StructSimValue((struct__873*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__873_allow_double_convertion() {
	return 0;
}


const char * get_struct__873_signature() {
	static StructSimValue values[2];
	Fill_struct__873_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__873_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__873_StructSimValue((struct__873*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__873_filter_values[2] = {"NC_DIFF", "V_DIFF"};
int check_struct__873_string(const char* strValue) {
	static struct__873 rTemp;
	return string_to_struct__873(strValue, &rTemp);
}


/****************************************************************
 ** array__878
 ****************************************************************/
void* array__878_projection(void** pValues, int nIndex) {
	return &((*(array__878*)pValues)[nIndex]);
}

const char * array__878_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__873_to_string, 32, array__878_projection);
}

int compare_array__878_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__873_type , 32, array__878_projection);
}

int is_array__878_allow_double_convertion() {
	return 0;
}

int string_to_array__878(const char* strValue, void* pValue) {
	static array__878 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__873, 32, array__878_projection);
	if (nResult == 1)
		kcg_copy_array__878(&(*((array__878*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__878_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__873_signature, 32);
}

FilterUtils get_array__878_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__873_Utils, strFilter, (void**)pValue, 32, array__878_projection);
}

int check_array__878_string(const char* strValue) {
	static array__878 rTemp;
	return string_to_array__878(strValue, &rTemp);
}


/****************************************************************
 ** struct__881
 ****************************************************************/
static void Fill_struct__881_StructSimValue(struct__881 * pStruct, StructSimValue * pValues) {
	/*D_STATIC label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->D_STATIC) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "D_STATIC";
	/*V_STATIC label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->V_STATIC) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "V_STATIC";
	/*Q_FRONT label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->Q_FRONT) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "Q_FRONT";
	/*N_ITER label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->N_ITER) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "N_ITER";
	/*SECTIONS_q_diff label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->SECTIONS_q_diff) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_array__878_Utils;
	pValues[4].m_pszName = "SECTIONS_q_diff";
}

const char * struct__881_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__881_StructSimValue(((struct__881*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__881(const char* strValue, void* pValue) {
	static struct__881 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__881(&(rTemp), &(*((struct__881*)pValue)));
	Fill_struct__881_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__881(&(*((struct__881*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__881_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__881_StructSimValue((struct__881*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__881_allow_double_convertion() {
	return 0;
}


const char * get_struct__881_signature() {
	static StructSimValue values[5];
	Fill_struct__881_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__881_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__881_StructSimValue((struct__881*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__881_filter_values[5] = {"D_STATIC", "V_STATIC", "Q_FRONT", "N_ITER", "SECTIONS_q_diff"};
int check_struct__881_string(const char* strValue) {
	static struct__881 rTemp;
	return string_to_struct__881(strValue, &rTemp);
}


/****************************************************************
 ** array_int_2
 ****************************************************************/
void* array_int_2_projection(void** pValues, int nIndex) {
	return &((*(array_int_2*)pValues)[nIndex]);
}

const char * array_int_2_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 2, array_int_2_projection);
}

int compare_array_int_2_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 2, array_int_2_projection);
}

int is_array_int_2_allow_double_convertion() {
	return 0;
}

int string_to_array_int_2(const char* strValue, void* pValue) {
	static array_int_2 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 2, array_int_2_projection);
	if (nResult == 1)
		kcg_copy_array_int_2(&(*((array_int_2*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_2_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 2);
}

FilterUtils get_array_int_2_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 2, array_int_2_projection);
}

int check_array_int_2_string(const char* strValue) {
	static array_int_2 rTemp;
	return string_to_array_int_2(strValue, &rTemp);
}


/****************************************************************
 ** array_int_2_32
 ****************************************************************/
void* array_int_2_32_projection(void** pValues, int nIndex) {
	return &((*(array_int_2_32*)pValues)[nIndex]);
}

const char * array_int_2_32_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_int_2_to_string, 32, array_int_2_32_projection);
}

int compare_array_int_2_32_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_int_2_type , 32, array_int_2_32_projection);
}

int is_array_int_2_32_allow_double_convertion() {
	return 0;
}

int string_to_array_int_2_32(const char* strValue, void* pValue) {
	static array_int_2_32 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_int_2, 32, array_int_2_32_projection);
	if (nResult == 1)
		kcg_copy_array_int_2_32(&(*((array_int_2_32*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_2_32_signature() {
	return pSimulator->m_pfnArraySignature(get_array_int_2_signature, 32);
}

FilterUtils get_array_int_2_32_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_int_2_Utils, strFilter, (void**)pValue, 32, array_int_2_32_projection);
}

int check_array_int_2_32_string(const char* strValue) {
	static array_int_2_32 rTemp;
	return string_to_array_int_2_32(strValue, &rTemp);
}


/****************************************************************
 ** array__895
 ****************************************************************/
void* array__895_projection(void** pValues, int nIndex) {
	return &((*(array__895*)pValues)[nIndex]);
}

const char * array__895_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__862_to_string, 30, array__895_projection);
}

int compare_array__895_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__862_type , 30, array__895_projection);
}

int is_array__895_allow_double_convertion() {
	return 0;
}

int string_to_array__895(const char* strValue, void* pValue) {
	static array__895 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__862, 30, array__895_projection);
	if (nResult == 1)
		kcg_copy_array__895(&(*((array__895*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__895_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__862_signature, 30);
}

FilterUtils get_array__895_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__862_Utils, strFilter, (void**)pValue, 30, array__895_projection);
}

int check_array__895_string(const char* strValue) {
	static array__895 rTemp;
	return string_to_array__895(strValue, &rTemp);
}


/****************************************************************
 ** struct__898
 ****************************************************************/
static void Fill_struct__898_StructSimValue(struct__898 * pStruct, StructSimValue * pValues) {
	/*PacketHeaders label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->PacketHeaders) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_array__895_Utils;
	pValues[0].m_pszName = "PacketHeaders";
	/*PacketData label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->PacketData) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_array_int_500_Utils;
	pValues[1].m_pszName = "PacketData";
}

const char * struct__898_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__898_StructSimValue(((struct__898*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__898(const char* strValue, void* pValue) {
	static struct__898 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__898(&(rTemp), &(*((struct__898*)pValue)));
	Fill_struct__898_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__898(&(*((struct__898*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__898_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__898_StructSimValue((struct__898*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__898_allow_double_convertion() {
	return 0;
}


const char * get_struct__898_signature() {
	static StructSimValue values[2];
	Fill_struct__898_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__898_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__898_StructSimValue((struct__898*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__898_filter_values[2] = {"PacketHeaders", "PacketData"};
int check_struct__898_string(const char* strValue) {
	static struct__898 rTemp;
	return string_to_struct__898(strValue, &rTemp);
}


/****************************************************************
 ** array__903
 ****************************************************************/
void* array__903_projection(void** pValues, int nIndex) {
	return &((*(array__903*)pValues)[nIndex]);
}

const char * array__903_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__881_to_string, 33, array__903_projection);
}

int compare_array__903_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__881_type , 33, array__903_projection);
}

int is_array__903_allow_double_convertion() {
	return 0;
}

int string_to_array__903(const char* strValue, void* pValue) {
	static array__903 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__881, 33, array__903_projection);
	if (nResult == 1)
		kcg_copy_array__903(&(*((array__903*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__903_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__881_signature, 33);
}

FilterUtils get_array__903_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__881_Utils, strFilter, (void**)pValue, 33, array__903_projection);
}

int check_array__903_string(const char* strValue) {
	static array__903 rTemp;
	return string_to_array__903(strValue, &rTemp);
}


/****************************************************************
 ** array__906
 ****************************************************************/
void* array__906_projection(void** pValues, int nIndex) {
	return &((*(array__906*)pValues)[nIndex]);
}

const char * array__906_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__881_to_string, 32, array__906_projection);
}

int compare_array__906_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__881_type , 32, array__906_projection);
}

int is_array__906_allow_double_convertion() {
	return 0;
}

int string_to_array__906(const char* strValue, void* pValue) {
	static array__906 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__881, 32, array__906_projection);
	if (nResult == 1)
		kcg_copy_array__906(&(*((array__906*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__906_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__881_signature, 32);
}

FilterUtils get_array__906_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__881_Utils, strFilter, (void**)pValue, 32, array__906_projection);
}

int check_array__906_string(const char* strValue) {
	static array__906 rTemp;
	return string_to_array__906(strValue, &rTemp);
}


/****************************************************************
 ** struct__909
 ****************************************************************/
static void Fill_struct__909_StructSimValue(struct__909 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*NID_PACKET label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->NID_PACKET) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "NID_PACKET";
	/*Q_DIR label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->Q_DIR) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "Q_DIR";
	/*L_PACKET label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->L_PACKET) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "L_PACKET";
	/*Q_SCALE label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->Q_SCALE) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "Q_SCALE";
	/*D_STATIC label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->D_STATIC) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "D_STATIC";
	/*V_STATIC label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->V_STATIC) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "V_STATIC";
	/*Q_FRONT label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->Q_FRONT) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "Q_FRONT";
	/*N_ITER_n label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->N_ITER_n) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[8].m_pszName = "N_ITER_n";
	/*SECTIONS_q_diff label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->SECTIONS_q_diff) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_array__878_Utils;
	pValues[9].m_pszName = "SECTIONS_q_diff";
	/*N_ITER_k label.*/
	pValues[10].m_pPtr = pStruct != 0 ? &(pStruct->N_ITER_k) : 0;
	pValues[10].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[10].m_pszName = "N_ITER_k";
	/*SECTIONS_SSP label.*/
	pValues[11].m_pPtr = pStruct != 0 ? &(pStruct->SECTIONS_SSP) : 0;
	pValues[11].m_pTypeUtils = &_SCSIM_array__906_Utils;
	pValues[11].m_pszName = "SECTIONS_SSP";
}

const char * struct__909_to_string(const void* pValue) {
	static StructSimValue values[12];
	Fill_struct__909_StructSimValue(((struct__909*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 12);
}

int string_to_struct__909(const char* strValue, void* pValue) {
	static struct__909 rTemp;
	int nResult = 0;
	static StructSimValue values[12];
	kcg_copy_struct__909(&(rTemp), &(*((struct__909*)pValue)));
	Fill_struct__909_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 12);
	if (nResult == 1)
		kcg_copy_struct__909(&(*((struct__909*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__909_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[12];
	Fill_struct__909_StructSimValue((struct__909*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 12);
}


int is_struct__909_allow_double_convertion() {
	return 0;
}


const char * get_struct__909_signature() {
	static StructSimValue values[12];
	Fill_struct__909_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 12);
}

FilterUtils get_struct__909_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[12];
	Fill_struct__909_StructSimValue((struct__909*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 12, strFilter);
}

const char * struct__909_filter_values[12] = {"valid", "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_STATIC", "V_STATIC", "Q_FRONT", "N_ITER_n", "SECTIONS_q_diff", "N_ITER_k", "SECTIONS_SSP"};
int check_struct__909_string(const char* strValue) {
	static struct__909 rTemp;
	return string_to_struct__909(strValue, &rTemp);
}


/****************************************************************
 ** array_int_500_500
 ****************************************************************/
void* array_int_500_500_projection(void** pValues, int nIndex) {
	return &((*(array_int_500_500*)pValues)[nIndex]);
}

const char * array_int_500_500_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_int_500_to_string, 500, array_int_500_500_projection);
}

int compare_array_int_500_500_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_int_500_type , 500, array_int_500_500_projection);
}

int is_array_int_500_500_allow_double_convertion() {
	return 0;
}

int string_to_array_int_500_500(const char* strValue, void* pValue) {
	static array_int_500_500 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_int_500, 500, array_int_500_500_projection);
	if (nResult == 1)
		kcg_copy_array_int_500_500(&(*((array_int_500_500*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_500_500_signature() {
	return pSimulator->m_pfnArraySignature(get_array_int_500_signature, 500);
}

FilterUtils get_array_int_500_500_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_int_500_Utils, strFilter, (void**)pValue, 500, array_int_500_500_projection);
}

int check_array_int_500_500_string(const char* strValue) {
	static array_int_500_500 rTemp;
	return string_to_array_int_500_500(strValue, &rTemp);
}


/****************************************************************
 ** array_int_494
 ****************************************************************/
void* array_int_494_projection(void** pValues, int nIndex) {
	return &((*(array_int_494*)pValues)[nIndex]);
}

const char * array_int_494_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 494, array_int_494_projection);
}

int compare_array_int_494_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 494, array_int_494_projection);
}

int is_array_int_494_allow_double_convertion() {
	return 0;
}

int string_to_array_int_494(const char* strValue, void* pValue) {
	static array_int_494 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 494, array_int_494_projection);
	if (nResult == 1)
		kcg_copy_array_int_494(&(*((array_int_494*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_494_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 494);
}

FilterUtils get_array_int_494_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 494, array_int_494_projection);
}

int check_array_int_494_string(const char* strValue) {
	static array_int_494 rTemp;
	return string_to_array_int_494(strValue, &rTemp);
}


/****************************************************************
 ** array_int_6
 ****************************************************************/
void* array_int_6_projection(void** pValues, int nIndex) {
	return &((*(array_int_6*)pValues)[nIndex]);
}

const char * array_int_6_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 6, array_int_6_projection);
}

int compare_array_int_6_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 6, array_int_6_projection);
}

int is_array_int_6_allow_double_convertion() {
	return 0;
}

int string_to_array_int_6(const char* strValue, void* pValue) {
	static array_int_6 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 6, array_int_6_projection);
	if (nResult == 1)
		kcg_copy_array_int_6(&(*((array_int_6*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_6_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 6);
}

FilterUtils get_array_int_6_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 6, array_int_6_projection);
}

int check_array_int_6_string(const char* strValue) {
	static array_int_6 rTemp;
	return string_to_array_int_6(strValue, &rTemp);
}


/****************************************************************
 ** array__933
 ****************************************************************/
void* array__933_projection(void** pValues, int nIndex) {
	return &((*(array__933*)pValues)[nIndex]);
}

const char * array__933_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__881_to_string, 1, array__933_projection);
}

int compare_array__933_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__881_type , 1, array__933_projection);
}

int is_array__933_allow_double_convertion() {
	return 0;
}

int string_to_array__933(const char* strValue, void* pValue) {
	static array__933 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__881, 1, array__933_projection);
	if (nResult == 1)
		kcg_copy_array__933(&(*((array__933*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__933_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__881_signature, 1);
}

FilterUtils get_array__933_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__881_Utils, strFilter, (void**)pValue, 1, array__933_projection);
}

int check_array__933_string(const char* strValue) {
	static array__933 rTemp;
	return string_to_array__933(strValue, &rTemp);
}


/****************************************************************
 ** array_int_2_32_32
 ****************************************************************/
void* array_int_2_32_32_projection(void** pValues, int nIndex) {
	return &((*(array_int_2_32_32*)pValues)[nIndex]);
}

const char * array_int_2_32_32_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_int_2_32_to_string, 32, array_int_2_32_32_projection);
}

int compare_array_int_2_32_32_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_int_2_32_type , 32, array_int_2_32_32_projection);
}

int is_array_int_2_32_32_allow_double_convertion() {
	return 0;
}

int string_to_array_int_2_32_32(const char* strValue, void* pValue) {
	static array_int_2_32_32 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_int_2_32, 32, array_int_2_32_32_projection);
	if (nResult == 1)
		kcg_copy_array_int_2_32_32(&(*((array_int_2_32_32*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_2_32_32_signature() {
	return pSimulator->m_pfnArraySignature(get_array_int_2_32_signature, 32);
}

FilterUtils get_array_int_2_32_32_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_int_2_32_Utils, strFilter, (void**)pValue, 32, array_int_2_32_32_projection);
}

int check_array_int_2_32_32_string(const char* strValue) {
	static array_int_2_32_32 rTemp;
	return string_to_array_int_2_32_32(strValue, &rTemp);
}


/****************************************************************
 ** array_int_432
 ****************************************************************/
void* array_int_432_projection(void** pValues, int nIndex) {
	return &((*(array_int_432*)pValues)[nIndex]);
}

const char * array_int_432_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 432, array_int_432_projection);
}

int compare_array_int_432_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 432, array_int_432_projection);
}

int is_array_int_432_allow_double_convertion() {
	return 0;
}

int string_to_array_int_432(const char* strValue, void* pValue) {
	static array_int_432 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 432, array_int_432_projection);
	if (nResult == 1)
		kcg_copy_array_int_432(&(*((array_int_432*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_432_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 432);
}

FilterUtils get_array_int_432_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 432, array_int_432_projection);
}

int check_array_int_432_string(const char* strValue) {
	static array_int_432 rTemp;
	return string_to_array_int_432(strValue, &rTemp);
}


/****************************************************************
 ** array_int_4
 ****************************************************************/
void* array_int_4_projection(void** pValues, int nIndex) {
	return &((*(array_int_4*)pValues)[nIndex]);
}

const char * array_int_4_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 4, array_int_4_projection);
}

int compare_array_int_4_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 4, array_int_4_projection);
}

int is_array_int_4_allow_double_convertion() {
	return 0;
}

int string_to_array_int_4(const char* strValue, void* pValue) {
	static array_int_4 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 4, array_int_4_projection);
	if (nResult == 1)
		kcg_copy_array_int_4(&(*((array_int_4*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_4_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 4);
}

FilterUtils get_array_int_4_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 4, array_int_4_projection);
}

int check_array_int_4_string(const char* strValue) {
	static array_int_4 rTemp;
	return string_to_array_int_4(strValue, &rTemp);
}


/****************************************************************
 ** array_int_68
 ****************************************************************/
void* array_int_68_projection(void** pValues, int nIndex) {
	return &((*(array_int_68*)pValues)[nIndex]);
}

const char * array_int_68_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 68, array_int_68_projection);
}

int compare_array_int_68_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 68, array_int_68_projection);
}

int is_array_int_68_allow_double_convertion() {
	return 0;
}

int string_to_array_int_68(const char* strValue, void* pValue) {
	static array_int_68 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 68, array_int_68_projection);
	if (nResult == 1)
		kcg_copy_array_int_68(&(*((array_int_68*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_68_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 68);
}

FilterUtils get_array_int_68_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 68, array_int_68_projection);
}

int check_array_int_68_string(const char* strValue) {
	static array_int_68 rTemp;
	return string_to_array_int_68(strValue, &rTemp);
}


/****************************************************************
 ** array_int_33
 ****************************************************************/
void* array_int_33_projection(void** pValues, int nIndex) {
	return &((*(array_int_33*)pValues)[nIndex]);
}

const char * array_int_33_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 33, array_int_33_projection);
}

int compare_array_int_33_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 33, array_int_33_projection);
}

int is_array_int_33_allow_double_convertion() {
	return 0;
}

int string_to_array_int_33(const char* strValue, void* pValue) {
	static array_int_33 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 33, array_int_33_projection);
	if (nResult == 1)
		kcg_copy_array_int_33(&(*((array_int_33*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_33_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 33);
}

FilterUtils get_array_int_33_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 33, array_int_33_projection);
}

int check_array_int_33_string(const char* strValue) {
	static array_int_33 rTemp;
	return string_to_array_int_33(strValue, &rTemp);
}


/****************************************************************
 ** NID_PACKET
 ****************************************************************/
struct SimTypeVTable* pSimNID_PACKETVTable;
const char * NID_PACKET_to_string(const void* pValue) {
	if (pSimNID_PACKETVTable != 0 && pSimNID_PACKETVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_PACKETVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_PACKET(const char* strValue, void* pValue) {
	if (pSimNID_PACKETVTable != 0 && pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_PACKET rTemp;
		int nResult = pSimNID_PACKETVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_PACKET*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_PACKET_allow_double_convertion() {
	if (pSimNID_PACKETVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_PACKET_to_double(double * nValue, const void* pValue) {
	if (pSimNID_PACKETVTable != 0) {
		if (pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_PACKETVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_PACKETVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_PACKETVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_PACKETVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_PACKET_string(const char* strValue) {
	static NID_PACKET rTemp;
	return string_to_NID_PACKET(strValue, &rTemp);
}


/****************************************************************
 ** Q_DIR
 ****************************************************************/
struct SimTypeVTable* pSimQ_DIRVTable;
const char * Q_DIR_to_string(const void* pValue) {
	if (pSimQ_DIRVTable != 0 && pSimQ_DIRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_DIRVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_DIR*)pValue)) {
	case Q_DIR_Reverse:
		return "Q_DIR_Reverse";
	case Q_DIR_Nominal:
		return "Q_DIR_Nominal";
	case Q_DIR_Both_directions:
		return "Q_DIR_Both_directions";
	default:
		return "?";
	}
}

int string_to_Q_DIR(const char* strValue, void* pValue) {
	if (pSimQ_DIRVTable != 0 && pSimQ_DIRVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_DIR rTemp;		int nResult = pSimQ_DIRVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_DIR*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_DIR_Reverse") == 0)
		*((Q_DIR*)pValue) = Q_DIR_Reverse;
	else if(strcmp(strValue, "Q_DIR_Nominal") == 0)
		*((Q_DIR*)pValue) = Q_DIR_Nominal;
	else if(strcmp(strValue, "Q_DIR_Both_directions") == 0)
		*((Q_DIR*)pValue) = Q_DIR_Both_directions;
	else 
		return 0;
	return 1;
}

int is_Q_DIR_allow_double_convertion() {
	return 1;
}


int Q_DIR_to_double(double * nValue, const void* pValue) {
	switch (*((Q_DIR*)pValue)) {
	case Q_DIR_Reverse:
		*nValue = 0.0;
		break;
	case Q_DIR_Nominal:
		*nValue = 1.0;
		break;
	case Q_DIR_Both_directions:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_DIR_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_DIR rTemp;
	const Q_DIR* pCurrent = (const Q_DIR*)pValue;
	if (string_to_Q_DIR(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_DIR_signature() {
	return "E"
		"|Q_DIR_Reverse"
		"|Q_DIR_Nominal"
		"|Q_DIR_Both_directions"
		;
}

int check_Q_DIR_string(const char* strValue) {
	static Q_DIR rTemp;
	return string_to_Q_DIR(strValue, &rTemp);
}


/****************************************************************
 ** P027V1_trackside_int_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP027V1_trackside_int_T_TMVTable;
const char * P027V1_trackside_int_T_TM_to_string(const void* pValue) {
	if (pSimP027V1_trackside_int_T_TMVTable != 0 && pSimP027V1_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP027V1_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue);
	return struct__909_to_string(pValue);
}

int string_to_P027V1_trackside_int_T_TM(const char* strValue, void* pValue) {
	if (pSimP027V1_trackside_int_T_TMVTable != 0 && pSimP027V1_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P027V1_trackside_int_T_TM rTemp;
		int nResult = pSimP027V1_trackside_int_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__909(&(*((P027V1_trackside_int_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__909(strValue, pValue);
}

int is_P027V1_trackside_int_T_TM_allow_double_convertion() {
	if (pSimP027V1_trackside_int_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP027V1_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP027V1_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP027V1_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP027V1_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__909_allow_double_convertion();
}

int P027V1_trackside_int_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP027V1_trackside_int_T_TMVTable != 0) {
		if (pSimP027V1_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP027V1_trackside_int_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP027V1_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP027V1_trackside_int_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP027V1_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP027V1_trackside_int_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP027V1_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP027V1_trackside_int_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__909_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__909_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P027V1_trackside_int_T_TM_string(const char* strValue) {
	static P027V1_trackside_int_T_TM rTemp;
	return string_to_P027V1_trackside_int_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P027V1_trackide_qdifflist_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP027V1_trackide_qdifflist_T_TMVTable;
const char * P027V1_trackide_qdifflist_T_TM_to_string(const void* pValue) {
	if (pSimP027V1_trackide_qdifflist_T_TMVTable != 0 && pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnToType(SptString, pValue);
	return array__878_to_string(pValue);
}

int string_to_P027V1_trackide_qdifflist_T_TM(const char* strValue, void* pValue) {
	if (pSimP027V1_trackide_qdifflist_T_TMVTable != 0 && pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P027V1_trackide_qdifflist_T_TM rTemp;
		int nResult = pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__878(&(*((P027V1_trackide_qdifflist_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__878(strValue, pValue);
}

int is_P027V1_trackide_qdifflist_T_TM_allow_double_convertion() {
	if (pSimP027V1_trackide_qdifflist_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__878_allow_double_convertion();
}

int P027V1_trackide_qdifflist_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP027V1_trackide_qdifflist_T_TMVTable != 0) {
		if (pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__878_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__878_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P027V1_trackide_qdifflist_T_TM_string(const char* strValue) {
	static P027V1_trackide_qdifflist_T_TM rTemp;
	return string_to_P027V1_trackide_qdifflist_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P027V1_section_int_qdiff_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP027V1_section_int_qdiff_T_TMVTable;
const char * P027V1_section_int_qdiff_T_TM_to_string(const void* pValue) {
	if (pSimP027V1_section_int_qdiff_T_TMVTable != 0 && pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnToType(SptString, pValue);
	return struct__873_to_string(pValue);
}

int string_to_P027V1_section_int_qdiff_T_TM(const char* strValue, void* pValue) {
	if (pSimP027V1_section_int_qdiff_T_TMVTable != 0 && pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P027V1_section_int_qdiff_T_TM rTemp;
		int nResult = pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__873(&(*((P027V1_section_int_qdiff_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__873(strValue, pValue);
}

int is_P027V1_section_int_qdiff_T_TM_allow_double_convertion() {
	if (pSimP027V1_section_int_qdiff_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__873_allow_double_convertion();
}

int P027V1_section_int_qdiff_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP027V1_section_int_qdiff_T_TMVTable != 0) {
		if (pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__873_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__873_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P027V1_section_int_qdiff_T_TM_string(const char* strValue) {
	static P027V1_section_int_qdiff_T_TM rTemp;
	return string_to_P027V1_section_int_qdiff_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P027V1_trackide_sectionlist_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP027V1_trackide_sectionlist_T_TMVTable;
const char * P027V1_trackide_sectionlist_T_TM_to_string(const void* pValue) {
	if (pSimP027V1_trackide_sectionlist_T_TMVTable != 0 && pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue);
	return array__906_to_string(pValue);
}

int string_to_P027V1_trackide_sectionlist_T_TM(const char* strValue, void* pValue) {
	if (pSimP027V1_trackide_sectionlist_T_TMVTable != 0 && pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P027V1_trackide_sectionlist_T_TM rTemp;
		int nResult = pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__906(&(*((P027V1_trackide_sectionlist_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__906(strValue, pValue);
}

int is_P027V1_trackide_sectionlist_T_TM_allow_double_convertion() {
	if (pSimP027V1_trackide_sectionlist_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__906_allow_double_convertion();
}

int P027V1_trackide_sectionlist_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP027V1_trackide_sectionlist_T_TMVTable != 0) {
		if (pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__906_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__906_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P027V1_trackide_sectionlist_T_TM_string(const char* strValue) {
	static P027V1_trackide_sectionlist_T_TM rTemp;
	return string_to_P027V1_trackide_sectionlist_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P027V1_section_int_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP027V1_section_int_T_TMVTable;
const char * P027V1_section_int_T_TM_to_string(const void* pValue) {
	if (pSimP027V1_section_int_T_TMVTable != 0 && pSimP027V1_section_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP027V1_section_int_T_TMVTable->m_pfnToType(SptString, pValue);
	return struct__881_to_string(pValue);
}

int string_to_P027V1_section_int_T_TM(const char* strValue, void* pValue) {
	if (pSimP027V1_section_int_T_TMVTable != 0 && pSimP027V1_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P027V1_section_int_T_TM rTemp;
		int nResult = pSimP027V1_section_int_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__881(&(*((P027V1_section_int_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__881(strValue, pValue);
}

int is_P027V1_section_int_T_TM_allow_double_convertion() {
	if (pSimP027V1_section_int_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP027V1_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP027V1_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP027V1_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP027V1_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__881_allow_double_convertion();
}

int P027V1_section_int_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP027V1_section_int_T_TMVTable != 0) {
		if (pSimP027V1_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP027V1_section_int_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP027V1_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP027V1_section_int_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP027V1_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP027V1_section_int_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP027V1_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP027V1_section_int_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__881_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__881_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P027V1_section_int_T_TM_string(const char* strValue) {
	static P027V1_section_int_T_TM rTemp;
	return string_to_P027V1_section_int_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** nid_packet_meta_TM
 ****************************************************************/
struct SimTypeVTable* pSimnid_packet_meta_TMVTable;
const char * nid_packet_meta_TM_to_string(const void* pValue) {
	if (pSimnid_packet_meta_TMVTable != 0 && pSimnid_packet_meta_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimnid_packet_meta_TMVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_nid_packet_meta_TM(const char* strValue, void* pValue) {
	if (pSimnid_packet_meta_TMVTable != 0 && pSimnid_packet_meta_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static nid_packet_meta_TM rTemp;
		int nResult = pSimnid_packet_meta_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((nid_packet_meta_TM*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_nid_packet_meta_TM_allow_double_convertion() {
	if (pSimnid_packet_meta_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimnid_packet_meta_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimnid_packet_meta_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimnid_packet_meta_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimnid_packet_meta_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int nid_packet_meta_TM_to_double(double * nValue, const void* pValue) {
	if (pSimnid_packet_meta_TMVTable != 0) {
		if (pSimnid_packet_meta_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimnid_packet_meta_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimnid_packet_meta_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimnid_packet_meta_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimnid_packet_meta_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimnid_packet_meta_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimnid_packet_meta_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimnid_packet_meta_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_nid_packet_meta_TM_string(const char* strValue) {
	static nid_packet_meta_TM rTemp;
	return string_to_nid_packet_meta_TM(strValue, &rTemp);
}


/****************************************************************
 ** _2_P027V1_OBU_sectionlist_int_T_TM
 ****************************************************************/
struct SimTypeVTable* pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable;
const char * _2_P027V1_OBU_sectionlist_int_T_TM_to_string(const void* pValue) {
	if (pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable != 0 && pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue);
	return array__903_to_string(pValue);
}

int string_to__2_P027V1_OBU_sectionlist_int_T_TM(const char* strValue, void* pValue) {
	if (pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable != 0 && pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static _2_P027V1_OBU_sectionlist_int_T_TM rTemp;
		int nResult = pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__903(&(*((_2_P027V1_OBU_sectionlist_int_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__903(strValue, pValue);
}

int is__2_P027V1_OBU_sectionlist_int_T_TM_allow_double_convertion() {
	if (pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__903_allow_double_convertion();
}

int _2_P027V1_OBU_sectionlist_int_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable != 0) {
		if (pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSim_2_P027V1_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__903_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__903_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check__2_P027V1_OBU_sectionlist_int_T_TM_string(const char* strValue) {
	static _2_P027V1_OBU_sectionlist_int_T_TM rTemp;
	return string_to__2_P027V1_OBU_sectionlist_int_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P027V1_sections_array_flat_qdiff_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP027V1_sections_array_flat_qdiff_T_TMVTable;
const char * P027V1_sections_array_flat_qdiff_T_TM_to_string(const void* pValue) {
	if (pSimP027V1_sections_array_flat_qdiff_T_TMVTable != 0 && pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnToType(SptString, pValue);
	return array_int_64_to_string(pValue);
}

int string_to_P027V1_sections_array_flat_qdiff_T_TM(const char* strValue, void* pValue) {
	if (pSimP027V1_sections_array_flat_qdiff_T_TMVTable != 0 && pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P027V1_sections_array_flat_qdiff_T_TM rTemp;
		int nResult = pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_64(&(*((P027V1_sections_array_flat_qdiff_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_64(strValue, pValue);
}

int is_P027V1_sections_array_flat_qdiff_T_TM_allow_double_convertion() {
	if (pSimP027V1_sections_array_flat_qdiff_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_64_allow_double_convertion();
}

int P027V1_sections_array_flat_qdiff_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP027V1_sections_array_flat_qdiff_T_TMVTable != 0) {
		if (pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP027V1_sections_array_flat_qdiff_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_64_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_64_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P027V1_sections_array_flat_qdiff_T_TM_string(const char* strValue) {
	static P027V1_sections_array_flat_qdiff_T_TM rTemp;
	return string_to_P027V1_sections_array_flat_qdiff_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** _1_P027V1_OBU_sectionlist_array_qdiff_T_TM
 ****************************************************************/
struct SimTypeVTable* pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable;
const char * _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_to_string(const void* pValue) {
	if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable != 0 && pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnToType(SptString, pValue);
	return array_int_2_32_to_string(pValue);
}

int string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM(const char* strValue, void* pValue) {
	if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable != 0 && pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static _1_P027V1_OBU_sectionlist_array_qdiff_T_TM rTemp;
		int nResult = pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_2_32(&(*((_1_P027V1_OBU_sectionlist_array_qdiff_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_2_32(strValue, pValue);
}

int is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_allow_double_convertion() {
	if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_2_32_allow_double_convertion();
}

int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable != 0) {
		if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSim_1_P027V1_OBU_sectionlist_array_qdiff_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_2_32_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_2_32_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_string(const char* strValue) {
	static _1_P027V1_OBU_sectionlist_array_qdiff_T_TM rTemp;
	return string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P027V1_section_array_qdiff_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP027V1_section_array_qdiff_T_TMVTable;
const char * P027V1_section_array_qdiff_T_TM_to_string(const void* pValue) {
	if (pSimP027V1_section_array_qdiff_T_TMVTable != 0 && pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnToType(SptString, pValue);
	return array_int_2_to_string(pValue);
}

int string_to_P027V1_section_array_qdiff_T_TM(const char* strValue, void* pValue) {
	if (pSimP027V1_section_array_qdiff_T_TMVTable != 0 && pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P027V1_section_array_qdiff_T_TM rTemp;
		int nResult = pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_2(&(*((P027V1_section_array_qdiff_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_2(strValue, pValue);
}

int is_P027V1_section_array_qdiff_T_TM_allow_double_convertion() {
	if (pSimP027V1_section_array_qdiff_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_2_allow_double_convertion();
}

int P027V1_section_array_qdiff_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP027V1_section_array_qdiff_T_TMVTable != 0) {
		if (pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP027V1_section_array_qdiff_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_2_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_2_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P027V1_section_array_qdiff_T_TM_string(const char* strValue) {
	static P027V1_section_array_qdiff_T_TM rTemp;
	return string_to_P027V1_section_array_qdiff_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P027V1_OBU_sectionlist_int_qdiff_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable;
const char * P027V1_OBU_sectionlist_int_qdiff_T_TM_to_string(const void* pValue) {
	if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable != 0 && pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnToType(SptString, pValue);
	return array__878_to_string(pValue);
}

int string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM(const char* strValue, void* pValue) {
	if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable != 0 && pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P027V1_OBU_sectionlist_int_qdiff_T_TM rTemp;
		int nResult = pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__878(&(*((P027V1_OBU_sectionlist_int_qdiff_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__878(strValue, pValue);
}

int is_P027V1_OBU_sectionlist_int_qdiff_T_TM_allow_double_convertion() {
	if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__878_allow_double_convertion();
}

int P027V1_OBU_sectionlist_int_qdiff_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable != 0) {
		if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP027V1_OBU_sectionlist_int_qdiff_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__878_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__878_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P027V1_OBU_sectionlist_int_qdiff_T_TM_string(const char* strValue) {
	static P027V1_OBU_sectionlist_int_qdiff_T_TM rTemp;
	return string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimMetadata_T_Common_Types_PkgVTable;
const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0 && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return array__895_to_string(pValue);
}

int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0 && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Metadata_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadata_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__895(&(*((Metadata_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__895(strValue, pValue);
}

int is_Metadata_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__895_allow_double_convertion();
}

int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0) {
		if (pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__895_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__895_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Metadata_T_Common_Types_Pkg_string(const char* strValue) {
	static Metadata_T_Common_Types_Pkg rTemp;
	return string_to_Metadata_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimMetadataElement_T_Common_Types_PkgVTable;
const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0 && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__862_to_string(pValue);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0 && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static MetadataElement_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__862(&(*((MetadataElement_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__862(strValue, pValue);
}

int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__862_allow_double_convertion();
}

int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0) {
		if (pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__862_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__862_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue) {
	static MetadataElement_T_Common_Types_Pkg rTemp;
	return string_to_MetadataElement_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** CompressedPacketData_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimCompressedPacketData_T_Common_Types_PkgVTable;
const char * CompressedPacketData_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimCompressedPacketData_T_Common_Types_PkgVTable != 0 && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return array_int_500_to_string(pValue);
}

int string_to_CompressedPacketData_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimCompressedPacketData_T_Common_Types_PkgVTable != 0 && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static CompressedPacketData_T_Common_Types_Pkg rTemp;
		int nResult = pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_500(&(*((CompressedPacketData_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_500(strValue, pValue);
}

int is_CompressedPacketData_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimCompressedPacketData_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_500_allow_double_convertion();
}

int CompressedPacketData_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimCompressedPacketData_T_Common_Types_PkgVTable != 0) {
		if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_500_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_500_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_CompressedPacketData_T_Common_Types_Pkg_string(const char* strValue) {
	static CompressedPacketData_T_Common_Types_Pkg rTemp;
	return string_to_CompressedPacketData_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimCompressedPackets_T_Common_Types_PkgVTable;
const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0 && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__898_to_string(pValue);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0 && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static CompressedPackets_T_Common_Types_Pkg rTemp;
		int nResult = pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__898(&(*((CompressedPackets_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__898(strValue, pValue);
}

int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__898_allow_double_convertion();
}

int CompressedPackets_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0) {
		if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__898_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__898_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue) {
	static CompressedPackets_T_Common_Types_Pkg rTemp;
	return string_to_CompressedPackets_T_Common_Types_Pkg(strValue, &rTemp);
}


