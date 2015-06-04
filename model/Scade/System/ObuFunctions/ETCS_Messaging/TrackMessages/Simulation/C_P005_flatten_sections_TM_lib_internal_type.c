
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "C_P005_flatten_sections_TM_lib_internal_type.h"
#include "C_P005_flatten_sections_TM_lib_internal_mapping.h"

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
TypeUtils _SCSIM_struct__179_Utils = {struct__179_to_string,
	check_struct__179_string,
	string_to_struct__179,
	is_struct__179_allow_double_convertion,
	0,
	compare_struct__179_type,
	get_struct__179_signature,
	get_struct__179_filter_utils,
	struct__179_filter_size,
	struct__179_filter_values};
TypeUtils _SCSIM_array__189_Utils = {array__189_to_string,
	check_array__189_string,
	string_to_array__189,
	is_array__189_allow_double_convertion,
	0,
	compare_array__189_type,
	get_array__189_signature,
	get_array__189_filter_utils,
	array__189_filter_size,
	array__189_filter_values};
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
TypeUtils _SCSIM__1_P005_trackside_section_array_TM_Utils = {_1_P005_trackside_section_array_TM_to_string,
	check__1_P005_trackside_section_array_TM_string,
	string_to__1_P005_trackside_section_array_TM,
	is__1_P005_trackside_section_array_TM_allow_double_convertion,
	_1_P005_trackside_section_array_TM_to_double,
	compare__1_P005_trackside_section_array_TM_type,
	get__1_P005_trackside_section_array_TM_signature,
	get__1_P005_trackside_section_array_TM_filter_utils,
	_1_P005_trackside_section_array_TM_filter_size,
	_1_P005_trackside_section_array_TM_filter_values};
TypeUtils _SCSIM_P005_trackside_section_TM_Utils = {P005_trackside_section_TM_to_string,
	check_P005_trackside_section_TM_string,
	string_to_P005_trackside_section_TM,
	is_P005_trackside_section_TM_allow_double_convertion,
	P005_trackside_section_TM_to_double,
	compare_P005_trackside_section_TM_type,
	get_P005_trackside_section_TM_signature,
	get_P005_trackside_section_TM_filter_utils,
	P005_trackside_section_TM_filter_size,
	P005_trackside_section_TM_filter_values};
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
 ** struct__179
 ****************************************************************/
static void Fill_struct__179_StructSimValue(struct__179 * pStruct, StructSimValue * pValues) {
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

const char * struct__179_to_string(const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__179_StructSimValue(((struct__179*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 7);
}

int string_to_struct__179(const char* strValue, void* pValue) {
	static struct__179 rTemp;
	int nResult = 0;
	static StructSimValue values[7];
	kcg_copy_struct__179(&(rTemp), &(*((struct__179*)pValue)));
	Fill_struct__179_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 7);
	if (nResult == 1)
		kcg_copy_struct__179(&(*((struct__179*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__179_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__179_StructSimValue((struct__179*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 7);
}


int is_struct__179_allow_double_convertion() {
	return 0;
}


const char * get_struct__179_signature() {
	static StructSimValue values[7];
	Fill_struct__179_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 7);
}

FilterUtils get_struct__179_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[7];
	Fill_struct__179_StructSimValue((struct__179*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 7, strFilter);
}

const char * struct__179_filter_values[7] = {"D_LINK", "Q_NEWCOUNTRY", "NID_C", "NID_BG", "Q_LINKORIENTATION", "Q_LINKREACTION", "Q_LOCACC"};
int check_struct__179_string(const char* strValue) {
	static struct__179 rTemp;
	return string_to_struct__179(strValue, &rTemp);
}


/****************************************************************
 ** array__189
 ****************************************************************/
void* array__189_projection(void** pValues, int nIndex) {
	return &((*(array__189*)pValues)[nIndex]);
}

const char * array__189_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__179_to_string, 32, array__189_projection);
}

int compare_array__189_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__179_type , 32, array__189_projection);
}

int is_array__189_allow_double_convertion() {
	return 0;
}

int string_to_array__189(const char* strValue, void* pValue) {
	static array__189 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__179, 32, array__189_projection);
	if (nResult == 1)
		kcg_copy_array__189(&(*((array__189*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__189_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__179_signature, 32);
}

FilterUtils get_array__189_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__179_Utils, strFilter, (void**)pValue, 32, array__189_projection);
}

int check_array__189_string(const char* strValue) {
	static array__189 rTemp;
	return string_to_array__189(strValue, &rTemp);
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
 ** _1_P005_trackside_section_array_TM
 ****************************************************************/
struct SimTypeVTable* pSim_1_P005_trackside_section_array_TMVTable;
const char * _1_P005_trackside_section_array_TM_to_string(const void* pValue) {
	if (pSim_1_P005_trackside_section_array_TMVTable != 0 && pSim_1_P005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSim_1_P005_trackside_section_array_TMVTable->m_pfnToType(SptString, pValue);
	return array_int_7_to_string(pValue);
}

int string_to__1_P005_trackside_section_array_TM(const char* strValue, void* pValue) {
	if (pSim_1_P005_trackside_section_array_TMVTable != 0 && pSim_1_P005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static _1_P005_trackside_section_array_TM rTemp;
		int nResult = pSim_1_P005_trackside_section_array_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_7(&(*((_1_P005_trackside_section_array_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_7(strValue, pValue);
}

int is__1_P005_trackside_section_array_TM_allow_double_convertion() {
	if (pSim_1_P005_trackside_section_array_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSim_1_P005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSim_1_P005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSim_1_P005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSim_1_P005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_7_allow_double_convertion();
}

int _1_P005_trackside_section_array_TM_to_double(double * nValue, const void* pValue) {
	if (pSim_1_P005_trackside_section_array_TMVTable != 0) {
		if (pSim_1_P005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSim_1_P005_trackside_section_array_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSim_1_P005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSim_1_P005_trackside_section_array_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSim_1_P005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSim_1_P005_trackside_section_array_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSim_1_P005_trackside_section_array_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSim_1_P005_trackside_section_array_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_7_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_7_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check__1_P005_trackside_section_array_TM_string(const char* strValue) {
	static _1_P005_trackside_section_array_TM rTemp;
	return string_to__1_P005_trackside_section_array_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_trackside_section_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_trackside_section_TMVTable;
const char * P005_trackside_section_TM_to_string(const void* pValue) {
	if (pSimP005_trackside_section_TMVTable != 0 && pSimP005_trackside_section_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_trackside_section_TMVTable->m_pfnToType(SptString, pValue);
	return struct__179_to_string(pValue);
}

int string_to_P005_trackside_section_TM(const char* strValue, void* pValue) {
	if (pSimP005_trackside_section_TMVTable != 0 && pSimP005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_trackside_section_TM rTemp;
		int nResult = pSimP005_trackside_section_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__179(&(*((P005_trackside_section_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__179(strValue, pValue);
}

int is_P005_trackside_section_TM_allow_double_convertion() {
	if (pSimP005_trackside_section_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__179_allow_double_convertion();
}

int P005_trackside_section_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_trackside_section_TMVTable != 0) {
		if (pSimP005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_trackside_section_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_trackside_section_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_trackside_section_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_trackside_section_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_trackside_section_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__179_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__179_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_trackside_section_TM_string(const char* strValue) {
	static P005_trackside_section_TM rTemp;
	return string_to_P005_trackside_section_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_OBU_sectionlist_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_OBU_sectionlist_T_TMVTable;
const char * P005_OBU_sectionlist_T_TM_to_string(const void* pValue) {
	if (pSimP005_OBU_sectionlist_T_TMVTable != 0 && pSimP005_OBU_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_OBU_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue);
	return array__189_to_string(pValue);
}

int string_to_P005_OBU_sectionlist_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_OBU_sectionlist_T_TMVTable != 0 && pSimP005_OBU_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_OBU_sectionlist_T_TM rTemp;
		int nResult = pSimP005_OBU_sectionlist_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__189(&(*((P005_OBU_sectionlist_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__189(strValue, pValue);
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
	return is_array__189_allow_double_convertion();
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
	if (_SCSIM_array__189_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__189_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_OBU_sectionlist_T_TM_string(const char* strValue) {
	static P005_OBU_sectionlist_T_TM rTemp;
	return string_to_P005_OBU_sectionlist_T_TM(strValue, &rTemp);
}


