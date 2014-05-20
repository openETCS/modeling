/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/Simulation\kcg_s2c_config.txt
** Generation date: 2014-05-20T18:38:18
*************************************************************$ */
#ifndef _GetBGMessageOrientation_DetermineBGOrientation_LRBG_H_
#define _GetBGMessageOrientation_DetermineBGOrientation_LRBG_H_

#include "kcg_types.h"
#include "ArrCheck_DetermineBGOrientation_LRBG.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Orientation_DetermineBGOrientation_LRBG_DataDctionary /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::Orientation */ Orientation;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ArrCheck_DetermineBGOrientation_LRBG /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L101 */ _L101;
  N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L102 */ _L102;
  N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L103 */ _L103;
  Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L104 */ _L104;
  Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L105 */ _L105;
  Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L106 */ _L106;
  NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L107 */ _L107;
  NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L108 */ _L108;
  M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L109 */ _L109;
  M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L110 */ _L110;
  Header_DetermineBGOrientation_LRBG_DataDctionary_BTM /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L34 */ _L34;
  Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L35 */ _L35;
  HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L24 */ _L24;
  HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L25 */ _L25;
  HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L26 */ _L26;
  HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L27 */ _L27;
  HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L28 */ _L28;
  HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L29 */ _L29;
  HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L30 */ _L30;
  HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L31 */ _L31;
  HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L12 */ _L12;
  AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L13 */ _L13;
  CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L1 */ _L1;
  Orientation_DetermineBGOrientation_LRBG_DataDctionary /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L310 */ _L310;
  Orientation_DetermineBGOrientation_LRBG_DataDctionary /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L311 */ _L311;
  kcg_bool /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L315 */ _L315;
  N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L316 */ _L316;
  Orientation_DetermineBGOrientation_LRBG_DataDctionary /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L317 */ _L317;
  kcg_bool /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L318 */ _L318;
  kcg_bool /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L319 */ _L319;
  N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L320 */ _L320;
  kcg_bool /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L321 */ _L321;
  M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L323 */ _L323;
  kcg_bool /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::_L324 */ _L324;
} outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG;

/* ===========  node initialization and cycle functions  =========== */
/* DetermineBGOrientation_LRBG::GetBGMessageOrientation */
extern void GetBGMessageOrientation_DetermineBGOrientation_LRBG(
  /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::CheckedBGMessage */CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage *CheckedBGMessage,
  outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG *outC);

extern void GetBGMessageOrientation_reset_DetermineBGOrientation_LRBG(
  outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG *outC);

#endif /* _GetBGMessageOrientation_DetermineBGOrientation_LRBG_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GetBGMessageOrientation_DetermineBGOrientation_LRBG.h
** Generation date: 2014-05-20T18:38:18
*************************************************************$ */

