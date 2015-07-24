/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Localisation_InfraLib.h"

/* InfraLib::Balise_Localisation */
void Balise_Localisation_InfraLib(
  /* InfraLib::Balise_Localisation::B_data_in */B_data_internal_T_InfraLib *B_data_in,
  /* InfraLib::Balise_Localisation::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* InfraLib::Balise_Localisation::PIG_nom */kcg_int PIG_nom,
  /* InfraLib::Balise_Localisation::PIG_0_out */kcg_int *PIG_0_out,
  /* InfraLib::Balise_Localisation::TrainPass */kcg_bool *TrainPass)
{
  /* InfraLib::Balise_Localisation::_L76 */
  static kcg_real _L76;
  /* InfraLib::Balise_Localisation::_L93 */
  static kcg_real _L93;
  
  if (PIG_nom == 0) {
    *PIG_0_out = (*Header).n_pig;
  }
  else {
    *PIG_0_out = (*B_data_in).pig_nom_0;
  }
  _L76 = /* 1 */ Balise_Interdistance_InfraLib(*PIG_0_out, (*Header).n_pig) +
    /* 1 */
    TOOLS_convert_engineering_location_TM_conversions(
      (*B_data_in).engineering_BG_location);
  if (Half_Distance_Balises_in_BG_InfraLib <= ReleaseDelta_InfraLib) {
    _L93 = Half_Distance_Balises_in_BG_InfraLib;
  }
  else {
    _L93 = ReleaseDelta_InfraLib;
  }
  *TrainPass = (_L76 + _L93 > (*B_data_in).TrainPos) & (_L76 - _L93 <=
      (*B_data_in).TrainPos);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Localisation_InfraLib.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

