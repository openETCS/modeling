/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Story00A_BTM_FirstTest.h"

void Story00A_BTM_reset_FirstTest(outC_Story00A_BTM_FirstTest *outC)
{
  /* 1 */
  Balise_Group_341_reset_AmsterdamUtrechtL1_Sheet06_Bijlmer(
    &outC->_6_Context_1);
  /* 1 */
  Balise_Group_369_reset_AmsterdamUtrechtL1_Sheet06_Bijlmer(
    &outC->_5_Context_1);
  /* 1 */
  Balise_Group_368_reset_AmsterdamUtrechtL1_Sheet06_Bijlmer(
    &outC->_4_Context_1);
  /* 1 */
  Balise_Group_367_reset_AmsterdamUtrechtL1_Sheet06_Bijlmer(
    &outC->_3_Context_1);
  /* 1 */
  Balise_Group_366_reset_AmsterdamUtrechtL1_Sheet06_Bijlmer(
    &outC->_2_Context_1);
  /* 1 */
  Balise_Group_365_reset_AmsterdamUtrechtL1_Sheet06_Bijlmer(
    &outC->_1_Context_1);
  /* 1 */
  Balise_Group_364_reset_AmsterdamUtrechtL1_Sheet06_Bijlmer(&outC->Context_1);
}

/* FirstTest::Story00A_BTM */
void Story00A_BTM_FirstTest(
  /* FirstTest::Story00A_BTM::TrainPos */kcg_real TrainPos,
  outC_Story00A_BTM_FirstTest *outC)
{
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L36,
    (CompressedBaliseMessage_TM *) &DEFAULT_BTMMessage_TM);
  outC->_L33 = TrainPos;
  /* 1 */
  Balise_Group_364_AmsterdamUtrechtL1_Sheet06_Bijlmer(
    &outC->_L36,
    outC->_L33,
    (BaliseGroupData_TM *) &BG364_Balises426,
    &outC->Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L34,
    &outC->Context_1.BG_message_out);
  /* 1 */
  Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer(
    &outC->_L34,
    outC->_L33,
    (BaliseGroupData_TM *) &BG365_Balises426,
    &outC->_1_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L40,
    &outC->_1_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer(
    &outC->_L40,
    outC->_L33,
    (BaliseGroupData_TM *) &BG366_Balises426,
    &outC->_2_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L38,
    &outC->_2_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer(
    &outC->_L38,
    outC->_L33,
    (BaliseGroupData_TM *) &BG367_Balises426,
    &outC->_3_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L35,
    &outC->_3_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer(
    &outC->_L35,
    outC->_L33,
    (BaliseGroupData_TM *) &BG368_Balises426,
    &outC->_4_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L37,
    &outC->_4_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer(
    &outC->_L37,
    outC->_L33,
    (BaliseGroupData_TM *) &BG369_Balises426,
    &outC->_5_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L39,
    &outC->_5_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer(
    &outC->_L39,
    outC->_L33,
    (BaliseGroupData_TM *) &BG341_Balises426,
    &outC->_6_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L41,
    &outC->_6_Context_1.BG_message_out);
  kcg_copy_CompressedBaliseMessage_TM(&outC->BM, &outC->_L41);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Story00A_BTM_FirstTest.c
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

