/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _ScanPositions_2_2_H_
#define _ScanPositions_2_2_H_

#include "kcg_types.h"
#include "ScanSSP_2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* ScanPositions::Pos_i_next */ Pos_i_next;
  kcg_real /* ScanPositions::MRS */ MRS;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ScanSSP_2 /* 1 */ Context_1[2];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array__1547 /* ScanPositions::_L2 */ _L2;
  kcg_real /* ScanPositions::_L20 */ _L20;
  kcg_real /* ScanPositions::_L22 */ _L22;
  kcg_real /* ScanPositions::_L26 */ _L26;
  kcg_int /* ScanPositions::_L27 */ _L27;
  kcg_bool /* ScanPositions::_L28 */ _L28;
  kcg_real /* ScanPositions::_L29 */ _L29;
  array_real_2 /* ScanPositions::_L30 */ _L30;
  array_real_2 /* ScanPositions::_L31 */ _L31;
  kcg_real /* ScanPositions::_L32 */ _L32;
} outC_ScanPositions_2_2;

/* ===========  node initialization and cycle functions  =========== */
/* ScanPositions */
extern void ScanPositions_2_2(
  /* ScanPositions::Pos_i_moins_1 */kcg_real Pos_i_moins_1,
  /* ScanPositions::Pos_i */kcg_real Pos_i,
  /* ScanPositions::SpeedProfile */array__1547 *SpeedProfile,
  /* ScanPositions::InitMRS */kcg_real InitMRS,
  outC_ScanPositions_2_2 *outC);

extern void ScanPositions_reset_2_2(outC_ScanPositions_2_2 *outC);

#endif /* _ScanPositions_2_2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ScanPositions_2_2.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

