/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:09:24
*************************************************************$ */
#ifndef _MRSP_to_MRSP_to_DMI_TA_Export_H_
#define _MRSP_to_MRSP_to_DMI_TA_Export_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int /* TA_Export::MRSP_to_MRSP_to_DMI::i */ i;
  MRSP_section_t_TrackAtlasTypes /* TA_Export::MRSP_to_MRSP_to_DMI::MRSP_in */ MRSP_in;
} inC_MRSP_to_MRSP_to_DMI_TA_Export;

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
  kcg_bool /* TA_Export::MRSP_to_MRSP_to_DMI::_L432 */ _L432;
  kcg_bool /* TA_Export::MRSP_to_MRSP_to_DMI::_L433 */ _L433;
  MRSP_section_t_TrackAtlasTypes /* TA_Export::MRSP_to_MRSP_to_DMI::_L434 */ _L434;
  MRSP_section_t_TrackAtlasTypes /* TA_Export::MRSP_to_MRSP_to_DMI::_L435 */ _L435;
  kcg_int /* TA_Export::MRSP_to_MRSP_to_DMI::_L444 */ _L444;
} outC_MRSP_to_MRSP_to_DMI_TA_Export;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Export::MRSP_to_MRSP_to_DMI */
extern void MRSP_to_MRSP_to_DMI_TA_Export(
  inC_MRSP_to_MRSP_to_DMI_TA_Export *inC,
  outC_MRSP_to_MRSP_to_DMI_TA_Export *outC);

extern void MRSP_to_MRSP_to_DMI_reset_TA_Export(
  outC_MRSP_to_MRSP_to_DMI_TA_Export *outC);

#endif /* _MRSP_to_MRSP_to_DMI_TA_Export_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_to_MRSP_to_DMI_TA_Export.h
** Generation date: 2015-09-04T14:09:24
*************************************************************$ */

