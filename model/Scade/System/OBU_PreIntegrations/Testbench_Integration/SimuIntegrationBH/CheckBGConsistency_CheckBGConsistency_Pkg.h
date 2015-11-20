/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CheckBGConsistency_CheckBGConsistency_Pkg_H_
#define _CheckBGConsistency_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CaseLinkingNotInUse_CheckBGConsistency_Pkg.h"
#include "CheckMode_CheckBGConsistency_Pkg_SubFunction.h"
#include "CheckMVersion_CheckBGConsistency_Pkg_SubFunction.h"
#include "CaseLinkingInUse_CheckBGConsistency_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */ passedBG_out;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::applyServiceBrake */ applyServiceBrake;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::badBaliseMessageToDMI */ badBaliseMessageToDMI;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::errorLinkedBG */ errorLinkedBG;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::errorUnlinkedBG */ errorUnlinkedBG;
  kcg_bool /* CheckBGConsistency_Pkg::CheckBGConsistency::incompatibleVersion */ incompatibleVersion;
  NID_ERRORBG_BG_Types_Pkg /* CheckBGConsistency_Pkg::CheckBGConsistency::nid_errorBG */ nid_errorBG;
  NID_C /* CheckBGConsistency_Pkg::CheckBGConsistency::nid_c */ nid_c;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_CheckBGConsistency_CheckBGConsistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::CheckBGConsistency */
extern void CheckBGConsistency_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckBGConsistency::storedBGs */ positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::mMode */ M_MODE mMode,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trackSide_ForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSide_ForCheck,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainVersion */ M_VERSION trainVersion,
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckBGConsistency_reset_CheckBGConsistency_Pkg(
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckBGConsistency_init_CheckBGConsistency_Pkg(
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CheckBGConsistency_CheckBGConsistency_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CheckBGConsistency_CheckBGConsistency_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

