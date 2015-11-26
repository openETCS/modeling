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
#define AcoshR64_mathext_mathextimpl(In) ((kcg_float64) log(In +sqrt(((In) * (In)) - 1.0)))

/* Inverse Cosine */
#define AcosR64_mathext_mathextimpl(In) ((kcg_float64) acos(In))

/* Inverse hyperbolic sine */
/*	The Result is slightly different from Simulink result
	Difference is of kind  E-13 
	(for big input (for example E4) difference is of kind E-8) */
#define AsinhR64_mathext_mathextimpl(In) ((kcg_float64) log((In) + sqrt(1.0 + ((In) * (In)))))


/* Inverse sine */
#define AsinR64_mathext_mathextimpl(In) ((kcg_float64) asin(In))

/* Inverse hyperbolic tangent */
#define AtanhR64_mathext_mathextimpl(In) ((kcg_float64) (0.5 * log((1 + (In)) / (1 - (In)))))

/* Inverse tangent */
#define AtanR64_mathext_mathextimpl(In) ((kcg_float64) atan(In))

/* Four quadrant inverse tangent */
#define Atan2R64_mathext_mathextimpl(In1, In2) ((kcg_float64) atan2(In1, In2))


/* Hyperbolic cosine */
#define CoshR64_mathext_mathextimpl(In) ((kcg_float64) cosh(In))

/* Cosine */
#define CosR64_mathext_mathextimpl(In) ((kcg_float64) cos(In))

/* Exponential */
#define ExpR64_mathext_mathextimpl(In) ((kcg_float64) exp(In))

/* Logarithm with base e */
#define LnR64_mathext_mathextimpl(In) ((kcg_float64) log(In))

/* Logarithm with base 10 */
#define LogR64_mathext_mathextimpl(In) ((kcg_float64) log10(In))

/* Power */
#define PowerR64_mathext_mathextimpl(In, Power)  ((kcg_float64) pow(In, Power))
/* Note: In SCADE 5.1, there was an assert in simulation mode to check validity of parameters.  */
/*       In SCADE 6.0, this operator will likely end-up not being an imported operator anymore. */
#define PowerRR64_mathext_mathextimpl(In, Power) ((kcg_float64) pow(In, Power))


/* Hyperbolic sine */
#define SinhR64_mathext_mathextimpl(In) ((kcg_float64) sinh(In))

/* Sine */
#define SinR64_mathext_mathextimpl(In) ((kcg_float64) sin(In))

/* Sqrt */
#define SqrtR64_mathext_mathextimpl(In) ((kcg_float64) sqrt(In))


/* Tangent */
#define TanR64_mathext_mathextimpl(In) ((kcg_float64) tan(In))

/* Hyperbolic tangent */
#define TanhR64_mathext_mathextimpl(In) ((kcg_float64) tanh(In))

/* 10^x */
#define TenPowR64_mathext_mathextimpl(In) ((kcg_float64) pow(10, In))
