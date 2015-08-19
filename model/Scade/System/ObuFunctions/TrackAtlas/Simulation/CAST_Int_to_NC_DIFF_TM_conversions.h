/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _CAST_Int_to_NC_DIFF_TM_conversions_H_
#define _CAST_Int_to_NC_DIFF_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NC_DIFF /* TM_conversions::CAST_Int_to_NC_DIFF::nc_diff */ nc_diff;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_NC_DIFF::_L16 */ _L16;
  kcg_bool /* TM_conversions::CAST_Int_to_NC_DIFF::_L15 */ _L15;
  kcg_int /* TM_conversions::CAST_Int_to_NC_DIFF::_L14 */ _L14;
  kcg_int /* TM_conversions::CAST_Int_to_NC_DIFF::_L13 */ _L13;
  kcg_bool /* TM_conversions::CAST_Int_to_NC_DIFF::_L12 */ _L12;
} outC_CAST_Int_to_NC_DIFF_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_NC_DIFF */
extern void CAST_Int_to_NC_DIFF_TM_conversions(
  /* TM_conversions::CAST_Int_to_NC_DIFF::nc_diff_int */kcg_int nc_diff_int,
  outC_CAST_Int_to_NC_DIFF_TM_conversions *outC);

extern void CAST_Int_to_NC_DIFF_reset_TM_conversions(
  outC_CAST_Int_to_NC_DIFF_TM_conversions *outC);

#endif /* _CAST_Int_to_NC_DIFF_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_NC_DIFF_TM_conversions.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

