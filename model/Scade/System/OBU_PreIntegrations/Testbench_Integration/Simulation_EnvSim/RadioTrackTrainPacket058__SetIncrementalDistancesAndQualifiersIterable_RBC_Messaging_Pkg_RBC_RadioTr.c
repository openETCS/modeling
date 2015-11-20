/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable_RBC_Messaging_Pkg_RBC_RadioTr.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable */
void RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable_RBC_Messaging_Pkg_RBC_RadioTr(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable::inIncrementalDistanceAndQualifier */IterPacket58_T_Packet_Types_Pkg *inIncrementalDistanceAndQualifier,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable::outIncrementalDistanceAndQualifier */P058_section_int_T_TM *outIncrementalDistanceAndQualifier)
{
  kcg_copy_P058_section_int_T_TM(
    outIncrementalDistanceAndQualifier,
    (P058_section_int_T_TM *) &P058_SECTIONS_DEFAULT);
  (*outIncrementalDistanceAndQualifier).D_LOC =
    (*inIncrementalDistanceAndQualifier).d_loc;
  (*outIncrementalDistanceAndQualifier).Q_LGTLOC = /* 1 */
    CAST_Q_LGTLOC_to_int_TM_conversions(
      (*inIncrementalDistanceAndQualifier).q_lgtloc);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable_RBC_Messaging_Pkg_RBC_RadioTr.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

