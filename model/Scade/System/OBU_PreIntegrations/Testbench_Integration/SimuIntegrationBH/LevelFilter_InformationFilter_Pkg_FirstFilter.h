/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _LevelFilter_InformationFilter_Pkg_FirstFilter_H_
#define _LevelFilter_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "MapPacketIdToRow_InformationFilter_Pkg.h"
#include "MapLevelToColumn_InformationFilter_Pkg.h"
#include "CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::LevelFilter */
extern void LevelFilter_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingL1Transition */ kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingL2L3Transition */ kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inEmergencyStopAccepted */ kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inLastAckTextMessageId */ kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingNTCTransition */ kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inSPPAndGradientOnBoard */ kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inMACoverNotFullLength */ kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketOrigin */ MsgSource_T_Common_Types_Pkg inPacketOrigin,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketId */ kcg_int inPacketId,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::outPacketAccept */ kcg_bool *outPacketAccept);

#endif /* _LevelFilter_InformationFilter_Pkg_FirstFilter_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** LevelFilter_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

