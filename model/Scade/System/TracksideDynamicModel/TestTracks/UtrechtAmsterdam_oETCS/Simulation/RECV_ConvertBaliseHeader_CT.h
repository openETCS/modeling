/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */
#ifndef _RECV_ConvertBaliseHeader_CT_H_
#define _RECV_ConvertBaliseHeader_CT_H_

#include "kcg_types.h"
#include "TOOLS_Int_to_Q_UPDOWN.h"
#include "TOOLS_Int_to_M_VERSION.h"
#include "TOOLS_Int_to_Q_MEDIA.h"
#include "TOOLS_Int_to_N_PIG.h"
#include "TOOLS_Int_to_N_TOTAL.h"
#include "TOOLS_Int_to_M_DUP.h"
#include "TOOLS_Int_to_Q_LINK.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TelegramHeader_T_BG_Types_Pkg /* RECV_ConvertBaliseHeader_CT::BaliseTelegramHeaderOut */ BaliseTelegramHeaderOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TOOLS_Int_to_Q_UPDOWN /* 1 */ _6_Context_1;
  outC_TOOLS_Int_to_M_VERSION /* 1 */ _5_Context_1;
  outC_TOOLS_Int_to_Q_MEDIA /* 1 */ _4_Context_1;
  outC_TOOLS_Int_to_N_PIG /* 1 */ _3_Context_1;
  outC_TOOLS_Int_to_N_TOTAL /* 1 */ _2_Context_1;
  outC_TOOLS_Int_to_M_DUP /* 1 */ _1_Context_1;
  outC_TOOLS_Int_to_Q_LINK /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TM_BaliseTelegramHeader_int_T /* RECV_ConvertBaliseHeader_CT::_L1 */ _L1;
  kcg_int /* RECV_ConvertBaliseHeader_CT::_L11 */ _L11;
  kcg_int /* RECV_ConvertBaliseHeader_CT::_L10 */ _L10;
  kcg_int /* RECV_ConvertBaliseHeader_CT::_L9 */ _L9;
  kcg_int /* RECV_ConvertBaliseHeader_CT::_L8 */ _L8;
  kcg_int /* RECV_ConvertBaliseHeader_CT::_L7 */ _L7;
  kcg_int /* RECV_ConvertBaliseHeader_CT::_L6 */ _L6;
  kcg_int /* RECV_ConvertBaliseHeader_CT::_L5 */ _L5;
  kcg_int /* RECV_ConvertBaliseHeader_CT::_L4 */ _L4;
  kcg_int /* RECV_ConvertBaliseHeader_CT::_L3 */ _L3;
  kcg_int /* RECV_ConvertBaliseHeader_CT::_L2 */ _L2;
  TelegramHeader_T_BG_Types_Pkg /* RECV_ConvertBaliseHeader_CT::_L42 */ _L42;
  Q_UPDOWN /* RECV_ConvertBaliseHeader_CT::_L43 */ _L43;
  M_VERSION /* RECV_ConvertBaliseHeader_CT::_L44 */ _L44;
  Q_MEDIA /* RECV_ConvertBaliseHeader_CT::_L45 */ _L45;
  N_PIG /* RECV_ConvertBaliseHeader_CT::_L46 */ _L46;
  N_TOTAL /* RECV_ConvertBaliseHeader_CT::_L47 */ _L47;
  M_DUP /* RECV_ConvertBaliseHeader_CT::_L48 */ _L48;
  Q_LINK /* RECV_ConvertBaliseHeader_CT::_L49 */ _L49;
} outC_RECV_ConvertBaliseHeader_CT;

/* ===========  node initialization and cycle functions  =========== */
/* RECV_ConvertBaliseHeader_CT */
extern void RECV_ConvertBaliseHeader_CT(
  /* RECV_ConvertBaliseHeader_CT::BaliseTelegramHeaderIn */TM_BaliseTelegramHeader_int_T *BaliseTelegramHeaderIn,
  outC_RECV_ConvertBaliseHeader_CT *outC);

extern void RECV_ConvertBaliseHeader_CT_reset(
  outC_RECV_ConvertBaliseHeader_CT *outC);

#endif /* _RECV_ConvertBaliseHeader_CT_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ConvertBaliseHeader_CT.h
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

