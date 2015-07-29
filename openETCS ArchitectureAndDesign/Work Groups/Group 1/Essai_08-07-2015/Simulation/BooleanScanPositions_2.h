/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _BooleanScanPositions_2_H_
#define _BooleanScanPositions_2_H_

#include "kcg_types.h"
#include "ScanAdh_2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* BooleanScanPositions::Pos_i_next */ Pos_i_next;
  kcg_bool /* BooleanScanPositions::MRS */ MRS;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ScanAdh_2 /* 1 */ Context_1[2];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array__1550 /* BooleanScanPositions::_L2 */ _L2;
  kcg_real /* BooleanScanPositions::_L20 */ _L20;
  kcg_bool /* BooleanScanPositions::_L22 */ _L22;
  kcg_real /* BooleanScanPositions::_L26 */ _L26;
  kcg_int /* BooleanScanPositions::_L27 */ _L27;
  kcg_bool /* BooleanScanPositions::_L28 */ _L28;
  kcg_real /* BooleanScanPositions::_L29 */ _L29;
  array_real_2 /* BooleanScanPositions::_L30 */ _L30;
  array_real_2 /* BooleanScanPositions::_L31 */ _L31;
  kcg_bool /* BooleanScanPositions::_L32 */ _L32;
} outC_BooleanScanPositions_2;

/* ===========  node initialization and cycle functions  =========== */
/* BooleanScanPositions */
extern void BooleanScanPositions_2(
  /* BooleanScanPositions::Pos_i_moins_1 */kcg_real Pos_i_moins_1,
  /* BooleanScanPositions::Pos_i */kcg_real Pos_i,
  /* BooleanScanPositions::SpeedProfile */array__1550 *SpeedProfile,
  /* BooleanScanPositions::InitMRS */kcg_bool InitMRS,
  outC_BooleanScanPositions_2 *outC);

extern void BooleanScanPositions_reset_2(outC_BooleanScanPositions_2 *outC);

#endif /* _BooleanScanPositions_2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BooleanScanPositions_2.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

