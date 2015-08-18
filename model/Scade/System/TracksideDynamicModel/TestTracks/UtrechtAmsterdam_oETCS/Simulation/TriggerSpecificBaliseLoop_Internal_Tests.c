/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T19:26:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TriggerSpecificBaliseLoop_Internal_Tests.h"

void TriggerSpecificBaliseLoop_reset_Internal_Tests(
  outC_TriggerSpecificBaliseLoop_Internal_Tests *outC)
{
}

/* Internal_Tests::TriggerSpecificBaliseLoop */
void TriggerSpecificBaliseLoop_Internal_Tests(
  /* Internal_Tests::TriggerSpecificBaliseLoop::i */kcg_int i,
  /* Internal_Tests::TriggerSpecificBaliseLoop::Acc */kcg_real Acc,
  /* Internal_Tests::TriggerSpecificBaliseLoop::nid_BG */kcg_int nid_BG,
  outC_TriggerSpecificBaliseLoop_Internal_Tests *outC)
{
  kcg_copy_BPos_Internal_Tests(
    &outC->_L4,
    (BPos_Internal_Tests *) &BalisePositions_Internal_Tests);
  outC->_L1 = i;
  if ((0 <= outC->_L1) & (outC->_L1 < 100)) {
    kcg_copy_BPos_Single_Internal_Tests(&outC->_L5, &outC->_L4[outC->_L1]);
  }
  else {
    kcg_copy_BPos_Single_Internal_Tests(
      &outC->_L5,
      (BPos_Single_Internal_Tests *) &DEFAULT_BPos_single_Internal_Tests);
  }
  outC->_L10 = outC->_L5.TrainPos;
  outC->_L3 = nid_BG;
  outC->_L9 = outC->_L5.NID_BG;
  outC->_L11 = outC->_L3 == outC->_L9;
  outC->_L13 = !outC->_L11;
  outC->_L2 = Acc;
  if (outC->_L11) {
    outC->_L12 = outC->_L10;
  }
  else {
    outC->_L12 = outC->_L2;
  }
  outC->TrainPos = outC->_L12;
  outC->cont = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TriggerSpecificBaliseLoop_Internal_Tests.c
** Generation date: 2015-08-12T19:26:02
*************************************************************$ */

