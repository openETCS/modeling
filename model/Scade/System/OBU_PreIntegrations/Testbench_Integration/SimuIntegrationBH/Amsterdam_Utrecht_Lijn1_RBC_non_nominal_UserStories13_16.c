/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16.h"

/* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal */
void Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16(
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::Message_in */ M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::Packets_in */ CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::Trigger_in */ kcg_int Trigger_in,
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::Message_sent */ kcg_bool Message_sent,
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::Message_out */ M_TrackTrain_Radio_T_TM_radio_messages *Message_out,
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::Packets_out */ CompressedPackets_T_Common_Types_Pkg *Packets_out)
{
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::_L2 */
  static R_data_internal_T_InfraLib _L2;
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::_L3 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L3;
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::_L4 */
  static CompressedPackets_T_Common_Types_Pkg _L4;
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::_L5 */
  static kcg_int _L5;
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::_L6 */
  static kcg_bool _L6;
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::_L7 */
  static R_data_internal_T_InfraLib _L7;
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::_L9 */
  static CompressedPackets_T_Common_Types_Pkg _L9;
  /* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal::_L8 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L8;
  
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_L3, Message_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L4, Packets_in);
  _L5 = Trigger_in;
  _L6 = Message_sent;
  /* 1 */ RBC_init_RadioLib(&_L3, &_L4, _L5, _L6, &_L7);
  /* 1 */ RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(&_L7, &_L2);
  /* 1 */ RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13(&_L2, &_L1);
  /* 1 */ RBC_close_RadioLib(&_L1, &_L8, &_L9);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(Message_out, &_L8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Packets_out, &_L9);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

