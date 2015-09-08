/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */
#ifndef _Build_StaticSpeedProfile_TA_SSP_H_
#define _Build_StaticSpeedProfile_TA_SSP_H_

#include "kcg_types.h"
#include "SSP_Preprocessing_TA_SSP.h"
#include "SSP_Postprocessing_TA_SSP.h"
#include "Read_P027V1_TM_baseline2.h"
#include "Eval_LRBG_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::Build_StaticSpeedProfile::SSP */ SSP;
  kcg_bool /* TA_SSP::Build_StaticSpeedProfile::updated */ updated;
  kcg_bool /* TA_SSP::Build_StaticSpeedProfile::available */ available;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_BG /* TA_SSP::Build_StaticSpeedProfile::_L111 */ _L111;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::Build_StaticSpeedProfile::_L237 */ _L237;
  kcg_bool /* TA_SSP::Build_StaticSpeedProfile::_L241 */ _L241;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::Build_StaticSpeedProfile::_L242 */ _L242;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Postprocessing_TA_SSP /* 1 */ _3_Context_1;
  outC_SSP_Preprocessing_TA_SSP /* 1 */ _2_Context_1;
  outC_Eval_LRBG_TA_Lib_internal /* 1 */ _1_Context_1;
  outC_Read_P027V1_TM_baseline2 /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  kcg_bool tmp4;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* TA_SSP::Build_StaticSpeedProfile::_L1 */ _L1;
  trainPosition_T_TrainPosition_Types_Pck /* TA_SSP::Build_StaticSpeedProfile::_L42 */ _L42;
  P027V1_OBU_T_TM_baseline2 /* TA_SSP::Build_StaticSpeedProfile::_L60 */ _L60;
  kcg_bool /* TA_SSP::Build_StaticSpeedProfile::_L59 */ _L59;
  CompressedPackets_T_Common_Types_Pkg /* TA_SSP::Build_StaticSpeedProfile::_L73 */ _L73;
  ReceivedMessage_T_Common_Types_Pkg /* TA_SSP::Build_StaticSpeedProfile::_L107 */ _L107;
  kcg_int /* TA_SSP::Build_StaticSpeedProfile::_L108 */ _L108;
  kcg_bool /* TA_SSP::Build_StaticSpeedProfile::_L109 */ _L109;
  NID_BG /* TA_SSP::Build_StaticSpeedProfile::_L112 */ _L112;
  kcg_bool /* TA_SSP::Build_StaticSpeedProfile::_L113 */ _L113;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Build_StaticSpeedProfile::_L193 */ _L193;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Build_StaticSpeedProfile::_L194 */ _L194;
  kcg_bool /* TA_SSP::Build_StaticSpeedProfile::_L202 */ _L202;
  kcg_bool /* TA_SSP::Build_StaticSpeedProfile::_L209 */ _L209;
  NID_BG /* TA_SSP::Build_StaticSpeedProfile::_L238 */ _L238;
  kcg_bool /* TA_SSP::Build_StaticSpeedProfile::_L239 */ _L239;
  kcg_bool /* TA_SSP::Build_StaticSpeedProfile::_L240 */ _L240;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::Build_StaticSpeedProfile::_L243 */ _L243;
} outC_Build_StaticSpeedProfile_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::Build_StaticSpeedProfile */
extern void Build_StaticSpeedProfile_TA_SSP(
  /* TA_SSP::Build_StaticSpeedProfile::reset */kcg_bool reset,
  /* TA_SSP::Build_StaticSpeedProfile::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SSP::Build_StaticSpeedProfile::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* TA_SSP::Build_StaticSpeedProfile::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_Build_StaticSpeedProfile_TA_SSP *outC);

extern void Build_StaticSpeedProfile_reset_TA_SSP(
  outC_Build_StaticSpeedProfile_TA_SSP *outC);

#endif /* _Build_StaticSpeedProfile_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_StaticSpeedProfile_TA_SSP.h
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

