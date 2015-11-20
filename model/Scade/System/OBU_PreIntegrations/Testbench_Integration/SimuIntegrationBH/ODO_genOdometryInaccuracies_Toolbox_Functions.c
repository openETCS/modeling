/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_genOdometryInaccuracies_Toolbox_Functions.h"

/* Toolbox::Functions::ODO_genOdometryInaccuracies */
void ODO_genOdometryInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::trueLocation */ L_internal_Type_Obu_BasicTypes_Pkg trueLocation,
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::odometryProperties */ odometryFactors_T_Toolbox *odometryProperties,
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::odometryLocations */ OdometryLocations_T_Obu_BasicTypes_Pkg *odometryLocations)
{
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L1 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1;
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L8 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L8;
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L16 */
  static kcg_real _L16;
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L17 */
  static kcg_int _L17;
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L18 */
  static kcg_int _L18;
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L19 */
  static kcg_int _L19;
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L20 */
  static kcg_real _L20;
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L21 */
  static kcg_real _L21;
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L22 */
  static kcg_real _L22;
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L33 */
  static odometryFactors_T_Toolbox _L33;
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L36 */
  static kcg_real _L36;
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L35 */
  static kcg_real _L35;
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L34 */
  static kcg_real _L34;
  
  _L1 = trueLocation;
  kcg_copy_odometryFactors_T_Toolbox(&_L33, odometryProperties);
  _L36 = _L33.o_nominal;
  _L16 = (kcg_real) _L1;
  _L20 = _L36 * _L16;
  _L17 = (kcg_int) _L20;
  _L35 = _L33.o_min;
  _L21 = _L35 * _L16;
  _L18 = (kcg_int) _L21;
  _L34 = _L33.o_max;
  _L22 = _L34 * _L16;
  _L19 = (kcg_int) _L22;
  _L8.o_nominal = _L17;
  _L8.o_min = _L18;
  _L8.o_max = _L19;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(odometryLocations, &_L8);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_genOdometryInaccuracies_Toolbox_Functions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

