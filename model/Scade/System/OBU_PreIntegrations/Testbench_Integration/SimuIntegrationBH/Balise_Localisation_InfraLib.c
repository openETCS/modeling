/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Localisation_InfraLib.h"

/* InfraLib::Balise_Localisation */
void Balise_Localisation_InfraLib(
  /* InfraLib::Balise_Localisation::B_data_in */ B_data_internal_T_InfraLib *B_data_in,
  /* InfraLib::Balise_Localisation::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* InfraLib::Balise_Localisation::PIG_nom */ kcg_int PIG_nom,
  /* InfraLib::Balise_Localisation::PIG_0_out */ kcg_int *PIG_0_out,
  /* InfraLib::Balise_Localisation::TrainPass */ kcg_bool *TrainPass)
{
  /* math::Min::Mi_Output */
  static kcg_real Mi_Output_1;
  /* math::Min::I2 */
  static kcg_real I2_1;
  /* math::Min::I1 */
  static kcg_real I1_1;
  /* math::Min::_L25 */
  static kcg_bool _L25_1;
  /* math::Min::_L24 */
  static kcg_real _L24_1;
  /* math::Min::_L22 */
  static kcg_real _L22_1;
  /* math::Min::_L21 */
  static kcg_real _L21_1;
  static kcg_int noname;
  /* InfraLib::Balise_Localisation::_L15 */
  static kcg_int _L15;
  /* InfraLib::Balise_Localisation::_L16 */
  static BaliseTelegramHeader_int_T_TM _L16;
  /* InfraLib::Balise_Localisation::_L47 */
  static kcg_int _L47;
  /* InfraLib::Balise_Localisation::_L48 */
  static kcg_int _L48;
  /* InfraLib::Balise_Localisation::_L50 */
  static kcg_bool _L50;
  /* InfraLib::Balise_Localisation::_L51 */
  static kcg_int _L51;
  /* InfraLib::Balise_Localisation::_L52 */
  static kcg_int _L52;
  /* InfraLib::Balise_Localisation::_L65 */
  static B_data_internal_T_InfraLib _L65;
  /* InfraLib::Balise_Localisation::_L66 */
  static kcg_int _L66;
  /* InfraLib::Balise_Localisation::_L73 */
  static kcg_real _L73;
  /* InfraLib::Balise_Localisation::_L71 */
  static B_data_internal_T_InfraLib _L71;
  /* InfraLib::Balise_Localisation::_L68 */
  static kcg_int _L68;
  /* InfraLib::Balise_Localisation::_L75 */
  static kcg_real _L75;
  /* InfraLib::Balise_Localisation::_L76 */
  static kcg_real _L76;
  /* InfraLib::Balise_Localisation::_L77 */
  static kcg_real _L77;
  /* InfraLib::Balise_Localisation::_L82 */
  static kcg_real _L82;
  /* InfraLib::Balise_Localisation::_L90 */
  static kcg_real _L90;
  /* InfraLib::Balise_Localisation::_L91 */
  static kcg_real _L91;
  /* InfraLib::Balise_Localisation::_L92 */
  static kcg_real _L92;
  /* InfraLib::Balise_Localisation::_L93 */
  static kcg_real _L93;
  /* InfraLib::Balise_Localisation::_L94 */
  static kcg_bool _L94;
  /* InfraLib::Balise_Localisation::_L95 */
  static kcg_bool _L95;
  /* InfraLib::Balise_Localisation::_L96 */
  static kcg_bool _L96;
  
  _L15 = 0;
  noname = _L15;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&_L16, Header);
  _L47 = _L16.n_pig;
  _L48 = PIG_nom;
  _L51 = 0;
  _L50 = _L48 == _L51;
  kcg_copy_B_data_internal_T_InfraLib(&_L65, B_data_in);
  _L66 = _L65.pig_nom_0;
  /* 1 */ if (_L50) {
    _L52 = _L47;
  }
  else {
    _L52 = _L66;
  }
  *PIG_0_out = _L52;
  kcg_copy_B_data_internal_T_InfraLib(&_L71, B_data_in);
  _L68 = _L71.engineering_BG_location;
  _L75 = /* 1 */ Balise_Interdistance_InfraLib(_L52, _L47);
  _L77 = /* 1 */ TOOLS_convert_engineering_location_TM_conversions(_L68);
  _L76 = _L75 + _L77;
  _L82 = Half_Distance_Balises_in_BG_InfraLib;
  I1_1 = _L82;
  _L21_1 = I1_1;
  _L92 = ReleaseDelta_InfraLib;
  I2_1 = _L92;
  _L22_1 = I2_1;
  _L25_1 = _L21_1 <= _L22_1;
  /* 1 */ if (_L25_1) {
    _L24_1 = _L21_1;
  }
  else {
    _L24_1 = _L22_1;
  }
  Mi_Output_1 = _L24_1;
  _L93 = Mi_Output_1;
  _L90 = _L76 + _L93;
  _L73 = _L71.TrainPos;
  _L95 = _L90 > _L73;
  _L91 = _L76 - _L93;
  _L94 = _L91 <= _L73;
  _L96 = _L95 & _L94;
  *TrainPass = _L96;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Localisation_InfraLib.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

