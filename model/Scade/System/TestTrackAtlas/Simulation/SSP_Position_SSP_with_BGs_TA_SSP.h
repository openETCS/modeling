/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */
#ifndef _SSP_Position_SSP_with_BGs_TA_SSP_H_
#define _SSP_Position_SSP_with_BGs_TA_SSP_H_

#include "kcg_types.h"
#include "SSP_Merge_New_P27V1_to_Profile_TA_SSP.h"
#include "SSP_Normalize_Profile_TA_SSP.h"
#include "SSP_Truncate_at_BG_TA_SSP.h"
#include "SSP_Correct_StartSection_TA_SSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Position_SSP_with_BGs::ProfileOut */ ProfileOut;
  kcg_bool /* TA_SSP::SSP_Position_SSP_with_BGs::available */ available;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Position_SSP_with_BGs::ProfileLoopOut */ ProfileLoopOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Correct_StartSection_TA_SSP /* 1 */ _5_Context_1;
  outC_SSP_Truncate_at_BG_TA_SSP /* 1 */ _4_Context_1;
  outC_SSP_Normalize_Profile_TA_SSP /* 1 */ _3_Context_1;
  outC_SSP_Correct_StartSection_TA_SSP /* 2 */ _2_Context_2;
  outC_SSP_Truncate_at_BG_TA_SSP /* 2 */ _1_Context_2;
  outC_SSP_Normalize_Profile_TA_SSP /* 2 */ Context_2;
  outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Position_SSP_with_BGs::_L4 */ _L4;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Position_SSP_with_BGs::_L5 */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Position_SSP_with_BGs::_L8 */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Position_SSP_with_BGs::_L9 */ _L9;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Position_SSP_with_BGs::_L6 */ _L6;
  kcg_bool /* TA_SSP::SSP_Position_SSP_with_BGs::_L15 */ _L15;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Position_SSP_with_BGs::_L16 */ _L16;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Position_SSP_with_BGs::_L18 */ _L18;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Position_SSP_with_BGs::_L22 */ _L22;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Position_SSP_with_BGs::_L23 */ _L23;
  kcg_bool /* TA_SSP::SSP_Position_SSP_with_BGs::_L28 */ _L28;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Position_SSP_with_BGs::_L29 */ _L29;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Position_SSP_with_BGs::_L30 */ _L30;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Position_SSP_with_BGs::_L33 */ _L33;
} outC_SSP_Position_SSP_with_BGs_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::SSP_Position_SSP_with_BGs */
extern void SSP_Position_SSP_with_BGs_TA_SSP(
  /* TA_SSP::SSP_Position_SSP_with_BGs::ProfileIn */StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_SSP::SSP_Position_SSP_with_BGs::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_SSP::SSP_Position_SSP_with_BGs::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_SSP::SSP_Position_SSP_with_BGs::there_is_prvLRBG */kcg_bool there_is_prvLRBG,
  /* TA_SSP::SSP_Position_SSP_with_BGs::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_SSP::SSP_Position_SSP_with_BGs::LastProfile */StaticSpeedProfile_t_TrackAtlasTypes *LastProfile,
  outC_SSP_Position_SSP_with_BGs_TA_SSP *outC);

extern void SSP_Position_SSP_with_BGs_reset_TA_SSP(
  outC_SSP_Position_SSP_with_BGs_TA_SSP *outC);

#endif /* _SSP_Position_SSP_with_BGs_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Position_SSP_with_BGs_TA_SSP.h
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

