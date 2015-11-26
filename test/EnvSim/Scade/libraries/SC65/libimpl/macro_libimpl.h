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

/*****************************
 * Arithmetic functions      *
 *****************************/

/* Sum Protected*/
#define iSumSat_def(In1, In2, typename, uppertype, valuemin, valuemax) \
	(typename) SaturateOutput((uppertype) (In1) + (In2), valuemin, valuemax)

#define iSumSat_int8_impls(In1, In2) iSumSat_def(In1, In2, kcg_int8, kcg_int16, Min_int8, Max_int8)
#define iSumSat_uint8_impls(In1, In2) iSumSat_def(In1, In2, kcg_uint8, kcg_uint16, Min_uint8, Max_uint8)
#define iSumSat_int16_impls(In1, In2) iSumSat_def(In1, In2, kcg_int16, kcg_int32, Min_int16, Max_int16)
#define iSumSat_uint16_impls(In1, In2) iSumSat_def(In1, In2, kcg_uint16, kcg_uint32, Min_uint16, Max_uint16)
/*** Caution: if int64 or uint64 are not defined, these operators must not be used or must be redefined */
#if defined(int64) && defined(uint64)
#define iSumSat_int32_impls(In1, In2) iSumSat_def(In1, In2, kcg_int32, int64, Min_int32, Max_int32)
#define iSumSat_uint32_impls(In1, In2) iSumSat_def(In1, In2, kcg_uint32, uint64, Min_uint32, Max_uint32)
#endif

/* Substraction Protected*/
#define iSubSat_def(In1, In2, typename, uppertype, valuemin, valuemax) \
	(typename) SaturateOutput((uppertype) (In1) - (In2), valuemin, valuemax)

#define iSubSat_int8_impls(In1, In2) iSubSat_def(In1, In2, kcg_int8, kcg_int16, Min_int8, Max_int8)
#define iSubSat_uint8_impls(In1, In2) iSubSat_def(In1, In2, kcg_uint8, kcg_int16, Min_uint8, Max_uint8)
#define iSubSat_int16_impls(In1, In2) iSubSat_def(In1, In2, kcg_int16, kcg_int32, Min_int16, Max_int16)
#define iSubSat_uint16_impls(In1, In2) iSubSat_def(In1, In2, kcg_uint16, kcg_int32, Min_uint16, Max_uint16)
/*** Caution: if int64 or uint64 are not defined, these operators must not be used or must be redefined */
#if defined(int64) 
#define iSubSat_int32_impls(In1, In2) iSubSat_def(In1, In2, kcg_int32, int64, Min_int32, Max_int32)
#define iSubSat_uint32_impls(In1, In2) iSubSat_def(In1, In2, kcg_uint32, int64, Min_uint32, Max_uint32)
#endif

/* Negation Protected */
#define iNegSat_def(In1, typename, valuemin, valuemax) \
	((In1) == valuemin) ? valuemax : - (typename)(In1)

#define iNegSat_int8_impls(In1) iNegSat_def(In1, kcg_int8, Min_int8, Max_int8)
#define iNegSat_int16_impls(In1) iNegSat_def(In1, kcg_int16, Min_int16, Max_int16)
#define iNegSat_int32_impls(In1) iNegSat_def(In1, kcg_int32, Min_int32, Max_int32)

/* Product */

/* Mul Protected */
#define iMulSat_def(In1, In2, typename, uppertype, valuemin, valuemax) \
	(typename) SaturateOutput((uppertype) (In1) * (In2), valuemin, valuemax)

#define iMulSat_int8_impls(In1, In2) iMulSat_def(In1, In2, kcg_int8, kcg_int16, Min_int8, Max_int8)
#define iMulSat_uint8_impls(In1, In2) iMulSat_def(In1, In2, kcg_uint8, kcg_uint16, Min_uint8, Max_uint8)
#define iMulSat_int16_impls(In1, In2) iMulSat_def(In1, In2, kcg_int16, kcg_int32, Min_int16, Max_int16)
#define iMulSat_uint16_impls(In1, In2) iMulSat_def(In1, In2, kcg_uint16, kcg_uint32, Min_uint16, Max_uint16)
/*** Caution: if int64 or uint64 are not defined, these operators must not be used or must be redefined */
#if defined(int64) && defined(uint64)
#define iMulSat_int32_impls(In1, In2) iMulSat_def(In1, In2, kcg_int32, int64, Min_int32, Max_int32)
#define iMulSat_uint32_impls(In1, In2) iMulSat_def(In1, In2, kcg_uint32, uint64, Min_uint32, Max_uint32)
#endif


/* Products that avoids cast on the 2 operands to get result on the upper size */
/* Mul16 */
#define iMul16_int8_impls(In1, In2) (kcg_int16) (In1) * (In2)

/* Mul16U */
#define iMul16U_uint8_impls(In1, In2) (In1) * (In2)

/* Mul32 */
#define iMul32_int16_impls(In1, In2) (kcg_int32) (In1) * (In2)

/* Mul32U */
#define iMul32U_uint16_impls(In1, In2) (kcg_uint32) (In1) * (In2)

/* Division (rounding toward zero) protected, with Underflow check (next release) */
#define iDivSat_signeddef(In1, In2, typename, valuemin, valuemax) \
	(((In1) == valuemin) && ((In2) == ((typename) -1))) \
	   ? valuemax : (typename) (In1) / (In2)
#define iDiv_unsigneddef(In1, In2, typename) \
	(typename) (In1) / (In2)

#define iDivSat_int8_impls(In1, In2) iDivSat_signeddef(In1, In2, kcg_int8, Min_int8, Max_int8)
#define iDivSat_uint8_impls(In1, In2) iDiv_unsigneddef(In1, In2, kcg_uint8)
#define iDivSat_int16_impls(In1, In2) iDivSat_signeddef(In1, In2, kcg_int16, Min_int16, Max_int16)
#define iDivSat_uint16_impls(In1, In2) iDiv_unsigneddef(In1, In2, kcg_uint16)
#define iDivSat_int32_impls(In1, In2) iDivSat_signeddef(In1, In2, kcg_int32, Min_int32, Max_int32)
#define iDivSat_uint32_impls(In1, In2) iDiv_unsigneddef(In1, In2, kcg_uint32)

/* Division (rounding toward zero), no Underflow check */
#define iDivFix_def(In1, In2, typename) \
	(typename) (In1) / (In2)
#define iDivFix_unsigneddef(In1, In2, typename) \
	(typename) (In1) / (In2)

#define iDivFix_int8_impls(In1, In2) iDivFix_def(In1, In2, kcg_int8)
#define iDivFix_uint8_impls(In1, In2) iDivFix_unsigneddef(In1, In2, kcg_uint8)
#define iDivFix_int16_impls(In1, In2) iDivFix_def(In1, In2, kcg_int16)
#define iDivFix_uint16_impls(In1, In2) iDivFix_unsigneddef(In1, In2, kcg_uint16)
#define iDivFix_int32_impls(In1, In2) iDivFix_def(In1, In2, kcg_int32)
#define iDivFix_uint32_impls(In1, In2) iDivFix_unsigneddef(In1, In2, kcg_uint32)

/* Division (rounding Ceil), no Underflow check */
#define iDivCeil_def(In1, In2, typename, uppertype, valuemin, valuemax) \
	(((In1) > 0) && ((In2) > 0)) \
	   ? (((typename) (In1) - 1) / (In2)) + 1 \
	   : ( (((In1) < 0) && ((In2) < 0))  \
	       ? (((typename) (In1) + 1) / (In2)) + 1 \
	       : (typename) (In1) / (In2) )
#define iDivCeil_unsigneddef(In1, In2, typename) \
	((In1) == 0 ? 0 : (((typename) (In1) - 1) / (In2)) + 1)

#define iDivCeil_int8_impls(In1, In2) iDivCeil_def(In1, In2, kcg_int8, kcg_int16, Min_int8, Max_int8)
#define iDivCeil_uint8_impls(In1, In2) iDivCeil_unsigneddef(In1, In2, kcg_uint8)
#define iDivCeil_int16_impls(In1, In2) iDivCeil_def(In1, In2, kcg_int16, kcg_int32, Min_int16, Max_int16)
#define iDivCeil_uint16_impls(In1, In2) iDivCeil_unsigneddef(In1, In2, kcg_uint16)
#define iDivCeil_int32_impls(In1, In2) iDivCeil_def(In1, In2, kcg_int32, int64, Min_int32, Max_int32)
#define iDivCeil_uint32_impls(In1, In2) iDivCeil_unsigneddef(In1, In2, kcg_uint32)


/* Division (rounding floor), no Underflow check */
#define iDivFloor_def(In1, In2, typename, uppertype, valuemin, valuemax) \
	(((In1) > 0) && ((In2) < 0)) \
	   ? (((typename) (In1) - 1) / (In2)) - 1 \
	   : ( (((In1) < 0) && ((In2) > 0)) \
	        ? (((typename) (In1) + 1) / (In2)) - 1 \
	        : (typename) (In1) / (In2) )
#define iDivFloor_unsigneddef(In1, In2, typename) \
	(typename) (In1) / (In2)

#define iDivFloor_int8_impls(In1, In2) iDivFloor_def(In1, In2, kcg_int8, kcg_int16, Min_int8, Max_int8)
#define iDivFloor_uint8_impls(In1, In2) iDivFloor_unsigneddef(In1, In2, kcg_uint8)
#define iDivFloor_int16_impls(In1, In2) iDivFloor_def(In1, In2, kcg_int16, kcg_int32, Min_int16, Max_int16)
#define iDivFloor_uint16_impls(In1, In2) iDivFloor_unsigneddef(In1, In2, kcg_uint16)
#define iDivFloor_int32_impls(In1, In2) iDivFloor_def(In1, In2, kcg_int32, int64, Min_int32, Max_int32)
#define iDivFloor_uint32_impls(In1, In2) iDivFloor_unsigneddef(In1, In2, kcg_uint32)


/*****************************
 * Compare functions         *
 *****************************/
 
/* Less */
#define iLess_int8_int8_impls(In1, In2) (In1) < (In2)
#define iLess_int8_int16_impls(In1, In2) ((kcg_int16) (In1)) < (In2)
#define iLess_int8_int32_impls(In1, In2) ((kcg_int32) (In1)) < (In2)
#define iLess_uint8_uint8_impls(In1, In2) (In1) < (In2)
#define iLess_uint8_uint16_impls(In1, In2) ((kcg_uint16) (In1)) < (In2)
#define iLess_uint8_uint32_impls(In1, In2) ((kcg_uint32) (In1)) < (In2)
#define iLess_int16_int8_impls(In1, In2) (In1) < (kcg_int16) (In2)
#define iLess_int16_int16_impls(In1, In2) (In1) < (In2)
#define iLess_int16_int32_impls(In1, In2) ((kcg_int32) (In1)) < (In2)
#define iLess_uint16_uint8_impls(In1, In2) (In1) < (kcg_uint16) (In2)
#define iLess_uint16_uint16_impls(In1, In2) (In1) < (In2)
#define iLess_uint16_uint32_impls(In1, In2) ((kcg_uint32) (In1)) < (In2)
#define iLess_int32_int8_impls(In1, In2) (In1) < (kcg_int32) (In2)
#define iLess_int32_int16_impls(In1, In2) (In1) < (kcg_int32) (In2)
#define iLess_int32_int32_impls(In1, In2) (In1) < (In2)
#define iLess_uint32_uint8_impls(In1, In2) (In1) < (kcg_uint32) (In2)
#define iLess_uint32_uint16_impls(In1, In2) (In1) < (kcg_uint32) (In2)
#define iLess_uint32_uint32_impls(In1, In2) (In1) < (In2)

/* Less Equal */
#define iLessEq_int8_int8_impls(In1, In2) (In1) <= (In2)
#define iLessEq_int8_int16_impls(In1, In2) ((kcg_int16) (In1)) <= (In2)
#define iLessEq_int8_int32_impls(In1, In2) ((kcg_int32) (In1)) <= (In2)
#define iLessEq_uint8_uint8_impls(In1, In2) (In1) <= (In2)
#define iLessEq_uint8_uint16_impls(In1, In2) ((kcg_uint16) (In1)) <= (In2)
#define iLessEq_uint8_uint32_impls(In1, In2) ((kcg_uint32) (In1)) <= (In2)
#define iLessEq_int16_int8_impls(In1, In2) (In1) <= (kcg_int16) (In2)
#define iLessEq_int16_int16_impls(In1, In2) (In1) <= (In2)
#define iLessEq_int16_int32_impls(In1, In2) ((kcg_int32) (In1)) <= (In2)
#define iLessEq_uint16_uint8_impls(In1, In2) (In1) <= (kcg_uint16) (In2)
#define iLessEq_uint16_uint16_impls(In1, In2) (In1) <= (In2)
#define iLessEq_uint16_uint32_impls(In1, In2) ((kcg_uint32) (In1)) <= (In2)
#define iLessEq_int32_int8_impls(In1, In2) (In1) <= (kcg_int32) (In2)
#define iLessEq_int32_int16_impls(In1, In2) (In1) <= (kcg_int32) (In2)
#define iLessEq_int32_int32_impls(In1, In2) (In1) <= (In2)
#define iLessEq_uint32_uint8_impls(In1, In2) (In1) <= (kcg_uint32) (In2)
#define iLessEq_uint32_uint16_impls(In1, In2) (In1) <= (kcg_uint32) (In2)
#define iLessEq_uint32_uint32_impls(In1, In2) (In1) <= (In2)

/* Equal */
#define iEqual_int8_int8_impls(In1, In2) (In1) == (In2)
#define iEqual_int8_int16_impls(In1, In2) ((kcg_int16) (In1)) == (In2)
#define iEqual_int8_int32_impls(In1, In2) ((kcg_int32) (In1)) == (In2)
#define iEqual_uint8_uint8_impls(In1, In2) (In1) == (In2)
#define iEqual_uint8_uint16_impls(In1, In2) ((kcg_uint16) (In1)) == (In2)
#define iEqual_uint8_uint32_impls(In1, In2) ((kcg_uint32) (In1)) == (In2)
#define iEqual_int16_int8_impls(In1, In2) (In1) == (kcg_int16) (In2)
#define iEqual_int16_int16_impls(In1, In2) (In1) == (In2)
#define iEqual_int16_int32_impls(In1, In2) ((kcg_int32) (In1)) == (In2)
#define iEqual_uint16_uint8_impls(In1, In2) (In1) == (kcg_uint16) (In2)
#define iEqual_uint16_uint16_impls(In1, In2) (In1) == (In2)
#define iEqual_uint16_uint32_impls(In1, In2) ((kcg_uint32) (In1)) == (In2)
#define iEqual_int32_int8_impls(In1, In2) (In1) == (kcg_int32) (In2)
#define iEqual_int32_int16_impls(In1, In2) (In1) == (kcg_int32) (In2)
#define iEqual_int32_int32_impls(In1, In2) (In1) == (In2)
#define iEqual_uint32_uint8_impls(In1, In2) (In1) == (kcg_uint32) (In2)
#define iEqual_uint32_uint16_impls(In1, In2) (In1) == (kcg_uint32) (In2)
#define iEqual_uint32_uint32_impls(In1, In2) (In1) == (In2)

/* Different */
#define iDifferent_int8_int8_impls(In1, In2) (In1) != (In2)
#define iDifferent_int8_int16_impls(In1, In2) ((kcg_int16) (In1)) != (In2)
#define iDifferent_int8_int32_impls(In1, In2) ((kcg_int32) (In1)) != (In2)
#define iDifferent_uint8_uint8_impls(In1, In2) (In1) != (In2)
#define iDifferent_uint8_uint16_impls(In1, In2) ((kcg_uint16) (In1)) != (In2)
#define iDifferent_uint8_uint32_impls(In1, In2) ((kcg_uint32) (In1)) != (In2)
#define iDifferent_int16_int8_impls(In1, In2) (In1) != (kcg_int16) (In2)
#define iDifferent_int16_int16_impls(In1, In2) (In1) != (In2)
#define iDifferent_int16_int32_impls(In1, In2) ((kcg_int32) (In1)) != (In2)
#define iDifferent_uint16_uint8_impls(In1, In2) (In1) != (kcg_uint16) (In2)
#define iDifferent_uint16_uint16_impls(In1, In2) (In1) != (In2)
#define iDifferent_uint16_uint32_impls(In1, In2) ((kcg_uint32) (In1)) != (In2)
#define iDifferent_int32_int8_impls(In1, In2) (In1) != (kcg_int32) (In2)
#define iDifferent_int32_int16_impls(In1, In2) (In1) != (kcg_int32) (In2)
#define iDifferent_int32_int32_impls(In1, In2) (In1) != (In2)
#define iDifferent_uint32_uint8_impls(In1, In2) (In1) != (kcg_uint32) (In2)
#define iDifferent_uint32_uint16_impls(In1, In2) (In1) != (kcg_uint32) (In2)
#define iDifferent_uint32_uint32_impls(In1, In2) (In1) != (In2)

/* Greater */
#define iGreater_int8_int8_impls(In1, In2) (In1) > (In2)
#define iGreater_int8_int16_impls(In1, In2) ((kcg_int16) (In1)) > (In2)
#define iGreater_int8_int32_impls(In1, In2) ((kcg_int32) (In1)) > (In2)
#define iGreater_uint8_uint8_impls(In1, In2) (In1) > (In2)
#define iGreater_uint8_uint16_impls(In1, In2) ((kcg_uint16) (In1)) > (In2)
#define iGreater_uint8_uint32_impls(In1, In2) ((kcg_uint32) (In1)) > (In2)
#define iGreater_int16_int8_impls(In1, In2) (In1) > (kcg_int16) (In2)
#define iGreater_int16_int16_impls(In1, In2) (In1) > (In2)
#define iGreater_int16_int32_impls(In1, In2) ((kcg_int32) (In1)) > (In2)
#define iGreater_uint16_uint8_impls(In1, In2) (In1) > (kcg_uint16) (In2)
#define iGreater_uint16_uint16_impls(In1, In2) (In1) > (In2)
#define iGreater_uint16_uint32_impls(In1, In2) ((kcg_uint32) (In1)) > (In2)
#define iGreater_int32_int8_impls(In1, In2) (In1) > (kcg_int32) (In2)
#define iGreater_int32_int16_impls(In1, In2) (In1) > (kcg_int32) (In2)
#define iGreater_int32_int32_impls(In1, In2) (In1) > (In2)
#define iGreater_uint32_uint8_impls(In1, In2) (In1) > (kcg_uint32) (In2)
#define iGreater_uint32_uint16_impls(In1, In2) (In1) > (kcg_uint32) (In2)
#define iGreater_uint32_uint32_impls(In1, In2) (In1) > (In2)

/* Greater Equal */
#define iGreaterEq_int8_int8_impls(In1, In2) (In1) >= (In2)
#define iGreaterEq_int8_int16_impls(In1, In2) ((kcg_int16) (In1)) >= (In2)
#define iGreaterEq_int8_int32_impls(In1, In2) ((kcg_int32) (In1)) >= (In2)
#define iGreaterEq_uint8_uint8_impls(In1, In2) (In1) >= (In2)
#define iGreaterEq_uint8_uint16_impls(In1, In2) ((kcg_uint16) (In1)) >= (In2)
#define iGreaterEq_uint8_uint32_impls(In1, In2) ((kcg_uint32) (In1)) >= (In2)
#define iGreaterEq_int16_int8_impls(In1, In2) (In1) >= (kcg_int16) (In2)
#define iGreaterEq_int16_int16_impls(In1, In2) (In1) >= (In2)
#define iGreaterEq_int16_int32_impls(In1, In2) ((kcg_int32) (In1)) >= (In2)
#define iGreaterEq_uint16_uint8_impls(In1, In2) (In1) >= (kcg_uint16) (In2)
#define iGreaterEq_uint16_uint16_impls(In1, In2) (In1) >= (In2)
#define iGreaterEq_uint16_uint32_impls(In1, In2) ((kcg_uint32) (In1)) >= (In2)
#define iGreaterEq_int32_int8_impls(In1, In2) (In1) >= (kcg_int32) (In2)
#define iGreaterEq_int32_int16_impls(In1, In2) (In1) >= (kcg_int32) (In2)
#define iGreaterEq_int32_int32_impls(In1, In2) (In1) >= (In2)
#define iGreaterEq_uint32_uint8_impls(In1, In2) (In1) >= (kcg_uint32) (In2)
#define iGreaterEq_uint32_uint16_impls(In1, In2) (In1) >= (kcg_uint32) (In2)
#define iGreaterEq_uint32_uint32_impls(In1, In2) (In1) >= (In2)

/**********************************************************************
 * CUSTOMIZATION for targetting: 
 * redefinition of macro definitions of the libimpl operators 
 **********************************************************************/
#include "macro_libimpl_user.h"

