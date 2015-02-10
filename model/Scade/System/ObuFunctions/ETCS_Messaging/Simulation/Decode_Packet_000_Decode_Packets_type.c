
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "Decode_Packet_000_Decode_Packets_type.h"
#include "Decode_Packet_000_Decode_Packets_mapping.h"

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
TypeUtils _SCSIM_array_int_20_Utils = {array_int_20_to_string,
	check_array_int_20_string,
	string_to_array_int_20,
	is_array_int_20_allow_double_convertion,
	0,
	compare_array_int_20_type,
	get_array_int_20_signature,
	get_array_int_20_filter_utils,
	array_int_20_filter_size,
	array_int_20_filter_values};
TypeUtils _SCSIM_Information_T_BM_Types_Flat_Utils = {Information_T_BM_Types_Flat_to_string,
	check_Information_T_BM_Types_Flat_string,
	string_to_Information_T_BM_Types_Flat,
	is_Information_T_BM_Types_Flat_allow_double_convertion,
	Information_T_BM_Types_Flat_to_double,
	compare_Information_T_BM_Types_Flat_type,
	get_Information_T_BM_Types_Flat_signature,
	get_Information_T_BM_Types_Flat_filter_utils,
	Information_T_BM_Types_Flat_filter_size,
	Information_T_BM_Types_Flat_filter_values};
TypeUtils _SCSIM_InfoElement_T_BM_Types_Flat_Utils = {InfoElement_T_BM_Types_Flat_to_string,
	check_InfoElement_T_BM_Types_Flat_string,
	string_to_InfoElement_T_BM_Types_Flat,
	is_InfoElement_T_BM_Types_Flat_allow_double_convertion,
	InfoElement_T_BM_Types_Flat_to_double,
	compare_InfoElement_T_BM_Types_Flat_type,
	get_InfoElement_T_BM_Types_Flat_signature,
	get_InfoElement_T_BM_Types_Flat_filter_utils,
	InfoElement_T_BM_Types_Flat_filter_size,
	InfoElement_T_BM_Types_Flat_filter_values};
TypeUtils _SCSIM_NID_VBCMK_T_Types_Notfound_Utils = {NID_VBCMK_T_Types_Notfound_to_string,
	check_NID_VBCMK_T_Types_Notfound_string,
	string_to_NID_VBCMK_T_Types_Notfound,
	is_NID_VBCMK_T_Types_Notfound_allow_double_convertion,
	NID_VBCMK_T_Types_Notfound_to_double,
	compare_NID_VBCMK_T_Types_Notfound_type,
	get_NID_VBCMK_T_Types_Notfound_signature,
	get_NID_VBCMK_T_Types_Notfound_filter_utils,
	NID_VBCMK_T_Types_Notfound_filter_size,
	NID_VBCMK_T_Types_Notfound_filter_values};

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
 ** array_int_20
 ****************************************************************/
void* array_int_20_projection(void** pValues, int nIndex) {
	return &((*(array_int_20*)pValues)[nIndex]);
}

const char * array_int_20_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 20, array_int_20_projection);
}

int compare_array_int_20_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 20, array_int_20_projection);
}

int is_array_int_20_allow_double_convertion() {
	return 0;
}

int string_to_array_int_20(const char* strValue, void* pValue) {
	static array_int_20 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 20, array_int_20_projection);
	if (nResult == 1)
		kcg_copy_array_int_20(&(*((array_int_20*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_20_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 20);
}

FilterUtils get_array_int_20_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 20, array_int_20_projection);
}

int check_array_int_20_string(const char* strValue) {
	static array_int_20 rTemp;
	return string_to_array_int_20(strValue, &rTemp);
}


/****************************************************************
 ** Information_T_BM_Types_Flat
 ****************************************************************/
struct SimTypeVTable* pSimInformation_T_BM_Types_FlatVTable;
const char * Information_T_BM_Types_Flat_to_string(const void* pValue) {
	if (pSimInformation_T_BM_Types_FlatVTable != 0 && pSimInformation_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimInformation_T_BM_Types_FlatVTable->m_pfnToType(SptString, pValue);
	return array_int_20_to_string(pValue);
}

int string_to_Information_T_BM_Types_Flat(const char* strValue, void* pValue) {
	if (pSimInformation_T_BM_Types_FlatVTable != 0 && pSimInformation_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Information_T_BM_Types_Flat rTemp;
		int nResult = pSimInformation_T_BM_Types_FlatVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_20(&(*((Information_T_BM_Types_Flat*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_20(strValue, pValue);
}

int is_Information_T_BM_Types_Flat_allow_double_convertion() {
	if (pSimInformation_T_BM_Types_FlatVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimInformation_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimInformation_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimInformation_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimInformation_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_20_allow_double_convertion();
}

int Information_T_BM_Types_Flat_to_double(double * nValue, const void* pValue) {
	if (pSimInformation_T_BM_Types_FlatVTable != 0) {
		if (pSimInformation_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimInformation_T_BM_Types_FlatVTable->m_pfnToType(SptLong, pValue));
		else if (pSimInformation_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimInformation_T_BM_Types_FlatVTable->m_pfnToType(SptShort, pValue));
		else if (pSimInformation_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimInformation_T_BM_Types_FlatVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimInformation_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimInformation_T_BM_Types_FlatVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_20_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_20_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Information_T_BM_Types_Flat_string(const char* strValue) {
	static Information_T_BM_Types_Flat rTemp;
	return string_to_Information_T_BM_Types_Flat(strValue, &rTemp);
}


/****************************************************************
 ** InfoElement_T_BM_Types_Flat
 ****************************************************************/
struct SimTypeVTable* pSimInfoElement_T_BM_Types_FlatVTable;
const char * InfoElement_T_BM_Types_Flat_to_string(const void* pValue) {
	if (pSimInfoElement_T_BM_Types_FlatVTable != 0 && pSimInfoElement_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimInfoElement_T_BM_Types_FlatVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_InfoElement_T_BM_Types_Flat(const char* strValue, void* pValue) {
	if (pSimInfoElement_T_BM_Types_FlatVTable != 0 && pSimInfoElement_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static InfoElement_T_BM_Types_Flat rTemp;
		int nResult = pSimInfoElement_T_BM_Types_FlatVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((InfoElement_T_BM_Types_Flat*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_InfoElement_T_BM_Types_Flat_allow_double_convertion() {
	if (pSimInfoElement_T_BM_Types_FlatVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimInfoElement_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimInfoElement_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimInfoElement_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimInfoElement_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int InfoElement_T_BM_Types_Flat_to_double(double * nValue, const void* pValue) {
	if (pSimInfoElement_T_BM_Types_FlatVTable != 0) {
		if (pSimInfoElement_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimInfoElement_T_BM_Types_FlatVTable->m_pfnToType(SptLong, pValue));
		else if (pSimInfoElement_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimInfoElement_T_BM_Types_FlatVTable->m_pfnToType(SptShort, pValue));
		else if (pSimInfoElement_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimInfoElement_T_BM_Types_FlatVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimInfoElement_T_BM_Types_FlatVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimInfoElement_T_BM_Types_FlatVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_InfoElement_T_BM_Types_Flat_string(const char* strValue) {
	static InfoElement_T_BM_Types_Flat rTemp;
	return string_to_InfoElement_T_BM_Types_Flat(strValue, &rTemp);
}


/****************************************************************
 ** NID_VBCMK_T_Types_Notfound
 ****************************************************************/
struct SimTypeVTable* pSimNID_VBCMK_T_Types_NotfoundVTable;
const char * NID_VBCMK_T_Types_Notfound_to_string(const void* pValue) {
	if (pSimNID_VBCMK_T_Types_NotfoundVTable != 0 && pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_VBCMK_T_Types_Notfound(const char* strValue, void* pValue) {
	if (pSimNID_VBCMK_T_Types_NotfoundVTable != 0 && pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_VBCMK_T_Types_Notfound rTemp;
		int nResult = pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_VBCMK_T_Types_Notfound*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_VBCMK_T_Types_Notfound_allow_double_convertion() {
	if (pSimNID_VBCMK_T_Types_NotfoundVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_VBCMK_T_Types_Notfound_to_double(double * nValue, const void* pValue) {
	if (pSimNID_VBCMK_T_Types_NotfoundVTable != 0) {
		if (pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_VBCMK_T_Types_NotfoundVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_VBCMK_T_Types_Notfound_string(const char* strValue) {
	static NID_VBCMK_T_Types_Notfound rTemp;
	return string_to_NID_VBCMK_T_Types_Notfound(strValue, &rTemp);
}


