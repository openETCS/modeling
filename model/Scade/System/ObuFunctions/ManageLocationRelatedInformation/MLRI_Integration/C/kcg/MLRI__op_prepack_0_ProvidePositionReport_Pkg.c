/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__op_prepack_0_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_prepack_0 */
void MLRI__op_prepack_0_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_prepack_0::TrainRearEndPos3 */MLRI__L_TRAININT TrainRearEndPos3,
  /* ProvidePositionReport_Pkg::op_prepack_0::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::op_prepack_0::train2trackStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::op_prepack_0::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_prepack_0::trainPosInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPosInfo,
  /* ProvidePositionReport_Pkg::op_prepack_0::valid */kcg_bool *valid,
  /* ProvidePositionReport_Pkg::op_prepack_0::posRep */MLRI__Position_Report_TrainToTrack *posRep)
{
  (*posRep).NID_PACKET = 0;
  (*posRep).L_PACKET = 0;
  (*posRep).qscale = MLRI__cQ_SCALE_ProvidePositionReport_Pkg;
  (*posRep).NID_LRBG = (*trainPos).LRBG.nid_bg;
  (*posRep).dirlrbg = (*trainPos).trainOrientationToLRBG;
  (*posRep).dlrbg = (*trainPos).nominalOrReverseToLRBG;
  (*posRep).length = (*train2trackStatus).q_length;
  (*posRep).L_TRAININT = TrainRearEndPos3;
  (*posRep).V_TRAIN = (*trainPosInfo).speed / 5;
  (*posRep).dirtrain = (*trainPos).trainRunningDirectionToLRBG;
  (*posRep).mode = (*train2trackStatus).m_mode;
  (*posRep).level = (*train2trackStatus).m_level;
  (*posRep).NID_NTC = (*train2trackStatus).nid_ntc;
  *valid = /* op_rep0_or_rep1 */
    MLRI__op_rep0_or_rep1_ProvidePositionReport_Pkg(&(*posBGs)[7]);
  (*posRep).D_LRBG = /* op_LRBG */
    MLRI__op_LRBG_ProvidePositionReport_Pkg(posBGs, trainPos);
  (*posRep).L_DOUBTOVER = /* op_DOUBTOVER */
    MLRI__op_DOUBTOVER_ProvidePositionReport_Pkg(trainPos);
  (*posRep).L_DOUBTUNDER = /* op_DOUBTUNDER */
    MLRI__op_DOUBTUNDER_ProvidePositionReport_Pkg(trainPos);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_prepack_0_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

