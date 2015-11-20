/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "copyGradientElement_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::copyGradientElement */
void copyGradientElement_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::copyGradientElement::index */kcg_int index,
  /* manage_DMI_Output_Pkg::copyGradientElement::fromTrackAtlas */GradientProfile_for_DMI_section_t_TrackAtlasTypes *fromTrackAtlas,
  /* manage_DMI_Output_Pkg::copyGradientElement::continue */kcg_bool *_1_continue,
  /* manage_DMI_Output_Pkg::copyGradientElement::toDMI */DMI_gradientProfileElement_T_DMI_Types_Pkg *toDMI)
{
  (*toDMI).begin_section = (*fromTrackAtlas).begin_section;
  (*toDMI).end_section = (*fromTrackAtlas).end_section;
  (*toDMI).gradient = (*fromTrackAtlas).gradient;
  *_1_continue = (*fromTrackAtlas).valid;
  (*toDMI).valid = *_1_continue;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** copyGradientElement_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

