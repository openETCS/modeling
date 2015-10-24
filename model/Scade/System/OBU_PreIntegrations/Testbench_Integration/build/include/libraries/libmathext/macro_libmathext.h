/*
 * macro_libmathext.h
 *
 * Copyright(c) 2003-2009 Esterel Technologies
 *
 *
 */

#include <math.h>
#include "kcg_types.h"


/* Inverse hyperbolic cosine */
#define AcoshR_mathext(In) ((kcg_real) log(In +sqrt(((In) * (In)) - 1.0)))

/* Inverse Cosine */
#define AcosR_mathext(In) ((kcg_real) acos(In))

/* Inverse hyperbolic sine */
/*	The Result is slightly different from Simulink result
	Difference is of kind  E-13 
	(for big input (for example E4) difference is of kind E-8) */
#define AsinhR_mathext(In) ((kcg_real) log((In) + sqrt(1.0 + ((In) * (In)))))


/* Inverse sine */
#define AsinR_mathext(In) ((kcg_real) asin(In))

/* Inverse hyperbolic tangent */
#define AtanhR_mathext(In) ((kcg_real) (0.5 * log((1 + (In)) / (1 - (In)))))

/* Inverse tangent */
#define AtanR_mathext(In) ((kcg_real) atan(In))

/* Four quadrant inverse tangent */
#define Atan2R_mathext(In1, In2) ((kcg_real) atan2(In1, In2))


/* Hyperbolic cosine */
#define CoshR_mathext(In) ((kcg_real) cosh(In))

/* Cosine */
#define CosR_mathext(In) ((kcg_real) cos(In))

/* Exponential */
#define ExpR_mathext(In) ((kcg_real) exp(In))

/* Logarithm with base e */
#define LnR_mathext(In) ((kcg_real) log(In))

/* Logarithm with base 10 */
#define LogR_mathext(In) ((kcg_real) log10(In))

/* Power */
#define PowerI_mathext(In, Power)  ((kcg_int)  pow(In, Power))
#define PowerR_mathext(In, Power)  ((kcg_real) pow(In, Power))
/* Note: In SCADE 5.1, there was an assert in simulation mode to check validity of parameters.  */
/*       In SCADE 6.0, this operator will likely end-up not being an imported operator anymore. */
#define PowerRR_mathext(In, Power) ((kcg_real) pow(In, Power))


/* Hyperbolic sine */
#define SinhR_mathext(In) ((kcg_real) sinh(In))

/* Sine */
#define SinR_mathext(In) ((kcg_real) sin(In))

/* Sqrt */
#define SqrtR_mathext(In) ((kcg_real) sqrt(In))


/* Tangent */
#define TanR_mathext(In) ((kcg_real) tan(In))

/* Hyperbolic tangent */
#define TanhR_mathext(In) ((kcg_real) tanh(In))

/* 10^x */
#define TenPowR_mathext(In) ((kcg_real) pow(10, In))
