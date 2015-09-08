/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */
#ifndef _SSP_Normalize_Profile_loop_TA_SSP_H_
#define _SSP_Normalize_Profile_loop_TA_SSP_H_

#include "kcg_types.h"
#include "TrainLength_Correction_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Normalize_Profile_loop::ProfileNormalized_LRBG */ ProfileNormalized_LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TrainLength_Correction_TA_Lib_internal /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_SSP::SSP_Normalize_Profile_loop::_L1 */ _L1;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Normalize_Profile_loop::_L2 */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Normalize_Profile_loop::_L3 */ _L3;
  StaticSpeedSection_t_TrackAtlasTypes /* TA_SSP::SSP_Normalize_Profile_loop::_L4 */ _L4;
  kcg_bool /* TA_SSP::SSP_Normalize_Profile_loop::_L5 */ _L5;
  StaticSpeedSection_t_TrackAtlasTypes /* TA_SSP::SSP_Normalize_Profile_loop::_L7 */ _L7;
  kcg_int /* TA_SSP::SSP_Normalize_Profile_loop::_L9 */ _L9;
  kcg_int /* TA_SSP::SSP_Normalize_Profile_loop::_L10 */ _L10;
  kcg_int /* TA_SSP::SSP_Normalize_Profile_loop::_L11 */ _L11;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Normalize_Profile_loop::_L38 */ _L38;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Normalize_Profile_loop::_L39 */ _L39;
  kcg_int /* TA_SSP::SSP_Normalize_Profile_loop::_L40 */ _L40;
  kcg_bool /* TA_SSP::SSP_Normalize_Profile_loop::_L44 */ _L44;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Normalize_Profile_loop::_L45 */ _L45;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Normalize_Profile_loop::_L46 */ _L46;
  kcg_int /* TA_SSP::SSP_Normalize_Profile_loop::_L47 */ _L47;
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Normalize_Profile_loop::_L48 */ _L48;
} outC_SSP_Normalize_Profile_loop_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::SSP_Normalize_Profile_loop */
extern void SSP_Normalize_Profile_loop_TA_SSP(
  /* TA_SSP::SSP_Normalize_Profile_loop::i */kcg_int i,
  /* TA_SSP::SSP_Normalize_Profile_loop::ProfileIn */StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_SSP::SSP_Normalize_Profile_loop::pos_BG */L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_SSP::SSP_Normalize_Profile_loop::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_SSP_Normalize_Profile_loop_TA_SSP *outC);

extern void SSP_Normalize_Profile_loop_reset_TA_SSP(
  outC_SSP_Normalize_Profile_loop_TA_SSP *outC);

#endif /* _SSP_Normalize_Profile_loop_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Normalize_Profile_loop_TA_SSP.h
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

