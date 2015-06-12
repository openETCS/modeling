/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T14:04:51
*************************************************************$ */
#ifndef _CAST_Int_to_M_MCOUNT_TM_conversions_H_
#define _CAST_Int_to_M_MCOUNT_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_MCOUNT /* TM_conversions::CAST_Int_to_M_MCOUNT::m_mcount */ m_mcount;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_M_MCOUNT::_L1 */ _L1;
  kcg_bool /* TM_conversions::CAST_Int_to_M_MCOUNT::_L9 */ _L9;
  kcg_bool /* TM_conversions::CAST_Int_to_M_MCOUNT::_L8 */ _L8;
  kcg_int /* TM_conversions::CAST_Int_to_M_MCOUNT::_L10 */ _L10;
  kcg_int /* TM_conversions::CAST_Int_to_M_MCOUNT::_L11 */ _L11;
} outC_CAST_Int_to_M_MCOUNT_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_M_MCOUNT */
extern void CAST_Int_to_M_MCOUNT_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_MCOUNT::m_mcount_int */kcg_int m_mcount_int,
  outC_CAST_Int_to_M_MCOUNT_TM_conversions *outC);

extern void CAST_Int_to_M_MCOUNT_reset_TM_conversions(
  outC_CAST_Int_to_M_MCOUNT_TM_conversions *outC);

#endif /* _CAST_Int_to_M_MCOUNT_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_MCOUNT_TM_conversions.h
** Generation date: 2015-06-09T14:04:51
*************************************************************$ */

