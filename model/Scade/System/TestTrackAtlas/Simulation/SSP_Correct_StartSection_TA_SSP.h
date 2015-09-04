/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _SSP_Correct_StartSection_TA_SSP_H_
#define _SSP_Correct_StartSection_TA_SSP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Correct_StartSection::Profile_out */ Profile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Correct_StartSection::_L1 */ _L1;
  StaticSpeedSection_t_TrackAtlasTypes /* TA_SSP::SSP_Correct_StartSection::_L3 */ _L3;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Correct_StartSection::_L5 */ _L5;
  StaticSpeedSection_t_TrackAtlasTypes /* TA_SSP::SSP_Correct_StartSection::_L7 */ _L7;
  kcg_int /* TA_SSP::SSP_Correct_StartSection::_L8 */ _L8;
} outC_SSP_Correct_StartSection_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::SSP_Correct_StartSection */
extern void SSP_Correct_StartSection_TA_SSP(
  /* TA_SSP::SSP_Correct_StartSection::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  outC_SSP_Correct_StartSection_TA_SSP *outC);

extern void SSP_Correct_StartSection_reset_TA_SSP(
  outC_SSP_Correct_StartSection_TA_SSP *outC);

#endif /* _SSP_Correct_StartSection_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Correct_StartSection_TA_SSP.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

