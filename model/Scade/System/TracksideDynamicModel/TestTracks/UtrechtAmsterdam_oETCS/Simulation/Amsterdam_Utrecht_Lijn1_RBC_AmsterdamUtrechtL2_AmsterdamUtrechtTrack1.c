/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"

void Amsterdam_Utrecht_Lijn1_RBC_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  outC_Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC)
{
  /* 1 */ RBC_close_reset_RadioLib(&outC->_12_Context_1);
  /* 1 */
  RBC_Sheet15_MaarssenUtrechtCS_reset_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &outC->_11_Context_1);
  /* 1 */
  RBC_Sheet14_Maarssen_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &outC->_10_Context_1);
  /* 1 */
  RBC_Sheet13_Breukelen_Maa_reset_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &outC->_9_Context_1);
  /* 1 */
  RBC_Sheet12_Breukelen_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &outC->_8_Context_1);
  /* 1 */
  RBC_Sheet11_BreukelenKeer_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_7_Context_1);
  /* 1 */
  RBC_Sheet09_AbcoudeBreukelen_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &outC->_6_Context_1);
  /* 1 */
  RBC_Sheet08B_Abcoude_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &outC->_5_Context_1);
  /* 1 */
  RBC_Sheet08A_Abcoude_reset_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
    &outC->_4_Context_1);
  /* 1 */
  RBC_Sheet07_BijlmerAbcoude_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &outC->_3_Context_1);
  /* 1 */
  RBC_Sheet06_Bijlmer_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_2_Context_1);
  /* 1 */
  RBC_Sheet05_Amstel_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->_1_Context_1);
  /* 1 */ RBC_init_reset_RadioLib(&outC->Context_1);
}

/* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC */
void Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Message_in */M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Packets_in */CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Trigger_in */kcg_int _1_Trigger_in,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Message_sent */kcg_bool Message_sent,
  outC_Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC)
{
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L3, Message_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L4, Packets_in);
  outC->_L5 = _1_Trigger_in;
  outC->_L6 = Message_sent;
  /* 1 */
  RBC_init_RadioLib(
    &outC->_L3,
    &outC->_L4,
    outC->_L5,
    outC->_L6,
    &outC->Context_1);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L7, &outC->Context_1.R_data_out);
  /* 1 */
  RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->_L7,
    &outC->_1_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->_1_Context_1.R_data_out);
  /* 1 */
  RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L2,
    &outC->_2_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L1,
    &outC->_2_Context_1.R_data_out);
  /* 1 */
  RBC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &outC->_L1,
    &outC->_3_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L10,
    &outC->_3_Context_1.R_data_out);
  /* 1 */
  RBC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
    &outC->_L10,
    &outC->_4_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L11,
    &outC->_4_Context_1.R_data_out);
  /* 1 */
  RBC_Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &outC->_L11,
    &outC->_5_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L12,
    &outC->_5_Context_1.R_data_out);
  /* 1 */
  RBC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &outC->_L12,
    &outC->_6_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L13,
    &outC->_6_Context_1.R_data_out);
  /* 1 */
  RBC_Sheet11_BreukelenKeer_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L13,
    &outC->_7_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L14,
    &outC->_7_Context_1.R_data_out);
  /* 1 */
  RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &outC->_L14,
    &outC->_8_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L15,
    &outC->_8_Context_1.R_data_out);
  /* 1 */
  RBC_Sheet13_Breukelen_Maa_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &outC->_L15,
    &outC->_9_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L16,
    &outC->_9_Context_1.R_data_out);
  /* 1 */
  RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &outC->_L16,
    &outC->_10_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L17,
    &outC->_10_Context_1.R_data_out);
  /* 1 */
  RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &outC->_L17,
    &outC->_11_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L18,
    &outC->_11_Context_1.R_data_out);
  /* 1 */ RBC_close_RadioLib(&outC->_L18, &outC->_12_Context_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L8,
    &outC->_12_Context_1.Message_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L9,
    &outC->_12_Context_1.Packets_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->Packets_out, &outC->_L9);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->Message_out,
    &outC->_L8);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

