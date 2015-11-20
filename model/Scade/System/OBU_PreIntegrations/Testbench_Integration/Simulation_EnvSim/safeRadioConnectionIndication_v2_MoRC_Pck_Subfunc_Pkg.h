/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "RisingEdge_digital.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::indication */ indication;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_connectionStatus_SM /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */ connectionStatus_SM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* 3 */ Context_3;
  outC_countDownTimer_MoRC_Pck_Utils /* 1 */ Context_1;
  outC_RisingEdge_digital /* 4 */ Context_4;
  /* ----------------- no clocks of observable data ------------------ */
} outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2 */
extern void safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionCmd */mobileConnectionCmd_T_RCM_Types_Pkg *connectionCmd,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus */mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::eventsAndPhases */obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::currentTime */T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::reset */kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatusTimerInterval */time_Type_MoRC_Pck connectionStatusTimerInterval,
  outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void safeRadioConnectionIndication_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg *outC);

#endif /* _safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

