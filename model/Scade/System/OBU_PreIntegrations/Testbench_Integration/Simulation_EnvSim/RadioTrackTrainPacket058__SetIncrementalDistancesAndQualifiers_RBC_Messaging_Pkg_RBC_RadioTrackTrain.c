/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTrackTrain.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers */
void RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTrackTrain(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers::inRadioTrackTrainPacket */P058_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers::inIncrementalDistancesAndQualifiers */array__155632 *inIncrementalDistancesAndQualifiers,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers::outRadioTrackTrainPacket */P058_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  static array__155393 tmp;
  static kcg_int i;
  
  kcg_copy_P058_trackside_int_T_TM(
    outRadioTrackTrainPacket,
    inRadioTrackTrainPacket);
  for (i = 0; i < 32; i++) {
    /* 1 */
    RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable_RBC_Messaging_Pkg_RBC_RadioTr(
      &(*inIncrementalDistancesAndQualifiers)[i],
      &tmp[i]);
  }
  kcg_copy_P058_trackide_sectionlist_T_TM(
    &(*outRadioTrackTrainPacket).SECTIONS,
    &tmp);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTrackTrain.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

