/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _ScanAdh_2_H_
#define _ScanAdh_2_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ScanAdh::Continue */ Continue;
  kcg_bool /* ScanAdh::Updated_MRS */ Updated_MRS;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TY_Adh /* ScanAdh::_L1 */ _L1;
  kcg_real /* ScanAdh::_L2 */ _L2;
  kcg_bool /* ScanAdh::_L8 */ _L8;
  kcg_real /* ScanAdh::_L7 */ _L7;
  kcg_bool /* ScanAdh::_L9 */ _L9;
  kcg_real /* ScanAdh::_L10 */ _L10;
  kcg_bool /* ScanAdh::_L11 */ _L11;
  kcg_bool /* ScanAdh::_L12 */ _L12;
  kcg_bool /* ScanAdh::_L13 */ _L13;
  kcg_int /* ScanAdh::_L16 */ _L16;
  kcg_bool /* ScanAdh::_L17 */ _L17;
  kcg_int /* ScanAdh::_L18 */ _L18;
  kcg_bool /* ScanAdh::_L15 */ _L15;
  kcg_bool /* ScanAdh::_L19 */ _L19;
  kcg_bool /* ScanAdh::_L22 */ _L22;
  kcg_bool /* ScanAdh::_L25 */ _L25;
} outC_ScanAdh_2;

/* ===========  node initialization and cycle functions  =========== */
/* ScanAdh */
extern void ScanAdh_2(
  /* ScanAdh::Index */kcg_int Index,
  /* ScanAdh::InitMRS */kcg_bool InitMRS,
  /* ScanAdh::Xdeb */kcg_real Xdeb,
  /* ScanAdh::Xend */kcg_real Xend,
  /* ScanAdh::SpeedElement */TY_Adh *SpeedElement,
  outC_ScanAdh_2 *outC);

extern void ScanAdh_reset_2(outC_ScanAdh_2 *outC);

#endif /* _ScanAdh_2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ScanAdh_2.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

