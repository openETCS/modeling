/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */
#ifndef _C_header_to_M033_TM_RBC_conversions_H_
#define _C_header_to_M033_TM_RBC_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_M_ACK_TM_conversions.h"
#include "CAST_Int_to_NID_LRBG_TM_conversions.h"
#include "CAST_Int_to_T_TRAIN_TM_conversions.h"
#include "CAST_Int_to_NID_MESSAGE_TM_conversions.h"
#include "CAST_Int_to_L_MESSAGE_TM_conversions.h"
#include "CAST_Int_to_D_REF_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_033_T_TM_radio_messages /* TM_RBC_conversions::C_header_to_M033::message_out */ message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_M_ACK_TM_conversions /* 1 */ _5_Context_1;
  outC_CAST_Int_to_NID_LRBG_TM_conversions /* 1 */ _4_Context_1;
  outC_CAST_Int_to_D_REF_TM_conversions /* 1 */ _3_Context_1;
  outC_CAST_Int_to_L_MESSAGE_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_Int_to_T_TRAIN_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_Int_to_NID_MESSAGE_TM_conversions /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */ _8_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */ IfBlock1_clock_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */ _L3_110_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */ _L2_19_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */ _L4_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */ _L1_17_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */ _L1_16_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L2 */ _L2_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */ else_clock_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L1 */ _L1_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L3 */ _L3_1_IfBlock1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_in */ q_scale_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::error */ error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::_L2 */ _L2_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::_L4 */ _L4_1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ q_scale_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_int */ q_scale_int_1;
  M_TrackTrain_Radio_T_TM_radio_messages /* TM_RBC_conversions::C_header_to_M033::_L1 */ _L1;
  kcg_int /* TM_RBC_conversions::C_header_to_M033::_L13 */ _L13;
  kcg_int /* TM_RBC_conversions::C_header_to_M033::_L12 */ _L12;
  kcg_int /* TM_RBC_conversions::C_header_to_M033::_L11 */ _L11;
  kcg_int /* TM_RBC_conversions::C_header_to_M033::_L10 */ _L10;
  kcg_int /* TM_RBC_conversions::C_header_to_M033::_L9 */ _L9;
  kcg_int /* TM_RBC_conversions::C_header_to_M033::_L8 */ _L8;
  kcg_int /* TM_RBC_conversions::C_header_to_M033::_L7 */ _L7;
  kcg_int /* TM_RBC_conversions::C_header_to_M033::_L6 */ _L6;
  kcg_int /* TM_RBC_conversions::C_header_to_M033::_L5 */ _L5;
  kcg_int /* TM_RBC_conversions::C_header_to_M033::_L4 */ _L4;
  kcg_int /* TM_RBC_conversions::C_header_to_M033::_L3 */ _L3;
  kcg_bool /* TM_RBC_conversions::C_header_to_M033::_L2 */ _L2;
  M_033_T_TM_radio_messages /* TM_RBC_conversions::C_header_to_M033::_L26 */ _L26;
  M_ACK /* TM_RBC_conversions::C_header_to_M033::_L27 */ _L27;
  NID_LRBG /* TM_RBC_conversions::C_header_to_M033::_L28 */ _L28;
  Q_SCALE /* TM_RBC_conversions::C_header_to_M033::_L29 */ _L29;
  D_REF /* TM_RBC_conversions::C_header_to_M033::_L30 */ _L30;
  NID_MESSAGE /* TM_RBC_conversions::C_header_to_M033::_L34 */ _L34;
  T_TRAIN /* TM_RBC_conversions::C_header_to_M033::_L33 */ _L33;
  L_MESSAGE /* TM_RBC_conversions::C_header_to_M033::_L32 */ _L32;
} outC_C_header_to_M033_TM_RBC_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_RBC_conversions::C_header_to_M033 */
extern void C_header_to_M033_TM_RBC_conversions(
  /* TM_RBC_conversions::C_header_to_M033::header_in */M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  outC_C_header_to_M033_TM_RBC_conversions *outC);

extern void C_header_to_M033_reset_TM_RBC_conversions(
  outC_C_header_to_M033_TM_RBC_conversions *outC);

#endif /* _C_header_to_M033_TM_RBC_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_header_to_M033_TM_RBC_conversions.h
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

