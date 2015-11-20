/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:01
*************************************************************$ */
#ifndef _PosData__Update_RBC_Session_Pkg_H_
#define _PosData__Update_RBC_Session_Pkg_H_

#include "kcg_types.h"
#include "PosData__UpdateWithP001_RBC_Session_Pkg.h"
#include "PosData__UpdateWithP000_RBC_Session_Pkg.h"
#include "RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"
#include "RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"

/* =====================  no input structure  ====================== */


/* RBC_Session_Pkg::PosData__Update */
extern void PosData__Update_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Update::inPosData */PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Update::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Session_Pkg::PosData__Update::outPosData */PosData_T *outPosData);

#endif /* _PosData__Update_RBC_Session_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosData__Update_RBC_Session_Pkg.h
** Generation date: 2015-11-20T19:47:01
*************************************************************$ */

