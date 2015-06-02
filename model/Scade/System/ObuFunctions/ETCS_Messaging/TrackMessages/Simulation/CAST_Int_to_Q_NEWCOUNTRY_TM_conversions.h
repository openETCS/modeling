/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T14:47:37
*************************************************************$ */
#ifndef _CAST_Int_to_Q_NEWCOUNTRY_TM_conversions_H_
#define _CAST_Int_to_Q_NEWCOUNTRY_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_NEWCOUNTRY /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::q_newcountry */ q_newcountry;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::IfBlock1::then::_L5 */ _L5_IfBlock1;
  Q_NEWCOUNTRY /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::IfBlock1::else */ else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::IfBlock1::else::else::_L2 */ _L2_IfBlock1;
  Q_NEWCOUNTRY /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::IfBlock1::else::else::_L1 */ _L1_IfBlock1;
  Q_NEWCOUNTRY /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::IfBlock1::else::then::_L3 */ _L3_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::IfBlock1::else::then::_L5 */ _L51_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::error */ error;
  kcg_int /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::q_newcountry_in */ q_newcountry_in;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::_L13 */ _L13;
  kcg_int /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::_L12 */ _L12;
} outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY */
extern void CAST_Int_to_Q_NEWCOUNTRY_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::q_newcountry_int */kcg_int q_newcountry_int,
  outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions *outC);

extern void CAST_Int_to_Q_NEWCOUNTRY_reset_TM_conversions(
  outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions *outC);

#endif /* _CAST_Int_to_Q_NEWCOUNTRY_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.h
** Generation date: 2015-06-02T14:47:37
*************************************************************$ */

