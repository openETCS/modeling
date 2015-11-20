/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "lowestGradient_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::lowestGradient */
void lowestGradient_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::lowestGradient::Index */ kcg_int Index,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::lowestGradientAccu */ Gradient_real_t_SDM_GradientAcceleration_types lowestGradientAccu,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::BeginIndex */ kcg_int BeginIndex,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::EndIndex */ kcg_int EndIndex,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::cond */ kcg_bool *cond,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::lowestGradientOut */ Gradient_real_t_SDM_GradientAcceleration_types *lowestGradientOut)
{
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L1 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L1;
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L3 */
  static kcg_int _L3;
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L4 */
  static Gradient_real_t_SDM_GradientAcceleration_types _L4;
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L5 */
  static kcg_int _L5;
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L6 */
  static kcg_bool _L6;
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L9 */
  static kcg_bool _L9;
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L10 */
  static kcg_int _L10;
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L15 */
  static Gradient_real_t_SDM_GradientAcceleration_types _L15;
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L16 */
  static kcg_bool _L16;
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L17 */
  static kcg_bool _L17;
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L18 */
  static Gradient_real_t_SDM_GradientAcceleration_types _L18;
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L19 */
  static kcg_int _L19;
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L20 */
  static kcg_int _L20;
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L22 */
  static kcg_int _L22;
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L23 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L23;
  
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L1,
    GradientProfile);
  _L3 = EndIndex;
  _L4 = lowestGradientAccu;
  _L10 = Index;
  _L22 = BeginIndex;
  /* selectGradientOffset */
  selectGradientOffset_SDM_GradientAcceleration_Pkg(&_L1, _L10, _L22, &_L23);
  _L17 = _L23.valid;
  _L15 = _L23.gradient;
  _L9 = _L15 < _L4;
  _L16 = _L17 & _L9;
  /* 1 */ if (_L16) {
    _L18 = _L15;
  }
  else {
    _L18 = _L4;
  }
  *lowestGradientOut = _L18;
  _L5 = Index;
  _L20 = BeginIndex;
  _L19 = _L5 + _L20;
  _L6 = _L19 < _L3;
  *cond = _L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** lowestGradient_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

