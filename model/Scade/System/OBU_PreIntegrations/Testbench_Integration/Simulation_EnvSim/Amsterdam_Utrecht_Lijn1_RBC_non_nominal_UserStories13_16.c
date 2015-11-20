/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16.h"

/* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal */
void Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16(
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::Message_in */M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::Packets_in */CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::Trigger_in */kcg_int Trigger_in,
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::Message_sent */kcg_bool Message_sent,
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::Message_out */M_TrackTrain_Radio_T_TM_radio_messages *Message_out,
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::Packets_out */CompressedPackets_T_Common_Types_Pkg *Packets_out)
{
  static R_data_internal_T_InfraLib tmp1;
  static R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  RBC_init_RadioLib(Message_in, Packets_in, Trigger_in, Message_sent, &tmp1);
  /* 1 */ RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(&tmp1, &tmp);
  /* 1 */ RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13(&tmp, &tmp1);
  /* 1 */ RBC_close_RadioLib(&tmp1, Message_out, Packets_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16.c
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

