/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/Simulation\kcg_s2c_config.txt
** Generation date: 2014-05-20T18:35:42
*************************************************************$ */
#ifndef _FinalCheck2_DetermineBGOrientation_LRBG_H_
#define _FinalCheck2_DetermineBGOrientation_LRBG_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::FinalCheck2::CheckedBGMessage */ CheckedBGMessage;
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::FinalCheck2::Orientation */ Orientation;
  RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport /* DetermineBGOrientation_LRBG::FinalCheck2::RBCOrientationReport */ RBCOrientationReport;
  TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo /* DetermineBGOrientation_LRBG::FinalCheck2::TrainInfo */ TrainInfo;
} inC_FinalCheck2_DetermineBGOrientation_LRBG;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets /* DetermineBGOrientation_LRBG::FinalCheck2::RBCReport */ RBCReport;
  FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage /* DetermineBGOrientation_LRBG::FinalCheck2::FilteredBGMessage */ FilteredBGMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2 */ SM2_reset_nxt_SM1_Level2or3;
  kcg_bool /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2 */ SM2_reset_act_SM1_Level2or3;
  SSM_ST_SM2_SM1_Level2or3 /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2 */ SM2_state_nxt_SM1_Level2or3;
  SSM_ST_SM1 /* DetermineBGOrientation_LRBG::FinalCheck2::SM1 */ SM1_state_nxt;
  kcg_bool /* DetermineBGOrientation_LRBG::FinalCheck2::SM1 */ SM1_reset_act;
  kcg_bool /* DetermineBGOrientation_LRBG::FinalCheck2::SM1 */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* DetermineBGOrientation_LRBG::FinalCheck2::SM1 */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level0or1::_L3 */ _L3_SM1_Level0or1;
  FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level0or1::_L2 */ _L2_SM1_Level0or1;
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level0or1::_L1 */ _L1_SM1_Level0or1;
  SSM_TR_SM2_SM1_Level2or3 /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2 */ SM2_fired_SM1_Level2or3;
  SSM_TR_SM2_SM1_Level2or3 /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2 */ SM2_fired_strong_SM1_Level2or3;
  SSM_ST_SM2_SM1_Level2or3 /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2 */ SM2_state_act_SM1_Level2or3;
  SSM_ST_SM2_SM1_Level2or3 /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2 */ SM2_state_sel_SM1_Level2or3;
  SSM_ST_SM2_SM1_Level2or3 /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2 */ _2_SM2_clock_SM1_Level2or3;
  SSM_ST_SM2_SM1_Level2or3 /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2 */ SM2_clock_SM1_Level2or3;
  CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::NoAck::_L3 */ _L3_SM1_Level2or3_SM2_NoAck;
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::NoAck::_L2 */ _L2_SM1_Level2or3_SM2_NoAck;
  FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::NoAck::_L1 */ _L1_SM1_Level2or3_SM2_NoAck;
  RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L9 */ _L9_SM1_Level2or3_SM2_Ack;
  NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L12 */ _L12_SM1_Level2or3_SM2_Ack;
  L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L13 */ _L13_SM1_Level2or3_SM2_Ack;
  T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L14 */ _L14_SM1_Level2or3_SM2_Ack;
  M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L15 */ _L15_SM1_Level2or3_SM2_Ack;
  NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L16 */ _L16_SM1_Level2or3_SM2_Ack;
  Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L17 */ _L17_SM1_Level2or3_SM2_Ack;
  Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L11 */ _L11_SM1_Level2or3_SM2_Ack;
  Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L10 */ _L10_SM1_Level2or3_SM2_Ack;
  FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L26 */ _L26_SM1_Level2or3_SM2_Ack;
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L31 */ _L31_SM1_Level2or3_SM2_Ack;
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L30 */ _L30_SM1_Level2or3_SM2_Ack;
  kcg_bool /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L29 */ _L29_SM1_Level2or3_SM2_Ack;
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L28 */ _L28_SM1_Level2or3_SM2_Ack;
  Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L32 */ _L32_SM1_Level2or3_SM2_Ack;
  CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::FinalCheck2::SM1::Level2or3::SM2::Ack::_L33 */ _L33_SM1_Level2or3_SM2_Ack;
  SSM_ST_SM1 /* DetermineBGOrientation_LRBG::FinalCheck2::SM1 */ SM1_state_sel;
  SSM_TR_SM1 /* DetermineBGOrientation_LRBG::FinalCheck2::SM1 */ SM1_fired_strong;
  SSM_TR_SM1 /* DetermineBGOrientation_LRBG::FinalCheck2::SM1 */ SM1_fired;
} outC_FinalCheck2_DetermineBGOrientation_LRBG;

/* ===========  node initialization and cycle functions  =========== */
/* DetermineBGOrientation_LRBG::FinalCheck2 */
extern void FinalCheck2_DetermineBGOrientation_LRBG(
  inC_FinalCheck2_DetermineBGOrientation_LRBG *inC,
  outC_FinalCheck2_DetermineBGOrientation_LRBG *outC);

extern void FinalCheck2_reset_DetermineBGOrientation_LRBG(
  outC_FinalCheck2_DetermineBGOrientation_LRBG *outC);

#endif /* _FinalCheck2_DetermineBGOrientation_LRBG_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FinalCheck2_DetermineBGOrientation_LRBG.h
** Generation date: 2014-05-20T18:35:42
*************************************************************$ */

