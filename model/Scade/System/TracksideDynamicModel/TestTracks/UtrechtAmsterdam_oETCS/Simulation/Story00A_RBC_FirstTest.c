/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Story00A_RBC_FirstTest.h"

void Story00A_RBC_reset_FirstTest(outC_Story00A_RBC_FirstTest *outC)
{
  /* 1 */ DIRTY_m_version_filter_fo_reset_TM_specific(&outC->_3_Context_1);
  /* 1 */ C_TrackTrainMessage_to_Int_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */
  compressed_to_Radio_Track_reset_TM_RBC_conversions(&outC->_1_Context_1);
  /* 1 */
  Amsterdam_Utrecht_Sheet06_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_1);
}

/* FirstTest::Story00A_RBC */
void Story00A_RBC_FirstTest(
  /* FirstTest::Story00A_RBC::Trigger_in */kcg_int Trigger_in,
  outC_Story00A_RBC_FirstTest *outC)
{
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L6,
    (M_TrackTrain_Radio_T_TM_radio_messages *) &no_message_US_Integration_June);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L5,
    (CompressedPackets_T_Common_Types_Pkg *) &no_packets_US_Integration_June);
  outC->_L4 = Trigger_in;
  outC->_L3 = kcg_false;
  /* 1 */
  Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L6,
    &outC->_L5,
    outC->_L4,
    outC->_L3,
    &outC->Context_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L13,
    &outC->Context_1.Message_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L14,
    &outC->Context_1.Packets_out);
  /* 1 */
  compressed_to_Radio_Track_TM_RBC_conversions(
    &outC->_L13,
    &outC->_1_Context_1);
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
    &outC->_L14);
  /* 1 */
  DIRTY_m_version_filter_fo_TM_specific(&outC->_L9, &outC->_3_Context_1);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L10,
    &outC->_3_Context_1.RadioMessage_out);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->Compressed_Radio_Message_out,
    &outC->_L10);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Compressed_Packets_out,
    &outC->_L14);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->RadioTrackTrainHeader_out,
    &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Story00A_RBC_FirstTest.c
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

