/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058 */
void RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::in_Q_DIR */Q_DIR in_Q_DIR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::in_Q_SCALE */Q_SCALE in_Q_SCALE,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::in_T_CYCLOC */T_CYCLOC in_T_CYCLOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::in_D_CYCLOC */D_CYCLOC in_D_CYCLOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::in_M_LOC */M_LOC in_M_LOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::inNumberOfIncrementalDistancesAndQualifiers */N_ITER inNumberOfIncrementalDistancesAndQualifiers,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::inIncrementalDistancesAndQualifiers */array__155632 *inIncrementalDistancesAndQualifiers,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::outRadioTrackTrainPacket */P058_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* 1 */
  RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket(
    in_Q_DIR,
    in_Q_SCALE,
    in_T_CYCLOC,
    in_D_CYCLOC,
    in_M_LOC,
    inNumberOfIncrementalDistancesAndQualifiers,
    inIncrementalDistancesAndQualifiers,
    outRadioTrackTrainPacket);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

