
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "Root_type.h"
#include "Root_mapping.h"

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
TypeUtils _SCSIM_struct__1527_Utils = {struct__1527_to_string,
	check_struct__1527_string,
	string_to_struct__1527,
	is_struct__1527_allow_double_convertion,
	0,
	compare_struct__1527_type,
	get_struct__1527_signature,
	get_struct__1527_filter_utils,
	struct__1527_filter_size,
	struct__1527_filter_values};
TypeUtils _SCSIM_struct__1532_Utils = {struct__1532_to_string,
	check_struct__1532_string,
	string_to_struct__1532,
	is_struct__1532_allow_double_convertion,
	0,
	compare_struct__1532_type,
	get_struct__1532_signature,
	get_struct__1532_filter_utils,
	struct__1532_filter_size,
	struct__1532_filter_values};
TypeUtils _SCSIM_struct__1537_Utils = {struct__1537_to_string,
	check_struct__1537_string,
	string_to_struct__1537,
	is_struct__1537_allow_double_convertion,
	0,
	compare_struct__1537_type,
	get_struct__1537_signature,
	get_struct__1537_filter_utils,
	struct__1537_filter_size,
	struct__1537_filter_values};
TypeUtils _SCSIM_struct__1542_Utils = {struct__1542_to_string,
	check_struct__1542_string,
	string_to_struct__1542,
	is_struct__1542_allow_double_convertion,
	0,
	compare_struct__1542_type,
	get_struct__1542_signature,
	get_struct__1542_filter_utils,
	struct__1542_filter_size,
	struct__1542_filter_values};
TypeUtils _SCSIM_array__1547_Utils = {array__1547_to_string,
	check_array__1547_string,
	string_to_array__1547,
	is_array__1547_allow_double_convertion,
	0,
	compare_array__1547_type,
	get_array__1547_signature,
	get_array__1547_filter_utils,
	array__1547_filter_size,
	array__1547_filter_values};
TypeUtils _SCSIM_array__1550_Utils = {array__1550_to_string,
	check_array__1550_string,
	string_to_array__1550,
	is_array__1550_allow_double_convertion,
	0,
	compare_array__1550_type,
	get_array__1550_signature,
	get_array__1550_filter_utils,
	array__1550_filter_size,
	array__1550_filter_values};
TypeUtils _SCSIM_array__1553_Utils = {array__1553_to_string,
	check_array__1553_string,
	string_to_array__1553,
	is_array__1553_allow_double_convertion,
	0,
	compare_array__1553_type,
	get_array__1553_signature,
	get_array__1553_filter_utils,
	array__1553_filter_size,
	array__1553_filter_values};
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
TypeUtils _SCSIM_array__1562_Utils = {array__1562_to_string,
	check_array__1562_string,
	string_to_array__1562,
	is_array__1562_allow_double_convertion,
	0,
	compare_array__1562_type,
	get_array__1562_signature,
	get_array__1562_filter_utils,
	array__1562_filter_size,
	array__1562_filter_values};
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
TypeUtils _SCSIM_array__1574_Utils = {array__1574_to_string,
	check_array__1574_string,
	string_to_array__1574,
	is_array__1574_allow_double_convertion,
	0,
	compare_array__1574_type,
	get_array__1574_signature,
	get_array__1574_filter_utils,
	array__1574_filter_size,
	array__1574_filter_values};
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
TypeUtils _SCSIM_array__1586_Utils = {array__1586_to_string,
	check_array__1586_string,
	string_to_array__1586,
	is_array__1586_allow_double_convertion,
	0,
	compare_array__1586_type,
	get_array__1586_signature,
	get_array__1586_filter_utils,
	array__1586_filter_size,
	array__1586_filter_values};
TypeUtils _SCSIM_array__1589_Utils = {array__1589_to_string,
	check_array__1589_string,
	string_to_array__1589,
	is_array__1589_allow_double_convertion,
	0,
	compare_array__1589_type,
	get_array__1589_signature,
	get_array__1589_filter_utils,
	array__1589_filter_size,
	array__1589_filter_values};
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
 ** struct__1527
 ****************************************************************/
static void Fill_struct__1527_StructSimValue(struct__1527 * pStruct, StructSimValue * pValues) {
	/*Size label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->Size) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[0].m_pszName = "Size";
	/*Pos label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Pos) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[1].m_pszName = "Pos";
}

const char * struct__1527_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1527_StructSimValue(((struct__1527*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__1527(const char* strValue, void* pValue) {
	static struct__1527 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__1527(&(rTemp), &(*((struct__1527*)pValue)));
	Fill_struct__1527_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__1527(&(*((struct__1527*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1527_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1527_StructSimValue((struct__1527*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__1527_allow_double_convertion() {
	return 0;
}


const char * get_struct__1527_signature() {
	static StructSimValue values[2];
	Fill_struct__1527_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__1527_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1527_StructSimValue((struct__1527*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__1527_filter_values[2] = {"Size", "Pos"};
int check_struct__1527_string(const char* strValue) {
	static struct__1527 rTemp;
	return string_to_struct__1527(strValue, &rTemp);
}


/****************************************************************
 ** struct__1532
 ****************************************************************/
static void Fill_struct__1532_StructSimValue(struct__1532 * pStruct, StructSimValue * pValues) {
	/*EB label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->EB) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[0].m_pszName = "EB";
	/*EB_reduit label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->EB_reduit) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[1].m_pszName = "EB_reduit";
}

const char * struct__1532_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1532_StructSimValue(((struct__1532*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__1532(const char* strValue, void* pValue) {
	static struct__1532 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__1532(&(rTemp), &(*((struct__1532*)pValue)));
	Fill_struct__1532_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__1532(&(*((struct__1532*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1532_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1532_StructSimValue((struct__1532*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__1532_allow_double_convertion() {
	return 0;
}


const char * get_struct__1532_signature() {
	static StructSimValue values[2];
	Fill_struct__1532_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__1532_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1532_StructSimValue((struct__1532*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__1532_filter_values[2] = {"EB", "EB_reduit"};
int check_struct__1532_string(const char* strValue) {
	static struct__1532 rTemp;
	return string_to_struct__1532(strValue, &rTemp);
}


/****************************************************************
 ** struct__1537
 ****************************************************************/
static void Fill_struct__1537_StructSimValue(struct__1537 * pStruct, StructSimValue * pValues) {
	/*Distance label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->Distance) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[0].m_pszName = "Distance";
	/*Adh label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Adh) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[1].m_pszName = "Adh";
}

const char * struct__1537_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1537_StructSimValue(((struct__1537*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__1537(const char* strValue, void* pValue) {
	static struct__1537 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__1537(&(rTemp), &(*((struct__1537*)pValue)));
	Fill_struct__1537_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__1537(&(*((struct__1537*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1537_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1537_StructSimValue((struct__1537*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__1537_allow_double_convertion() {
	return 0;
}


const char * get_struct__1537_signature() {
	static StructSimValue values[2];
	Fill_struct__1537_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__1537_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1537_StructSimValue((struct__1537*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__1537_filter_values[2] = {"Distance", "Adh"};
int check_struct__1537_string(const char* strValue) {
	static struct__1537 rTemp;
	return string_to_struct__1537(strValue, &rTemp);
}


/****************************************************************
 ** struct__1542
 ****************************************************************/
static void Fill_struct__1542_StructSimValue(struct__1542 * pStruct, StructSimValue * pValues) {
	/*Distance label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->Distance) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[0].m_pszName = "Distance";
	/*Value label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Value) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[1].m_pszName = "Value";
}

const char * struct__1542_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1542_StructSimValue(((struct__1542*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__1542(const char* strValue, void* pValue) {
	static struct__1542 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__1542(&(rTemp), &(*((struct__1542*)pValue)));
	Fill_struct__1542_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__1542(&(*((struct__1542*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__1542_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1542_StructSimValue((struct__1542*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__1542_allow_double_convertion() {
	return 0;
}


const char * get_struct__1542_signature() {
	static StructSimValue values[2];
	Fill_struct__1542_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__1542_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__1542_StructSimValue((struct__1542*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__1542_filter_values[2] = {"Distance", "Value"};
int check_struct__1542_string(const char* strValue) {
	static struct__1542 rTemp;
	return string_to_struct__1542(strValue, &rTemp);
}


/****************************************************************
 ** array__1547
 ****************************************************************/
void* array__1547_projection(void** pValues, int nIndex) {
	return &((*(array__1547*)pValues)[nIndex]);
}

const char * array__1547_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__1542_to_string, 2, array__1547_projection);
}

int compare_array__1547_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__1542_type , 2, array__1547_projection);
}

int is_array__1547_allow_double_convertion() {
	return 0;
}

int string_to_array__1547(const char* strValue, void* pValue) {
	static array__1547 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__1542, 2, array__1547_projection);
	if (nResult == 1)
		kcg_copy_array__1547(&(*((array__1547*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1547_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__1542_signature, 2);
}

FilterUtils get_array__1547_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__1542_Utils, strFilter, (void**)pValue, 2, array__1547_projection);
}

int check_array__1547_string(const char* strValue) {
	static array__1547 rTemp;
	return string_to_array__1547(strValue, &rTemp);
}


/****************************************************************
 ** array__1550
 ****************************************************************/
void* array__1550_projection(void** pValues, int nIndex) {
	return &((*(array__1550*)pValues)[nIndex]);
}

const char * array__1550_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__1537_to_string, 2, array__1550_projection);
}

int compare_array__1550_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__1537_type , 2, array__1550_projection);
}

int is_array__1550_allow_double_convertion() {
	return 0;
}

int string_to_array__1550(const char* strValue, void* pValue) {
	static array__1550 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__1537, 2, array__1550_projection);
	if (nResult == 1)
		kcg_copy_array__1550(&(*((array__1550*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1550_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__1537_signature, 2);
}

FilterUtils get_array__1550_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__1537_Utils, strFilter, (void**)pValue, 2, array__1550_projection);
}

int check_array__1550_string(const char* strValue) {
	static array__1550 rTemp;
	return string_to_array__1550(strValue, &rTemp);
}


/****************************************************************
 ** array__1553
 ****************************************************************/
void* array__1553_projection(void** pValues, int nIndex) {
	return &((*(array__1553*)pValues)[nIndex]);
}

const char * array__1553_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__1542_to_string, 8, array__1553_projection);
}

int compare_array__1553_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__1542_type , 8, array__1553_projection);
}

int is_array__1553_allow_double_convertion() {
	return 0;
}

int string_to_array__1553(const char* strValue, void* pValue) {
	static array__1553 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__1542, 8, array__1553_projection);
	if (nResult == 1)
		kcg_copy_array__1553(&(*((array__1553*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1553_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__1542_signature, 8);
}

FilterUtils get_array__1553_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__1542_Utils, strFilter, (void**)pValue, 8, array__1553_projection);
}

int check_array__1553_string(const char* strValue) {
	static array__1553 rTemp;
	return string_to_array__1553(strValue, &rTemp);
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
 ** array__1562
 ****************************************************************/
void* array__1562_projection(void** pValues, int nIndex) {
	return &((*(array__1562*)pValues)[nIndex]);
}

const char * array__1562_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array__1553_to_string, 25, array__1562_projection);
}

int compare_array__1562_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array__1553_type , 25, array__1562_projection);
}

int is_array__1562_allow_double_convertion() {
	return 0;
}

int string_to_array__1562(const char* strValue, void* pValue) {
	static array__1562 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array__1553, 25, array__1562_projection);
	if (nResult == 1)
		kcg_copy_array__1562(&(*((array__1562*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1562_signature() {
	return pSimulator->m_pfnArraySignature(get_array__1553_signature, 25);
}

FilterUtils get_array__1562_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array__1553_Utils, strFilter, (void**)pValue, 25, array__1562_projection);
}

int check_array__1562_string(const char* strValue) {
	static array__1562 rTemp;
	return string_to_array__1562(strValue, &rTemp);
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
 ** array__1574
 ****************************************************************/
void* array__1574_projection(void** pValues, int nIndex) {
	return &((*(array__1574*)pValues)[nIndex]);
}

const char * array__1574_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array__1547_to_string, 25, array__1574_projection);
}

int compare_array__1574_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array__1547_type , 25, array__1574_projection);
}

int is_array__1574_allow_double_convertion() {
	return 0;
}

int string_to_array__1574(const char* strValue, void* pValue) {
	static array__1574 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array__1547, 25, array__1574_projection);
	if (nResult == 1)
		kcg_copy_array__1574(&(*((array__1574*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1574_signature() {
	return pSimulator->m_pfnArraySignature(get_array__1547_signature, 25);
}

FilterUtils get_array__1574_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array__1547_Utils, strFilter, (void**)pValue, 25, array__1574_projection);
}

int check_array__1574_string(const char* strValue) {
	static array__1574 rTemp;
	return string_to_array__1574(strValue, &rTemp);
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
 ** array__1586
 ****************************************************************/
void* array__1586_projection(void** pValues, int nIndex) {
	return &((*(array__1586*)pValues)[nIndex]);
}

const char * array__1586_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array__1550_to_string, 25, array__1586_projection);
}

int compare_array__1586_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array__1550_type , 25, array__1586_projection);
}

int is_array__1586_allow_double_convertion() {
	return 0;
}

int string_to_array__1586(const char* strValue, void* pValue) {
	static array__1586 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array__1550, 25, array__1586_projection);
	if (nResult == 1)
		kcg_copy_array__1586(&(*((array__1586*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1586_signature() {
	return pSimulator->m_pfnArraySignature(get_array__1550_signature, 25);
}

FilterUtils get_array__1586_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array__1550_Utils, strFilter, (void**)pValue, 25, array__1586_projection);
}

int check_array__1586_string(const char* strValue) {
	static array__1586 rTemp;
	return string_to_array__1586(strValue, &rTemp);
}


/****************************************************************
 ** array__1589
 ****************************************************************/
void* array__1589_projection(void** pValues, int nIndex) {
	return &((*(array__1589*)pValues)[nIndex]);
}

const char * array__1589_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__1532_to_string, 25, array__1589_projection);
}

int compare_array__1589_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__1532_type , 25, array__1589_projection);
}

int is_array__1589_allow_double_convertion() {
	return 0;
}

int string_to_array__1589(const char* strValue, void* pValue) {
	static array__1589 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__1532, 25, array__1589_projection);
	if (nResult == 1)
		kcg_copy_array__1589(&(*((array__1589*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__1589_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__1532_signature, 25);
}

FilterUtils get_array__1589_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__1532_Utils, strFilter, (void**)pValue, 25, array__1589_projection);
}

int check_array__1589_string(const char* strValue) {
	static array__1589 rTemp;
	return string_to_array__1589(strValue, &rTemp);
}


/****************************************************************
 ** TY_DistValue
 ****************************************************************/
struct SimTypeVTable* pSimTY_DistValueVTable;
const char * TY_DistValue_to_string(const void* pValue) {
	if (pSimTY_DistValueVTable != 0 && pSimTY_DistValueVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTY_DistValueVTable->m_pfnToType(SptString, pValue);
	return struct__1542_to_string(pValue);
}

int string_to_TY_DistValue(const char* strValue, void* pValue) {
	if (pSimTY_DistValueVTable != 0 && pSimTY_DistValueVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TY_DistValue rTemp;
		int nResult = pSimTY_DistValueVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1542(&(*((TY_DistValue*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1542(strValue, pValue);
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
	return is_struct__1542_allow_double_convertion();
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
	if (_SCSIM_struct__1542_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1542_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return struct__1537_to_string(pValue);
}

int string_to_TY_Adh(const char* strValue, void* pValue) {
	if (pSimTY_AdhVTable != 0 && pSimTY_AdhVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TY_Adh rTemp;
		int nResult = pSimTY_AdhVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1537(&(*((TY_Adh*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1537(strValue, pValue);
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
	return is_struct__1537_allow_double_convertion();
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
	if (_SCSIM_struct__1537_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1537_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return struct__1532_to_string(pValue);
}

int string_to_TY_EB_Type(const char* strValue, void* pValue) {
	if (pSimTY_EB_TypeVTable != 0 && pSimTY_EB_TypeVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TY_EB_Type rTemp;
		int nResult = pSimTY_EB_TypeVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1532(&(*((TY_EB_Type*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1532(strValue, pValue);
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
	return is_struct__1532_allow_double_convertion();
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
	if (_SCSIM_struct__1532_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1532_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return struct__1527_to_string(pValue);
}

int string_to_TY_SizePos(const char* strValue, void* pValue) {
	if (pSimTY_SizePosVTable != 0 && pSimTY_SizePosVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TY_SizePos rTemp;
		int nResult = pSimTY_SizePosVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__1527(&(*((TY_SizePos*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__1527(strValue, pValue);
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
	return is_struct__1527_allow_double_convertion();
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
	if (_SCSIM_struct__1527_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__1527_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TY_SizePos_string(const char* strValue) {
	static TY_SizePos rTemp;
	return string_to_TY_SizePos(strValue, &rTemp);
}


