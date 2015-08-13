/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TriggerBaliseByIndexLoop_Internal_Tests.h"

void TriggerBaliseByIndexLoop_reset_Internal_Tests(
  outC_TriggerBaliseByIndexLoop_Internal_Tests *outC)
{
}

/* Internal_Tests::TriggerBaliseByIndexLoop */
void TriggerBaliseByIndexLoop_Internal_Tests(
  /* Internal_Tests::TriggerBaliseByIndexLoop::i */kcg_int i,
  /* Internal_Tests::TriggerBaliseByIndexLoop::Acc */BPos_Single_Internal_Tests *Acc,
  /* Internal_Tests::TriggerBaliseByIndexLoop::index */kcg_int index,
  outC_TriggerBaliseByIndexLoop_Internal_Tests *outC)
{
  static kcg_int noname;
  
  outC->_L16 = index;
  outC->_L14 = index;
  outC->_L1 = i;
  noname = outC->_L1;
  outC->_L3 = index;
  outC->_L11 = outC->_L3 == outC->_L16;
  outC->_L13 = !outC->_L11;
  kcg_copy_BPos_Internal_Tests(
    &outC->_L4,
    (BPos_Internal_Tests *) &BalisePositions_Internal_Tests);
  if ((0 <= outC->_L14) & (outC->_L14 < 100)) {
    kcg_copy_BPos_Single_Internal_Tests(&outC->_L5, &outC->_L4[outC->_L14]);
  }
  else {
    kcg_copy_BPos_Single_Internal_Tests(
      &outC->_L5,
      (BPos_Single_Internal_Tests *) &DEFAULT_BPos_single_Internal_Tests);
  }
  kcg_copy_BPos_Single_Internal_Tests(&outC->_L2, Acc);
  if (outC->_L11) {
    kcg_copy_BPos_Single_Internal_Tests(&outC->_L12, &outC->_L5);
  }
  else {
    kcg_copy_BPos_Single_Internal_Tests(&outC->_L12, &outC->_L2);
  }
  kcg_copy_BPos_Single_Internal_Tests(&outC->TrainPos, &outC->_L12);
  outC->cont = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TriggerBaliseByIndexLoop_Internal_Tests.c
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */

