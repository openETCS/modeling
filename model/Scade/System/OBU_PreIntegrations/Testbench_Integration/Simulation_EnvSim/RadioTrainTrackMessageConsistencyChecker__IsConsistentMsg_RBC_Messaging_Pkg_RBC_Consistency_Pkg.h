/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:02
*************************************************************$ */
#ifndef _RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_
#define _RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_

#include "kcg_types.h"
#include "RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__IsPresent_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackMessage__IsPresent_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::outIsConsistent */ outIsConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_TRAIN /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::lastReceivedRadioTrainTrackMessageTimestamp */ lastReceivedRadioTrainTrackMessageTimestamp;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg */
extern void RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);

extern void RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_reset_RBC_Messaging_Pkg_RBC_Consistency_Pk(
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);

#endif /* _RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h
** Generation date: 2015-11-20T19:47:02
*************************************************************$ */

