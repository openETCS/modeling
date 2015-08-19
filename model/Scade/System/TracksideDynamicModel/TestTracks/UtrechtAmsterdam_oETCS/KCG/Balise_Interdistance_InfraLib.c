/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Interdistance_InfraLib.h"

/* InfraLib::Balise_Interdistance */
kcg_real Balise_Interdistance_InfraLib(
  /* InfraLib::Balise_Interdistance::pig0 */kcg_int pig0,
  /* InfraLib::Balise_Interdistance::n_pig */kcg_int n_pig)
{
  static kcg_real tmp1;
  static kcg_real tmp;
  /* InfraLib::Balise_Interdistance::_L11 */
  static kcg_int _L11;
  /* InfraLib::Balise_Interdistance::distance_BB */
  static kcg_real distance_BB;
  
  _L11 = n_pig - pig0;
  if (0 <= _L11) {
    tmp1 = (kcg_real) _L11;
  }
  else {
    tmp1 = (kcg_real) - _L11;
  }
  if (pig0 == 0) {
    tmp = 1.0;
  }
  else {
    tmp = - 1.0;
  }
  distance_BB = tmp1 * (tmp * Distance_Balises_in_BG_InfraLib);
  return distance_BB;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Interdistance_InfraLib.c
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

