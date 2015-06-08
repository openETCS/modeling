
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "Read_P005_ForCalcTrainPos_TM_type.h"
#include "Read_P005_ForCalcTrainPos_TM_mapping.h"

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
TypeUtils _SCSIM_struct__1397_Utils = {struct__1397_to_string,
	check_struct__1397_string,
	string_to_struct__1397,
	is_struct__1397_allow_double_convertion,
	0,
	compare_struct__1397_type,
	get_struct__1397_signature,
	get_struct__1397_filter_utils,
	struct__1397_filter_size,
	struct__1397_filter_values};
TypeUtils _SCSIM_array__1411_Utils = {array__1411_to_string,
	check_array__1411_string,
	string_to_array__1411,
	is_array__1411_allow_double_convertion,
	0,
	compare_array__1411_type,
	get_array__1411_signature,
	get_array__1411_filter_utils,
	array__1411_filter_size,
	array__1411_filter_values};
TypeUtils _SCSIM_struct__1414_Utils = {struct__1414_to_string,
	check_struct__1414_string,
	string_to_struct__1414,
	is_struct__1414_allow_double_convertion,
	0,
	compare_struct__1414_type,
	get_struct__1414_signature,
	get_struct__1414_filter_utils,
	struct__1414_filter_size,
	struct__1414_filter_values};
TypeUtils _SCSIM_array__1425_Utils = {array__1425_to_string,
	check_array__1425_string,
	string_to_array__1425,
	is_array__1425_allow_double_convertion,
	0,
	compare_array__1425_type,
	get_array__1425_signature,
	get_array__1425_filter_utils,
	array__1425_filter_size,
	array__1425_filter_values};
TypeUtils _SCSIM_struct__1428_Utils = {struct__1428_to_string,
	check_struct__1428_string,
	string_to_struct__1428,
	is_struct__1428_allow_double_convertion,
	0,
	compare_struct__1428_type,
	get_struct__1428_signature,
	get_struct__1428_filter_utils,
	struct__1428_filter_size,
	struct__1428_filter_values};
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
TypeUtils _SCSIM_struct__1440_Utils = {struct__1440_to_string,
	check_struct__1440_string,
	string_to_struct__1440,
	is_struct__1440_allow_double_convertion,
	0,
	compare_struct__1440_type,
	get_struct__1440_signature,
	get_struct__1440_filter_utils,
	struct__1440_filter_size,
	struct__1440_filter_values};
TypeUtils _SCSIM_array__1448_Utils = {array__1448_to_string,
	check_array__1448_string,
	string_to_array__1448,
	is_array__1448_allow_double_convertion,
	0,
	compare_array__1448_type,
	get_array__1448_signature,
	get_array__1448_filter_utils,
	array__1448_filter_size,
	array__1448_filter_values};
TypeUtils _SCSIM_struct__1451_Utils = {struct__1451_to_string,
	check_struct__1451_string,
	string_to_struct__1451,
	is_struct__1451_allow_double_convertion,
	0,
	compare_struct__1451_type,
	get_struct__1451_signature,
	get_struct__1451_filter_utils,
	struct__1451_filter_size,
	struct__1451_filter_values};
TypeUtils _SCSIM_array_int_224_Utils = {array_int_224_to_string,
	check_array_int_224_string,
	string_to_array_int_224,
	is_array_int_224_allow_double_convertion,
	0,
	compare_array_int_224_type,
	get_array_int_224_signature,
	get_array_int_224_filter_utils,
	array_int_224_filter_size,
	array_int_224_filter_values};
TypeUtils _SCSIM_array_int_3_Utils = {array_int_3_to_string,
	check_array_int_3_string,
	string_to_array_int_3,
	is_array_int_3_allow_double_convertion,
	0,
	compare_array_int_3_type,
	get_array_int_3_signature,
	get_array_int_3_filter_utils,
	array_int_3_filter_size,
	array_int_3_filter_values};
TypeUtils _SCSIM_array_int_30_Utils = {array_int_30_to_string,
	check_array_int_30_string,
	string_to_array_int_30,
	is_array_int_30_allow_double_convertion,
	0,
	compare_array_int_30_type,
	get_array_int_30_signature,
	get_array_int_30_filter_utils,
	array_int_30_filter_size,
	array_int_30_filter_values};
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
TypeUtils _SCSIM_array_int_224_33_Utils = {array_int_224_33_to_string,
	check_array_int_224_33_string,
	string_to_array_int_224_33,
	is_array_int_224_33_allow_double_convertion,
	0,
	compare_array_int_224_33_type,
	get_array_int_224_33_signature,
	get_array_int_224_33_filter_utils,
	array_int_224_33_filter_size,
	array_int_224_33_filter_values};
TypeUtils _SCSIM_array_int_1_Utils = {array_int_1_to_string,
	check_array_int_1_string,
	string_to_array_int_1,
	is_array_int_1_allow_double_convertion,
	0,
	compare_array_int_1_type,
	get_array_int_1_signature,
	get_array_int_1_filter_utils,
	array_int_1_filter_size,
	array_int_1_filter_values};
TypeUtils _SCSIM_array__1477_Utils = {array__1477_to_string,
	check_array__1477_string,
	string_to_array__1477,
	is_array__1477_allow_double_convertion,
	0,
	compare_array__1477_type,
	get_array__1477_signature,
	get_array__1477_filter_utils,
	array__1477_filter_size,
	array__1477_filter_values};
TypeUtils _SCSIM_array__1480_Utils = {array__1480_to_string,
	check_array__1480_string,
	string_to_array__1480,
	is_array__1480_allow_double_convertion,
	0,
	compare_array__1480_type,
	get_array__1480_signature,
	get_array__1480_filter_utils,
	array__1480_filter_size,
	array__1480_filter_values};
TypeUtils _SCSIM_array__1483_Utils = {array__1483_to_string,
	check_array__1483_string,
	string_to_array__1483,
	is_array__1483_allow_double_convertion,
	0,
	compare_array__1483_type,
	get_array__1483_signature,
	get_array__1483_filter_utils,
	array__1483_filter_size,
	array__1483_filter_values};
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
TypeUtils _SCSIM_Q_SCALE_Utils = {Q_SCALE_to_string,
	check_Q_SCALE_string,
	string_to_Q_SCALE,
	is_Q_SCALE_allow_double_convertion,
	Q_SCALE_to_double,
	compare_Q_SCALE_type,
	get_Q_SCALE_signature,
	get_Q_SCALE_filter_utils,
	Q_SCALE_filter_size,
	Q_SCALE_filter_values};
TypeUtils _SCSIM_D_LINK_Utils = {D_LINK_to_string,
	check_D_LINK_string,
	string_to_D_LINK,
	is_D_LINK_allow_double_convertion,
	D_LINK_to_double,
	compare_D_LINK_type,
	get_D_LINK_signature,
	get_D_LINK_filter_utils,
	D_LINK_filter_size,
	D_LINK_filter_values};
TypeUtils _SCSIM_Q_NEWCOUNTRY_Utils = {Q_NEWCOUNTRY_to_string,
	check_Q_NEWCOUNTRY_string,
	string_to_Q_NEWCOUNTRY,
	is_Q_NEWCOUNTRY_allow_double_convertion,
	Q_NEWCOUNTRY_to_double,
	compare_Q_NEWCOUNTRY_type,
	get_Q_NEWCOUNTRY_signature,
	get_Q_NEWCOUNTRY_filter_utils,
	Q_NEWCOUNTRY_filter_size,
	Q_NEWCOUNTRY_filter_values};
TypeUtils _SCSIM_NID_C_Utils = {NID_C_to_string,
	check_NID_C_string,
	string_to_NID_C,
	is_NID_C_allow_double_convertion,
	NID_C_to_double,
	compare_NID_C_type,
	get_NID_C_signature,
	get_NID_C_filter_utils,
	NID_C_filter_size,
	NID_C_filter_values};
TypeUtils _SCSIM_NID_BG_Utils = {NID_BG_to_string,
	check_NID_BG_string,
	string_to_NID_BG,
	is_NID_BG_allow_double_convertion,
	NID_BG_to_double,
	compare_NID_BG_type,
	get_NID_BG_signature,
	get_NID_BG_filter_utils,
	NID_BG_filter_size,
	NID_BG_filter_values};
TypeUtils _SCSIM_Q_LINKORIENTATION_Utils = {Q_LINKORIENTATION_to_string,
	check_Q_LINKORIENTATION_string,
	string_to_Q_LINKORIENTATION,
	is_Q_LINKORIENTATION_allow_double_convertion,
	Q_LINKORIENTATION_to_double,
	compare_Q_LINKORIENTATION_type,
	get_Q_LINKORIENTATION_signature,
	get_Q_LINKORIENTATION_filter_utils,
	Q_LINKORIENTATION_filter_size,
	Q_LINKORIENTATION_filter_values};
TypeUtils _SCSIM_Q_LINKREACTION_Utils = {Q_LINKREACTION_to_string,
	check_Q_LINKREACTION_string,
	string_to_Q_LINKREACTION,
	is_Q_LINKREACTION_allow_double_convertion,
	Q_LINKREACTION_to_double,
	compare_Q_LINKREACTION_type,
	get_Q_LINKREACTION_signature,
	get_Q_LINKREACTION_filter_utils,
	Q_LINKREACTION_filter_size,
	Q_LINKREACTION_filter_values};
TypeUtils _SCSIM_Q_LOCACC_Utils = {Q_LOCACC_to_string,
	check_Q_LOCACC_string,
	string_to_Q_LOCACC,
	is_Q_LOCACC_allow_double_convertion,
	Q_LOCACC_to_double,
	compare_Q_LOCACC_type,
	get_Q_LOCACC_signature,
	get_Q_LOCACC_filter_utils,
	Q_LOCACC_filter_size,
	Q_LOCACC_filter_values};
TypeUtils _SCSIM_N_ITER_Utils = {N_ITER_to_string,
	check_N_ITER_string,
	string_to_N_ITER,
	is_N_ITER_allow_double_convertion,
	N_ITER_to_double,
	compare_N_ITER_type,
	get_N_ITER_signature,
	get_N_ITER_filter_utils,
	N_ITER_filter_size,
	N_ITER_filter_values};
TypeUtils _SCSIM_L_PACKET_Utils = {L_PACKET_to_string,
	check_L_PACKET_string,
	string_to_L_PACKET,
	is_L_PACKET_allow_double_convertion,
	L_PACKET_to_double,
	compare_L_PACKET_type,
	get_L_PACKET_signature,
	get_L_PACKET_filter_utils,
	L_PACKET_filter_size,
	L_PACKET_filter_values};
TypeUtils _SCSIM_NID_LRBG_Utils = {NID_LRBG_to_string,
	check_NID_LRBG_string,
	string_to_NID_LRBG,
	is_NID_LRBG_allow_double_convertion,
	NID_LRBG_to_double,
	compare_NID_LRBG_type,
	get_NID_LRBG_signature,
	get_NID_LRBG_filter_utils,
	NID_LRBG_filter_size,
	NID_LRBG_filter_values};
TypeUtils _SCSIM_P005_section_enum_T_TM_Utils = {P005_section_enum_T_TM_to_string,
	check_P005_section_enum_T_TM_string,
	string_to_P005_section_enum_T_TM,
	is_P005_section_enum_T_TM_allow_double_convertion,
	P005_section_enum_T_TM_to_double,
	compare_P005_section_enum_T_TM_type,
	get_P005_section_enum_T_TM_signature,
	get_P005_section_enum_T_TM_filter_utils,
	P005_section_enum_T_TM_filter_size,
	P005_section_enum_T_TM_filter_values};
TypeUtils _SCSIM_P005_sections_array_flat_T_TM_Utils = {P005_sections_array_flat_T_TM_to_string,
	check_P005_sections_array_flat_T_TM_string,
	string_to_P005_sections_array_flat_T_TM,
	is_P005_sections_array_flat_T_TM_allow_double_convertion,
	P005_sections_array_flat_T_TM_to_double,
	compare_P005_sections_array_flat_T_TM_type,
	get_P005_sections_array_flat_T_TM_signature,
	get_P005_sections_array_flat_T_TM_filter_utils,
	P005_sections_array_flat_T_TM_filter_size,
	P005_sections_array_flat_T_TM_filter_values};
TypeUtils _SCSIM_P005_OBU_sectionlist_enum_T_TM_Utils = {P005_OBU_sectionlist_enum_T_TM_to_string,
	check_P005_OBU_sectionlist_enum_T_TM_string,
	string_to_P005_OBU_sectionlist_enum_T_TM,
	is_P005_OBU_sectionlist_enum_T_TM_allow_double_convertion,
	P005_OBU_sectionlist_enum_T_TM_to_double,
	compare_P005_OBU_sectionlist_enum_T_TM_type,
	get_P005_OBU_sectionlist_enum_T_TM_signature,
	get_P005_OBU_sectionlist_enum_T_TM_filter_utils,
	P005_OBU_sectionlist_enum_T_TM_filter_size,
	P005_OBU_sectionlist_enum_T_TM_filter_values};
TypeUtils _SCSIM_P005_OBU_T_TM_Utils = {P005_OBU_T_TM_to_string,
	check_P005_OBU_T_TM_string,
	string_to_P005_OBU_T_TM,
	is_P005_OBU_T_TM_allow_double_convertion,
	P005_OBU_T_TM_to_double,
	compare_P005_OBU_T_TM_type,
	get_P005_OBU_T_TM_signature,
	get_P005_OBU_T_TM_filter_utils,
	P005_OBU_T_TM_filter_size,
	P005_OBU_T_TM_filter_values};
TypeUtils _SCSIM_Array03_TM_Utils = {Array03_TM_to_string,
	check_Array03_TM_string,
	string_to_Array03_TM,
	is_Array03_TM_allow_double_convertion,
	Array03_TM_to_double,
	compare_Array03_TM_type,
	get_Array03_TM_signature,
	get_Array03_TM_filter_utils,
	Array03_TM_filter_size,
	Array03_TM_filter_values};
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
TypeUtils _SCSIM_LinkedBG_T_BG_Types_Pkg_Utils = {LinkedBG_T_BG_Types_Pkg_to_string,
	check_LinkedBG_T_BG_Types_Pkg_string,
	string_to_LinkedBG_T_BG_Types_Pkg,
	is_LinkedBG_T_BG_Types_Pkg_allow_double_convertion,
	LinkedBG_T_BG_Types_Pkg_to_double,
	compare_LinkedBG_T_BG_Types_Pkg_type,
	get_LinkedBG_T_BG_Types_Pkg_signature,
	get_LinkedBG_T_BG_Types_Pkg_filter_utils,
	LinkedBG_T_BG_Types_Pkg_filter_size,
	LinkedBG_T_BG_Types_Pkg_filter_values};
TypeUtils _SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils = {LinkedBGs_T_BG_Types_Pkg_to_string,
	check_LinkedBGs_T_BG_Types_Pkg_string,
	string_to_LinkedBGs_T_BG_Types_Pkg,
	is_LinkedBGs_T_BG_Types_Pkg_allow_double_convertion,
	LinkedBGs_T_BG_Types_Pkg_to_double,
	compare_LinkedBGs_T_BG_Types_Pkg_type,
	get_LinkedBGs_T_BG_Types_Pkg_signature,
	get_LinkedBGs_T_BG_Types_Pkg_filter_utils,
	LinkedBGs_T_BG_Types_Pkg_filter_size,
	LinkedBGs_T_BG_Types_Pkg_filter_values};

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
 ** struct__1397
 ****************************************************************/
static void Fill_struct__1397_StructSimValue(struct__1397 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*nid_LRBG label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->nid_LRBG) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "nid_LRBG";
	/*q_dir label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->q_dir) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_Q_DIR_Utils;
	pValues[2].m_pszName = "q_dir";
	/*q_scale label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->q_scale) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_Q_SCALE_Utils;
	pValues[3].m_pszName = "q_scale";
	/*d_link label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->d_link) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "d_link";
	/*q_newcountry label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->q_newcountry) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_Q_NEWCOUNTRY_Utils;
	pValues[5].m_pszName = "q_newcountry";
	/*nid_c label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->nid_c) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "nid_c";
	/*nid_bg label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->nid_bg) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "nid_bg";
	/*q_linkorientation label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->q_linkorientation) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_Q_LINKORIENTATION_Utils;
	pValues[8].m_pszName = "q_linkorientation";
	/*q_linkreaction label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->q_linkreaction) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_Q_LINKREACTION_Utils;
	pValues[9].m_pszName = "q_linkreaction";
	/*q_locacc label.*/
	pValues[10].m_pPtr = pStruct != 0 ? &(pStruct->q_locacc) : 0;
	pValues[10].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[10].m_pszName = "q_locacc";
}

const char * struct__1397_to_string(const void* pValue) {
	static StructSimValue values[11];
	Fill_struct__1397_StructSimValue(((struct__1397*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 11);
}

int string_to_struct__1397(const char* strValue, void* pValue) {
	static struct__1397 rTemp;
	int nResult = 0;
	static StructSimValue values[11];
	kcg_copy_struct__1397(&(rTemp), &(*((struct__1397*)pValue)));
	Fill_struct__1397_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 11);
	if (nResult == 1)
		kcg_copy_struct__1397(&(*((struct__1397*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1397_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[11];
	Fill_struct__1397_StructSimValue((struct__1397*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 11);
}


int is_struct__1397_allow_double_convertion() {
	return 0;
}


const char * get_struct__1397_signature() {
	static StructSimValue values[11];
	Fill_struct__1397_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 11);
}

FilterUtils get_struct__1397_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[11];
	Fill_struct__1397_StructSimValue((struct__1397*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 11, strFilter);
}

const char * struct__1397_filter_values[11] = {"valid", "nid_LRBG", "q_dir", "q_scale", "d_link", "q_newcountry", "nid_c", "nid_bg", "q_linkorientation", "q_linkreaction", "q_locacc"};
int check_struct__1397_string(const char* strValue) {
	static struct__1397 rTemp;
	return string_to_struct__1397(strValue, &rTemp);
}


/****************************************************************
 ** array__1411
 ****************************************************************/
void* array__1411_projection(void** pValues, int nIndex) {
	return &((*(array__1411*)pValues)[nIndex]);
}

const char * array__1411_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__1397_to_string, 4, array__1411_projection);
}

int compare_array__1411_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__1397_type , 4, array__1411_projection);
}

int is_array__1411_allow_double_convertion() {
	return 0;
}

int string_to_array__1411(const char* strValue, void* pValue) {
	static array__1411 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__1397, 4, array__1411_projection);
	if (nResult == 1)
		kcg_copy_array__1411(&(*((array__1411*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1411_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__1397_signature, 4);
}

FilterUtils get_array__1411_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__1397_Utils, strFilter, (void**)pValue, 4, array__1411_projection);
}

int check_array__1411_string(const char* strValue) {
	static array__1411 rTemp;
	return string_to_array__1411(strValue, &rTemp);
}


/****************************************************************
 ** struct__1414
 ****************************************************************/
static void Fill_struct__1414_StructSimValue(struct__1414 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*d_link label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->d_link) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "d_link";
	/*q_newcountry label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->q_newcountry) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_Q_NEWCOUNTRY_Utils;
	pValues[2].m_pszName = "q_newcountry";
	/*nid_c label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->nid_c) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "nid_c";
	/*nid_bg label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->nid_bg) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "nid_bg";
	/*q_linkorientation label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->q_linkorientation) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_Q_LINKORIENTATION_Utils;
	pValues[5].m_pszName = "q_linkorientation";
	/*q_linkreaction label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->q_linkreaction) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_Q_LINKREACTION_Utils;
	pValues[6].m_pszName = "q_linkreaction";
	/*q_locacc label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->q_locacc) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "q_locacc";
}

const char * struct__1414_to_string(const void* pValue) {
	static StructSimValue values[8];
	Fill_struct__1414_StructSimValue(((struct__1414*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 8);
}

int string_to_struct__1414(const char* strValue, void* pValue) {
	static struct__1414 rTemp;
	int nResult = 0;
	static StructSimValue values[8];
	kcg_copy_struct__1414(&(rTemp), &(*((struct__1414*)pValue)));
	Fill_struct__1414_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 8);
	if (nResult == 1)
		kcg_copy_struct__1414(&(*((struct__1414*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1414_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[8];
	Fill_struct__1414_StructSimValue((struct__1414*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 8);
}


int is_struct__1414_allow_double_convertion() {
	return 0;
}


const char * get_struct__1414_signature() {
	static StructSimValue values[8];
	Fill_struct__1414_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 8);
}

FilterUtils get_struct__1414_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[8];
	Fill_struct__1414_StructSimValue((struct__1414*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 8, strFilter);
}

const char * struct__1414_filter_values[8] = {"valid", "d_link", "q_newcountry", "nid_c", "nid_bg", "q_linkorientation", "q_linkreaction", "q_locacc"};
int check_struct__1414_string(const char* strValue) {
	static struct__1414 rTemp;
	return string_to_struct__1414(strValue, &rTemp);
}


/****************************************************************
 ** array__1425
 ****************************************************************/
void* array__1425_projection(void** pValues, int nIndex) {
	return &((*(array__1425*)pValues)[nIndex]);
}

const char * array__1425_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__1414_to_string, 33, array__1425_projection);
}

int compare_array__1425_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__1414_type , 33, array__1425_projection);
}

int is_array__1425_allow_double_convertion() {
	return 0;
}

int string_to_array__1425(const char* strValue, void* pValue) {
	static array__1425 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__1414, 33, array__1425_projection);
	if (nResult == 1)
		kcg_copy_array__1425(&(*((array__1425*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1425_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__1414_signature, 33);
}

FilterUtils get_array__1425_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__1414_Utils, strFilter, (void**)pValue, 33, array__1425_projection);
}

int check_array__1425_string(const char* strValue) {
	static array__1425 rTemp;
	return string_to_array__1425(strValue, &rTemp);
}


/****************************************************************
 ** struct__1428
 ****************************************************************/
static void Fill_struct__1428_StructSimValue(struct__1428 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*q_dir label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->q_dir) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_Q_DIR_Utils;
	pValues[1].m_pszName = "q_dir";
	/*l_packet label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->l_packet) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "l_packet";
	/*q_scale label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->q_scale) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_Q_SCALE_Utils;
	pValues[3].m_pszName = "q_scale";
	/*n_iter label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->n_iter) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "n_iter";
	/*sections label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->sections) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_array__1425_Utils;
	pValues[5].m_pszName = "sections";
}

const char * struct__1428_to_string(const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__1428_StructSimValue(((struct__1428*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 6);
}

int string_to_struct__1428(const char* strValue, void* pValue) {
	static struct__1428 rTemp;
	int nResult = 0;
	static StructSimValue values[6];
	kcg_copy_struct__1428(&(rTemp), &(*((struct__1428*)pValue)));
	Fill_struct__1428_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 6);
	if (nResult == 1)
		kcg_copy_struct__1428(&(*((struct__1428*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1428_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__1428_StructSimValue((struct__1428*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 6);
}


int is_struct__1428_allow_double_convertion() {
	return 0;
}


const char * get_struct__1428_signature() {
	static StructSimValue values[6];
	Fill_struct__1428_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 6);
}

FilterUtils get_struct__1428_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[6];
	Fill_struct__1428_StructSimValue((struct__1428*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 6, strFilter);
}

const char * struct__1428_filter_values[6] = {"valid", "q_dir", "l_packet", "q_scale", "n_iter", "sections"};
int check_struct__1428_string(const char* strValue) {
	static struct__1428 rTemp;
	return string_to_struct__1428(strValue, &rTemp);
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
 ** struct__1440
 ****************************************************************/
static void Fill_struct__1440_StructSimValue(struct__1440 * pStruct, StructSimValue * pValues) {
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

const char * struct__1440_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__1440_StructSimValue(((struct__1440*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__1440(const char* strValue, void* pValue) {
	static struct__1440 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__1440(&(rTemp), &(*((struct__1440*)pValue)));
	Fill_struct__1440_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__1440(&(*((struct__1440*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1440_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__1440_StructSimValue((struct__1440*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__1440_allow_double_convertion() {
	return 0;
}


const char * get_struct__1440_signature() {
	static StructSimValue values[5];
	Fill_struct__1440_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__1440_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__1440_StructSimValue((struct__1440*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__1440_filter_values[5] = {"nid_packet", "q_dir", "valid", "startAddress", "endAddress"};
int check_struct__1440_string(const char* strValue) {
	static struct__1440 rTemp;
	return string_to_struct__1440(strValue, &rTemp);
}


/****************************************************************
 ** array__1448
 ****************************************************************/
void* array__1448_projection(void** pValues, int nIndex) {
	return &((*(array__1448*)pValues)[nIndex]);
}

const char * array__1448_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__1440_to_string, 30, array__1448_projection);
}

int compare_array__1448_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__1440_type , 30, array__1448_projection);
}

int is_array__1448_allow_double_convertion() {
	return 0;
}

int string_to_array__1448(const char* strValue, void* pValue) {
	static array__1448 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__1440, 30, array__1448_projection);
	if (nResult == 1)
		kcg_copy_array__1448(&(*((array__1448*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1448_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__1440_signature, 30);
}

FilterUtils get_array__1448_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__1440_Utils, strFilter, (void**)pValue, 30, array__1448_projection);
}

int check_array__1448_string(const char* strValue) {
	static array__1448 rTemp;
	return string_to_array__1448(strValue, &rTemp);
}


/****************************************************************
 ** struct__1451
 ****************************************************************/
static void Fill_struct__1451_StructSimValue(struct__1451 * pStruct, StructSimValue * pValues) {
	/*PacketHeaders label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->PacketHeaders) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_array__1448_Utils;
	pValues[0].m_pszName = "PacketHeaders";
	/*PacketData label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->PacketData) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_array_int_500_Utils;
	pValues[1].m_pszName = "PacketData";
}

const char * struct__1451_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1451_StructSimValue(((struct__1451*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__1451(const char* strValue, void* pValue) {
	static struct__1451 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__1451(&(rTemp), &(*((struct__1451*)pValue)));
	Fill_struct__1451_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__1451(&(*((struct__1451*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1451_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1451_StructSimValue((struct__1451*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__1451_allow_double_convertion() {
	return 0;
}


const char * get_struct__1451_signature() {
	static StructSimValue values[2];
	Fill_struct__1451_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__1451_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1451_StructSimValue((struct__1451*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__1451_filter_values[2] = {"PacketHeaders", "PacketData"};
int check_struct__1451_string(const char* strValue) {
	static struct__1451 rTemp;
	return string_to_struct__1451(strValue, &rTemp);
}


/****************************************************************
 ** array_int_224
 ****************************************************************/
void* array_int_224_projection(void** pValues, int nIndex) {
	return &((*(array_int_224*)pValues)[nIndex]);
}

const char * array_int_224_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 224, array_int_224_projection);
}

int compare_array_int_224_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 224, array_int_224_projection);
}

int is_array_int_224_allow_double_convertion() {
	return 0;
}

int string_to_array_int_224(const char* strValue, void* pValue) {
	static array_int_224 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 224, array_int_224_projection);
	if (nResult == 1)
		kcg_copy_array_int_224(&(*((array_int_224*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_224_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 224);
}

FilterUtils get_array_int_224_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 224, array_int_224_projection);
}

int check_array_int_224_string(const char* strValue) {
	static array_int_224 rTemp;
	return string_to_array_int_224(strValue, &rTemp);
}


/****************************************************************
 ** array_int_3
 ****************************************************************/
void* array_int_3_projection(void** pValues, int nIndex) {
	return &((*(array_int_3*)pValues)[nIndex]);
}

const char * array_int_3_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 3, array_int_3_projection);
}

int compare_array_int_3_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 3, array_int_3_projection);
}

int is_array_int_3_allow_double_convertion() {
	return 0;
}

int string_to_array_int_3(const char* strValue, void* pValue) {
	static array_int_3 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 3, array_int_3_projection);
	if (nResult == 1)
		kcg_copy_array_int_3(&(*((array_int_3*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_3_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 3);
}

FilterUtils get_array_int_3_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 3, array_int_3_projection);
}

int check_array_int_3_string(const char* strValue) {
	static array_int_3 rTemp;
	return string_to_array_int_3(strValue, &rTemp);
}


/****************************************************************
 ** array_int_30
 ****************************************************************/
void* array_int_30_projection(void** pValues, int nIndex) {
	return &((*(array_int_30*)pValues)[nIndex]);
}

const char * array_int_30_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 30, array_int_30_projection);
}

int compare_array_int_30_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 30, array_int_30_projection);
}

int is_array_int_30_allow_double_convertion() {
	return 0;
}

int string_to_array_int_30(const char* strValue, void* pValue) {
	static array_int_30 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 30, array_int_30_projection);
	if (nResult == 1)
		kcg_copy_array_int_30(&(*((array_int_30*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_30_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 30);
}

FilterUtils get_array_int_30_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 30, array_int_30_projection);
}

int check_array_int_30_string(const char* strValue) {
	static array_int_30 rTemp;
	return string_to_array_int_30(strValue, &rTemp);
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
 ** array_int_224_33
 ****************************************************************/
void* array_int_224_33_projection(void** pValues, int nIndex) {
	return &((*(array_int_224_33*)pValues)[nIndex]);
}

const char * array_int_224_33_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_int_224_to_string, 33, array_int_224_33_projection);
}

int compare_array_int_224_33_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_int_224_type , 33, array_int_224_33_projection);
}

int is_array_int_224_33_allow_double_convertion() {
	return 0;
}

int string_to_array_int_224_33(const char* strValue, void* pValue) {
	static array_int_224_33 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_int_224, 33, array_int_224_33_projection);
	if (nResult == 1)
		kcg_copy_array_int_224_33(&(*((array_int_224_33*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_224_33_signature() {
	return pSimulator->m_pfnArraySignature(get_array_int_224_signature, 33);
}

FilterUtils get_array_int_224_33_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_int_224_Utils, strFilter, (void**)pValue, 33, array_int_224_33_projection);
}

int check_array_int_224_33_string(const char* strValue) {
	static array_int_224_33 rTemp;
	return string_to_array_int_224_33(strValue, &rTemp);
}


/****************************************************************
 ** array_int_1
 ****************************************************************/
void* array_int_1_projection(void** pValues, int nIndex) {
	return &((*(array_int_1*)pValues)[nIndex]);
}

const char * array_int_1_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 1, array_int_1_projection);
}

int compare_array_int_1_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 1, array_int_1_projection);
}

int is_array_int_1_allow_double_convertion() {
	return 0;
}

int string_to_array_int_1(const char* strValue, void* pValue) {
	static array_int_1 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 1, array_int_1_projection);
	if (nResult == 1)
		kcg_copy_array_int_1(&(*((array_int_1*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_1_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 1);
}

FilterUtils get_array_int_1_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 1, array_int_1_projection);
}

int check_array_int_1_string(const char* strValue) {
	static array_int_1 rTemp;
	return string_to_array_int_1(strValue, &rTemp);
}


/****************************************************************
 ** array__1477
 ****************************************************************/
void* array__1477_projection(void** pValues, int nIndex) {
	return &((*(array__1477*)pValues)[nIndex]);
}

const char * array__1477_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__1414_to_string, 4, array__1477_projection);
}

int compare_array__1477_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__1414_type , 4, array__1477_projection);
}

int is_array__1477_allow_double_convertion() {
	return 0;
}

int string_to_array__1477(const char* strValue, void* pValue) {
	static array__1477 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__1414, 4, array__1477_projection);
	if (nResult == 1)
		kcg_copy_array__1477(&(*((array__1477*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1477_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__1414_signature, 4);
}

FilterUtils get_array__1477_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__1414_Utils, strFilter, (void**)pValue, 4, array__1477_projection);
}

int check_array__1477_string(const char* strValue) {
	static array__1477 rTemp;
	return string_to_array__1477(strValue, &rTemp);
}


/****************************************************************
 ** array__1480
 ****************************************************************/
void* array__1480_projection(void** pValues, int nIndex) {
	return &((*(array__1480*)pValues)[nIndex]);
}

const char * array__1480_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, Q_DIR_to_string, 4, array__1480_projection);
}

int compare_array__1480_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_Q_DIR_type , 4, array__1480_projection);
}

int is_array__1480_allow_double_convertion() {
	return 0;
}

int string_to_array__1480(const char* strValue, void* pValue) {
	static array__1480 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_Q_DIR, 4, array__1480_projection);
	if (nResult == 1)
		kcg_copy_array__1480(&(*((array__1480*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1480_signature() {
	return pSimulator->m_pfnArraySignature(get_Q_DIR_signature, 4);
}

FilterUtils get_array__1480_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_Q_DIR_Utils, strFilter, (void**)pValue, 4, array__1480_projection);
}

int check_array__1480_string(const char* strValue) {
	static array__1480 rTemp;
	return string_to_array__1480(strValue, &rTemp);
}


/****************************************************************
 ** array__1483
 ****************************************************************/
void* array__1483_projection(void** pValues, int nIndex) {
	return &((*(array__1483*)pValues)[nIndex]);
}

const char * array__1483_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, Q_SCALE_to_string, 4, array__1483_projection);
}

int compare_array__1483_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_Q_SCALE_type , 4, array__1483_projection);
}

int is_array__1483_allow_double_convertion() {
	return 0;
}

int string_to_array__1483(const char* strValue, void* pValue) {
	static array__1483 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_Q_SCALE, 4, array__1483_projection);
	if (nResult == 1)
		kcg_copy_array__1483(&(*((array__1483*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1483_signature() {
	return pSimulator->m_pfnArraySignature(get_Q_SCALE_signature, 4);
}

FilterUtils get_array__1483_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_Q_SCALE_Utils, strFilter, (void**)pValue, 4, array__1483_projection);
}

int check_array__1483_string(const char* strValue) {
	static array__1483 rTemp;
	return string_to_array__1483(strValue, &rTemp);
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
 ** Q_SCALE
 ****************************************************************/
struct SimTypeVTable* pSimQ_SCALEVTable;
const char * Q_SCALE_to_string(const void* pValue) {
	if (pSimQ_SCALEVTable != 0 && pSimQ_SCALEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_SCALEVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_SCALE*)pValue)) {
	case Q_SCALE_10_cm_scale:
		return "Q_SCALE_10_cm_scale";
	case Q_SCALE_1_m_scale:
		return "Q_SCALE_1_m_scale";
	case Q_SCALE_10_m_scale:
		return "Q_SCALE_10_m_scale";
	default:
		return "?";
	}
}

int string_to_Q_SCALE(const char* strValue, void* pValue) {
	if (pSimQ_SCALEVTable != 0 && pSimQ_SCALEVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_SCALE rTemp;		int nResult = pSimQ_SCALEVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_SCALE*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_SCALE_10_cm_scale") == 0)
		*((Q_SCALE*)pValue) = Q_SCALE_10_cm_scale;
	else if(strcmp(strValue, "Q_SCALE_1_m_scale") == 0)
		*((Q_SCALE*)pValue) = Q_SCALE_1_m_scale;
	else if(strcmp(strValue, "Q_SCALE_10_m_scale") == 0)
		*((Q_SCALE*)pValue) = Q_SCALE_10_m_scale;
	else 
		return 0;
	return 1;
}

int is_Q_SCALE_allow_double_convertion() {
	return 1;
}


int Q_SCALE_to_double(double * nValue, const void* pValue) {
	switch (*((Q_SCALE*)pValue)) {
	case Q_SCALE_10_cm_scale:
		*nValue = 0.0;
		break;
	case Q_SCALE_1_m_scale:
		*nValue = 1.0;
		break;
	case Q_SCALE_10_m_scale:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_SCALE_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_SCALE rTemp;
	const Q_SCALE* pCurrent = (const Q_SCALE*)pValue;
	if (string_to_Q_SCALE(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_SCALE_signature() {
	return "E"
		"|Q_SCALE_10_cm_scale"
		"|Q_SCALE_1_m_scale"
		"|Q_SCALE_10_m_scale"
		;
}

int check_Q_SCALE_string(const char* strValue) {
	static Q_SCALE rTemp;
	return string_to_Q_SCALE(strValue, &rTemp);
}


/****************************************************************
 ** D_LINK
 ****************************************************************/
struct SimTypeVTable* pSimD_LINKVTable;
const char * D_LINK_to_string(const void* pValue) {
	if (pSimD_LINKVTable != 0 && pSimD_LINKVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimD_LINKVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_D_LINK(const char* strValue, void* pValue) {
	if (pSimD_LINKVTable != 0 && pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static D_LINK rTemp;
		int nResult = pSimD_LINKVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((D_LINK*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_D_LINK_allow_double_convertion() {
	if (pSimD_LINKVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int D_LINK_to_double(double * nValue, const void* pValue) {
	if (pSimD_LINKVTable != 0) {
		if (pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimD_LINKVTable->m_pfnToType(SptLong, pValue));
		else if (pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimD_LINKVTable->m_pfnToType(SptShort, pValue));
		else if (pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimD_LINKVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimD_LINKVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_D_LINK_string(const char* strValue) {
	static D_LINK rTemp;
	return string_to_D_LINK(strValue, &rTemp);
}


/****************************************************************
 ** Q_NEWCOUNTRY
 ****************************************************************/
struct SimTypeVTable* pSimQ_NEWCOUNTRYVTable;
const char * Q_NEWCOUNTRY_to_string(const void* pValue) {
	if (pSimQ_NEWCOUNTRYVTable != 0 && pSimQ_NEWCOUNTRYVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_NEWCOUNTRYVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_NEWCOUNTRY*)pValue)) {
	case Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows:
		return "Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows";
	case Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows:
		return "Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows";
	default:
		return "?";
	}
}

int string_to_Q_NEWCOUNTRY(const char* strValue, void* pValue) {
	if (pSimQ_NEWCOUNTRYVTable != 0 && pSimQ_NEWCOUNTRYVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_NEWCOUNTRY rTemp;		int nResult = pSimQ_NEWCOUNTRYVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_NEWCOUNTRY*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows") == 0)
		*((Q_NEWCOUNTRY*)pValue) = Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
	else if(strcmp(strValue, "Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows") == 0)
		*((Q_NEWCOUNTRY*)pValue) = Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows;
	else 
		return 0;
	return 1;
}

int is_Q_NEWCOUNTRY_allow_double_convertion() {
	return 1;
}


int Q_NEWCOUNTRY_to_double(double * nValue, const void* pValue) {
	switch (*((Q_NEWCOUNTRY*)pValue)) {
	case Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows:
		*nValue = 0.0;
		break;
	case Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_NEWCOUNTRY_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_NEWCOUNTRY rTemp;
	const Q_NEWCOUNTRY* pCurrent = (const Q_NEWCOUNTRY*)pValue;
	if (string_to_Q_NEWCOUNTRY(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_NEWCOUNTRY_signature() {
	return "E"
		"|Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows"
		"|Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows"
		;
}

int check_Q_NEWCOUNTRY_string(const char* strValue) {
	static Q_NEWCOUNTRY rTemp;
	return string_to_Q_NEWCOUNTRY(strValue, &rTemp);
}


/****************************************************************
 ** NID_C
 ****************************************************************/
struct SimTypeVTable* pSimNID_CVTable;
const char * NID_C_to_string(const void* pValue) {
	if (pSimNID_CVTable != 0 && pSimNID_CVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_CVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_C(const char* strValue, void* pValue) {
	if (pSimNID_CVTable != 0 && pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_C rTemp;
		int nResult = pSimNID_CVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_C*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_C_allow_double_convertion() {
	if (pSimNID_CVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_C_to_double(double * nValue, const void* pValue) {
	if (pSimNID_CVTable != 0) {
		if (pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_CVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_CVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_CVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_CVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_C_string(const char* strValue) {
	static NID_C rTemp;
	return string_to_NID_C(strValue, &rTemp);
}


/****************************************************************
 ** NID_BG
 ****************************************************************/
struct SimTypeVTable* pSimNID_BGVTable;
const char * NID_BG_to_string(const void* pValue) {
	if (pSimNID_BGVTable != 0 && pSimNID_BGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_BGVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_BG(const char* strValue, void* pValue) {
	if (pSimNID_BGVTable != 0 && pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_BG rTemp;
		int nResult = pSimNID_BGVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_BG*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_BG_allow_double_convertion() {
	if (pSimNID_BGVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_BG_to_double(double * nValue, const void* pValue) {
	if (pSimNID_BGVTable != 0) {
		if (pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_BGVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_BGVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_BGVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_BGVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_BG_string(const char* strValue) {
	static NID_BG rTemp;
	return string_to_NID_BG(strValue, &rTemp);
}


/****************************************************************
 ** Q_LINKORIENTATION
 ****************************************************************/
struct SimTypeVTable* pSimQ_LINKORIENTATIONVTable;
const char * Q_LINKORIENTATION_to_string(const void* pValue) {
	if (pSimQ_LINKORIENTATIONVTable != 0 && pSimQ_LINKORIENTATIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_LINKORIENTATIONVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_LINKORIENTATION*)pValue)) {
	case _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction:
		return "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction";
	case Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction:
		return "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction";
	default:
		return "?";
	}
}

int string_to_Q_LINKORIENTATION(const char* strValue, void* pValue) {
	if (pSimQ_LINKORIENTATIONVTable != 0 && pSimQ_LINKORIENTATIONVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_LINKORIENTATION rTemp;		int nResult = pSimQ_LINKORIENTATIONVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_LINKORIENTATION*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction") == 0)
		*((Q_LINKORIENTATION*)pValue) = _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
	else if(strcmp(strValue, "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction") == 0)
		*((Q_LINKORIENTATION*)pValue) = Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction;
	else 
		return 0;
	return 1;
}

int is_Q_LINKORIENTATION_allow_double_convertion() {
	return 1;
}


int Q_LINKORIENTATION_to_double(double * nValue, const void* pValue) {
	switch (*((Q_LINKORIENTATION*)pValue)) {
	case _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction:
		*nValue = 0.0;
		break;
	case Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_LINKORIENTATION_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_LINKORIENTATION rTemp;
	const Q_LINKORIENTATION* pCurrent = (const Q_LINKORIENTATION*)pValue;
	if (string_to_Q_LINKORIENTATION(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_LINKORIENTATION_signature() {
	return "E"
		"|Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction"
		"|Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction"
		;
}

int check_Q_LINKORIENTATION_string(const char* strValue) {
	static Q_LINKORIENTATION rTemp;
	return string_to_Q_LINKORIENTATION(strValue, &rTemp);
}


/****************************************************************
 ** Q_LINKREACTION
 ****************************************************************/
struct SimTypeVTable* pSimQ_LINKREACTIONVTable;
const char * Q_LINKREACTION_to_string(const void* pValue) {
	if (pSimQ_LINKREACTIONVTable != 0 && pSimQ_LINKREACTIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_LINKREACTIONVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_LINKREACTION*)pValue)) {
	case Q_LINKREACTION_Train_trip:
		return "Q_LINKREACTION_Train_trip";
	case Q_LINKREACTION_Apply_service_brake:
		return "Q_LINKREACTION_Apply_service_brake";
	case Q_LINKREACTION_No_Reaction:
		return "Q_LINKREACTION_No_Reaction";
	default:
		return "?";
	}
}

int string_to_Q_LINKREACTION(const char* strValue, void* pValue) {
	if (pSimQ_LINKREACTIONVTable != 0 && pSimQ_LINKREACTIONVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_LINKREACTION rTemp;		int nResult = pSimQ_LINKREACTIONVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_LINKREACTION*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_LINKREACTION_Train_trip") == 0)
		*((Q_LINKREACTION*)pValue) = Q_LINKREACTION_Train_trip;
	else if(strcmp(strValue, "Q_LINKREACTION_Apply_service_brake") == 0)
		*((Q_LINKREACTION*)pValue) = Q_LINKREACTION_Apply_service_brake;
	else if(strcmp(strValue, "Q_LINKREACTION_No_Reaction") == 0)
		*((Q_LINKREACTION*)pValue) = Q_LINKREACTION_No_Reaction;
	else 
		return 0;
	return 1;
}

int is_Q_LINKREACTION_allow_double_convertion() {
	return 1;
}


int Q_LINKREACTION_to_double(double * nValue, const void* pValue) {
	switch (*((Q_LINKREACTION*)pValue)) {
	case Q_LINKREACTION_Train_trip:
		*nValue = 0.0;
		break;
	case Q_LINKREACTION_Apply_service_brake:
		*nValue = 1.0;
		break;
	case Q_LINKREACTION_No_Reaction:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_LINKREACTION_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_LINKREACTION rTemp;
	const Q_LINKREACTION* pCurrent = (const Q_LINKREACTION*)pValue;
	if (string_to_Q_LINKREACTION(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_LINKREACTION_signature() {
	return "E"
		"|Q_LINKREACTION_Train_trip"
		"|Q_LINKREACTION_Apply_service_brake"
		"|Q_LINKREACTION_No_Reaction"
		;
}

int check_Q_LINKREACTION_string(const char* strValue) {
	static Q_LINKREACTION rTemp;
	return string_to_Q_LINKREACTION(strValue, &rTemp);
}


/****************************************************************
 ** Q_LOCACC
 ****************************************************************/
struct SimTypeVTable* pSimQ_LOCACCVTable;
const char * Q_LOCACC_to_string(const void* pValue) {
	if (pSimQ_LOCACCVTable != 0 && pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_LOCACCVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_Q_LOCACC(const char* strValue, void* pValue) {
	if (pSimQ_LOCACCVTable != 0 && pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Q_LOCACC rTemp;
		int nResult = pSimQ_LOCACCVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_LOCACC*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_Q_LOCACC_allow_double_convertion() {
	if (pSimQ_LOCACCVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int Q_LOCACC_to_double(double * nValue, const void* pValue) {
	if (pSimQ_LOCACCVTable != 0) {
		if (pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimQ_LOCACCVTable->m_pfnToType(SptLong, pValue));
		else if (pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimQ_LOCACCVTable->m_pfnToType(SptShort, pValue));
		else if (pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimQ_LOCACCVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimQ_LOCACCVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Q_LOCACC_string(const char* strValue) {
	static Q_LOCACC rTemp;
	return string_to_Q_LOCACC(strValue, &rTemp);
}


/****************************************************************
 ** N_ITER
 ****************************************************************/
struct SimTypeVTable* pSimN_ITERVTable;
const char * N_ITER_to_string(const void* pValue) {
	if (pSimN_ITERVTable != 0 && pSimN_ITERVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimN_ITERVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_N_ITER(const char* strValue, void* pValue) {
	if (pSimN_ITERVTable != 0 && pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static N_ITER rTemp;
		int nResult = pSimN_ITERVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((N_ITER*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_N_ITER_allow_double_convertion() {
	if (pSimN_ITERVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int N_ITER_to_double(double * nValue, const void* pValue) {
	if (pSimN_ITERVTable != 0) {
		if (pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimN_ITERVTable->m_pfnToType(SptLong, pValue));
		else if (pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimN_ITERVTable->m_pfnToType(SptShort, pValue));
		else if (pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimN_ITERVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimN_ITERVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_N_ITER_string(const char* strValue) {
	static N_ITER rTemp;
	return string_to_N_ITER(strValue, &rTemp);
}


/****************************************************************
 ** L_PACKET
 ****************************************************************/
struct SimTypeVTable* pSimL_PACKETVTable;
const char * L_PACKET_to_string(const void* pValue) {
	if (pSimL_PACKETVTable != 0 && pSimL_PACKETVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimL_PACKETVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_L_PACKET(const char* strValue, void* pValue) {
	if (pSimL_PACKETVTable != 0 && pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static L_PACKET rTemp;
		int nResult = pSimL_PACKETVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((L_PACKET*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_L_PACKET_allow_double_convertion() {
	if (pSimL_PACKETVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int L_PACKET_to_double(double * nValue, const void* pValue) {
	if (pSimL_PACKETVTable != 0) {
		if (pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimL_PACKETVTable->m_pfnToType(SptLong, pValue));
		else if (pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimL_PACKETVTable->m_pfnToType(SptShort, pValue));
		else if (pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimL_PACKETVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimL_PACKETVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_L_PACKET_string(const char* strValue) {
	static L_PACKET rTemp;
	return string_to_L_PACKET(strValue, &rTemp);
}


/****************************************************************
 ** NID_LRBG
 ****************************************************************/
struct SimTypeVTable* pSimNID_LRBGVTable;
const char * NID_LRBG_to_string(const void* pValue) {
	if (pSimNID_LRBGVTable != 0 && pSimNID_LRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_LRBGVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_LRBG(const char* strValue, void* pValue) {
	if (pSimNID_LRBGVTable != 0 && pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_LRBG rTemp;
		int nResult = pSimNID_LRBGVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_LRBG*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_LRBG_allow_double_convertion() {
	if (pSimNID_LRBGVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_LRBG_to_double(double * nValue, const void* pValue) {
	if (pSimNID_LRBGVTable != 0) {
		if (pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_LRBGVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_LRBGVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_LRBGVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_LRBGVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_LRBG_string(const char* strValue) {
	static NID_LRBG rTemp;
	return string_to_NID_LRBG(strValue, &rTemp);
}


/****************************************************************
 ** P005_section_enum_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_section_enum_T_TMVTable;
const char * P005_section_enum_T_TM_to_string(const void* pValue) {
	if (pSimP005_section_enum_T_TMVTable != 0 && pSimP005_section_enum_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_section_enum_T_TMVTable->m_pfnToType(SptString, pValue);
	return struct__1414_to_string(pValue);
}

int string_to_P005_section_enum_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_section_enum_T_TMVTable != 0 && pSimP005_section_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_section_enum_T_TM rTemp;
		int nResult = pSimP005_section_enum_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1414(&(*((P005_section_enum_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1414(strValue, pValue);
}

int is_P005_section_enum_T_TM_allow_double_convertion() {
	if (pSimP005_section_enum_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_section_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_section_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_section_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_section_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__1414_allow_double_convertion();
}

int P005_section_enum_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_section_enum_T_TMVTable != 0) {
		if (pSimP005_section_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_section_enum_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_section_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_section_enum_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_section_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_section_enum_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_section_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_section_enum_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__1414_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1414_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_section_enum_T_TM_string(const char* strValue) {
	static P005_section_enum_T_TM rTemp;
	return string_to_P005_section_enum_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_sections_array_flat_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_sections_array_flat_T_TMVTable;
const char * P005_sections_array_flat_T_TM_to_string(const void* pValue) {
	if (pSimP005_sections_array_flat_T_TMVTable != 0 && pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_sections_array_flat_T_TMVTable->m_pfnToType(SptString, pValue);
	return array_int_224_to_string(pValue);
}

int string_to_P005_sections_array_flat_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_sections_array_flat_T_TMVTable != 0 && pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_sections_array_flat_T_TM rTemp;
		int nResult = pSimP005_sections_array_flat_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_224(&(*((P005_sections_array_flat_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_224(strValue, pValue);
}

int is_P005_sections_array_flat_T_TM_allow_double_convertion() {
	if (pSimP005_sections_array_flat_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_224_allow_double_convertion();
}

int P005_sections_array_flat_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_sections_array_flat_T_TMVTable != 0) {
		if (pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_sections_array_flat_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_sections_array_flat_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_sections_array_flat_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_sections_array_flat_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_224_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_224_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_sections_array_flat_T_TM_string(const char* strValue) {
	static P005_sections_array_flat_T_TM rTemp;
	return string_to_P005_sections_array_flat_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_OBU_sectionlist_enum_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_OBU_sectionlist_enum_T_TMVTable;
const char * P005_OBU_sectionlist_enum_T_TM_to_string(const void* pValue) {
	if (pSimP005_OBU_sectionlist_enum_T_TMVTable != 0 && pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnToType(SptString, pValue);
	return array__1425_to_string(pValue);
}

int string_to_P005_OBU_sectionlist_enum_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_OBU_sectionlist_enum_T_TMVTable != 0 && pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_OBU_sectionlist_enum_T_TM rTemp;
		int nResult = pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__1425(&(*((P005_OBU_sectionlist_enum_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__1425(strValue, pValue);
}

int is_P005_OBU_sectionlist_enum_T_TM_allow_double_convertion() {
	if (pSimP005_OBU_sectionlist_enum_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__1425_allow_double_convertion();
}

int P005_OBU_sectionlist_enum_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_OBU_sectionlist_enum_T_TMVTable != 0) {
		if (pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_OBU_sectionlist_enum_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__1425_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__1425_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_OBU_sectionlist_enum_T_TM_string(const char* strValue) {
	static P005_OBU_sectionlist_enum_T_TM rTemp;
	return string_to_P005_OBU_sectionlist_enum_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_OBU_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_OBU_T_TMVTable;
const char * P005_OBU_T_TM_to_string(const void* pValue) {
	if (pSimP005_OBU_T_TMVTable != 0 && pSimP005_OBU_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_OBU_T_TMVTable->m_pfnToType(SptString, pValue);
	return struct__1428_to_string(pValue);
}

int string_to_P005_OBU_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_OBU_T_TMVTable != 0 && pSimP005_OBU_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_OBU_T_TM rTemp;
		int nResult = pSimP005_OBU_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1428(&(*((P005_OBU_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1428(strValue, pValue);
}

int is_P005_OBU_T_TM_allow_double_convertion() {
	if (pSimP005_OBU_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_OBU_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_OBU_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_OBU_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_OBU_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__1428_allow_double_convertion();
}

int P005_OBU_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_OBU_T_TMVTable != 0) {
		if (pSimP005_OBU_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_OBU_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_OBU_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_OBU_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_OBU_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_OBU_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_OBU_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_OBU_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__1428_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1428_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_OBU_T_TM_string(const char* strValue) {
	static P005_OBU_T_TM rTemp;
	return string_to_P005_OBU_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** Array03_TM
 ****************************************************************/
struct SimTypeVTable* pSimArray03_TMVTable;
const char * Array03_TM_to_string(const void* pValue) {
	if (pSimArray03_TMVTable != 0 && pSimArray03_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimArray03_TMVTable->m_pfnToType(SptString, pValue);
	return array_int_3_to_string(pValue);
}

int string_to_Array03_TM(const char* strValue, void* pValue) {
	if (pSimArray03_TMVTable != 0 && pSimArray03_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Array03_TM rTemp;
		int nResult = pSimArray03_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_3(&(*((Array03_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_3(strValue, pValue);
}

int is_Array03_TM_allow_double_convertion() {
	if (pSimArray03_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimArray03_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimArray03_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimArray03_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimArray03_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_3_allow_double_convertion();
}

int Array03_TM_to_double(double * nValue, const void* pValue) {
	if (pSimArray03_TMVTable != 0) {
		if (pSimArray03_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimArray03_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimArray03_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimArray03_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimArray03_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimArray03_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimArray03_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimArray03_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_3_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_3_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Array03_TM_string(const char* strValue) {
	static Array03_TM rTemp;
	return string_to_Array03_TM(strValue, &rTemp);
}


/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimMetadataElement_T_Common_Types_PkgVTable;
const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0 && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__1440_to_string(pValue);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0 && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static MetadataElement_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1440(&(*((MetadataElement_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1440(strValue, pValue);
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
	return is_struct__1440_allow_double_convertion();
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
	if (_SCSIM_struct__1440_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1440_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue) {
	static MetadataElement_T_Common_Types_Pkg rTemp;
	return string_to_MetadataElement_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimMetadata_T_Common_Types_PkgVTable;
const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0 && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return array__1448_to_string(pValue);
}

int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0 && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Metadata_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadata_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__1448(&(*((Metadata_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__1448(strValue, pValue);
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
	return is_array__1448_allow_double_convertion();
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
	if (_SCSIM_array__1448_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__1448_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Metadata_T_Common_Types_Pkg_string(const char* strValue) {
	static Metadata_T_Common_Types_Pkg rTemp;
	return string_to_Metadata_T_Common_Types_Pkg(strValue, &rTemp);
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
	return struct__1451_to_string(pValue);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0 && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static CompressedPackets_T_Common_Types_Pkg rTemp;
		int nResult = pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1451(&(*((CompressedPackets_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1451(strValue, pValue);
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
	return is_struct__1451_allow_double_convertion();
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
	if (_SCSIM_struct__1451_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1451_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue) {
	static CompressedPackets_T_Common_Types_Pkg rTemp;
	return string_to_CompressedPackets_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** LinkedBG_T_BG_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimLinkedBG_T_BG_Types_PkgVTable;
const char * LinkedBG_T_BG_Types_Pkg_to_string(const void* pValue) {
	if (pSimLinkedBG_T_BG_Types_PkgVTable != 0 && pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__1397_to_string(pValue);
}

int string_to_LinkedBG_T_BG_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimLinkedBG_T_BG_Types_PkgVTable != 0 && pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static LinkedBG_T_BG_Types_Pkg rTemp;
		int nResult = pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1397(&(*((LinkedBG_T_BG_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1397(strValue, pValue);
}

int is_LinkedBG_T_BG_Types_Pkg_allow_double_convertion() {
	if (pSimLinkedBG_T_BG_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__1397_allow_double_convertion();
}

int LinkedBG_T_BG_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimLinkedBG_T_BG_Types_PkgVTable != 0) {
		if (pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__1397_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1397_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_LinkedBG_T_BG_Types_Pkg_string(const char* strValue) {
	static LinkedBG_T_BG_Types_Pkg rTemp;
	return string_to_LinkedBG_T_BG_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** LinkedBGs_T_BG_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimLinkedBGs_T_BG_Types_PkgVTable;
const char * LinkedBGs_T_BG_Types_Pkg_to_string(const void* pValue) {
	if (pSimLinkedBGs_T_BG_Types_PkgVTable != 0 && pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return array__1411_to_string(pValue);
}

int string_to_LinkedBGs_T_BG_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimLinkedBGs_T_BG_Types_PkgVTable != 0 && pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static LinkedBGs_T_BG_Types_Pkg rTemp;
		int nResult = pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__1411(&(*((LinkedBGs_T_BG_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__1411(strValue, pValue);
}

int is_LinkedBGs_T_BG_Types_Pkg_allow_double_convertion() {
	if (pSimLinkedBGs_T_BG_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__1411_allow_double_convertion();
}

int LinkedBGs_T_BG_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimLinkedBGs_T_BG_Types_PkgVTable != 0) {
		if (pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__1411_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__1411_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_LinkedBGs_T_BG_Types_Pkg_string(const char* strValue) {
	static LinkedBGs_T_BG_Types_Pkg rTemp;
	return string_to_LinkedBGs_T_BG_Types_Pkg(strValue, &rTemp);
}


