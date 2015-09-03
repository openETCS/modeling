/*
 * macro_libimpl.h
 *
 * Copyright(c) 2003-2012 Esterel Technologies
 *
 *
 */

/*******
 * Types
 *******/

#ifndef _INCLUDE_SCADE_TYPES
#include "kcg_types.h"
#endif

#ifdef _MSC_VER
#define int64	__int64
#define uint64	unsigned __int64
#else
#ifdef __GNUC__
#define int64	long long
#define uint64	unsigned long long
#else
/* TO DO
   Solaris cc:
   #define int64	long long
   #define uint64	unsigned long long
   Cross Compilers:
*/
#endif
#endif


/***************
 * Miscellaneous
 ***************/

#include "macro_libimpl_utils.h"


/* Output protection: Saturation */

#define SaturateOutput(value, min, max) \
	((value) > (max)) ? (max) \
		: ( ((value) < (min)) ? (min) : (value) )

/********************************
 * Sized Integer cast functions *
 ********************************/

#define m_Tosizedint_def(In1, typename) \
	(typename) (In1)

#define iToUint8_int_impls(In1) m_Tosizedint_def(In1, uint8)
#define iToUint8_real_impls(In1) m_Tosizedint_def(In1, uint8)
#define iToUint8_int8_impls(In1) m_Tosizedint_def(In1, uint8)
#define iToUint8_uint16_impls(In1) m_Tosizedint_def(In1, uint8)
#define iToUint8_int16_impls(In1) m_Tosizedint_def(In1, uint8)
#define iToUint8_uint32_impls(In1) m_Tosizedint_def(In1, uint8)
#define iToUint8_int32_impls(In1) m_Tosizedint_def(In1, uint8)

#define iToInt8_int_impls(In1) m_Tosizedint_def(In1, int8)
#define iToInt8_real_impls(In1) m_Tosizedint_def(In1, int8)
#define iToInt8_uint8_impls(In1) m_Tosizedint_def(In1, int8)
#define iToInt8_uint16_impls(In1) m_Tosizedint_def(In1, int8)
#define iToInt8_int16_impls(In1) m_Tosizedint_def(In1, int8)
#define iToInt8_uint32_impls(In1) m_Tosizedint_def(In1, int8)
#define iToInt8_int32_impls(In1) m_Tosizedint_def(In1, int8)

#define iToUint16_int_impls(In1) m_Tosizedint_def(In1, uint16)
#define iToUint16_real_impls(In1) m_Tosizedint_def(In1, uint16)
#define iToUint16_uint8_impls(In1) (uint16) (In1)
#define iToUint16_int8_impls(In1) m_Tosizedint_def(In1, uint16)
#define iToUint16_int16_impls(In1) m_Tosizedint_def(In1, uint16)
#define iToUint16_uint32_impls(In1) m_Tosizedint_def(In1, uint16)
#define iToUint16_int32_impls(In1) m_Tosizedint_def(In1, uint16)

#define iToInt16_int_impls(In1) m_Tosizedint_def(In1, int16)
#define iToInt16_real_impls(In1) m_Tosizedint_def(In1, int16)
#define iToInt16_uint8_impls(In1) (int16) (In1)
#define iToInt16_int8_impls(In1) (int16) (In1)
#define iToInt16_uint16_impls(In1) m_Tosizedint_def(In1, int16)
#define iToInt16_uint32_impls(In1) m_Tosizedint_def(In1, int16)
#define iToInt16_int32_impls(In1) m_Tosizedint_def(In1, int16)

#define iToUint32_int_impls(In1) m_Tosizedint_def(In1, uint32)
#define iToUint32_real_impls(In1) m_Tosizedint_def(In1, uint32)
#define iToUint32_uint8_impls(In1) (uint32) (In1)
#define iToUint32_int8_impls(In1) m_Tosizedint_def(In1, uint32)
#define iToUint32_uint16_impls(In1) (uint32) (In1)
#define iToUint32_int16_impls(In1) m_Tosizedint_def(In1, uint32)
#define iToUint32_int32_impls(In1) m_Tosizedint_def(In1, uint32)

#define iToInt32_int_impls(In1) m_Tosizedint_def(In1, int32)
#define iToInt32_real_impls(In1) m_Tosizedint_def(In1, int32)
#define iToInt32_uint8_impls(In1) (int32) (In1)
#define iToInt32_int8_impls(In1) (int32) (In1)
#define iToInt32_uint16_impls(In1) (int32) (In1)
#define iToInt32_int16_impls(In1) (int32) (In1)
#define iToInt32_uint32_impls(In1) m_Tosizedint_def(In1, int32)

#define iToInt_int8_impls(In1) (kcg_int) (In1)
#define iToInt_uint8_impls(In1) (kcg_int) (In1)
#define iToInt_int16_impls(In1) (kcg_int) (In1)
#define iToInt_uint16_impls(In1) (kcg_int) (In1)
#define iToInt_int32_impls(In1) (kcg_int) (In1)
#define iToInt_uint32_impls(In1) (kcg_int) (In1)

#define iToReal_int8_impls(In1) (kcg_real) (In1)
#define iToReal_uint8_impls(In1) (kcg_real) (In1)
#define iToReal_int16_impls(In1) (kcg_real) (In1)
#define iToReal_uint16_impls(In1) (kcg_real) (In1)
#define iToReal_int32_impls(In1) (kcg_real) (In1)
#define iToReal_uint32_impls(In1) (kcg_real) (In1)


/*****************************
 * Arithmetic functions      *
 *****************************/

/* Sum */
#define iSum_def(In1, In2, typename) \
	(typename) (In1) + (In2)

#define iSum_int8_impls(In1, In2) iSum_def(In1, In2, int8)
#define iSum_uint8_impls(In1, In2) iSum_def(In1, In2, uint8)
#define iSum_int16_impls(In1, In2) iSum_def(In1, In2, int16)
#define iSum_uint16_impls(In1, In2) iSum_def(In1, In2, uint16)
#define iSum_int32_impls(In1, In2) iSum_def(In1, In2, int32)
#define iSum_uint32_impls(In1, In2) iSum_def(In1, In2, uint32)


/* Sum Protected*/
#define iSumSat_def(In1, In2, typename, uppertype, valuemin, valuemax) \
	(typename) SaturateOutput((uppertype) (In1) + (In2), valuemin, valuemax)

#define iSumSat_int8_impls(In1, In2) iSumSat_def(In1, In2, int8, int16, Min_int8, Max_int8)
#define iSumSat_uint8_impls(In1, In2) iSumSat_def(In1, In2, uint8, uint16, Min_uint8, Max_uint8)
#define iSumSat_int16_impls(In1, In2) iSumSat_def(In1, In2, int16, int32, Min_int16, Max_int16)
#define iSumSat_uint16_impls(In1, In2) iSumSat_def(In1, In2, uint16, uint32, Min_uint16, Max_uint16)
/*** Caution: if int64 or uint64 are not defined, these operators must not be used or must be redefined */
#if defined(int64) && defined(uint64)
#define iSumSat_int32_impls(In1, In2) iSumSat_def(In1, In2, int32, int64, Min_int32, Max_int32)
#define iSumSat_uint32_impls(In1, In2) iSumSat_def(In1, In2, uint32, uint64, Min_uint32, Max_uint32)
#endif


/* Substraction */
#define iSub_def(In1, In2, typename) \
	(typename) (In1) - (In2)

#define iSub_int8_impls(In1, In2) iSub_def(In1, In2, int8)
#define iSub_uint8_impls(In1, In2) iSub_def(In1, In2, uint8)
#define iSub_int16_impls(In1, In2) iSub_def(In1, In2, int16)
#define iSub_uint16_impls(In1, In2) iSub_def(In1, In2, uint16)
#define iSub_int32_impls(In1, In2) iSub_def(In1, In2, int32)
#define iSub_uint32_impls(In1, In2) iSub_def(In1, In2, uint32)


/* Substraction Protected*/
#define iSubSat_def(In1, In2, typename, uppertype, valuemin, valuemax) \
	(typename) SaturateOutput((uppertype) (In1) - (In2), valuemin, valuemax)

#define iSubSat_int8_impls(In1, In2) iSubSat_def(In1, In2, int8, int16, Min_int8, Max_int8)
#define iSubSat_uint8_impls(In1, In2) iSubSat_def(In1, In2, uint8, int16, Min_uint8, Max_uint8)
#define iSubSat_int16_impls(In1, In2) iSubSat_def(In1, In2, int16, int32, Min_int16, Max_int16)
#define iSubSat_uint16_impls(In1, In2) iSubSat_def(In1, In2, uint16, int32, Min_uint16, Max_uint16)
/*** Caution: if int64 or uint64 are not defined, these operators must not be used or must be redefined */
#if defined(int64) 
#define iSubSat_int32_impls(In1, In2) iSubSat_def(In1, In2, int32, int64, Min_int32, Max_int32)
#define iSubSat_uint32_impls(In1, In2) iSubSat_def(In1, In2, uint32, int64, Min_uint32, Max_uint32)
#endif


/* Negation */
#define iNeg_def(In1, typename) \
	(typename) (- (In1))

#define iNeg_int8_impls(In1) iNeg_def(In1, int8)
#define iNeg_int16_impls(In1) iNeg_def(In1, int16)
#define iNeg_int32_impls(In1) iNeg_def(In1, int32)


/* Negation Protected */
#define iNegSat_def(In1, typename, valuemin, valuemax) \
	((In1) == valuemin) ? valuemax : - (typename)(In1)

#define iNegSat_int8_impls(In1) iNegSat_def(In1, int8, Min_int8, Max_int8)
#define iNegSat_int16_impls(In1) iNegSat_def(In1, int16, Min_int16, Max_int16)
#define iNegSat_int32_impls(In1) iNegSat_def(In1, int32, Min_int32, Max_int32)

/* Product */

/* Mul */
#define iMul_def(In1, In2, typename) \
	(typename) (In1) * (In2)

#define iMul_int8_impls(In1, In2) iMul_def(In1, In2, int8)
#define iMul_uint8_impls(In1, In2) iMul_def(In1, In2, uint8)
#define iMul_int16_impls(In1, In2) iMul_def(In1, In2, int16)
#define iMul_uint16_impls(In1, In2) iMul_def(In1, In2, uint16)
#define iMul_int32_impls(In1, In2) iMul_def(In1, In2, int32)
#define iMul_uint32_impls(In1, In2) iMul_def(In1, In2, uint32)


/* Mul Protected */
#define iMulSat_def(In1, In2, typename, uppertype, valuemin, valuemax) \
	(typename) SaturateOutput((uppertype) (In1) * (In2), valuemin, valuemax)

#define iMulSat_int8_impls(In1, In2) iMulSat_def(In1, In2, int8, int16, Min_int8, Max_int8)
#define iMulSat_uint8_impls(In1, In2) iMulSat_def(In1, In2, uint8, uint16, Min_uint8, Max_uint8)
#define iMulSat_int16_impls(In1, In2) iMulSat_def(In1, In2, int16, int32, Min_int16, Max_int16)
#define iMulSat_uint16_impls(In1, In2) iMulSat_def(In1, In2, uint16, uint32, Min_uint16, Max_uint16)
/*** Caution: if int64 or uint64 are not defined, these operators must not be used or must be redefined */
#if defined(int64) && defined(uint64)
#define iMulSat_int32_impls(In1, In2) iMulSat_def(In1, In2, int32, int64, Min_int32, Max_int32)
#define iMulSat_uint32_impls(In1, In2) iMulSat_def(In1, In2, uint32, uint64, Min_uint32, Max_uint32)
#endif


/* Products that avoids cast on the 2 operands to get result on the upper size */
/* Mul16 */
#define iMul16_int8_impls(In1, In2) (int16) (In1) * (In2)

/* Mul16U */
#define iMul16U_uint8_impls(In1, In2) (In1) * (In2)

/* Mul32 */
#define iMul32_int16_impls(In1, In2) (int32) (In1) * (In2)

/* Mul32U */
#define iMul32U_uint16_impls(In1, In2) (uint32) (In1) * (In2)


/* Division (rounding toward zero), with Underflow check (next release) */
#define iDiv_def(In1, In2, typename) \
	(typename) (In1) / (In2)
#define iDiv_unsigneddef(In1, In2, typename) \
	(typename) (In1) / (In2)

#define iDiv_int8_impls(In1, In2) iDiv_def(In1, In2, int8)
#define iDiv_uint8_impls(In1, In2) iDiv_unsigneddef(In1, In2, uint8)
#define iDiv_int16_impls(In1, In2) iDiv_def(In1, In2, int16)
#define iDiv_uint16_impls(In1, In2) iDiv_unsigneddef(In1, In2, uint16)
#define iDiv_int32_impls(In1, In2) iDiv_def(In1, In2, int32)
#define iDiv_uint32_impls(In1, In2) iDiv_unsigneddef(In1, In2, uint32)

/* Division (rounding toward zero) protected, with Underflow check (next release) */
#define iDivSat_signeddef(In1, In2, typename, valuemin, valuemax) \
	(((In1) == valuemin) && ((In2) == ((typename) -1))) \
	   ? valuemax : (typename) (In1) / (In2)

#define iDivSat_int8_impls(In1, In2) iDivSat_signeddef(In1, In2, int8, Min_int8, Max_int8)
#define iDivSat_uint8_impls(In1, In2) iDiv_unsigneddef(In1, In2, uint8)
#define iDivSat_int16_impls(In1, In2) iDivSat_signeddef(In1, In2, int16, Min_int16, Max_int16)
#define iDivSat_uint16_impls(In1, In2) iDiv_unsigneddef(In1, In2, uint16)
#define iDivSat_int32_impls(In1, In2) iDivSat_signeddef(In1, In2, int32, Min_int32, Max_int32)
#define iDivSat_uint32_impls(In1, In2) iDiv_unsigneddef(In1, In2, uint32)


/* Division (rounding toward zero), no Underflow check */
#define iDivFix_def(In1, In2, typename) \
	(typename) (In1) / (In2)
#define iDivFix_unsigneddef(In1, In2, typename) \
	(typename) (In1) / (In2)

#define iDivFix_int8_impls(In1, In2) iDivFix_def(In1, In2, int8)
#define iDivFix_uint8_impls(In1, In2) iDivFix_unsigneddef(In1, In2, uint8)
#define iDivFix_int16_impls(In1, In2) iDivFix_def(In1, In2, int16)
#define iDivFix_uint16_impls(In1, In2) iDivFix_unsigneddef(In1, In2, uint16)
#define iDivFix_int32_impls(In1, In2) iDivFix_def(In1, In2, int32)
#define iDivFix_uint32_impls(In1, In2) iDivFix_unsigneddef(In1, In2, uint32)


/* Division (rounding Ceil), no Underflow check */
#define iDivCeil_def(In1, In2, typename, uppertype, valuemin, valuemax) \
	(((In1) > 0) && ((In2) > 0)) \
	   ? (((typename) (In1) - 1) / (In2)) + 1 \
	   : ( (((In1) < 0) && ((In2) < 0))  \
	       ? (((typename) (In1) + 1) / (In2)) + 1 \
	       : (typename) (In1) / (In2) )
#define iDivCeil_unsigneddef(In1, In2, typename) \
	((In1) == 0 ? 0 : (((typename) (In1) - 1) / (In2)) + 1)

#define iDivCeil_int8_impls(In1, In2) iDivCeil_def(In1, In2, int8, int16, Min_int8, Max_int8)
#define iDivCeil_uint8_impls(In1, In2) iDivCeil_unsigneddef(In1, In2, uint8)
#define iDivCeil_int16_impls(In1, In2) iDivCeil_def(In1, In2, int16, int32, Min_int16, Max_int16)
#define iDivCeil_uint16_impls(In1, In2) iDivCeil_unsigneddef(In1, In2, uint16)
#define iDivCeil_int32_impls(In1, In2) iDivCeil_def(In1, In2, int32, int64, Min_int32, Max_int32)
#define iDivCeil_uint32_impls(In1, In2) iDivCeil_unsigneddef(In1, In2, uint32)


/* Division (rounding floor), no Underflow check */
#define iDivFloor_def(In1, In2, typename, uppertype, valuemin, valuemax) \
	(((In1) > 0) && ((In2) < 0)) \
	   ? (((typename) (In1) - 1) / (In2)) - 1 \
	   : ( (((In1) < 0) && ((In2) > 0)) \
	        ? (((typename) (In1) + 1) / (In2)) - 1 \
	        : (typename) (In1) / (In2) )
#define iDivFloor_unsigneddef(In1, In2, typename) \
	(typename) (In1) / (In2)

#define iDivFloor_int8_impls(In1, In2) iDivFloor_def(In1, In2, int8, int16, Min_int8, Max_int8)
#define iDivFloor_uint8_impls(In1, In2) iDivFloor_unsigneddef(In1, In2, uint8)
#define iDivFloor_int16_impls(In1, In2) iDivFloor_def(In1, In2, int16, int32, Min_int16, Max_int16)
#define iDivFloor_uint16_impls(In1, In2) iDivFloor_unsigneddef(In1, In2, uint16)
#define iDivFloor_int32_impls(In1, In2) iDivFloor_def(In1, In2, int32, int64, Min_int32, Max_int32)
#define iDivFloor_uint32_impls(In1, In2) iDivFloor_unsigneddef(In1, In2, uint32)



/* Modulo */
#define iMod_def(In1, In2, typename) (typename) (In1) % (In2)

#define iMod_int8_impls(In1, In2) iMod_def(In1, In2, int8)
#define iMod_uint8_impls(In1, In2) iMod_def(In1, In2, uint8)
#define iMod_int16_impls(In1, In2) iMod_def(In1, In2, int16)
#define iMod_uint16_impls(In1, In2) iMod_def(In1, In2, uint16)
#define iMod_int32_impls(In1, In2) iMod_def(In1, In2, int32)
#define iMod_uint32_impls(In1, In2) iMod_def(In1, In2, uint32)



/*****************************
 * Compare functions         *
 *****************************/
 
/* Less */
#define iLess_int8_int8_impls(In1, In2) (In1) < (In2)
#define iLess_int8_int16_impls(In1, In2) ((int16) (In1)) < (In2)
#define iLess_int8_int32_impls(In1, In2) ((int32) (In1)) < (In2)
#define iLess_uint8_uint8_impls(In1, In2) (In1) < (In2)
#define iLess_uint8_uint16_impls(In1, In2) ((uint16) (In1)) < (In2)
#define iLess_uint8_uint32_impls(In1, In2) ((uint32) (In1)) < (In2)
#define iLess_int16_int8_impls(In1, In2) (In1) < (int16) (In2)
#define iLess_int16_int16_impls(In1, In2) (In1) < (In2)
#define iLess_int16_int32_impls(In1, In2) ((int32) (In1)) < (In2)
#define iLess_uint16_uint8_impls(In1, In2) (In1) < (uint16) (In2)
#define iLess_uint16_uint16_impls(In1, In2) (In1) < (In2)
#define iLess_uint16_uint32_impls(In1, In2) ((uint32) (In1)) < (In2)
#define iLess_int32_int8_impls(In1, In2) (In1) < (int32) (In2)
#define iLess_int32_int16_impls(In1, In2) (In1) < (int32) (In2)
#define iLess_int32_int32_impls(In1, In2) (In1) < (In2)
#define iLess_uint32_uint8_impls(In1, In2) (In1) < (uint32) (In2)
#define iLess_uint32_uint16_impls(In1, In2) (In1) < (uint32) (In2)
#define iLess_uint32_uint32_impls(In1, In2) (In1) < (In2)

/* Less Equal */
#define iLessEq_int8_int8_impls(In1, In2) (In1) <= (In2)
#define iLessEq_int8_int16_impls(In1, In2) ((int16) (In1)) <= (In2)
#define iLessEq_int8_int32_impls(In1, In2) ((int32) (In1)) <= (In2)
#define iLessEq_uint8_uint8_impls(In1, In2) (In1) <= (In2)
#define iLessEq_uint8_uint16_impls(In1, In2) ((uint16) (In1)) <= (In2)
#define iLessEq_uint8_uint32_impls(In1, In2) ((uint32) (In1)) <= (In2)
#define iLessEq_int16_int8_impls(In1, In2) (In1) <= (int16) (In2)
#define iLessEq_int16_int16_impls(In1, In2) (In1) <= (In2)
#define iLessEq_int16_int32_impls(In1, In2) ((int32) (In1)) <= (In2)
#define iLessEq_uint16_uint8_impls(In1, In2) (In1) <= (uint16) (In2)
#define iLessEq_uint16_uint16_impls(In1, In2) (In1) <= (In2)
#define iLessEq_uint16_uint32_impls(In1, In2) ((uint32) (In1)) <= (In2)
#define iLessEq_int32_int8_impls(In1, In2) (In1) <= (int32) (In2)
#define iLessEq_int32_int16_impls(In1, In2) (In1) <= (int32) (In2)
#define iLessEq_int32_int32_impls(In1, In2) (In1) <= (In2)
#define iLessEq_uint32_uint8_impls(In1, In2) (In1) <= (uint32) (In2)
#define iLessEq_uint32_uint16_impls(In1, In2) (In1) <= (uint32) (In2)
#define iLessEq_uint32_uint32_impls(In1, In2) (In1) <= (In2)

/* Equal */
#define iEqual_int8_int8_impls(In1, In2) (In1) == (In2)
#define iEqual_int8_int16_impls(In1, In2) ((int16) (In1)) == (In2)
#define iEqual_int8_int32_impls(In1, In2) ((int32) (In1)) == (In2)
#define iEqual_uint8_uint8_impls(In1, In2) (In1) == (In2)
#define iEqual_uint8_uint16_impls(In1, In2) ((uint16) (In1)) == (In2)
#define iEqual_uint8_uint32_impls(In1, In2) ((uint32) (In1)) == (In2)
#define iEqual_int16_int8_impls(In1, In2) (In1) == (int16) (In2)
#define iEqual_int16_int16_impls(In1, In2) (In1) == (In2)
#define iEqual_int16_int32_impls(In1, In2) ((int32) (In1)) == (In2)
#define iEqual_uint16_uint8_impls(In1, In2) (In1) == (uint16) (In2)
#define iEqual_uint16_uint16_impls(In1, In2) (In1) == (In2)
#define iEqual_uint16_uint32_impls(In1, In2) ((uint32) (In1)) == (In2)
#define iEqual_int32_int8_impls(In1, In2) (In1) == (int32) (In2)
#define iEqual_int32_int16_impls(In1, In2) (In1) == (int32) (In2)
#define iEqual_int32_int32_impls(In1, In2) (In1) == (In2)
#define iEqual_uint32_uint8_impls(In1, In2) (In1) == (uint32) (In2)
#define iEqual_uint32_uint16_impls(In1, In2) (In1) == (uint32) (In2)
#define iEqual_uint32_uint32_impls(In1, In2) (In1) == (In2)

/* Different */
#define iDifferent_int8_int8_impls(In1, In2) (In1) != (In2)
#define iDifferent_int8_int16_impls(In1, In2) ((int16) (In1)) != (In2)
#define iDifferent_int8_int32_impls(In1, In2) ((int32) (In1)) != (In2)
#define iDifferent_uint8_uint8_impls(In1, In2) (In1) != (In2)
#define iDifferent_uint8_uint16_impls(In1, In2) ((uint16) (In1)) != (In2)
#define iDifferent_uint8_uint32_impls(In1, In2) ((uint32) (In1)) != (In2)
#define iDifferent_int16_int8_impls(In1, In2) (In1) != (int16) (In2)
#define iDifferent_int16_int16_impls(In1, In2) (In1) != (In2)
#define iDifferent_int16_int32_impls(In1, In2) ((int32) (In1)) != (In2)
#define iDifferent_uint16_uint8_impls(In1, In2) (In1) != (uint16) (In2)
#define iDifferent_uint16_uint16_impls(In1, In2) (In1) != (In2)
#define iDifferent_uint16_uint32_impls(In1, In2) ((uint32) (In1)) != (In2)
#define iDifferent_int32_int8_impls(In1, In2) (In1) != (int32) (In2)
#define iDifferent_int32_int16_impls(In1, In2) (In1) != (int32) (In2)
#define iDifferent_int32_int32_impls(In1, In2) (In1) != (In2)
#define iDifferent_uint32_uint8_impls(In1, In2) (In1) != (uint32) (In2)
#define iDifferent_uint32_uint16_impls(In1, In2) (In1) != (uint32) (In2)
#define iDifferent_uint32_uint32_impls(In1, In2) (In1) != (In2)

/* Greater */
#define iGreater_int8_int8_impls(In1, In2) (In1) > (In2)
#define iGreater_int8_int16_impls(In1, In2) ((int16) (In1)) > (In2)
#define iGreater_int8_int32_impls(In1, In2) ((int32) (In1)) > (In2)
#define iGreater_uint8_uint8_impls(In1, In2) (In1) > (In2)
#define iGreater_uint8_uint16_impls(In1, In2) ((uint16) (In1)) > (In2)
#define iGreater_uint8_uint32_impls(In1, In2) ((uint32) (In1)) > (In2)
#define iGreater_int16_int8_impls(In1, In2) (In1) > (int16) (In2)
#define iGreater_int16_int16_impls(In1, In2) (In1) > (In2)
#define iGreater_int16_int32_impls(In1, In2) ((int32) (In1)) > (In2)
#define iGreater_uint16_uint8_impls(In1, In2) (In1) > (uint16) (In2)
#define iGreater_uint16_uint16_impls(In1, In2) (In1) > (In2)
#define iGreater_uint16_uint32_impls(In1, In2) ((uint32) (In1)) > (In2)
#define iGreater_int32_int8_impls(In1, In2) (In1) > (int32) (In2)
#define iGreater_int32_int16_impls(In1, In2) (In1) > (int32) (In2)
#define iGreater_int32_int32_impls(In1, In2) (In1) > (In2)
#define iGreater_uint32_uint8_impls(In1, In2) (In1) > (uint32) (In2)
#define iGreater_uint32_uint16_impls(In1, In2) (In1) > (uint32) (In2)
#define iGreater_uint32_uint32_impls(In1, In2) (In1) > (In2)

/* Greater Equal */
#define iGreaterEq_int8_int8_impls(In1, In2) (In1) >= (In2)
#define iGreaterEq_int8_int16_impls(In1, In2) ((int16) (In1)) >= (In2)
#define iGreaterEq_int8_int32_impls(In1, In2) ((int32) (In1)) >= (In2)
#define iGreaterEq_uint8_uint8_impls(In1, In2) (In1) >= (In2)
#define iGreaterEq_uint8_uint16_impls(In1, In2) ((uint16) (In1)) >= (In2)
#define iGreaterEq_uint8_uint32_impls(In1, In2) ((uint32) (In1)) >= (In2)
#define iGreaterEq_int16_int8_impls(In1, In2) (In1) >= (int16) (In2)
#define iGreaterEq_int16_int16_impls(In1, In2) (In1) >= (In2)
#define iGreaterEq_int16_int32_impls(In1, In2) ((int32) (In1)) >= (In2)
#define iGreaterEq_uint16_uint8_impls(In1, In2) (In1) >= (uint16) (In2)
#define iGreaterEq_uint16_uint16_impls(In1, In2) (In1) >= (In2)
#define iGreaterEq_uint16_uint32_impls(In1, In2) ((uint32) (In1)) >= (In2)
#define iGreaterEq_int32_int8_impls(In1, In2) (In1) >= (int32) (In2)
#define iGreaterEq_int32_int16_impls(In1, In2) (In1) >= (int32) (In2)
#define iGreaterEq_int32_int32_impls(In1, In2) (In1) >= (In2)
#define iGreaterEq_uint32_uint8_impls(In1, In2) (In1) >= (uint32) (In2)
#define iGreaterEq_uint32_uint16_impls(In1, In2) (In1) >= (uint32) (In2)
#define iGreaterEq_uint32_uint32_impls(In1, In2) (In1) >= (In2)


/*****************************
 * Bitwise Operators         *
 *****************************/
/* Mask AND */
#define iBwAND_def(In1, Mask, typename) (In1) & (typename) (Mask)

#define iBwAND_int8_int_impls(In1, Mask) iBwAND_def(In1, Mask, int8)
#define iBwAND_int8_impls(In1, Mask) iBwAND_def(In1, Mask, int8)
#define iBwAND_uint8_int_impls(In1, Mask) iBwAND_def(In1, Mask, uint8)
#define iBwAND_uint8_impls(In1, Mask) iBwAND_def(In1, Mask, uint8)
#define iBwAND_int16_int_impls(In1, Mask) iBwAND_def(In1, Mask, int16)
#define iBwAND_int16_impls(In1, Mask) iBwAND_def(In1, Mask, int16)
#define iBwAND_uint16_int_impls(In1, Mask) iBwAND_def(In1, Mask, uint16)
#define iBwAND_uint16_impls(In1, Mask) iBwAND_def(In1, Mask, uint16)
#define iBwAND_int32_int_impls(In1, Mask) iBwAND_def(In1, Mask, int32)
#define iBwAND_int32_impls(In1, Mask) iBwAND_def(In1, Mask, int32)
#define iBwAND_uint32_int_impls(In1, Mask) iBwAND_def(In1, Mask, uint32)
#define iBwAND_uint32_impls(In1, Mask) iBwAND_def(In1, Mask, uint32)

/* Mask OR */
#define iBwOR_def(In1, Mask, typename) (In1) | (typename) (Mask)

#define iBwOR_int8_int_impls(In1, Mask) iBwOR_def(In1, Mask, int8)
#define iBwOR_int8_impls(In1, Mask) iBwOR_def(In1, Mask, int8)
#define iBwOR_uint8_int_impls(In1, Mask) iBwOR_def(In1, Mask, uint8)
#define iBwOR_uint8_impls(In1, Mask) iBwOR_def(In1, Mask, uint8)
#define iBwOR_int16_int_impls(In1, Mask) iBwOR_def(In1, Mask, int16)
#define iBwOR_int16_impls(In1, Mask) iBwOR_def(In1, Mask, int16)
#define iBwOR_uint16_int_impls(In1, Mask) iBwOR_def(In1, Mask, uint16)
#define iBwOR_uint16_impls(In1, Mask) iBwOR_def(In1, Mask, uint16)
#define iBwOR_int32_int_impls(In1, Mask) iBwOR_def(In1, Mask, int32)
#define iBwOR_int32_impls(In1, Mask) iBwOR_def(In1, Mask, int32)
#define iBwOR_uint32_int_impls(In1, Mask) iBwOR_def(In1, Mask, uint32)
#define iBwOR_uint32_impls(In1, Mask) iBwOR_def(In1, Mask, uint32)

/* Mask XOR */
#define iBwXOR_def(In1, Mask, typename) (In1) ^ (typename) (Mask)

#define iBwXOR_int8_int_impls(In1, Mask) iBwXOR_def(In1, Mask, int8)
#define iBwXOR_int8_impls(In1, Mask) iBwXOR_def(In1, Mask, int8)
#define iBwXOR_uint8_int_impls(In1, Mask) iBwXOR_def(In1, Mask, uint8)
#define iBwXOR_uint8_impls(In1, Mask) iBwXOR_def(In1, Mask, uint8)
#define iBwXOR_int16_int_impls(In1, Mask) iBwXOR_def(In1, Mask, int16)
#define iBwXOR_int16_impls(In1, Mask) iBwXOR_def(In1, Mask, int16)
#define iBwXOR_uint16_int_impls(In1, Mask) iBwXOR_def(In1, Mask, uint16)
#define iBwXOR_uint16_impls(In1, Mask) iBwXOR_def(In1, Mask, uint16)
#define iBwXOR_int32_int_impls(In1, Mask) iBwXOR_def(In1, Mask, int32)
#define iBwXOR_int32_impls(In1, Mask) iBwXOR_def(In1, Mask, int32)
#define iBwXOR_uint32_int_impls(In1, Mask) iBwXOR_def(In1, Mask, uint32)
#define iBwXOR_uint32_impls(In1, Mask) iBwXOR_def(In1, Mask, uint32)

/* NOT */
#define iBwNOT_def(In1, typename) ~ (In1)

#define iBwNOT_int8_impls(In1) iBwNOT_def(In1, int8)
#define iBwNOT_uint8_impls(In1) iBwNOT_def(In1, uint8)
#define iBwNOT_int16_impls(In1) iBwNOT_def(In1, int16)
#define iBwNOT_uint16_impls(In1) iBwNOT_def(In1, uint16)
#define iBwNOT_int32_impls(In1) iBwNOT_def(In1, int32)
#define iBwNOT_uint32_impls(In1) iBwNOT_def(In1, uint32)


/* Left Shift */
/* No check of overflow in simulation */
#define iShiftLeft_def(In1, Shift, typename) (In1) << (typename) (Shift)

#define iShiftLeft_int8_int_impls(In1, Shift) iShiftLeft_def(In1, Shift, int8)
#define iShiftLeft_int8_impls(In1, Shift) iShiftLeft_def(In1, Shift, int8)
#define iShiftLeft_uint8_int_impls(In1, Shift) iShiftLeft_def(In1, Shift, uint8)
#define iShiftLeft_uint8_impls(In1, Shift) iShiftLeft_def(In1, Shift, uint8)
#define iShiftLeft_int16_int_impls(In1, Shift) iShiftLeft_def(In1, Shift, int16)
#define iShiftLeft_int16_impls(In1, Shift) iShiftLeft_def(In1, Shift, int16)
#define iShiftLeft_uint16_int_impls(In1, Shift) iShiftLeft_def(In1, Shift, uint16)
#define iShiftLeft_uint16_impls(In1, Shift) iShiftLeft_def(In1, Shift, uint16)
#define iShiftLeft_int32_int_impls(In1, Shift) iShiftLeft_def(In1, Shift, int32)
#define iShiftLeft_int32_impls(In1, Shift) iShiftLeft_def(In1, Shift, int32)
#define iShiftLeft_uint32_int_impls(In1, Shift) iShiftLeft_def(In1, Shift, uint32)
#define iShiftLeft_uint32_impls(In1, Shift) iShiftLeft_def(In1, Shift, uint32)


/* Left Shift */
/* "arithmetic" left shift: Checks overflows in simulation (next release) */
#define iDecLsb_def(In1, Shift, typename, uppertype, valuemin, valuemax) \
	(In1) << (typename) (Shift)

#define iDecLsb_int8_int_impls(In1, Shift) iDecLsb_def(In1, Shift, int8, int16, Min_int8, Max_int8)
#define iDecLsb_int8_impls(In1, Shift) iDecLsb_def(In1, Shift, int8, int16, Min_int8, Max_int8)
#define iDecLsb_uint8_int_impls(In1, Shift) iDecLsb_def(In1, Shift, uint8, uint16, Min_uint8, Max_uint8)
#define iDecLsb_uint8_impls(In1, Shift) iDecLsb_def(In1, Shift, uint8, uint16, Min_uint8, Max_uint8)
#define iDecLsb_int16_int_impls(In1, Shift) iDecLsb_def(In1, Shift, int16, int32, Min_int16, Max_int16)
#define iDecLsb_int16_impls(In1, Shift) iDecLsb_def(In1, Shift, int16, int32, Min_int16, Max_int16)
#define iDecLsb_uint16_int_impls(In1, Shift) iDecLsb_def(In1, Shift, uint16, uint32, Min_uint16, Max_uint16)
#define iDecLsb_uint16_impls(In1, Shift) iDecLsb_def(In1, Shift, uint16, uint32, Min_uint16, Max_uint16)
#define iDecLsb_int32_int_impls(In1, Shift) iDecLsb_def(In1, Shift, int32, int64, Min_int32, Max_int32)
#define iDecLsb_int32_impls(In1, Shift) iDecLsb_def(In1, Shift, int32, int64, Min_int32, Max_int32)
#define iDecLsb_uint32_int_impls(In1, Shift) iDecLsb_def(In1, Shift, uint32, uint64, Min_uint32, Max_uint32)
#define iDecLsb_uint32_impls(In1, Shift) iDecLsb_def(In1, Shift, uint32, uint64, Min_uint32, Max_uint32)


/* Right Shift (rounding toward floor) */
/* No check of underflow in simulation */
#define iShiftRight_def(In1, Shift, typename) (In1) >> (typename) (Shift)

#define iShiftRight_int8_int_impls(In1, Shift) iShiftRight_def(In1, Shift, int8)
#define iShiftRight_int8_impls(In1, Shift) iShiftRight_def(In1, Shift, int8)
#define iShiftRight_uint8_int_impls(In1, Shift) iShiftRight_def(In1, Shift, uint8)
#define iShiftRight_uint8_impls(In1, Shift) iShiftRight_def(In1, Shift, uint8)
#define iShiftRight_int16_int_impls(In1, Shift) iShiftRight_def(In1, Shift, int16)
#define iShiftRight_int16_impls(In1, Shift) iShiftRight_def(In1, Shift, int16)
#define iShiftRight_uint16_int_impls(In1, Shift) iShiftRight_def(In1, Shift, uint16)
#define iShiftRight_uint16_impls(In1, Shift) iShiftRight_def(In1, Shift, uint16)
#define iShiftRight_int32_int_impls(In1, Shift) iShiftRight_def(In1, Shift, int32)
#define iShiftRight_int32_impls(In1, Shift) iShiftRight_def(In1, Shift, int32)
#define iShiftRight_uint32_int_impls(In1, Shift) iShiftRight_def(In1, Shift, uint32)
#define iShiftRight_uint32_impls(In1, Shift) iShiftRight_def(In1, Shift, uint32)


/* "arithmetic" Right Shift, rounding toward floor */
/* Checks underflows (i.e. result becomes 0) in simulation (next release) */
#define iIncLsbFloor_def(In1, Shift, typename, op_name) \
	(In1) >> (typename) (Shift)

#define iIncLsbFloor_int8_int_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, int8, Int_IncLsbFloor)
#define iIncLsbFloor_int8_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, int8, Int_IncLsbFloor)
#define iIncLsbFloor_uint8_int_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, uint8, Int_IncLsbFloor)
#define iIncLsbFloor_uint8_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, uint8, Int_IncLsbFloor)
#define iIncLsbFloor_int16_int_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, int16, Int_IncLsbFloor)
#define iIncLsbFloor_int16_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, int16, Int_IncLsbFloor)
#define iIncLsbFloor_uint16_int_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, uint16, Int_IncLsbFloor)
#define iIncLsbFloor_uint16_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, uint16, Int_IncLsbFloor)
#define iIncLsbFloor_int32_int_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, int32, Int_IncLsbFloor)
#define iIncLsbFloor_int32_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, int32, Int_IncLsbFloor)
#define iIncLsbFloor_uint32_int_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, uint32, Int_IncLsbFloor)
#define iIncLsbFloor_uint32_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, uint32, Int_IncLsbFloor)

/* "arithmetic" Right Shift, rounding toward ceilling */
/*  Checks underflows (i.e. result becomes 0) in simulation (next release) */
#define iIncLsbCeil_def(In1, Shift, typename, size, valuemin, op_name) \
	((Shift) >= (size)) \
	? (typename)0 \
	: ( ((In1)==valuemin) \
	     ? (In1) >> (typename)(Shift) \
	     : ( ((In1)-1) >> (typename)(Shift) ) + 1 )

#define iIncLsbCeil_int8_int_impls(In1, Shift) iIncLsbCeil_def(In1, Shift, int8, 8, Min_int8, Int_IncLsbCeil)
#define iIncLsbCeil_int8_impls(In1, Shift) iIncLsbCeil_def(In1, Shift, int8, 8, Min_int8, Int_IncLsbCeil)
#define iIncLsbCeil_uint8_int_impls(In1, Shift) iIncLsbCeil_def(In1, Shift, uint8, 8, Min_uint8, Int_IncLsbCeil)
#define iIncLsbCeil_uint8_impls(In1, Shift) iIncLsbCeil_def(In1, Shift, uint8, 8, Min_uint8, Int_IncLsbCeil)
#define iIncLsbCeil_int16_int_impls(In1, Shift) iIncLsbCeil_def(In1, Shift, int16, 16, Min_int16, Int_IncLsbCeil)
#define iIncLsbCeil_int16_impls(In1, Shift) iIncLsbCeil_def(In1, Shift, int16, 16, Min_int16, Int_IncLsbCeil)
#define iIncLsbCeil_uint16_int_impls(In1, Shift) iIncLsbCeil_def(In1, Shift, uint16, 16, Min_uint16, Int_IncLsbCeil)
#define iIncLsbCeil_uint16_impls(In1, Shift) iIncLsbCeil_def(In1, Shift, uint16, 16, Min_uint16, Int_IncLsbCeil)
#define iIncLsbCeil_int32_int_impls(In1, Shift) iIncLsbCeil_def(In1, Shift, int32, 32, Min_int32, Int_IncLsbCeil)
#define iIncLsbCeil_int32_impls(In1, Shift) iIncLsbCeil_def(In1, Shift, int32, 32, Min_int32, Int_IncLsbCeil)
#define iIncLsbCeil_uint32_int_impls(In1, Shift) iIncLsbCeil_def(In1, Shift, uint32, 32, Min_uint32, Int_IncLsbCeil)
#define iIncLsbCeil_uint32_impls(In1, Shift) iIncLsbCeil_def(In1, Shift, uint32, 32, Min_uint32, Int_IncLsbCeil)

/* "arithmetic" Right Shift, rounding toward zero */
/* Checks underflows (i.e. result becomes 0) in simulation (next release) */
/* for signed type (for unsigned type, is iIncLsbFloor_def) */
#define iIncLsbFix_def(In1, Shift, typename, size, valuemin, op_name) \
	(In1 < 0) \
	? iIncLsbCeil_def(In1, Shift, typename, size, valuemin, op_name) \
	: iIncLsbFloor_def(In1, Shift, typename, op_name)

#define iIncLsbFix_int8_int_impls(In1, Shift) iIncLsbFix_def(In1, Shift, int8, 8, Min_int8, Int_IncLsbFix)
#define iIncLsbFix_int8_impls(In1, Shift) iIncLsbFix_def(In1, Shift, int8, 8, Min_int8, Int_IncLsbFix)
#define iIncLsbFix_uint8_int_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, uint8, Int_IncLsbFix)
#define iIncLsbFix_uint8_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, uint8, Int_IncLsbFix)
#define iIncLsbFix_int16_int_impls(In1, Shift) iIncLsbFix_def(In1, Shift, int16, 16, Min_int16, Int_IncLsbFix)
#define iIncLsbFix_int16_impls(In1, Shift) iIncLsbFix_def(In1, Shift, int16, 16, Min_int16, Int_IncLsbFix)
#define iIncLsbFix_uint16_int_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, uint16, Int_IncLsbFix)
#define iIncLsbFix_uint16_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, uint16, Int_IncLsbFix)
#define iIncLsbFix_int32_int_impls(In1, Shift) iIncLsbFix_def(In1, Shift, int32, 32, Min_int32, Int_IncLsbFix)
#define iIncLsbFix_int32_impls(In1, Shift) iIncLsbFix_def(In1, Shift, int32, 32, Min_int32, Int_IncLsbFix)
#define iIncLsbFix_uint32_int_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, uint32, Int_IncLsbFix)
#define iIncLsbFix_uint32_impls(In1, Shift) iIncLsbFloor_def(In1, Shift, uint32, Int_IncLsbFix)

/* "arithmetic" Right Shift rounding toward nearest */
/* not defined. Possible definition could be: */
/* WARNING: usuable only if Shift > 1 */
/* #define iIncLsbRound_def(In1, Shift, typename) ( ((In1) >> (typename)(Shift-1)) + 1 ) >> 1 */


/**********************************************************************
 * CUSTOMIZATION for targetting: 
 * redefinition of macro definitions of the libimpl operators 
 **********************************************************************/
#include "macro_libimpl_user.h"

