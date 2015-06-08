
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "Write_P005_TM_trackside_type.h"
#include "Write_P005_TM_trackside_mapping.h"

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
TypeUtils _SCSIM_array_int_7_Utils = {array_int_7_to_string,
	check_array_int_7_string,
	string_to_array_int_7,
	is_array_int_7_allow_double_convertion,
	0,
	compare_array_int_7_type,
	get_array_int_7_signature,
	get_array_int_7_filter_utils,
	array_int_7_filter_size,
	array_int_7_filter_values};
TypeUtils _SCSIM_struct__714_Utils = {struct__714_to_string,
	check_struct__714_string,
	string_to_struct__714,
	is_struct__714_allow_double_convertion,
	0,
	compare_struct__714_type,
	get_struct__714_signature,
	get_struct__714_filter_utils,
	struct__714_filter_size,
	struct__714_filter_values};
TypeUtils _SCSIM_array_int_7_33_Utils = {array_int_7_33_to_string,
	check_array_int_7_33_string,
	string_to_array_int_7_33,
	is_array_int_7_33_allow_double_convertion,
	0,
	compare_array_int_7_33_type,
	get_array_int_7_33_signature,
	get_array_int_7_33_filter_utils,
	array_int_7_33_filter_size,
	array_int_7_33_filter_values};
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
TypeUtils _SCSIM_array__730_Utils = {array__730_to_string,
	check_array__730_string,
	string_to_array__730,
	is_array__730_allow_double_convertion,
	0,
	compare_array__730_type,
	get_array__730_signature,
	get_array__730_filter_utils,
	array__730_filter_size,
	array__730_filter_values};
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
TypeUtils _SCSIM_struct__736_Utils = {struct__736_to_string,
	check_struct__736_string,
	string_to_struct__736,
	is_struct__736_allow_double_convertion,
	0,
	compare_struct__736_type,
	get_struct__736_signature,
	get_struct__736_filter_utils,
	struct__736_filter_size,
	struct__736_filter_values};
TypeUtils _SCSIM_array__744_Utils = {array__744_to_string,
	check_array__744_string,
	string_to_array__744,
	is_array__744_allow_double_convertion,
	0,
	compare_array__744_type,
	get_array__744_signature,
	get_array__744_filter_utils,
	array__744_filter_size,
	array__744_filter_values};
TypeUtils _SCSIM_struct__747_Utils = {struct__747_to_string,
	check_struct__747_string,
	string_to_struct__747,
	is_struct__747_allow_double_convertion,
	0,
	compare_struct__747_type,
	get_struct__747_signature,
	get_struct__747_filter_utils,
	struct__747_filter_size,
	struct__747_filter_values};
TypeUtils _SCSIM_array__764_Utils = {array__764_to_string,
	check_array__764_string,
	string_to_array__764,
	is_array__764_allow_double_convertion,
	0,
	compare_array__764_type,
	get_array__764_signature,
	get_array__764_filter_utils,
	array__764_filter_size,
	array__764_filter_values};
TypeUtils _SCSIM_struct__767_Utils = {struct__767_to_string,
	check_struct__767_string,
	string_to_struct__767,
	is_struct__767_allow_double_convertion,
	0,
	compare_struct__767_type,
	get_struct__767_signature,
	get_struct__767_filter_utils,
	struct__767_filter_size,
	struct__767_filter_values};
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
TypeUtils _SCSIM_array_int_7_33_231_Utils = {array_int_7_33_231_to_string,
	check_array_int_7_33_231_string,
	string_to_array_int_7_33_231,
	is_array_int_7_33_231_allow_double_convertion,
	0,
	compare_array_int_7_33_231_type,
	get_array_int_7_33_231_signature,
	get_array_int_7_33_231_filter_utils,
	array_int_7_33_231_filter_size,
	array_int_7_33_231_filter_values};
TypeUtils _SCSIM_array_int_271_Utils = {array_int_271_to_string,
	check_array_int_271_string,
	string_to_array_int_271,
	is_array_int_271_allow_double_convertion,
	0,
	compare_array_int_271_type,
	get_array_int_271_signature,
	get_array_int_271_filter_utils,
	array_int_271_filter_size,
	array_int_271_filter_values};
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
TypeUtils _SCSIM_array_int_5_Utils = {array_int_5_to_string,
	check_array_int_5_string,
	string_to_array_int_5,
	is_array_int_5_allow_double_convertion,
	0,
	compare_array_int_5_type,
	get_array_int_5_signature,
	get_array_int_5_filter_utils,
	array_int_5_filter_size,
	array_int_5_filter_values};
TypeUtils _SCSIM_array_int_229_Utils = {array_int_229_to_string,
	check_array_int_229_string,
	string_to_array_int_229,
	is_array_int_229_allow_double_convertion,
	0,
	compare_array_int_229_type,
	get_array_int_229_signature,
	get_array_int_229_filter_utils,
	array_int_229_filter_size,
	array_int_229_filter_values};
TypeUtils _SCSIM_array__793_Utils = {array__793_to_string,
	check_array__793_string,
	string_to_array__793,
	is_array__793_allow_double_convertion,
	0,
	compare_array__793_type,
	get_array__793_signature,
	get_array__793_filter_utils,
	array__793_filter_size,
	array__793_filter_values};
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
TypeUtils _SCSIM_P005_trackside_int_T_TM_Utils = {P005_trackside_int_T_TM_to_string,
	check_P005_trackside_int_T_TM_string,
	string_to_P005_trackside_int_T_TM,
	is_P005_trackside_int_T_TM_allow_double_convertion,
	P005_trackside_int_T_TM_to_double,
	compare_P005_trackside_int_T_TM_type,
	get_P005_trackside_int_T_TM_signature,
	get_P005_trackside_int_T_TM_filter_utils,
	P005_trackside_int_T_TM_filter_size,
	P005_trackside_int_T_TM_filter_values};
TypeUtils _SCSIM_P005_trackide_sectionlist_T_TM_Utils = {P005_trackide_sectionlist_T_TM_to_string,
	check_P005_trackide_sectionlist_T_TM_string,
	string_to_P005_trackide_sectionlist_T_TM,
	is_P005_trackide_sectionlist_T_TM_allow_double_convertion,
	P005_trackide_sectionlist_T_TM_to_double,
	compare_P005_trackide_sectionlist_T_TM_type,
	get_P005_trackide_sectionlist_T_TM_signature,
	get_P005_trackide_sectionlist_T_TM_filter_utils,
	P005_trackide_sectionlist_T_TM_filter_size,
	P005_trackide_sectionlist_T_TM_filter_values};
TypeUtils _SCSIM_P005_section_int_T_TM_Utils = {P005_section_int_T_TM_to_string,
	check_P005_section_int_T_TM_string,
	string_to_P005_section_int_T_TM,
	is_P005_section_int_T_TM_allow_double_convertion,
	P005_section_int_T_TM_to_double,
	compare_P005_section_int_T_TM_type,
	get_P005_section_int_T_TM_signature,
	get_P005_section_int_T_TM_filter_utils,
	P005_section_int_T_TM_filter_size,
	P005_section_int_T_TM_filter_values};
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
TypeUtils _SCSIM_P005_OBU_sectionlist_array_T_TM_Utils = {P005_OBU_sectionlist_array_T_TM_to_string,
	check_P005_OBU_sectionlist_array_T_TM_string,
	string_to_P005_OBU_sectionlist_array_T_TM,
	is_P005_OBU_sectionlist_array_T_TM_allow_double_convertion,
	P005_OBU_sectionlist_array_T_TM_to_double,
	compare_P005_OBU_sectionlist_array_T_TM_type,
	get_P005_OBU_sectionlist_array_T_TM_signature,
	get_P005_OBU_sectionlist_array_T_TM_filter_utils,
	P005_OBU_sectionlist_array_T_TM_filter_size,
	P005_OBU_sectionlist_array_T_TM_filter_values};
TypeUtils _SCSIM_P005_section_array_T_TM_Utils = {P005_section_array_T_TM_to_string,
	check_P005_section_array_T_TM_string,
	string_to_P005_section_array_T_TM,
	is_P005_section_array_T_TM_allow_double_convertion,
	P005_section_array_T_TM_to_double,
	compare_P005_section_array_T_TM_type,
	get_P005_section_array_T_TM_signature,
	get_P005_section_array_T_TM_filter_utils,
	P005_section_array_T_TM_filter_size,
	P005_section_array_T_TM_filter_values};
TypeUtils _SCSIM_P005_OBU_sectionlist_int_T_TM_Utils = {P005_OBU_sectionlist_int_T_TM_to_string,
	check_P005_OBU_sectionlist_int_T_TM_string,
	string_to_P005_OBU_sectionlist_int_T_TM,
	is_P005_OBU_sectionlist_int_T_TM_allow_double_convertion,
	P005_OBU_sectionlist_int_T_TM_to_double,
	compare_P005_OBU_sectionlist_int_T_TM_type,
	get_P005_OBU_sectionlist_int_T_TM_signature,
	get_P005_OBU_sectionlist_int_T_TM_filter_utils,
	P005_OBU_sectionlist_int_T_TM_filter_size,
	P005_OBU_sectionlist_int_T_TM_filter_values};
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
 ** array_int_7
 ****************************************************************/
void* array_int_7_projection(void** pValues, int nIndex) {
	return &((*(array_int_7*)pValues)[nIndex]);
}

const char * array_int_7_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 7, array_int_7_projection);
}

int compare_array_int_7_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 7, array_int_7_projection);
}

int is_array_int_7_allow_double_convertion() {
	return 0;
}

int string_to_array_int_7(const char* strValue, void* pValue) {
	static array_int_7 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 7, array_int_7_projection);
	if (nResult == 1)
		kcg_copy_array_int_7(&(*((array_int_7*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_7_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 7);
}

FilterUtils get_array_int_7_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 7, array_int_7_projection);
}

int check_array_int_7_string(const char* strValue) {
	static array_int_7 rTemp;
	return string_to_array_int_7(strValue, &rTemp);
}


/****************************************************************
 ** struct__714
 ****************************************************************/
static void Fill_struct__714_StructSimValue(struct__714 * pStruct, StructSimValue * pValues) {
	/*D_LINK label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->D_LINK) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "D_LINK";
	/*Q_NEWCOUNTRY label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Q_NEWCOUNTRY) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "Q_NEWCOUNTRY";
	/*NID_C label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->NID_C) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "NID_C";
	/*NID_BG label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->NID_BG) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "NID_BG";
	/*Q_LINKORIENTATION label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->Q_LINKORIENTATION) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "Q_LINKORIENTATION";
	/*Q_LINKREACTION label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->Q_LINKREACTION) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "Q_LINKREACTION";
	/*Q_LOCACC label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->Q_LOCACC) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "Q_LOCACC";
}

const char * struct__714_to_string(const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__714_StructSimValue(((struct__714*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 7);
}

int string_to_struct__714(const char* strValue, void* pValue) {
	static struct__714 rTemp;
	int nResult = 0;
	static StructSimValue values[7];
	kcg_copy_struct__714(&(rTemp), &(*((struct__714*)pValue)));
	Fill_struct__714_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 7);
	if (nResult == 1)
		kcg_copy_struct__714(&(*((struct__714*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__714_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__714_StructSimValue((struct__714*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 7);
}


int is_struct__714_allow_double_convertion() {
	return 0;
}


const char * get_struct__714_signature() {
	static StructSimValue values[7];
	Fill_struct__714_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 7);
}

FilterUtils get_struct__714_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[7];
	Fill_struct__714_StructSimValue((struct__714*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 7, strFilter);
}

const char * struct__714_filter_values[7] = {"D_LINK", "Q_NEWCOUNTRY", "NID_C", "NID_BG", "Q_LINKORIENTATION", "Q_LINKREACTION", "Q_LOCACC"};
int check_struct__714_string(const char* strValue) {
	static struct__714 rTemp;
	return string_to_struct__714(strValue, &rTemp);
}


/****************************************************************
 ** array_int_7_33
 ****************************************************************/
void* array_int_7_33_projection(void** pValues, int nIndex) {
	return &((*(array_int_7_33*)pValues)[nIndex]);
}

const char * array_int_7_33_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_int_7_to_string, 33, array_int_7_33_projection);
}

int compare_array_int_7_33_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_int_7_type , 33, array_int_7_33_projection);
}

int is_array_int_7_33_allow_double_convertion() {
	return 0;
}

int string_to_array_int_7_33(const char* strValue, void* pValue) {
	static array_int_7_33 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_int_7, 33, array_int_7_33_projection);
	if (nResult == 1)
		kcg_copy_array_int_7_33(&(*((array_int_7_33*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_7_33_signature() {
	return pSimulator->m_pfnArraySignature(get_array_int_7_signature, 33);
}

FilterUtils get_array_int_7_33_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_int_7_Utils, strFilter, (void**)pValue, 33, array_int_7_33_projection);
}

int check_array_int_7_33_string(const char* strValue) {
	static array_int_7_33 rTemp;
	return string_to_array_int_7_33(strValue, &rTemp);
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
 ** array__730
 ****************************************************************/
void* array__730_projection(void** pValues, int nIndex) {
	return &((*(array__730*)pValues)[nIndex]);
}

const char * array__730_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__714_to_string, 33, array__730_projection);
}

int compare_array__730_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__714_type , 33, array__730_projection);
}

int is_array__730_allow_double_convertion() {
	return 0;
}

int string_to_array__730(const char* strValue, void* pValue) {
	static array__730 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__714, 33, array__730_projection);
	if (nResult == 1)
		kcg_copy_array__730(&(*((array__730*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__730_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__714_signature, 33);
}

FilterUtils get_array__730_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__714_Utils, strFilter, (void**)pValue, 33, array__730_projection);
}

int check_array__730_string(const char* strValue) {
	static array__730 rTemp;
	return string_to_array__730(strValue, &rTemp);
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
 ** struct__736
 ****************************************************************/
static void Fill_struct__736_StructSimValue(struct__736 * pStruct, StructSimValue * pValues) {
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

const char * struct__736_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__736_StructSimValue(((struct__736*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__736(const char* strValue, void* pValue) {
	static struct__736 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__736(&(rTemp), &(*((struct__736*)pValue)));
	Fill_struct__736_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__736(&(*((struct__736*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__736_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__736_StructSimValue((struct__736*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__736_allow_double_convertion() {
	return 0;
}


const char * get_struct__736_signature() {
	static StructSimValue values[5];
	Fill_struct__736_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__736_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__736_StructSimValue((struct__736*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__736_filter_values[5] = {"nid_packet", "q_dir", "valid", "startAddress", "endAddress"};
int check_struct__736_string(const char* strValue) {
	static struct__736 rTemp;
	return string_to_struct__736(strValue, &rTemp);
}


/****************************************************************
 ** array__744
 ****************************************************************/
void* array__744_projection(void** pValues, int nIndex) {
	return &((*(array__744*)pValues)[nIndex]);
}

const char * array__744_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__714_to_string, 32, array__744_projection);
}

int compare_array__744_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__714_type , 32, array__744_projection);
}

int is_array__744_allow_double_convertion() {
	return 0;
}

int string_to_array__744(const char* strValue, void* pValue) {
	static array__744 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__714, 32, array__744_projection);
	if (nResult == 1)
		kcg_copy_array__744(&(*((array__744*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__744_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__714_signature, 32);
}

FilterUtils get_array__744_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__714_Utils, strFilter, (void**)pValue, 32, array__744_projection);
}

int check_array__744_string(const char* strValue) {
	static array__744 rTemp;
	return string_to_array__744(strValue, &rTemp);
}


/****************************************************************
 ** struct__747
 ****************************************************************/
static void Fill_struct__747_StructSimValue(struct__747 * pStruct, StructSimValue * pValues) {
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
	/*D_LINK label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->D_LINK) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "D_LINK";
	/*Q_NEWCOUNTRY label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->Q_NEWCOUNTRY) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "Q_NEWCOUNTRY";
	/*NID_C label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->NID_C) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "NID_C";
	/*NID_BG label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->NID_BG) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[8].m_pszName = "NID_BG";
	/*Q_LINKORIENTATION label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->Q_LINKORIENTATION) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[9].m_pszName = "Q_LINKORIENTATION";
	/*Q_LINKREACTION label.*/
	pValues[10].m_pPtr = pStruct != 0 ? &(pStruct->Q_LINKREACTION) : 0;
	pValues[10].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[10].m_pszName = "Q_LINKREACTION";
	/*Q_LOCACC label.*/
	pValues[11].m_pPtr = pStruct != 0 ? &(pStruct->Q_LOCACC) : 0;
	pValues[11].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[11].m_pszName = "Q_LOCACC";
	/*N_ITER label.*/
	pValues[12].m_pPtr = pStruct != 0 ? &(pStruct->N_ITER) : 0;
	pValues[12].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[12].m_pszName = "N_ITER";
	/*SECTIONS label.*/
	pValues[13].m_pPtr = pStruct != 0 ? &(pStruct->SECTIONS) : 0;
	pValues[13].m_pTypeUtils = &_SCSIM_array__744_Utils;
	pValues[13].m_pszName = "SECTIONS";
}

const char * struct__747_to_string(const void* pValue) {
	static StructSimValue values[14];
	Fill_struct__747_StructSimValue(((struct__747*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 14);
}

int string_to_struct__747(const char* strValue, void* pValue) {
	static struct__747 rTemp;
	int nResult = 0;
	static StructSimValue values[14];
	kcg_copy_struct__747(&(rTemp), &(*((struct__747*)pValue)));
	Fill_struct__747_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 14);
	if (nResult == 1)
		kcg_copy_struct__747(&(*((struct__747*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__747_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[14];
	Fill_struct__747_StructSimValue((struct__747*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 14);
}


int is_struct__747_allow_double_convertion() {
	return 0;
}


const char * get_struct__747_signature() {
	static StructSimValue values[14];
	Fill_struct__747_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 14);
}

FilterUtils get_struct__747_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[14];
	Fill_struct__747_StructSimValue((struct__747*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 14, strFilter);
}

const char * struct__747_filter_values[14] = {"valid", "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_LINK", "Q_NEWCOUNTRY", "NID_C", "NID_BG", "Q_LINKORIENTATION", "Q_LINKREACTION", "Q_LOCACC", "N_ITER", "SECTIONS"};
int check_struct__747_string(const char* strValue) {
	static struct__747 rTemp;
	return string_to_struct__747(strValue, &rTemp);
}


/****************************************************************
 ** array__764
 ****************************************************************/
void* array__764_projection(void** pValues, int nIndex) {
	return &((*(array__764*)pValues)[nIndex]);
}

const char * array__764_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__736_to_string, 30, array__764_projection);
}

int compare_array__764_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__736_type , 30, array__764_projection);
}

int is_array__764_allow_double_convertion() {
	return 0;
}

int string_to_array__764(const char* strValue, void* pValue) {
	static array__764 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__736, 30, array__764_projection);
	if (nResult == 1)
		kcg_copy_array__764(&(*((array__764*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__764_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__736_signature, 30);
}

FilterUtils get_array__764_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__736_Utils, strFilter, (void**)pValue, 30, array__764_projection);
}

int check_array__764_string(const char* strValue) {
	static array__764 rTemp;
	return string_to_array__764(strValue, &rTemp);
}


/****************************************************************
 ** struct__767
 ****************************************************************/
static void Fill_struct__767_StructSimValue(struct__767 * pStruct, StructSimValue * pValues) {
	/*PacketHeaders label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->PacketHeaders) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_array__764_Utils;
	pValues[0].m_pszName = "PacketHeaders";
	/*PacketData label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->PacketData) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_array_int_500_Utils;
	pValues[1].m_pszName = "PacketData";
}

const char * struct__767_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__767_StructSimValue(((struct__767*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__767(const char* strValue, void* pValue) {
	static struct__767 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__767(&(rTemp), &(*((struct__767*)pValue)));
	Fill_struct__767_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__767(&(*((struct__767*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__767_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__767_StructSimValue((struct__767*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__767_allow_double_convertion() {
	return 0;
}


const char * get_struct__767_signature() {
	static StructSimValue values[2];
	Fill_struct__767_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__767_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__767_StructSimValue((struct__767*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__767_filter_values[2] = {"PacketHeaders", "PacketData"};
int check_struct__767_string(const char* strValue) {
	static struct__767 rTemp;
	return string_to_struct__767(strValue, &rTemp);
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
 ** array_int_7_33_231
 ****************************************************************/
void* array_int_7_33_231_projection(void** pValues, int nIndex) {
	return &((*(array_int_7_33_231*)pValues)[nIndex]);
}

const char * array_int_7_33_231_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_int_7_33_to_string, 231, array_int_7_33_231_projection);
}

int compare_array_int_7_33_231_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_int_7_33_type , 231, array_int_7_33_231_projection);
}

int is_array_int_7_33_231_allow_double_convertion() {
	return 0;
}

int string_to_array_int_7_33_231(const char* strValue, void* pValue) {
	static array_int_7_33_231 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_int_7_33, 231, array_int_7_33_231_projection);
	if (nResult == 1)
		kcg_copy_array_int_7_33_231(&(*((array_int_7_33_231*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_7_33_231_signature() {
	return pSimulator->m_pfnArraySignature(get_array_int_7_33_signature, 231);
}

FilterUtils get_array_int_7_33_231_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_int_7_33_Utils, strFilter, (void**)pValue, 231, array_int_7_33_231_projection);
}

int check_array_int_7_33_231_string(const char* strValue) {
	static array_int_7_33_231 rTemp;
	return string_to_array_int_7_33_231(strValue, &rTemp);
}


/****************************************************************
 ** array_int_271
 ****************************************************************/
void* array_int_271_projection(void** pValues, int nIndex) {
	return &((*(array_int_271*)pValues)[nIndex]);
}

const char * array_int_271_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 271, array_int_271_projection);
}

int compare_array_int_271_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 271, array_int_271_projection);
}

int is_array_int_271_allow_double_convertion() {
	return 0;
}

int string_to_array_int_271(const char* strValue, void* pValue) {
	static array_int_271 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 271, array_int_271_projection);
	if (nResult == 1)
		kcg_copy_array_int_271(&(*((array_int_271*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_271_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 271);
}

FilterUtils get_array_int_271_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 271, array_int_271_projection);
}

int check_array_int_271_string(const char* strValue) {
	static array_int_271 rTemp;
	return string_to_array_int_271(strValue, &rTemp);
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
 ** array_int_5
 ****************************************************************/
void* array_int_5_projection(void** pValues, int nIndex) {
	return &((*(array_int_5*)pValues)[nIndex]);
}

const char * array_int_5_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 5, array_int_5_projection);
}

int compare_array_int_5_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 5, array_int_5_projection);
}

int is_array_int_5_allow_double_convertion() {
	return 0;
}

int string_to_array_int_5(const char* strValue, void* pValue) {
	static array_int_5 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 5, array_int_5_projection);
	if (nResult == 1)
		kcg_copy_array_int_5(&(*((array_int_5*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_5_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 5);
}

FilterUtils get_array_int_5_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 5, array_int_5_projection);
}

int check_array_int_5_string(const char* strValue) {
	static array_int_5 rTemp;
	return string_to_array_int_5(strValue, &rTemp);
}


/****************************************************************
 ** array_int_229
 ****************************************************************/
void* array_int_229_projection(void** pValues, int nIndex) {
	return &((*(array_int_229*)pValues)[nIndex]);
}

const char * array_int_229_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 229, array_int_229_projection);
}

int compare_array_int_229_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 229, array_int_229_projection);
}

int is_array_int_229_allow_double_convertion() {
	return 0;
}

int string_to_array_int_229(const char* strValue, void* pValue) {
	static array_int_229 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 229, array_int_229_projection);
	if (nResult == 1)
		kcg_copy_array_int_229(&(*((array_int_229*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_229_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 229);
}

FilterUtils get_array_int_229_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 229, array_int_229_projection);
}

int check_array_int_229_string(const char* strValue) {
	static array_int_229 rTemp;
	return string_to_array_int_229(strValue, &rTemp);
}


/****************************************************************
 ** array__793
 ****************************************************************/
void* array__793_projection(void** pValues, int nIndex) {
	return &((*(array__793*)pValues)[nIndex]);
}

const char * array__793_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__714_to_string, 1, array__793_projection);
}

int compare_array__793_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__714_type , 1, array__793_projection);
}

int is_array__793_allow_double_convertion() {
	return 0;
}

int string_to_array__793(const char* strValue, void* pValue) {
	static array__793 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__714, 1, array__793_projection);
	if (nResult == 1)
		kcg_copy_array__793(&(*((array__793*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__793_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__714_signature, 1);
}

FilterUtils get_array__793_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__714_Utils, strFilter, (void**)pValue, 1, array__793_projection);
}

int check_array__793_string(const char* strValue) {
	static array__793 rTemp;
	return string_to_array__793(strValue, &rTemp);
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
 ** P005_trackside_int_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_trackside_int_T_TMVTable;
const char * P005_trackside_int_T_TM_to_string(const void* pValue) {
	if (pSimP005_trackside_int_T_TMVTable != 0 && pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue);
	return struct__747_to_string(pValue);
}

int string_to_P005_trackside_int_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_trackside_int_T_TMVTable != 0 && pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_trackside_int_T_TM rTemp;
		int nResult = pSimP005_trackside_int_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__747(&(*((P005_trackside_int_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__747(strValue, pValue);
}

int is_P005_trackside_int_T_TM_allow_double_convertion() {
	if (pSimP005_trackside_int_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__747_allow_double_convertion();
}

int P005_trackside_int_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_trackside_int_T_TMVTable != 0) {
		if (pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_trackside_int_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_trackside_int_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_trackside_int_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_trackside_int_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__747_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__747_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_trackside_int_T_TM_string(const char* strValue) {
	static P005_trackside_int_T_TM rTemp;
	return string_to_P005_trackside_int_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_trackide_sectionlist_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_trackide_sectionlist_T_TMVTable;
const char * P005_trackide_sectionlist_T_TM_to_string(const void* pValue) {
	if (pSimP005_trackide_sectionlist_T_TMVTable != 0 && pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue);
	return array__744_to_string(pValue);
}

int string_to_P005_trackide_sectionlist_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_trackide_sectionlist_T_TMVTable != 0 && pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_trackide_sectionlist_T_TM rTemp;
		int nResult = pSimP005_trackide_sectionlist_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__744(&(*((P005_trackide_sectionlist_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__744(strValue, pValue);
}

int is_P005_trackide_sectionlist_T_TM_allow_double_convertion() {
	if (pSimP005_trackide_sectionlist_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__744_allow_double_convertion();
}

int P005_trackide_sectionlist_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_trackide_sectionlist_T_TMVTable != 0) {
		if (pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_trackide_sectionlist_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_trackide_sectionlist_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_trackide_sectionlist_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_trackide_sectionlist_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__744_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__744_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_trackide_sectionlist_T_TM_string(const char* strValue) {
	static P005_trackide_sectionlist_T_TM rTemp;
	return string_to_P005_trackide_sectionlist_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_section_int_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_section_int_T_TMVTable;
const char * P005_section_int_T_TM_to_string(const void* pValue) {
	if (pSimP005_section_int_T_TMVTable != 0 && pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_section_int_T_TMVTable->m_pfnToType(SptString, pValue);
	return struct__714_to_string(pValue);
}

int string_to_P005_section_int_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_section_int_T_TMVTable != 0 && pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_section_int_T_TM rTemp;
		int nResult = pSimP005_section_int_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__714(&(*((P005_section_int_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__714(strValue, pValue);
}

int is_P005_section_int_T_TM_allow_double_convertion() {
	if (pSimP005_section_int_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__714_allow_double_convertion();
}

int P005_section_int_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_section_int_T_TMVTable != 0) {
		if (pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_section_int_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_section_int_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_section_int_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_section_int_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__714_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__714_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_section_int_T_TM_string(const char* strValue) {
	static P005_section_int_T_TM rTemp;
	return string_to_P005_section_int_T_TM(strValue, &rTemp);
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
 ** P005_OBU_sectionlist_array_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_OBU_sectionlist_array_T_TMVTable;
const char * P005_OBU_sectionlist_array_T_TM_to_string(const void* pValue) {
	if (pSimP005_OBU_sectionlist_array_T_TMVTable != 0 && pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptString, pValue);
	return array_int_7_33_to_string(pValue);
}

int string_to_P005_OBU_sectionlist_array_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_OBU_sectionlist_array_T_TMVTable != 0 && pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_OBU_sectionlist_array_T_TM rTemp;
		int nResult = pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_7_33(&(*((P005_OBU_sectionlist_array_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_7_33(strValue, pValue);
}

int is_P005_OBU_sectionlist_array_T_TM_allow_double_convertion() {
	if (pSimP005_OBU_sectionlist_array_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_7_33_allow_double_convertion();
}

int P005_OBU_sectionlist_array_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_OBU_sectionlist_array_T_TMVTable != 0) {
		if (pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_7_33_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_7_33_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_OBU_sectionlist_array_T_TM_string(const char* strValue) {
	static P005_OBU_sectionlist_array_T_TM rTemp;
	return string_to_P005_OBU_sectionlist_array_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_section_array_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_section_array_T_TMVTable;
const char * P005_section_array_T_TM_to_string(const void* pValue) {
	if (pSimP005_section_array_T_TMVTable != 0 && pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_section_array_T_TMVTable->m_pfnToType(SptString, pValue);
	return array_int_7_to_string(pValue);
}

int string_to_P005_section_array_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_section_array_T_TMVTable != 0 && pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_section_array_T_TM rTemp;
		int nResult = pSimP005_section_array_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_7(&(*((P005_section_array_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_7(strValue, pValue);
}

int is_P005_section_array_T_TM_allow_double_convertion() {
	if (pSimP005_section_array_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_7_allow_double_convertion();
}

int P005_section_array_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_section_array_T_TMVTable != 0) {
		if (pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_section_array_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_section_array_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_section_array_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_section_array_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_7_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_7_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_section_array_T_TM_string(const char* strValue) {
	static P005_section_array_T_TM rTemp;
	return string_to_P005_section_array_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_OBU_sectionlist_int_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_OBU_sectionlist_int_T_TMVTable;
const char * P005_OBU_sectionlist_int_T_TM_to_string(const void* pValue) {
	if (pSimP005_OBU_sectionlist_int_T_TMVTable != 0 && pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue);
	return array__730_to_string(pValue);
}

int string_to_P005_OBU_sectionlist_int_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_OBU_sectionlist_int_T_TMVTable != 0 && pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_OBU_sectionlist_int_T_TM rTemp;
		int nResult = pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__730(&(*((P005_OBU_sectionlist_int_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__730(strValue, pValue);
}

int is_P005_OBU_sectionlist_int_T_TM_allow_double_convertion() {
	if (pSimP005_OBU_sectionlist_int_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__730_allow_double_convertion();
}

int P005_OBU_sectionlist_int_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_OBU_sectionlist_int_T_TMVTable != 0) {
		if (pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__730_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__730_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_OBU_sectionlist_int_T_TM_string(const char* strValue) {
	static P005_OBU_sectionlist_int_T_TM rTemp;
	return string_to_P005_OBU_sectionlist_int_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimMetadata_T_Common_Types_PkgVTable;
const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0 && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return array__764_to_string(pValue);
}

int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0 && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Metadata_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadata_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__764(&(*((Metadata_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__764(strValue, pValue);
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
	return is_array__764_allow_double_convertion();
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
	if (_SCSIM_array__764_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__764_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return struct__736_to_string(pValue);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0 && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static MetadataElement_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__736(&(*((MetadataElement_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__736(strValue, pValue);
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
	return is_struct__736_allow_double_convertion();
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
	if (_SCSIM_struct__736_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__736_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return struct__767_to_string(pValue);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0 && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static CompressedPackets_T_Common_Types_Pkg rTemp;
		int nResult = pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__767(&(*((CompressedPackets_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__767(strValue, pValue);
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
	return is_struct__767_allow_double_convertion();
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
	if (_SCSIM_struct__767_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__767_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue) {
	static CompressedPackets_T_Common_Types_Pkg rTemp;
	return string_to_CompressedPackets_T_Common_Types_Pkg(strValue, &rTemp);
}


