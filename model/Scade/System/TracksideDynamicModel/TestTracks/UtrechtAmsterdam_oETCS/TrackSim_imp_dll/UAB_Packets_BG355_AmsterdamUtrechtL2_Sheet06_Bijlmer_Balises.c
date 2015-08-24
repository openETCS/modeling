/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_Packets_BG355_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.h"

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG355 */
void UAB_Packets_BG355_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG355::Header */UAB_BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG355::Balise_data_in */UAB_B_data_internal_T_InfraLib *Balise_data_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG355::Balise_data_out */UAB_B_data_internal_T_InfraLib *Balise_data_out)
{
  static UAB_CompressedPackets_T_Common_Types_Pkg tmp1;
  static UAB_CompressedPackets_T_Common_Types_Pkg tmp;
  
  UAB_kcg_copy_B_data_internal_T_InfraLib(Balise_data_out, Balise_data_in);
  UAB_kcg_copy_BaliseTelegramHeader_int_T_TM(
    &(*Balise_data_out).header,
    Header);
  /* 1 */
  UAB_Send_P042_MessageLibBaseline2(
    &(*Balise_data_in).packets,
    (UAB_P042_trackside_int_T_TM *) &UAB_BG355_P042_Packets426,
    &tmp);
  /* 1 */
  UAB_Send_P046_MessageLibBaseline2(
    &tmp,
    (UAB_P046_trackside_int_T_TM *) &UAB_BG355_P046_Packets426,
    &tmp1);
  /* 2 */
  UAB_Send_P255_MessageLibBaseline2(
    &tmp1,
    (UAB_P255_trackside_int_T_TM *) &UAB_BGXXX_P255_Packets426,
    &(*Balise_data_out).packets);
  (*Balise_data_out).balise_passed = kcg_true;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Packets_BG355_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.c
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

