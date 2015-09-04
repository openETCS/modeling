/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T15:52:43
*************************************************************$ */
#ifndef _TrainLength_Correction_TA_Lib_internal_H_
#define _TrainLength_Correction_TA_Lib_internal_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_Lib_internal::TrainLength_Correction::Static_Speed_Profile */ Static_Speed_Profile;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::TrainLength_Correction::train_length */ train_length;
  kcg_int /* TA_Lib_internal::TrainLength_Correction::i */ i;
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::TrainLength_Correction::v_static */ v_static;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::TrainLength_Correction::distance */ distance;
} inC_TrainLength_Correction_TA_Lib_internal;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::TrainLength_Correction::corrected_distance */ corrected_distance;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_Lib_internal::TrainLength_Correction::_L1 */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::TrainLength_Correction::_L2 */ _L2;
  kcg_int /* TA_Lib_internal::TrainLength_Correction::_L3 */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::TrainLength_Correction::_L4 */ _L4;
  StaticSpeedSection_t_TrackAtlasTypes /* TA_Lib_internal::TrainLength_Correction::_L5 */ _L5;
  kcg_int /* TA_Lib_internal::TrainLength_Correction::_L6 */ _L6;
  kcg_int /* TA_Lib_internal::TrainLength_Correction::_L7 */ _L7;
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::TrainLength_Correction::_L9 */ _L9;
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::TrainLength_Correction::_L10 */ _L10;
  kcg_bool /* TA_Lib_internal::TrainLength_Correction::_L11 */ _L11;
  kcg_int /* TA_Lib_internal::TrainLength_Correction::_L12 */ _L12;
  kcg_int /* TA_Lib_internal::TrainLength_Correction::_L13 */ _L13;
} outC_TrainLength_Correction_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::TrainLength_Correction */
extern void TrainLength_Correction_TA_Lib_internal(
  inC_TrainLength_Correction_TA_Lib_internal *inC,
  outC_TrainLength_Correction_TA_Lib_internal *outC);

extern void TrainLength_Correction_reset_TA_Lib_internal(
  outC_TrainLength_Correction_TA_Lib_internal *outC);

#endif /* _TrainLength_Correction_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainLength_Correction_TA_Lib_internal.h
** Generation date: 2015-09-04T15:52:43
*************************************************************$ */

