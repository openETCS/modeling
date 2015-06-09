/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T11:10:49
*************************************************************$ */
#ifndef _CASTLIB_BaliseHeaders_TM_conversions_H_
#define _CASTLIB_BaliseHeaders_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_Q_UPDOWN_TM_conversions.h"
#include "CAST_Int_to_M_VERSION_TM_conversions.h"
#include "CAST_Int_to_Q_MEDIA_TM_conversions.h"
#include "CAST_Int_to_N_PIG_TM_conversions.h"
#include "CAST_Int_to_N_TOTAL_TM_conversions.h"
#include "CAST_Int_to_M_DUP_TM_conversions.h"
#include "CAST_Int_to_M_MCOUNT_TM_conversions.h"
#include "CAST_Int_to_NID_C_TM_conversions.h"
#include "CAST_Int_to_NID_BG_TM_conversions.h"
#include "CAST_Int_to_Q_LINK_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TelegramHeader_T_BG_Types_Pkg /* TM_conversions::CASTLIB_BaliseHeaders::Out */ Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_Q_UPDOWN_TM_conversions /* 1 */ _9_Context_1;
  outC_CAST_Int_to_M_VERSION_TM_conversions /* 1 */ _8_Context_1;
  outC_CAST_Int_to_Q_MEDIA_TM_conversions /* 1 */ _7_Context_1;
  outC_CAST_Int_to_N_PIG_TM_conversions /* 1 */ _6_Context_1;
  outC_CAST_Int_to_N_TOTAL_TM_conversions /* 1 */ _5_Context_1;
  outC_CAST_Int_to_M_DUP_TM_conversions /* 1 */ _4_Context_1;
  outC_CAST_Int_to_M_MCOUNT_TM_conversions /* 1 */ _3_Context_1;
  outC_CAST_Int_to_NID_C_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_Int_to_NID_BG_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_Int_to_Q_LINK_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BaliseTelegramHeader_int_T_TM /* TM_conversions::CASTLIB_BaliseHeaders::_L1 */ _L1;
  kcg_int /* TM_conversions::CASTLIB_BaliseHeaders::_L11 */ _L11;
  kcg_int /* TM_conversions::CASTLIB_BaliseHeaders::_L10 */ _L10;
  kcg_int /* TM_conversions::CASTLIB_BaliseHeaders::_L9 */ _L9;
  kcg_int /* TM_conversions::CASTLIB_BaliseHeaders::_L8 */ _L8;
  kcg_int /* TM_conversions::CASTLIB_BaliseHeaders::_L7 */ _L7;
  kcg_int /* TM_conversions::CASTLIB_BaliseHeaders::_L6 */ _L6;
  kcg_int /* TM_conversions::CASTLIB_BaliseHeaders::_L5 */ _L5;
  kcg_int /* TM_conversions::CASTLIB_BaliseHeaders::_L4 */ _L4;
  kcg_int /* TM_conversions::CASTLIB_BaliseHeaders::_L3 */ _L3;
  kcg_int /* TM_conversions::CASTLIB_BaliseHeaders::_L2 */ _L2;
  TelegramHeader_T_BG_Types_Pkg /* TM_conversions::CASTLIB_BaliseHeaders::_L22 */ _L22;
  Q_UPDOWN /* TM_conversions::CASTLIB_BaliseHeaders::_L23 */ _L23;
  M_VERSION /* TM_conversions::CASTLIB_BaliseHeaders::_L24 */ _L24;
  Q_MEDIA /* TM_conversions::CASTLIB_BaliseHeaders::_L25 */ _L25;
  N_PIG /* TM_conversions::CASTLIB_BaliseHeaders::_L26 */ _L26;
  N_TOTAL /* TM_conversions::CASTLIB_BaliseHeaders::_L27 */ _L27;
  M_DUP /* TM_conversions::CASTLIB_BaliseHeaders::_L28 */ _L28;
  M_MCOUNT /* TM_conversions::CASTLIB_BaliseHeaders::_L29 */ _L29;
  NID_C /* TM_conversions::CASTLIB_BaliseHeaders::_L30 */ _L30;
  NID_BG /* TM_conversions::CASTLIB_BaliseHeaders::_L31 */ _L31;
  Q_LINK /* TM_conversions::CASTLIB_BaliseHeaders::_L32 */ _L32;
} outC_CASTLIB_BaliseHeaders_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CASTLIB_BaliseHeaders */
extern void CASTLIB_BaliseHeaders_TM_conversions(
  /* TM_conversions::CASTLIB_BaliseHeaders::In */BaliseTelegramHeader_int_T_TM *In,
  outC_CASTLIB_BaliseHeaders_TM_conversions *outC);

extern void CASTLIB_BaliseHeaders_reset_TM_conversions(
  outC_CASTLIB_BaliseHeaders_TM_conversions *outC);

#endif /* _CASTLIB_BaliseHeaders_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CASTLIB_BaliseHeaders_TM_conversions.h
** Generation date: 2015-06-09T11:10:49
*************************************************************$ */

