/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */
#ifndef _TOOLS_convert_engineering_TM_conversions_H_
#define _TOOLS_convert_engineering_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* TM_conversions::TOOLS_convert_engineering_location::Loc_real */ Loc_real;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::TOOLS_convert_engineering_location::_L1 */ _L1;
  kcg_real /* TM_conversions::TOOLS_convert_engineering_location::_L2 */ _L2;
  kcg_real /* TM_conversions::TOOLS_convert_engineering_location::_L3 */ _L3;
  kcg_real /* TM_conversions::TOOLS_convert_engineering_location::_L4 */ _L4;
} outC_TOOLS_convert_engineering_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::TOOLS_convert_engineering_location */
extern void TOOLS_convert_engineering_TM_conversions(
  /* TM_conversions::TOOLS_convert_engineering_location::Loc_int */kcg_int Loc_int,
  outC_TOOLS_convert_engineering_TM_conversions *outC);

extern void TOOLS_convert_engineering_reset_TM_conversions(
  outC_TOOLS_convert_engineering_TM_conversions *outC);

#endif /* _TOOLS_convert_engineering_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_convert_engineering_TM_conversions.h
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

