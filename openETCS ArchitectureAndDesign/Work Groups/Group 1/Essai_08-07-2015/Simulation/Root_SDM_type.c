
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "Root_SDM_type.h"
#include "Root_SDM_mapping.h"

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
TypeUtils _SCSIM_struct__1591_Utils = {struct__1591_to_string,
	check_struct__1591_string,
	string_to_struct__1591,
	is_struct__1591_allow_double_convertion,
	0,
	compare_struct__1591_type,
	get_struct__1591_signature,
	get_struct__1591_filter_utils,
	struct__1591_filter_size,
	struct__1591_filter_values};
TypeUtils _SCSIM_struct__1596_Utils = {struct__1596_to_string,
	check_struct__1596_string,
	string_to_struct__1596,
	is_struct__1596_allow_double_convertion,
	0,
	compare_struct__1596_type,
	get_struct__1596_signature,
	get_struct__1596_filter_utils,
	struct__1596_filter_size,
	struct__1596_filter_values};
TypeUtils _SCSIM_struct__1601_Utils = {struct__1601_to_string,
	check_struct__1601_string,
	string_to_struct__1601,
	is_struct__1601_allow_double_convertion,
	0,
	compare_struct__1601_type,
	get_struct__1601_signature,
	get_struct__1601_filter_utils,
	struct__1601_filter_size,
	struct__1601_filter_values};
TypeUtils _SCSIM_struct__1606_Utils = {struct__1606_to_string,
	check_struct__1606_string,
	string_to_struct__1606,
	is_struct__1606_allow_double_convertion,
	0,
	compare_struct__1606_type,
	get_struct__1606_signature,
	get_struct__1606_filter_utils,
	struct__1606_filter_size,
	struct__1606_filter_values};
TypeUtils _SCSIM_array__1611_Utils = {array__1611_to_string,
	check_array__1611_string,
	string_to_array__1611,
	is_array__1611_allow_double_convertion,
	0,
	compare_array__1611_type,
	get_array__1611_signature,
	get_array__1611_filter_utils,
	array__1611_filter_size,
	array__1611_filter_values};
TypeUtils _SCSIM_array__1614_Utils = {array__1614_to_string,
	check_array__1614_string,
	string_to_array__1614,
	is_array__1614_allow_double_convertion,
	0,
	compare_array__1614_type,
	get_array__1614_signature,
	get_array__1614_filter_utils,
	array__1614_filter_size,
	array__1614_filter_values};
TypeUtils _SCSIM_array_real_8_Utils = {array_real_8_to_string,
	check_array_real_8_string,
	string_to_array_real_8,
	is_array_real_8_allow_double_convertion,
	0,
	compare_array_real_8_type,
	get_array_real_8_signature,
	get_array_real_8_filter_utils,
	array_real_8_filter_size,
	array_real_8_filter_values};
TypeUtils _SCSIM_array_real_25_Utils = {array_real_25_to_string,
	check_array_real_25_string,
	string_to_array_real_25,
	is_array_real_25_allow_double_convertion,
	0,
	compare_array_real_25_type,
	get_array_real_25_signature,
	get_array_real_25_filter_utils,
	array_real_25_filter_size,
	array_real_25_filter_values};
TypeUtils _SCSIM_array_real_1_Utils = {array_real_1_to_string,
	check_array_real_1_string,
	string_to_array_real_1,
	is_array_real_1_allow_double_convertion,
	0,
	compare_array_real_1_type,
	get_array_real_1_signature,
	get_array_real_1_filter_utils,
	array_real_1_filter_size,
	array_real_1_filter_values};
TypeUtils _SCSIM_array_real_24_Utils = {array_real_24_to_string,
	check_array_real_24_string,
	string_to_array_real_24,
	is_array_real_24_allow_double_convertion,
	0,
	compare_array_real_24_type,
	get_array_real_24_signature,
	get_array_real_24_filter_utils,
	array_real_24_filter_size,
	array_real_24_filter_values};
TypeUtils _SCSIM_array__1629_Utils = {array__1629_to_string,
	check_array__1629_string,
	string_to_array__1629,
	is_array__1629_allow_double_convertion,
	0,
	compare_array__1629_type,
	get_array__1629_signature,
	get_array__1629_filter_utils,
	array__1629_filter_size,
	array__1629_filter_values};
TypeUtils _SCSIM_array_real_2_Utils = {array_real_2_to_string,
	check_array_real_2_string,
	string_to_array_real_2,
	is_array_real_2_allow_double_convertion,
	0,
	compare_array_real_2_type,
	get_array_real_2_signature,
	get_array_real_2_filter_utils,
	array_real_2_filter_size,
	array_real_2_filter_values};
TypeUtils _SCSIM_array__1635_Utils = {array__1635_to_string,
	check_array__1635_string,
	string_to_array__1635,
	is_array__1635_allow_double_convertion,
	0,
	compare_array__1635_type,
	get_array__1635_signature,
	get_array__1635_filter_utils,
	array__1635_filter_size,
	array__1635_filter_values};
TypeUtils _SCSIM_array__1638_Utils = {array__1638_to_string,
	check_array__1638_string,
	string_to_array__1638,
	is_array__1638_allow_double_convertion,
	0,
	compare_array__1638_type,
	get_array__1638_signature,
	get_array__1638_filter_utils,
	array__1638_filter_size,
	array__1638_filter_values};
TypeUtils _SCSIM_array__1641_Utils = {array__1641_to_string,
	check_array__1641_string,
	string_to_array__1641,
	is_array__1641_allow_double_convertion,
	0,
	compare_array__1641_type,
	get_array__1641_signature,
	get_array__1641_filter_utils,
	array__1641_filter_size,
	array__1641_filter_values};
TypeUtils _SCSIM_array_bool_25_Utils = {array_bool_25_to_string,
	check_array_bool_25_string,
	string_to_array_bool_25,
	is_array_bool_25_allow_double_convertion,
	0,
	compare_array_bool_25_type,
	get_array_bool_25_signature,
	get_array_bool_25_filter_utils,
	array_bool_25_filter_size,
	array_bool_25_filter_values};
TypeUtils _SCSIM_array__1647_Utils = {array__1647_to_string,
	check_array__1647_string,
	string_to_array__1647,
	is_array__1647_allow_double_convertion,
	0,
	compare_array__1647_type,
	get_array__1647_signature,
	get_array__1647_filter_utils,
	array__1647_filter_size,
	array__1647_filter_values};
TypeUtils _SCSIM_array_bool_1_Utils = {array_bool_1_to_string,
	check_array_bool_1_string,
	string_to_array_bool_1,
	is_array_bool_1_allow_double_convertion,
	0,
	compare_array_bool_1_type,
	get_array_bool_1_signature,
	get_array_bool_1_filter_utils,
	array_bool_1_filter_size,
	array_bool_1_filter_values};
TypeUtils _SCSIM_array_bool_24_Utils = {array_bool_24_to_string,
	check_array_bool_24_string,
	string_to_array_bool_24,
	is_array_bool_24_allow_double_convertion,
	0,
	compare_array_bool_24_type,
	get_array_bool_24_signature,
	get_array_bool_24_filter_utils,
	array_bool_24_filter_size,
	array_bool_24_filter_values};
TypeUtils _SCSIM_array__1656_Utils = {array__1656_to_string,
	check_array__1656_string,
	string_to_array__1656,
	is_array__1656_allow_double_convertion,
	0,
	compare_array__1656_type,
	get_array__1656_signature,
	get_array__1656_filter_utils,
	array__1656_filter_size,
	array__1656_filter_values};
TypeUtils _SCSIM_array__1659_Utils = {array__1659_to_string,
	check_array__1659_string,
	string_to_array__1659,
	is_array__1659_allow_double_convertion,
	0,
	compare_array__1659_type,
	get_array__1659_signature,
	get_array__1659_filter_utils,
	array__1659_filter_size,
	array__1659_filter_values};
TypeUtils _SCSIM_TY_DistValue_Utils = {TY_DistValue_to_string,
	check_TY_DistValue_string,
	string_to_TY_DistValue,
	is_TY_DistValue_allow_double_convertion,
	TY_DistValue_to_double,
	compare_TY_DistValue_type,
	get_TY_DistValue_signature,
	get_TY_DistValue_filter_utils,
	TY_DistValue_filter_size,
	TY_DistValue_filter_values};
TypeUtils _SCSIM_TY_Adh_Utils = {TY_Adh_to_string,
	check_TY_Adh_string,
	string_to_TY_Adh,
	is_TY_Adh_allow_double_convertion,
	TY_Adh_to_double,
	compare_TY_Adh_type,
	get_TY_Adh_signature,
	get_TY_Adh_filter_utils,
	TY_Adh_filter_size,
	TY_Adh_filter_values};
TypeUtils _SCSIM_TY_EB_Type_Utils = {TY_EB_Type_to_string,
	check_TY_EB_Type_string,
	string_to_TY_EB_Type,
	is_TY_EB_Type_allow_double_convertion,
	TY_EB_Type_to_double,
	compare_TY_EB_Type_type,
	get_TY_EB_Type_signature,
	get_TY_EB_Type_filter_utils,
	TY_EB_Type_filter_size,
	TY_EB_Type_filter_values};
TypeUtils _SCSIM_TY_SizePos_Utils = {TY_SizePos_to_string,
	check_TY_SizePos_string,
	string_to_TY_SizePos,
	is_TY_SizePos_allow_double_convertion,
	TY_SizePos_to_double,
	compare_TY_SizePos_type,
	get_TY_SizePos_signature,
	get_TY_SizePos_filter_utils,
	TY_SizePos_filter_size,
	TY_SizePos_filter_values};

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
 ** struct__1591
 ****************************************************************/
static void Fill_struct__1591_StructSimValue(struct__1591 * pStruct, StructSimValue * pValues) {
	/*Size label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->Size) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[0].m_pszName = "Size";
	/*Pos label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Pos) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[1].m_pszName = "Pos";
}

const char * struct__1591_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1591_StructSimValue(((struct__1591*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__1591(const char* strValue, void* pValue) {
	static struct__1591 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__1591(&(rTemp), &(*((struct__1591*)pValue)));
	Fill_struct__1591_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__1591(&(*((struct__1591*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1591_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1591_StructSimValue((struct__1591*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__1591_allow_double_convertion() {
	return 0;
}


const char * get_struct__1591_signature() {
	static StructSimValue values[2];
	Fill_struct__1591_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__1591_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1591_StructSimValue((struct__1591*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__1591_filter_values[2] = {"Size", "Pos"};
int check_struct__1591_string(const char* strValue) {
	static struct__1591 rTemp;
	return string_to_struct__1591(strValue, &rTemp);
}


/****************************************************************
 ** struct__1596
 ****************************************************************/
static void Fill_struct__1596_StructSimValue(struct__1596 * pStruct, StructSimValue * pValues) {
	/*EB label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->EB) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[0].m_pszName = "EB";
	/*EB_reduit label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->EB_reduit) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[1].m_pszName = "EB_reduit";
}

const char * struct__1596_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1596_StructSimValue(((struct__1596*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__1596(const char* strValue, void* pValue) {
	static struct__1596 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__1596(&(rTemp), &(*((struct__1596*)pValue)));
	Fill_struct__1596_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__1596(&(*((struct__1596*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1596_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1596_StructSimValue((struct__1596*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__1596_allow_double_convertion() {
	return 0;
}


const char * get_struct__1596_signature() {
	static StructSimValue values[2];
	Fill_struct__1596_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__1596_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1596_StructSimValue((struct__1596*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__1596_filter_values[2] = {"EB", "EB_reduit"};
int check_struct__1596_string(const char* strValue) {
	static struct__1596 rTemp;
	return string_to_struct__1596(strValue, &rTemp);
}


/****************************************************************
 ** struct__1601
 ****************************************************************/
static void Fill_struct__1601_StructSimValue(struct__1601 * pStruct, StructSimValue * pValues) {
	/*Distance label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->Distance) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[0].m_pszName = "Distance";
	/*Adh label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Adh) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[1].m_pszName = "Adh";
}

const char * struct__1601_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1601_StructSimValue(((struct__1601*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__1601(const char* strValue, void* pValue) {
	static struct__1601 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__1601(&(rTemp), &(*((struct__1601*)pValue)));
	Fill_struct__1601_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__1601(&(*((struct__1601*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1601_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1601_StructSimValue((struct__1601*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__1601_allow_double_convertion() {
	return 0;
}


const char * get_struct__1601_signature() {
	static StructSimValue values[2];
	Fill_struct__1601_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__1601_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1601_StructSimValue((struct__1601*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__1601_filter_values[2] = {"Distance", "Adh"};
int check_struct__1601_string(const char* strValue) {
	static struct__1601 rTemp;
	return string_to_struct__1601(strValue, &rTemp);
}


/****************************************************************
 ** struct__1606
 ****************************************************************/
static void Fill_struct__1606_StructSimValue(struct__1606 * pStruct, StructSimValue * pValues) {
	/*Distance label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->Distance) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[0].m_pszName = "Distance";
	/*Value label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Value) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[1].m_pszName = "Value";
}

const char * struct__1606_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1606_StructSimValue(((struct__1606*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__1606(const char* strValue, void* pValue) {
	static struct__1606 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__1606(&(rTemp), &(*((struct__1606*)pValue)));
	Fill_struct__1606_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__1606(&(*((struct__1606*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1606_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1606_StructSimValue((struct__1606*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__1606_allow_double_convertion() {
	return 0;
}


const char * get_struct__1606_signature() {
	static StructSimValue values[2];
	Fill_struct__1606_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__1606_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1606_StructSimValue((struct__1606*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__1606_filter_values[2] = {"Distance", "Value"};
int check_struct__1606_string(const char* strValue) {
	static struct__1606 rTemp;
	return string_to_struct__1606(strValue, &rTemp);
}


/****************************************************************
 ** array__1611
 ****************************************************************/
void* array__1611_projection(void** pValues, int nIndex) {
	return &((*(array__1611*)pValues)[nIndex]);
}

const char * array__1611_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__1606_to_string, 2, array__1611_projection);
}

int compare_array__1611_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__1606_type , 2, array__1611_projection);
}

int is_array__1611_allow_double_convertion() {
	return 0;
}

int string_to_array__1611(const char* strValue, void* pValue) {
	static array__1611 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__1606, 2, array__1611_projection);
	if (nResult == 1)
		kcg_copy_array__1611(&(*((array__1611*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1611_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__1606_signature, 2);
}

FilterUtils get_array__1611_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__1606_Utils, strFilter, (void**)pValue, 2, array__1611_projection);
}

int check_array__1611_string(const char* strValue) {
	static array__1611 rTemp;
	return string_to_array__1611(strValue, &rTemp);
}


/****************************************************************
 ** array__1614
 ****************************************************************/
void* array__1614_projection(void** pValues, int nIndex) {
	return &((*(array__1614*)pValues)[nIndex]);
}

const char * array__1614_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__1606_to_string, 8, array__1614_projection);
}

int compare_array__1614_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__1606_type , 8, array__1614_projection);
}

int is_array__1614_allow_double_convertion() {
	return 0;
}

int string_to_array__1614(const char* strValue, void* pValue) {
	static array__1614 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__1606, 8, array__1614_projection);
	if (nResult == 1)
		kcg_copy_array__1614(&(*((array__1614*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1614_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__1606_signature, 8);
}

FilterUtils get_array__1614_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__1606_Utils, strFilter, (void**)pValue, 8, array__1614_projection);
}

int check_array__1614_string(const char* strValue) {
	static array__1614 rTemp;
	return string_to_array__1614(strValue, &rTemp);
}


/****************************************************************
 ** array_real_8
 ****************************************************************/
void* array_real_8_projection(void** pValues, int nIndex) {
	return &((*(array_real_8*)pValues)[nIndex]);
}

const char * array_real_8_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_real_to_string, 8, array_real_8_projection);
}

int compare_array_real_8_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_real_type , 8, array_real_8_projection);
}

int is_array_real_8_allow_double_convertion() {
	return 0;
}

int string_to_array_real_8(const char* strValue, void* pValue) {
	static array_real_8 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_real, 8, array_real_8_projection);
	if (nResult == 1)
		kcg_copy_array_real_8(&(*((array_real_8*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_real_8_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_real_signature, 8);
}

FilterUtils get_array_real_8_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_real_Utils, strFilter, (void**)pValue, 8, array_real_8_projection);
}

int check_array_real_8_string(const char* strValue) {
	static array_real_8 rTemp;
	return string_to_array_real_8(strValue, &rTemp);
}


/****************************************************************
 ** array_real_25
 ****************************************************************/
void* array_real_25_projection(void** pValues, int nIndex) {
	return &((*(array_real_25*)pValues)[nIndex]);
}

const char * array_real_25_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_real_to_string, 25, array_real_25_projection);
}

int compare_array_real_25_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_real_type , 25, array_real_25_projection);
}

int is_array_real_25_allow_double_convertion() {
	return 0;
}

int string_to_array_real_25(const char* strValue, void* pValue) {
	static array_real_25 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_real, 25, array_real_25_projection);
	if (nResult == 1)
		kcg_copy_array_real_25(&(*((array_real_25*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_real_25_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_real_signature, 25);
}

FilterUtils get_array_real_25_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_real_Utils, strFilter, (void**)pValue, 25, array_real_25_projection);
}

int check_array_real_25_string(const char* strValue) {
	static array_real_25 rTemp;
	return string_to_array_real_25(strValue, &rTemp);
}


/****************************************************************
 ** array_real_1
 ****************************************************************/
void* array_real_1_projection(void** pValues, int nIndex) {
	return &((*(array_real_1*)pValues)[nIndex]);
}

const char * array_real_1_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_real_to_string, 1, array_real_1_projection);
}

int compare_array_real_1_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_real_type , 1, array_real_1_projection);
}

int is_array_real_1_allow_double_convertion() {
	return 0;
}

int string_to_array_real_1(const char* strValue, void* pValue) {
	static array_real_1 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_real, 1, array_real_1_projection);
	if (nResult == 1)
		kcg_copy_array_real_1(&(*((array_real_1*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_real_1_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_real_signature, 1);
}

FilterUtils get_array_real_1_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_real_Utils, strFilter, (void**)pValue, 1, array_real_1_projection);
}

int check_array_real_1_string(const char* strValue) {
	static array_real_1 rTemp;
	return string_to_array_real_1(strValue, &rTemp);
}


/****************************************************************
 ** array_real_24
 ****************************************************************/
void* array_real_24_projection(void** pValues, int nIndex) {
	return &((*(array_real_24*)pValues)[nIndex]);
}

const char * array_real_24_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_real_to_string, 24, array_real_24_projection);
}

int compare_array_real_24_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_real_type , 24, array_real_24_projection);
}

int is_array_real_24_allow_double_convertion() {
	return 0;
}

int string_to_array_real_24(const char* strValue, void* pValue) {
	static array_real_24 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_real, 24, array_real_24_projection);
	if (nResult == 1)
		kcg_copy_array_real_24(&(*((array_real_24*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_real_24_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_real_signature, 24);
}

FilterUtils get_array_real_24_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_real_Utils, strFilter, (void**)pValue, 24, array_real_24_projection);
}

int check_array_real_24_string(const char* strValue) {
	static array_real_24 rTemp;
	return string_to_array_real_24(strValue, &rTemp);
}


/****************************************************************
 ** array__1629
 ****************************************************************/
void* array__1629_projection(void** pValues, int nIndex) {
	return &((*(array__1629*)pValues)[nIndex]);
}

const char * array__1629_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array__1614_to_string, 25, array__1629_projection);
}

int compare_array__1629_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array__1614_type , 25, array__1629_projection);
}

int is_array__1629_allow_double_convertion() {
	return 0;
}

int string_to_array__1629(const char* strValue, void* pValue) {
	static array__1629 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array__1614, 25, array__1629_projection);
	if (nResult == 1)
		kcg_copy_array__1629(&(*((array__1629*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1629_signature() {
	return pSimulator->m_pfnArraySignature(get_array__1614_signature, 25);
}

FilterUtils get_array__1629_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array__1614_Utils, strFilter, (void**)pValue, 25, array__1629_projection);
}

int check_array__1629_string(const char* strValue) {
	static array__1629 rTemp;
	return string_to_array__1629(strValue, &rTemp);
}


/****************************************************************
 ** array_real_2
 ****************************************************************/
void* array_real_2_projection(void** pValues, int nIndex) {
	return &((*(array_real_2*)pValues)[nIndex]);
}

const char * array_real_2_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_real_to_string, 2, array_real_2_projection);
}

int compare_array_real_2_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_real_type , 2, array_real_2_projection);
}

int is_array_real_2_allow_double_convertion() {
	return 0;
}

int string_to_array_real_2(const char* strValue, void* pValue) {
	static array_real_2 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_real, 2, array_real_2_projection);
	if (nResult == 1)
		kcg_copy_array_real_2(&(*((array_real_2*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_real_2_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_real_signature, 2);
}

FilterUtils get_array_real_2_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_real_Utils, strFilter, (void**)pValue, 2, array_real_2_projection);
}

int check_array_real_2_string(const char* strValue) {
	static array_real_2 rTemp;
	return string_to_array_real_2(strValue, &rTemp);
}


/****************************************************************
 ** array__1635
 ****************************************************************/
void* array__1635_projection(void** pValues, int nIndex) {
	return &((*(array__1635*)pValues)[nIndex]);
}

const char * array__1635_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array__1611_to_string, 25, array__1635_projection);
}

int compare_array__1635_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array__1611_type , 25, array__1635_projection);
}

int is_array__1635_allow_double_convertion() {
	return 0;
}

int string_to_array__1635(const char* strValue, void* pValue) {
	static array__1635 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array__1611, 25, array__1635_projection);
	if (nResult == 1)
		kcg_copy_array__1635(&(*((array__1635*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1635_signature() {
	return pSimulator->m_pfnArraySignature(get_array__1611_signature, 25);
}

FilterUtils get_array__1635_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array__1611_Utils, strFilter, (void**)pValue, 25, array__1635_projection);
}

int check_array__1635_string(const char* strValue) {
	static array__1635 rTemp;
	return string_to_array__1635(strValue, &rTemp);
}


/****************************************************************
 ** array__1638
 ****************************************************************/
void* array__1638_projection(void** pValues, int nIndex) {
	return &((*(array__1638*)pValues)[nIndex]);
}

const char * array__1638_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__1606_to_string, 1, array__1638_projection);
}

int compare_array__1638_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__1606_type , 1, array__1638_projection);
}

int is_array__1638_allow_double_convertion() {
	return 0;
}

int string_to_array__1638(const char* strValue, void* pValue) {
	static array__1638 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__1606, 1, array__1638_projection);
	if (nResult == 1)
		kcg_copy_array__1638(&(*((array__1638*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1638_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__1606_signature, 1);
}

FilterUtils get_array__1638_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__1606_Utils, strFilter, (void**)pValue, 1, array__1638_projection);
}

int check_array__1638_string(const char* strValue) {
	static array__1638 rTemp;
	return string_to_array__1638(strValue, &rTemp);
}


/****************************************************************
 ** array__1641
 ****************************************************************/
void* array__1641_projection(void** pValues, int nIndex) {
	return &((*(array__1641*)pValues)[nIndex]);
}

const char * array__1641_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array__1638_to_string, 25, array__1641_projection);
}

int compare_array__1641_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array__1638_type , 25, array__1641_projection);
}

int is_array__1641_allow_double_convertion() {
	return 0;
}

int string_to_array__1641(const char* strValue, void* pValue) {
	static array__1641 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array__1638, 25, array__1641_projection);
	if (nResult == 1)
		kcg_copy_array__1641(&(*((array__1641*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1641_signature() {
	return pSimulator->m_pfnArraySignature(get_array__1638_signature, 25);
}

FilterUtils get_array__1641_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array__1638_Utils, strFilter, (void**)pValue, 25, array__1641_projection);
}

int check_array__1641_string(const char* strValue) {
	static array__1641 rTemp;
	return string_to_array__1641(strValue, &rTemp);
}


/****************************************************************
 ** array_bool_25
 ****************************************************************/
void* array_bool_25_projection(void** pValues, int nIndex) {
	return &((*(array_bool_25*)pValues)[nIndex]);
}

const char * array_bool_25_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_bool_to_string, 25, array_bool_25_projection);
}

int compare_array_bool_25_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_bool_type , 25, array_bool_25_projection);
}

int is_array_bool_25_allow_double_convertion() {
	return 0;
}

int string_to_array_bool_25(const char* strValue, void* pValue) {
	static array_bool_25 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_bool, 25, array_bool_25_projection);
	if (nResult == 1)
		kcg_copy_array_bool_25(&(*((array_bool_25*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_bool_25_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_bool_signature, 25);
}

FilterUtils get_array_bool_25_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_bool_Utils, strFilter, (void**)pValue, 25, array_bool_25_projection);
}

int check_array_bool_25_string(const char* strValue) {
	static array_bool_25 rTemp;
	return string_to_array_bool_25(strValue, &rTemp);
}


/****************************************************************
 ** array__1647
 ****************************************************************/
void* array__1647_projection(void** pValues, int nIndex) {
	return &((*(array__1647*)pValues)[nIndex]);
}

const char * array__1647_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__1601_to_string, 2, array__1647_projection);
}

int compare_array__1647_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__1601_type , 2, array__1647_projection);
}

int is_array__1647_allow_double_convertion() {
	return 0;
}

int string_to_array__1647(const char* strValue, void* pValue) {
	static array__1647 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__1601, 2, array__1647_projection);
	if (nResult == 1)
		kcg_copy_array__1647(&(*((array__1647*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1647_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__1601_signature, 2);
}

FilterUtils get_array__1647_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__1601_Utils, strFilter, (void**)pValue, 2, array__1647_projection);
}

int check_array__1647_string(const char* strValue) {
	static array__1647 rTemp;
	return string_to_array__1647(strValue, &rTemp);
}


/****************************************************************
 ** array_bool_1
 ****************************************************************/
void* array_bool_1_projection(void** pValues, int nIndex) {
	return &((*(array_bool_1*)pValues)[nIndex]);
}

const char * array_bool_1_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_bool_to_string, 1, array_bool_1_projection);
}

int compare_array_bool_1_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_bool_type , 1, array_bool_1_projection);
}

int is_array_bool_1_allow_double_convertion() {
	return 0;
}

int string_to_array_bool_1(const char* strValue, void* pValue) {
	static array_bool_1 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_bool, 1, array_bool_1_projection);
	if (nResult == 1)
		kcg_copy_array_bool_1(&(*((array_bool_1*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_bool_1_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_bool_signature, 1);
}

FilterUtils get_array_bool_1_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_bool_Utils, strFilter, (void**)pValue, 1, array_bool_1_projection);
}

int check_array_bool_1_string(const char* strValue) {
	static array_bool_1 rTemp;
	return string_to_array_bool_1(strValue, &rTemp);
}


/****************************************************************
 ** array_bool_24
 ****************************************************************/
void* array_bool_24_projection(void** pValues, int nIndex) {
	return &((*(array_bool_24*)pValues)[nIndex]);
}

const char * array_bool_24_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_bool_to_string, 24, array_bool_24_projection);
}

int compare_array_bool_24_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_bool_type , 24, array_bool_24_projection);
}

int is_array_bool_24_allow_double_convertion() {
	return 0;
}

int string_to_array_bool_24(const char* strValue, void* pValue) {
	static array_bool_24 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_bool, 24, array_bool_24_projection);
	if (nResult == 1)
		kcg_copy_array_bool_24(&(*((array_bool_24*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_bool_24_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_bool_signature, 24);
}

FilterUtils get_array_bool_24_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_bool_Utils, strFilter, (void**)pValue, 24, array_bool_24_projection);
}

int check_array_bool_24_string(const char* strValue) {
	static array_bool_24 rTemp;
	return string_to_array_bool_24(strValue, &rTemp);
}


/****************************************************************
 ** array__1656
 ****************************************************************/
void* array__1656_projection(void** pValues, int nIndex) {
	return &((*(array__1656*)pValues)[nIndex]);
}

const char * array__1656_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array__1647_to_string, 25, array__1656_projection);
}

int compare_array__1656_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array__1647_type , 25, array__1656_projection);
}

int is_array__1656_allow_double_convertion() {
	return 0;
}

int string_to_array__1656(const char* strValue, void* pValue) {
	static array__1656 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array__1647, 25, array__1656_projection);
	if (nResult == 1)
		kcg_copy_array__1656(&(*((array__1656*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1656_signature() {
	return pSimulator->m_pfnArraySignature(get_array__1647_signature, 25);
}

FilterUtils get_array__1656_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array__1647_Utils, strFilter, (void**)pValue, 25, array__1656_projection);
}

int check_array__1656_string(const char* strValue) {
	static array__1656 rTemp;
	return string_to_array__1656(strValue, &rTemp);
}


/****************************************************************
 ** array__1659
 ****************************************************************/
void* array__1659_projection(void** pValues, int nIndex) {
	return &((*(array__1659*)pValues)[nIndex]);
}

const char * array__1659_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__1596_to_string, 25, array__1659_projection);
}

int compare_array__1659_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__1596_type , 25, array__1659_projection);
}

int is_array__1659_allow_double_convertion() {
	return 0;
}

int string_to_array__1659(const char* strValue, void* pValue) {
	static array__1659 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__1596, 25, array__1659_projection);
	if (nResult == 1)
		kcg_copy_array__1659(&(*((array__1659*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1659_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__1596_signature, 25);
}

FilterUtils get_array__1659_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__1596_Utils, strFilter, (void**)pValue, 25, array__1659_projection);
}

int check_array__1659_string(const char* strValue) {
	static array__1659 rTemp;
	return string_to_array__1659(strValue, &rTemp);
}


/****************************************************************
 ** TY_DistValue
 ****************************************************************/
struct SimTypeVTable* pSimTY_DistValueVTable;
const char * TY_DistValue_to_string(const void* pValue) {
	if (pSimTY_DistValueVTable != 0 && pSimTY_DistValueVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTY_DistValueVTable->m_pfnToType(SptString, pValue);
	return struct__1606_to_string(pValue);
}

int string_to_TY_DistValue(const char* strValue, void* pValue) {
	if (pSimTY_DistValueVTable != 0 && pSimTY_DistValueVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TY_DistValue rTemp;
		int nResult = pSimTY_DistValueVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1606(&(*((TY_DistValue*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1606(strValue, pValue);
}

int is_TY_DistValue_allow_double_convertion() {
	if (pSimTY_DistValueVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTY_DistValueVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTY_DistValueVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTY_DistValueVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTY_DistValueVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__1606_allow_double_convertion();
}

int TY_DistValue_to_double(double * nValue, const void* pValue) {
	if (pSimTY_DistValueVTable != 0) {
		if (pSimTY_DistValueVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTY_DistValueVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTY_DistValueVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTY_DistValueVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTY_DistValueVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTY_DistValueVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTY_DistValueVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTY_DistValueVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__1606_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1606_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TY_DistValue_string(const char* strValue) {
	static TY_DistValue rTemp;
	return string_to_TY_DistValue(strValue, &rTemp);
}


/****************************************************************
 ** TY_Adh
 ****************************************************************/
struct SimTypeVTable* pSimTY_AdhVTable;
const char * TY_Adh_to_string(const void* pValue) {
	if (pSimTY_AdhVTable != 0 && pSimTY_AdhVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTY_AdhVTable->m_pfnToType(SptString, pValue);
	return struct__1601_to_string(pValue);
}

int string_to_TY_Adh(const char* strValue, void* pValue) {
	if (pSimTY_AdhVTable != 0 && pSimTY_AdhVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TY_Adh rTemp;
		int nResult = pSimTY_AdhVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1601(&(*((TY_Adh*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1601(strValue, pValue);
}

int is_TY_Adh_allow_double_convertion() {
	if (pSimTY_AdhVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTY_AdhVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTY_AdhVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTY_AdhVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTY_AdhVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__1601_allow_double_convertion();
}

int TY_Adh_to_double(double * nValue, const void* pValue) {
	if (pSimTY_AdhVTable != 0) {
		if (pSimTY_AdhVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTY_AdhVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTY_AdhVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTY_AdhVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTY_AdhVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTY_AdhVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTY_AdhVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTY_AdhVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__1601_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1601_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TY_Adh_string(const char* strValue) {
	static TY_Adh rTemp;
	return string_to_TY_Adh(strValue, &rTemp);
}


/****************************************************************
 ** TY_EB_Type
 ****************************************************************/
struct SimTypeVTable* pSimTY_EB_TypeVTable;
const char * TY_EB_Type_to_string(const void* pValue) {
	if (pSimTY_EB_TypeVTable != 0 && pSimTY_EB_TypeVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTY_EB_TypeVTable->m_pfnToType(SptString, pValue);
	return struct__1596_to_string(pValue);
}

int string_to_TY_EB_Type(const char* strValue, void* pValue) {
	if (pSimTY_EB_TypeVTable != 0 && pSimTY_EB_TypeVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TY_EB_Type rTemp;
		int nResult = pSimTY_EB_TypeVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1596(&(*((TY_EB_Type*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1596(strValue, pValue);
}

int is_TY_EB_Type_allow_double_convertion() {
	if (pSimTY_EB_TypeVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTY_EB_TypeVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTY_EB_TypeVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTY_EB_TypeVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTY_EB_TypeVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__1596_allow_double_convertion();
}

int TY_EB_Type_to_double(double * nValue, const void* pValue) {
	if (pSimTY_EB_TypeVTable != 0) {
		if (pSimTY_EB_TypeVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTY_EB_TypeVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTY_EB_TypeVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTY_EB_TypeVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTY_EB_TypeVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTY_EB_TypeVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTY_EB_TypeVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTY_EB_TypeVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__1596_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1596_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TY_EB_Type_string(const char* strValue) {
	static TY_EB_Type rTemp;
	return string_to_TY_EB_Type(strValue, &rTemp);
}


/****************************************************************
 ** TY_SizePos
 ****************************************************************/
struct SimTypeVTable* pSimTY_SizePosVTable;
const char * TY_SizePos_to_string(const void* pValue) {
	if (pSimTY_SizePosVTable != 0 && pSimTY_SizePosVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTY_SizePosVTable->m_pfnToType(SptString, pValue);
	return struct__1591_to_string(pValue);
}

int string_to_TY_SizePos(const char* strValue, void* pValue) {
	if (pSimTY_SizePosVTable != 0 && pSimTY_SizePosVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TY_SizePos rTemp;
		int nResult = pSimTY_SizePosVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1591(&(*((TY_SizePos*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1591(strValue, pValue);
}

int is_TY_SizePos_allow_double_convertion() {
	if (pSimTY_SizePosVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTY_SizePosVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTY_SizePosVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTY_SizePosVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTY_SizePosVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__1591_allow_double_convertion();
}

int TY_SizePos_to_double(double * nValue, const void* pValue) {
	if (pSimTY_SizePosVTable != 0) {
		if (pSimTY_SizePosVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTY_SizePosVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTY_SizePosVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTY_SizePosVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTY_SizePosVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTY_SizePosVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTY_SizePosVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTY_SizePosVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__1591_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1591_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TY_SizePos_string(const char* strValue) {
	static TY_SizePos rTemp;
	return string_to_TY_SizePos(strValue, &rTemp);
}


