
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "Determine_MRS_type.h"
#include "Determine_MRS_mapping.h"

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
TypeUtils _SCSIM_struct__491_Utils = {struct__491_to_string,
	check_struct__491_string,
	string_to_struct__491,
	is_struct__491_allow_double_convertion,
	0,
	compare_struct__491_type,
	get_struct__491_signature,
	get_struct__491_filter_utils,
	struct__491_filter_size,
	struct__491_filter_values};
TypeUtils _SCSIM_struct__496_Utils = {struct__496_to_string,
	check_struct__496_string,
	string_to_struct__496,
	is_struct__496_allow_double_convertion,
	0,
	compare_struct__496_type,
	get_struct__496_signature,
	get_struct__496_filter_utils,
	struct__496_filter_size,
	struct__496_filter_values};
TypeUtils _SCSIM_array__501_Utils = {array__501_to_string,
	check_array__501_string,
	string_to_array__501,
	is_array__501_allow_double_convertion,
	0,
	compare_array__501_type,
	get_array__501_signature,
	get_array__501_filter_utils,
	array__501_filter_size,
	array__501_filter_values};
TypeUtils _SCSIM_struct__504_Utils = {struct__504_to_string,
	check_struct__504_string,
	string_to_struct__504,
	is_struct__504_allow_double_convertion,
	0,
	compare_struct__504_type,
	get_struct__504_signature,
	get_struct__504_filter_utils,
	struct__504_filter_size,
	struct__504_filter_values};
TypeUtils _SCSIM_struct__510_Utils = {struct__510_to_string,
	check_struct__510_string,
	string_to_struct__510,
	is_struct__510_allow_double_convertion,
	0,
	compare_struct__510_type,
	get_struct__510_signature,
	get_struct__510_filter_utils,
	struct__510_filter_size,
	struct__510_filter_values};
TypeUtils _SCSIM_array__515_Utils = {array__515_to_string,
	check_array__515_string,
	string_to_array__515,
	is_array__515_allow_double_convertion,
	0,
	compare_array__515_type,
	get_array__515_signature,
	get_array__515_filter_utils,
	array__515_filter_size,
	array__515_filter_values};
TypeUtils _SCSIM_array_int_8_Utils = {array_int_8_to_string,
	check_array_int_8_string,
	string_to_array_int_8,
	is_array_int_8_allow_double_convertion,
	0,
	compare_array_int_8_type,
	get_array_int_8_signature,
	get_array_int_8_filter_utils,
	array_int_8_filter_size,
	array_int_8_filter_values};
TypeUtils _SCSIM_array__521_Utils = {array__521_to_string,
	check_array__521_string,
	string_to_array__521,
	is_array__521_allow_double_convertion,
	0,
	compare_array__521_type,
	get_array__521_signature,
	get_array__521_filter_utils,
	array__521_filter_size,
	array__521_filter_values};
TypeUtils _SCSIM_array_int_11_Utils = {array_int_11_to_string,
	check_array_int_11_string,
	string_to_array_int_11,
	is_array_int_11_allow_double_convertion,
	0,
	compare_array_int_11_type,
	get_array_int_11_signature,
	get_array_int_11_filter_utils,
	array_int_11_filter_size,
	array_int_11_filter_values};
TypeUtils _SCSIM_SSP_t_section_t_Utils = {SSP_t_section_t_to_string,
	check_SSP_t_section_t_string,
	string_to_SSP_t_section_t,
	is_SSP_t_section_t_allow_double_convertion,
	SSP_t_section_t_to_double,
	compare_SSP_t_section_t_type,
	get_SSP_t_section_t_signature,
	get_SSP_t_section_t_filter_utils,
	SSP_t_section_t_filter_size,
	SSP_t_section_t_filter_values};
TypeUtils _SCSIM_SSP_valid_section_t_Utils = {SSP_valid_section_t_to_string,
	check_SSP_valid_section_t_string,
	string_to_SSP_valid_section_t,
	is_SSP_valid_section_t_allow_double_convertion,
	SSP_valid_section_t_to_double,
	compare_SSP_valid_section_t_type,
	get_SSP_valid_section_t_signature,
	get_SSP_valid_section_t_filter_utils,
	SSP_valid_section_t_filter_size,
	SSP_valid_section_t_filter_values};
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
TypeUtils _SCSIM_SSP_s_section_t_Utils = {SSP_s_section_t_to_string,
	check_SSP_s_section_t_string,
	string_to_SSP_s_section_t,
	is_SSP_s_section_t_allow_double_convertion,
	SSP_s_section_t_to_double,
	compare_SSP_s_section_t_type,
	get_SSP_s_section_t_signature,
	get_SSP_s_section_t_filter_utils,
	SSP_s_section_t_filter_size,
	SSP_s_section_t_filter_values};
TypeUtils _SCSIM_SSP_relevant_target_t_Utils = {SSP_relevant_target_t_to_string,
	check_SSP_relevant_target_t_string,
	string_to_SSP_relevant_target_t,
	is_SSP_relevant_target_t_allow_double_convertion,
	SSP_relevant_target_t_to_double,
	compare_SSP_relevant_target_t_type,
	get_SSP_relevant_target_t_signature,
	get_SSP_relevant_target_t_filter_utils,
	SSP_relevant_target_t_filter_size,
	SSP_relevant_target_t_filter_values};
TypeUtils _SCSIM_SSP_Mark_ValidSSPsection_Utils = {SSP_Mark_ValidSSPsection_to_string,
	check_SSP_Mark_ValidSSPsection_string,
	string_to_SSP_Mark_ValidSSPsection,
	is_SSP_Mark_ValidSSPsection_allow_double_convertion,
	SSP_Mark_ValidSSPsection_to_double,
	compare_SSP_Mark_ValidSSPsection_type,
	get_SSP_Mark_ValidSSPsection_signature,
	get_SSP_Mark_ValidSSPsection_filter_utils,
	SSP_Mark_ValidSSPsection_filter_size,
	SSP_Mark_ValidSSPsection_filter_values};
TypeUtils _SCSIM_SSP_cat_t_Utils = {SSP_cat_t_to_string,
	check_SSP_cat_t_string,
	string_to_SSP_cat_t,
	is_SSP_cat_t_allow_double_convertion,
	SSP_cat_t_to_double,
	compare_SSP_cat_t_type,
	get_SSP_cat_t_signature,
	get_SSP_cat_t_filter_utils,
	SSP_cat_t_filter_size,
	SSP_cat_t_filter_values};
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
 ** struct__491
 ****************************************************************/
static void Fill_struct__491_StructSimValue(struct__491 * pStruct, StructSimValue * pValues) {
	/*target label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->target) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "target";
	/*speed label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->speed) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "speed";
}

const char * struct__491_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__491_StructSimValue(((struct__491*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__491(const char* strValue, void* pValue) {
	static struct__491 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__491(&(rTemp), &(*((struct__491*)pValue)));
	Fill_struct__491_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__491(&(*((struct__491*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__491_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__491_StructSimValue((struct__491*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__491_allow_double_convertion() {
	return 0;
}


const char * get_struct__491_signature() {
	static StructSimValue values[2];
	Fill_struct__491_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__491_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__491_StructSimValue((struct__491*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__491_filter_values[2] = {"target", "speed"};
int check_struct__491_string(const char* strValue) {
	static struct__491 rTemp;
	return string_to_struct__491(strValue, &rTemp);
}


/****************************************************************
 ** struct__496
 ****************************************************************/
static void Fill_struct__496_StructSimValue(struct__496 * pStruct, StructSimValue * pValues) {
	/*Found label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->Found) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "Found";
	/*Index label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Index) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "Index";
}

const char * struct__496_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__496_StructSimValue(((struct__496*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__496(const char* strValue, void* pValue) {
	static struct__496 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__496(&(rTemp), &(*((struct__496*)pValue)));
	Fill_struct__496_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__496(&(*((struct__496*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__496_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__496_StructSimValue((struct__496*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__496_allow_double_convertion() {
	return 0;
}


const char * get_struct__496_signature() {
	static StructSimValue values[2];
	Fill_struct__496_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__496_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__496_StructSimValue((struct__496*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__496_filter_values[2] = {"Found", "Index"};
int check_struct__496_string(const char* strValue) {
	static struct__496 rTemp;
	return string_to_struct__496(strValue, &rTemp);
}


/****************************************************************
 ** array__501
 ****************************************************************/
void* array__501_projection(void** pValues, int nIndex) {
	return &((*(array__501*)pValues)[nIndex]);
}

const char * array__501_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__491_to_string, 8, array__501_projection);
}

int compare_array__501_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__491_type , 8, array__501_projection);
}

int is_array__501_allow_double_convertion() {
	return 0;
}

int string_to_array__501(const char* strValue, void* pValue) {
	static array__501 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__491, 8, array__501_projection);
	if (nResult == 1)
		kcg_copy_array__501(&(*((array__501*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__501_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__491_signature, 8);
}

FilterUtils get_array__501_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__491_Utils, strFilter, (void**)pValue, 8, array__501_projection);
}

int check_array__501_string(const char* strValue) {
	static array__501 rTemp;
	return string_to_array__501(strValue, &rTemp);
}


/****************************************************************
 ** struct__504
 ****************************************************************/
static void Fill_struct__504_StructSimValue(struct__504 * pStruct, StructSimValue * pValues) {
	/*found label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->found) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "found";
	/*index label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->index) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "index";
	/*target label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->target) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "target";
}

const char * struct__504_to_string(const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__504_StructSimValue(((struct__504*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 3);
}

int string_to_struct__504(const char* strValue, void* pValue) {
	static struct__504 rTemp;
	int nResult = 0;
	static StructSimValue values[3];
	kcg_copy_struct__504(&(rTemp), &(*((struct__504*)pValue)));
	Fill_struct__504_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 3);
	if (nResult == 1)
		kcg_copy_struct__504(&(*((struct__504*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__504_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__504_StructSimValue((struct__504*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 3);
}


int is_struct__504_allow_double_convertion() {
	return 0;
}


const char * get_struct__504_signature() {
	static StructSimValue values[3];
	Fill_struct__504_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 3);
}

FilterUtils get_struct__504_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[3];
	Fill_struct__504_StructSimValue((struct__504*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 3, strFilter);
}

const char * struct__504_filter_values[3] = {"found", "index", "target"};
int check_struct__504_string(const char* strValue) {
	static struct__504 rTemp;
	return string_to_struct__504(strValue, &rTemp);
}


/****************************************************************
 ** struct__510
 ****************************************************************/
static void Fill_struct__510_StructSimValue(struct__510 * pStruct, StructSimValue * pValues) {
	/*index label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->index) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "index";
	/*target label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->target) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "target";
}

const char * struct__510_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__510_StructSimValue(((struct__510*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__510(const char* strValue, void* pValue) {
	static struct__510 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__510(&(rTemp), &(*((struct__510*)pValue)));
	Fill_struct__510_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__510(&(*((struct__510*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__510_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__510_StructSimValue((struct__510*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__510_allow_double_convertion() {
	return 0;
}


const char * get_struct__510_signature() {
	static StructSimValue values[2];
	Fill_struct__510_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__510_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__510_StructSimValue((struct__510*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__510_filter_values[2] = {"index", "target"};
int check_struct__510_string(const char* strValue) {
	static struct__510 rTemp;
	return string_to_struct__510(strValue, &rTemp);
}


/****************************************************************
 ** array__515
 ****************************************************************/
void* array__515_projection(void** pValues, int nIndex) {
	return &((*(array__515*)pValues)[nIndex]);
}

const char * array__515_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array__501_to_string, 11, array__515_projection);
}

int compare_array__515_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array__501_type , 11, array__515_projection);
}

int is_array__515_allow_double_convertion() {
	return 0;
}

int string_to_array__515(const char* strValue, void* pValue) {
	static array__515 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array__501, 11, array__515_projection);
	if (nResult == 1)
		kcg_copy_array__515(&(*((array__515*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__515_signature() {
	return pSimulator->m_pfnArraySignature(get_array__501_signature, 11);
}

FilterUtils get_array__515_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array__501_Utils, strFilter, (void**)pValue, 11, array__515_projection);
}

int check_array__515_string(const char* strValue) {
	static array__515 rTemp;
	return string_to_array__515(strValue, &rTemp);
}


/****************************************************************
 ** array_int_8
 ****************************************************************/
void* array_int_8_projection(void** pValues, int nIndex) {
	return &((*(array_int_8*)pValues)[nIndex]);
}

const char * array_int_8_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 8, array_int_8_projection);
}

int compare_array_int_8_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 8, array_int_8_projection);
}

int is_array_int_8_allow_double_convertion() {
	return 0;
}

int string_to_array_int_8(const char* strValue, void* pValue) {
	static array_int_8 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 8, array_int_8_projection);
	if (nResult == 1)
		kcg_copy_array_int_8(&(*((array_int_8*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_8_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 8);
}

FilterUtils get_array_int_8_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 8, array_int_8_projection);
}

int check_array_int_8_string(const char* strValue) {
	static array_int_8 rTemp;
	return string_to_array_int_8(strValue, &rTemp);
}


/****************************************************************
 ** array__521
 ****************************************************************/
void* array__521_projection(void** pValues, int nIndex) {
	return &((*(array__521*)pValues)[nIndex]);
}

const char * array__521_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__504_to_string, 8, array__521_projection);
}

int compare_array__521_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__504_type , 8, array__521_projection);
}

int is_array__521_allow_double_convertion() {
	return 0;
}

int string_to_array__521(const char* strValue, void* pValue) {
	static array__521 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__504, 8, array__521_projection);
	if (nResult == 1)
		kcg_copy_array__521(&(*((array__521*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__521_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__504_signature, 8);
}

FilterUtils get_array__521_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__504_Utils, strFilter, (void**)pValue, 8, array__521_projection);
}

int check_array__521_string(const char* strValue) {
	static array__521 rTemp;
	return string_to_array__521(strValue, &rTemp);
}


/****************************************************************
 ** array_int_11
 ****************************************************************/
void* array_int_11_projection(void** pValues, int nIndex) {
	return &((*(array_int_11*)pValues)[nIndex]);
}

const char * array_int_11_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 11, array_int_11_projection);
}

int compare_array_int_11_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 11, array_int_11_projection);
}

int is_array_int_11_allow_double_convertion() {
	return 0;
}

int string_to_array_int_11(const char* strValue, void* pValue) {
	static array_int_11 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 11, array_int_11_projection);
	if (nResult == 1)
		kcg_copy_array_int_11(&(*((array_int_11*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_11_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 11);
}

FilterUtils get_array_int_11_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 11, array_int_11_projection);
}

int check_array_int_11_string(const char* strValue) {
	static array_int_11 rTemp;
	return string_to_array_int_11(strValue, &rTemp);
}


/****************************************************************
 ** SSP_t_section_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_t_section_tVTable;
const char * SSP_t_section_t_to_string(const void* pValue) {
	if (pSimSSP_t_section_tVTable != 0 && pSimSSP_t_section_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_t_section_tVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_SSP_t_section_t(const char* strValue, void* pValue) {
	if (pSimSSP_t_section_tVTable != 0 && pSimSSP_t_section_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_t_section_t rTemp;
		int nResult = pSimSSP_t_section_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((SSP_t_section_t*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_SSP_t_section_t_allow_double_convertion() {
	if (pSimSSP_t_section_tVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_t_section_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_t_section_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_t_section_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_t_section_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int SSP_t_section_t_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_t_section_tVTable != 0) {
		if (pSimSSP_t_section_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_t_section_tVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_t_section_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_t_section_tVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_t_section_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_t_section_tVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_t_section_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_t_section_tVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_t_section_t_string(const char* strValue) {
	static SSP_t_section_t rTemp;
	return string_to_SSP_t_section_t(strValue, &rTemp);
}


/****************************************************************
 ** SSP_valid_section_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_valid_section_tVTable;
const char * SSP_valid_section_t_to_string(const void* pValue) {
	if (pSimSSP_valid_section_tVTable != 0 && pSimSSP_valid_section_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_valid_section_tVTable->m_pfnToType(SptString, pValue);
	return struct__504_to_string(pValue);
}

int string_to_SSP_valid_section_t(const char* strValue, void* pValue) {
	if (pSimSSP_valid_section_tVTable != 0 && pSimSSP_valid_section_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_valid_section_t rTemp;
		int nResult = pSimSSP_valid_section_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__504(&(*((SSP_valid_section_t*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__504(strValue, pValue);
}

int is_SSP_valid_section_t_allow_double_convertion() {
	if (pSimSSP_valid_section_tVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_valid_section_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_valid_section_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_valid_section_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_valid_section_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__504_allow_double_convertion();
}

int SSP_valid_section_t_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_valid_section_tVTable != 0) {
		if (pSimSSP_valid_section_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_valid_section_tVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_valid_section_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_valid_section_tVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_valid_section_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_valid_section_tVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_valid_section_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_valid_section_tVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__504_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__504_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_valid_section_t_string(const char* strValue) {
	static SSP_valid_section_t rTemp;
	return string_to_SSP_valid_section_t(strValue, &rTemp);
}


/****************************************************************
 ** SSP_section_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_section_tVTable;
const char * SSP_section_t_to_string(const void* pValue) {
	if (pSimSSP_section_tVTable != 0 && pSimSSP_section_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_section_tVTable->m_pfnToType(SptString, pValue);
	return struct__491_to_string(pValue);
}

int string_to_SSP_section_t(const char* strValue, void* pValue) {
	if (pSimSSP_section_tVTable != 0 && pSimSSP_section_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_section_t rTemp;
		int nResult = pSimSSP_section_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__491(&(*((SSP_section_t*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__491(strValue, pValue);
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
	return is_struct__491_allow_double_convertion();
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
	if (_SCSIM_struct__491_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__491_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_section_t_string(const char* strValue) {
	static SSP_section_t rTemp;
	return string_to_SSP_section_t(strValue, &rTemp);
}


/****************************************************************
 ** SSP_s_section_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_s_section_tVTable;
const char * SSP_s_section_t_to_string(const void* pValue) {
	if (pSimSSP_s_section_tVTable != 0 && pSimSSP_s_section_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_s_section_tVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_SSP_s_section_t(const char* strValue, void* pValue) {
	if (pSimSSP_s_section_tVTable != 0 && pSimSSP_s_section_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_s_section_t rTemp;
		int nResult = pSimSSP_s_section_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((SSP_s_section_t*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_SSP_s_section_t_allow_double_convertion() {
	if (pSimSSP_s_section_tVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_s_section_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_s_section_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_s_section_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_s_section_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int SSP_s_section_t_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_s_section_tVTable != 0) {
		if (pSimSSP_s_section_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_s_section_tVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_s_section_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_s_section_tVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_s_section_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_s_section_tVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_s_section_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_s_section_tVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_s_section_t_string(const char* strValue) {
	static SSP_s_section_t rTemp;
	return string_to_SSP_s_section_t(strValue, &rTemp);
}


/****************************************************************
 ** SSP_relevant_target_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_relevant_target_tVTable;
const char * SSP_relevant_target_t_to_string(const void* pValue) {
	if (pSimSSP_relevant_target_tVTable != 0 && pSimSSP_relevant_target_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_relevant_target_tVTable->m_pfnToType(SptString, pValue);
	return struct__510_to_string(pValue);
}

int string_to_SSP_relevant_target_t(const char* strValue, void* pValue) {
	if (pSimSSP_relevant_target_tVTable != 0 && pSimSSP_relevant_target_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_relevant_target_t rTemp;
		int nResult = pSimSSP_relevant_target_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__510(&(*((SSP_relevant_target_t*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__510(strValue, pValue);
}

int is_SSP_relevant_target_t_allow_double_convertion() {
	if (pSimSSP_relevant_target_tVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_relevant_target_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_relevant_target_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_relevant_target_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_relevant_target_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__510_allow_double_convertion();
}

int SSP_relevant_target_t_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_relevant_target_tVTable != 0) {
		if (pSimSSP_relevant_target_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_relevant_target_tVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_relevant_target_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_relevant_target_tVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_relevant_target_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_relevant_target_tVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_relevant_target_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_relevant_target_tVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__510_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__510_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_relevant_target_t_string(const char* strValue) {
	static SSP_relevant_target_t rTemp;
	return string_to_SSP_relevant_target_t(strValue, &rTemp);
}


/****************************************************************
 ** SSP_Mark_ValidSSPsection
 ****************************************************************/
struct SimTypeVTable* pSimSSP_Mark_ValidSSPsectionVTable;
const char * SSP_Mark_ValidSSPsection_to_string(const void* pValue) {
	if (pSimSSP_Mark_ValidSSPsectionVTable != 0 && pSimSSP_Mark_ValidSSPsectionVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_Mark_ValidSSPsectionVTable->m_pfnToType(SptString, pValue);
	return struct__496_to_string(pValue);
}

int string_to_SSP_Mark_ValidSSPsection(const char* strValue, void* pValue) {
	if (pSimSSP_Mark_ValidSSPsectionVTable != 0 && pSimSSP_Mark_ValidSSPsectionVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_Mark_ValidSSPsection rTemp;
		int nResult = pSimSSP_Mark_ValidSSPsectionVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__496(&(*((SSP_Mark_ValidSSPsection*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__496(strValue, pValue);
}

int is_SSP_Mark_ValidSSPsection_allow_double_convertion() {
	if (pSimSSP_Mark_ValidSSPsectionVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_Mark_ValidSSPsectionVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_Mark_ValidSSPsectionVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_Mark_ValidSSPsectionVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_Mark_ValidSSPsectionVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__496_allow_double_convertion();
}

int SSP_Mark_ValidSSPsection_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_Mark_ValidSSPsectionVTable != 0) {
		if (pSimSSP_Mark_ValidSSPsectionVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_Mark_ValidSSPsectionVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_Mark_ValidSSPsectionVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_Mark_ValidSSPsectionVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_Mark_ValidSSPsectionVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_Mark_ValidSSPsectionVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_Mark_ValidSSPsectionVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_Mark_ValidSSPsectionVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__496_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__496_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_Mark_ValidSSPsection_string(const char* strValue) {
	static SSP_Mark_ValidSSPsection rTemp;
	return string_to_SSP_Mark_ValidSSPsection(strValue, &rTemp);
}


/****************************************************************
 ** SSP_cat_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_cat_tVTable;
const char * SSP_cat_t_to_string(const void* pValue) {
	if (pSimSSP_cat_tVTable != 0 && pSimSSP_cat_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_cat_tVTable->m_pfnToType(SptString, pValue);
	return array__501_to_string(pValue);
}

int string_to_SSP_cat_t(const char* strValue, void* pValue) {
	if (pSimSSP_cat_tVTable != 0 && pSimSSP_cat_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_cat_t rTemp;
		int nResult = pSimSSP_cat_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__501(&(*((SSP_cat_t*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__501(strValue, pValue);
}

int is_SSP_cat_t_allow_double_convertion() {
	if (pSimSSP_cat_tVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_cat_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_cat_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_cat_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_cat_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__501_allow_double_convertion();
}

int SSP_cat_t_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_cat_tVTable != 0) {
		if (pSimSSP_cat_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_cat_tVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_cat_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_cat_tVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_cat_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_cat_tVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_cat_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_cat_tVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__501_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__501_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_cat_t_string(const char* strValue) {
	static SSP_cat_t rTemp;
	return string_to_SSP_cat_t(strValue, &rTemp);
}


/****************************************************************
 ** SSP_matrix_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_matrix_tVTable;
const char * SSP_matrix_t_to_string(const void* pValue) {
	if (pSimSSP_matrix_tVTable != 0 && pSimSSP_matrix_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_matrix_tVTable->m_pfnToType(SptString, pValue);
	return array__515_to_string(pValue);
}

int string_to_SSP_matrix_t(const char* strValue, void* pValue) {
	if (pSimSSP_matrix_tVTable != 0 && pSimSSP_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_matrix_t rTemp;
		int nResult = pSimSSP_matrix_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__515(&(*((SSP_matrix_t*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__515(strValue, pValue);
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
	return is_array__515_allow_double_convertion();
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
	if (_SCSIM_array__515_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__515_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_matrix_t_string(const char* strValue) {
	static SSP_matrix_t rTemp;
	return string_to_SSP_matrix_t(strValue, &rTemp);
}


