/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _GradientProfile_to_DMI_loop_TA_Export_H_
#define _GradientProfile_to_DMI_loop_TA_Export_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_for_DMI_section_t_TrackAtlasTypes /* TA_Export::GradientProfile_to_DMI_loop::Gradiient_section_for_DMI_out */ Gradiient_section_for_DMI_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Gradient_section_t_TrackAtlasTypes /* TA_Export::GradientProfile_to_DMI_loop::_L1 */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Export::GradientProfile_to_DMI_loop::_L6 */ _L6;
  G_internal_Type_Obu_BasicTypes_Pkg /* TA_Export::GradientProfile_to_DMI_loop::_L5 */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Export::GradientProfile_to_DMI_loop::_L4 */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Export::GradientProfile_to_DMI_loop::_L3 */ _L3;
  kcg_bool /* TA_Export::GradientProfile_to_DMI_loop::_L2 */ _L2;
  GradientProfile_for_DMI_section_t_TrackAtlasTypes /* TA_Export::GradientProfile_to_DMI_loop::_L12 */ _L12;
  kcg_int /* TA_Export::GradientProfile_to_DMI_loop::_L13 */ _L13;
  kcg_int /* TA_Export::GradientProfile_to_DMI_loop::_L14 */ _L14;
  kcg_bool /* TA_Export::GradientProfile_to_DMI_loop::_L17 */ _L17;
  GradientProfile_for_DMI_section_t_TrackAtlasTypes /* TA_Export::GradientProfile_to_DMI_loop::_L18 */ _L18;
  GradientProfile_for_DMI_section_t_TrackAtlasTypes /* TA_Export::GradientProfile_to_DMI_loop::_L19 */ _L19;
} outC_GradientProfile_to_DMI_loop_TA_Export;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Export::GradientProfile_to_DMI_loop */
extern void GradientProfile_to_DMI_loop_TA_Export(
  /* TA_Export::GradientProfile_to_DMI_loop::Gradient_section_in */Gradient_section_t_TrackAtlasTypes *Gradient_section_in,
  outC_GradientProfile_to_DMI_loop_TA_Export *outC);

extern void GradientProfile_to_DMI_loop_reset_TA_Export(
  outC_GradientProfile_to_DMI_loop_TA_Export *outC);

#endif /* _GradientProfile_to_DMI_loop_TA_Export_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GradientProfile_to_DMI_loop_TA_Export.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

