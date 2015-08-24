/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_No_Balise_Packets_InfraLib.h"

/* InfraLib::No_Balise_Packets */
void UAB_No_Balise_Packets_InfraLib(
  /* InfraLib::No_Balise_Packets::Header */UAB_BaliseTelegramHeader_int_T_TM *Header,
  /* InfraLib::No_Balise_Packets::Balise_data_in */UAB_B_data_internal_T_InfraLib *Balise_data_in,
  /* InfraLib::No_Balise_Packets::Balise_data_out */UAB_B_data_internal_T_InfraLib *Balise_data_out)
{
  UAB_kcg_copy_B_data_internal_T_InfraLib(Balise_data_out, Balise_data_in);
  UAB_kcg_copy_BaliseTelegramHeader_int_T_TM(
    &(*Balise_data_out).header,
    Header);
  (*Balise_data_out).balise_passed = kcg_true;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_No_Balise_Packets_InfraLib.c
** Generation date: 2015-08-20T20:42:33
*************************************************************$ */

