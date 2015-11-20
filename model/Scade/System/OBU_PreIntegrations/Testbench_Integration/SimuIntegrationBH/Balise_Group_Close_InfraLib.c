/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_Close_InfraLib.h"

/* InfraLib::Balise_Group_Close */
void Balise_Group_Close_InfraLib(
  /* InfraLib::Balise_Group_Close::BG_internal_in */ B_data_internal_T_InfraLib *BG_internal_in,
  /* InfraLib::Balise_Group_Close::BG_message_in */ CompressedBaliseMessage_TM *BG_message_in,
  /* InfraLib::Balise_Group_Close::Error_out */ kcg_bool *Error_out,
  /* InfraLib::Balise_Group_Close::BG_message_out */ CompressedBaliseMessage_TM *BG_message_out)
{
  /* InfraLib::Balise_Group_Close::_L2 */
  static CompressedBaliseMessage_TM _L2;
  /* InfraLib::Balise_Group_Close::_L20 */
  static CompressedBaliseMessage_TM _L20;
  /* InfraLib::Balise_Group_Close::_L21 */
  static B_data_internal_T_InfraLib _L21;
  /* InfraLib::Balise_Group_Close::_L22 */
  static BaliseTelegramHeader_int_T_TM _L22;
  /* InfraLib::Balise_Group_Close::_L23 */
  static CompressedPackets_T_Common_Types_Pkg _L23;
  /* InfraLib::Balise_Group_Close::_L24 */
  static CompressedBaliseMessage_TM _L24;
  /* InfraLib::Balise_Group_Close::_L25 */
  static kcg_bool _L25;
  /* InfraLib::Balise_Group_Close::_L26 */
  static kcg_bool _L26;
  
  kcg_copy_CompressedBaliseMessage_TM(&_L2, BG_message_in);
  kcg_copy_B_data_internal_T_InfraLib(&_L21, BG_internal_in);
  _L25 = _L21.balise_passed;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&_L22, &_L21.header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L23, &_L21.packets);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&_L20.Header, &_L22);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L20.Messages, &_L23);
  /* 1 */ if (_L25) {
    kcg_copy_CompressedBaliseMessage_TM(&_L24, &_L20);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(&_L24, &_L2);
  }
  kcg_copy_CompressedBaliseMessage_TM(BG_message_out, &_L24);
  _L26 = kcg_false;
  *Error_out = _L26;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Group_Close_InfraLib.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

