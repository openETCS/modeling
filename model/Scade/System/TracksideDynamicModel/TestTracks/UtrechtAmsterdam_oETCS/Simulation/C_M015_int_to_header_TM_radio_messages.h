/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */
#ifndef _C_M015_int_to_header_TM_radio_messages_H_
#define _C_M015_int_to_header_TM_radio_messages_H_

#include "kcg_types.h"
#include "CAST_Int_to_T_TRAIN_TM_conversions.h"
#include "CAST_Int_to_L_MESSAGE_TM_conversions.h"
#include "CAST_Int_to_NID_MESSAGE_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrackTrain_Radio_T_TM_radio_messages /* TM_radio_messages::C_M015_int_to_header::Message_Header_Out */ Message_Header_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_L_MESSAGE_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_Int_to_T_TRAIN_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_Int_to_NID_MESSAGE_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_015_int_T_TM_radio_messages /* TM_radio_messages::C_M015_int_to_header::_L1 */ _L1;
  M_TrackTrain_Radio_T_TM_radio_messages /* TM_radio_messages::C_M015_int_to_header::_L2 */ _L2;
  kcg_int /* TM_radio_messages::C_M015_int_to_header::_L8 */ _L8;
  kcg_int /* TM_radio_messages::C_M015_int_to_header::_L7 */ _L7;
  kcg_int /* TM_radio_messages::C_M015_int_to_header::_L6 */ _L6;
  kcg_int /* TM_radio_messages::C_M015_int_to_header::_L5 */ _L5;
  kcg_int /* TM_radio_messages::C_M015_int_to_header::_L4 */ _L4;
  kcg_bool /* TM_radio_messages::C_M015_int_to_header::_L3 */ _L3;
  kcg_int /* TM_radio_messages::C_M015_int_to_header::_L19 */ _L19;
  kcg_int /* TM_radio_messages::C_M015_int_to_header::_L24 */ _L24;
  kcg_int /* TM_radio_messages::C_M015_int_to_header::_L29 */ _L29;
  kcg_int /* TM_radio_messages::C_M015_int_to_header::_L28 */ _L28;
  kcg_int /* TM_radio_messages::C_M015_int_to_header::_L27 */ _L27;
  kcg_int /* TM_radio_messages::C_M015_int_to_header::_L26 */ _L26;
  NID_MESSAGE /* TM_radio_messages::C_M015_int_to_header::_L36 */ _L36;
  T_TRAIN /* TM_radio_messages::C_M015_int_to_header::_L35 */ _L35;
  L_MESSAGE /* TM_radio_messages::C_M015_int_to_header::_L34 */ _L34;
} outC_C_M015_int_to_header_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::C_M015_int_to_header */
extern void C_M015_int_to_header_TM_radio_messages(
  /* TM_radio_messages::C_M015_int_to_header::Message_Data_in */M_015_int_T_TM_radio_messages *Message_Data_in,
  outC_C_M015_int_to_header_TM_radio_messages *outC);

extern void C_M015_int_to_header_reset_TM_radio_messages(
  outC_C_M015_int_to_header_TM_radio_messages *outC);

#endif /* _C_M015_int_to_header_TM_radio_messages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_M015_int_to_header_TM_radio_messages.h
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

