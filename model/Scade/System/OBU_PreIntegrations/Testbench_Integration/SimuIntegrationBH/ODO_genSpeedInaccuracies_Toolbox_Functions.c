/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_genSpeedInaccuracies_Toolbox_Functions.h"

/* Toolbox::Functions::ODO_genSpeedInaccuracies */
void ODO_genSpeedInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::trueVelocity */ Speed_T_Obu_BasicTypes_Pkg trueVelocity,
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::odometryProperties */ odometryFactors_T_Toolbox *odometryProperties,
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::odometrySpeeds */ OdometrySpeeds_T_Obu_BasicTypes_Pkg *odometrySpeeds)
{
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L12 */
  static kcg_real _L12;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L11 */
  static kcg_int _L11;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L8 */
  static kcg_real _L8;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L7 */
  static kcg_int _L7;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L6 */
  static kcg_real _L6;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L2 */
  static kcg_real _L2;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L1 */
  static kcg_int _L1;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L13 */
  static OdometrySpeeds_T_Obu_BasicTypes_Pkg _L13;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L14 */
  static odometryFactors_T_Toolbox _L14;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L15 */
  static Speed_T_Obu_BasicTypes_Pkg _L15;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L16 */
  static kcg_real _L16;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L17 */
  static kcg_real _L17;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L18 */
  static kcg_int _L18;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L21 */
  static kcg_real _L21;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L20 */
  static kcg_real _L20;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L19 */
  static kcg_real _L19;
  
  kcg_copy_odometryFactors_T_Toolbox(&_L14, odometryProperties);
  _L20 = _L14.o_min;
  _L15 = trueVelocity;
  _L8 = (kcg_real) _L15;
  _L2 = _L20 * _L8;
  _L1 = (kcg_int) _L2;
  _L21 = _L14.o_nominal;
  _L6 = _L21 * _L8;
  _L19 = _L14.o_max;
  _L12 = _L19 * _L8;
  _L7 = (kcg_int) _L12;
  _L11 = (kcg_int) _L6;
  _L17 = 0.99;
  _L16 = _L17 * _L12;
  _L18 = (kcg_int) _L16;
  _L13.v_safeNominal = _L18;
  _L13.v_rawNominal = _L11;
  _L13.v_lower = _L1;
  _L13.v_upper = _L7;
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(odometrySpeeds, &_L13);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_genSpeedInaccuracies_Toolbox_Functions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

