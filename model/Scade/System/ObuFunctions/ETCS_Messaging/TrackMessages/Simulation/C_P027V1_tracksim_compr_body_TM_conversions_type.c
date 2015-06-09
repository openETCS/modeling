
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "C_P027V1_tracksim_compr_body_TM_conversions_type.h"
#include "C_P027V1_tracksim_compr_body_TM_conversions_mapping.h"

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
TypeUtils _SCSIM_struct__413_Utils = {struct__413_to_string,
	check_struct__413_string,
	string_to_struct__413,
	is_struct__413_allow_double_convertion,
	0,
	compare_struct__413_type,
	get_struct__413_signature,
	get_struct__413_filter_utils,
	struct__413_filter_size,
	struct__413_filter_values};
TypeUtils _SCSIM_array__418_Utils = {array__418_to_string,
	check_array__418_string,
	string_to_array__418,
	is_array__418_allow_double_convertion,
	0,
	compare_array__418_type,
	get_array__418_signature,
	get_array__418_filter_utils,
	array__418_filter_size,
	array__418_filter_values};
TypeUtils _SCSIM_struct__421_Utils = {struct__421_to_string,
	check_struct__421_string,
	string_to_struct__421,
	is_struct__421_allow_double_convertion,
	0,
	compare_struct__421_type,
	get_struct__421_signature,
	get_struct__421_filter_utils,
	struct__421_filter_size,
	struct__421_filter_values};
TypeUtils _SCSIM_array__429_Utils = {array__429_to_string,
	check_array__429_string,
	string_to_array__429,
	is_array__429_allow_double_convertion,
	0,
	compare_array__429_type,
	get_array__429_signature,
	get_array__429_filter_utils,
	array__429_filter_size,
	array__429_filter_values};
TypeUtils _SCSIM_array__432_Utils = {array__432_to_string,
	check_array__432_string,
	string_to_array__432,
	is_array__432_allow_double_convertion,
	0,
	compare_array__432_type,
	get_array__432_signature,
	get_array__432_filter_utils,
	array__432_filter_size,
	array__432_filter_values};
TypeUtils _SCSIM_struct__435_Utils = {struct__435_to_string,
	check_struct__435_string,
	string_to_struct__435,
	is_struct__435_allow_double_convertion,
	0,
	compare_struct__435_type,
	get_struct__435_signature,
	get_struct__435_filter_utils,
	struct__435_filter_size,
	struct__435_filter_values};
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
TypeUtils _SCSIM_struct__453_Utils = {struct__453_to_string,
	check_struct__453_string,
	string_to_struct__453,
	is_struct__453_allow_double_convertion,
	0,
	compare_struct__453_type,
	get_struct__453_signature,
	get_struct__453_filter_utils,
	struct__453_filter_size,
	struct__453_filter_values};
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
TypeUtils _SCSIM_array__467_Utils = {array__467_to_string,
	check_array__467_string,
	string_to_array__467,
	is_array__467_allow_double_convertion,
	0,
	compare_array__467_type,
	get_array__467_signature,
	get_array__467_filter_utils,
	array__467_filter_size,
	array__467_filter_values};
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
TypeUtils _SCSIM_P027V1_OBU_sectionlist_int_T_TM_Utils = {P027V1_OBU_sectionlist_int_T_TM_to_string,
	check_P027V1_OBU_sectionlist_int_T_TM_string,
	string_to_P027V1_OBU_sectionlist_int_T_TM,
	is_P027V1_OBU_sectionlist_int_T_TM_allow_double_convertion,
	P027V1_OBU_sectionlist_int_T_TM_to_double,
	compare_P027V1_OBU_sectionlist_int_T_TM_type,
	get_P027V1_OBU_sectionlist_int_T_TM_signature,
	get_P027V1_OBU_sectionlist_int_T_TM_filter_utils,
	P027V1_OBU_sectionlist_int_T_TM_filter_size,
	P027V1_OBU_sectionlist_int_T_TM_filter_values};

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
 ** struct__413
 ****************************************************************/
static void Fill_struct__413_StructSimValue(struct__413 * pStruct, StructSimValue * pValues) {
	/*NC_DIFF label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->NC_DIFF) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "NC_DIFF";
	/*V_DIFF label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->V_DIFF) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "V_DIFF";
}

const char * struct__413_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__413_StructSimValue(((struct__413*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__413(const char* strValue, void* pValue) {
	static struct__413 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__413(&(rTemp), &(*((struct__413*)pValue)));
	Fill_struct__413_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__413(&(*((struct__413*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__413_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__413_StructSimValue((struct__413*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__413_allow_double_convertion() {
	return 0;
}


const char * get_struct__413_signature() {
	static StructSimValue values[2];
	Fill_struct__413_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__413_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__413_StructSimValue((struct__413*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__413_filter_values[2] = {"NC_DIFF", "V_DIFF"};
int check_struct__413_string(const char* strValue) {
	static struct__413 rTemp;
	return string_to_struct__413(strValue, &rTemp);
}


/****************************************************************
 ** array__418
 ****************************************************************/
void* array__418_projection(void** pValues, int nIndex) {
	return &((*(array__418*)pValues)[nIndex]);
}

const char * array__418_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__413_to_string, 32, array__418_projection);
}

int compare_array__418_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__413_type , 32, array__418_projection);
}

int is_array__418_allow_double_convertion() {
	return 0;
}

int string_to_array__418(const char* strValue, void* pValue) {
	static array__418 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__413, 32, array__418_projection);
	if (nResult == 1)
		kcg_copy_array__418(&(*((array__418*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__418_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__413_signature, 32);
}

FilterUtils get_array__418_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__413_Utils, strFilter, (void**)pValue, 32, array__418_projection);
}

int check_array__418_string(const char* strValue) {
	static array__418 rTemp;
	return string_to_array__418(strValue, &rTemp);
}


/****************************************************************
 ** struct__421
 ****************************************************************/
static void Fill_struct__421_StructSimValue(struct__421 * pStruct, StructSimValue * pValues) {
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
	pValues[4].m_pTypeUtils = &_SCSIM_array__418_Utils;
	pValues[4].m_pszName = "SECTIONS_q_diff";
}

const char * struct__421_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__421_StructSimValue(((struct__421*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__421(const char* strValue, void* pValue) {
	static struct__421 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__421(&(rTemp), &(*((struct__421*)pValue)));
	Fill_struct__421_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__421(&(*((struct__421*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__421_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__421_StructSimValue((struct__421*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__421_allow_double_convertion() {
	return 0;
}


const char * get_struct__421_signature() {
	static StructSimValue values[5];
	Fill_struct__421_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__421_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__421_StructSimValue((struct__421*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__421_filter_values[5] = {"D_STATIC", "V_STATIC", "Q_FRONT", "N_ITER", "SECTIONS_q_diff"};
int check_struct__421_string(const char* strValue) {
	static struct__421 rTemp;
	return string_to_struct__421(strValue, &rTemp);
}


/****************************************************************
 ** array__429
 ****************************************************************/
void* array__429_projection(void** pValues, int nIndex) {
	return &((*(array__429*)pValues)[nIndex]);
}

const char * array__429_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__421_to_string, 33, array__429_projection);
}

int compare_array__429_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__421_type , 33, array__429_projection);
}

int is_array__429_allow_double_convertion() {
	return 0;
}

int string_to_array__429(const char* strValue, void* pValue) {
	static array__429 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__421, 33, array__429_projection);
	if (nResult == 1)
		kcg_copy_array__429(&(*((array__429*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__429_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__421_signature, 33);
}

FilterUtils get_array__429_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__421_Utils, strFilter, (void**)pValue, 33, array__429_projection);
}

int check_array__429_string(const char* strValue) {
	static array__429 rTemp;
	return string_to_array__429(strValue, &rTemp);
}


/****************************************************************
 ** array__432
 ****************************************************************/
void* array__432_projection(void** pValues, int nIndex) {
	return &((*(array__432*)pValues)[nIndex]);
}

const char * array__432_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__421_to_string, 32, array__432_projection);
}

int compare_array__432_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__421_type , 32, array__432_projection);
}

int is_array__432_allow_double_convertion() {
	return 0;
}

int string_to_array__432(const char* strValue, void* pValue) {
	static array__432 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__421, 32, array__432_projection);
	if (nResult == 1)
		kcg_copy_array__432(&(*((array__432*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__432_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__421_signature, 32);
}

FilterUtils get_array__432_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__421_Utils, strFilter, (void**)pValue, 32, array__432_projection);
}

int check_array__432_string(const char* strValue) {
	static array__432 rTemp;
	return string_to_array__432(strValue, &rTemp);
}


/****************************************************************
 ** struct__435
 ****************************************************************/
static void Fill_struct__435_StructSimValue(struct__435 * pStruct, StructSimValue * pValues) {
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
	pValues[9].m_pTypeUtils = &_SCSIM_array__418_Utils;
	pValues[9].m_pszName = "SECTIONS_q_diff";
	/*N_ITER_k label.*/
	pValues[10].m_pPtr = pStruct != 0 ? &(pStruct->N_ITER_k) : 0;
	pValues[10].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[10].m_pszName = "N_ITER_k";
	/*SECTIONS_SSP label.*/
	pValues[11].m_pPtr = pStruct != 0 ? &(pStruct->SECTIONS_SSP) : 0;
	pValues[11].m_pTypeUtils = &_SCSIM_array__432_Utils;
	pValues[11].m_pszName = "SECTIONS_SSP";
}

const char * struct__435_to_string(const void* pValue) {
	static StructSimValue values[12];
	Fill_struct__435_StructSimValue(((struct__435*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 12);
}

int string_to_struct__435(const char* strValue, void* pValue) {
	static struct__435 rTemp;
	int nResult = 0;
	static StructSimValue values[12];
	kcg_copy_struct__435(&(rTemp), &(*((struct__435*)pValue)));
	Fill_struct__435_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 12);
	if (nResult == 1)
		kcg_copy_struct__435(&(*((struct__435*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__435_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[12];
	Fill_struct__435_StructSimValue((struct__435*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 12);
}


int is_struct__435_allow_double_convertion() {
	return 0;
}


const char * get_struct__435_signature() {
	static StructSimValue values[12];
	Fill_struct__435_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 12);
}

FilterUtils get_struct__435_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[12];
	Fill_struct__435_StructSimValue((struct__435*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 12, strFilter);
}

const char * struct__435_filter_values[12] = {"valid", "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_STATIC", "V_STATIC", "Q_FRONT", "N_ITER_n", "SECTIONS_q_diff", "N_ITER_k", "SECTIONS_SSP"};
int check_struct__435_string(const char* strValue) {
	static struct__435 rTemp;
	return string_to_struct__435(strValue, &rTemp);
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
 ** struct__453
 ****************************************************************/
static void Fill_struct__453_StructSimValue(struct__453 * pStruct, StructSimValue * pValues) {
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

const char * struct__453_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__453_StructSimValue(((struct__453*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__453(const char* strValue, void* pValue) {
	static struct__453 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__453(&(rTemp), &(*((struct__453*)pValue)));
	Fill_struct__453_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__453(&(*((struct__453*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__453_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__453_StructSimValue((struct__453*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__453_allow_double_convertion() {
	return 0;
}


const char * get_struct__453_signature() {
	static StructSimValue values[5];
	Fill_struct__453_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__453_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__453_StructSimValue((struct__453*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__453_filter_values[5] = {"nid_packet", "q_dir", "valid", "startAddress", "endAddress"};
int check_struct__453_string(const char* strValue) {
	static struct__453 rTemp;
	return string_to_struct__453(strValue, &rTemp);
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
 ** array__467
 ****************************************************************/
void* array__467_projection(void** pValues, int nIndex) {
	return &((*(array__467*)pValues)[nIndex]);
}

const char * array__467_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__421_to_string, 1, array__467_projection);
}

int compare_array__467_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__421_type , 1, array__467_projection);
}

int is_array__467_allow_double_convertion() {
	return 0;
}

int string_to_array__467(const char* strValue, void* pValue) {
	static array__467 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__421, 1, array__467_projection);
	if (nResult == 1)
		kcg_copy_array__467(&(*((array__467*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__467_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__421_signature, 1);
}

FilterUtils get_array__467_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__421_Utils, strFilter, (void**)pValue, 1, array__467_projection);
}

int check_array__467_string(const char* strValue) {
	static array__467 rTemp;
	return string_to_array__467(strValue, &rTemp);
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
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimMetadataElement_T_Common_Types_PkgVTable;
const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0 && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__453_to_string(pValue);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0 && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static MetadataElement_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__453(&(*((MetadataElement_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__453(strValue, pValue);
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
	return is_struct__453_allow_double_convertion();
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
	if (_SCSIM_struct__453_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__453_Utils.m_pfnTypeToDouble(nValue, pValue);
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
 ** P027V1_trackside_int_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP027V1_trackside_int_T_TMVTable;
const char * P027V1_trackside_int_T_TM_to_string(const void* pValue) {
	if (pSimP027V1_trackside_int_T_TMVTable != 0 && pSimP027V1_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP027V1_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue);
	return struct__435_to_string(pValue);
}

int string_to_P027V1_trackside_int_T_TM(const char* strValue, void* pValue) {
	if (pSimP027V1_trackside_int_T_TMVTable != 0 && pSimP027V1_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P027V1_trackside_int_T_TM rTemp;
		int nResult = pSimP027V1_trackside_int_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__435(&(*((P027V1_trackside_int_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__435(strValue, pValue);
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
	return is_struct__435_allow_double_convertion();
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
	if (_SCSIM_struct__435_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__435_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return array__418_to_string(pValue);
}

int string_to_P027V1_trackide_qdifflist_T_TM(const char* strValue, void* pValue) {
	if (pSimP027V1_trackide_qdifflist_T_TMVTable != 0 && pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P027V1_trackide_qdifflist_T_TM rTemp;
		int nResult = pSimP027V1_trackide_qdifflist_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__418(&(*((P027V1_trackide_qdifflist_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__418(strValue, pValue);
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
	return is_array__418_allow_double_convertion();
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
	if (_SCSIM_array__418_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__418_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return struct__413_to_string(pValue);
}

int string_to_P027V1_section_int_qdiff_T_TM(const char* strValue, void* pValue) {
	if (pSimP027V1_section_int_qdiff_T_TMVTable != 0 && pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P027V1_section_int_qdiff_T_TM rTemp;
		int nResult = pSimP027V1_section_int_qdiff_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__413(&(*((P027V1_section_int_qdiff_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__413(strValue, pValue);
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
	return is_struct__413_allow_double_convertion();
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
	if (_SCSIM_struct__413_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__413_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return array__432_to_string(pValue);
}

int string_to_P027V1_trackide_sectionlist_T_TM(const char* strValue, void* pValue) {
	if (pSimP027V1_trackide_sectionlist_T_TMVTable != 0 && pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P027V1_trackide_sectionlist_T_TM rTemp;
		int nResult = pSimP027V1_trackide_sectionlist_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__432(&(*((P027V1_trackide_sectionlist_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__432(strValue, pValue);
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
	return is_array__432_allow_double_convertion();
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
	if (_SCSIM_array__432_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__432_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return struct__421_to_string(pValue);
}

int string_to_P027V1_section_int_T_TM(const char* strValue, void* pValue) {
	if (pSimP027V1_section_int_T_TMVTable != 0 && pSimP027V1_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P027V1_section_int_T_TM rTemp;
		int nResult = pSimP027V1_section_int_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__421(&(*((P027V1_section_int_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__421(strValue, pValue);
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
	return is_struct__421_allow_double_convertion();
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
	if (_SCSIM_struct__421_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__421_Utils.m_pfnTypeToDouble(nValue, pValue);
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
 ** P027V1_OBU_sectionlist_int_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP027V1_OBU_sectionlist_int_T_TMVTable;
const char * P027V1_OBU_sectionlist_int_T_TM_to_string(const void* pValue) {
	if (pSimP027V1_OBU_sectionlist_int_T_TMVTable != 0 && pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue);
	return array__429_to_string(pValue);
}

int string_to_P027V1_OBU_sectionlist_int_T_TM(const char* strValue, void* pValue) {
	if (pSimP027V1_OBU_sectionlist_int_T_TMVTable != 0 && pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P027V1_OBU_sectionlist_int_T_TM rTemp;
		int nResult = pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__429(&(*((P027V1_OBU_sectionlist_int_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__429(strValue, pValue);
}

int is_P027V1_OBU_sectionlist_int_T_TM_allow_double_convertion() {
	if (pSimP027V1_OBU_sectionlist_int_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__429_allow_double_convertion();
}

int P027V1_OBU_sectionlist_int_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP027V1_OBU_sectionlist_int_T_TMVTable != 0) {
		if (pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP027V1_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__429_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__429_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P027V1_OBU_sectionlist_int_T_TM_string(const char* strValue) {
	static P027V1_OBU_sectionlist_int_T_TM rTemp;
	return string_to_P027V1_OBU_sectionlist_int_T_TM(strValue, &rTemp);
}


