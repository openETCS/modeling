/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestSpeedProfile.h"

void TestSpeedProfile_reset(outC_TestSpeedProfile *outC)
{
  /* 1 */ Build_StaticSpeedProfile_reset_TA_SSP(&outC->_3_Context_1);
  /* 1 */ SimTrainPos_reset(&outC->_2_Context_1);
  /* 1 */ ConvertReceivedMess_reset(&outC->_1_Context_1);
  /* 1 */ TestTrackTrackAtlasLegacy_reset_Internal_Tests(&outC->Context_1);
}

/* TestSpeedProfile */
void TestSpeedProfile(inC_TestSpeedProfile *inC, outC_TestSpeedProfile *outC)
{
  outC->_L32 = 11450;
  outC->_L31 = inC->reset;
  outC->_L18 = inC->Trigger_in;
  /* 1 */
  TestTrackTrackAtlasLegacy_Internal_Tests(outC->_L18, &outC->Context_1);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L13,
    &outC->Context_1.Compressed_Radio_Message_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L14,
    &outC->Context_1.Compressed_Packets_out);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L15,
    &outC->Context_1.RadioTrackTrainHeader_out);
  /* 1 */
  ConvertReceivedMess(
    &outC->_L13,
    &outC->_L14,
    &outC->_L15,
    &outC->_1_Context_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L16,
    &outC->_1_Context_1.Received_Message);
  /* 1 */ SimTrainPos(outC->_L18, &outC->_2_Context_1);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L28,
    &outC->_2_Context_1.TrainPos);
  /* 1 */
  Build_StaticSpeedProfile_TA_SSP(
    outC->_L31,
    &outC->_L16,
    &outC->_L28,
    outC->_L32,
    &outC->_3_Context_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L11,
    &outC->_3_Context_1.SSP);
  outC->_L12 = outC->_3_Context_1.updated;
  outC->_L29 = outC->_3_Context_1.available;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP_out, &outC->_L11);
  outC->updated = outC->_L12;
  outC->available = outC->_L29;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestSpeedProfile.c
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

