/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "iterateASafeRow_SDMModelPkg.h"

/* SDMModelPkg::iterateASafeRow */
void iterateASafeRow_SDMModelPkg(
  /* SDMModelPkg::iterateASafeRow::last_gradient */ A_internal_real_Type_SDM_Types_Pkg last_gradient,
  /* SDMModelPkg::iterateASafeRow::A */ A_internal_real_Type_SDM_Types_Pkg A,
  /* SDMModelPkg::iterateASafeRow::AGradient */ A_gradient_element_t_SDM_GradientAcceleration_types *AGradient,
  /* SDMModelPkg::iterateASafeRow::keep_gradient */ A_internal_real_Type_SDM_Types_Pkg *keep_gradient,
  /* SDMModelPkg::iterateASafeRow::A_graded */ A_internal_real_Type_SDM_Types_Pkg *A_graded)
{
  /* SDMModelPkg::iterateASafeRow::_L1 */
  static A_internal_real_Type_SDM_Types_Pkg _L1;
  /* SDMModelPkg::iterateASafeRow::_L2 */
  static A_gradient_element_t_SDM_GradientAcceleration_types _L2;
  /* SDMModelPkg::iterateASafeRow::_L3 */
  static kcg_real _L3;
  /* SDMModelPkg::iterateASafeRow::_L4 */
  static kcg_bool _L4;
  /* SDMModelPkg::iterateASafeRow::_L5 */
  static A_internal_real_Type_SDM_Types_Pkg _L5;
  /* SDMModelPkg::iterateASafeRow::_L6 */
  static A_internal_real_Type_SDM_Types_Pkg _L6;
  /* SDMModelPkg::iterateASafeRow::_L7 */
  static A_internal_real_Type_SDM_Types_Pkg _L7;
  
  _L1 = A;
  kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types(&_L2, AGradient);
  _L4 = _L2.valid;
  _L5 = _L2.gradient_acceleration;
  _L7 = last_gradient;
  /* 1 */ if (_L4) {
    _L6 = _L5;
  }
  else {
    _L6 = _L7;
  }
  _L3 = _L6 + _L1;
  *A_graded = _L3;
  *keep_gradient = _L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** iterateASafeRow_SDMModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

