#ifndef _KCG_CONV_H_
#define _KCG_CONV_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "NewSmuTypes.h"
#include "kcg_types.h"
#include <limits.h>
#include <stdlib.h>


/* Utils */
void updateCompareResult(int unitResult, int *pGlobalResult);


/* Make kcg_conv.h&.c compiler independant */
#if _MSC_VER > 1200
  #define string_to_i64 _strtoi64
  #define string_to_ui64 _strtoui64
  #ifndef ULLONG_MAX
    #define ULLONG_MAX 0xffffffffffffffff
  #endif
  #ifndef LLONG_MAX
    #define LLONG_MAX 9223372036854775807
  #endif
  #ifndef LLONG_MIN
    #define LLONG_MIN  (-9223372036854775807i64 - 1)
  #endif
#else
#ifdef __GNUC__
#define string_to_i64 strtoll
#define string_to_ui64 strtoull
#endif
#endif

/* Predefined <type> comparison functions */
int predef_compare_kcg_bool(int *pResult, kcg_bool value1, kcg_bool value2, void *pData);
int predef_compare_kcg_char(int *pResult, kcg_char value1, kcg_char value2, void *pData);
int predef_compare_enum(int *pResult, int nValue1, int nValue2, void *pData);

/* Predefined string to <type> conversion functions */
int predef_string_to_kcg_bool(const char* str, kcg_bool *pValue, char **endptr);
int predef_string_to_kcg_char(const char* str, kcg_char *pValue, char **endptr);

/* Predefined <type> to string conversion functions */
int predef_kcg_bool_to_string(kcg_bool bValue, PFNSTRAPPEND pfnStrAppend, void *pData);
int predef_kcg_char_to_string(kcg_char cValue, PFNSTRAPPEND pfnStrAppend, void *pData);


#ifdef kcg_int
int predef_compare_kcg_int(int *pResult, kcg_int value1, kcg_int value2, void *pData);
int predef_string_to_kcg_int(const char* str, kcg_int *pValue, char **endptr);
int predef_kcg_int_to_string(kcg_int nValue, PFNSTRAPPEND pfnStrAppend, void *pData);
#endif

#ifdef kcg_real
int predef_compare_kcg_real(int *pResult, kcg_real value1, kcg_real value2, void * pData);
int predef_string_to_kcg_real(const char* str, kcg_real *pValue, char **endptr);
int predef_kcg_real_to_string(kcg_real fValue, const char *realFormat, PFNSTRAPPEND pfnStrAppend, void *pData);
#endif

#ifdef kcg_size
int predef_compare_kcg_size(int *pResult, kcg_size value1, kcg_size value2, void *pData);
int predef_string_to_kcg_size(const char* str, kcg_size *pValue, char **endptr);
int predef_kcg_size_to_string(kcg_size nValue, PFNSTRAPPEND pfnStrAppend, void *pData);
#endif

#ifdef kcg_int8
int predef_compare_kcg_int8(int *pResult, kcg_int8 value1, kcg_int8 value2, void *pData);
int predef_string_to_kcg_int8(const char* str, kcg_int8 *pValue, char **endptr);
int predef_kcg_int8_to_string(kcg_int8 nValue, PFNSTRAPPEND pfnStrAppend, void *pData);
#endif

#ifdef kcg_int16
int predef_compare_kcg_int16(int *pResult, kcg_int16 value1, kcg_int16 value2, void *pData);
int predef_string_to_kcg_int16(const char* str, kcg_int16 *pValue, char **endptr);
int predef_kcg_int16_to_string(kcg_int16 nValue, PFNSTRAPPEND pfnStrAppend, void *pData);
#endif

#ifdef kcg_int32
int predef_compare_kcg_int32(int *pResult, kcg_int32 value1, kcg_int32 value2, void *pData);
int predef_string_to_kcg_int32(const char* str, kcg_int32 *pValue, char **endptr);
int predef_kcg_int32_to_string(kcg_int32 nValue, PFNSTRAPPEND pfnStrAppend, void *pData);
#endif

#ifdef kcg_int64
int predef_compare_kcg_int64(int *pResult, kcg_int64 value1, kcg_int64 value2, void *pData);
int predef_string_to_kcg_int64(const char* str, kcg_int64 *pValue, char **endptr);
int predef_kcg_int64_to_string(kcg_int64 nValue, PFNSTRAPPEND pfnStrAppend, void *pData);
#endif

#ifdef kcg_uint8
int predef_compare_kcg_uint8(int *pResult, kcg_uint8 value1, kcg_uint8 value2, void *pData);
int predef_string_to_kcg_uint8(const char* str, kcg_uint8 *pValue, char **endptr);
int predef_kcg_uint8_to_string(kcg_uint8 nValue, PFNSTRAPPEND pfnStrAppend, void *pData);
#endif

#ifdef kcg_uint16
int predef_compare_kcg_uint16(int *pResult, kcg_uint16 value1, kcg_uint16 value2, void *pData);
int predef_string_to_kcg_uint16(const char* str, kcg_uint16 *pValue, char **endptr);
int predef_kcg_uint16_to_string(kcg_uint16 nValue, PFNSTRAPPEND pfnStrAppend, void *pData);
#endif

#ifdef kcg_uint32
int predef_compare_kcg_uint32(int *pResult, kcg_uint32 value1, kcg_uint32 value2, void *pData);
int predef_string_to_kcg_uint32(const char* str, kcg_uint32 *pValue, char **endptr);
int predef_kcg_uint32_to_string(kcg_uint32 nValue, PFNSTRAPPEND pfnStrAppend, void *pData);
#endif

#ifdef kcg_uint64
int predef_compare_kcg_uint64(int *pResult, kcg_uint64 value1, kcg_uint64 value2, void *pData);
int predef_string_to_kcg_uint64(const char* str, kcg_uint64 *pValue, char **endptr);
int predef_kcg_uint64_to_string(kcg_uint64 nValue, PFNSTRAPPEND pfnStrAppend, void *pData);
#endif

#ifdef kcg_float32
int predef_compare_kcg_float32(int *pResult, kcg_float32 value1, kcg_float32 value2, void *pData);
int predef_string_to_kcg_float32(const char* str, kcg_float32 *pValue, char **endptr);
int predef_kcg_float32_to_string(kcg_float32 fValue, const char *realFormat, PFNSTRAPPEND pfnStrAppend, void *pData);
#endif

#ifdef kcg_float64
int predef_compare_kcg_float64(int *pResult, kcg_float64 value1, kcg_float64 value2, void *pData);
int predef_string_to_kcg_float64(const char* str, kcg_float64 *pValue, char **endptr);
int predef_kcg_float64_to_string(kcg_float64 fValue, const char *realFormat, PFNSTRAPPEND pfnStrAppend, void *pData);
#endif

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* _KCG_CONV_H_ */
