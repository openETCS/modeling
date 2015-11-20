/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "popLeadingArc_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc */
void popLeadingArc_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::oldBC */ParabolaCurve_T_CalcBrakingCurves_types *oldBC,
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::newBC */ParabolaCurve_T_CalcBrakingCurves_types *newBC)
{
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L17 */
  static array_bool_1 _L17;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L28 */
  static array_real_1 _L28;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L40 */
  static array_real_1 _L40;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L41 */
  static array_real_1 _L41;
  
  _L41[0] = 0.0;
  _L40[0] = 0.0;
  _L28[0] = 0.0;
  _L17[0] = kcg_false;
  kcg_copy_array_real_113(
    &(*newBC).distances[0],
    (array_real_113 *) &(*oldBC).distances[1]);
  kcg_copy_array_real_1(&(*newBC).distances[113], &_L41);
  kcg_copy_array_real_113(
    &(*newBC).speeds[0],
    (array_real_113 *) &(*oldBC).speeds[1]);
  kcg_copy_array_real_1(&(*newBC).speeds[113], &_L40);
  kcg_copy_array_real_113(
    &(*newBC).accelerations[0],
    (array_real_113 *) &(*oldBC).accelerations[1]);
  kcg_copy_array_real_1(&(*newBC).accelerations[113], &_L28);
  kcg_copy_array_bool_113(
    &(*newBC).valid[0],
    (array_bool_113 *) &(*oldBC).valid[1]);
  kcg_copy_array_bool_1(&(*newBC).valid[113], &_L17);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** popLeadingArc_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

