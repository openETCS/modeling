/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ProvidePositionReport_ProvidePositionReport_Pkg.h"

void ProvidePositionReport_init_ProvidePositionReport_Pkg(
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC)
{
  int i1;
  int i;
  
  for (i = 0; i < 3; i++) {
    outC->posRep.packets.p11.nid_ntc[i] = 0;
  }
  outC->posRep.packets.p11.nIter_ntc = 0;
  for (i = 0; i < 3; i++) {
    outC->posRep.packets.p11.tractionIdentity[i].nid_ctraction = 0;
    outC->posRep.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  }
  outC->posRep.packets.p11.nIter_tractionIdentity = 0;
  outC->posRep.packets.p11.n_axle = 0;
  outC->posRep.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->posRep.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->posRep.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->posRep.packets.p11.v_maxtrain = 0;
  outC->posRep.packets.p11.l_train = 0;
  outC->posRep.packets.p11.NC_TRAIN =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->posRep.packets.p11.NC_CDTRAIN = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->posRep.packets.p11.valid = kcg_true;
  outC->posRep.packets.p5.TrainRunningNumber = 0;
  outC->posRep.packets.p5.valid = kcg_true;
  outC->posRep.packets.p4.M_ERROR =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->posRep.packets.p4.valid = kcg_true;
  for (i = 0; i < 1; i++) {
    for (i1 = 0; i1 < 15; i1++) {
      outC->posRep.packets.p3.aNID_RADIO[i].telephoneNumber[i1] = 0;
    }
    outC->posRep.packets.p3.aNID_RADIO[i].valid = kcg_true;
  }
  outC->posRep.packets.p3.number = 0;
  outC->posRep.packets.p3.valid = kcg_true;
  outC->posRep.packets.p1.packet1.NID_NTC = 0;
  outC->posRep.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->posRep.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->posRep.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->posRep.packets.p1.packet1.V_TRAIN = 0;
  outC->posRep.packets.p1.packet1.L_TRAININT = 0;
  outC->posRep.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->posRep.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->posRep.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->posRep.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->posRep.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->posRep.packets.p1.packet1.D_LRBG = 0;
  outC->posRep.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->posRep.packets.p1.packet1.NID_LRBG = 0;
  outC->posRep.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->posRep.packets.p1.packet1.L_PACKET = 0;
  outC->posRep.packets.p1.packet1.NID_PACKET = 0;
  outC->posRep.packets.p1.valid = kcg_true;
  outC->posRep.packets.p0.packet0.NID_NTC = 0;
  outC->posRep.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->posRep.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->posRep.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->posRep.packets.p0.packet0.V_TRAIN = 0;
  outC->posRep.packets.p0.packet0.L_TRAININT = 0;
  outC->posRep.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->posRep.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->posRep.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->posRep.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->posRep.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->posRep.packets.p0.packet0.D_LRBG = 0;
  outC->posRep.packets.p0.packet0.NID_LRBG = 0;
  outC->posRep.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->posRep.packets.p0.packet0.L_PACKET = 0;
  outC->posRep.packets.p0.packet0.NID_PACKET = 0;
  outC->posRep.packets.p0.valid = kcg_true;
  outC->posRep.header.xT_TRAIN = 0.0;
  outC->posRep.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->posRep.header.nid_engine = 0;
  outC->posRep.header.t_train = 0.0;
  outC->posRep.header.nid_message = 0;
  outC->posRep.header.present = kcg_true;
  outC->posRep.present = kcg_true;
  CalculateSafeTrainLength_init_ProvidePositionReport_Pkg(&outC->Context_1);
  EvaluateTriggerAndEvents_init_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  CollectData_init_ProvidePositionReport_Pkg(&outC->_2_Context_1);
}


void ProvidePositionReport_reset_ProvidePositionReport_Pkg(
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC)
{
  /* 1 */ CollectData_reset_ProvidePositionReport_Pkg(&outC->_2_Context_1);
  /* 1 */
  EvaluateTriggerAndEvents_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */
  CalculateSafeTrainLength_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}

/* ProvidePositionReport_Pkg::ProvidePositionReport */
void ProvidePositionReport_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::ProvidePositionReport::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trackInfo */ LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::posRepPara */ PositionReportParameter_T_Common_Types_Pkg *posRepPara,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::systemTime */ SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::rcbComm */ RBC_Communication_T_ProvidePositionReport_Pkg *rcbComm,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::directionLRBG */ BG_Orientation_T_ProvidePositionReport_Pkg directionLRBG,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::BG_LinkingConsistencyError */ kcg_bool BG_LinkingConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::LinkedBG_MessageConsistencyError */ kcg_bool LinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::UnlinkedBG_MessageConsistencyError */ kcg_bool UnlinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioMessageConsistencyError */ kcg_bool RadioMessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSequenceError */ kcg_bool RadioSequenceError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSafeRadioConnectionError */ kcg_bool RadioSafeRadioConnectionError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::SafetyCriticalFailure */ kcg_bool SafetyCriticalFailure,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleLinkingError */ kcg_bool DoubleLinkingError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleRepositioningError */ kcg_bool DoubleRepositioningError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::modeLevelStatus */ ModeAndLevelStatus_T_BG_Types_Pkg *modeLevelStatus,
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC)
{
  ErrorMessage_T_ProvidePositionReport_Pkg tmp;
  
  /* 1 */
  CalculateSafeTrainLength_ProvidePositionReport_Pkg(
    trainProps,
    trainPos,
    &outC->Context_1);
  /* 1 */
  EvaluateTriggerAndEvents_ProvidePositionReport_Pkg(
    odometry,
    trainPos,
    posRepPara,
    posBGs,
    systemTime,
    rcbComm,
    train2trackStatus,
    outC->Context_1.minSafeRearEnd,
    trackInfo,
    modeLevelStatus,
    &outC->_1_Context_1);
  /* 1 */
  ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg(
    BG_LinkingConsistencyError,
    LinkedBG_MessageConsistencyError,
    UnlinkedBG_MessageConsistencyError,
    RadioMessageConsistencyError,
    RadioSequenceError,
    RadioSafeRadioConnectionError,
    SafetyCriticalFailure,
    DoubleLinkingError,
    DoubleRepositioningError,
    &tmp);
  /* 1 */
  CollectData_ProvidePositionReport_Pkg(
    posBGs,
    trainPos,
    trainProps,
    outC->Context_1.safeTrainLength,
    odometry,
    outC->_1_Context_1.trigger,
    &tmp,
    train2trackStatus,
    directionLRBG,
    prvDirTrain,
    modeLevelStatus,
    &outC->_2_Context_1);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->posRep,
    &outC->_2_Context_1.posRep);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** ProvidePositionReport_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

