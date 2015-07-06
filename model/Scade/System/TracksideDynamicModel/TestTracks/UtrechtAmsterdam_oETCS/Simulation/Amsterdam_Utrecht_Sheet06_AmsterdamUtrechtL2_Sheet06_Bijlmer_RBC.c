/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"

void Amsterdam_Utrecht_Sheet06_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
{
  /* 1 */ RBC_close_reset_RadioLib(&outC->_1_Context_1);
  /* 2 */
  RBC_Sheet06_Bijlmer_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_2);
  /* 1 */ RBC_init_reset_RadioLib(&outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration */
void Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::Message_in */M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::Packets_in */CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::Trigger_in */kcg_int Trigger_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration::Message_sent */kcg_bool Message_sent,
  outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
{
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L3, Message_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L4, Packets_in);
  outC->_L5 = Trigger_in;
  outC->_L6 = Message_sent;
  /* 1 */
  RBC_init_RadioLib(
    &outC->_L3,
    &outC->_L4,
    outC->_L5,
    outC->_L6,
    &outC->Context_1);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L7, &outC->Context_1.R_data_out);
  /* 2 */
  RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L7,
    &outC->Context_2);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L2, &outC->Context_2.R_data_out);
  /* 1 */ RBC_close_RadioLib(&outC->_L2, &outC->_1_Context_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L8,
    &outC->_1_Context_1.Message_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L9,
    &outC->_1_Context_1.Packets_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->Packets_out, &outC->_L9);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->Message_out,
    &outC->_L8);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

