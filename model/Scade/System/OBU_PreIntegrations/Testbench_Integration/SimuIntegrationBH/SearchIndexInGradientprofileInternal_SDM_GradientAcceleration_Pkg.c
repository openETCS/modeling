/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal */
void SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::index */ kcg_int index,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::indexOfPosition */ kcg_int indexOfPosition,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::position */ L_internal_real_Type_SDM_Types_Pkg position,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::cond */ kcg_bool *cond,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::indexOfPositionOut */ kcg_int *indexOfPositionOut)
{
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::_L1 */
  static kcg_int _L1;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::_L2 */
  static kcg_int _L2;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::_L3 */
  static L_internal_real_Type_SDM_Types_Pkg _L3;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::_L4 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L4;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::_L5 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L5;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::_L6 */
  static kcg_int _L6;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::_L9 */
  static kcg_bool _L9;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::_L10 */
  static kcg_bool _L10;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::_L11 */
  static kcg_bool _L11;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::_L12 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L12;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::_L13 */
  static kcg_real _L13;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::_L14 */
  static kcg_bool _L14;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::_L15 */
  static L_internal_real_Type_SDM_Types_Pkg _L15;
  
  _L1 = index;
  _L2 = indexOfPosition;
  _L3 = position;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L4,
    GradientProfile);
  _L13 = 0.0;
  _L14 = kcg_false;
  _L12.location = _L13;
  _L12.gradient = _L13;
  _L12.valid = _L14;
  if ((0 <= _L1) & (_L1 < 50)) {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      &_L5,
      &_L4[_L1]);
  }
  else {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      &_L5,
      &_L12);
  }
  _L15 = _L5.location;
  _L9 = _L3 >= _L15;
  _L11 = _L5.valid;
  _L10 = _L9 & _L11;
  /* 1 */ if (_L10) {
    _L6 = _L1;
  }
  else {
    _L6 = _L2;
  }
  *indexOfPositionOut = _L6;
  *cond = _L10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

