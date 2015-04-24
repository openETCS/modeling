/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Story00A_FirstTest.h"

void Story00A_reset_FirstTest(outC_Story00A_FirstTest *outC)
{
  /* 1 */ RECV_ConvertBaliseHeader_CT_reset(&outC->_1_Context_1);
  /* 1 */ Story00A_BTM_reset_FirstTest(&outC->Context_1);
}

/* FirstTest::Story00A */
void Story00A_FirstTest(
  inC_Story00A_FirstTest *inC,
  outC_Story00A_FirstTest *outC)
{
  outC->_L8 = inC->Loc;
  /* 1 */ Story00A_BTM_FirstTest(outC->_L8, &outC->Context_1);
  kcg_copy_TM_CompressedBaliseMessage(&outC->_L4, &outC->Context_1.BM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L2,
    &outC->_L4.Messages);
  kcg_copy_TM_BaliseTelegramHeader_int_T(&outC->_L1, &outC->_L4.Header);
  /* 1 */ RECV_ConvertBaliseHeader_CT(&outC->_L1, &outC->_1_Context_1);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L7,
    &outC->_1_Context_1.BaliseTelegramHeaderOut);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->TelegramHeader, &outC->_L7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->Packets_Out, &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Story00A_FirstTest.c
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

