/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:28:38
*************************************************************$ */
#ifndef _SEND_ConvertP005forWrite_IT_TM_conversions_H_
#define _SEND_ConvertP005forWrite_IT_TM_conversions_H_

#include "kcg_types.h"
#include "SEND_ConvertP005forWriteS_TM_conversions.h"
#include "TOOLS_calculate_L_PACKET_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::SEND_ConvertP005forWrite_IT::Header */ Header;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions::SEND_ConvertP005forWrite_IT::RM05_out */ RM05_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_ConvertP005forWriteS_TM_conversions /* 1 */ _1_Context_1;
  outC_SEND_ConvertP005forWriteS_TM_conversions /* 2 */ Context_2;
  outC_SEND_ConvertP005forWriteS_TM_conversions /* 3 */ Context_3;
  outC_SEND_ConvertP005forWriteS_TM_conversions /* 4 */ Context_4;
  outC_SEND_ConvertP005forWriteS_TM_conversions /* 5 */ Context_5;
  outC_TOOLS_calculate_L_PACKET_TM_conversions /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _3_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ IfBlock1_clock_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */ _L5_15_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */ _L4_14_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */ _L4_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */ _L2_12_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */ _L1_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */ _L2_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ else_clock_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */ _L3_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */ _L5_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::error */ error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */ q_dir_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */ _L13_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */ _L12_1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ q_dir_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */ q_dir_int_1;
  P005old_TM /* TM_conversions::SEND_ConvertP005forWrite_IT::_L1 */ _L1;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::SEND_ConvertP005forWrite_IT::_L204 */ _L204;
  kcg_int /* TM_conversions::SEND_ConvertP005forWrite_IT::_L205 */ _L205;
  kcg_int /* TM_conversions::SEND_ConvertP005forWrite_IT::_L206 */ _L206;
  array_int_461 /* TM_conversions::SEND_ConvertP005forWrite_IT::_L209 */ _L209;
  array_int_500 /* TM_conversions::SEND_ConvertP005forWrite_IT::_L211 */ _L211;
  kcg_int /* TM_conversions::SEND_ConvertP005forWrite_IT::_L212 */ _L212;
  kcg_int /* TM_conversions::SEND_ConvertP005forWrite_IT::_L213 */ _L213;
  P005E_Told_TM /* TM_conversions::SEND_ConvertP005forWrite_IT::_L230 */ _L230;
  P005E_Told_TM /* TM_conversions::SEND_ConvertP005forWrite_IT::_L229 */ _L229;
  P005E_Told_TM /* TM_conversions::SEND_ConvertP005forWrite_IT::_L228 */ _L228;
  P005E_Told_TM /* TM_conversions::SEND_ConvertP005forWrite_IT::_L227 */ _L227;
  P005E_Told_TM /* TM_conversions::SEND_ConvertP005forWrite_IT::_L226 */ _L226;
  array_int_11 /* TM_conversions::SEND_ConvertP005forWrite_IT::_L325 */ _L325;
  array_int_18 /* TM_conversions::SEND_ConvertP005forWrite_IT::_L327 */ _L327;
  array_int_25 /* TM_conversions::SEND_ConvertP005forWrite_IT::_L328 */ _L328;
  array_int_32 /* TM_conversions::SEND_ConvertP005forWrite_IT::_L329 */ _L329;
  array_int_39 /* TM_conversions::SEND_ConvertP005forWrite_IT::_L330 */ _L330;
  kcg_int /* TM_conversions::SEND_ConvertP005forWrite_IT::_L336 */ _L336;
  array_int_4 /* TM_conversions::SEND_ConvertP005forWrite_IT::_L355 */ _L355;
  P005Es_Told_TM /* TM_conversions::SEND_ConvertP005forWrite_IT::_L219 */ _L219;
  kcg_int /* TM_conversions::SEND_ConvertP005forWrite_IT::_L218 */ _L218;
  kcg_int /* TM_conversions::SEND_ConvertP005forWrite_IT::_L217 */ _L217;
  kcg_int /* TM_conversions::SEND_ConvertP005forWrite_IT::_L216 */ _L216;
  kcg_int /* TM_conversions::SEND_ConvertP005forWrite_IT::_L215 */ _L215;
  kcg_bool /* TM_conversions::SEND_ConvertP005forWrite_IT::_L214 */ _L214;
  Q_DIR /* TM_conversions::SEND_ConvertP005forWrite_IT::_L356 */ _L356;
  P005E_array_Told_TM /* TM_conversions::SEND_ConvertP005forWrite_IT::_L357 */ _L357;
  P005E_array_Told_TM /* TM_conversions::SEND_ConvertP005forWrite_IT::_L358 */ _L358;
  P005E_array_Told_TM /* TM_conversions::SEND_ConvertP005forWrite_IT::_L359 */ _L359;
  P005E_array_Told_TM /* TM_conversions::SEND_ConvertP005forWrite_IT::_L360 */ _L360;
  P005E_array_Told_TM /* TM_conversions::SEND_ConvertP005forWrite_IT::_L361 */ _L361;
  kcg_int /* TM_conversions::SEND_ConvertP005forWrite_IT::_L364 */ _L364;
  kcg_int /* TM_conversions::SEND_ConvertP005forWrite_IT::_L363 */ _L363;
} outC_SEND_ConvertP005forWrite_IT_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::SEND_ConvertP005forWrite_IT */
extern void SEND_ConvertP005forWrite_IT_TM_conversions(
  /* TM_conversions::SEND_ConvertP005forWrite_IT::RM05 */P005old_TM *RM05,
  outC_SEND_ConvertP005forWrite_IT_TM_conversions *outC);

extern void SEND_ConvertP005forWrite_IT_reset_TM_conversions(
  outC_SEND_ConvertP005forWrite_IT_TM_conversions *outC);

#endif /* _SEND_ConvertP005forWrite_IT_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_ConvertP005forWrite_IT_TM_conversions.h
** Generation date: 2015-06-05T13:28:38
*************************************************************$ */

