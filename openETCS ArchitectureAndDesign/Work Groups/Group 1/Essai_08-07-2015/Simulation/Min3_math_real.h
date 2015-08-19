/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _Min3_math_real_H_
#define _Min3_math_real_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* math::Min3::Mi3_Output */ Mi3_Output;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* math::Min3::_L1 */ _L1;
  kcg_bool /* math::Min3::_L2 */ _L2;
  kcg_bool /* math::Min3::_L3 */ _L3;
  kcg_real /* math::Min3::_L4 */ _L4;
  kcg_real /* math::Min3::_L5 */ _L5;
  kcg_real /* math::Min3::_L6 */ _L6;
  kcg_bool /* math::Min3::_L7 */ _L7;
  kcg_real /* math::Min3::_L8 */ _L8;
  kcg_real /* math::Min3::_L9 */ _L9;
} outC_Min3_math_real;

/* ===========  node initialization and cycle functions  =========== */
/* math::Min3 */
extern void Min3_math_real(
  /* math::Min3::I1 */kcg_real I1,
  /* math::Min3::I2 */kcg_real I2,
  /* math::Min3::I3 */kcg_real I3,
  outC_Min3_math_real *outC);

extern void Min3_reset_math_real(outC_Min3_math_real *outC);

#endif /* _Min3_math_real_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Min3_math_real.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

