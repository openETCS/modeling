
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "C_P005_tracksim_compr_TM_conversions_type.h"
#include "C_P005_tracksim_compr_TM_conversions_mapping.h"

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
TypeUtils _SCSIM_struct__429_Utils = {struct__429_to_string,
	check_struct__429_string,
	string_to_struct__429,
	is_struct__429_allow_double_convertion,
	0,
	compare_struct__429_type,
	get_struct__429_signature,
	get_struct__429_filter_utils,
	struct__429_filter_size,
	struct__429_filter_values};
TypeUtils _SCSIM_array_int_7_32_Utils = {array_int_7_32_to_string,
	check_array_int_7_32_string,
	string_to_array_int_7_32,
	is_array_int_7_32_allow_double_convertion,
	0,
	compare_array_int_7_32_type,
	get_array_int_7_32_signature,
	get_array_int_7_32_filter_utils,
	array_int_7_32_filter_size,
	array_int_7_32_filter_values};
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
TypeUtils _SCSIM_array__445_Utils = {array__445_to_string,
	check_array__445_string,
	string_to_array__445,
	is_array__445_allow_double_convertion,
	0,
	compare_array__445_type,
	get_array__445_signature,
	get_array__445_filter_utils,
	array__445_filter_size,
	array__445_filter_values};
TypeUtils _SCSIM_array__448_Utils = {array__448_to_string,
	check_array__448_string,
	string_to_array__448,
	is_array__448_allow_double_convertion,
	0,
	compare_array__448_type,
	get_array__448_signature,
	get_array__448_filter_utils,
	array__448_filter_size,
	array__448_filter_values};
TypeUtils _SCSIM_struct__451_Utils = {struct__451_to_string,
	check_struct__451_string,
	string_to_struct__451,
	is_struct__451_allow_double_convertion,
	0,
	compare_struct__451_type,
	get_struct__451_signature,
	get_struct__451_filter_utils,
	struct__451_filter_size,
	struct__451_filter_values};
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
TypeUtils _SCSIM_struct__470_Utils = {struct__470_to_string,
	check_struct__470_string,
	string_to_struct__470,
	is_struct__470_allow_double_convertion,
	0,
	compare_struct__470_type,
	get_struct__470_signature,
	get_struct__470_filter_utils,
	struct__470_filter_size,
	struct__470_filter_values};
TypeUtils _SCSIM_array_int_7_32_224_Utils = {array_int_7_32_224_to_string,
	check_array_int_7_32_224_string,
	string_to_array_int_7_32_224,
	is_array_int_7_32_224_allow_double_convertion,
	0,
	compare_array_int_7_32_224_type,
	get_array_int_7_32_224_signature,
	get_array_int_7_32_224_filter_utils,
	array_int_7_32_224_filter_size,
	array_int_7_32_224_filter_values};
TypeUtils _SCSIM_array_int_272_Utils = {array_int_272_to_string,
	check_array_int_272_string,
	string_to_array_int_272,
	is_array_int_272_allow_double_convertion,
	0,
	compare_array_int_272_type,
	get_array_int_272_signature,
	get_array_int_272_filter_utils,
	array_int_272_filter_size,
	array_int_272_filter_values};
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
TypeUtils _SCSIM_array_int_228_Utils = {array_int_228_to_string,
	check_array_int_228_string,
	string_to_array_int_228,
	is_array_int_228_allow_double_convertion,
	0,
	compare_array_int_228_type,
	get_array_int_228_signature,
	get_array_int_228_filter_utils,
	array_int_228_filter_size,
	array_int_228_filter_values};
TypeUtils _SCSIM_array__496_Utils = {array__496_to_string,
	check_array__496_string,
	string_to_array__496,
	is_array__496_allow_double_convertion,
	0,
	compare_array__496_type,
	get_array__496_signature,
	get_array__496_filter_utils,
	array__496_filter_size,
	array__496_filter_values};
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
TypeUtils _SCSIM_P005_trackside_TM_Utils = {P005_trackside_TM_to_string,
	check_P005_trackside_TM_string,
	string_to_P005_trackside_TM,
	is_P005_trackside_TM_allow_double_convertion,
	P005_trackside_TM_to_double,
	compare_P005_trackside_TM_type,
	get_P005_trackside_TM_signature,
	get_P005_trackside_TM_filter_utils,
	P005_trackside_TM_filter_size,
	P005_trackside_TM_filter_values};
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
TypeUtils _SCSIM__1_P005_trackside_section_TM_Utils = {_1_P005_trackside_section_TM_to_string,
	check__1_P005_trackside_section_TM_string,
	string_to__1_P005_trackside_section_TM,
	is__1_P005_trackside_section_TM_allow_double_convertion,
	_1_P005_trackside_section_TM_to_double,
	compare__1_P005_trackside_section_TM_type,
	get__1_P005_trackside_section_TM_signature,
	get__1_P005_trackside_section_TM_filter_utils,
	_1_P005_trackside_section_TM_filter_size,
	_1_P005_trackside_section_TM_filter_values};
TypeUtils _SCSIM_P005_sections_array_flat_TM_Utils = {P005_sections_array_flat_TM_to_string,
	check_P005_sections_array_flat_TM_string,
	string_to_P005_sections_array_flat_TM,
	is_P005_sections_array_flat_TM_allow_double_convertion,
	P005_sections_array_flat_TM_to_double,
	compare_P005_sections_array_flat_TM_type,
	get_P005_sections_array_flat_TM_signature,
	get_P005_sections_array_flat_TM_filter_utils,
	P005_sections_array_flat_TM_filter_size,
	P005_sections_array_flat_TM_filter_values};
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
TypeUtils _SCSIM_P005_trackside_section_array_TM_Utils = {P005_trackside_section_array_TM_to_string,
	check_P005_trackside_section_array_TM_string,
	string_to_P005_trackside_section_array_TM,
	is_P005_trackside_section_array_TM_allow_double_convertion,
	P005_trackside_section_array_TM_to_double,
	compare_P005_trackside_section_array_TM_type,
	get_P005_trackside_section_array_TM_signature,
	get_P005_trackside_section_array_TM_filter_utils,
	P005_trackside_section_array_TM_filter_size,
	P005_trackside_section_array_TM_filter_values};
TypeUtils _SCSIM_P005_OBU_sectionlist_T_TM_Utils = {P005_OBU_sectionlist_T_TM_to_string,
	check_P005_OBU_sectionlist_T_TM_string,
	string_to_P005_OBU_sectionlist_T_TM,
	is_P005_OBU_sectionlist_T_TM_allow_double_convertion,
	P005_OBU_sectionlist_T_TM_to_double,
	compare_P005_OBU_sectionlist_T_TM_type,
	get_P005_OBU_sectionlist_T_TM_signature,
	get_P005_OBU_sectionlist_T_TM_filter_utils,
	P005_OBU_sectionlist_T_TM_filter_size,
	P005_OBU_sectionlist_T_TM_filter_values};

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
 ** struct__429
 ****************************************************************/
static void Fill_struct__429_StructSimValue(struct__429 * pStruct, StructSimValue * pValues) {
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

const char * struct__429_to_string(const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__429_StructSimValue(((struct__429*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 7);
}

int string_to_struct__429(const char* strValue, void* pValue) {
	static struct__429 rTemp;
	int nResult = 0;
	static StructSimValue values[7];
	kcg_copy_struct__429(&(rTemp), &(*((struct__429*)pValue)));
	Fill_struct__429_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 7);
	if (nResult == 1)
		kcg_copy_struct__429(&(*((struct__429*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__429_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__429_StructSimValue((struct__429*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 7);
}


int is_struct__429_allow_double_convertion() {
	return 0;
}


const char * get_struct__429_signature() {
	static StructSimValue values[7];
	Fill_struct__429_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 7);
}

FilterUtils get_struct__429_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[7];
	Fill_struct__429_StructSimValue((struct__429*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 7, strFilter);
}

const char * struct__429_filter_values[7] = {"D_LINK", "Q_NEWCOUNTRY", "NID_C", "NID_BG", "Q_LINKORIENTATION", "Q_LINKREACTION", "Q_LOCACC"};
int check_struct__429_string(const char* strValue) {
	static struct__429 rTemp;
	return string_to_struct__429(strValue, &rTemp);
}


/****************************************************************
 ** array_int_7_32
 ****************************************************************/
void* array_int_7_32_projection(void** pValues, int nIndex) {
	return &((*(array_int_7_32*)pValues)[nIndex]);
}

const char * array_int_7_32_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_int_7_to_string, 32, array_int_7_32_projection);
}

int compare_array_int_7_32_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_int_7_type , 32, array_int_7_32_projection);
}

int is_array_int_7_32_allow_double_convertion() {
	return 0;
}

int string_to_array_int_7_32(const char* strValue, void* pValue) {
	static array_int_7_32 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_int_7, 32, array_int_7_32_projection);
	if (nResult == 1)
		kcg_copy_array_int_7_32(&(*((array_int_7_32*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_7_32_signature() {
	return pSimulator->m_pfnArraySignature(get_array_int_7_signature, 32);
}

FilterUtils get_array_int_7_32_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_int_7_Utils, strFilter, (void**)pValue, 32, array_int_7_32_projection);
}

int check_array_int_7_32_string(const char* strValue) {
	static array_int_7_32 rTemp;
	return string_to_array_int_7_32(strValue, &rTemp);
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
 ** array__445
 ****************************************************************/
void* array__445_projection(void** pValues, int nIndex) {
	return &((*(array__445*)pValues)[nIndex]);
}

const char * array__445_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__429_to_string, 32, array__445_projection);
}

int compare_array__445_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__429_type , 32, array__445_projection);
}

int is_array__445_allow_double_convertion() {
	return 0;
}

int string_to_array__445(const char* strValue, void* pValue) {
	static array__445 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__429, 32, array__445_projection);
	if (nResult == 1)
		kcg_copy_array__445(&(*((array__445*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__445_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__429_signature, 32);
}

FilterUtils get_array__445_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__429_Utils, strFilter, (void**)pValue, 32, array__445_projection);
}

int check_array__445_string(const char* strValue) {
	static array__445 rTemp;
	return string_to_array__445(strValue, &rTemp);
}


/****************************************************************
 ** array__448
 ****************************************************************/
void* array__448_projection(void** pValues, int nIndex) {
	return &((*(array__448*)pValues)[nIndex]);
}

const char * array__448_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__429_to_string, 31, array__448_projection);
}

int compare_array__448_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__429_type , 31, array__448_projection);
}

int is_array__448_allow_double_convertion() {
	return 0;
}

int string_to_array__448(const char* strValue, void* pValue) {
	static array__448 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__429, 31, array__448_projection);
	if (nResult == 1)
		kcg_copy_array__448(&(*((array__448*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__448_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__429_signature, 31);
}

FilterUtils get_array__448_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__429_Utils, strFilter, (void**)pValue, 31, array__448_projection);
}

int check_array__448_string(const char* strValue) {
	static array__448 rTemp;
	return string_to_array__448(strValue, &rTemp);
}


/****************************************************************
 ** struct__451
 ****************************************************************/
static void Fill_struct__451_StructSimValue(struct__451 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*Q_DIR label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Q_DIR) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "Q_DIR";
	/*L_PACKET label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->L_PACKET) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "L_PACKET";
	/*Q_SCALE label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->Q_SCALE) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "Q_SCALE";
	/*D_LINK label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->D_LINK) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "D_LINK";
	/*Q_NEWCOUNTRY label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->Q_NEWCOUNTRY) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "Q_NEWCOUNTRY";
	/*NID_C label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->NID_C) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "NID_C";
	/*NID_BG label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->NID_BG) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "NID_BG";
	/*Q_LINKORIENTATION label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->Q_LINKORIENTATION) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[8].m_pszName = "Q_LINKORIENTATION";
	/*Q_LINKREACTION label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->Q_LINKREACTION) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[9].m_pszName = "Q_LINKREACTION";
	/*Q_LOCACC label.*/
	pValues[10].m_pPtr = pStruct != 0 ? &(pStruct->Q_LOCACC) : 0;
	pValues[10].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[10].m_pszName = "Q_LOCACC";
	/*N_ITER label.*/
	pValues[11].m_pPtr = pStruct != 0 ? &(pStruct->N_ITER) : 0;
	pValues[11].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[11].m_pszName = "N_ITER";
	/*SECTIONS label.*/
	pValues[12].m_pPtr = pStruct != 0 ? &(pStruct->SECTIONS) : 0;
	pValues[12].m_pTypeUtils = &_SCSIM_array__448_Utils;
	pValues[12].m_pszName = "SECTIONS";
}

const char * struct__451_to_string(const void* pValue) {
	static StructSimValue values[13];
	Fill_struct__451_StructSimValue(((struct__451*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 13);
}

int string_to_struct__451(const char* strValue, void* pValue) {
	static struct__451 rTemp;
	int nResult = 0;
	static StructSimValue values[13];
	kcg_copy_struct__451(&(rTemp), &(*((struct__451*)pValue)));
	Fill_struct__451_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 13);
	if (nResult == 1)
		kcg_copy_struct__451(&(*((struct__451*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__451_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[13];
	Fill_struct__451_StructSimValue((struct__451*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 13);
}


int is_struct__451_allow_double_convertion() {
	return 0;
}


const char * get_struct__451_signature() {
	static StructSimValue values[13];
	Fill_struct__451_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 13);
}

FilterUtils get_struct__451_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[13];
	Fill_struct__451_StructSimValue((struct__451*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 13, strFilter);
}

const char * struct__451_filter_values[13] = {"valid", "Q_DIR", "L_PACKET", "Q_SCALE", "D_LINK", "Q_NEWCOUNTRY", "NID_C", "NID_BG", "Q_LINKORIENTATION", "Q_LINKREACTION", "Q_LOCACC", "N_ITER", "SECTIONS"};
int check_struct__451_string(const char* strValue) {
	static struct__451 rTemp;
	return string_to_struct__451(strValue, &rTemp);
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
 ** struct__470
 ****************************************************************/
static void Fill_struct__470_StructSimValue(struct__470 * pStruct, StructSimValue * pValues) {
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

const char * struct__470_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__470_StructSimValue(((struct__470*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__470(const char* strValue, void* pValue) {
	static struct__470 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__470(&(rTemp), &(*((struct__470*)pValue)));
	Fill_struct__470_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__470(&(*((struct__470*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__470_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__470_StructSimValue((struct__470*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__470_allow_double_convertion() {
	return 0;
}


const char * get_struct__470_signature() {
	static StructSimValue values[5];
	Fill_struct__470_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__470_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__470_StructSimValue((struct__470*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__470_filter_values[5] = {"nid_packet", "q_dir", "valid", "startAddress", "endAddress"};
int check_struct__470_string(const char* strValue) {
	static struct__470 rTemp;
	return string_to_struct__470(strValue, &rTemp);
}


/****************************************************************
 ** array_int_7_32_224
 ****************************************************************/
void* array_int_7_32_224_projection(void** pValues, int nIndex) {
	return &((*(array_int_7_32_224*)pValues)[nIndex]);
}

const char * array_int_7_32_224_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_int_7_32_to_string, 224, array_int_7_32_224_projection);
}

int compare_array_int_7_32_224_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_int_7_32_type , 224, array_int_7_32_224_projection);
}

int is_array_int_7_32_224_allow_double_convertion() {
	return 0;
}

int string_to_array_int_7_32_224(const char* strValue, void* pValue) {
	static array_int_7_32_224 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_int_7_32, 224, array_int_7_32_224_projection);
	if (nResult == 1)
		kcg_copy_array_int_7_32_224(&(*((array_int_7_32_224*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_7_32_224_signature() {
	return pSimulator->m_pfnArraySignature(get_array_int_7_32_signature, 224);
}

FilterUtils get_array_int_7_32_224_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_int_7_32_Utils, strFilter, (void**)pValue, 224, array_int_7_32_224_projection);
}

int check_array_int_7_32_224_string(const char* strValue) {
	static array_int_7_32_224 rTemp;
	return string_to_array_int_7_32_224(strValue, &rTemp);
}


/****************************************************************
 ** array_int_272
 ****************************************************************/
void* array_int_272_projection(void** pValues, int nIndex) {
	return &((*(array_int_272*)pValues)[nIndex]);
}

const char * array_int_272_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 272, array_int_272_projection);
}

int compare_array_int_272_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 272, array_int_272_projection);
}

int is_array_int_272_allow_double_convertion() {
	return 0;
}

int string_to_array_int_272(const char* strValue, void* pValue) {
	static array_int_272 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 272, array_int_272_projection);
	if (nResult == 1)
		kcg_copy_array_int_272(&(*((array_int_272*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_272_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 272);
}

FilterUtils get_array_int_272_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 272, array_int_272_projection);
}

int check_array_int_272_string(const char* strValue) {
	static array_int_272 rTemp;
	return string_to_array_int_272(strValue, &rTemp);
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
 ** array_int_228
 ****************************************************************/
void* array_int_228_projection(void** pValues, int nIndex) {
	return &((*(array_int_228*)pValues)[nIndex]);
}

const char * array_int_228_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 228, array_int_228_projection);
}

int compare_array_int_228_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 228, array_int_228_projection);
}

int is_array_int_228_allow_double_convertion() {
	return 0;
}

int string_to_array_int_228(const char* strValue, void* pValue) {
	static array_int_228 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 228, array_int_228_projection);
	if (nResult == 1)
		kcg_copy_array_int_228(&(*((array_int_228*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_228_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 228);
}

FilterUtils get_array_int_228_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 228, array_int_228_projection);
}

int check_array_int_228_string(const char* strValue) {
	static array_int_228 rTemp;
	return string_to_array_int_228(strValue, &rTemp);
}


/****************************************************************
 ** array__496
 ****************************************************************/
void* array__496_projection(void** pValues, int nIndex) {
	return &((*(array__496*)pValues)[nIndex]);
}

const char * array__496_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__429_to_string, 1, array__496_projection);
}

int compare_array__496_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__429_type , 1, array__496_projection);
}

int is_array__496_allow_double_convertion() {
	return 0;
}

int string_to_array__496(const char* strValue, void* pValue) {
	static array__496 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__429, 1, array__496_projection);
	if (nResult == 1)
		kcg_copy_array__496(&(*((array__496*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__496_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__429_signature, 1);
}

FilterUtils get_array__496_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__429_Utils, strFilter, (void**)pValue, 1, array__496_projection);
}

int check_array__496_string(const char* strValue) {
	static array__496 rTemp;
	return string_to_array__496(strValue, &rTemp);
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
	return struct__470_to_string(pValue);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0 && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static MetadataElement_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__470(&(*((MetadataElement_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__470(strValue, pValue);
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
	return is_struct__470_allow_double_convertion();
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
	if (_SCSIM_struct__470_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__470_Utils.m_pfnTypeToDouble(nValue, pValue);
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
 ** P005_trackside_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_trackside_TMVTable;
const char * P005_trackside_TM_to_string(const void* pValue) {
	if (pSimP005_trackside_TMVTable != 0 && pSimP005_trackside_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_trackside_TMVTable->m_pfnToType(SptString, pValue);
	return struct__451_to_string(pValue);
}

int string_to_P005_trackside_TM(const char* strValue, void* pValue) {
	if (pSimP005_trackside_TMVTable != 0 && pSimP005_trackside_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_trackside_TM rTemp;
		int nResult = pSimP005_trackside_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__451(&(*((P005_trackside_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__451(strValue, pValue);
}

int is_P005_trackside_TM_allow_double_convertion() {
	if (pSimP005_trackside_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_trackside_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_trackside_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_trackside_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_trackside_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__451_allow_double_convertion();
}

int P005_trackside_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_trackside_TMVTable != 0) {
		if (pSimP005_trackside_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_trackside_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_trackside_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_trackside_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_trackside_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_trackside_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_trackside_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_trackside_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__451_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__451_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_trackside_TM_string(const char* strValue) {
	static P005_trackside_TM rTemp;
	return string_to_P005_trackside_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_trackide_sectionlist_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_trackide_sectionlist_T_TMVTable;
const char * P005_trackide_sectionlist_T_TM_to_string(const void* pValue) {
	if (pSimP005_trackide_sectionlist_T_TMVTable != 0 && pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue);
	return array__448_to_string(pValue);
}

int string_to_P005_trackide_sectionlist_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_trackide_sectionlist_T_TMVTable != 0 && pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_trackide_sectionlist_T_TM rTemp;
		int nResult = pSimP005_trackide_sectionlist_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__448(&(*((P005_trackide_sectionlist_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__448(strValue, pValue);
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
	return is_array__448_allow_double_convertion();
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
	if (_SCSIM_array__448_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__448_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_trackide_sectionlist_T_TM_string(const char* strValue) {
	static P005_trackide_sectionlist_T_TM rTemp;
	return string_to_P005_trackide_sectionlist_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** _1_P005_trackside_section_TM
 ****************************************************************/
struct SimTypeVTable* pSim_1_P005_trackside_section_TMVTable;
const char * _1_P005_trackside_section_TM_to_string(const void* pValue) {
	if (pSim_1_P005_trackside_section_TMVTable != 0 && pSim_1_P005_trackside_section_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSim_1_P005_trackside_section_TMVTable->m_pfnToType(SptString, pValue);
	return struct__429_to_string(pValue);
}

int string_to__1_P005_trackside_section_TM(const char* strValue, void* pValue) {
	if (pSim_1_P005_trackside_section_TMVTable != 0 && pSim_1_P005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static _1_P005_trackside_section_TM rTemp;
		int nResult = pSim_1_P005_trackside_section_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__429(&(*((_1_P005_trackside_section_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__429(strValue, pValue);
}

int is__1_P005_trackside_section_TM_allow_double_convertion() {
	if (pSim_1_P005_trackside_section_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSim_1_P005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSim_1_P005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSim_1_P005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSim_1_P005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__429_allow_double_convertion();
}

int _1_P005_trackside_section_TM_to_double(double * nValue, const void* pValue) {
	if (pSim_1_P005_trackside_section_TMVTable != 0) {
		if (pSim_1_P005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSim_1_P005_trackside_section_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSim_1_P005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSim_1_P005_trackside_section_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSim_1_P005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSim_1_P005_trackside_section_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSim_1_P005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSim_1_P005_trackside_section_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__429_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__429_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check__1_P005_trackside_section_TM_string(const char* strValue) {
	static _1_P005_trackside_section_TM rTemp;
	return string_to__1_P005_trackside_section_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_sections_array_flat_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_sections_array_flat_TMVTable;
const char * P005_sections_array_flat_TM_to_string(const void* pValue) {
	if (pSimP005_sections_array_flat_TMVTable != 0 && pSimP005_sections_array_flat_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_sections_array_flat_TMVTable->m_pfnToType(SptString, pValue);
	return array_int_224_to_string(pValue);
}

int string_to_P005_sections_array_flat_TM(const char* strValue, void* pValue) {
	if (pSimP005_sections_array_flat_TMVTable != 0 && pSimP005_sections_array_flat_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_sections_array_flat_TM rTemp;
		int nResult = pSimP005_sections_array_flat_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_224(&(*((P005_sections_array_flat_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_224(strValue, pValue);
}

int is_P005_sections_array_flat_TM_allow_double_convertion() {
	if (pSimP005_sections_array_flat_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_sections_array_flat_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_sections_array_flat_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_sections_array_flat_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_sections_array_flat_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_224_allow_double_convertion();
}

int P005_sections_array_flat_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_sections_array_flat_TMVTable != 0) {
		if (pSimP005_sections_array_flat_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_sections_array_flat_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_sections_array_flat_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_sections_array_flat_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_sections_array_flat_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_sections_array_flat_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_sections_array_flat_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_sections_array_flat_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_224_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_224_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_sections_array_flat_TM_string(const char* strValue) {
	static P005_sections_array_flat_TM rTemp;
	return string_to_P005_sections_array_flat_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_OBU_sectionlist_array_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_OBU_sectionlist_array_T_TMVTable;
const char * P005_OBU_sectionlist_array_T_TM_to_string(const void* pValue) {
	if (pSimP005_OBU_sectionlist_array_T_TMVTable != 0 && pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptString, pValue);
	return array_int_7_32_to_string(pValue);
}

int string_to_P005_OBU_sectionlist_array_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_OBU_sectionlist_array_T_TMVTable != 0 && pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_OBU_sectionlist_array_T_TM rTemp;
		int nResult = pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_7_32(&(*((P005_OBU_sectionlist_array_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_7_32(strValue, pValue);
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
	return is_array_int_7_32_allow_double_convertion();
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
	if (_SCSIM_array_int_7_32_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_7_32_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_OBU_sectionlist_array_T_TM_string(const char* strValue) {
	static P005_OBU_sectionlist_array_T_TM rTemp;
	return string_to_P005_OBU_sectionlist_array_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_trackside_section_array_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_trackside_section_array_TMVTable;
const char * P005_trackside_section_array_TM_to_string(const void* pValue) {
	if (pSimP005_trackside_section_array_TMVTable != 0 && pSimP005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_trackside_section_array_TMVTable->m_pfnToType(SptString, pValue);
	return array_int_7_to_string(pValue);
}

int string_to_P005_trackside_section_array_TM(const char* strValue, void* pValue) {
	if (pSimP005_trackside_section_array_TMVTable != 0 && pSimP005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_trackside_section_array_TM rTemp;
		int nResult = pSimP005_trackside_section_array_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_7(&(*((P005_trackside_section_array_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_7(strValue, pValue);
}

int is_P005_trackside_section_array_TM_allow_double_convertion() {
	if (pSimP005_trackside_section_array_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_7_allow_double_convertion();
}

int P005_trackside_section_array_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_trackside_section_array_TMVTable != 0) {
		if (pSimP005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_trackside_section_array_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_trackside_section_array_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_trackside_section_array_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_trackside_section_array_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_7_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_7_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_trackside_section_array_TM_string(const char* strValue) {
	static P005_trackside_section_array_TM rTemp;
	return string_to_P005_trackside_section_array_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_OBU_sectionlist_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_OBU_sectionlist_T_TMVTable;
const char * P005_OBU_sectionlist_T_TM_to_string(const void* pValue) {
	if (pSimP005_OBU_sectionlist_T_TMVTable != 0 && pSimP005_OBU_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_OBU_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue);
	return array__445_to_string(pValue);
}

int string_to_P005_OBU_sectionlist_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_OBU_sectionlist_T_TMVTable != 0 && pSimP005_OBU_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_OBU_sectionlist_T_TM rTemp;
		int nResult = pSimP005_OBU_sectionlist_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__445(&(*((P005_OBU_sectionlist_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__445(strValue, pValue);
}

int is_P005_OBU_sectionlist_T_TM_allow_double_convertion() {
	if (pSimP005_OBU_sectionlist_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__445_allow_double_convertion();
}

int P005_OBU_sectionlist_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_OBU_sectionlist_T_TMVTable != 0) {
		if (pSimP005_OBU_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_OBU_sectionlist_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_OBU_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_OBU_sectionlist_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_OBU_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_OBU_sectionlist_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_OBU_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_OBU_sectionlist_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__445_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__445_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_OBU_sectionlist_T_TM_string(const char* strValue) {
	static P005_OBU_sectionlist_T_TM rTemp;
	return string_to_P005_OBU_sectionlist_T_TM(strValue, &rTemp);
}


