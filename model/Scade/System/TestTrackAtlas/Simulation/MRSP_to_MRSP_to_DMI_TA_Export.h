/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _MRSP_to_MRSP_to_DMI_TA_Export_H_
#define _MRSP_to_MRSP_to_DMI_TA_Export_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Export::MRSP_to_MRSP_to_DMI::cont */ cont;
  MRSP_section_t_TrackAtlasTypes /* TA_Export::MRSP_to_MRSP_to_DMI::MRSP_to_DMI */ MRSP_to_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MRSP_section_t_TrackAtlasTypes /* TA_Export::MRSP_to_MRSP_to_DMI::_L5 */ _L5;
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_Export::MRSP_to_MRSP_to_DMI::_L420 */ _L420;
  kcg_int /* TA_Export::MRSP_to_MRSP_to_DMI::_L429 */ _L429;
  kcg_bool /* TA_Export::MRSP_to_MRSP_to_DMI::_L430 */ _L430;
  kcg_bool /* TA_Export::MRSP_to_MRSP_to_DMI::_L431 */ _L431;
  kcg_int /* TA_Export::MRSP_to_MRSP_to_DMI::_L444 */ _L444;
  kcg_int /* TA_Export::MRSP_to_MRSP_to_DMI::_L446 */ _L446;
  kcg_int /* TA_Export::MRSP_to_MRSP_to_DMI::_L447 */ _L447;
  MRSP_section_t_TrackAtlasTypes /* TA_Export::MRSP_to_MRSP_to_DMI::_L448 */ _L448;
} outC_MRSP_to_MRSP_to_DMI_TA_Export;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Export::MRSP_to_MRSP_to_DMI */
extern void MRSP_to_MRSP_to_DMI_TA_Export(
  /* TA_Export::MRSP_to_MRSP_to_DMI::i */kcg_int i,
  /* TA_Export::MRSP_to_MRSP_to_DMI::MRSP_in */MRSP_section_t_TrackAtlasTypes *MRSP_in,
  outC_MRSP_to_MRSP_to_DMI_TA_Export *outC);

extern void MRSP_to_MRSP_to_DMI_reset_TA_Export(
  outC_MRSP_to_MRSP_to_DMI_TA_Export *outC);

#endif /* _MRSP_to_MRSP_to_DMI_TA_Export_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_to_MRSP_to_DMI_TA_Export.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

