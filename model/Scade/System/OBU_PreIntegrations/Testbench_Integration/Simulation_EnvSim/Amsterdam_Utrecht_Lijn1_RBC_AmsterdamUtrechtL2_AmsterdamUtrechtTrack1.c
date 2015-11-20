/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"

/* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC */
void Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Message_in */M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Packets_in */CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Trigger_in */kcg_int Trigger_in,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Message_sent */kcg_bool Message_sent,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Message_out */M_TrackTrain_Radio_T_TM_radio_messages *Message_out,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Packets_out */CompressedPackets_T_Common_Types_Pkg *Packets_out)
{
  static R_data_internal_T_InfraLib tmp1;
  static R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  RBC_init_RadioLib(Message_in, Packets_in, Trigger_in, Message_sent, &tmp);
  /* 1 */ RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(&tmp, &tmp1);
  /* 1 */
  RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(&tmp1, &tmp);
  /* 1 */
  Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &tmp,
    &tmp1);
  /* 1 */ Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(&tmp1, &tmp);
  /* 1 */ Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(&tmp, &tmp1);
  /* 1 */
  Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &tmp1,
    &tmp);
  /* 1 */
  Sheet11_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &tmp,
    &tmp1);
  /* 1 */
  Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(&tmp1, &tmp);
  /* 1 */
  Sheet13_Breukelen_Maarssen_RBC_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &tmp,
    &tmp1);
  /* 1 */
  RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(&tmp1, &tmp);
  /* 1 */
  RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &tmp,
    &tmp1);
  /* 1 */ RBC_close_RadioLib(&tmp1, Message_out, Packets_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.c
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

