/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GradientProfile_to_DMI_loop_TA_Export.h"

/* TA_Export::GradientProfile_to_DMI_loop */
void GradientProfile_to_DMI_loop_TA_Export(
  /* TA_Export::GradientProfile_to_DMI_loop::Gradient_section_in */Gradient_section_t_TrackAtlasTypes *Gradient_section_in,
  /* TA_Export::GradientProfile_to_DMI_loop::EoA */L_internal_Type_Obu_BasicTypes_Pkg EoA,
  /* TA_Export::GradientProfile_to_DMI_loop::Gradiient_section_for_DMI_out */GradientProfile_for_DMI_section_t_TrackAtlasTypes *Gradiient_section_for_DMI_out)
{
  static L_internal_Type_Obu_BasicTypes_Pkg tmp1;
  static kcg_int tmp;
  /* TA_Export::GradientProfile_to_DMI_loop::_L28 */
  static kcg_int _L28;
  /* TA_Export::GradientProfile_to_DMI_loop::_L50 */
  static kcg_bool _L50;
  
  _L50 = (EoA > (*Gradient_section_in).Loc_Absolute) &
    (*Gradient_section_in).valid;
  (*Gradiient_section_for_DMI_out).valid = _L50;
  _L28 = (*Gradient_section_in).Loc_Absolute +
    (*Gradient_section_in).L_Gradient;
  if (_L50) {
    (*Gradiient_section_for_DMI_out).begin_section =
      (*Gradient_section_in).Loc_Absolute;
    if (_L28 > EoA) {
      tmp1 = EoA;
    }
    else {
      tmp1 = _L28;
    }
    if ((*Gradient_section_in).Gradient == 255) {
      tmp = 0;
    }
    else {
      tmp = (*Gradient_section_in).Gradient;
    }
  }
  else {
    (*Gradiient_section_for_DMI_out).begin_section = ZERO_TA_Export;
    tmp1 = ZERO_TA_Export;
    tmp = ZERO_TA_Export;
  }
  (*Gradiient_section_for_DMI_out).end_section = tmp1;
  (*Gradiient_section_for_DMI_out).gradient = tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GradientProfile_to_DMI_loop_TA_Export.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

