/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _DECODE_NID_LRBG_TM_conversions_H_
#define _DECODE_NID_LRBG_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_NID_C_TM_conversions.h"
#include "CAST_Int_to_NID_BG_TM_conversions.h"

/* =====================  no input structure  ====================== */

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
  NID_LRBG /* TM_conversions::DECODE_NID_LRBG::_L8 */ _L8;
  kcg_int /* TM_conversions::DECODE_NID_LRBG::_L9 */ _L9;
  kcg_bool /* TM_conversions::DECODE_NID_LRBG::_L10 */ _L10;
  kcg_int /* TM_conversions::DECODE_NID_LRBG::_L11 */ _L11;
  kcg_int /* TM_conversions::DECODE_NID_LRBG::_L12 */ _L12;
} outC_DECODE_NID_LRBG_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::DECODE_NID_LRBG */
extern void DECODE_NID_LRBG_TM_conversions(
  /* TM_conversions::DECODE_NID_LRBG::nid_lrbg */NID_LRBG nid_lrbg,
  outC_DECODE_NID_LRBG_TM_conversions *outC);

extern void DECODE_NID_LRBG_reset_TM_conversions(
  outC_DECODE_NID_LRBG_TM_conversions *outC);

#endif /* _DECODE_NID_LRBG_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DECODE_NID_LRBG_TM_conversions.h
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

