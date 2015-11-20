/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "collectGradientLocations_SDMModelPkg.h"

/* SDMModelPkg::collectGradientLocations */
void collectGradientLocations_SDMModelPkg(
  /* SDMModelPkg::collectGradientLocations::last_loc */ L_internal_real_Type_SDM_Types_Pkg last_loc,
  /* SDMModelPkg::collectGradientLocations::Gsection */ A_gradient_element_t_SDM_GradientAcceleration_types *Gsection,
  /* SDMModelPkg::collectGradientLocations::location_ */ L_internal_real_Type_SDM_Types_Pkg *location_,
  /* SDMModelPkg::collectGradientLocations::location */ L_internal_real_Type_SDM_Types_Pkg *location)
{
  /* SDMModelPkg::collectGradientLocations::_L1 */
  static L_internal_real_Type_SDM_Types_Pkg _L1;
  /* SDMModelPkg::collectGradientLocations::_L2 */
  static A_gradient_element_t_SDM_GradientAcceleration_types _L2;
  /* SDMModelPkg::collectGradientLocations::_L9 */
  static kcg_bool _L9;
  /* SDMModelPkg::collectGradientLocations::_L10 */
  static L_internal_real_Type_SDM_Types_Pkg _L10;
  /* SDMModelPkg::collectGradientLocations::_L11 */
  static L_internal_real_Type_SDM_Types_Pkg _L11;
  
  _L1 = last_loc;
  kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types(&_L2, Gsection);
  _L9 = _L2.valid;
  _L10 = _L2.position;
  /* 1 */ if (_L9) {
    _L11 = _L10;
  }
  else {
    _L11 = _L1;
  }
  *location_ = _L11;
  *location = _L11;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** collectGradientLocations_SDMModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

