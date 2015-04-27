/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_prepack_0_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_prepack_0 */
void op_prepack_0_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_prepack_0::TrainRearEndPos3 */ L_TRAININT TrainRearEndPos3,
  /* ProvidePositionReport_Pkg::op_prepack_0::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::op_prepack_0::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::op_prepack_0::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_prepack_0::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::op_prepack_0::modeLevelStatus */ ModeAndLevelStatus_T_BG_Types_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::op_prepack_0::valid */ kcg_bool *valid,
  /* ProvidePositionReport_Pkg::op_prepack_0::posRep */ Position_Report_TrainToTrack *posRep)
{
  (*posRep).NID_PACKET = 0;
  (*posRep).L_PACKET = 0;
  (*posRep).qscale = cQ_SCALE_ProvidePositionReport_Pkg;
  (*posRep).NID_LRBG = (*trainPos).LRBG.nid_bg;
  (*posRep).dirlrbg = (*trainPos).trainOrientationToLRBG;
  (*posRep).dlrbg = (*trainPos).nominalOrReverseToLRBG;
  (*posRep).length = (*train2trackStatus).q_length;
  (*posRep).L_TRAININT = TrainRearEndPos3;
  (*posRep).V_TRAIN = (*odometry).speed.v_safeNominal / 5;
  (*posRep).dirtrain = (*trainPos).trainRunningDirectionToLRBG;
  (*posRep).mode = (*modeLevelStatus).m_mode;
  (*posRep).level = (*modeLevelStatus).m_level;
  (*posRep).NID_NTC = (*train2trackStatus).nid_ntc;
  *valid = /* op_rep0_or_rep1 */
    op_rep0_or_rep1_ProvidePositionReport_Pkg(&(*posBGs)[7]);
  (*posRep).D_LRBG = /* op_LRBG */
    op_LRBG_ProvidePositionReport_Pkg(posBGs, trainPos);
  (*posRep).L_DOUBTOVER = /* op_DOUBTOVER */
    op_DOUBTOVER_ProvidePositionReport_Pkg(trainPos);
  (*posRep).L_DOUBTUNDER = /* op_DOUBTUNDER */
    op_DOUBTUNDER_ProvidePositionReport_Pkg(trainPos);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_prepack_0_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

