/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */
#ifndef _RECV_ConvertBaliseHeader_CT_TM_conversions_H_
#define _RECV_ConvertBaliseHeader_CT_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_Q_UPDOWN_TM_conversions.h"
#include "CAST_Int_to_M_VERSION_TM_conversions.h"
#include "CAST_Int_to_Q_MEDIA_TM_conversions.h"
#include "CAST_Int_to_N_PIG_TM_conversions.h"
#include "CAST_Int_to_N_TOTAL_TM_conversions.h"
#include "CAST_Int_to_M_DUP_TM_conversions.h"
#include "CAST_Int_to_Q_LINK_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TelegramHeader_T_BG_Types_Pkg /* TM_conversions::RECV_ConvertBaliseHeader_CT::BaliseTelegramHeaderOut */ BaliseTelegramHeaderOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_Q_UPDOWN_TM_conversions /* 1 */ _6_Context_1;
  outC_CAST_Int_to_M_VERSION_TM_conversions /* 1 */ _5_Context_1;
  outC_CAST_Int_to_Q_MEDIA_TM_conversions /* 1 */ _4_Context_1;
  outC_CAST_Int_to_N_PIG_TM_conversions /* 1 */ _3_Context_1;
  outC_CAST_Int_to_N_TOTAL_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_Int_to_M_DUP_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_Int_to_Q_LINK_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BaliseTelegramHeader_int_T_TM /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L1 */ _L1;
  kcg_int /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L11 */ _L11;
  kcg_int /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L10 */ _L10;
  kcg_int /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L9 */ _L9;
  kcg_int /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L8 */ _L8;
  kcg_int /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L7 */ _L7;
  kcg_int /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L6 */ _L6;
  kcg_int /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L5 */ _L5;
  kcg_int /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L4 */ _L4;
  kcg_int /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L3 */ _L3;
  kcg_int /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L2 */ _L2;
  TelegramHeader_T_BG_Types_Pkg /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L42 */ _L42;
  Q_UPDOWN /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L43 */ _L43;
  M_VERSION /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L44 */ _L44;
  Q_MEDIA /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L45 */ _L45;
  N_PIG /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L46 */ _L46;
  N_TOTAL /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L47 */ _L47;
  M_DUP /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L48 */ _L48;
  Q_LINK /* TM_conversions::RECV_ConvertBaliseHeader_CT::_L49 */ _L49;
} outC_RECV_ConvertBaliseHeader_CT_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::RECV_ConvertBaliseHeader_CT */
extern void RECV_ConvertBaliseHeader_CT_TM_conversions(
  /* TM_conversions::RECV_ConvertBaliseHeader_CT::BaliseTelegramHeaderIn */BaliseTelegramHeader_int_T_TM *BaliseTelegramHeaderIn,
  outC_RECV_ConvertBaliseHeader_CT_TM_conversions *outC);

extern void RECV_ConvertBaliseHeader_CT_reset_TM_conversions(
  outC_RECV_ConvertBaliseHeader_CT_TM_conversions *outC);

#endif /* _RECV_ConvertBaliseHeader_CT_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ConvertBaliseHeader_CT_TM_conversions.h
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */

