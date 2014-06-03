/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/Simulation\kcg_s2c_config.txt
** Generation date: 2014-05-28T10:33:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FinalCheck_DetermineBGOrientation_LRBG.h"

void FinalCheck_reset_DetermineBGOrientation_LRBG(
  outC_FinalCheck_DetermineBGOrientation_LRBG *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
}

/* DetermineBGOrientation_LRBG::FinalCheck */
void FinalCheck_DetermineBGOrientation_LRBG(
  /* DetermineBGOrientation_LRBG::FinalCheck::CheckedBGMessage */CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage *CheckedBGMessage,
  /* DetermineBGOrientation_LRBG::FinalCheck::Orientation */Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable Orientation,
  /* DetermineBGOrientation_LRBG::FinalCheck::RBCOrientationReport */RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport *RBCOrientationReport,
  /* DetermineBGOrientation_LRBG::FinalCheck::TrainInfo */TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo *TrainInfo,
  outC_FinalCheck_DetermineBGOrientation_LRBG *outC)
{
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ SSM_TR_SM1 _10_SM1_fired;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ kcg_bool _9_SM1_reset_nxt;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ SSM_ST_SM1 _8_SM1_state_nxt;
  /* DetermineBGOrientation_LRBG::FinalCheck::FilteredBGMessage */ FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage _7_FilteredBGMessage;
  /* DetermineBGOrientation_LRBG::FinalCheck::RBCReport */ Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets _6_RBCReport;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ SSM_TR_SM1 _5_SM1_fired;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ kcg_bool _4_SM1_reset_nxt;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ SSM_ST_SM1 _3_SM1_state_nxt;
  /* DetermineBGOrientation_LRBG::FinalCheck::FilteredBGMessage */ FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage _2_FilteredBGMessage;
  /* DetermineBGOrientation_LRBG::FinalCheck::RBCReport */ Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets _1_RBCReport;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ SSM_TR_SM1 SM1_fired;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ kcg_bool SM1_reset_nxt;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ SSM_ST_SM1 SM1_state_nxt;
  /* DetermineBGOrientation_LRBG::FinalCheck::FilteredBGMessage */ FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage FilteredBGMessage;
  /* DetermineBGOrientation_LRBG::FinalCheck::RBCReport */ Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets RBCReport;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ kcg_bool SM2_reset_prv_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ kcg_bool SM2_reset_sel_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ SSM_ST_SM2_SM1_Level2or3 SM2_state_act_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ kcg_bool SM2_reset_act_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ SSM_TR_SM2_SM1_Level2or3 SM2_fired_strong_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ SSM_ST_SM2_SM1_Level2or3 _23_SM2_state_act_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ kcg_bool _24_SM2_reset_act_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ SSM_TR_SM2_SM1_Level2or3 _25_SM2_fired_strong_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2::Init */ kcg_bool br_1_guard_SM1_Level2or3_SM2_Init;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2::Init */ kcg_bool br_2_guard_SM1_Level2or3_SM2_Init;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ SSM_ST_SM2_SM1_Level2or3 _26_SM2_state_act_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ kcg_bool _27_SM2_reset_act_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ SSM_TR_SM2_SM1_Level2or3 _28_SM2_fired_strong_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::RBCReport */ Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets _11_RBCReport;
  /* DetermineBGOrientation_LRBG::FinalCheck::FilteredBGMessage */ FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage _12_FilteredBGMessage;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ SSM_ST_SM2_SM1_Level2or3 SM2_state_nxt_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ kcg_bool SM2_reset_nxt_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ SSM_TR_SM2_SM1_Level2or3 SM2_fired_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::RBCReport */ Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets _13_RBCReport;
  /* DetermineBGOrientation_LRBG::FinalCheck::FilteredBGMessage */ FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage _14_FilteredBGMessage;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ SSM_ST_SM2_SM1_Level2or3 _15_SM2_state_nxt_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ kcg_bool _16_SM2_reset_nxt_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ SSM_TR_SM2_SM1_Level2or3 _17_SM2_fired_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::RBCReport */ Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets _18_RBCReport;
  /* DetermineBGOrientation_LRBG::FinalCheck::FilteredBGMessage */ FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage _19_FilteredBGMessage;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ SSM_ST_SM2_SM1_Level2or3 _20_SM2_state_nxt_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ kcg_bool _21_SM2_reset_nxt_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */ SSM_TR_SM2_SM1_Level2or3 _22_SM2_fired_SM1_Level2or3;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ SSM_TR_SM1 _34_SM1_fired_strong;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ kcg_bool _33_SM1_reset_act;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ SSM_ST_SM1 _32_SM1_state_act;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Initial */ kcg_bool br_2_guard_SM1_Initial;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1::Initial */ kcg_bool br_1_guard_SM1_Initial;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ SSM_TR_SM1 _31_SM1_fired_strong;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ kcg_bool _30_SM1_reset_act;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ SSM_ST_SM1 _29_SM1_state_act;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ SSM_TR_SM1 SM1_fired_strong;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ kcg_bool SM1_reset_act;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ SSM_ST_SM1 SM1_state_act;
  /* DetermineBGOrientation_LRBG::FinalCheck::FilteredBGMessage */ FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage last_FilteredBGMessage;
  /* DetermineBGOrientation_LRBG::FinalCheck::RBCReport */ Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets last_RBCReport;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ kcg_bool SM1_reset_sel;
  /* DetermineBGOrientation_LRBG::FinalCheck::SM1 */ kcg_bool SM1_reset_prv;
  
  if (outC->init1) {
    outC->SM1_state_sel = SSM_st_Initial_SM1;
  }
  else {
    outC->SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Initial_SM1 :
      br_1_guard_SM1_Initial =
        (M_LEVELTR__Level_0_DetermineBGOrientation_LRBG_DataDctionary_Variable ==
          (*TrainInfo).m_leveltr) |
        (M_LEVELTR__Level_1_DetermineBGOrientation_LRBG_DataDctionary_Variable ==
          (*TrainInfo).m_leveltr);
      br_2_guard_SM1_Initial =
        (M_LEVELTR__Level_2_DetermineBGOrientation_LRBG_DataDctionary_Variable ==
          (*TrainInfo).m_leveltr) |
        (M_LEVELTR__Level_3_DetermineBGOrientation_LRBG_DataDctionary_Variable ==
          (*TrainInfo).m_leveltr);
      if (br_1_guard_SM1_Initial) {
        _32_SM1_state_act = SSM_st_Level0or1_SM1;
      }
      else if (br_2_guard_SM1_Initial) {
        _32_SM1_state_act = SSM_st_Level2or3_SM1;
      }
      else {
        _32_SM1_state_act = SSM_st_Initial_SM1;
      }
      outC->SM1_state_act = _32_SM1_state_act;
      break;
    case SSM_st_Level0or1_SM1 :
      _29_SM1_state_act = SSM_st_Level0or1_SM1;
      outC->SM1_state_act = _29_SM1_state_act;
      break;
    case SSM_st_Level2or3_SM1 :
      SM1_state_act = SSM_st_Level2or3_SM1;
      outC->SM1_state_act = SM1_state_act;
      break;
    
  }
  if (outC->init1) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Initial_SM1 :
      if (br_1_guard_SM1_Initial) {
        _33_SM1_reset_act = kcg_true;
      }
      else {
        _33_SM1_reset_act = br_2_guard_SM1_Initial;
      }
      outC->SM1_reset_act = _33_SM1_reset_act;
      break;
    case SSM_st_Level0or1_SM1 :
      _30_SM1_reset_act = kcg_false;
      outC->SM1_reset_act = _30_SM1_reset_act;
      break;
    case SSM_st_Level2or3_SM1 :
      SM1_reset_act = kcg_false;
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Level2or3_SM1 :
      if (outC->SM1_reset_act) {
        outC->init = kcg_true;
      }
      if (outC->init) {
        outC->SM2_state_sel_SM1_Level2or3 = SSM_st_Init_SM1_Level2or3_SM2;
      }
      else {
        outC->SM2_state_sel_SM1_Level2or3 = outC->SM2_state_nxt_SM1_Level2or3;
      }
      outC->_2_SM2_clock_SM1_Level2or3 = outC->SM2_state_sel_SM1_Level2or3;
      switch (outC->_2_SM2_clock_SM1_Level2or3) {
        case SSM_st_Init_SM1_Level2or3_SM2 :
          br_1_guard_SM1_Level2or3_SM2_Init =
            (*RBCOrientationReport).assignment_of_coordinate_system.M_ACK ==
            M_ACK__Acknowledgement_required_DetermineBGOrientation_LRBG_DataDctionary_Variable;
          br_2_guard_SM1_Level2or3_SM2_Init =
            (*RBCOrientationReport).assignment_of_coordinate_system.M_ACK ==
            M_ACK__No_acknowledgement_required_DetermineBGOrientation_LRBG_DataDctionary_Variable;
          if (br_1_guard_SM1_Level2or3_SM2_Init) {
            _26_SM2_state_act_SM1_Level2or3 = SSM_st_Ack_SM1_Level2or3_SM2;
          }
          else if (br_2_guard_SM1_Level2or3_SM2_Init) {
            _26_SM2_state_act_SM1_Level2or3 = SSM_st_NoAck_SM1_Level2or3_SM2;
          }
          else {
            _26_SM2_state_act_SM1_Level2or3 = SSM_st_Init_SM1_Level2or3_SM2;
          }
          outC->SM2_state_act_SM1_Level2or3 = _26_SM2_state_act_SM1_Level2or3;
          break;
        case SSM_st_Ack_SM1_Level2or3_SM2 :
          _23_SM2_state_act_SM1_Level2or3 = SSM_st_Ack_SM1_Level2or3_SM2;
          outC->SM2_state_act_SM1_Level2or3 = _23_SM2_state_act_SM1_Level2or3;
          break;
        case SSM_st_NoAck_SM1_Level2or3_SM2 :
          SM2_state_act_SM1_Level2or3 = SSM_st_NoAck_SM1_Level2or3_SM2;
          outC->SM2_state_act_SM1_Level2or3 = SM2_state_act_SM1_Level2or3;
          break;
        
      }
      outC->SM2_clock_SM1_Level2or3 = outC->SM2_state_act_SM1_Level2or3;
      switch (outC->SM2_clock_SM1_Level2or3) {
        case SSM_st_Ack_SM1_Level2or3_SM2 :
          kcg_copy_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport(
            &outC->_L9_SM1_Level2or3_SM2_Ack,
            RBCOrientationReport);
          kcg_copy_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets(
            &outC->_L11_SM1_Level2or3_SM2_Ack,
            &outC->_L9_SM1_Level2or3_SM2_Ack.assignment_of_coordinate_system);
          outC->_L17_SM1_Level2or3_SM2_Ack =
            outC->_L11_SM1_Level2or3_SM2_Ack.Q_ORIENTATION;
          outC->_L16_SM1_Level2or3_SM2_Ack =
            outC->_L11_SM1_Level2or3_SM2_Ack.NID_LRBG;
          outC->_L15_SM1_Level2or3_SM2_Ack =
            outC->_L11_SM1_Level2or3_SM2_Ack.M_ACK;
          outC->_L14_SM1_Level2or3_SM2_Ack =
            outC->_L11_SM1_Level2or3_SM2_Ack.T_TRAIN;
          outC->_L13_SM1_Level2or3_SM2_Ack =
            outC->_L11_SM1_Level2or3_SM2_Ack.L_MESSAGE;
          break;
        
      }
      break;
    
  }
  if (outC->init1) {
    kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
      &last_FilteredBGMessage,
      (FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage *)
        &FilteredBGMessages_DetermineBGOrientation_LRBG);
  }
  else {
    kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
      &last_FilteredBGMessage,
      &outC->FilteredBGMessage);
  }
  if (outC->init1) {
    kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
      &last_RBCReport,
      (Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets *)
        &RBCReports_DetermineBGOrientation_LRBG);
  }
  else {
    kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
      &last_RBCReport,
      &outC->RBCReport);
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Initial_SM1 :
      kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
        &_7_FilteredBGMessage,
        &last_FilteredBGMessage);
      kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
        &_6_RBCReport,
        &last_RBCReport);
      break;
    
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Initial_SM1 :
      if (br_1_guard_SM1_Initial) {
        _34_SM1_fired_strong = SSM_TR_Initial_1_SM1;
      }
      else if (br_2_guard_SM1_Initial) {
        _34_SM1_fired_strong = SSM_TR_Initial_2_SM1;
      }
      else {
        _34_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _34_SM1_fired_strong;
      break;
    case SSM_st_Level0or1_SM1 :
      _31_SM1_fired_strong = SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _31_SM1_fired_strong;
      break;
    case SSM_st_Level2or3_SM1 :
      SM1_fired_strong = SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Initial_SM1 :
      _10_SM1_fired = outC->SM1_fired_strong;
      _9_SM1_reset_nxt = kcg_false;
      _8_SM1_state_nxt = SSM_st_Initial_SM1;
      outC->SM1_fired = _10_SM1_fired;
      break;
    case SSM_st_Level0or1_SM1 :
      kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
        &_1_RBCReport,
        &last_RBCReport);
      _5_SM1_fired = outC->SM1_fired_strong;
      _4_SM1_reset_nxt = kcg_false;
      _3_SM1_state_nxt = SSM_st_Level0or1_SM1;
      kcg_copy_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
        &outC->_L3_SM1_Level0or1,
        CheckedBGMessage);
      outC->_L1_SM1_Level0or1 = Orientation;
      outC->_L2_SM1_Level0or1.q_dirlrbg = outC->_L1_SM1_Level0or1;
      kcg_copy_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
        &outC->_L2_SM1_Level0or1.checkedbgmessage,
        &outC->_L3_SM1_Level0or1);
      kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
        &_2_FilteredBGMessage,
        &outC->_L2_SM1_Level0or1);
      outC->SM1_fired = _5_SM1_fired;
      break;
    case SSM_st_Level2or3_SM1 :
      SM1_fired = outC->SM1_fired_strong;
      SM1_reset_nxt = kcg_false;
      SM1_state_nxt = SSM_st_Level2or3_SM1;
      switch (outC->SM2_clock_SM1_Level2or3) {
        case SSM_st_Init_SM1_Level2or3_SM2 :
          kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
            &_19_FilteredBGMessage,
            &last_FilteredBGMessage);
          kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
            &_18_RBCReport,
            &last_RBCReport);
          break;
        
      }
      switch (outC->_2_SM2_clock_SM1_Level2or3) {
        case SSM_st_Init_SM1_Level2or3_SM2 :
          if (br_1_guard_SM1_Level2or3_SM2_Init) {
            _28_SM2_fired_strong_SM1_Level2or3 =
              SSM_TR_Init_1_SM2_SM1_Level2or3;
          }
          else if (br_2_guard_SM1_Level2or3_SM2_Init) {
            _28_SM2_fired_strong_SM1_Level2or3 =
              SSM_TR_Init_2_SM2_SM1_Level2or3;
          }
          else {
            _28_SM2_fired_strong_SM1_Level2or3 =
              SSM_TR_no_trans_SM2_SM1_Level2or3;
          }
          outC->SM2_fired_strong_SM1_Level2or3 =
            _28_SM2_fired_strong_SM1_Level2or3;
          break;
        case SSM_st_Ack_SM1_Level2or3_SM2 :
          _25_SM2_fired_strong_SM1_Level2or3 =
            SSM_TR_no_trans_SM2_SM1_Level2or3;
          outC->SM2_fired_strong_SM1_Level2or3 =
            _25_SM2_fired_strong_SM1_Level2or3;
          break;
        case SSM_st_NoAck_SM1_Level2or3_SM2 :
          SM2_fired_strong_SM1_Level2or3 = SSM_TR_no_trans_SM2_SM1_Level2or3;
          outC->SM2_fired_strong_SM1_Level2or3 = SM2_fired_strong_SM1_Level2or3;
          break;
        
      }
      switch (outC->SM2_clock_SM1_Level2or3) {
        case SSM_st_Init_SM1_Level2or3_SM2 :
          _22_SM2_fired_SM1_Level2or3 = outC->SM2_fired_strong_SM1_Level2or3;
          _21_SM2_reset_nxt_SM1_Level2or3 = kcg_false;
          _20_SM2_state_nxt_SM1_Level2or3 = SSM_st_Init_SM1_Level2or3_SM2;
          outC->SM2_fired_SM1_Level2or3 = _22_SM2_fired_SM1_Level2or3;
          break;
        case SSM_st_Ack_SM1_Level2or3_SM2 :
          _17_SM2_fired_SM1_Level2or3 = outC->SM2_fired_strong_SM1_Level2or3;
          _16_SM2_reset_nxt_SM1_Level2or3 = kcg_false;
          _15_SM2_state_nxt_SM1_Level2or3 = SSM_st_Ack_SM1_Level2or3_SM2;
          outC->_L12_SM1_Level2or3_SM2_Ack =
            outC->_L11_SM1_Level2or3_SM2_Ack.NID_MESSAGE;
          outC->_L10_SM1_Level2or3_SM2_Ack.NID_MESSAGE =
            outC->_L12_SM1_Level2or3_SM2_Ack;
          outC->_L10_SM1_Level2or3_SM2_Ack.L_MESSAGE =
            outC->_L13_SM1_Level2or3_SM2_Ack;
          outC->_L10_SM1_Level2or3_SM2_Ack.T_TRAIN =
            outC->_L14_SM1_Level2or3_SM2_Ack;
          kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
            &_13_RBCReport,
            &outC->_L10_SM1_Level2or3_SM2_Ack);
          kcg_copy_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
            &outC->_L33_SM1_Level2or3_SM2_Ack,
            CheckedBGMessage);
          outC->_L32_SM1_Level2or3_SM2_Ack =
            Q_ORIENTATION__The_balise_group_has_been_passed_by_the_train_in_nominal_direction_DetermineBGOrientation_LRBG_DataDctionary_Variable;
          outC->_L31_SM1_Level2or3_SM2_Ack =
            Q_DIRTRAIN__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable;
          outC->_L30_SM1_Level2or3_SM2_Ack =
            Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable;
          outC->_L29_SM1_Level2or3_SM2_Ack = outC->_L17_SM1_Level2or3_SM2_Ack ==
            outC->_L32_SM1_Level2or3_SM2_Ack;
          if (outC->_L29_SM1_Level2or3_SM2_Ack) {
            outC->_L28_SM1_Level2or3_SM2_Ack = outC->_L31_SM1_Level2or3_SM2_Ack;
          }
          else {
            outC->_L28_SM1_Level2or3_SM2_Ack = outC->_L30_SM1_Level2or3_SM2_Ack;
          }
          outC->_L26_SM1_Level2or3_SM2_Ack.q_dirlrbg =
            outC->_L28_SM1_Level2or3_SM2_Ack;
          kcg_copy_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
            &outC->_L26_SM1_Level2or3_SM2_Ack.checkedbgmessage,
            &outC->_L33_SM1_Level2or3_SM2_Ack);
          kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
            &_14_FilteredBGMessage,
            &outC->_L26_SM1_Level2or3_SM2_Ack);
          outC->SM2_fired_SM1_Level2or3 = _17_SM2_fired_SM1_Level2or3;
          break;
        case SSM_st_NoAck_SM1_Level2or3_SM2 :
          kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
            &_11_RBCReport,
            &last_RBCReport);
          SM2_fired_SM1_Level2or3 = outC->SM2_fired_strong_SM1_Level2or3;
          SM2_reset_nxt_SM1_Level2or3 = kcg_false;
          SM2_state_nxt_SM1_Level2or3 = SSM_st_NoAck_SM1_Level2or3_SM2;
          kcg_copy_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
            &outC->_L3_SM1_Level2or3_SM2_NoAck,
            CheckedBGMessage);
          outC->_L2_SM1_Level2or3_SM2_NoAck = Orientation;
          outC->_L1_SM1_Level2or3_SM2_NoAck.q_dirlrbg =
            outC->_L2_SM1_Level2or3_SM2_NoAck;
          kcg_copy_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
            &outC->_L1_SM1_Level2or3_SM2_NoAck.checkedbgmessage,
            &outC->_L3_SM1_Level2or3_SM2_NoAck);
          kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
            &_12_FilteredBGMessage,
            &outC->_L1_SM1_Level2or3_SM2_NoAck);
          outC->SM2_fired_SM1_Level2or3 = SM2_fired_SM1_Level2or3;
          break;
        
      }
      if (outC->init) {
        SM2_reset_sel_SM1_Level2or3 = kcg_false;
      }
      else {
        SM2_reset_sel_SM1_Level2or3 = outC->SM2_reset_nxt_SM1_Level2or3;
      }
      switch (outC->SM2_clock_SM1_Level2or3) {
        case SSM_st_Init_SM1_Level2or3_SM2 :
          outC->SM2_reset_nxt_SM1_Level2or3 = _21_SM2_reset_nxt_SM1_Level2or3;
          outC->SM2_state_nxt_SM1_Level2or3 = _20_SM2_state_nxt_SM1_Level2or3;
          kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
            &FilteredBGMessage,
            &_19_FilteredBGMessage);
          kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
            &RBCReport,
            &_18_RBCReport);
          break;
        case SSM_st_Ack_SM1_Level2or3_SM2 :
          outC->SM2_reset_nxt_SM1_Level2or3 = _16_SM2_reset_nxt_SM1_Level2or3;
          outC->SM2_state_nxt_SM1_Level2or3 = _15_SM2_state_nxt_SM1_Level2or3;
          kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
            &FilteredBGMessage,
            &_14_FilteredBGMessage);
          kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
            &RBCReport,
            &_13_RBCReport);
          break;
        case SSM_st_NoAck_SM1_Level2or3_SM2 :
          outC->SM2_reset_nxt_SM1_Level2or3 = SM2_reset_nxt_SM1_Level2or3;
          outC->SM2_state_nxt_SM1_Level2or3 = SM2_state_nxt_SM1_Level2or3;
          kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
            &FilteredBGMessage,
            &_12_FilteredBGMessage);
          kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
            &RBCReport,
            &_11_RBCReport);
          break;
        
      }
      switch (outC->_2_SM2_clock_SM1_Level2or3) {
        case SSM_st_Init_SM1_Level2or3_SM2 :
          if (br_1_guard_SM1_Level2or3_SM2_Init) {
            _27_SM2_reset_act_SM1_Level2or3 = kcg_true;
          }
          else {
            _27_SM2_reset_act_SM1_Level2or3 = br_2_guard_SM1_Level2or3_SM2_Init;
          }
          break;
        case SSM_st_Ack_SM1_Level2or3_SM2 :
          _24_SM2_reset_act_SM1_Level2or3 = kcg_false;
          break;
        case SSM_st_NoAck_SM1_Level2or3_SM2 :
          SM2_reset_act_SM1_Level2or3 = kcg_false;
          break;
        
      }
      if (outC->init) {
        SM2_reset_prv_SM1_Level2or3 = kcg_false;
      }
      else {
        SM2_reset_prv_SM1_Level2or3 = outC->SM2_reset_act_SM1_Level2or3;
      }
      switch (outC->_2_SM2_clock_SM1_Level2or3) {
        case SSM_st_Init_SM1_Level2or3_SM2 :
          outC->SM2_reset_act_SM1_Level2or3 = _27_SM2_reset_act_SM1_Level2or3;
          break;
        case SSM_st_Ack_SM1_Level2or3_SM2 :
          outC->SM2_reset_act_SM1_Level2or3 = _24_SM2_reset_act_SM1_Level2or3;
          break;
        case SSM_st_NoAck_SM1_Level2or3_SM2 :
          outC->SM2_reset_act_SM1_Level2or3 = SM2_reset_act_SM1_Level2or3;
          break;
        
      }
      outC->SM1_fired = SM1_fired;
      break;
    
  }
  if (outC->init1) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Initial_SM1 :
      outC->SM1_reset_nxt = _9_SM1_reset_nxt;
      outC->SM1_state_nxt = _8_SM1_state_nxt;
      kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
        &outC->FilteredBGMessage,
        &_7_FilteredBGMessage);
      kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
        &outC->RBCReport,
        &_6_RBCReport);
      break;
    case SSM_st_Level0or1_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt;
      outC->SM1_state_nxt = _3_SM1_state_nxt;
      kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
        &outC->FilteredBGMessage,
        &_2_FilteredBGMessage);
      kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
        &outC->RBCReport,
        &_1_RBCReport);
      break;
    case SSM_st_Level2or3_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt;
      outC->SM1_state_nxt = SM1_state_nxt;
      kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
        &outC->FilteredBGMessage,
        &FilteredBGMessage);
      kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
        &outC->RBCReport,
        &RBCReport);
      outC->init = kcg_false;
      break;
    
  }
  outC->init1 = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FinalCheck_DetermineBGOrientation_LRBG.c
** Generation date: 2014-05-28T10:33:10
*************************************************************$ */

