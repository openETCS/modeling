/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_GradientProfile_TA_Gradient.h"

void Build_GradientProfile_reset_TA_Gradient(
  outC_Build_GradientProfile_TA_Gradient *outC)
{
  outC->init = kcg_true;
  /* 1 */ Update_LRBG_then_GP_reset_TA_Gradient(&outC->_5_Context_1);
  /* 1 */ Update_GP_then_LRBG_reset_TA_Gradient(&outC->_4_Context_1);
  /* 1 */ Update_GP_only_reset_TA_Gradient(&outC->_3_Context_1);
  /* 1 */ Update_LRBG_only_reset_TA_Gradient(&outC->_2_Context_1);
  /* 1 */ Eval_LRBG_reset_TA_Lib_internal(&outC->_1_Context_1);
  /* 1 */ Read_P021_reset_TM(&outC->Context_1);
}

/* TA_Gradient::Build_GradientProfile */
void Build_GradientProfile_TA_Gradient(
  /* TA_Gradient::Build_GradientProfile::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Gradient::Build_GradientProfile::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_Build_GradientProfile_TA_Gradient *outC)
{
  /* TA_Gradient::Build_GradientProfile::GP */ GradientProfile_t_TrackAtlasTypes GP2;
  /* TA_Gradient::Build_GradientProfile::updated */ kcg_bool _1_updated;
  /* TA_Gradient::Build_GradientProfile::GP */ GradientProfile_t_TrackAtlasTypes GP;
  /* TA_Gradient::Build_GradientProfile::updated */ kcg_bool updated;
  /* TA_Gradient::Build_GradientProfile::updated */ kcg_bool _10_updated;
  /* TA_Gradient::Build_GradientProfile::GP */ GradientProfile_t_TrackAtlasTypes GP9;
  /* TA_Gradient::Build_GradientProfile::updated */ kcg_bool _8_updated;
  /* TA_Gradient::Build_GradientProfile::GP */ GradientProfile_t_TrackAtlasTypes GP7;
  /* TA_Gradient::Build_GradientProfile::GP */ GradientProfile_t_TrackAtlasTypes GP11;
  /* TA_Gradient::Build_GradientProfile::updated */ kcg_bool _12_updated;
  /* TA_Gradient::Build_GradientProfile::GP */ GradientProfile_t_TrackAtlasTypes GP13;
  /* TA_Gradient::Build_GradientProfile::updated */ kcg_bool _14_updated;
  /* TA_Gradient::Build_GradientProfile::GP */ GradientProfile_t_TrackAtlasTypes GP3;
  /* TA_Gradient::Build_GradientProfile::updated */ kcg_bool _4_updated;
  /* TA_Gradient::Build_GradientProfile::GP */ GradientProfile_t_TrackAtlasTypes GP5;
  /* TA_Gradient::Build_GradientProfile::updated */ kcg_bool _6_updated;
  /* TA_Gradient::Build_GradientProfile::GP */ GradientProfile_t_TrackAtlasTypes last_GP;
  
  if (outC->init) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &last_GP,
      (GradientProfile_t_TrackAtlasTypes *)
        &DEFAULT_GradientProfile_TrackAtlasTypes);
  }
  else {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&last_GP, &outC->GP);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L73,
    &outC->_L1.packets);
  /* 1 */ Read_P021_TM(&outC->_L73, &outC->Context_1);
  outC->_L59 = outC->Context_1.received;
  kcg_copy_P021_OBU_T_TM(&outC->_L60, &outC->Context_1.P021_OBU_out);
  kcg_copy_P021_OBU_T_TM(&outC->P21_local, &outC->_L60);
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
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L1_IfBlock1, &last_GP);
    /* 1 */
    Update_LRBG_only_TA_Gradient(
      &outC->_L1_IfBlock1,
      &outC->_L2_IfBlock1,
      &outC->_2_Context_1);
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->_L3_IfBlock1,
      &outC->_2_Context_1.new_profile_out);
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&GP2, &outC->_L3_IfBlock1);
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->GP, &GP2);
    outC->updated = _1_updated;
  }
  else {
    outC->_7_else_clock_IfBlock1 = outC->newSSP_only == kcg_true;
    if (outC->_7_else_clock_IfBlock1) {
      outC->_L5_IfBlock1 = kcg_true;
      _6_updated = outC->_L5_IfBlock1;
      kcg_copy_P021_OBU_T_TM(&outC->_L29_IfBlock1, &outC->P21_local);
      kcg_copy_GradientProfile_t_TrackAtlasTypes(
        &outC->_L110_IfBlock1,
        &last_GP);
      /* 1 */
      Update_GP_only_TA_Gradient(
        &outC->_L110_IfBlock1,
        &outC->_L29_IfBlock1,
        &outC->_3_Context_1);
      kcg_copy_GradientProfile_t_TrackAtlasTypes(
        &outC->_L48_IfBlock1,
        &outC->_3_Context_1.new_profile_out);
      kcg_copy_GradientProfile_t_TrackAtlasTypes(&GP5, &outC->_L48_IfBlock1);
      updated = _6_updated;
      kcg_copy_GradientProfile_t_TrackAtlasTypes(&GP, &GP5);
    }
    else {
      outC->_6_else_clock_IfBlock1 = outC->both_new_prvLRBG == kcg_true;
      if (outC->_6_else_clock_IfBlock1) {
        outC->_L6_IfBlock1 = kcg_true;
        _10_updated = outC->_L6_IfBlock1;
        kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
          &outC->_L412_IfBlock1,
          train_position);
        kcg_copy_P021_OBU_T_TM(&outC->_L213_IfBlock1, &outC->P21_local);
        kcg_copy_GradientProfile_t_TrackAtlasTypes(
          &outC->_L114_IfBlock1,
          &last_GP);
        /* 1 */
        Update_GP_then_LRBG_TA_Gradient(
          &outC->_L114_IfBlock1,
          &outC->_L213_IfBlock1,
          &outC->_L412_IfBlock1,
          &outC->_4_Context_1);
        kcg_copy_GradientProfile_t_TrackAtlasTypes(
          &outC->_L511_IfBlock1,
          &outC->_4_Context_1.new_profile_out);
        kcg_copy_GradientProfile_t_TrackAtlasTypes(&GP9, &outC->_L511_IfBlock1);
        _4_updated = _10_updated;
        kcg_copy_GradientProfile_t_TrackAtlasTypes(&GP3, &GP9);
      }
      else {
        outC->else_clock_IfBlock1 = outC->both_new_curLRBG == kcg_true;
        if (outC->else_clock_IfBlock1) {
          outC->_L615_IfBlock1 = kcg_true;
          _14_updated = outC->_L615_IfBlock1;
          kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
            &outC->_L417_IfBlock1,
            train_position);
          kcg_copy_P021_OBU_T_TM(&outC->_L218_IfBlock1, &outC->P21_local);
          kcg_copy_GradientProfile_t_TrackAtlasTypes(
            &outC->_L119_IfBlock1,
            &last_GP);
          /* 1 */
          Update_LRBG_then_GP_TA_Gradient(
            &outC->_L119_IfBlock1,
            &outC->_L218_IfBlock1,
            &outC->_L417_IfBlock1,
            &outC->_5_Context_1);
          kcg_copy_GradientProfile_t_TrackAtlasTypes(
            &outC->_L516_IfBlock1,
            &outC->_5_Context_1.new_profile_out);
          kcg_copy_GradientProfile_t_TrackAtlasTypes(
            &GP13,
            &outC->_L516_IfBlock1);
          _8_updated = _14_updated;
          kcg_copy_GradientProfile_t_TrackAtlasTypes(&GP7, &GP13);
        }
        else {
          outC->_L320_IfBlock1 = kcg_false;
          _12_updated = outC->_L320_IfBlock1;
          kcg_copy_GradientProfile_t_TrackAtlasTypes(
            &outC->_L121_IfBlock1,
            &last_GP);
          kcg_copy_GradientProfile_t_TrackAtlasTypes(
            &GP11,
            &outC->_L121_IfBlock1);
          _8_updated = _12_updated;
          kcg_copy_GradientProfile_t_TrackAtlasTypes(&GP7, &GP11);
        }
        _4_updated = _8_updated;
        kcg_copy_GradientProfile_t_TrackAtlasTypes(&GP3, &GP7);
      }
      updated = _4_updated;
      kcg_copy_GradientProfile_t_TrackAtlasTypes(&GP, &GP3);
    }
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->GP, &GP);
    outC->updated = updated;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_GradientProfile_TA_Gradient.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

