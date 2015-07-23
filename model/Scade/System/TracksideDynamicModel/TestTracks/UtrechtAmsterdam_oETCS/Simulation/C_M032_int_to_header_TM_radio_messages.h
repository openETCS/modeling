/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _C_M032_int_to_header_TM_radio_messages_H_
#define _C_M032_int_to_header_TM_radio_messages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrackTrain_Radio_T_TM_radio_messages /* TM_radio_messages::C_M032_int_to_header::Message_Header_Out */ Message_Header_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_032_int_T_TM_radio_messages /* TM_radio_messages::C_M032_int_to_header::_L1 */ _L1;
  M_TrackTrain_Radio_T_TM_radio_messages /* TM_radio_messages::C_M032_int_to_header::_L2 */ _L2;
  kcg_int /* TM_radio_messages::C_M032_int_to_header::_L8 */ _L8;
  kcg_int /* TM_radio_messages::C_M032_int_to_header::_L7 */ _L7;
  kcg_int /* TM_radio_messages::C_M032_int_to_header::_L6 */ _L6;
  kcg_int /* TM_radio_messages::C_M032_int_to_header::_L5 */ _L5;
  kcg_int /* TM_radio_messages::C_M032_int_to_header::_L4 */ _L4;
  kcg_bool /* TM_radio_messages::C_M032_int_to_header::_L3 */ _L3;
  kcg_int /* TM_radio_messages::C_M032_int_to_header::_L19 */ _L19;
  kcg_int /* TM_radio_messages::C_M032_int_to_header::_L24 */ _L24;
} outC_C_M032_int_to_header_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::C_M032_int_to_header */
extern void C_M032_int_to_header_TM_radio_messages(
  /* TM_radio_messages::C_M032_int_to_header::Message_Data_in */M_032_int_T_TM_radio_messages *Message_Data_in,
  outC_C_M032_int_to_header_TM_radio_messages *outC);

extern void C_M032_int_to_header_reset_TM_radio_messages(
  outC_C_M032_int_to_header_TM_radio_messages *outC);

#endif /* _C_M032_int_to_header_TM_radio_messages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_M032_int_to_header_TM_radio_messages.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

