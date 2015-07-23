/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_RBC_Int_US_Integration_June.h"

void Amsterdam_Utrecht_RBC_Int_reset_US_Integration_June(
  outC_Amsterdam_Utrecht_RBC_Int_US_Integration_June *outC)
{
  /* 1 */ C_TrackTrainMessage_to_Int_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */
  compressed_to_Radio_Track_reset_TM_RBC_conversions(&outC->_1_Context_1);
  /* 1 */
  Amsterdam_Utrecht_Lijn1_RBC_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    &outC->Context_1);
}

/* US_Integration_June::Amsterdam_Utrecht_RBC_Integration */
void Amsterdam_Utrecht_RBC_Int_US_Integration_June(
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Trigger_in */kcg_int _1_Trigger_in,
  outC_Amsterdam_Utrecht_RBC_Int_US_Integration_June *outC)
{
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L6,
    (M_TrackTrain_Radio_T_TM_radio_messages *) &no_message_US_Integration_June);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L5,
    (CompressedPackets_T_Common_Types_Pkg *) &no_packets_US_Integration_June);
  outC->_L4 = _1_Trigger_in;
  outC->_L3 = kcg_false;
  /* 1 */
  Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    &outC->_L6,
    &outC->_L5,
    outC->_L4,
    outC->_L3,
    &outC->Context_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L1,
    &outC->Context_1.Message_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L2,
    &outC->Context_1.Packets_out);
  /* 1 */
  compressed_to_Radio_Track_TM_RBC_conversions(&outC->_L1, &outC->_1_Context_1);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L7,
    &outC->_1_Context_1.Header_Out);
  /* 1 */
  C_TrackTrainMessage_to_Int_TM_conversions(&outC->_L7, &outC->_2_Context_1);
  kcg_copy__3_Radio_TrackTrain_Header_T_TM(
    &outC->_L8,
    &outC->_2_Context_1.Message_Out);
  kcg_copy__3_Radio_TrackTrain_Header_T_TM(&outC->_L9.Header, &outC->_L8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L9.Messages,
    &outC->_L2);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->Compressed_Radio_Message_out,
    &outC->_L9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Compressed_Packets_out,
    &outC->_L2);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->RadioTrackTrainHeader_out,
    &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_RBC_Int_US_Integration_June.c
** Generation date: 2015-07-21T17:55:35
*************************************************************$ */

