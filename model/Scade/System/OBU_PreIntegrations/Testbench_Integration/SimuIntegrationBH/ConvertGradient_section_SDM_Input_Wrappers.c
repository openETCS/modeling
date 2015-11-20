/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertGradient_section_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::ConvertGradient_section */
void ConvertGradient_section_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::ConvertGradient_section::Gradient_section_ext */ Gradient_section_t_TrackAtlasTypes *Gradient_section_ext,
  /* SDM_Input_Wrappers::ConvertGradient_section::Gradient_section_int */ Gradient_section_real_t_SDM_GradientAcceleration_types *Gradient_section_int)
{
  static L_internal_Type_Obu_BasicTypes_Pkg noname;
  static L_internal_Type_Obu_BasicTypes_Pkg _1_noname;
  /* SDM_Input_Wrappers::ConvertGradient_section::_L2 */
  static kcg_bool _L2;
  /* SDM_Input_Wrappers::ConvertGradient_section::_L3 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* SDM_Input_Wrappers::ConvertGradient_section::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* SDM_Input_Wrappers::ConvertGradient_section::_L5 */
  static G_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* SDM_Input_Wrappers::ConvertGradient_section::_L6 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L6;
  /* SDM_Input_Wrappers::ConvertGradient_section::_L7 */
  static L_internal_real_Type_SDM_Types_Pkg _L7;
  /* SDM_Input_Wrappers::ConvertGradient_section::_L9 */
  static Gradient_section_t_TrackAtlasTypes _L9;
  /* SDM_Input_Wrappers::ConvertGradient_section::_L10 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L10;
  /* SDM_Input_Wrappers::ConvertGradient_section::_L11 */
  static kcg_real _L11;
  
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L9, Gradient_section_ext);
  _L10 = _L9.L_Gradient;
  _L5 = _L9.Gradient;
  _L4 = _L9.Loc_LRBG;
  _L3 = _L9.Loc_Absolute;
  _L2 = _L9.valid;
  _L7 = /* 1 */ TransformL_intToL_real_SDM_Types_Pkg(_L3);
  _L11 = (kcg_real) _L5;
  _L6.location = _L7;
  _L6.gradient = _L11;
  _L6.valid = _L2;
  kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
    Gradient_section_int,
    &_L6);
  noname = _L4;
  _1_noname = _L10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertGradient_section_SDM_Input_Wrappers.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

