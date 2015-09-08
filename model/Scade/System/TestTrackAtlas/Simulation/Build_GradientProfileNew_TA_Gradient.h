/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-01T22:21:01
*************************************************************$ */
#ifndef _Build_GradientProfileNew_TA_Gradient_H_
#define _Build_GradientProfileNew_TA_Gradient_H_

#include "kcg_types.h"
#include "Convert_P21_to_DistanceProfile_TA_Gradient.h"
#include "Position_GP_with_LRBG_TA_Gradient.h"
#include "Read_P021_TM.h"
#include "Eval_LRBG_TA_Lib_internal.h"
#include "MoveGPSectionsAbsolute_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfileNew::GP */ GP;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::updated */ updated;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* TA_Gradient::Build_GradientProfileNew::_L108 */ _L108;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfileNew::_L206 */ _L206;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Position_GP_with_LRBG_TA_Gradient /* 1 */ _2_Context_1;
  outC_MoveGPSectionsAbsolute_TA_Lib_internal /* 3 */ Context_3;
  outC_Convert_P21_to_DistanceProfile_TA_Gradient /* 2 */ Context_2;
  outC_Read_P021_TM /* 1 */ _1_Context_1;
  outC_Eval_LRBG_TA_Lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::new_GP */ new_GP;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::new_LRBG */ new_LRBG;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::msg_LRBG */ msg_LRBG;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::msg_prvLRBG */ msg_prvLRBG;
  P021_OBU_T_TM /* TA_Gradient::Build_GradientProfileNew::P21_local */ P21_local;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::other_LRBG */ other_LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Build_GradientProfileNew::pos_LRBG */ pos_LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Build_GradientProfileNew::pos_prvLRBG */ pos_prvLRBG;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::there_is_prvLRBG */ there_is_prvLRBG;
  ReceivedMessage_T_Common_Types_Pkg /* TA_Gradient::Build_GradientProfileNew::_L1 */ _L1;
  trainPosition_T_TrainPosition_Types_Pck /* TA_Gradient::Build_GradientProfileNew::_L42 */ _L42;
  P021_OBU_T_TM /* TA_Gradient::Build_GradientProfileNew::_L60 */ _L60;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::_L59 */ _L59;
  CompressedPackets_T_Common_Types_Pkg /* TA_Gradient::Build_GradientProfileNew::_L73 */ _L73;
  kcg_int /* TA_Gradient::Build_GradientProfileNew::_L103 */ _L103;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::_L104 */ _L104;
  ReceivedMessage_T_Common_Types_Pkg /* TA_Gradient::Build_GradientProfileNew::_L107 */ _L107;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::_L109 */ _L109;
  NID_BG /* TA_Gradient::Build_GradientProfileNew::_L111 */ _L111;
  NID_BG /* TA_Gradient::Build_GradientProfileNew::_L112 */ _L112;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::_L113 */ _L113;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::_L180 */ _L180;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::_L181 */ _L181;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfileNew::_L185 */ _L185;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfileNew::_L186 */ _L186;
  P021_OBU_T_TM /* TA_Gradient::Build_GradientProfileNew::_L187 */ _L187;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::_L190 */ _L190;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::_L191 */ _L191;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::_L192 */ _L192;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Build_GradientProfileNew::_L193 */ _L193;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Build_GradientProfileNew::_L194 */ _L194;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Build_GradientProfileNew::_L197 */ _L197;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Build_GradientProfileNew::_L198 */ _L198;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::_L199 */ _L199;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::_L200 */ _L200;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::_L201 */ _L201;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::_L202 */ _L202;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Build_GradientProfileNew::_L204 */ _L204;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Build_GradientProfileNew::_L205 */ _L205;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfileNew::_L207 */ _L207;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfileNew::_L208 */ _L208;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::_L209 */ _L209;
  kcg_bool /* TA_Gradient::Build_GradientProfileNew::_L211 */ _L211;
} outC_Build_GradientProfileNew_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Build_GradientProfileNew */
extern void Build_GradientProfileNew_TA_Gradient(
  /* TA_Gradient::Build_GradientProfileNew::reset */kcg_bool reset,
  /* TA_Gradient::Build_GradientProfileNew::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Gradient::Build_GradientProfileNew::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_Build_GradientProfileNew_TA_Gradient *outC);

extern void Build_GradientProfileNew_reset_TA_Gradient(
  outC_Build_GradientProfileNew_TA_Gradient *outC);

#endif /* _Build_GradientProfileNew_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_GradientProfileNew_TA_Gradient.h
** Generation date: 2015-09-01T22:21:01
*************************************************************$ */

