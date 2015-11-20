/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "No_Balise_Packets_InfraLib.h"

/* InfraLib::No_Balise_Packets */
void No_Balise_Packets_InfraLib(
  /* InfraLib::No_Balise_Packets::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* InfraLib::No_Balise_Packets::Balise_data_in */ B_data_internal_T_InfraLib *Balise_data_in,
  /* InfraLib::No_Balise_Packets::Balise_data_out */ B_data_internal_T_InfraLib *Balise_data_out)
{
  /* InfraLib::No_Balise_Packets::_L36 */
  static B_data_internal_T_InfraLib _L36;
  /* InfraLib::No_Balise_Packets::_L35 */
  static kcg_bool _L35;
  /* InfraLib::No_Balise_Packets::_L32 */
  static BaliseTelegramHeader_int_T_TM _L32;
  /* InfraLib::No_Balise_Packets::_L31 */
  static B_data_internal_T_InfraLib _L31;
  /* InfraLib::No_Balise_Packets::_L30 */
  static B_data_internal_T_InfraLib _L30;
  
  kcg_copy_B_data_internal_T_InfraLib(&_L30, Balise_data_in);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&_L32, Header);
  kcg_copy_B_data_internal_T_InfraLib(&_L36, &_L30);
  if (kcg_true) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(&_L36.header, &_L32);
  }
  _L35 = kcg_true;
  kcg_copy_B_data_internal_T_InfraLib(&_L31, &_L36);
  if (kcg_true) {
    _L31.balise_passed = _L35;
  }
  kcg_copy_B_data_internal_T_InfraLib(Balise_data_out, &_L31);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** No_Balise_Packets_InfraLib.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

