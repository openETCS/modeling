/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */
#ifndef _C_header_to_M032_TM_radio_messages_H_
#define _C_header_to_M032_TM_radio_messages_H_

#include "kcg_types.h"
#include "CAST_Int_to_M_VERSION_TM_conversions.h"
#include "CAST_Int_to_M_ACK_TM_conversions.h"
#include "CAST_Int_to_NID_LRBG_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_032_T_TM_radio_messages /* TM_radio_messages::C_header_to_M032::message_out */ message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_M_ACK_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_Int_to_NID_LRBG_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_Int_to_M_VERSION_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrackTrain_Radio_T_TM_radio_messages /* TM_radio_messages::C_header_to_M032::_L1 */ _L1;
  kcg_int /* TM_radio_messages::C_header_to_M032::_L13 */ _L13;
  kcg_int /* TM_radio_messages::C_header_to_M032::_L12 */ _L12;
  kcg_int /* TM_radio_messages::C_header_to_M032::_L11 */ _L11;
  kcg_int /* TM_radio_messages::C_header_to_M032::_L10 */ _L10;
  kcg_int /* TM_radio_messages::C_header_to_M032::_L9 */ _L9;
  kcg_int /* TM_radio_messages::C_header_to_M032::_L8 */ _L8;
  kcg_int /* TM_radio_messages::C_header_to_M032::_L7 */ _L7;
  kcg_int /* TM_radio_messages::C_header_to_M032::_L6 */ _L6;
  T_TRAIN /* TM_radio_messages::C_header_to_M032::_L5 */ _L5;
  L_MESSAGE /* TM_radio_messages::C_header_to_M032::_L4 */ _L4;
  NID_MESSAGE /* TM_radio_messages::C_header_to_M032::_L3 */ _L3;
  kcg_bool /* TM_radio_messages::C_header_to_M032::_L2 */ _L2;
  M_032_T_TM_radio_messages /* TM_radio_messages::C_header_to_M032::_L26 */ _L26;
  M_ACK /* TM_radio_messages::C_header_to_M032::_L27 */ _L27;
  NID_LRBG /* TM_radio_messages::C_header_to_M032::_L28 */ _L28;
  M_VERSION /* TM_radio_messages::C_header_to_M032::_L29 */ _L29;
} outC_C_header_to_M032_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::C_header_to_M032 */
extern void C_header_to_M032_TM_radio_messages(
  /* TM_radio_messages::C_header_to_M032::header_in */M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  outC_C_header_to_M032_TM_radio_messages *outC);

extern void C_header_to_M032_reset_TM_radio_messages(
  outC_C_header_to_M032_TM_radio_messages *outC);

#endif /* _C_header_to_M032_TM_radio_messages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_header_to_M032_TM_radio_messages.h
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

