/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "iterateASafeData_SDMModelPkg.h"

/* SDMModelPkg::iterateASafeData */
void iterateASafeData_SDMModelPkg(
  /* SDMModelPkg::iterateASafeData::ASafeRows */ ASafeRow_T_CalcBrakingCurves_types *ASafeRows,
  /* SDMModelPkg::iterateASafeData::AGradient */ A_gradient_t_SDM_GradientAcceleration_types *AGradient,
  /* SDMModelPkg::iterateASafeData::ASafeRows_graded */ ASafeRow_T_CalcBrakingCurves_types *ASafeRows_graded)
{
  /* SDMModelPkg::iterateASafeData */
  static kcg_real acc;
  static kcg_int i;
  static A_internal_real_Type_SDM_Types_Pkg noname;
  /* SDMModelPkg::iterateASafeData::_L1 */
  static ASafeRow_T_CalcBrakingCurves_types _L1;
  /* SDMModelPkg::iterateASafeData::_L2 */
  static A_gradient_t_SDM_GradientAcceleration_types _L2;
  /* SDMModelPkg::iterateASafeData::_L4 */
  static array_real_100 _L4;
  /* SDMModelPkg::iterateASafeData::_L5 */
  static A_internal_real_Type_SDM_Types_Pkg _L5;
  /* SDMModelPkg::iterateASafeData::_L7 */
  static kcg_real _L7;
  
  kcg_copy_ASafeRow_T_CalcBrakingCurves_types(&_L1, ASafeRows);
  kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(&_L2, AGradient);
  _L7 = 0.0;
  _L5 = _L7;
  /* 1 */ for (i = 0; i < 100; i++) {
    acc = _L5;
    /* 1 */ iterateASafeRow_SDMModelPkg(acc, _L1[i], &_L2[i], &_L5, &_L4[i]);
  }
  kcg_copy_ASafeRow_T_CalcBrakingCurves_types(ASafeRows_graded, &_L4);
  noname = _L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** iterateASafeData_SDMModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

