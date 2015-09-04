/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _SSP_to_MRSP_TA_Export_H_
#define _SSP_to_MRSP_TA_Export_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Export::SSP_to_MRSP::cont */ cont;
  MRSP_Profile_t_TrackAtlasTypes /* TA_Export::SSP_to_MRSP::MRSP */ MRSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Export::SSP_to_MRSP::_L1 */ _L1;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_Export::SSP_to_MRSP::_L3 */ _L3;
  MRSP_Profile_t_TrackAtlasTypes /* TA_Export::SSP_to_MRSP::_L4 */ _L4;
  MRSP_Profile_t_TrackAtlasTypes /* TA_Export::SSP_to_MRSP::_L5 */ _L5;
  StaticSpeedSection_t_TrackAtlasTypes /* TA_Export::SSP_to_MRSP::_L7 */ _L7;
  kcg_int /* TA_Export::SSP_to_MRSP::_L8 */ _L8;
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_Export::SSP_to_MRSP::_L18 */ _L18;
  kcg_bool /* TA_Export::SSP_to_MRSP::_L17 */ _L17;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Export::SSP_to_MRSP::_L16 */ _L16;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Export::SSP_to_MRSP::_L15 */ _L15;
  kcg_bool /* TA_Export::SSP_to_MRSP::_L14 */ _L14;
  MRSP_section_t_TrackAtlasTypes /* TA_Export::SSP_to_MRSP::_L19 */ _L19;
} outC_SSP_to_MRSP_TA_Export;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Export::SSP_to_MRSP */
extern void SSP_to_MRSP_TA_Export(
  /* TA_Export::SSP_to_MRSP::i */kcg_int i,
  /* TA_Export::SSP_to_MRSP::MRSP_init */MRSP_Profile_t_TrackAtlasTypes *MRSP_init,
  /* TA_Export::SSP_to_MRSP::SSP */StaticSpeedProfile_t_TrackAtlasTypes *SSP,
  outC_SSP_to_MRSP_TA_Export *outC);

extern void SSP_to_MRSP_reset_TA_Export(outC_SSP_to_MRSP_TA_Export *outC);

#endif /* _SSP_to_MRSP_TA_Export_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_to_MRSP_TA_Export.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

