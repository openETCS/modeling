/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CollectData_ProvidePositionReport_Pkg.h"

void CollectData_init_ProvidePositionReport_Pkg(
  outC_CollectData_ProvidePositionReport_Pkg *outC)
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
  AggregatePacket_4_init_ProvidePositionReport_Pkg(&outC->Context_1);
}


void CollectData_reset_ProvidePositionReport_Pkg(
  outC_CollectData_ProvidePositionReport_Pkg *outC)
{
  /* 1 */ AggregatePacket_4_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}

/* ProvidePositionReport_Pkg::CollectData */
void CollectData_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CollectData::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::CollectData::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::CollectData::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::CollectData::TrainRearEndPos */ L_TRAININT TrainRearEndPos,
  /* ProvidePositionReport_Pkg::CollectData::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::CollectData::trigger */ kcg_bool trigger,
  /* ProvidePositionReport_Pkg::CollectData::errorMsg */ ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  /* ProvidePositionReport_Pkg::CollectData::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::CollectData::directionLRBG */ BG_Orientation_T_ProvidePositionReport_Pkg directionLRBG,
  /* ProvidePositionReport_Pkg::CollectData::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::CollectData::modeLevelStatus */ ModeAndLevelStatus_T_BG_Types_Pkg *modeLevelStatus,
  outC_CollectData_ProvidePositionReport_Pkg *outC)
{
  PT0_PositionReport_T_Packet_TrainTypes_Pkg tmp1;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg tmp;
  /* ProvidePositionReport_Pkg::CollectData::_L48 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L48;
  /* ProvidePositionReport_Pkg::CollectData::_L62 */ kcg_bool _L62;
  
  /* 1 */
  AggregatePacket_1_ProvidePositionReport_Pkg(
    modeLevelStatus,
    posBGs,
    trainPos,
    train2trackStatus,
    TrainRearEndPos,
    directionLRBG,
    prvDirTrain,
    odometry,
    &_L62,
    &_L48);
  outC->posRep.present = trigger & !_L62;
  /* 2 */
  AggregateHeader_ProvidePositionReport_Pkg(trainProps, &outC->posRep.header);
  /* 2 */
  AggregatePacket_0_ProvidePositionReport_Pkg(
    posBGs,
    trainPos,
    train2trackStatus,
    TrainRearEndPos,
    odometry,
    modeLevelStatus,
    &tmp1);
  /* 1 */
  AggregatePacket_4_ProvidePositionReport_Pkg(
    errorMsg,
    trigger,
    &outC->Context_1);
  /* 1 */ AggregatePacket_5_ProvidePositionReport_Pkg(trainProps, &tmp);
  /* AggregatePackets */
  AggregatePackets_ProvidePositionReport_Pkg(
    &tmp1,
    &_L48,
    &outC->Context_1.packet4,
    &tmp,
    &outC->posRep.packets);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CollectData_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

