/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _ScanSSP_8_H_
#define _ScanSSP_8_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ScanSSP::Continue */ Continue;
  kcg_real /* ScanSSP::Updated_MRS */ Updated_MRS;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* math::Min::_L21 */ _L21_1;
  kcg_real /* math::Min::_L22 */ _L22_1;
  kcg_real /* math::Min::_L24 */ _L24_1;
  kcg_bool /* math::Min::_L25 */ _L25_1;
  kcg_real /* math::Min::Mi_Output */ Mi_Output_1;
  kcg_real /* math::Min::I2 */ I2_1;
  kcg_real /* math::Min::I1 */ I1_1;
  TY_DistValue /* ScanSSP::_L1 */ _L1;
  kcg_real /* ScanSSP::_L2 */ _L2;
  kcg_real /* ScanSSP::_L8 */ _L8;
  kcg_real /* ScanSSP::_L7 */ _L7;
  kcg_bool /* ScanSSP::_L9 */ _L9;
  kcg_real /* ScanSSP::_L10 */ _L10;
  kcg_bool /* ScanSSP::_L11 */ _L11;
  kcg_bool /* ScanSSP::_L12 */ _L12;
  kcg_real /* ScanSSP::_L13 */ _L13;
  kcg_int /* ScanSSP::_L16 */ _L16;
  kcg_bool /* ScanSSP::_L17 */ _L17;
  kcg_int /* ScanSSP::_L18 */ _L18;
  kcg_real /* ScanSSP::_L15 */ _L15;
  kcg_bool /* ScanSSP::_L19 */ _L19;
  kcg_real /* ScanSSP::_L22 */ _L22;
  kcg_real /* ScanSSP::_L26 */ _L26;
} outC_ScanSSP_8;

/* ===========  node initialization and cycle functions  =========== */
/* ScanSSP */
extern void ScanSSP_8(
  /* ScanSSP::Index */kcg_int Index,
  /* ScanSSP::InitMRS */kcg_real InitMRS,
  /* ScanSSP::Xdeb */kcg_real Xdeb,
  /* ScanSSP::Xend */kcg_real Xend,
  /* ScanSSP::SpeedElement */TY_DistValue *SpeedElement,
  outC_ScanSSP_8 *outC);

extern void ScanSSP_reset_8(outC_ScanSSP_8 *outC);

#endif /* _ScanSSP_8_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ScanSSP_8.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

