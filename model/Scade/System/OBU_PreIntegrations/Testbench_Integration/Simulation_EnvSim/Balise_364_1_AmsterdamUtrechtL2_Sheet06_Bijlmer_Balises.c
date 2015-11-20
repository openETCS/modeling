/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_364_1_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.h"

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_364_1 */
void Balise_364_1_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_364_1::B_data_in */B_data_internal_T_InfraLib *B_data_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_364_1::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_364_1::PIG_nom */kcg_int PIG_nom,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_364_1::B_data_out */B_data_internal_T_InfraLib *B_data_out)
{
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_364_1::_L2 */
  static kcg_bool _L2;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_364_1::_L21 */
  static kcg_int _L21;
  
  /* 1 */ Balise_Localisation_InfraLib(B_data_in, Header, PIG_nom, &_L21, &_L2);
  if (_L2) {
    /* 1 */
    Packets_BG364_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
      Header,
      B_data_in,
      B_data_out);
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(B_data_out, B_data_in);
  }
  (*B_data_out).pig_nom_0 = _L21;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_364_1_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

