/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_PosReport_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_PosReport */
void Build_PosReport_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_PosReport::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_PosReport::in_packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *in_packet0,
  /* ProvidePositionReport_Pkg::Build_PosReport::in_packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *in_packet1,
  /* ProvidePositionReport_Pkg::Build_PosReport::errorVector */array__158675 *errorVector,
  /* ProvidePositionReport_Pkg::Build_PosReport::t_train */T_TRAIN t_train,
  /* ProvidePositionReport_Pkg::Build_PosReport::posRepHeader */Radio_TrainTrack_Header_T_Radio_Types_Pkg *posRepHeader,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet4 */PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *packet4,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet5 */PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *packet5)
{
  /* Build_SinglePosReport */
  Build_SinglePosReport_ProvidePositionReport_Pkg(
    trainProps,
    &(*errorVector)[0],
    in_packet0,
    in_packet1,
    t_train,
    posRepHeader,
    packet0,
    packet1,
    packet4,
    packet5);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_PosReport_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

