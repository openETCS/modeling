/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GradientProfile_to_DMI_loop_TA_Export.h"

void GradientProfile_to_DMI_loop_reset_TA_Export(
  outC_GradientProfile_to_DMI_loop_TA_Export *outC)
{
}

/* TA_Export::GradientProfile_to_DMI_loop */
void GradientProfile_to_DMI_loop_TA_Export(
  /* TA_Export::GradientProfile_to_DMI_loop::Gradient_section_in */Gradient_section_t_TrackAtlasTypes *Gradient_section_in,
  outC_GradientProfile_to_DMI_loop_TA_Export *outC)
{
  L_internal_Type_Obu_BasicTypes_Pkg noname;
  
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L1, Gradient_section_in);
  outC->_L6 = outC->_L1.L_Gradient;
  outC->_L5 = outC->_L1.Gradient;
  outC->_L4 = outC->_L1.Loc_LRBG;
  outC->_L3 = outC->_L1.Loc_Absolute;
  outC->_L13 = outC->_L4 + outC->_L6;
  noname = outC->_L3;
  outC->_L2 = outC->_L1.valid;
  outC->_L12.valid = outC->_L2;
  outC->_L12.begin_section = outC->_L4;
  outC->_L12.end_section = outC->_L13;
  outC->_L12.gradient = outC->_L5;
  kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes(
    &outC->Gradiient_section_for_DMI_out,
    &outC->_L12);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GradientProfile_to_DMI_loop_TA_Export.c
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

