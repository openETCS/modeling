/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "selectGradientOffset_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::selectGradientOffset */
void selectGradientOffset_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::Index */ kcg_int Index,
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::Offset */ kcg_int Offset,
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::GradientSect */ Gradient_section_real_t_SDM_GradientAcceleration_types *GradientSect)
{
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::_L3 */
  static kcg_int _L3;
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::_L2 */
  static kcg_int _L2;
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::_L1 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L1;
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::_L4 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L4;
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::_L5 */
  static kcg_bool _L5;
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::_L6 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L6;
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::_L7 */
  static kcg_real _L7;
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::_L8 */
  static kcg_real _L8;
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::_L9 */
  static kcg_int _L9;
  
  _L3 = Offset;
  _L2 = Index;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L1,
    GradientProfile);
  _L8 = 0.0;
  _L7 = 0.0;
  _L5 = kcg_false;
  _L6.location = _L8;
  _L6.gradient = _L7;
  _L6.valid = _L5;
  _L9 = _L2 + _L3;
  if ((0 <= _L9) & (_L9 < 50)) {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      &_L4,
      &_L1[_L9]);
  }
  else {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(&_L4, &_L6);
  }
  kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
    GradientSect,
    &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** selectGradientOffset_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

