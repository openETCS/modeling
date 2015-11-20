/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _TrainData__UpdateWithP003_RBC_Session_Pkg_H_
#define _TrainData__UpdateWithP003_RBC_Session_Pkg_H_

#include "kcg_types.h"
#include "TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg.h"
#include "TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg.h"
#include "RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain.h"
#include "RadioTrainTrackPacket003__CountOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* RBC_Session_Pkg::TrainData__UpdateWithP003 */
extern void TrainData__UpdateWithP003_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::inRadioTraintrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTraintrackMessage,
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::outTrainData */ TrainData_T *outTrainData);

#endif /* _TrainData__UpdateWithP003_RBC_Session_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__UpdateWithP003_RBC_Session_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

