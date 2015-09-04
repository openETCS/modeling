/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy_H_
#define _M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::Radio_Track_Train_Hd_out */ Radio_Track_Train_Hd_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_033_T_TM_radio_messages /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L1 */ _L1;
  NID_LRBG /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L7 */ _L7;
  M_ACK /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L6 */ _L6;
  T_TRAIN /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L5 */ _L5;
  L_MESSAGE /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L4 */ _L4;
  NID_MESSAGE /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L3 */ _L3;
  kcg_bool /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L2 */ _L2;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L14 */ _L14;
  T_TRAIN /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L15 */ _L15;
  NID_EM /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L16 */ _L16;
  D_SR /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L18 */ _L18;
  T_TRAIN /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L19 */ _L19;
  Q_DIR /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L21 */ _L21;
  D_EMERGENCYSTOP /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L22 */ _L22;
  T_internal_Type_Obu_BasicTypes_Pkg /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L25 */ _L25;
  kcg_int /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L24 */ _L24;
  Q_SCALE /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L26 */ _L26;
  D_REF /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L27 */ _L27;
  M_VERSION /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::_L28 */ _L28;
} outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy;

/* ===========  node initialization and cycle functions  =========== */
/* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H */
extern void M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
  /* TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H::M033_in */M_033_T_TM_radio_messages *M033_in,
  outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy *outC);

extern void M033_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
  outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy *outC);

#endif /* _M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

