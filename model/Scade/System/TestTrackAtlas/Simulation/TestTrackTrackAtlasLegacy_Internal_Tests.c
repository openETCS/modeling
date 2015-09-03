/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestTrackTrackAtlasLegacy_Internal_Tests.h"

void TestTrackTrackAtlasLegacy_reset_Internal_Tests(
  outC_TestTrackTrackAtlasLegacy_Internal_Tests *outC)
{
  /* 1 */ C_TrackTrainMessage_to_Int_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */
  compressed_to_Radio_Track_reset_TM_RBC_conversions_legacy(
    &outC->_1_Context_1);
  /* 1 */ TestTrackTrackAtlas_reset_Internal_Tests(&outC->Context_1);
}

/* Internal_Tests::TestTrackTrackAtlasLegacy */
void TestTrackTrackAtlasLegacy_Internal_Tests(
  /* Internal_Tests::TestTrackTrackAtlasLegacy::Trigger_in */kcg_int Trigger_in,
  outC_TestTrackTrackAtlasLegacy_Internal_Tests *outC)
{
  outC->_L9 = Trigger_in;
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L8,
    (M_TrackTrain_Radio_T_TM_radio_messages *) &no_message_US_Integration_June);
  outC->_L7 = kcg_false;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L6,
    (CompressedPackets_T_Common_Types_Pkg *) &no_packets_US_Integration_June);
  /* 1 */
  TestTrackTrackAtlas_Internal_Tests(
    &outC->_L8,
    &outC->_L6,
    outC->_L9,
    outC->_L7,
    &outC->Context_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L2,
    &outC->Context_1.Message_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1,
    &outC->Context_1.Packets_out);
  /* 1 */
  compressed_to_Radio_Track_TM_RBC_conversions_legacy(
    &outC->_L2,
    &outC->_1_Context_1);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L4,
    &outC->_1_Context_1.Header_Out);
  /* 1 */
  C_TrackTrainMessage_to_Int_TM_conversions(&outC->_L4, &outC->_2_Context_1);
  kcg_copy__3_Radio_TrackTrain_Header_T_TM(
    &outC->_L3,
    &outC->_2_Context_1.Message_Out);
  kcg_copy__3_Radio_TrackTrain_Header_T_TM(&outC->_L5.Header, &outC->_L3);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L5.Messages,
    &outC->_L1);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->Compressed_Radio_Message_out,
    &outC->_L5);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->RadioTrackTrainHeader_out,
    &outC->_L4);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Compressed_Packets_out,
    &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestTrackTrackAtlasLegacy_Internal_Tests.c
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

