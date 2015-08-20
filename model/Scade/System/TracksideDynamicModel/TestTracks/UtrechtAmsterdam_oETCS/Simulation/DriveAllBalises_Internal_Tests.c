/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DriveAllBalises_Internal_Tests.h"

void DriveAllBalises_reset_Internal_Tests(
  outC_DriveAllBalises_Internal_Tests *outC)
{
  /* 1 */
  Amsterdam_Utrecht_Lijn1_b_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    &outC->_1_Context_1);
  /* 1 */ TriggerAllBalisesInSequence_reset_Internal_Tests(&outC->Context_1);
}

/* Internal_Tests::DriveAllBalises */
void DriveAllBalises_Internal_Tests(
  /* Internal_Tests::DriveAllBalises::reset */kcg_bool reset,
  outC_DriveAllBalises_Internal_Tests *outC)
{
  static NID_BG noname;
  
  outC->_L1 = reset;
  /* 1 */
  TriggerAllBalisesInSequence_Internal_Tests(outC->_L1, &outC->Context_1);
  outC->_L2 = outC->Context_1.TrainPos;
  outC->_L3 = outC->Context_1.nid_BG;
  /* 1 */
  Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    outC->_L2,
    &outC->_1_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L4,
    &outC->_1_Context_1.BaliseMessage);
  noname = outC->_L3;
  kcg_copy_CompressedBaliseMessage_TM(&outC->BG_data, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DriveAllBalises_Internal_Tests.c
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

