/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile */
kcg_int SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::position */ L_internal_real_Type_SDM_Types_Pkg position)
{
  static kcg_int i2;
  static kcg_int i1;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile */
  static kcg_int acc;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::_L2 */
  static L_internal_real_Type_SDM_Types_Pkg _L2;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::_L1 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L1;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::_L3 */
  static kcg_int _L3;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::_L4 */
  static kcg_int _L4;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::_L5 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L5;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::_L6 */
  static kcg_bool _L6;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::_L7 */
  static kcg_int _L7;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::_L8 */
  static array_real_50 _L8;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::_L9 */
  static array_170701 _L9;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::_L10 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L10;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::index */
  static kcg_int index;
  
  _L2 = position;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L1,
    GradientProfile);
  _L7 = - 1;
  /* pow */ for (i2 = 0; i2 < 50; i2++) {
    _L8[i2] = _L2;
  }
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L10,
    GradientProfile);
  /* pow */ for (i1 = 0; i1 < 50; i1++) {
    kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
      &_L9[i1],
      &_L10);
  }
  kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
    &_L5,
    &_L1[0]);
  _L6 = _L5.valid;
  _L4 = _L7;
  /* 1 */ if (_L6) {
    /* 1 */ for (i = 0; i < 50; i++) {
      acc = _L4;
      /* 1 */
      SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg(
        i,
        acc,
        _L8[i],
        &_L9[i],
        &cond_iterw,
        &_L4);
      _L3 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L3 = 0;
  }
  index = _L4;
  noname = _L3;
  return index;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

