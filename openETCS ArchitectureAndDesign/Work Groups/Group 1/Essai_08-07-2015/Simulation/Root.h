/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _Root_H_
#define _Root_H_

#include "kcg_types.h"
#include "Root_SDM.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_25 /* Root::dV_ebi */ dV_ebi;
  array_real_25 /* Root::Vebd */ Vebd;
  array_real_25 /* Root::Vsbd */ Vsbd;
  array_bool_25 /* Root::C_Mode */ C_Mode;
  array_real_25 /* Root::MRSP */ MRSP;
  array_real_25 /* Root::Position */ Position;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Root_SDM /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_bool_25 /* Root::_L4 */ _L4;
  array_real_25 /* Root::_L3 */ _L3;
  array_real_25 /* Root::_L2 */ _L2;
  array_real_25 /* Root::_L1 */ _L1;
  array__1553 /* Root::_L10 */ _L10;
  array__1547 /* Root::_L9 */ _L9;
  array__1547 /* Root::_L8 */ _L8;
  array__1553 /* Root::_L11 */ _L11;
  array__1550 /* Root::_L12 */ _L12;
  array__1547 /* Root::_L13 */ _L13;
  array_real_25 /* Root::_L14 */ _L14;
  array_real_25 /* Root::_L15 */ _L15;
} outC_Root;

/* ===========  node initialization and cycle functions  =========== */
/* Root */
extern void Root(outC_Root *outC);

extern void Root_reset(outC_Root *outC);

#endif /* _Root_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Root.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

