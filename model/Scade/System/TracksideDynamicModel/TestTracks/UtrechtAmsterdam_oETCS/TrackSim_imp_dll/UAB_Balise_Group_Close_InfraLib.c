/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_Balise_Group_Close_InfraLib.h"

/* InfraLib::Balise_Group_Close */
void UAB_Balise_Group_Close_InfraLib(
  /* InfraLib::Balise_Group_Close::BG_internal_in */UAB_B_data_internal_T_InfraLib *BG_internal_in,
  /* InfraLib::Balise_Group_Close::BG_message_in */UAB_CompressedBaliseMessage_TM *BG_message_in,
  /* InfraLib::Balise_Group_Close::Error_out */kcg_bool *Error_out,
  /* InfraLib::Balise_Group_Close::BG_message_out */UAB_CompressedBaliseMessage_TM *BG_message_out)
{
  *Error_out = kcg_false;
  if ((*BG_internal_in).balise_passed) {
    UAB_kcg_copy_BaliseTelegramHeader_int_T_TM(
      &(*BG_message_out).Header,
      &(*BG_internal_in).header);
    UAB_kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &(*BG_message_out).Messages,
      &(*BG_internal_in).packets);
  }
  else {
    UAB_kcg_copy_CompressedBaliseMessage_TM(BG_message_out, BG_message_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Balise_Group_Close_InfraLib.c
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

