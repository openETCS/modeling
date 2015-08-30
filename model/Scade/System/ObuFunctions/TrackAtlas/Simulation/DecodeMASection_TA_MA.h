/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _DecodeMASection_TA_MA_H_
#define _DecodeMASection_TA_MA_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MovementAuthoritySection_t_TrackAtlasTypes /* TA_MA::DecodeMASection::MA_section_out */ MA_section_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P015_OBU_sectionlist_enum_T_TM /* TA_MA::DecodeMASection::_L1 */ _L1;
  MovementAuthoritySection_t_TrackAtlasTypes /* TA_MA::DecodeMASection::_L2 */ _L2;
} outC_DecodeMASection_TA_MA;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA::DecodeMASection */
extern void DecodeMASection_TA_MA(
  /* TA_MA::DecodeMASection::P015_section_in */P015_OBU_sectionlist_enum_T_TM *P015_section_in,
  outC_DecodeMASection_TA_MA *outC);

extern void DecodeMASection_reset_TA_MA(outC_DecodeMASection_TA_MA *outC);

#endif /* _DecodeMASection_TA_MA_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DecodeMASection_TA_MA.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

