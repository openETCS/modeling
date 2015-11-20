/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packets0_1_ProvidePositionReport_Pkg.h"

void Build_Packets0_1_reset_ProvidePositionReport_Pkg(
  outC_Build_Packets0_1_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::Build_Packets0_1 */
void Build_Packets0_1_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packets0_1::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::posBGs */positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::modeLevelStatus */ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::train2trackStatus */TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::prvDirTrain */Q_DIRTRAIN prvDirTrain,
  outC_Build_Packets0_1_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L19 */
  static kcg_bool _L19;
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L20 */
  static Position_Report_TrainToTrack _L20;
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L23 */
  static kcg_bool _L23;
  
  /* 2 */
  DeterminePacketValidity_ProvidePositionReport_Pkg(
    &(*trainPos).LRBG,
    &_L19,
    &_L23);
  /* 2 */
  Build_Packet0_ProvidePositionReport_Pkg(
    posBGs,
    modeLevelStatus,
    odometry,
    train2trackStatus,
    trainProps,
    trainPos,
    &_L20);
  if (_L19) {
    /* 3 */ Activate_Packet0_ProvidePositionReport_Pkg(&_L20, &outC->packet0);
  }
  else if (outC->init) {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &outC->packet0,
      (PT0_PositionReport_T_Packet_TrainTypes_Pkg *)
        &emptyPacket0_ProvidePositionReport_Pkg);
  }
  if (_L23) {
    /* 2 */
    Build_Packet1_ProvidePositionReport_Pkg(
      &_L20,
      prvDirTrain,
      trainPos,
      &outC->packet1);
  }
  else if (outC->init) {
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &outC->packet1,
      (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *)
        &emptyPacket1_ProvidePositionReport_Pkg);
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_Packets0_1_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

