/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _WA_Speed_NTC_TrackAtlas_H_
#define _WA_Speed_NTC_TrackAtlas_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TrackAtlas::WA_Speed_NTC::to_Supervision */ to_Supervision;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TrackAtlas::WA_Speed_NTC::_L2 */ _L2;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::WA_Speed_NTC::_L17 */ _L17;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::WA_Speed_NTC::_L18 */ _L18;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TrackAtlas::WA_Speed_NTC::_L20 */ _L20;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TrackAtlas::WA_Speed_NTC::_L21 */ _L21;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::WA_Speed_NTC::_L36 */ _L36;
  kcg_bool /* TrackAtlas::WA_Speed_NTC::_L37 */ _L37;
} outC_WA_Speed_NTC_TrackAtlas;

/* ===========  node initialization and cycle functions  =========== */
/* TrackAtlas::WA_Speed_NTC */
extern void WA_Speed_NTC_TrackAtlas(
  /* TrackAtlas::WA_Speed_NTC::SSP_available */kcg_bool SSP_available,
  /* TrackAtlas::WA_Speed_NTC::to_supervision_data */DataForSupervision_nextGen_t_TrackAtlasTypes *to_supervision_data,
  outC_WA_Speed_NTC_TrackAtlas *outC);

extern void WA_Speed_NTC_reset_TrackAtlas(outC_WA_Speed_NTC_TrackAtlas *outC);

#endif /* _WA_Speed_NTC_TrackAtlas_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** WA_Speed_NTC_TrackAtlas.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

