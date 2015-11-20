/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Packets_BG14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Packets_BG14_200 */
void Packets_BG14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Packets_BG14_200::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Packets_BG14_200::Balise_data_in */B_data_internal_T_InfraLib *Balise_data_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Packets_BG14_200::Balise_data_out */B_data_internal_T_InfraLib *Balise_data_out)
{
  static CompressedPackets_T_Common_Types_Pkg tmp1;
  static CompressedPackets_T_Common_Types_Pkg tmp;
  
  kcg_copy_B_data_internal_T_InfraLib(Balise_data_out, Balise_data_in);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&(*Balise_data_out).header, Header);
  /* 1 */
  Send_P042_MessageLibBaseline2(
    &(*Balise_data_in).packets,
    (P042_trackside_int_T_TM *) &BG200_P042_N_Packets_Sim,
    &tmp);
  /* 2 */
  Send_P042_MessageLibBaseline2(
    &tmp,
    (P042_trackside_int_T_TM *) &BG200_P042_R_Packets_Sim,
    &tmp1);
  /* 1 */
  Send_P046_MessageLibBaseline2(
    &tmp1,
    (P046_trackside_int_T_TM *) &BG200_P046_N_Packets_Sim,
    &tmp);
  /* 2 */
  Send_P046_MessageLibBaseline2(
    &tmp,
    (P046_trackside_int_T_TM *) &BG200_P046_R_Packets_Sim,
    &tmp1);
  /* 1 */
  Send_P003V1_MessageLibBaseline2(
    &tmp1,
    (P003V1_trackside_int_T_TM_baseline2 *) &BG200_P003_Packets_Sim,
    &tmp);
  /* 1 */
  Send_P255_MessageLibBaseline2(
    &tmp,
    (P255_trackside_int_T_TM *) &BGxxx_P255_Packets426,
    &(*Balise_data_out).packets);
  (*Balise_data_out).balise_passed = kcg_true;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Packets_BG14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

