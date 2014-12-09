/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */
#ifndef _MoRC_evaluateOrderToContactAnRBD_H_
#define _MoRC_evaluateOrderToContactAnRBD_H_

#include "kcg_types.h"
#include "MoRC_FallingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MoRC_orderToContactAnRBC_Type /* evaluateOrderToContactAnRBD::order_out */ order_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_orderToContactAnRBC_Type /* evaluateOrderToContactAnRBD::_L16 */ _L16;
  MoRC_orderToContactAnRBC_Type /* evaluateOrderToContactAnRBD::order_in */ rem_order_in;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MoRC_outC_FallingEdge_digital /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_evaluateOrderToContactAnRBD;

/* ===========  node initialization and cycle functions  =========== */
/* evaluateOrderToContactAnRBD */
extern void MoRC_evaluateOrderToContactAnRBD(
  /* evaluateOrderToContactAnRBD::order_in */ MoRC_orderToContactAnRBC_Type *order_in,
  /* evaluateOrderToContactAnRBD::onBoardStoredShortPhoneNo */ MoRC_rbc_phoneNo_Type onBoardStoredShortPhoneNo,
  MoRC_outC_evaluateOrderToContactAnRBD *outC);

extern void MoRC_evaluateOrderToContactAnRBD_reset(
  MoRC_outC_evaluateOrderToContactAnRBD *outC);
extern void MoRC_evaluateOrderToContactAnRBD_init(
  MoRC_outC_evaluateOrderToContactAnRBD *outC);

#endif /* _MoRC_evaluateOrderToContactAnRBD_H_ */
/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_evaluateOrderToContactAnRBD.h
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

