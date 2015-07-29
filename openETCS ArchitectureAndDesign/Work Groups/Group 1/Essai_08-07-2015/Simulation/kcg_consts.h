/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* MA */
extern const array__1547 MA;

/* TSR2 */
extern const array__1547 TSR2;

/* SSP_ForTest */
extern const array__1553 SSP_ForTest;

/* Grad */
extern const array__1553 Grad;

/* Adh */
extern const array__1550 Adh;

/* TSR1 */
extern const array__1547 TSR1;

/* SSP_Max */
#define SSP_Max 8

/* SSP_Nb */
#define SSP_Nb 4

/* dV_Slope */
#define dV_Slope ((dV_ebi_max - dV_ebi_min) / (V_ebi_max - V_ebi_min))

/* V_ebi_max */
#define V_ebi_max (210.0 / 3.6)

/* V_ebi_min */
#define V_ebi_min (110.0 / 3.6)

/* dV_ebi_min */
#define dV_ebi_min (7.5 / 3.6)

/* dV_ebi_max */
#define dV_ebi_max (15.0 / 3.6)

/* Adh_Nb */
#define Adh_Nb 2

/* Grad_Nb */
#define Grad_Nb 8

/* Train1 */
extern const TY_EB_Type Train1;

/* SB_Type */
#define SB_Type kcg_false

/* Vmax */
#define Vmax 50.0

/* V0 */
#define V0 10.0

/* V1 */
#define V1 20.0

/* V2 */
#define V2 30.0

/* kp3 */
#define kp3 0.7

/* kp2 */
#define kp2 0.8

/* kp1 */
#define kp1 0.9

/* kp0 */
#define kp0 1.0

/* Alpha */
#define Alpha 1.08

/* Reason */
#define Reason 1.06

/* MRSP_Nb */
#define MRSP_Nb 25

#endif /* _KCG_CONSTS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

