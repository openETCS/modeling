/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Packets_BG353_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Packets_BG353 */
void Packets_BG353_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Packets_BG353::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Packets_BG353::Balise_data_in */B_data_internal_T_InfraLib *Balise_data_in,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Packets_BG353::Balise_data_out */B_data_internal_T_InfraLib *Balise_data_out)
{
  static CompressedPackets_T_Common_Types_Pkg tmp1;
  static CompressedPackets_T_Common_Types_Pkg tmp;
  
  kcg_copy_B_data_internal_T_InfraLib(Balise_data_out, Balise_data_in);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&(*Balise_data_out).header, Header);
  /* 1 */
  Send_P042_MessageLibBaseline2(
    &(*Balise_data_in).packets,
    (P042_trackside_int_T_TM *) &BG353_P042_N_Packets426,
    &tmp);
  /* 2 */
  Send_P042_MessageLibBaseline2(
    &tmp,
    (P042_trackside_int_T_TM *) &BG353_P042_R_Packets426,
    &tmp1);
  /* 1 */
  Send_P255_MessageLibBaseline2(
    &tmp1,
    (P255_trackside_int_T_TM *) &BGXXX_P255_Packets426,
    &(*Balise_data_out).packets);
  (*Balise_data_out).balise_passed = kcg_true;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Packets_BG353_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

