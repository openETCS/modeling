/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet0_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Packet0 */
void Build_Packet0_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packet0::posBGs */positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::Build_Packet0::modeLevelStatus */ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Build_Packet0::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Build_Packet0::train2trackStatus */TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::Build_Packet0::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_Packet0::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Build_Packet0::packet0 */Position_Report_TrainToTrack *packet0)
{
  static kcg_int tmp;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L14 */
  static L_TRAININT _L14;
  
  (*packet0).NID_PACKET = 0;
  (*packet0).L_PACKET = 0;
  (*packet0).qscale = cQ_SCALE_ProvidePositionReport_Pkg;
  (*packet0).NID_LRBG = (*trainPos).LRBG.nid_bg;
  (*packet0).dirlrbg = (*trainPos).trainOrientationToLRBG;
  (*packet0).dlrbg = (*trainPos).nominalOrReverseToLRBG;
  (*packet0).length = (*train2trackStatus).q_length;
  (*packet0).V_TRAIN = (*odometry).speed.v_upper;
  (*packet0).dirtrain = (*trainPos).trainRunningDirectionToLRBG;
  (*packet0).mode = (*modeLevelStatus).currMode;
  (*packet0).level = (*modeLevelStatus).currLevel;
  (*packet0).NID_NTC = (*train2trackStatus).nid_ntc;
  /* 1 */
  CalculateSafeTrainLength_ProvidePositionReport_Pkg(
    trainProps,
    trainPos,
    &_L14,
    &tmp);
  (*packet0).D_LRBG = /* scaleInternalType */
    scaleInternalType_ProvidePositionReport_Pkg(
      cQ_SCALE_ProvidePositionReport_Pkg,
      /* 1 */ op_LRBG_ProvidePositionReport_Pkg(posBGs, trainPos));
  (*packet0).L_DOUBTOVER = /* 3 */
    scaleInternalType_ProvidePositionReport_Pkg(
      cQ_SCALE_ProvidePositionReport_Pkg,
      /* 1 */ op_DOUBTOVER_ProvidePositionReport_Pkg(trainPos));
  (*packet0).L_DOUBTUNDER = /* 1 */
    scaleInternalType_ProvidePositionReport_Pkg(
      cQ_SCALE_ProvidePositionReport_Pkg,
      /* 1 */ op_DOUBTUNDER_ProvidePositionReport_Pkg(trainPos));
  (*packet0).L_TRAININT = /* 2 */
    scaleInternalType_ProvidePositionReport_Pkg(
      cQ_SCALE_ProvidePositionReport_Pkg,
      _L14);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_Packet0_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

