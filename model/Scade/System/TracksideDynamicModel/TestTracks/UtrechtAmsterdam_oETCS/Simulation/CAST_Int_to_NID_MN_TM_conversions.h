/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */
#ifndef _CAST_Int_to_NID_MN_TM_conversions_H_
#define _CAST_Int_to_NID_MN_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_MN /* TM_conversions::CAST_Int_to_NID_MN::nid_mn */ nid_mn;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_NID_MN::_L1 */ _L1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_MN::_L5 */ _L5;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_MN::_L4 */ _L4;
  kcg_int /* TM_conversions::CAST_Int_to_NID_MN::_L3 */ _L3;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_MN::_L2 */ _L2;
} outC_CAST_Int_to_NID_MN_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_NID_MN */
extern void CAST_Int_to_NID_MN_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_MN::nid_mn_int */kcg_int nid_mn_int,
  outC_CAST_Int_to_NID_MN_TM_conversions *outC);

extern void CAST_Int_to_NID_MN_reset_TM_conversions(
  outC_CAST_Int_to_NID_MN_TM_conversions *outC);

#endif /* _CAST_Int_to_NID_MN_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_NID_MN_TM_conversions.h
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */

