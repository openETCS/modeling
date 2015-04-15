
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "FindLastSSPSection_type.h"
#include "FindLastSSPSection_mapping.h"

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
TypeUtils _SCSIM_struct__267_Utils = {struct__267_to_string,
	check_struct__267_string,
	string_to_struct__267,
	is_struct__267_allow_double_convertion,
	0,
	compare_struct__267_type,
	get_struct__267_signature,
	get_struct__267_filter_utils,
	struct__267_filter_size,
	struct__267_filter_values};
TypeUtils _SCSIM_struct__272_Utils = {struct__272_to_string,
	check_struct__272_string,
	string_to_struct__272,
	is_struct__272_allow_double_convertion,
	0,
	compare_struct__272_type,
	get_struct__272_signature,
	get_struct__272_filter_utils,
	struct__272_filter_size,
	struct__272_filter_values};
TypeUtils _SCSIM_array__277_Utils = {array__277_to_string,
	check_array__277_string,
	string_to_array__277,
	is_array__277_allow_double_convertion,
	0,
	compare_array__277_type,
	get_array__277_signature,
	get_array__277_filter_utils,
	array__277_filter_size,
	array__277_filter_values};
TypeUtils _SCSIM_struct__280_Utils = {struct__280_to_string,
	check_struct__280_string,
	string_to_struct__280,
	is_struct__280_allow_double_convertion,
	0,
	compare_struct__280_type,
	get_struct__280_signature,
	get_struct__280_filter_utils,
	struct__280_filter_size,
	struct__280_filter_values};
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
 ** struct__267
 ****************************************************************/
static void Fill_struct__267_StructSimValue(struct__267 * pStruct, StructSimValue * pValues) {
	/*target label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->target) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "target";
	/*speed label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->speed) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "speed";
}

const char * struct__267_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__267_StructSimValue(((struct__267*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__267(const char* strValue, void* pValue) {
	static struct__267 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__267(&(rTemp), &(*((struct__267*)pValue)));
	Fill_struct__267_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__267(&(*((struct__267*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__267_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__267_StructSimValue((struct__267*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__267_allow_double_convertion() {
	return 0;
}


const char * get_struct__267_signature() {
	static StructSimValue values[2];
	Fill_struct__267_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__267_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__267_StructSimValue((struct__267*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__267_filter_values[2] = {"target", "speed"};
int check_struct__267_string(const char* strValue) {
	static struct__267 rTemp;
	return string_to_struct__267(strValue, &rTemp);
}


/****************************************************************
 ** struct__272
 ****************************************************************/
static void Fill_struct__272_StructSimValue(struct__272 * pStruct, StructSimValue * pValues) {
	/*Found label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->Found) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "Found";
	/*Index label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Index) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "Index";
}

const char * struct__272_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__272_StructSimValue(((struct__272*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__272(const char* strValue, void* pValue) {
	static struct__272 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__272(&(rTemp), &(*((struct__272*)pValue)));
	Fill_struct__272_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__272(&(*((struct__272*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__272_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__272_StructSimValue((struct__272*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__272_allow_double_convertion() {
	return 0;
}


const char * get_struct__272_signature() {
	static StructSimValue values[2];
	Fill_struct__272_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__272_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__272_StructSimValue((struct__272*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__272_filter_values[2] = {"Found", "Index"};
int check_struct__272_string(const char* strValue) {
	static struct__272 rTemp;
	return string_to_struct__272(strValue, &rTemp);
}


/****************************************************************
 ** array__277
 ****************************************************************/
void* array__277_projection(void** pValues, int nIndex) {
	return &((*(array__277*)pValues)[nIndex]);
}

const char * array__277_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__267_to_string, 8, array__277_projection);
}

int compare_array__277_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__267_type , 8, array__277_projection);
}

int is_array__277_allow_double_convertion() {
	return 0;
}

int string_to_array__277(const char* strValue, void* pValue) {
	static array__277 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__267, 8, array__277_projection);
	if (nResult == 1)
		kcg_copy_array__277(&(*((array__277*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__277_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__267_signature, 8);
}

FilterUtils get_array__277_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__267_Utils, strFilter, (void**)pValue, 8, array__277_projection);
}

int check_array__277_string(const char* strValue) {
	static array__277 rTemp;
	return string_to_array__277(strValue, &rTemp);
}


/****************************************************************
 ** struct__280
 ****************************************************************/
static void Fill_struct__280_StructSimValue(struct__280 * pStruct, StructSimValue * pValues) {
	/*Found label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->Found) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "Found";
	/*Index label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Index) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "Index";
	/*Target label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->Target) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "Target";
}

const char * struct__280_to_string(const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__280_StructSimValue(((struct__280*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 3);
}

int string_to_struct__280(const char* strValue, void* pValue) {
	static struct__280 rTemp;
	int nResult = 0;
	static StructSimValue values[3];
	kcg_copy_struct__280(&(rTemp), &(*((struct__280*)pValue)));
	Fill_struct__280_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 3);
	if (nResult == 1)
		kcg_copy_struct__280(&(*((struct__280*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__280_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__280_StructSimValue((struct__280*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 3);
}


int is_struct__280_allow_double_convertion() {
	return 0;
}


const char * get_struct__280_signature() {
	static StructSimValue values[3];
	Fill_struct__280_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 3);
}

FilterUtils get_struct__280_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[3];
	Fill_struct__280_StructSimValue((struct__280*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 3, strFilter);
}

const char * struct__280_filter_values[3] = {"Found", "Index", "Target"};
int check_struct__280_string(const char* strValue) {
	static struct__280 rTemp;
	return string_to_struct__280(strValue, &rTemp);
}


/****************************************************************
 ** SSP_section_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_section_tVTable;
const char * SSP_section_t_to_string(const void* pValue) {
	if (pSimSSP_section_tVTable != 0 && pSimSSP_section_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_section_tVTable->m_pfnToType(SptString, pValue);
	return struct__267_to_string(pValue);
}

int string_to_SSP_section_t(const char* strValue, void* pValue) {
	if (pSimSSP_section_tVTable != 0 && pSimSSP_section_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_section_t rTemp;
		int nResult = pSimSSP_section_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__267(&(*((SSP_section_t*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__267(strValue, pValue);
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
	return is_struct__267_allow_double_convertion();
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
	if (_SCSIM_struct__267_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__267_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_section_t_string(const char* strValue) {
	static SSP_section_t rTemp;
	return string_to_SSP_section_t(strValue, &rTemp);
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
 ** SSP_Mark_ValidSSPsection
 ****************************************************************/
struct SimTypeVTable* pSimSSP_Mark_ValidSSPsectionVTable;
const char * SSP_Mark_ValidSSPsection_to_string(const void* pValue) {
	if (pSimSSP_Mark_ValidSSPsectionVTable != 0 && pSimSSP_Mark_ValidSSPsectionVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_Mark_ValidSSPsectionVTable->m_pfnToType(SptString, pValue);
	return struct__272_to_string(pValue);
}

int string_to_SSP_Mark_ValidSSPsection(const char* strValue, void* pValue) {
	if (pSimSSP_Mark_ValidSSPsectionVTable != 0 && pSimSSP_Mark_ValidSSPsectionVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_Mark_ValidSSPsection rTemp;
		int nResult = pSimSSP_Mark_ValidSSPsectionVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__272(&(*((SSP_Mark_ValidSSPsection*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__272(strValue, pValue);
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
	return is_struct__272_allow_double_convertion();
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
	if (_SCSIM_struct__272_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__272_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_Mark_ValidSSPsection_string(const char* strValue) {
	static SSP_Mark_ValidSSPsection rTemp;
	return string_to_SSP_Mark_ValidSSPsection(strValue, &rTemp);
}


/****************************************************************
 ** SSP_valid_section_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_valid_section_tVTable;
const char * SSP_valid_section_t_to_string(const void* pValue) {
	if (pSimSSP_valid_section_tVTable != 0 && pSimSSP_valid_section_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_valid_section_tVTable->m_pfnToType(SptString, pValue);
	return struct__280_to_string(pValue);
}

int string_to_SSP_valid_section_t(const char* strValue, void* pValue) {
	if (pSimSSP_valid_section_tVTable != 0 && pSimSSP_valid_section_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_valid_section_t rTemp;
		int nResult = pSimSSP_valid_section_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__280(&(*((SSP_valid_section_t*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__280(strValue, pValue);
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
	return is_struct__280_allow_double_convertion();
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
	if (_SCSIM_struct__280_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__280_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_valid_section_t_string(const char* strValue) {
	static SSP_valid_section_t rTemp;
	return string_to_SSP_valid_section_t(strValue, &rTemp);
}


/****************************************************************
 ** SSP_cat_t
 ****************************************************************/
struct SimTypeVTable* pSimSSP_cat_tVTable;
const char * SSP_cat_t_to_string(const void* pValue) {
	if (pSimSSP_cat_tVTable != 0 && pSimSSP_cat_tVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSSP_cat_tVTable->m_pfnToType(SptString, pValue);
	return array__277_to_string(pValue);
}

int string_to_SSP_cat_t(const char* strValue, void* pValue) {
	if (pSimSSP_cat_tVTable != 0 && pSimSSP_cat_tVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static SSP_cat_t rTemp;
		int nResult = pSimSSP_cat_tVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__277(&(*((SSP_cat_t*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__277(strValue, pValue);
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
	return is_array__277_allow_double_convertion();
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
	if (_SCSIM_array__277_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__277_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_SSP_cat_t_string(const char* strValue) {
	static SSP_cat_t rTemp;
	return string_to_SSP_cat_t(strValue, &rTemp);
}


