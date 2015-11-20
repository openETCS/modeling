/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "copyGradientElement_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::copyGradientElement */
void copyGradientElement_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::copyGradientElement::index */ kcg_int index,
  /* manage_DMI_Output_Pkg::copyGradientElement::fromTrackAtlas */ GradientProfile_for_DMI_section_t_TrackAtlasTypes *fromTrackAtlas,
  /* manage_DMI_Output_Pkg::copyGradientElement::continue */ kcg_bool *_1_continue,
  /* manage_DMI_Output_Pkg::copyGradientElement::toDMI */ DMI_gradientProfileElement_T_DMI_Types_Pkg *toDMI)
{
  static kcg_int noname;
  /* manage_DMI_Output_Pkg::copyGradientElement::_L1 */
  static GradientProfile_for_DMI_section_t_TrackAtlasTypes _L1;
  /* manage_DMI_Output_Pkg::copyGradientElement::_L2 */
  static DMI_gradientProfileElement_T_DMI_Types_Pkg _L2;
  /* manage_DMI_Output_Pkg::copyGradientElement::_L6 */
  static kcg_bool _L6;
  /* manage_DMI_Output_Pkg::copyGradientElement::_L5 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* manage_DMI_Output_Pkg::copyGradientElement::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* manage_DMI_Output_Pkg::copyGradientElement::_L3 */
  static G_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* manage_DMI_Output_Pkg::copyGradientElement::_L7 */
  static kcg_int _L7;
  
  kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes(
    &_L1,
    fromTrackAtlas);
  _L6 = _L1.valid;
  _L5 = _L1.begin_section;
  _L4 = _L1.end_section;
  _L3 = _L1.gradient;
  _L2.valid = _L6;
  _L2.begin_section = _L5;
  _L2.end_section = _L4;
  _L2.gradient = _L3;
  kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(toDMI, &_L2);
  *_1_continue = _L6;
  _L7 = index;
  noname = _L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** copyGradientElement_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

