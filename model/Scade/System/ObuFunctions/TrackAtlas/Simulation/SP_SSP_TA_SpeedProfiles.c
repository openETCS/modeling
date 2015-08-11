/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_SSP_TA_SpeedProfiles.h"

void SP_SSP_reset_TA_SpeedProfiles(outC_SP_SSP_TA_SpeedProfiles *outC)
{
  outC->init = kcg_true;
  /* 1 */ Update_LRBG_then_SSP_reset_TA_SSP(&outC->_5_Context_1);
  /* 1 */ Update_SSP_then_LRBG_reset_TA_SSP(&outC->_4_Context_1);
  /* 1 */ Update_SSP_only_reset_TA_SSP(&outC->_3_Context_1);
  /* 1 */ Update_LRBG_only_reset_TA_SSP(&outC->_2_Context_1);
  /* 1 */ Eval_LRBG_reset_TA_Lib_internal(&outC->_1_Context_1);
  /* 1 */ Read_P027V1_reset_TM_baseline2(&outC->Context_1);
}

/* TA_SpeedProfiles::SP_SSP */
void SP_SSP_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_SSP::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SpeedProfiles::SP_SSP::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_SpeedProfiles::SP_SSP::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_SP_SSP_TA_SpeedProfiles *outC)
{
  /* TA_SpeedProfiles::SP_SSP::SSP */ SSP_cat_t_TA_MRSP SSP2;
  /* TA_SpeedProfiles::SP_SSP::updated */ kcg_bool _1_updated;
  /* TA_SpeedProfiles::SP_SSP::SSP */ SSP_cat_t_TA_MRSP SSP;
  /* TA_SpeedProfiles::SP_SSP::updated */ kcg_bool updated;
  /* TA_SpeedProfiles::SP_SSP::updated */ kcg_bool _10_updated;
  /* TA_SpeedProfiles::SP_SSP::SSP */ SSP_cat_t_TA_MRSP SSP9;
  /* TA_SpeedProfiles::SP_SSP::updated */ kcg_bool _8_updated;
  /* TA_SpeedProfiles::SP_SSP::SSP */ SSP_cat_t_TA_MRSP SSP7;
  /* TA_SpeedProfiles::SP_SSP::SSP */ SSP_cat_t_TA_MRSP SSP11;
  /* TA_SpeedProfiles::SP_SSP::updated */ kcg_bool _12_updated;
  /* TA_SpeedProfiles::SP_SSP::SSP */ SSP_cat_t_TA_MRSP SSP13;
  /* TA_SpeedProfiles::SP_SSP::updated */ kcg_bool _14_updated;
  /* TA_SpeedProfiles::SP_SSP::SSP */ SSP_cat_t_TA_MRSP SSP3;
  /* TA_SpeedProfiles::SP_SSP::updated */ kcg_bool _4_updated;
  /* TA_SpeedProfiles::SP_SSP::SSP */ SSP_cat_t_TA_MRSP SSP5;
  /* TA_SpeedProfiles::SP_SSP::updated */ kcg_bool _6_updated;
  /* TA_SpeedProfiles::SP_SSP::SSP */ SSP_cat_t_TA_MRSP last_SSP;
  
  if (outC->init) {
    kcg_copy_SSP_cat_t_TA_MRSP(
      &last_SSP,
      (SSP_cat_t_TA_MRSP *) &DEFAULT_SSP_cat_TA_MRSP);
  }
  else {
    kcg_copy_SSP_cat_t_TA_MRSP(&last_SSP, &outC->SSP);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L73,
    &outC->_L1.packets);
  /* 1 */ Read_P027V1_TM_baseline2(&outC->_L73, &outC->Context_1);
  outC->_L59 = outC->Context_1.received;
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L60, &outC->Context_1.P027V1_out);
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->P27V1_local, &outC->_L60);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L107, MessageIn);
  /* 1 */ Eval_LRBG_TA_Lib_internal(&outC->_L107, &outC->_1_Context_1);
  outC->_L108 = outC->_1_Context_1.LRBG;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L42, train_position);
  outC->_L112 = outC->_L42.prvLRBG.nid_bg;
  outC->_L109 = outC->_L108 == outC->_L112;
  outC->msg_prvLRBG = outC->_L109;
  outC->_L117 = outC->msg_prvLRBG;
  outC->new_SSP = outC->_L59;
  outC->_L133 = outC->new_SSP;
  if (outC->init) {
    outC->_L103 = 0;
  }
  else {
    outC->_L103 = outC->_L111;
  }
  outC->_L111 = outC->_L42.LRBG.nid_bg;
  outC->_L104 = outC->_L111 != outC->_L103;
  outC->new_LRBG = outC->_L104;
  outC->_L132 = outC->new_LRBG;
  outC->_L134 = outC->_L133 & outC->_L132;
  outC->_L135 = outC->_L117 & outC->_L134;
  outC->both_new_prvLRBG = outC->_L135;
  outC->_L113 = outC->_L108 == outC->_L111;
  outC->msg_LRBG = outC->_L113;
  outC->_L116 = outC->msg_LRBG;
  outC->_L136 = outC->_L134 & outC->_L116;
  outC->both_new_curLRBG = outC->_L136;
  outC->_L128 = outC->new_SSP;
  outC->_L129 = !outC->_L128;
  outC->_L127 = outC->new_LRBG;
  outC->_L130 = outC->_L129 & outC->_L127;
  outC->newLRBG_only = outC->_L130;
  outC->_L119 = outC->new_SSP;
  outC->_L118 = outC->new_LRBG;
  outC->_L124 = !outC->_L118;
  outC->_L125 = outC->_L119 & outC->_L124;
  outC->newSSP_only = outC->_L125;
  outC->IfBlock1_clock = outC->newLRBG_only == kcg_true;
  if (outC->IfBlock1_clock) {
    outC->_L4_IfBlock1 = kcg_true;
    _1_updated = outC->_L4_IfBlock1;
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->_L2_IfBlock1,
      train_position);
    kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L1_IfBlock1, &last_SSP);
    /* 1 */
    Update_LRBG_only_TA_SSP(
      &outC->_L1_IfBlock1,
      &outC->_L2_IfBlock1,
      &outC->_2_Context_1);
    kcg_copy_SSP_cat_t_TA_MRSP(
      &outC->_L3_IfBlock1,
      &outC->_2_Context_1.new_profile_out);
    kcg_copy_SSP_cat_t_TA_MRSP(&SSP2, &outC->_L3_IfBlock1);
    kcg_copy_SSP_cat_t_TA_MRSP(&outC->SSP, &SSP2);
    outC->updated = _1_updated;
  }
  else {
    outC->_7_else_clock_IfBlock1 = outC->newSSP_only == kcg_true;
    if (outC->_7_else_clock_IfBlock1) {
      outC->_L5_IfBlock1 = kcg_true;
      _6_updated = outC->_L5_IfBlock1;
      outC->_L39_IfBlock1 = train_length;
      kcg_copy_P027V1_OBU_T_TM_baseline2(
        &outC->_L210_IfBlock1,
        &outC->P27V1_local);
      kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L111_IfBlock1, &last_SSP);
      /* 1 */
      Update_SSP_only_TA_SSP(
        &outC->_L111_IfBlock1,
        &outC->_L210_IfBlock1,
        outC->_L39_IfBlock1,
        &outC->_3_Context_1);
      kcg_copy_SSP_cat_t_TA_MRSP(
        &outC->_L48_IfBlock1,
        &outC->_3_Context_1.new_profile_out);
      kcg_copy_SSP_cat_t_TA_MRSP(&SSP5, &outC->_L48_IfBlock1);
      updated = _6_updated;
      kcg_copy_SSP_cat_t_TA_MRSP(&SSP, &SSP5);
    }
    else {
      outC->_6_else_clock_IfBlock1 = outC->both_new_prvLRBG == kcg_true;
      if (outC->_6_else_clock_IfBlock1) {
        outC->_L6_IfBlock1 = kcg_true;
        _10_updated = outC->_L6_IfBlock1;
        kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
          &outC->_L413_IfBlock1,
          train_position);
        outC->_L314_IfBlock1 = train_length;
        kcg_copy_P027V1_OBU_T_TM_baseline2(
          &outC->_L215_IfBlock1,
          &outC->P27V1_local);
        kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L116_IfBlock1, &last_SSP);
        /* 1 */
        Update_SSP_then_LRBG_TA_SSP(
          &outC->_L116_IfBlock1,
          &outC->_L215_IfBlock1,
          outC->_L314_IfBlock1,
          &outC->_L413_IfBlock1,
          &outC->_4_Context_1);
        kcg_copy_SSP_cat_t_TA_MRSP(
          &outC->_L512_IfBlock1,
          &outC->_4_Context_1.new_profile_out);
        kcg_copy_SSP_cat_t_TA_MRSP(&SSP9, &outC->_L512_IfBlock1);
        _4_updated = _10_updated;
        kcg_copy_SSP_cat_t_TA_MRSP(&SSP3, &SSP9);
      }
      else {
        outC->else_clock_IfBlock1 = outC->both_new_curLRBG == kcg_true;
        if (outC->else_clock_IfBlock1) {
          outC->_L617_IfBlock1 = kcg_true;
          _14_updated = outC->_L617_IfBlock1;
          kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
            &outC->_L419_IfBlock1,
            train_position);
          outC->_L320_IfBlock1 = train_length;
          kcg_copy_P027V1_OBU_T_TM_baseline2(
            &outC->_L221_IfBlock1,
            &outC->P27V1_local);
          kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L122_IfBlock1, &last_SSP);
          /* 1 */
          Update_LRBG_then_SSP_TA_SSP(
            &outC->_L122_IfBlock1,
            &outC->_L221_IfBlock1,
            outC->_L320_IfBlock1,
            &outC->_L419_IfBlock1,
            &outC->_5_Context_1);
          kcg_copy_SSP_cat_t_TA_MRSP(
            &outC->_L518_IfBlock1,
            &outC->_5_Context_1.new_profile_out);
          kcg_copy_SSP_cat_t_TA_MRSP(&SSP13, &outC->_L518_IfBlock1);
          _8_updated = _14_updated;
          kcg_copy_SSP_cat_t_TA_MRSP(&SSP7, &SSP13);
        }
        else {
          outC->_L323_IfBlock1 = kcg_false;
          _12_updated = outC->_L323_IfBlock1;
          kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L124_IfBlock1, &last_SSP);
          kcg_copy_SSP_cat_t_TA_MRSP(&SSP11, &outC->_L124_IfBlock1);
          _8_updated = _12_updated;
          kcg_copy_SSP_cat_t_TA_MRSP(&SSP7, &SSP11);
        }
        _4_updated = _8_updated;
        kcg_copy_SSP_cat_t_TA_MRSP(&SSP3, &SSP7);
      }
      updated = _4_updated;
      kcg_copy_SSP_cat_t_TA_MRSP(&SSP, &SSP3);
    }
    kcg_copy_SSP_cat_t_TA_MRSP(&outC->SSP, &SSP);
    outC->updated = updated;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_SSP_TA_SpeedProfiles.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

