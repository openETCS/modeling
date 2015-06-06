
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel_type.h"
#include "Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel_mapping.h"

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
TypeUtils _SCSIM_struct__1341_Utils = {struct__1341_to_string,
	check_struct__1341_string,
	string_to_struct__1341,
	is_struct__1341_allow_double_convertion,
	0,
	compare_struct__1341_type,
	get_struct__1341_signature,
	get_struct__1341_filter_utils,
	struct__1341_filter_size,
	struct__1341_filter_values};
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
TypeUtils _SCSIM_struct__1350_Utils = {struct__1350_to_string,
	check_struct__1350_string,
	string_to_struct__1350,
	is_struct__1350_allow_double_convertion,
	0,
	compare_struct__1350_type,
	get_struct__1350_signature,
	get_struct__1350_filter_utils,
	struct__1350_filter_size,
	struct__1350_filter_values};
TypeUtils _SCSIM_array__1358_Utils = {array__1358_to_string,
	check_array__1358_string,
	string_to_array__1358,
	is_array__1358_allow_double_convertion,
	0,
	compare_array__1358_type,
	get_array__1358_signature,
	get_array__1358_filter_utils,
	array__1358_filter_size,
	array__1358_filter_values};
TypeUtils _SCSIM_struct__1361_Utils = {struct__1361_to_string,
	check_struct__1361_string,
	string_to_struct__1361,
	is_struct__1361_allow_double_convertion,
	0,
	compare_struct__1361_type,
	get_struct__1361_signature,
	get_struct__1361_filter_utils,
	struct__1361_filter_size,
	struct__1361_filter_values};
TypeUtils _SCSIM_struct__1366_Utils = {struct__1366_to_string,
	check_struct__1366_string,
	string_to_struct__1366,
	is_struct__1366_allow_double_convertion,
	0,
	compare_struct__1366_type,
	get_struct__1366_signature,
	get_struct__1366_filter_utils,
	struct__1366_filter_size,
	struct__1366_filter_values};
TypeUtils _SCSIM_struct__1379_Utils = {struct__1379_to_string,
	check_struct__1379_string,
	string_to_struct__1379,
	is_struct__1379_allow_double_convertion,
	0,
	compare_struct__1379_type,
	get_struct__1379_signature,
	get_struct__1379_filter_utils,
	struct__1379_filter_size,
	struct__1379_filter_values};
TypeUtils _SCSIM_struct__1384_Utils = {struct__1384_to_string,
	check_struct__1384_string,
	string_to_struct__1384,
	is_struct__1384_allow_double_convertion,
	0,
	compare_struct__1384_type,
	get_struct__1384_signature,
	get_struct__1384_filter_utils,
	struct__1384_filter_size,
	struct__1384_filter_values};
TypeUtils _SCSIM_struct__1389_Utils = {struct__1389_to_string,
	check_struct__1389_string,
	string_to_struct__1389,
	is_struct__1389_allow_double_convertion,
	0,
	compare_struct__1389_type,
	get_struct__1389_signature,
	get_struct__1389_filter_utils,
	struct__1389_filter_size,
	struct__1389_filter_values};
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
TypeUtils _SCSIM_TrackSectionData_T_InfraLib_Utils = {TrackSectionData_T_InfraLib_to_string,
	check_TrackSectionData_T_InfraLib_string,
	string_to_TrackSectionData_T_InfraLib,
	is_TrackSectionData_T_InfraLib_allow_double_convertion,
	TrackSectionData_T_InfraLib_to_double,
	compare_TrackSectionData_T_InfraLib_type,
	get_TrackSectionData_T_InfraLib_signature,
	get_TrackSectionData_T_InfraLib_filter_utils,
	TrackSectionData_T_InfraLib_filter_size,
	TrackSectionData_T_InfraLib_filter_values};
TypeUtils _SCSIM_TrainPosRaw_T_InfraLib_Utils = {TrainPosRaw_T_InfraLib_to_string,
	check_TrainPosRaw_T_InfraLib_string,
	string_to_TrainPosRaw_T_InfraLib,
	is_TrainPosRaw_T_InfraLib_allow_double_convertion,
	TrainPosRaw_T_InfraLib_to_double,
	compare_TrainPosRaw_T_InfraLib_type,
	get_TrainPosRaw_T_InfraLib_signature,
	get_TrainPosRaw_T_InfraLib_filter_utils,
	TrainPosRaw_T_InfraLib_filter_size,
	TrainPosRaw_T_InfraLib_filter_values};
TypeUtils _SCSIM_B_data_internal_T_InfraLib_Utils = {B_data_internal_T_InfraLib_to_string,
	check_B_data_internal_T_InfraLib_string,
	string_to_B_data_internal_T_InfraLib,
	is_B_data_internal_T_InfraLib_allow_double_convertion,
	B_data_internal_T_InfraLib_to_double,
	compare_B_data_internal_T_InfraLib_type,
	get_B_data_internal_T_InfraLib_signature,
	get_B_data_internal_T_InfraLib_filter_utils,
	B_data_internal_T_InfraLib_filter_size,
	B_data_internal_T_InfraLib_filter_values};
TypeUtils _SCSIM_CompressedBaliseMessage_TM_Utils = {CompressedBaliseMessage_TM_to_string,
	check_CompressedBaliseMessage_TM_string,
	string_to_CompressedBaliseMessage_TM,
	is_CompressedBaliseMessage_TM_allow_double_convertion,
	CompressedBaliseMessage_TM_to_double,
	compare_CompressedBaliseMessage_TM_type,
	get_CompressedBaliseMessage_TM_signature,
	get_CompressedBaliseMessage_TM_filter_utils,
	CompressedBaliseMessage_TM_filter_size,
	CompressedBaliseMessage_TM_filter_values};
TypeUtils _SCSIM_BaliseTelegramHeader_int_T_TM_Utils = {BaliseTelegramHeader_int_T_TM_to_string,
	check_BaliseTelegramHeader_int_T_TM_string,
	string_to_BaliseTelegramHeader_int_T_TM,
	is_BaliseTelegramHeader_int_T_TM_allow_double_convertion,
	BaliseTelegramHeader_int_T_TM_to_double,
	compare_BaliseTelegramHeader_int_T_TM_type,
	get_BaliseTelegramHeader_int_T_TM_signature,
	get_BaliseTelegramHeader_int_T_TM_filter_utils,
	BaliseTelegramHeader_int_T_TM_filter_size,
	BaliseTelegramHeader_int_T_TM_filter_values};
TypeUtils _SCSIM_OrBG_TM_Utils = {OrBG_TM_to_string,
	check_OrBG_TM_string,
	string_to_OrBG_TM,
	is_OrBG_TM_allow_double_convertion,
	OrBG_TM_to_double,
	compare_OrBG_TM_type,
	get_OrBG_TM_signature,
	get_OrBG_TM_filter_utils,
	OrBG_TM_filter_size,
	OrBG_TM_filter_values};
TypeUtils _SCSIM_OrLine_TM_Utils = {OrLine_TM_to_string,
	check_OrLine_TM_string,
	string_to_OrLine_TM,
	is_OrLine_TM_allow_double_convertion,
	OrLine_TM_to_double,
	compare_OrLine_TM_type,
	get_OrLine_TM_signature,
	get_OrLine_TM_filter_utils,
	OrLine_TM_filter_size,
	OrLine_TM_filter_values};
TypeUtils _SCSIM_BaliseGroupData_TM_Utils = {BaliseGroupData_TM_to_string,
	check_BaliseGroupData_TM_string,
	string_to_BaliseGroupData_TM,
	is_BaliseGroupData_TM_allow_double_convertion,
	BaliseGroupData_TM_to_double,
	compare_BaliseGroupData_TM_type,
	get_BaliseGroupData_TM_signature,
	get_BaliseGroupData_TM_filter_utils,
	BaliseGroupData_TM_filter_size,
	BaliseGroupData_TM_filter_values};
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
TypeUtils _SCSIM_BaliseGroupData_Basics_Utils = {BaliseGroupData_Basics_to_string,
	check_BaliseGroupData_Basics_string,
	string_to_BaliseGroupData_Basics,
	is_BaliseGroupData_Basics_allow_double_convertion,
	BaliseGroupData_Basics_to_double,
	compare_BaliseGroupData_Basics_type,
	get_BaliseGroupData_Basics_signature,
	get_BaliseGroupData_Basics_filter_utils,
	BaliseGroupData_Basics_filter_size,
	BaliseGroupData_Basics_filter_values};

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
 ** struct__1341
 ****************************************************************/
static void Fill_struct__1341_StructSimValue(struct__1341 * pStruct, StructSimValue * pValues) {
	/*TrainPos_in label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->TrainPos_in) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[0].m_pszName = "TrainPos_in";
	/*OffsetTotal label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->OffsetTotal) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "OffsetTotal";
	/*TrainPosCalibrated label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->TrainPosCalibrated) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[2].m_pszName = "TrainPosCalibrated";
}

const char * struct__1341_to_string(const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__1341_StructSimValue(((struct__1341*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 3);
}

int string_to_struct__1341(const char* strValue, void* pValue) {
	static struct__1341 rTemp;
	int nResult = 0;
	static StructSimValue values[3];
	kcg_copy_struct__1341(&(rTemp), &(*((struct__1341*)pValue)));
	Fill_struct__1341_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 3);
	if (nResult == 1)
		kcg_copy_struct__1341(&(*((struct__1341*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1341_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__1341_StructSimValue((struct__1341*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 3);
}


int is_struct__1341_allow_double_convertion() {
	return 0;
}


const char * get_struct__1341_signature() {
	static StructSimValue values[3];
	Fill_struct__1341_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 3);
}

FilterUtils get_struct__1341_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[3];
	Fill_struct__1341_StructSimValue((struct__1341*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 3, strFilter);
}

const char * struct__1341_filter_values[3] = {"TrainPos_in", "OffsetTotal", "TrainPosCalibrated"};
int check_struct__1341_string(const char* strValue) {
	static struct__1341 rTemp;
	return string_to_struct__1341(strValue, &rTemp);
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
 ** struct__1350
 ****************************************************************/
static void Fill_struct__1350_StructSimValue(struct__1350 * pStruct, StructSimValue * pValues) {
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

const char * struct__1350_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__1350_StructSimValue(((struct__1350*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__1350(const char* strValue, void* pValue) {
	static struct__1350 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__1350(&(rTemp), &(*((struct__1350*)pValue)));
	Fill_struct__1350_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__1350(&(*((struct__1350*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1350_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__1350_StructSimValue((struct__1350*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__1350_allow_double_convertion() {
	return 0;
}


const char * get_struct__1350_signature() {
	static StructSimValue values[5];
	Fill_struct__1350_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__1350_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__1350_StructSimValue((struct__1350*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__1350_filter_values[5] = {"nid_packet", "q_dir", "valid", "startAddress", "endAddress"};
int check_struct__1350_string(const char* strValue) {
	static struct__1350 rTemp;
	return string_to_struct__1350(strValue, &rTemp);
}


/****************************************************************
 ** array__1358
 ****************************************************************/
void* array__1358_projection(void** pValues, int nIndex) {
	return &((*(array__1358*)pValues)[nIndex]);
}

const char * array__1358_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__1350_to_string, 30, array__1358_projection);
}

int compare_array__1358_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__1350_type , 30, array__1358_projection);
}

int is_array__1358_allow_double_convertion() {
	return 0;
}

int string_to_array__1358(const char* strValue, void* pValue) {
	static array__1358 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__1350, 30, array__1358_projection);
	if (nResult == 1)
		kcg_copy_array__1358(&(*((array__1358*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1358_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__1350_signature, 30);
}

FilterUtils get_array__1358_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__1350_Utils, strFilter, (void**)pValue, 30, array__1358_projection);
}

int check_array__1358_string(const char* strValue) {
	static array__1358 rTemp;
	return string_to_array__1358(strValue, &rTemp);
}


/****************************************************************
 ** struct__1361
 ****************************************************************/
static void Fill_struct__1361_StructSimValue(struct__1361 * pStruct, StructSimValue * pValues) {
	/*PacketHeaders label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->PacketHeaders) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_array__1358_Utils;
	pValues[0].m_pszName = "PacketHeaders";
	/*PacketData label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->PacketData) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_array_int_500_Utils;
	pValues[1].m_pszName = "PacketData";
}

const char * struct__1361_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1361_StructSimValue(((struct__1361*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__1361(const char* strValue, void* pValue) {
	static struct__1361 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__1361(&(rTemp), &(*((struct__1361*)pValue)));
	Fill_struct__1361_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__1361(&(*((struct__1361*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1361_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1361_StructSimValue((struct__1361*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__1361_allow_double_convertion() {
	return 0;
}


const char * get_struct__1361_signature() {
	static StructSimValue values[2];
	Fill_struct__1361_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__1361_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1361_StructSimValue((struct__1361*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__1361_filter_values[2] = {"PacketHeaders", "PacketData"};
int check_struct__1361_string(const char* strValue) {
	static struct__1361 rTemp;
	return string_to_struct__1361(strValue, &rTemp);
}


/****************************************************************
 ** struct__1366
 ****************************************************************/
static void Fill_struct__1366_StructSimValue(struct__1366 * pStruct, StructSimValue * pValues) {
	/*q_updown label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->q_updown) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "q_updown";
	/*m_version label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->m_version) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "m_version";
	/*q_media label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->q_media) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "q_media";
	/*n_pig label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->n_pig) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "n_pig";
	/*n_total label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->n_total) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "n_total";
	/*m_dup label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->m_dup) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "m_dup";
	/*m_mcount label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->m_mcount) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "m_mcount";
	/*nid_c label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->nid_c) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "nid_c";
	/*nid_bg label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->nid_bg) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[8].m_pszName = "nid_bg";
	/*q_link label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->q_link) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[9].m_pszName = "q_link";
}

const char * struct__1366_to_string(const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__1366_StructSimValue(((struct__1366*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 10);
}

int string_to_struct__1366(const char* strValue, void* pValue) {
	static struct__1366 rTemp;
	int nResult = 0;
	static StructSimValue values[10];
	kcg_copy_struct__1366(&(rTemp), &(*((struct__1366*)pValue)));
	Fill_struct__1366_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 10);
	if (nResult == 1)
		kcg_copy_struct__1366(&(*((struct__1366*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1366_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__1366_StructSimValue((struct__1366*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 10);
}


int is_struct__1366_allow_double_convertion() {
	return 0;
}


const char * get_struct__1366_signature() {
	static StructSimValue values[10];
	Fill_struct__1366_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 10);
}

FilterUtils get_struct__1366_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[10];
	Fill_struct__1366_StructSimValue((struct__1366*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 10, strFilter);
}

const char * struct__1366_filter_values[10] = {"q_updown", "m_version", "q_media", "n_pig", "n_total", "m_dup", "m_mcount", "nid_c", "nid_bg", "q_link"};
int check_struct__1366_string(const char* strValue) {
	static struct__1366 rTemp;
	return string_to_struct__1366(strValue, &rTemp);
}


/****************************************************************
 ** struct__1379
 ****************************************************************/
static void Fill_struct__1379_StructSimValue(struct__1379 * pStruct, StructSimValue * pValues) {
	/*Header label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->Header) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_struct__1366_Utils;
	pValues[0].m_pszName = "Header";
	/*Messages label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Messages) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__1361_Utils;
	pValues[1].m_pszName = "Messages";
}

const char * struct__1379_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1379_StructSimValue(((struct__1379*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__1379(const char* strValue, void* pValue) {
	static struct__1379 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__1379(&(rTemp), &(*((struct__1379*)pValue)));
	Fill_struct__1379_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__1379(&(*((struct__1379*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1379_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1379_StructSimValue((struct__1379*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__1379_allow_double_convertion() {
	return 0;
}


const char * get_struct__1379_signature() {
	static StructSimValue values[2];
	Fill_struct__1379_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__1379_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1379_StructSimValue((struct__1379*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__1379_filter_values[2] = {"Header", "Messages"};
int check_struct__1379_string(const char* strValue) {
	static struct__1379 rTemp;
	return string_to_struct__1379(strValue, &rTemp);
}


/****************************************************************
 ** struct__1384
 ****************************************************************/
static void Fill_struct__1384_StructSimValue(struct__1384 * pStruct, StructSimValue * pValues) {
	/*TrainPosRaw label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->TrainPosRaw) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_struct__1341_Utils;
	pValues[0].m_pszName = "TrainPosRaw";
	/*BG_Message label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->BG_Message) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__1379_Utils;
	pValues[1].m_pszName = "BG_Message";
}

const char * struct__1384_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1384_StructSimValue(((struct__1384*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__1384(const char* strValue, void* pValue) {
	static struct__1384 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__1384(&(rTemp), &(*((struct__1384*)pValue)));
	Fill_struct__1384_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__1384(&(*((struct__1384*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1384_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1384_StructSimValue((struct__1384*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__1384_allow_double_convertion() {
	return 0;
}


const char * get_struct__1384_signature() {
	static StructSimValue values[2];
	Fill_struct__1384_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__1384_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1384_StructSimValue((struct__1384*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__1384_filter_values[2] = {"TrainPosRaw", "BG_Message"};
int check_struct__1384_string(const char* strValue) {
	static struct__1384 rTemp;
	return string_to_struct__1384(strValue, &rTemp);
}


/****************************************************************
 ** struct__1389
 ****************************************************************/
static void Fill_struct__1389_StructSimValue(struct__1389 * pStruct, StructSimValue * pValues) {
	/*NID_C label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->NID_C) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "NID_C";
	/*NID_BG label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->NID_BG) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "NID_BG";
	/*Pos label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->Pos) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "Pos";
	/*Or_BG label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->Or_BG) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_OrBG_TM_Utils;
	pValues[3].m_pszName = "Or_BG";
	/*Or_Line label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->Or_Line) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_OrLine_TM_Utils;
	pValues[4].m_pszName = "Or_Line";
}

const char * struct__1389_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__1389_StructSimValue(((struct__1389*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__1389(const char* strValue, void* pValue) {
	static struct__1389 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__1389(&(rTemp), &(*((struct__1389*)pValue)));
	Fill_struct__1389_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__1389(&(*((struct__1389*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1389_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__1389_StructSimValue((struct__1389*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__1389_allow_double_convertion() {
	return 0;
}


const char * get_struct__1389_signature() {
	static StructSimValue values[5];
	Fill_struct__1389_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__1389_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__1389_StructSimValue((struct__1389*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__1389_filter_values[5] = {"NID_C", "NID_BG", "Pos", "Or_BG", "Or_Line"};
int check_struct__1389_string(const char* strValue) {
	static struct__1389 rTemp;
	return string_to_struct__1389(strValue, &rTemp);
}


/****************************************************************
 ** struct__1397
 ****************************************************************/
static void Fill_struct__1397_StructSimValue(struct__1397 * pStruct, StructSimValue * pValues) {
	/*header label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->header) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_struct__1366_Utils;
	pValues[0].m_pszName = "header";
	/*packets label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->packets) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__1361_Utils;
	pValues[1].m_pszName = "packets";
	/*engineering_BG_location label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->engineering_BG_location) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "engineering_BG_location";
	/*TrainPos label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->TrainPos) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[3].m_pszName = "TrainPos";
	/*pig_nom_0 label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->pig_nom_0) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "pig_nom_0";
	/*balise_passed label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->balise_passed) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[5].m_pszName = "balise_passed";
}

const char * struct__1397_to_string(const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__1397_StructSimValue(((struct__1397*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 6);
}

int string_to_struct__1397(const char* strValue, void* pValue) {
	static struct__1397 rTemp;
	int nResult = 0;
	static StructSimValue values[6];
	kcg_copy_struct__1397(&(rTemp), &(*((struct__1397*)pValue)));
	Fill_struct__1397_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 6);
	if (nResult == 1)
		kcg_copy_struct__1397(&(*((struct__1397*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1397_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__1397_StructSimValue((struct__1397*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 6);
}


int is_struct__1397_allow_double_convertion() {
	return 0;
}


const char * get_struct__1397_signature() {
	static StructSimValue values[6];
	Fill_struct__1397_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 6);
}

FilterUtils get_struct__1397_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[6];
	Fill_struct__1397_StructSimValue((struct__1397*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 6, strFilter);
}

const char * struct__1397_filter_values[6] = {"header", "packets", "engineering_BG_location", "TrainPos", "pig_nom_0", "balise_passed"};
int check_struct__1397_string(const char* strValue) {
	static struct__1397 rTemp;
	return string_to_struct__1397(strValue, &rTemp);
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
 ** TrackSectionData_T_InfraLib
 ****************************************************************/
struct SimTypeVTable* pSimTrackSectionData_T_InfraLibVTable;
const char * TrackSectionData_T_InfraLib_to_string(const void* pValue) {
	if (pSimTrackSectionData_T_InfraLibVTable != 0 && pSimTrackSectionData_T_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTrackSectionData_T_InfraLibVTable->m_pfnToType(SptString, pValue);
	return struct__1384_to_string(pValue);
}

int string_to_TrackSectionData_T_InfraLib(const char* strValue, void* pValue) {
	if (pSimTrackSectionData_T_InfraLibVTable != 0 && pSimTrackSectionData_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TrackSectionData_T_InfraLib rTemp;
		int nResult = pSimTrackSectionData_T_InfraLibVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1384(&(*((TrackSectionData_T_InfraLib*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1384(strValue, pValue);
}

int is_TrackSectionData_T_InfraLib_allow_double_convertion() {
	if (pSimTrackSectionData_T_InfraLibVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTrackSectionData_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTrackSectionData_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTrackSectionData_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTrackSectionData_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__1384_allow_double_convertion();
}

int TrackSectionData_T_InfraLib_to_double(double * nValue, const void* pValue) {
	if (pSimTrackSectionData_T_InfraLibVTable != 0) {
		if (pSimTrackSectionData_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTrackSectionData_T_InfraLibVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTrackSectionData_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTrackSectionData_T_InfraLibVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTrackSectionData_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTrackSectionData_T_InfraLibVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTrackSectionData_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTrackSectionData_T_InfraLibVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__1384_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1384_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TrackSectionData_T_InfraLib_string(const char* strValue) {
	static TrackSectionData_T_InfraLib rTemp;
	return string_to_TrackSectionData_T_InfraLib(strValue, &rTemp);
}


/****************************************************************
 ** TrainPosRaw_T_InfraLib
 ****************************************************************/
struct SimTypeVTable* pSimTrainPosRaw_T_InfraLibVTable;
const char * TrainPosRaw_T_InfraLib_to_string(const void* pValue) {
	if (pSimTrainPosRaw_T_InfraLibVTable != 0 && pSimTrainPosRaw_T_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTrainPosRaw_T_InfraLibVTable->m_pfnToType(SptString, pValue);
	return struct__1341_to_string(pValue);
}

int string_to_TrainPosRaw_T_InfraLib(const char* strValue, void* pValue) {
	if (pSimTrainPosRaw_T_InfraLibVTable != 0 && pSimTrainPosRaw_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TrainPosRaw_T_InfraLib rTemp;
		int nResult = pSimTrainPosRaw_T_InfraLibVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1341(&(*((TrainPosRaw_T_InfraLib*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1341(strValue, pValue);
}

int is_TrainPosRaw_T_InfraLib_allow_double_convertion() {
	if (pSimTrainPosRaw_T_InfraLibVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTrainPosRaw_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTrainPosRaw_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTrainPosRaw_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTrainPosRaw_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__1341_allow_double_convertion();
}

int TrainPosRaw_T_InfraLib_to_double(double * nValue, const void* pValue) {
	if (pSimTrainPosRaw_T_InfraLibVTable != 0) {
		if (pSimTrainPosRaw_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTrainPosRaw_T_InfraLibVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTrainPosRaw_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTrainPosRaw_T_InfraLibVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTrainPosRaw_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTrainPosRaw_T_InfraLibVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTrainPosRaw_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTrainPosRaw_T_InfraLibVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__1341_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1341_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TrainPosRaw_T_InfraLib_string(const char* strValue) {
	static TrainPosRaw_T_InfraLib rTemp;
	return string_to_TrainPosRaw_T_InfraLib(strValue, &rTemp);
}


/****************************************************************
 ** B_data_internal_T_InfraLib
 ****************************************************************/
struct SimTypeVTable* pSimB_data_internal_T_InfraLibVTable;
const char * B_data_internal_T_InfraLib_to_string(const void* pValue) {
	if (pSimB_data_internal_T_InfraLibVTable != 0 && pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimB_data_internal_T_InfraLibVTable->m_pfnToType(SptString, pValue);
	return struct__1397_to_string(pValue);
}

int string_to_B_data_internal_T_InfraLib(const char* strValue, void* pValue) {
	if (pSimB_data_internal_T_InfraLibVTable != 0 && pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static B_data_internal_T_InfraLib rTemp;
		int nResult = pSimB_data_internal_T_InfraLibVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1397(&(*((B_data_internal_T_InfraLib*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1397(strValue, pValue);
}

int is_B_data_internal_T_InfraLib_allow_double_convertion() {
	if (pSimB_data_internal_T_InfraLibVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__1397_allow_double_convertion();
}

int B_data_internal_T_InfraLib_to_double(double * nValue, const void* pValue) {
	if (pSimB_data_internal_T_InfraLibVTable != 0) {
		if (pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimB_data_internal_T_InfraLibVTable->m_pfnToType(SptLong, pValue));
		else if (pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimB_data_internal_T_InfraLibVTable->m_pfnToType(SptShort, pValue));
		else if (pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimB_data_internal_T_InfraLibVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimB_data_internal_T_InfraLibVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__1397_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1397_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_B_data_internal_T_InfraLib_string(const char* strValue) {
	static B_data_internal_T_InfraLib rTemp;
	return string_to_B_data_internal_T_InfraLib(strValue, &rTemp);
}


/****************************************************************
 ** CompressedBaliseMessage_TM
 ****************************************************************/
struct SimTypeVTable* pSimCompressedBaliseMessage_TMVTable;
const char * CompressedBaliseMessage_TM_to_string(const void* pValue) {
	if (pSimCompressedBaliseMessage_TMVTable != 0 && pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimCompressedBaliseMessage_TMVTable->m_pfnToType(SptString, pValue);
	return struct__1379_to_string(pValue);
}

int string_to_CompressedBaliseMessage_TM(const char* strValue, void* pValue) {
	if (pSimCompressedBaliseMessage_TMVTable != 0 && pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static CompressedBaliseMessage_TM rTemp;
		int nResult = pSimCompressedBaliseMessage_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1379(&(*((CompressedBaliseMessage_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1379(strValue, pValue);
}

int is_CompressedBaliseMessage_TM_allow_double_convertion() {
	if (pSimCompressedBaliseMessage_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__1379_allow_double_convertion();
}

int CompressedBaliseMessage_TM_to_double(double * nValue, const void* pValue) {
	if (pSimCompressedBaliseMessage_TMVTable != 0) {
		if (pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimCompressedBaliseMessage_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimCompressedBaliseMessage_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimCompressedBaliseMessage_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimCompressedBaliseMessage_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__1379_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1379_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_CompressedBaliseMessage_TM_string(const char* strValue) {
	static CompressedBaliseMessage_TM rTemp;
	return string_to_CompressedBaliseMessage_TM(strValue, &rTemp);
}


/****************************************************************
 ** BaliseTelegramHeader_int_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimBaliseTelegramHeader_int_T_TMVTable;
const char * BaliseTelegramHeader_int_T_TM_to_string(const void* pValue) {
	if (pSimBaliseTelegramHeader_int_T_TMVTable != 0 && pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptString, pValue);
	return struct__1366_to_string(pValue);
}

int string_to_BaliseTelegramHeader_int_T_TM(const char* strValue, void* pValue) {
	if (pSimBaliseTelegramHeader_int_T_TMVTable != 0 && pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static BaliseTelegramHeader_int_T_TM rTemp;
		int nResult = pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1366(&(*((BaliseTelegramHeader_int_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1366(strValue, pValue);
}

int is_BaliseTelegramHeader_int_T_TM_allow_double_convertion() {
	if (pSimBaliseTelegramHeader_int_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__1366_allow_double_convertion();
}

int BaliseTelegramHeader_int_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimBaliseTelegramHeader_int_T_TMVTable != 0) {
		if (pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__1366_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1366_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_BaliseTelegramHeader_int_T_TM_string(const char* strValue) {
	static BaliseTelegramHeader_int_T_TM rTemp;
	return string_to_BaliseTelegramHeader_int_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** OrBG_TM
 ****************************************************************/
struct SimTypeVTable* pSimOrBG_TMVTable;
const char * OrBG_TM_to_string(const void* pValue) {
	if (pSimOrBG_TMVTable != 0 && pSimOrBG_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimOrBG_TMVTable->m_pfnToType(SptString, pValue);
	switch (*((OrBG_TM*)pValue)) {
	case Amsterdam_TM:
		return "TM::Amsterdam";
	case Utrecht_TM:
		return "TM::Utrecht";
	default:
		return "?";
	}
}

int string_to_OrBG_TM(const char* strValue, void* pValue) {
	if (pSimOrBG_TMVTable != 0 && pSimOrBG_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		OrBG_TM rTemp;		int nResult = pSimOrBG_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((OrBG_TM*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Amsterdam") == 0 || strcmp(strValue, "TM::Amsterdam") == 0)
		*((OrBG_TM*)pValue) = Amsterdam_TM;
	else if(strcmp(strValue, "Utrecht") == 0 || strcmp(strValue, "TM::Utrecht") == 0)
		*((OrBG_TM*)pValue) = Utrecht_TM;
	else 
		return 0;
	return 1;
}

int is_OrBG_TM_allow_double_convertion() {
	return 1;
}


int OrBG_TM_to_double(double * nValue, const void* pValue) {
	switch (*((OrBG_TM*)pValue)) {
	case Amsterdam_TM:
		*nValue = 0.0;
		break;
	case Utrecht_TM:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_OrBG_TM_type(int* pResult, const char* toCompare, const void* pValue) {
	static OrBG_TM rTemp;
	const OrBG_TM* pCurrent = (const OrBG_TM*)pValue;
	if (string_to_OrBG_TM(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_OrBG_TM_signature() {
	return "E"
		"|TM::Amsterdam"
		"|TM::Utrecht"
		;
}

int check_OrBG_TM_string(const char* strValue) {
	static OrBG_TM rTemp;
	return string_to_OrBG_TM(strValue, &rTemp);
}


/****************************************************************
 ** OrLine_TM
 ****************************************************************/
struct SimTypeVTable* pSimOrLine_TMVTable;
const char * OrLine_TM_to_string(const void* pValue) {
	if (pSimOrLine_TMVTable != 0 && pSimOrLine_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimOrLine_TMVTable->m_pfnToType(SptString, pValue);
	switch (*((OrLine_TM*)pValue)) {
	case N_TM:
		return "TM::N";
	case Z_TM:
		return "TM::Z";
	default:
		return "?";
	}
}

int string_to_OrLine_TM(const char* strValue, void* pValue) {
	if (pSimOrLine_TMVTable != 0 && pSimOrLine_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		OrLine_TM rTemp;		int nResult = pSimOrLine_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((OrLine_TM*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "N") == 0 || strcmp(strValue, "TM::N") == 0)
		*((OrLine_TM*)pValue) = N_TM;
	else if(strcmp(strValue, "Z") == 0 || strcmp(strValue, "TM::Z") == 0)
		*((OrLine_TM*)pValue) = Z_TM;
	else 
		return 0;
	return 1;
}

int is_OrLine_TM_allow_double_convertion() {
	return 1;
}


int OrLine_TM_to_double(double * nValue, const void* pValue) {
	switch (*((OrLine_TM*)pValue)) {
	case N_TM:
		*nValue = 0.0;
		break;
	case Z_TM:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_OrLine_TM_type(int* pResult, const char* toCompare, const void* pValue) {
	static OrLine_TM rTemp;
	const OrLine_TM* pCurrent = (const OrLine_TM*)pValue;
	if (string_to_OrLine_TM(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_OrLine_TM_signature() {
	return "E"
		"|TM::N"
		"|TM::Z"
		;
}

int check_OrLine_TM_string(const char* strValue) {
	static OrLine_TM rTemp;
	return string_to_OrLine_TM(strValue, &rTemp);
}


/****************************************************************
 ** BaliseGroupData_TM
 ****************************************************************/
struct SimTypeVTable* pSimBaliseGroupData_TMVTable;
const char * BaliseGroupData_TM_to_string(const void* pValue) {
	if (pSimBaliseGroupData_TMVTable != 0 && pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimBaliseGroupData_TMVTable->m_pfnToType(SptString, pValue);
	return struct__1389_to_string(pValue);
}

int string_to_BaliseGroupData_TM(const char* strValue, void* pValue) {
	if (pSimBaliseGroupData_TMVTable != 0 && pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static BaliseGroupData_TM rTemp;
		int nResult = pSimBaliseGroupData_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1389(&(*((BaliseGroupData_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1389(strValue, pValue);
}

int is_BaliseGroupData_TM_allow_double_convertion() {
	if (pSimBaliseGroupData_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__1389_allow_double_convertion();
}

int BaliseGroupData_TM_to_double(double * nValue, const void* pValue) {
	if (pSimBaliseGroupData_TMVTable != 0) {
		if (pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimBaliseGroupData_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimBaliseGroupData_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimBaliseGroupData_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimBaliseGroupData_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__1389_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1389_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_BaliseGroupData_TM_string(const char* strValue) {
	static BaliseGroupData_TM rTemp;
	return string_to_BaliseGroupData_TM(strValue, &rTemp);
}


/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimCompressedPackets_T_Common_Types_PkgVTable;
const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0 && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__1361_to_string(pValue);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0 && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static CompressedPackets_T_Common_Types_Pkg rTemp;
		int nResult = pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1361(&(*((CompressedPackets_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1361(strValue, pValue);
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
	return is_struct__1361_allow_double_convertion();
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
	if (_SCSIM_struct__1361_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1361_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue) {
	static CompressedPackets_T_Common_Types_Pkg rTemp;
	return string_to_CompressedPackets_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimMetadata_T_Common_Types_PkgVTable;
const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0 && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return array__1358_to_string(pValue);
}

int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0 && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Metadata_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadata_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__1358(&(*((Metadata_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__1358(strValue, pValue);
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
	return is_array__1358_allow_double_convertion();
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
	if (_SCSIM_array__1358_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__1358_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return struct__1350_to_string(pValue);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0 && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static MetadataElement_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1350(&(*((MetadataElement_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1350(strValue, pValue);
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
	return is_struct__1350_allow_double_convertion();
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
	if (_SCSIM_struct__1350_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1350_Utils.m_pfnTypeToDouble(nValue, pValue);
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
 ** BaliseGroupData_Basics
 ****************************************************************/
struct SimTypeVTable* pSimBaliseGroupData_BasicsVTable;
const char * BaliseGroupData_Basics_to_string(const void* pValue) {
	if (pSimBaliseGroupData_BasicsVTable != 0 && pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptString, pValue);
	return struct__1389_to_string(pValue);
}

int string_to_BaliseGroupData_Basics(const char* strValue, void* pValue) {
	if (pSimBaliseGroupData_BasicsVTable != 0 && pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static BaliseGroupData_Basics rTemp;
		int nResult = pSimBaliseGroupData_BasicsVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1389(&(*((BaliseGroupData_Basics*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1389(strValue, pValue);
}

int is_BaliseGroupData_Basics_allow_double_convertion() {
	if (pSimBaliseGroupData_BasicsVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__1389_allow_double_convertion();
}

int BaliseGroupData_Basics_to_double(double * nValue, const void* pValue) {
	if (pSimBaliseGroupData_BasicsVTable != 0) {
		if (pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptLong, pValue));
		else if (pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptShort, pValue));
		else if (pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__1389_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1389_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_BaliseGroupData_Basics_string(const char* strValue) {
	static BaliseGroupData_Basics rTemp;
	return string_to_BaliseGroupData_Basics(strValue, &rTemp);
}


