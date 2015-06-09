/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T11:10:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestStory00A_P005_Internal.h"

void TestStory00A_P005_reset_Internal(outC_TestStory00A_P005_Internal *outC)
{
  /* 1 */ Read_P005_ForCalcTrainPos_reset_TM(&outC->_1_Context_1);
  /* 1 */ Story00A_reset_FirstTest(&outC->Context_1);
}

/* Internal::TestStory00A_P005 */
void TestStory00A_P005_Internal(
  inC_TestStory00A_P005_Internal *inC,
  outC_TestStory00A_P005_Internal *outC)
{
  outC->_L5 = inC->Loc;
  /* 1 */ Story00A_FirstTest(outC->_L5, &outC->Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1,
    &outC->Context_1.Packets_Out);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L2,
    &outC->Context_1.TelegramHeader);
  outC->_L4 = inC->LRBG;
  /* 1 */
  Read_P005_ForCalcTrainPos_TM(&outC->_L1, outC->_L4, &outC->_1_Context_1);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(
    &outC->_L3,
    &outC->_1_Context_1.LinkedBGsOUT);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->LinkedBGsOUT, &outC->_L3);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->TelegramHeader, &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestStory00A_P005_Internal.c
** Generation date: 2015-06-09T11:10:49
*************************************************************$ */

