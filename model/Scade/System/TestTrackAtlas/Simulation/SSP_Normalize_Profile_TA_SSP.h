/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _SSP_Normalize_Profile_TA_SSP_H_
#define _SSP_Normalize_Profile_TA_SSP_H_

#include "kcg_types.h"
#include "SSP_Normalize_Profile_loop_TA_SSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Normalize_Profile::ProfileNormalized_LRBG */ ProfileNormalized_LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Normalize_Profile_loop_TA_SSP /* 1 */ Context_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Normalize_Profile::_L1 */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_SSP::SSP_Normalize_Profile::_L2 */ _L2;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Normalize_Profile::_L3 */ _L3;
  array_int_50 /* TA_SSP::SSP_Normalize_Profile::_L4 */ _L4;
} outC_SSP_Normalize_Profile_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::SSP_Normalize_Profile */
extern void SSP_Normalize_Profile_TA_SSP(
  /* TA_SSP::SSP_Normalize_Profile::ProfileIn */StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_SSP::SSP_Normalize_Profile::pos_BG */L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  outC_SSP_Normalize_Profile_TA_SSP *outC);

extern void SSP_Normalize_Profile_reset_TA_SSP(
  outC_SSP_Normalize_Profile_TA_SSP *outC);

#endif /* _SSP_Normalize_Profile_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Normalize_Profile_TA_SSP.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

