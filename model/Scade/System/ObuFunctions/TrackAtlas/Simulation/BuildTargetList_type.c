
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "BuildTargetList_type.h"
#include "BuildTargetList_mapping.h"

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
TypeUtils _SCSIM_array_int_8_11_Utils = {array_int_8_11_to_string,
	check_array_int_8_11_string,
	string_to_array_int_8_11,
	is_array_int_8_11_allow_double_convertion,
	0,
	compare_array_int_8_11_type,
	get_array_int_8_11_signature,
	get_array_int_8_11_filter_utils,
	array_int_8_11_filter_size,
	array_int_8_11_filter_values};
TypeUtils _SCSIM_struct__346_Utils = {struct__346_to_string,
	check_struct__346_string,
	string_to_struct__346,
	is_struct__346_allow_double_convertion,
	0,
	compare_struct__346_type,
	get_struct__346_signature,
	get_struct__346_filter_utils,
	struct__346_filter_size,
	struct__346_filter_values};
TypeUtils _SCSIM_struct__352_Utils = {struct__352_to_string,
	check_struct__352_string,
	string_to_struct__352,
	is_struct__352_allow_double_convertion,
	0,
	compare_struct__352_type,
	get_struct__352_signature,
	get_struct__352_filter_utils,
	struct__352_filter_size,
	struct__352_filter_values};
TypeUtils _SCSIM_array__357_Utils = {array__357_to_string,
	check_array__357_string,
	string_to_array__357,
	is_array__357_allow_double_convertion,
	0,
	compare_array__357_type,
	get_array__357_signature,
	get_array__357_filter_utils,
	array__357_filter_size,
	array__357_filter_values};
TypeUtils _SCSIM_array__360_Utils = {array__360_to_string,
	check_array__360_string,
	string_to_array__360,
	is_array__360_allow_double_convertion,
	0,
	compare_array__360_type,
	get_array__360_signature,
	get_array__360_filter_utils,
	array__360_filter_size,
	array__360_filter_values};
TypeUtils _SCSIM_array__363_Utils = {array__363_to_string,
	check_array__363_string,
	string_to_array__363,
	is_array__363_allow_double_convertion,
	0,
	compare_array__363_type,
	get_array__363_signature,
	get_array__363_filter_utils,
	array__363_filter_size,
	array__363_filter_values};
TypeUtils _SCSIM_SSP_target_t_Utils = {SSP_target_t_to_string,
	check_SSP_target_t_string,
	string_to_SSP_target_t,
	is_SSP_target_t_allow_double_convertion,
	SSP_target_t_to_double,
	compare_SSP_target_t_type,
	get_SSP_target_t_signature,
	get_SSP_target_t_filter_utils,
	SSP_target_t_filter_size,
	SSP_target_t_filter_values};
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
TypeUtils _SCSIM_SSP_t_indexed_trgt_t_Utils = {SSP_t_indexed_trgt_t_to_string,
	check_SSP_t_indexed_trgt_t_string,
	string_to_SSP_t_indexed_trgt_t,
	is_SSP_t_indexed_trgt_t_allow_double_convertion,
	SSP_t_indexed_trgt_t_to_double,
	compare_SSP_t_indexed_trgt_t_type,
	get_SSP_t_indexed_trgt_t_signature,
	get_SSP_t_indexed_trgt_t_filter_utils,
	SSP_t_indexed_trgt_t_filter_size,
	SSP_t_indexed_trgt_t_filter_values};
TypeUtils _SCSIM_SSP_t_cat_t_Utils = {SSP_t_cat_t_to_string,
	check_SSP_t_cat_t_string,
	string_to_SSP_t_cat_t,
	is_SSP_t_cat_t_allow_double_convertion,
	SSP_t_cat_t_to_double,
	compare_SSP_t_cat_t_type,
	get_SSP_t_cat_t_signature,
	get_SSP_t_cat_t_filter_utils,
	SSP_t_cat_t_filter_size,
	SSP_t_cat_t_filter_values};
TypeUtils _SCSIM_SSP_t_matrix_t_Utils = {SSP_t_matrix_t_to_string,
	check_SSP_t_matrix_t_string,
	string_to_SSP_t_matrix_t,
	is_SSP_t_matrix_t_allow_double_convertion,
	SSP_t_matrix_t_to_double,
	compare_SSP_t_matrix_t_type,
	get_SSP_t_matrix_t_signature,
	get_SSP_t_matrix_t_filter_utils,
	SSP_t_matrix_t_filter_size,
	SSP_t_matrix_t_filter_values};
TypeUtils _SCSIM_SSP_t_indexed_targets_list_t_Utils = {SSP_t_indexed_targets_list_t_to_string,
	check_SSP_t_indexed_targets_list_t_string,
	string_to_SSP_t_indexed_targets_list_t,
	is_SSP_t_indexed_targets_list_t_allow_double_convertion,
	SSP_t_indexed_targets_list_t_to_double,
	compare_SSP_t_indexed_targets_list_t_type,
	get_SSP_t_indexed_targets_list_t_signature,
	get_SSP_t_indexed_targets_list_t_filter_utils,
	SSP_t_indexed_targets_list_t_filter_size,
	SSP_t_indexed_targets_list_t_filter_values};
TypeUtils _SCSIM_SSP_t_indexed_matrix_element_Utils = {SSP_t_indexed_matrix_element_to_string,
	check_SSP_t_indexed_matrix_element_string,
	string_to_SSP_t_indexed_matrix_element,
	is_SSP_t_indexed_matrix_element_allow_double_convertion,
	SSP_t_indexed_matrix_element_to_double,
	compare_SSP_t_indexed_matrix_element_type,
	get_SSP_t_indexed_matrix_element_signature,
	get_SSP_t_indexed_matrix_element_filter_utils,
	SSP_t_indexed_matrix_element_filter_size,
	SSP_t_indexed_matrix_element_filter_values};
TypeUtils _SCSIM_SSP_t_list_t_Utils = {SSP_t_list_t_to_string,
	check_SSP_t_list_t_string,
	string_to_SSP_t_list_t,
	is_SSP_t_list_t_allow_double_convertion,
	SSP_t_list_t_to_double,
	compare_SSP_t_list_t_type,
	get_SSP_t_list_t_signature,
	get_SSP_t_list_t_filter_utils,
	SSP_t_list_t_filter_size,
	SSP_t_list_t_filter_values};

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
 ** array_int_8_11
 ****************************************************************/
void* array_int_8_11_projection(void** pValues, int nIndex) {
	return &((*(array_int_8_11*)pValues)[nIndex]);
}

const char * array_int_8_11_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_int_8_to_string, 11, array_int_8_11_projection);
}

int compare_array_int_8_11_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_int_8_type , 11, array_int_8_11_projection);
}

int is_array_int_8_11_allow_double_convertion() {
	return 0;
}

int string_to_array_int_8_11(const char* strValue, void* pValue) {
	static array_int_8_11 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_int_8, 11, array_int_8_11_projection);
	if (nResult == 1)
		kcg_copy_array_int_8_11(&(*((array_int_8_11*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_8_11_signature() {
	return pSimulator->m_pfnArraySignature(get_array_int_8_signature, 11);
}

FilterUtils get_array_int_8_11_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_int_8_Utils, strFilter, (void**)pValue, 11, array_int_8_11_projection);
}

int check_array_int_8_11_string(const char* strValue) {
	static array_int_8_11 rTemp;
	return string_to_array_int_8_11(strValue, &rTemp);
}


/****************************************************************
 ** struct__346
 ****************************************************************/
static void Fill_struct__346_StructSimValue(struct__346 * pStruct, StructSimValue * pValues) {
	/*Category_Index label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->Category_Index) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "Category_Index";
	/*Pos_Index label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Pos_Index) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "Pos_Index";
	/*Loc label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->Loc) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "Loc";
}

const char * struct__346_to_string(const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__346_StructSimValue(((struct__346*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 3);
}

int string_to_struct__346(const char* strValue, void* pValue) {
	static struct__346 rTemp;
	int nResult = 0;
	static StructSimValue values[3];
	kcg_copy_struct__346(&(rTemp), &(*((struct__346*)pValue)));
	Fill_struct__346_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 3);
	if (nResult == 1)
		kcg_copy_struct__346(&(*((struct__346*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__346_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__346_StructSimValue((struct__346*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 3);
}


int is_struct__346_allow_double_convertion() {
	return 0;
}


const char * get_struct__346_signature() {
	static StructSimValue values[3];
	Fill_struct__346_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 3);
}

FilterUtils get_struct__346_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[3];
	Fill_struct__346_StructSimValue((struct__346*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 3, strFilter);
}

const char * struct__346_filter_values[3] = {"Category_Index", "Pos_Index", "Loc"};
int check_struct__346_string(const char* strValue) {
	static struct__346 rTemp;
	return string_to_struct__346(strValue, &rTemp);
}


/****************************************************************
 ** struct__352
 ****************************************************************/
static void Fill_struct__352_StructSimValue(struct__352 * pStruct, StructSimValue * pValues) {
	/*Index label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->Index) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "Index";
	/*Loc label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Loc) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "Loc";
}

const char * struct__352_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__352_StructSimValue(((struct__352*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__352(const char* strValue, void* pValue) {
	static struct__352 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__352(&(rTemp), &(*((struct__352*)pValue)));
	Fill_struct__352_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__352(&(*((struct__352*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__352_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__352_StructSimValue((struct__352*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__352_allow_double_convertion() {
	return 0;
}


const char * get_struct__352_signature() {
	static StructSimValue values[2];
	Fill_struct__352_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__352_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__352_StructSimValue((struct__352*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__352_filter_values[2] = {"Index", "Loc"};
int check_struct__352_string(const char* strValue) {
	static struct__352 rTemp;
	return string_to_struct__352(strValue, &rTemp);
}


/****************************************************************
 ** array__357
 ****************************************************************/
void* array__357_projection(void** pValues, int nIndex) {
	return &((*(array__357*)pValues)[nIndex]);
}

const char * array__357_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__352_to_string, 11, array__357_projection);
}

int compare_array__357_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__352_type , 11, array__357_projection);
}

int is_array__357_allow_double_convertion() {
	return 0;
}

int string_to_array__357(const char* strValue, void* pValue) {
	static array__357 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__352, 11, array__357_projection);
	if (nResult == 1)
		kcg_copy_array__357(&(*((array__357*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__357_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__352_signature, 11);
}

FilterUtils get_array__357_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__352_Utils, strFilter, (void**)pValue, 11, array__357_projection);
}

int check_array__357_string(const char* strValue) {
	static array__357 rTemp;
	return string_to_array__357(strValue, &rTemp);
}


/****************************************************************
 ** array__360
 ****************************************************************/
void* array__360_projection(void** pValues, int nIndex) {
	return &((*(array__360*)pValues)[nIndex]);
}

const char * array__360_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__346_to_string, 33, array__360_projection);
}

int compare_array__360_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__346_type , 33, array__360_projection);
}

int is_array__360_allow_double_convertion() {
	return 0;
}

int string_to_array__360(const char* strValue, void* pValue) {
	static array__360 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__346, 33, array__360_projection);
	if (nResult == 1)
		kcg_copy_array__360(&(*((array__360*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__360_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__346_signature, 33);
}

FilterUtils get_array__360_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__346_Utils, strFilter, (void**)pValue, 33, array__360_projection);
}

int check_array__360_string(const char* strValue) {
	static array__360 rTemp;
	return string_to_array__360(strValue, &rTemp);
}


/****************************************************************
 ** array__363
 ****************************************************************/
void* array__363_projection(void** pValues, int nIndex) {
	return &((*(array__363*)pValues)[nIndex]);
}

const char * array__363_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__346_to_string, 11, array__363_projection);
}

int compare_array__363_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__346_type , 11, array__363_projection);
}

int is_array__363_allow_double_convertion() {
	return 0;
}

int string_to_array__363(const char* strValue, void* pValue) {
	static array__363 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__346, 11, array__363_projection);
	if (nResult == 1)
		kcg_copy_array__363(&(*((array__363*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__363_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__346_signature, 11);
}

FilterUtils get_array__363_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__346_Utils, strFilter, (void**)pValue, 11, array__363_projection);
}

int check_array__363_string(const char* strValue) {
	static array__363 rTemp;
	return string_to_array__363(strValue, &rTemp);
}


/****************************************************************
 ** SSP_target_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_target_tVTable;
const char * SSP_target_t_to_string(const void* pValue) {
	if (pSimSSP_target_tVTable != 0 && pSimSSP_target_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_target_tVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_SSP_target_t(const char* strValue, void* pValue) {
	if (pSimSSP_target_tVTable != 0 && pSimSSP_target_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_target_t rTemp;
		int nResult = pSimSSP_target_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((SSP_target_t*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_SSP_target_t_allow_double_convertion() {
	if (pSimSSP_target_tVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_target_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_target_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_target_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_target_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int SSP_target_t_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_target_tVTable != 0) {
		if (pSimSSP_target_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_target_tVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_target_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_target_tVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_target_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_target_tVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_target_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_target_tVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_target_t_string(const char* strValue) {
	static SSP_target_t rTemp;
	return string_to_SSP_target_t(strValue, &rTemp);
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
 ** SSP_t_indexed_trgt_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_t_indexed_trgt_tVTable;
const char * SSP_t_indexed_trgt_t_to_string(const void* pValue) {
	if (pSimSSP_t_indexed_trgt_tVTable != 0 && pSimSSP_t_indexed_trgt_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_t_indexed_trgt_tVTable->m_pfnToType(SptString, pValue);
	return struct__352_to_string(pValue);
}

int string_to_SSP_t_indexed_trgt_t(const char* strValue, void* pValue) {
	if (pSimSSP_t_indexed_trgt_tVTable != 0 && pSimSSP_t_indexed_trgt_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_t_indexed_trgt_t rTemp;
		int nResult = pSimSSP_t_indexed_trgt_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__352(&(*((SSP_t_indexed_trgt_t*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__352(strValue, pValue);
}

int is_SSP_t_indexed_trgt_t_allow_double_convertion() {
	if (pSimSSP_t_indexed_trgt_tVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_t_indexed_trgt_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_t_indexed_trgt_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_t_indexed_trgt_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_t_indexed_trgt_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__352_allow_double_convertion();
}

int SSP_t_indexed_trgt_t_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_t_indexed_trgt_tVTable != 0) {
		if (pSimSSP_t_indexed_trgt_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_t_indexed_trgt_tVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_t_indexed_trgt_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_t_indexed_trgt_tVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_t_indexed_trgt_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_t_indexed_trgt_tVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_t_indexed_trgt_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_t_indexed_trgt_tVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__352_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__352_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_t_indexed_trgt_t_string(const char* strValue) {
	static SSP_t_indexed_trgt_t rTemp;
	return string_to_SSP_t_indexed_trgt_t(strValue, &rTemp);
}


/****************************************************************
 ** SSP_t_cat_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_t_cat_tVTable;
const char * SSP_t_cat_t_to_string(const void* pValue) {
	if (pSimSSP_t_cat_tVTable != 0 && pSimSSP_t_cat_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_t_cat_tVTable->m_pfnToType(SptString, pValue);
	return array_int_8_to_string(pValue);
}

int string_to_SSP_t_cat_t(const char* strValue, void* pValue) {
	if (pSimSSP_t_cat_tVTable != 0 && pSimSSP_t_cat_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_t_cat_t rTemp;
		int nResult = pSimSSP_t_cat_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_8(&(*((SSP_t_cat_t*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_8(strValue, pValue);
}

int is_SSP_t_cat_t_allow_double_convertion() {
	if (pSimSSP_t_cat_tVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_t_cat_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_t_cat_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_t_cat_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_t_cat_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_8_allow_double_convertion();
}

int SSP_t_cat_t_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_t_cat_tVTable != 0) {
		if (pSimSSP_t_cat_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_t_cat_tVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_t_cat_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_t_cat_tVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_t_cat_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_t_cat_tVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_t_cat_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_t_cat_tVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_8_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_8_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_t_cat_t_string(const char* strValue) {
	static SSP_t_cat_t rTemp;
	return string_to_SSP_t_cat_t(strValue, &rTemp);
}


/****************************************************************
 ** SSP_t_matrix_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_t_matrix_tVTable;
const char * SSP_t_matrix_t_to_string(const void* pValue) {
	if (pSimSSP_t_matrix_tVTable != 0 && pSimSSP_t_matrix_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_t_matrix_tVTable->m_pfnToType(SptString, pValue);
	return array_int_8_11_to_string(pValue);
}

int string_to_SSP_t_matrix_t(const char* strValue, void* pValue) {
	if (pSimSSP_t_matrix_tVTable != 0 && pSimSSP_t_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_t_matrix_t rTemp;
		int nResult = pSimSSP_t_matrix_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_8_11(&(*((SSP_t_matrix_t*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_8_11(strValue, pValue);
}

int is_SSP_t_matrix_t_allow_double_convertion() {
	if (pSimSSP_t_matrix_tVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_t_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_t_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_t_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_t_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_8_11_allow_double_convertion();
}

int SSP_t_matrix_t_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_t_matrix_tVTable != 0) {
		if (pSimSSP_t_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_t_matrix_tVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_t_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_t_matrix_tVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_t_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_t_matrix_tVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_t_matrix_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_t_matrix_tVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_8_11_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_8_11_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_t_matrix_t_string(const char* strValue) {
	static SSP_t_matrix_t rTemp;
	return string_to_SSP_t_matrix_t(strValue, &rTemp);
}


/****************************************************************
 ** SSP_t_indexed_targets_list_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_t_indexed_targets_list_tVTable;
const char * SSP_t_indexed_targets_list_t_to_string(const void* pValue) {
	if (pSimSSP_t_indexed_targets_list_tVTable != 0 && pSimSSP_t_indexed_targets_list_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_t_indexed_targets_list_tVTable->m_pfnToType(SptString, pValue);
	return array__357_to_string(pValue);
}

int string_to_SSP_t_indexed_targets_list_t(const char* strValue, void* pValue) {
	if (pSimSSP_t_indexed_targets_list_tVTable != 0 && pSimSSP_t_indexed_targets_list_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_t_indexed_targets_list_t rTemp;
		int nResult = pSimSSP_t_indexed_targets_list_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__357(&(*((SSP_t_indexed_targets_list_t*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__357(strValue, pValue);
}

int is_SSP_t_indexed_targets_list_t_allow_double_convertion() {
	if (pSimSSP_t_indexed_targets_list_tVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_t_indexed_targets_list_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_t_indexed_targets_list_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_t_indexed_targets_list_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_t_indexed_targets_list_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__357_allow_double_convertion();
}

int SSP_t_indexed_targets_list_t_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_t_indexed_targets_list_tVTable != 0) {
		if (pSimSSP_t_indexed_targets_list_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_t_indexed_targets_list_tVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_t_indexed_targets_list_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_t_indexed_targets_list_tVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_t_indexed_targets_list_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_t_indexed_targets_list_tVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_t_indexed_targets_list_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_t_indexed_targets_list_tVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__357_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__357_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_t_indexed_targets_list_t_string(const char* strValue) {
	static SSP_t_indexed_targets_list_t rTemp;
	return string_to_SSP_t_indexed_targets_list_t(strValue, &rTemp);
}


/****************************************************************
 ** SSP_t_indexed_matrix_element
 ****************************************************************/
struct SimTypeVTable* pSimSSP_t_indexed_matrix_elementVTable;
const char * SSP_t_indexed_matrix_element_to_string(const void* pValue) {
	if (pSimSSP_t_indexed_matrix_elementVTable != 0 && pSimSSP_t_indexed_matrix_elementVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_t_indexed_matrix_elementVTable->m_pfnToType(SptString, pValue);
	return struct__346_to_string(pValue);
}

int string_to_SSP_t_indexed_matrix_element(const char* strValue, void* pValue) {
	if (pSimSSP_t_indexed_matrix_elementVTable != 0 && pSimSSP_t_indexed_matrix_elementVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_t_indexed_matrix_element rTemp;
		int nResult = pSimSSP_t_indexed_matrix_elementVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__346(&(*((SSP_t_indexed_matrix_element*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__346(strValue, pValue);
}

int is_SSP_t_indexed_matrix_element_allow_double_convertion() {
	if (pSimSSP_t_indexed_matrix_elementVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_t_indexed_matrix_elementVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_t_indexed_matrix_elementVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_t_indexed_matrix_elementVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_t_indexed_matrix_elementVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__346_allow_double_convertion();
}

int SSP_t_indexed_matrix_element_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_t_indexed_matrix_elementVTable != 0) {
		if (pSimSSP_t_indexed_matrix_elementVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_t_indexed_matrix_elementVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_t_indexed_matrix_elementVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_t_indexed_matrix_elementVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_t_indexed_matrix_elementVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_t_indexed_matrix_elementVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_t_indexed_matrix_elementVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_t_indexed_matrix_elementVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__346_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__346_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_t_indexed_matrix_element_string(const char* strValue) {
	static SSP_t_indexed_matrix_element rTemp;
	return string_to_SSP_t_indexed_matrix_element(strValue, &rTemp);
}


/****************************************************************
 ** SSP_t_list_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_t_list_tVTable;
const char * SSP_t_list_t_to_string(const void* pValue) {
	if (pSimSSP_t_list_tVTable != 0 && pSimSSP_t_list_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_t_list_tVTable->m_pfnToType(SptString, pValue);
	return array__360_to_string(pValue);
}

int string_to_SSP_t_list_t(const char* strValue, void* pValue) {
	if (pSimSSP_t_list_tVTable != 0 && pSimSSP_t_list_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_t_list_t rTemp;
		int nResult = pSimSSP_t_list_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__360(&(*((SSP_t_list_t*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__360(strValue, pValue);
}

int is_SSP_t_list_t_allow_double_convertion() {
	if (pSimSSP_t_list_tVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSSP_t_list_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSSP_t_list_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSSP_t_list_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSSP_t_list_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__360_allow_double_convertion();
}

int SSP_t_list_t_to_double(double * nValue, const void* pValue) {
	if (pSimSSP_t_list_tVTable != 0) {
		if (pSimSSP_t_list_tVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSSP_t_list_tVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSSP_t_list_tVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSSP_t_list_tVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSSP_t_list_tVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSSP_t_list_tVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSSP_t_list_tVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSSP_t_list_tVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__360_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__360_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_t_list_t_string(const char* strValue) {
	static SSP_t_list_t rTemp;
	return string_to_SSP_t_list_t(strValue, &rTemp);
}


