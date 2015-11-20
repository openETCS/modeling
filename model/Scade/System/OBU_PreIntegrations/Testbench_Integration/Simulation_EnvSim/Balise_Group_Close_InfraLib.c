/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_Close_InfraLib.h"

/* InfraLib::Balise_Group_Close */
void Balise_Group_Close_InfraLib(
  /* InfraLib::Balise_Group_Close::BG_internal_in */B_data_internal_T_InfraLib *BG_internal_in,
  /* InfraLib::Balise_Group_Close::BG_message_in */CompressedBaliseMessage_TM *BG_message_in,
  /* InfraLib::Balise_Group_Close::Error_out */kcg_bool *Error_out,
  /* InfraLib::Balise_Group_Close::BG_message_out */CompressedBaliseMessage_TM *BG_message_out)
{
  *Error_out = kcg_false;
  if ((*BG_internal_in).balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &(*BG_message_out).Header,
      &(*BG_internal_in).header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &(*BG_message_out).Messages,
      &(*BG_internal_in).packets);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(BG_message_out, BG_message_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_Close_InfraLib.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

