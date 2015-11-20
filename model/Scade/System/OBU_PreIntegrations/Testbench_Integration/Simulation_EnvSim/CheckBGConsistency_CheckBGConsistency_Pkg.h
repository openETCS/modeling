/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */
#ifndef _CheckBGConsistency_CheckBGConsistency_Pkg_H_
#define _CheckBGConsistency_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CaseLinkingNotInUse_CheckBGConsistency_Pkg.h"
#include "CaseLinkingInUse_CheckBGConsistency_Pkg.h"
#include "CheckMode_CheckBGConsistency_Pkg_SubFunction.h"
#include "CheckMVersion_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */


/* CheckBGConsistency_Pkg::CheckBGConsistency */
extern void CheckBGConsistency_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckBGConsistency::storedBGs */positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::mMode */M_MODE mMode,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trackSide_ForCheck */TrackSide_ForCheck_T_Common_Types_Pkg *trackSide_ForCheck,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainVersion */M_VERSION trainVersion,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */ReceivedMessage_T_Common_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::applyServiceBrake */kcg_bool *applyServiceBrake,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::badBaliseMessageToDMI */kcg_bool *badBaliseMessageToDMI,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorLinkedBG */kcg_bool *errorLinkedBG,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorUnlinkedBG */kcg_bool *errorUnlinkedBG,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::incompatibleVersion */kcg_bool *incompatibleVersion,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::nid_errorBG */NID_ERRORBG_BG_Types_Pkg *nid_errorBG,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::nid_c */NID_C *nid_c);

#endif /* _CheckBGConsistency_CheckBGConsistency_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckBGConsistency_CheckBGConsistency_Pkg.h
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */

