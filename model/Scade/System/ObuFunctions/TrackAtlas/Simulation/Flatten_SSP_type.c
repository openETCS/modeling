
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "Flatten_SSP_type.h"
#include "Flatten_SSP_mapping.h"

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
TypeUtils _SCSIM_array_int_3_11_Utils = {array_int_3_11_to_string,
	check_array_int_3_11_string,
	string_to_array_int_3_11,
	is_array_int_3_11_allow_double_convertion,
	0,
	compare_array_int_3_11_type,
	get_array_int_3_11_signature,
	get_array_int_3_11_filter_utils,
	array_int_3_11_filter_size,
	array_int_3_11_filter_values};
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
TypeUtils _SCSIM_array_int_9_Utils = {array_int_9_to_string,
	check_array_int_9_string,
	string_to_array_int_9,
	is_array_int_9_allow_double_convertion,
	0,
	compare_array_int_9_type,
	get_array_int_9_signature,
	get_array_int_9_filter_utils,
	array_int_9_filter_size,
	array_int_9_filter_values};
TypeUtils _SCSIM_array_int_12_Utils = {array_int_12_to_string,
	check_array_int_12_string,
	string_to_array_int_12,
	is_array_int_12_allow_double_convertion,
	0,
	compare_array_int_12_type,
	get_array_int_12_signature,
	get_array_int_12_filter_utils,
	array_int_12_filter_size,
	array_int_12_filter_values};
TypeUtils _SCSIM_array_int_15_Utils = {array_int_15_to_string,
	check_array_int_15_string,
	string_to_array_int_15,
	is_array_int_15_allow_double_convertion,
	0,
	compare_array_int_15_type,
	get_array_int_15_signature,
	get_array_int_15_filter_utils,
	array_int_15_filter_size,
	array_int_15_filter_values};
TypeUtils _SCSIM_array_int_18_Utils = {array_int_18_to_string,
	check_array_int_18_string,
	string_to_array_int_18,
	is_array_int_18_allow_double_convertion,
	0,
	compare_array_int_18_type,
	get_array_int_18_signature,
	get_array_int_18_filter_utils,
	array_int_18_filter_size,
	array_int_18_filter_values};
TypeUtils _SCSIM_array_int_21_Utils = {array_int_21_to_string,
	check_array_int_21_string,
	string_to_array_int_21,
	is_array_int_21_allow_double_convertion,
	0,
	compare_array_int_21_type,
	get_array_int_21_signature,
	get_array_int_21_filter_utils,
	array_int_21_filter_size,
	array_int_21_filter_values};
TypeUtils _SCSIM_array_int_24_Utils = {array_int_24_to_string,
	check_array_int_24_string,
	string_to_array_int_24,
	is_array_int_24_allow_double_convertion,
	0,
	compare_array_int_24_type,
	get_array_int_24_signature,
	get_array_int_24_filter_utils,
	array_int_24_filter_size,
	array_int_24_filter_values};
TypeUtils _SCSIM_array_int_27_Utils = {array_int_27_to_string,
	check_array_int_27_string,
	string_to_array_int_27,
	is_array_int_27_allow_double_convertion,
	0,
	compare_array_int_27_type,
	get_array_int_27_signature,
	get_array_int_27_filter_utils,
	array_int_27_filter_size,
	array_int_27_filter_values};
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
TypeUtils _SCSIM_SSP_matrix_t_Utils = {SSP_matrix_t_to_string,
	check_SSP_matrix_t_string,
	string_to_SSP_matrix_t,
	is_SSP_matrix_t_allow_double_convertion,
	SSP_matrix_t_to_double,
	compare_SSP_matrix_t_type,
	get_SSP_matrix_t_signature,
	get_SSP_matrix_t_filter_utils,
	SSP_matrix_t_filter_size,
	SSP_matrix_t_filter_values};
TypeUtils _SCSIM_SSP_section_t_Utils = {SSP_section_t_to_string,
	check_SSP_section_t_string,
	string_to_SSP_section_t,
	is_SSP_section_t_allow_double_convertion,
	SSP_section_t_to_double,
	compare_SSP_section_t_type,
	get_SSP_section_t_signature,
	get_SSP_section_t_filter_utils,
	SSP_section_t_filter_size,
	SSP_section_t_filter_values};
TypeUtils _SCSIM_SSP_list_t_Utils = {SSP_list_t_to_string,
	check_SSP_list_t_string,
	string_to_SSP_list_t,
	is_SSP_list_t_allow_double_convertion,
	SSP_list_t_to_double,
	compare_SSP_list_t_type,
	get_SSP_list_t_signature,
	get_SSP_list_t_filter_utils,
	SSP_list_t_filter_size,
	SSP_list_t_filter_values};

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
 ** array_int_3_11
 ****************************************************************/
void* array_int_3_11_projection(void** pValues, int nIndex) {
	return &((*(array_int_3_11*)pValues)[nIndex]);
}

const char * array_int_3_11_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_int_3_to_string, 11, array_int_3_11_projection);
}

int compare_array_int_3_11_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_int_3_type , 11, array_int_3_11_projection);
}

int is_array_int_3_11_allow_double_convertion() {
	return 0;
}

int string_to_array_int_3_11(const char* strValue, void* pValue) {
	static array_int_3_11 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_int_3, 11, array_int_3_11_projection);
	if (nResult == 1)
		kcg_copy_array_int_3_11(&(*((array_int_3_11*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_3_11_signature() {
	return pSimulator->m_pfnArraySignature(get_array_int_3_signature, 11);
}

FilterUtils get_array_int_3_11_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_int_3_Utils, strFilter, (void**)pValue, 11, array_int_3_11_projection);
}

int check_array_int_3_11_string(const char* strValue) {
	static array_int_3_11 rTemp;
	return string_to_array_int_3_11(strValue, &rTemp);
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
 ** array_int_9
 ****************************************************************/
void* array_int_9_projection(void** pValues, int nIndex) {
	return &((*(array_int_9*)pValues)[nIndex]);
}

const char * array_int_9_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 9, array_int_9_projection);
}

int compare_array_int_9_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 9, array_int_9_projection);
}

int is_array_int_9_allow_double_convertion() {
	return 0;
}

int string_to_array_int_9(const char* strValue, void* pValue) {
	static array_int_9 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 9, array_int_9_projection);
	if (nResult == 1)
		kcg_copy_array_int_9(&(*((array_int_9*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_9_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 9);
}

FilterUtils get_array_int_9_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 9, array_int_9_projection);
}

int check_array_int_9_string(const char* strValue) {
	static array_int_9 rTemp;
	return string_to_array_int_9(strValue, &rTemp);
}


/****************************************************************
 ** array_int_12
 ****************************************************************/
void* array_int_12_projection(void** pValues, int nIndex) {
	return &((*(array_int_12*)pValues)[nIndex]);
}

const char * array_int_12_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 12, array_int_12_projection);
}

int compare_array_int_12_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 12, array_int_12_projection);
}

int is_array_int_12_allow_double_convertion() {
	return 0;
}

int string_to_array_int_12(const char* strValue, void* pValue) {
	static array_int_12 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 12, array_int_12_projection);
	if (nResult == 1)
		kcg_copy_array_int_12(&(*((array_int_12*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_12_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 12);
}

FilterUtils get_array_int_12_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 12, array_int_12_projection);
}

int check_array_int_12_string(const char* strValue) {
	static array_int_12 rTemp;
	return string_to_array_int_12(strValue, &rTemp);
}


/****************************************************************
 ** array_int_15
 ****************************************************************/
void* array_int_15_projection(void** pValues, int nIndex) {
	return &((*(array_int_15*)pValues)[nIndex]);
}

const char * array_int_15_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 15, array_int_15_projection);
}

int compare_array_int_15_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 15, array_int_15_projection);
}

int is_array_int_15_allow_double_convertion() {
	return 0;
}

int string_to_array_int_15(const char* strValue, void* pValue) {
	static array_int_15 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 15, array_int_15_projection);
	if (nResult == 1)
		kcg_copy_array_int_15(&(*((array_int_15*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_15_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 15);
}

FilterUtils get_array_int_15_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 15, array_int_15_projection);
}

int check_array_int_15_string(const char* strValue) {
	static array_int_15 rTemp;
	return string_to_array_int_15(strValue, &rTemp);
}


/****************************************************************
 ** array_int_18
 ****************************************************************/
void* array_int_18_projection(void** pValues, int nIndex) {
	return &((*(array_int_18*)pValues)[nIndex]);
}

const char * array_int_18_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 18, array_int_18_projection);
}

int compare_array_int_18_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 18, array_int_18_projection);
}

int is_array_int_18_allow_double_convertion() {
	return 0;
}

int string_to_array_int_18(const char* strValue, void* pValue) {
	static array_int_18 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 18, array_int_18_projection);
	if (nResult == 1)
		kcg_copy_array_int_18(&(*((array_int_18*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_18_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 18);
}

FilterUtils get_array_int_18_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 18, array_int_18_projection);
}

int check_array_int_18_string(const char* strValue) {
	static array_int_18 rTemp;
	return string_to_array_int_18(strValue, &rTemp);
}


/****************************************************************
 ** array_int_21
 ****************************************************************/
void* array_int_21_projection(void** pValues, int nIndex) {
	return &((*(array_int_21*)pValues)[nIndex]);
}

const char * array_int_21_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 21, array_int_21_projection);
}

int compare_array_int_21_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 21, array_int_21_projection);
}

int is_array_int_21_allow_double_convertion() {
	return 0;
}

int string_to_array_int_21(const char* strValue, void* pValue) {
	static array_int_21 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 21, array_int_21_projection);
	if (nResult == 1)
		kcg_copy_array_int_21(&(*((array_int_21*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_21_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 21);
}

FilterUtils get_array_int_21_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 21, array_int_21_projection);
}

int check_array_int_21_string(const char* strValue) {
	static array_int_21 rTemp;
	return string_to_array_int_21(strValue, &rTemp);
}


/****************************************************************
 ** array_int_24
 ****************************************************************/
void* array_int_24_projection(void** pValues, int nIndex) {
	return &((*(array_int_24*)pValues)[nIndex]);
}

const char * array_int_24_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 24, array_int_24_projection);
}

int compare_array_int_24_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 24, array_int_24_projection);
}

int is_array_int_24_allow_double_convertion() {
	return 0;
}

int string_to_array_int_24(const char* strValue, void* pValue) {
	static array_int_24 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 24, array_int_24_projection);
	if (nResult == 1)
		kcg_copy_array_int_24(&(*((array_int_24*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_24_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 24);
}

FilterUtils get_array_int_24_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 24, array_int_24_projection);
}

int check_array_int_24_string(const char* strValue) {
	static array_int_24 rTemp;
	return string_to_array_int_24(strValue, &rTemp);
}


/****************************************************************
 ** array_int_27
 ****************************************************************/
void* array_int_27_projection(void** pValues, int nIndex) {
	return &((*(array_int_27*)pValues)[nIndex]);
}

const char * array_int_27_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 27, array_int_27_projection);
}

int compare_array_int_27_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 27, array_int_27_projection);
}

int is_array_int_27_allow_double_convertion() {
	return 0;
}

int string_to_array_int_27(const char* strValue, void* pValue) {
	static array_int_27 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 27, array_int_27_projection);
	if (nResult == 1)
		kcg_copy_array_int_27(&(*((array_int_27*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_27_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 27);
}

FilterUtils get_array_int_27_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 27, array_int_27_projection);
}

int check_array_int_27_string(const char* strValue) {
	static array_int_27 rTemp;
	return string_to_array_int_27(strValue, &rTemp);
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
 ** SSP_matrix_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_matrix_tVTable;
const char * SSP_matrix_t_to_string(const void* pValue) {
	if (pSimSSP_matrix_tVTable != 0 && pSimSSP_matrix_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_matrix_tVTable->m_pfnToType(SptString, pValue);
	return array_int_3_11_to_string(pValue);
}

int string_to_SSP_matrix_t(const char* strValue, void* pValue) {
	if (pSimSSP_matrix_tVTable != 0 && pSimSSP_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_matrix_t rTemp;
		int nResult = pSimSSP_matrix_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_3_11(&(*((SSP_matrix_t*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_3_11(strValue, pValue);
}

int is_SSP_matrix_t_allow_double_convertion() {
	if (pSimSSP_matrix_tVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_3_11_allow_double_convertion();
}

int SSP_matrix_t_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_matrix_tVTable != 0) {
		if (pSimSSP_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_matrix_tVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_matrix_tVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_matrix_tVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_matrix_tVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_3_11_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_3_11_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_matrix_t_string(const char* strValue) {
	static SSP_matrix_t rTemp;
	return string_to_SSP_matrix_t(strValue, &rTemp);
}


/****************************************************************
 ** SSP_section_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_section_tVTable;
const char * SSP_section_t_to_string(const void* pValue) {
	if (pSimSSP_section_tVTable != 0 && pSimSSP_section_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_section_tVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_SSP_section_t(const char* strValue, void* pValue) {
	if (pSimSSP_section_tVTable != 0 && pSimSSP_section_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_section_t rTemp;
		int nResult = pSimSSP_section_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((SSP_section_t*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_SSP_section_t_allow_double_convertion() {
	if (pSimSSP_section_tVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_section_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_section_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_section_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_section_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int SSP_section_t_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_section_tVTable != 0) {
		if (pSimSSP_section_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_section_tVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_section_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_section_tVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_section_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_section_tVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_section_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_section_tVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_section_t_string(const char* strValue) {
	static SSP_section_t rTemp;
	return string_to_SSP_section_t(strValue, &rTemp);
}


/****************************************************************
 ** SSP_list_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_list_tVTable;
const char * SSP_list_t_to_string(const void* pValue) {
	if (pSimSSP_list_tVTable != 0 && pSimSSP_list_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_list_tVTable->m_pfnToType(SptString, pValue);
	return array_int_33_to_string(pValue);
}

int string_to_SSP_list_t(const char* strValue, void* pValue) {
	if (pSimSSP_list_tVTable != 0 && pSimSSP_list_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_list_t rTemp;
		int nResult = pSimSSP_list_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_33(&(*((SSP_list_t*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_33(strValue, pValue);
}

int is_SSP_list_t_allow_double_convertion() {
	if (pSimSSP_list_tVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_list_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_list_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_list_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_list_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_33_allow_double_convertion();
}

int SSP_list_t_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_list_tVTable != 0) {
		if (pSimSSP_list_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_list_tVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_list_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_list_tVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_list_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_list_tVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_list_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_list_tVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_33_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_33_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_list_t_string(const char* strValue) {
	static SSP_list_t rTemp;
	return string_to_SSP_list_t(strValue, &rTemp);
}


