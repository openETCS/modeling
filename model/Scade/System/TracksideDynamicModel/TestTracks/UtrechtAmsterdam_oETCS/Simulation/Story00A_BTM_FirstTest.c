/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Story00A_BTM_FirstTest.h"

void Story00A_BTM_reset_FirstTest(outC_Story00A_BTM_FirstTest *outC)
{
  /* 1 */ Balise_Group_341_reset_FirstTest_InfraLib(&outC->_6_Context_1);
  /* 1 */ Balise_Group_369_reset_FirstTest_InfraLib(&outC->_5_Context_1);
  /* 1 */ Balise_Group_368_reset_FirstTest_InfraLib(&outC->_4_Context_1);
  /* 1 */ Balise_Group_367_reset_FirstTest_InfraLib(&outC->_3_Context_1);
  /* 1 */ Balise_Group_366_reset_FirstTest_InfraLib(&outC->_2_Context_1);
  /* 1 */ Balise_Group_365_reset_FirstTest_InfraLib(&outC->_1_Context_1);
  /* 1 */ Balise_Group_364_reset_FirstTest_InfraLib(&outC->Context_1);
}

/* FirstTest::Story00A_BTM */
void Story00A_BTM_FirstTest(
  /* FirstTest::Story00A_BTM::TrainPos */kcg_real TrainPos,
  outC_Story00A_BTM_FirstTest *outC)
{
  kcg_copy_TM_CompressedBaliseMessage(
    &outC->_L32,
    (TM_CompressedBaliseMessage *) &DEFAULT_BTMMessage);
  outC->_L31 = TrainPos;
  /* 1 */
  Balise_Group_364_FirstTest_InfraLib(
    &outC->_L32,
    outC->_L31,
    (TM_BaliseGroupData *) &BG364_Balises426,
    &outC->Context_1);
  kcg_copy_TM_CompressedBaliseMessage(
    &outC->_L30,
    &outC->Context_1.BG_message_out);
  /* 1 */
  Balise_Group_365_FirstTest_InfraLib(
    &outC->_L30,
    outC->_L31,
    (TM_BaliseGroupData *) &BG365_Balises426,
    &outC->_1_Context_1);
  kcg_copy_TM_CompressedBaliseMessage(
    &outC->_L33,
    &outC->_1_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_366_FirstTest_InfraLib(
    &outC->_L33,
    outC->_L31,
    (TM_BaliseGroupData *) &BG366_Balises426,
    &outC->_2_Context_1);
  kcg_copy_TM_CompressedBaliseMessage(
    &outC->_L34,
    &outC->_2_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_367_FirstTest_InfraLib(
    &outC->_L34,
    outC->_L31,
    (TM_BaliseGroupData *) &BG367_Balises426,
    &outC->_3_Context_1);
  kcg_copy_TM_CompressedBaliseMessage(
    &outC->_L35,
    &outC->_3_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_368_FirstTest_InfraLib(
    &outC->_L35,
    outC->_L31,
    (TM_BaliseGroupData *) &BG368_Balises426,
    &outC->_4_Context_1);
  kcg_copy_TM_CompressedBaliseMessage(
    &outC->_L36,
    &outC->_4_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_369_FirstTest_InfraLib(
    &outC->_L36,
    outC->_L31,
    (TM_BaliseGroupData *) &BG369_Balises426,
    &outC->_5_Context_1);
  kcg_copy_TM_CompressedBaliseMessage(
    &outC->_L37,
    &outC->_5_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_341_FirstTest_InfraLib(
    &outC->_L37,
    outC->_L31,
    (TM_BaliseGroupData *) &BG341_Balises426,
    &outC->_6_Context_1);
  kcg_copy_TM_CompressedBaliseMessage(
    &outC->_L38,
    &outC->_6_Context_1.BG_message_out);
  kcg_copy_TM_CompressedBaliseMessage(&outC->BM, &outC->_L38);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Story00A_BTM_FirstTest.c
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

