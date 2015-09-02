/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestGradientProfile_with_DMI_IF.h"

void TestGradientProfile_with_DMI_IF_reset(
  outC_TestGradientProfile_with_DMI_IF *outC)
{
  /* 1 */ GradientProfile_to_DMI_reset_TA_Export(&outC->_4_Context_1);
  /* 1 */ Build_GradientProfile_reset_TA_Gradient(&outC->_3_Context_1);
  /* 1 */ SimTrainPos_reset(&outC->_2_Context_1);
  /* 1 */ ConvertReceivedMess_reset(&outC->_1_Context_1);
  /* 1 */ TestTrackTrackAtlasLegacy_reset_Internal_Tests(&outC->Context_1);
}

/* TestGradientProfile_with_DMI_IF */
void TestGradientProfile_with_DMI_IF(
  inC_TestGradientProfile_with_DMI_IF *inC,
  outC_TestGradientProfile_with_DMI_IF *outC)
{
  kcg_bool noname;
  
  outC->_L29 = kcg_false;
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
  Build_GradientProfile_TA_Gradient(
    outC->_L29,
    &outC->_L16,
    &outC->_L28,
    &outC->_3_Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L11,
    &outC->_3_Context_1.GP);
  outC->_L12 = outC->_3_Context_1.updated;
  outC->_L30 = outC->_3_Context_1.available;
  /* 1 */ GradientProfile_to_DMI_TA_Export(&outC->_L11, &outC->_4_Context_1);
  kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(
    &outC->_L31,
    &outC->_4_Context_1.Gradient_Profile_for_DMI_out);
  kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(
    &outC->Gradient_Profile_for_DMI_out,
    &outC->_L31);
  noname = outC->_L30;
  outC->updated = outC->_L12;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->GradientProfile,
    &outC->_L11);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestGradientProfile_with_DMI_IF.c
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

