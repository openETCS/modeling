
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "C_P005_fs_flatten_array_TM_lib_internal_type.h"
#include "C_P005_fs_flatten_array_TM_lib_internal_mapping.h"

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


