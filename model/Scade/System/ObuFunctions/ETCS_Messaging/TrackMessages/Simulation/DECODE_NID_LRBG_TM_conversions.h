/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-06T10:52:03
*************************************************************$ */
#ifndef _DECODE_NID_LRBG_TM_conversions_H_
#define _DECODE_NID_LRBG_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_NID_C_TM_conversions.h"
#include "CAST_Int_to_NID_BG_TM_conversions.h"

/* ========================  input structure  ====================== */
typedef struct {
  NID_LRBG /* TM_conversions::DECODE_NID_LRBG::nid_lrbg */ nid_lrbg;
} inC_DECODE_NID_LRBG_TM_conversions;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_C /* TM_conversions::DECODE_NID_LRBG::nid_c */ nid_c;
  NID_BG /* TM_conversions::DECODE_NID_LRBG::nid_bg */ nid_bg;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NID_C_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_Int_to_NID_BG_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_LRBG /* TM_conversions::DECODE_NID_LRBG::_L1 */ _L1;
  NID_C /* TM_conversions::DECODE_NID_LRBG::_L2 */ _L2;
  NID_BG /* TM_conversions::DECODE_NID_LRBG::_L3 */ _L3;
  kcg_int /* TM_conversions::DECODE_NID_LRBG::_L4 */ _L4;
  kcg_int /* TM_conversions::DECODE_NID_LRBG::_L5 */ _L5;
  kcg_int /* TM_conversions::DECODE_NID_LRBG::_L7 */ _L7;
  NID_LRBG /* TM_conversions::DECODE_NID_LRBG::_L6 */ _L6;
} outC_DECODE_NID_LRBG_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::DECODE_NID_LRBG */
extern void DECODE_NID_LRBG_TM_conversions(
  inC_DECODE_NID_LRBG_TM_conversions *inC,
  outC_DECODE_NID_LRBG_TM_conversions *outC);

extern void DECODE_NID_LRBG_reset_TM_conversions(
  outC_DECODE_NID_LRBG_TM_conversions *outC);

#endif /* _DECODE_NID_LRBG_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DECODE_NID_LRBG_TM_conversions.h
** Generation date: 2015-08-06T10:52:03
*************************************************************$ */

