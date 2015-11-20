/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTr.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers */
void RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTr(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers::inRadioTrackTrainPacket */P058_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers::inNumberOfIncrementalDistancesAndQualifiers */N_ITER inNumberOfIncrementalDistancesAndQualifiers,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers::outRadioTrackTrainPacket */P058_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  kcg_copy_P058_trackside_int_T_TM(
    outRadioTrackTrainPacket,
    inRadioTrackTrainPacket);
  (*outRadioTrackTrainPacket).N_ITER =
    inNumberOfIncrementalDistancesAndQualifiers;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTr.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

