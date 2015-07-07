/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Story00A_FirstTest.h"

void Story00A_reset_FirstTest(outC_Story00A_FirstTest *outC)
{
  /* 1 */ CASTLIB_BaliseHeaders_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ Story00A_RBC_reset_FirstTest(&outC->_1_Context_1);
  /* 1 */ Story00A_BTM_reset_FirstTest(&outC->Context_1);
}

/* FirstTest::Story00A */
void Story00A_FirstTest(
  inC_Story00A_FirstTest *inC,
  outC_Story00A_FirstTest *outC)
{
  outC->_L2 = inC->TrainPos;
  /* 1 */ Story00A_BTM_FirstTest(outC->_L2, &outC->Context_1);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L1, &outC->Context_1.BM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L6,
    &outC->_L1.Messages);
  outC->_L13 = inC->Trigger_in;
  /* 1 */ Story00A_RBC_FirstTest(outC->_L13, &outC->_1_Context_1);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L8,
    &outC->_1_Context_1.RadioTrackTrainHeader_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L9,
    &outC->_1_Context_1.Compressed_Packets_out);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L10,
    &outC->_1_Context_1.Compressed_Radio_Message_out);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->Compressed_Radio_Message_out,
    &outC->_L10);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Compressed_Packets_out,
    &outC->_L9);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->RadioTrackTrainHeader_out,
    &outC->_L8);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L5, &outC->_L1.Header);
  /* 1 */ CASTLIB_BaliseHeaders_TM_conversions(&outC->_L5, &outC->_2_Context_1);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L7, &outC->_2_Context_1.Out);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->Balise_Header, &outC->_L7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Balise_Packets,
    &outC->_L6);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Story00A_FirstTest.c
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

