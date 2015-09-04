/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */
#ifndef _SSP_Postprocessing_TA_SSP_H_
#define _SSP_Postprocessing_TA_SSP_H_

#include "kcg_types.h"
#include "SSP_Position_SSP_with_BGs_TA_SSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_SSP::SSP_Postprocessing::available */ available;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Postprocessing::SSP */ SSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Postprocessing::_L4 */ _L4;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Position_SSP_with_BGs_TA_SSP /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Postprocessing::_L7 */ _L7;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Postprocessing::_L6 */ _L6;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Postprocessing::_L2 */ _L2;
  kcg_bool /* TA_SSP::SSP_Postprocessing::_L3 */ _L3;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Postprocessing::_L1 */ _L1;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Postprocessing::_L8 */ _L8;
  kcg_bool /* TA_SSP::SSP_Postprocessing::_L9 */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Postprocessing::_L10 */ _L10;
} outC_SSP_Postprocessing_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::SSP_Postprocessing */
extern void SSP_Postprocessing_TA_SSP(
  /* TA_SSP::SSP_Postprocessing::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP::SSP_Postprocessing::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_SSP::SSP_Postprocessing::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_SSP::SSP_Postprocessing::there_is_prvLRBG */kcg_bool there_is_prvLRBG,
  /* TA_SSP::SSP_Postprocessing::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_SSP_Postprocessing_TA_SSP *outC);

extern void SSP_Postprocessing_reset_TA_SSP(
  outC_SSP_Postprocessing_TA_SSP *outC);

#endif /* _SSP_Postprocessing_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Postprocessing_TA_SSP.h
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

