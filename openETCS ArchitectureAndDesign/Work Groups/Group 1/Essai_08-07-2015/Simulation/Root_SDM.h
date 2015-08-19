/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _Root_SDM_H_
#define _Root_SDM_H_

#include "kcg_types.h"
#include "MRSP_Operator.h"
#include "ACCeler_Operator.h"
#include "Step_Operator.h"
#include "EBD_Operator.h"
#include "SBD_Operator.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_25 /* Root_SDM::dV_ebi */ dV_ebi;
  array_real_25 /* Root_SDM::Vebd */ Vebd;
  array_real_25 /* Root_SDM::Vsbd */ Vsbd;
  array_bool_25 /* Root_SDM::C_Mode */ C_Mode;
  array_real_25 /* Root_SDM::MRSP */ MRSP;
  array_real_25 /* Root_SDM::Position */ Position;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SBD_Operator /* 1 */ _3_Context_1;
  outC_EBD_Operator /* 1 */ _2_Context_1[25];
  outC_ACCeler_Operator /* ACCeler_Operator */ Context_ACCeler_Operator;
  outC_MRSP_Operator /* 1 */ _1_Context_1;
  outC_Step_Operator /* 1 */ Context_1[25];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_real_25 /* Root_SDM::_L1 */ _L1;
  array_real_25 /* Root_SDM::_L3 */ _L3;
  array_real_25 /* Root_SDM::_L2 */ _L2;
  array_real_25 /* Root_SDM::_L4 */ _L4;
  kcg_real /* Root_SDM::_L8 */ _L8;
  array_real_25 /* Root_SDM::_L9 */ _L9;
  array_real_25 /* Root_SDM::_L10 */ _L10;
  array_real_25 /* Root_SDM::_L5 */ _L5;
  TY_SizePos /* Root_SDM::_L11 */ _L11;
  TY_SizePos /* Root_SDM::_L14 */ _L14;
  kcg_real /* Root_SDM::_L16 */ _L16;
  kcg_real /* Root_SDM::_L17 */ _L17;
  array__1550 /* Root_SDM::_L19 */ _L19;
  array__1553 /* Root_SDM::_L20 */ _L20;
  array__1553 /* Root_SDM::_L21 */ _L21;
  array__1547 /* Root_SDM::_L22 */ _L22;
  array__1547 /* Root_SDM::_L23 */ _L23;
  array__1547 /* Root_SDM::_L24 */ _L24;
  array__1547 /* Root_SDM::_L25 */ _L25;
  array_real_25 /* Root_SDM::_L26 */ _L26;
  array_real_25 /* Root_SDM::_L27 */ _L27;
  array_real_25 /* Root_SDM::_L28 */ _L28;
  array_real_25 /* Root_SDM::_L29 */ _L29;
  kcg_real /* Root_SDM::_L30 */ _L30;
  array_real_25 /* Root_SDM::_L31 */ _L31;
  array_real_25 /* Root_SDM::_L32 */ _L32;
  array_real_25 /* Root_SDM::_L34 */ _L34;
  kcg_real /* Root_SDM::_L35 */ _L35;
  array_bool_25 /* Root_SDM::_L38 */ _L38;
  array_bool_25 /* Root_SDM::_L39 */ _L39;
} outC_Root_SDM;

/* ===========  node initialization and cycle functions  =========== */
/* Root_SDM */
extern void Root_SDM(
  /* Root_SDM::SSP */array__1553 *SSP,
  /* Root_SDM::TSR_1 */array__1547 *TSR_1,
  /* Root_SDM::TSR_2 */array__1547 *TSR_2,
  /* Root_SDM::TSR_3 */array__1547 *TSR_3,
  /* Root_SDM::MA_EOA */array__1547 *MA_EOA,
  /* Root_SDM::Gradient */array__1553 *Gradient,
  /* Root_SDM::Adh */array__1550 *Adh10,
  outC_Root_SDM *outC);

extern void Root_SDM_reset(outC_Root_SDM *outC);

#endif /* _Root_SDM_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Root_SDM.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

