/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _GradientProfile_to_DMI_TA_Export_H_
#define _GradientProfile_to_DMI_TA_Export_H_

#include "kcg_types.h"
#include "GradientProfile_to_DMI_loop_TA_Export.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_for_DMI_t_TrackAtlasTypes /* TA_Export::GradientProfile_to_DMI::Gradient_Profile_for_DMI_out */ Gradient_Profile_for_DMI_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GradientProfile_to_DMI_loop_TA_Export /* 1 */ Context_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Export::GradientProfile_to_DMI::_L1 */ _L1;
  array__10229 /* TA_Export::GradientProfile_to_DMI::_L2 */ _L2;
} outC_GradientProfile_to_DMI_TA_Export;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Export::GradientProfile_to_DMI */
extern void GradientProfile_to_DMI_TA_Export(
  /* TA_Export::GradientProfile_to_DMI::Gradient_Profile_in */GradientProfile_t_TrackAtlasTypes *Gradient_Profile_in,
  outC_GradientProfile_to_DMI_TA_Export *outC);

extern void GradientProfile_to_DMI_reset_TA_Export(
  outC_GradientProfile_to_DMI_TA_Export *outC);

#endif /* _GradientProfile_to_DMI_TA_Export_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GradientProfile_to_DMI_TA_Export.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

