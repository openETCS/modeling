/*
 * macro_libsmlk.h
 *
 * Copyright(c) 2003-2012 Esterel Technologies
 *
 *
 */


/**
*  AND operator (0 & 1 = 0)
*/
#define BitwiseAnd_bits(In, mask) ((In) & (mask))


/**
*  -Inclusive-OR operator (1 | 1 = 1)
*/
#define BitwiseOr_bits(In, mask) ((In) | (mask))


/**
*  -Exclusive-XOR operator (1 ^ 1 = 0)
*/
#define BitwiseXor_bits(In, mask) ((In) ^ (mask))


/**
*  Inversion operator
*/
#define BitwiseNot_bits(In) (~(In))


/**
*  NAND operator (0 & 1 = 1)
*/
#define BitwiseNand_bits(In, mask) (~((In) & (mask)))


/**
*  -Inclusive-NOR operator (1 | 1 = 0)
*/
#define BitwiseNor_bits(In, mask) (~((In) | (mask)))


/**
*  Shifting Bit Left operator
*/
#define BitwiseShiftLeft_bits(In, mask) ((In) << (mask))

/**
*  Shifting Bit Right operator
*/
#define BitwiseShiftRight_bits(In, mask) ((unsigned int) (In) >> (unsigned int) (mask))

/**
*  Bit Shifting operator
*/
#define BitwiseShift_bits(In, nBits) (nBits > 0 ? (In) >> (nBits) : (In) << -(nBits))

/**
*  Bit Clear operator
*/
#define BitClear_bits(In, nIndex) ((In) & ~(1 << ((unsigned)(nIndex))))

/**
*  Bit Set operator
*/
#define BitSet_bits(In, nIndex) ((In) | (1 << ((unsigned)(nIndex))))

/**
*  Extract Bits operator
*/
#define ExtractBitRange_bits(In, nStart, nEnd) (((In) << (31 - ((unsigned)nEnd))) >> (31 - ((unsigned)nEnd) + ((unsigned)nStart)))
