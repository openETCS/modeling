/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */
#ifndef _Build_GradientProfile_TA_Gradient_H_
#define _Build_GradientProfile_TA_Gradient_H_

#include "kcg_types.h"
#include "Update_LRBG_then_GP_TA_Gradient.h"
#include "Update_GP_then_LRBG_TA_Gradient.h"
#include "Update_GP_only_TA_Gradient.h"
#include "Update_LRBG_only_TA_Gradient.h"
#include "Read_P021_TM.h"
#include "Eval_LRBG_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfile::GP */ GP;
  kcg_bool /* TA_Gradient::Build_GradientProfile::updated */ updated;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_BG /* TA_Gradient::Build_GradientProfile::_L111 */ _L111;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Update_LRBG_then_GP_TA_Gradient /* 1 */ _5_Context_1;
  outC_Update_GP_then_LRBG_TA_Gradient /* 1 */ _4_Context_1;
  outC_Update_GP_only_TA_Gradient /* 1 */ _3_Context_1;
  outC_Update_LRBG_only_TA_Gradient /* 1 */ _2_Context_1;
  outC_Eval_LRBG_TA_Lib_internal /* 1 */ _1_Context_1;
  outC_Read_P021_TM /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TA_Gradient::Build_GradientProfile::IfBlock1::else */ _7_else_clock_IfBlock1;
  kcg_bool /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else::else */ else_clock_IfBlock1;
  kcg_bool /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else */ _6_else_clock_IfBlock1;
  kcg_bool /* TA_Gradient::Build_GradientProfile::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TA_Gradient::Build_GradientProfile::IfBlock1::then::_L4 */ _L4_IfBlock1;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfile::IfBlock1::then::_L3 */ _L3_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* TA_Gradient::Build_GradientProfile::IfBlock1::then::_L2 */ _L2_IfBlock1;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfile::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else::then::_L6 */ _L6_IfBlock1;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else::then::_L5 */ _L511_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else::then::_L4 */ _L412_IfBlock1;
  P021_OBU_T_TM /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else::then::_L2 */ _L213_IfBlock1;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else::then::_L1 */ _L114_IfBlock1;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else::else::else::_L1 */ _L121_IfBlock1;
  kcg_bool /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else::else::else::_L3 */ _L320_IfBlock1;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else::else::then::_L1 */ _L119_IfBlock1;
  P021_OBU_T_TM /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else::else::then::_L2 */ _L218_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else::else::then::_L4 */ _L417_IfBlock1;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else::else::then::_L5 */ _L516_IfBlock1;
  kcg_bool /* TA_Gradient::Build_GradientProfile::IfBlock1::else::else::else::then::_L6 */ _L615_IfBlock1;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfile::IfBlock1::else::then::_L1 */ _L110_IfBlock1;
  P021_OBU_T_TM /* TA_Gradient::Build_GradientProfile::IfBlock1::else::then::_L2 */ _L29_IfBlock1;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfile::IfBlock1::else::then::_L4 */ _L48_IfBlock1;
  kcg_bool /* TA_Gradient::Build_GradientProfile::IfBlock1::else::then::_L5 */ _L5_IfBlock1;
  kcg_bool /* TA_Gradient::Build_GradientProfile::new_SSP */ new_SSP;
  kcg_bool /* TA_Gradient::Build_GradientProfile::new_LRBG */ new_LRBG;
  kcg_bool /* TA_Gradient::Build_GradientProfile::msg_LRBG */ msg_LRBG;
  kcg_bool /* TA_Gradient::Build_GradientProfile::msg_prvLRBG */ msg_prvLRBG;
  kcg_bool /* TA_Gradient::Build_GradientProfile::newSSP_only */ newSSP_only;
  kcg_bool /* TA_Gradient::Build_GradientProfile::newLRBG_only */ newLRBG_only;
  kcg_bool /* TA_Gradient::Build_GradientProfile::both_new_prvLRBG */ both_new_prvLRBG;
  kcg_bool /* TA_Gradient::Build_GradientProfile::both_new_curLRBG */ both_new_curLRBG;
  P021_OBU_T_TM /* TA_Gradient::Build_GradientProfile::P21_local */ P21_local;
  ReceivedMessage_T_Common_Types_Pkg /* TA_Gradient::Build_GradientProfile::_L1 */ _L1;
  trainPosition_T_TrainPosition_Types_Pck /* TA_Gradient::Build_GradientProfile::_L42 */ _L42;
  P021_OBU_T_TM /* TA_Gradient::Build_GradientProfile::_L60 */ _L60;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L59 */ _L59;
  CompressedPackets_T_Common_Types_Pkg /* TA_Gradient::Build_GradientProfile::_L73 */ _L73;
  NID_BG /* TA_Gradient::Build_GradientProfile::_L103 */ _L103;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L104 */ _L104;
  ReceivedMessage_T_Common_Types_Pkg /* TA_Gradient::Build_GradientProfile::_L107 */ _L107;
  kcg_int /* TA_Gradient::Build_GradientProfile::_L108 */ _L108;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L109 */ _L109;
  NID_BG /* TA_Gradient::Build_GradientProfile::_L112 */ _L112;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L113 */ _L113;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L116 */ _L116;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L117 */ _L117;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L118 */ _L118;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L119 */ _L119;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L124 */ _L124;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L125 */ _L125;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L128 */ _L128;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L127 */ _L127;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L129 */ _L129;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L130 */ _L130;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L133 */ _L133;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L132 */ _L132;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L134 */ _L134;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L135 */ _L135;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L136 */ _L136;
} outC_Build_GradientProfile_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Build_GradientProfile */
extern void Build_GradientProfile_TA_Gradient(
  /* TA_Gradient::Build_GradientProfile::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Gradient::Build_GradientProfile::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_Build_GradientProfile_TA_Gradient *outC);

extern void Build_GradientProfile_reset_TA_Gradient(
  outC_Build_GradientProfile_TA_Gradient *outC);

#endif /* _Build_GradientProfile_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_GradientProfile_TA_Gradient.h
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

