/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_405_1_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.h"

/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1 */
void Balise_405_1_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1::B_data_in */ B_data_internal_T_InfraLib *B_data_in,
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1::PIG_nom */ kcg_int PIG_nom,
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1::B_data_out */ B_data_internal_T_InfraLib *B_data_out)
{
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1 */
  static B_data_internal_T_InfraLib op_call;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1 */
  static kcg_bool ck_every;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1::_L2 */
  static kcg_bool _L2;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1::_L4 */
  static B_data_internal_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1::_L5 */
  static B_data_internal_T_InfraLib _L5;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1::_L15 */
  static B_data_internal_T_InfraLib _L15;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1::_L17 */
  static B_data_internal_T_InfraLib _L17;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1::_L19 */
  static BaliseTelegramHeader_int_T_TM _L19;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1::_L20 */
  static kcg_int _L20;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1::_L21 */
  static kcg_int _L21;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_405_1::_L23 */
  static BaliseTelegramHeader_int_T_TM _L23;
  
  kcg_copy_B_data_internal_T_InfraLib(&_L15, B_data_in);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&_L19, Header);
  _L20 = PIG_nom;
  /* 1 */ Balise_Localisation_InfraLib(&_L15, &_L19, _L20, &_L21, &_L2);
  ck_every = _L2;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&_L23, Header);
  kcg_copy_B_data_internal_T_InfraLib(&_L5, B_data_in);
  /* ck_Balise_405_1 */ if (ck_every) {
    /* 1 */
    Packets_BG405_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
      &_L23,
      &_L5,
      &op_call);
    kcg_copy_B_data_internal_T_InfraLib(&_L4, &op_call);
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L4, &_L5);
  }
  kcg_copy_B_data_internal_T_InfraLib(&_L17, &_L4);
  if (kcg_true) {
    _L17.pig_nom_0 = _L21;
  }
  kcg_copy_B_data_internal_T_InfraLib(B_data_out, &_L17);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_405_1_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

