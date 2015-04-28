/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/BaliseLib/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-23T17:13:00
*************************************************************$ */
#ifndef _TOOLS_convert_engineering_H_
#define _TOOLS_convert_engineering_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* TOOLS_convert_engineering_location::Loc_real */ Loc_real;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TOOLS_convert_engineering_location::_L1 */ _L1;
  kcg_real /* TOOLS_convert_engineering_location::_L2 */ _L2;
  kcg_real /* TOOLS_convert_engineering_location::_L3 */ _L3;
  kcg_real /* TOOLS_convert_engineering_location::_L4 */ _L4;
} outC_TOOLS_convert_engineering;

/* ===========  node initialization and cycle functions  =========== */
/* TOOLS_convert_engineering_location */
extern void TOOLS_convert_engineering(
  /* TOOLS_convert_engineering_location::Loc_int */kcg_int Loc_int,
  outC_TOOLS_convert_engineering *outC);

extern void TOOLS_convert_engineering_reset(
  outC_TOOLS_convert_engineering *outC);

#endif /* _TOOLS_convert_engineering_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_convert_engineering.h
** Generation date: 2015-04-23T17:13:00
*************************************************************$ */

