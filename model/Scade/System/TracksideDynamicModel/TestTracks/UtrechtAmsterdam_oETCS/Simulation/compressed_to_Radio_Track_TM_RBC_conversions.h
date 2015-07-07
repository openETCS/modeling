/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */
#ifndef _compressed_to_Radio_Track_TM_RBC_conversions_H_
#define _compressed_to_Radio_Track_TM_RBC_conversions_H_

#include "kcg_types.h"
#include "CAST_NID_MESSAGE_to_int_TM_conversions.h"
#include "C_header_to_M032_TM_radio_messages.h"
#include "C_header_to_M024_TM_radio_messages.h"
#include "C_header_to_M015_TM_radio_messages.h"
#include "C_header_to_M008_TM_radio_messages.h"
#include "C_header_to_M003_TM_radio_messages.h"
#include "M032_to_Radio_Track_Train_H_TM_RBC_conversions.h"
#include "M024_to_Radio_Track_Train_H_TM_RBC_conversions.h"
#include "M015_to_Radio_Track_Train_H_TM_RBC_conversions.h"
#include "M008_to_Radio_Track_Train_H_TM_RBC_conversions.h"
#include "M003_to_Radio_Track_Train_H_TM_RBC_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::Header_Out */ Header_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions /* 1 */ _9_Context_1;
  outC_C_header_to_M032_TM_radio_messages /* 1 */ _8_Context_1;
  outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions /* 1 */ _7_Context_1;
  outC_C_header_to_M024_TM_radio_messages /* 1 */ _6_Context_1;
  outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions /* 1 */ _5_Context_1;
  outC_C_header_to_M015_TM_radio_messages /* 1 */ _4_Context_1;
  outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions /* 1 */ _3_Context_1;
  outC_C_header_to_M008_TM_radio_messages /* 2 */ _2_Context_2;
  outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions /* 1 */ _1_Context_1;
  outC_C_header_to_M003_TM_radio_messages /* 2 */ Context_2;
  outC_CAST_NID_MESSAGE_to_int_TM_conversions /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else */ _12_else_clock_IfBlock1;
  kcg_bool /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else */ _10_else_clock_IfBlock1;
  kcg_bool /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else */ else_clock_IfBlock1;
  kcg_bool /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else */ _11_else_clock_IfBlock1;
  kcg_bool /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::then::_L3 */ _L3_IfBlock1;
  M_003_T_TM_radio_messages /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::then::_L2 */ _L2_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::then::_L1 */ _L1_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::then::_L1 */ _L116_IfBlock1;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::then::_L2 */ _L217_IfBlock1;
  M_015_T_TM_radio_messages /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::then::_L3 */ _L318_IfBlock1;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::then::_L1 */ _L122_IfBlock1;
  M_032_T_TM_radio_messages /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::then::_L2 */ _L223_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::then::_L3 */ _L324_IfBlock1;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else::_L1 */ _L125_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::then::_L3 */ _L321_IfBlock1;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::then::_L2 */ _L220_IfBlock1;
  M_024_T_TM_radio_messages /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::then::_L1 */ _L119_IfBlock1;
  M_008_T_TM_radio_messages /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::then::_L3 */ _L315_IfBlock1;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::then::_L2 */ _L214_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::IfBlock1::else::then::_L1 */ _L113_IfBlock1;
  kcg_int /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::nid_message */ nid_message;
  M_TrackTrain_Radio_T_TM_radio_messages /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::_L1 */ _L1;
  NID_MESSAGE /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::_L32 */ _L32;
  kcg_int /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::_L33 */ _L33;
} outC_compressed_to_Radio_Track_TM_RBC_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H */
extern void compressed_to_Radio_Track_TM_RBC_conversions(
  /* TM_RBC_conversions::compressed_to_Radio_Track_Train_H::Header_In */M_TrackTrain_Radio_T_TM_radio_messages *Header_In,
  outC_compressed_to_Radio_Track_TM_RBC_conversions *outC);

extern void compressed_to_Radio_Track_reset_TM_RBC_conversions(
  outC_compressed_to_Radio_Track_TM_RBC_conversions *outC);

#endif /* _compressed_to_Radio_Track_TM_RBC_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** compressed_to_Radio_Track_TM_RBC_conversions.h
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

