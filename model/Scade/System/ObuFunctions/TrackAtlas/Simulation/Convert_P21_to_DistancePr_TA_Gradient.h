/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:18:56
*************************************************************$ */
#ifndef _Convert_P21_to_DistancePr_TA_Gradient_H_
#define _Convert_P21_to_DistancePr_TA_Gradient_H_

#include "kcg_types.h"
#include "_1_Convert_P21_to_DistancePr_TA_Gradient.h"

/* ========================  input structure  ====================== */
typedef struct {
  P021_OBU_T_TM /* TA_Gradient::Convert_P21_to_DistanceProfile::Packet21_in */ Packet21_in;
} inC_Convert_P21_to_DistancePr_TA_Gradient;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Convert_P21_to_DistanceProfile::GradientProfile */ GradientProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__1_Convert_P21_to_DistancePr_TA_Gradient /* 1 */ Context_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P021_OBU_T_TM /* TA_Gradient::Convert_P21_to_DistanceProfile::_L73 */ _L73;
  P021_OBU_sectionlist_enum_T_TM /* TA_Gradient::Convert_P21_to_DistanceProfile::_L71 */ _L71;
  Q_SCALE /* TA_Gradient::Convert_P21_to_DistanceProfile::_L65 */ _L65;
  P021_OBU_T_TM /* TA_Gradient::Convert_P21_to_DistanceProfile::_L63 */ _L63;
  array__336 /* TA_Gradient::Convert_P21_to_DistanceProfile::_L74 */ _L74;
  array__339 /* TA_Gradient::Convert_P21_to_DistanceProfile::_L76 */ _L76;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Convert_P21_to_DistanceProfile::_L77 */ _L77;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Convert_P21_to_DistanceProfile::_L83 */ _L83;
} outC_Convert_P21_to_DistancePr_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Convert_P21_to_DistanceProfile */
extern void Convert_P21_to_DistancePr_TA_Gradient(
  inC_Convert_P21_to_DistancePr_TA_Gradient *inC,
  outC_Convert_P21_to_DistancePr_TA_Gradient *outC);

extern void Convert_P21_to_DistancePr_reset_TA_Gradient(
  outC_Convert_P21_to_DistancePr_TA_Gradient *outC);

#endif /* _Convert_P21_to_DistancePr_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Convert_P21_to_DistancePr_TA_Gradient.h
** Generation date: 2015-08-30T07:18:56
*************************************************************$ */

