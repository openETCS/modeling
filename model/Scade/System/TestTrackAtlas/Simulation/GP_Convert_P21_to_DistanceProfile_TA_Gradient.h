/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */
#ifndef _GP_Convert_P21_to_DistanceProfile_TA_Gradient_H_
#define _GP_Convert_P21_to_DistanceProfile_TA_Gradient_H_

#include "kcg_types.h"
#include "GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::GradientProfile */ GradientProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient /* 1 */ Context_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P021_OBU_T_TM /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L73 */ _L73;
  P021_OBU_sectionlist_enum_T_TM /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L71 */ _L71;
  Q_SCALE /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L65 */ _L65;
  P021_OBU_T_TM /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L63 */ _L63;
  array__11115 /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L74 */ _L74;
  array__11118 /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L76 */ _L76;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L77 */ _L77;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L83 */ _L83;
} outC_GP_Convert_P21_to_DistanceProfile_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Convert_P21_to_DistanceProfile */
extern void GP_Convert_P21_to_DistanceProfile_TA_Gradient(
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::Packet21_in */P021_OBU_T_TM *Packet21_in,
  outC_GP_Convert_P21_to_DistanceProfile_TA_Gradient *outC);

extern void GP_Convert_P21_to_DistanceProfile_reset_TA_Gradient(
  outC_GP_Convert_P21_to_DistanceProfile_TA_Gradient *outC);

#endif /* _GP_Convert_P21_to_DistanceProfile_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Convert_P21_to_DistanceProfile_TA_Gradient.h
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

