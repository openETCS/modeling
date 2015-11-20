/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DistanceToNextStep_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::DistanceToNextStep */
void DistanceToNextStep_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::position */ L_internal_real_Type_SDM_Types_Pkg position,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::relatedIndex */ kcg_int relatedIndex,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::distance */ L_internal_real_Type_SDM_Types_Pkg *distance,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::validDistance */ kcg_bool *validDistance)
{
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::_L3 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L3;
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::_L2 */
  static kcg_int _L2;
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::_L1 */
  static L_internal_real_Type_SDM_Types_Pkg _L1;
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::_L4 */
  static kcg_real _L4;
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::_L5 */
  static L_internal_real_Type_SDM_Types_Pkg _L5;
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::_L6 */
  static kcg_int _L6;
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::_L13 */
  static kcg_bool _L13;
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::_L15 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L15;
  
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L3,
    GradientProfile);
  _L2 = relatedIndex;
  _L1 = position;
  _L6 = 1;
  /* 2 */
  selectGradientOffset_SDM_GradientAcceleration_Pkg(&_L3, _L2, _L6, &_L15);
  _L5 = _L15.location;
  _L4 = _L5 - _L1;
  *distance = _L4;
  _L13 = _L15.valid;
  *validDistance = _L13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DistanceToNextStep_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

