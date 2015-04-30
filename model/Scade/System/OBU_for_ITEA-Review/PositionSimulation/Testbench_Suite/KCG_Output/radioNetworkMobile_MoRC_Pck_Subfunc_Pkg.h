/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _radioNetworkMobile_MoRC_Pck_Subfunc_Pkg_H_
#define _radioNetworkMobile_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  mobileHWCmd_Type_MoRC_Pck /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::mobileHWCmd */ mobileHWCmd;
  mobileSWStatus_Type_MoRC_Pck /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::mobileSWStatus */ mobileSWStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */ MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable;
  SSM_ST_MobileHW_available_SM /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM */ MobileHW_available_SM_state_nxt;
  NID_MN /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::registeredRadioNetworkID */ registeredRadioNetworkID;
  mobileHWStatus_Type_MoRC_Pck /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::_L2 */ _L2;
  mobileSWCmd_Type_MoRC_Pck /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::_L18 */ _L18;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_radioNetworkMobile_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile */
extern void radioNetworkMobile_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::mobileHWStatus */ mobileHWStatus_Type_MoRC_Pck *mobileHWStatus,
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::mobileSWCmd */ mobileSWCmd_Type_MoRC_Pck *mobileSWCmd,
  outC_radioNetworkMobile_MoRC_Pck_Subfunc_Pkg *outC);

extern void radioNetworkMobile_reset_MoRC_Pck_Subfunc_Pkg(
  outC_radioNetworkMobile_MoRC_Pck_Subfunc_Pkg *outC);
extern void radioNetworkMobile_init_MoRC_Pck_Subfunc_Pkg(
  outC_radioNetworkMobile_MoRC_Pck_Subfunc_Pkg *outC);

#endif /* _radioNetworkMobile_MoRC_Pck_Subfunc_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** radioNetworkMobile_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

