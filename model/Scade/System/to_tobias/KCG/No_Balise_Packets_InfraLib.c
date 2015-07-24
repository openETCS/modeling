/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "No_Balise_Packets_InfraLib.h"

/* InfraLib::No_Balise_Packets */
void No_Balise_Packets_InfraLib(
  /* InfraLib::No_Balise_Packets::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* InfraLib::No_Balise_Packets::Balise_data_in */B_data_internal_T_InfraLib *Balise_data_in,
  /* InfraLib::No_Balise_Packets::Balise_data_out */B_data_internal_T_InfraLib *Balise_data_out)
{
  kcg_copy_B_data_internal_T_InfraLib(Balise_data_out, Balise_data_in);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&(*Balise_data_out).header, Header);
  (*Balise_data_out).balise_passed = kcg_true;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** No_Balise_Packets_InfraLib.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

