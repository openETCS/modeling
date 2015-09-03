/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestGradientProfile.h"

void TestGradientProfile_reset(outC_TestGradientProfile *outC)
{
  /* 1 */ Build_GradientProfile_reset_TA_Gradient(&outC->_2_Context_1);
  /* 1 */ ConvertReceivedMess_reset(&outC->_1_Context_1);
  /* 1 */ TestTrackTrackAtlasLegacy_reset_Internal_Tests(&outC->Context_1);
}

/* TestGradientProfile */
void TestGradientProfile(
  inC_TestGradientProfile *inC,
  outC_TestGradientProfile *outC)
{
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
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L17,
    &inC->TrainPos_in);
  /* 1 */
  Build_GradientProfile_TA_Gradient(
    &outC->_L16,
    &outC->_L17,
    &outC->_2_Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L11,
    &outC->_2_Context_1.GP);
  outC->_L12 = outC->_2_Context_1.updated;
  outC->updated = outC->_L12;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->GradientProfile,
    &outC->_L11);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestGradientProfile.c
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

