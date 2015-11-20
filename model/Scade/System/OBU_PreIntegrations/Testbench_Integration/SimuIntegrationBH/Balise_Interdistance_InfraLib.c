/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Interdistance_InfraLib.h"

/* InfraLib::Balise_Interdistance */
kcg_real Balise_Interdistance_InfraLib(
  /* InfraLib::Balise_Interdistance::pig0 */ kcg_int pig0,
  /* InfraLib::Balise_Interdistance::n_pig */ kcg_int n_pig)
{
  /* math::Abs::A_Output */
  static kcg_int A_Output_1;
  /* math::Abs::A_Input */
  static kcg_int A_Input_1;
  /* math::Abs::_L8 */
  static kcg_int _L8_1;
  /* math::Abs::_L5 */
  static kcg_int _L5_1;
  /* math::Abs::_L3 */
  static kcg_int _L3_1;
  /* math::Abs::_L2 */
  static kcg_int _L2_1;
  /* math::Abs::_L1 */
  static kcg_bool _L1_1;
  /* InfraLib::Balise_Interdistance::_L3 */
  static kcg_real _L3;
  /* InfraLib::Balise_Interdistance::_L6 */
  static kcg_int _L6;
  /* InfraLib::Balise_Interdistance::_L10 */
  static kcg_int _L10;
  /* InfraLib::Balise_Interdistance::_L11 */
  static kcg_int _L11;
  /* InfraLib::Balise_Interdistance::_L12 */
  static kcg_real _L12;
  /* InfraLib::Balise_Interdistance::_L13 */
  static kcg_int _L13;
  /* InfraLib::Balise_Interdistance::_L14 */
  static kcg_real _L14;
  /* InfraLib::Balise_Interdistance::distance_BB */
  static kcg_real distance_BB;
  
  _L8_1 = 0;
  _L10 = n_pig;
  _L6 = pig0;
  _L11 = _L10 - _L6;
  A_Input_1 = _L11;
  _L5_1 = A_Input_1;
  _L1_1 = _L8_1 <= _L5_1;
  _L3_1 = - _L5_1;
  /* 2 */ if (_L1_1) {
    _L2_1 = _L5_1;
  }
  else {
    _L2_1 = _L3_1;
  }
  A_Output_1 = _L2_1;
  _L13 = A_Output_1;
  _L14 = (kcg_real) _L13;
  _L3 = Distance_Balises_in_BG_InfraLib;
  _L12 = _L14 * _L3;
  distance_BB = _L12;
  return distance_BB;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Interdistance_InfraLib.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

