/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */
#ifndef _C_TrackTrainMessage_to_Int_TM_conversions_H_
#define _C_TrackTrainMessage_to_Int_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_NID_MESSAGE_to_int_TM_conversions.h"
#include "CAST_T_TRAIN_to_int_TM_conversions.h"
#include "CAST_M_ACK_to_int_TM_conversions.h"
#include "CAST_NID_LRBG_to_int_TM_conversions.h"
#include "CAST_NID_EM_to_int_TM_conversions.h"
#include "CAST_Q_SCALE_to_int_TM_conversions.h"
#include "CAST_D_SR_to_int_TM_conversions.h"
#include "CAST_D_REF_to_int_TM_conversions.h"
#include "CAST_Q_DIR_to_int_TM_conversions.h"
#include "CAST_M_VERSION_to_int_TM_conversions.h"
#include "CAST_D_EMERGENCYSTOP_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _3_Radio_TrackTrain_Header_T_TM /* TM_conversions::C_TrackTrainMessage_to_Int::Message_Out */ Message_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_NID_MESSAGE_to_int_TM_conversions /* 1 */ _10_Context_1;
  outC_CAST_T_TRAIN_to_int_TM_conversions /* 1 */ _9_Context_1;
  outC_CAST_M_ACK_to_int_TM_conversions /* 1 */ _8_Context_1;
  outC_CAST_NID_LRBG_to_int_TM_conversions /* 1 */ _7_Context_1;
  outC_CAST_T_TRAIN_to_int_TM_conversions /* 2 */ Context_2;
  outC_CAST_NID_EM_to_int_TM_conversions /* 1 */ _6_Context_1;
  outC_CAST_Q_SCALE_to_int_TM_conversions /* 1 */ _5_Context_1;
  outC_CAST_D_SR_to_int_TM_conversions /* 1 */ _4_Context_1;
  outC_CAST_T_TRAIN_to_int_TM_conversions /* 3 */ Context_3;
  outC_CAST_D_REF_to_int_TM_conversions /* 1 */ _3_Context_1;
  outC_CAST_Q_DIR_to_int_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_M_VERSION_to_int_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TM_conversions::C_TrackTrainMessage_to_Int::_L1 */ _L1;
  M_VERSION /* TM_conversions::C_TrackTrainMessage_to_Int::_L16 */ _L16;
  D_EMERGENCYSTOP /* TM_conversions::C_TrackTrainMessage_to_Int::_L15 */ _L15;
  Q_DIR /* TM_conversions::C_TrackTrainMessage_to_Int::_L14 */ _L14;
  D_REF /* TM_conversions::C_TrackTrainMessage_to_Int::_L13 */ _L13;
  T_TRAIN /* TM_conversions::C_TrackTrainMessage_to_Int::_L12 */ _L12;
  D_SR /* TM_conversions::C_TrackTrainMessage_to_Int::_L11 */ _L11;
  Q_SCALE /* TM_conversions::C_TrackTrainMessage_to_Int::_L10 */ _L10;
  NID_EM /* TM_conversions::C_TrackTrainMessage_to_Int::_L9 */ _L9;
  T_TRAIN /* TM_conversions::C_TrackTrainMessage_to_Int::_L8 */ _L8;
  NID_LRBG /* TM_conversions::C_TrackTrainMessage_to_Int::_L7 */ _L7;
  M_ACK /* TM_conversions::C_TrackTrainMessage_to_Int::_L6 */ _L6;
  T_TRAIN /* TM_conversions::C_TrackTrainMessage_to_Int::_L5 */ _L5;
  NID_MESSAGE /* TM_conversions::C_TrackTrainMessage_to_Int::_L4 */ _L4;
  T_internal_Type_Obu_BasicTypes_Pkg /* TM_conversions::C_TrackTrainMessage_to_Int::_L3 */ _L3;
  kcg_int /* TM_conversions::C_TrackTrainMessage_to_Int::_L2 */ _L2;
  _3_Radio_TrackTrain_Header_T_TM /* TM_conversions::C_TrackTrainMessage_to_Int::_L32 */ _L32;
  kcg_int /* TM_conversions::C_TrackTrainMessage_to_Int::_L33 */ _L33;
  kcg_int /* TM_conversions::C_TrackTrainMessage_to_Int::_L34 */ _L34;
  kcg_int /* TM_conversions::C_TrackTrainMessage_to_Int::_L35 */ _L35;
  kcg_int /* TM_conversions::C_TrackTrainMessage_to_Int::_L36 */ _L36;
  kcg_int /* TM_conversions::C_TrackTrainMessage_to_Int::_L37 */ _L37;
  kcg_int /* TM_conversions::C_TrackTrainMessage_to_Int::_L38 */ _L38;
  kcg_int /* TM_conversions::C_TrackTrainMessage_to_Int::_L39 */ _L39;
  kcg_int /* TM_conversions::C_TrackTrainMessage_to_Int::_L40 */ _L40;
  kcg_int /* TM_conversions::C_TrackTrainMessage_to_Int::_L41 */ _L41;
  kcg_int /* TM_conversions::C_TrackTrainMessage_to_Int::_L42 */ _L42;
  kcg_int /* TM_conversions::C_TrackTrainMessage_to_Int::_L43 */ _L43;
  kcg_int /* TM_conversions::C_TrackTrainMessage_to_Int::_L44 */ _L44;
  kcg_int /* TM_conversions::C_TrackTrainMessage_to_Int::_L45 */ _L45;
} outC_C_TrackTrainMessage_to_Int_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_TrackTrainMessage_to_Int */
extern void C_TrackTrainMessage_to_Int_TM_conversions(
  /* TM_conversions::C_TrackTrainMessage_to_Int::Message_In */Radio_TrackTrain_Header_T_Radio_Types_Pkg *Message_In,
  outC_C_TrackTrainMessage_to_Int_TM_conversions *outC);

extern void C_TrackTrainMessage_to_Int_reset_TM_conversions(
  outC_C_TrackTrainMessage_to_Int_TM_conversions *outC);

#endif /* _C_TrackTrainMessage_to_Int_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_TrackTrainMessage_to_Int_TM_conversions.h
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

