/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TriggerBaliseByIndex_Internal_Tests.h"

void TriggerBaliseByIndex_reset_Internal_Tests(
  outC_TriggerBaliseByIndex_Internal_Tests *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 100; i++) {
    /* 1 */ TriggerBaliseByIndexLoop_reset_Internal_Tests(&outC->Context_1[i]);
  }
}

/* Internal_Tests::TriggerBaliseByIndex */
void TriggerBaliseByIndex_Internal_Tests(
  /* Internal_Tests::TriggerBaliseByIndex::index */kcg_int index,
  outC_TriggerBaliseByIndex_Internal_Tests *outC)
{
  static kcg_int i1;
  static BPos_Single_Internal_Tests tmp;
  static kcg_int i;
  static kcg_int noname;
  
  kcg_copy_BPos_Single_Internal_Tests(
    &outC->_L7,
    (BPos_Single_Internal_Tests *) &DEFAULT_BPos_single_Internal_Tests);
  outC->_L1 = index;
  for (i1 = 0; i1 < 100; i1++) {
    outC->_L6[i1] = outC->_L1;
  }
  outC->_L3 = kcg_true;
  kcg_copy_BPos_Single_Internal_Tests(&outC->_L4, &outC->_L7);
  if (outC->_L3) {
    for (i = 0; i < 100; i++) {
      kcg_copy_BPos_Single_Internal_Tests(&tmp, &outC->_L4);
      /* 1 */
      TriggerBaliseByIndexLoop_Internal_Tests(
        i,
        &tmp,
        outC->_L6[i],
        &outC->Context_1[i]);
      kcg_copy_BPos_Single_Internal_Tests(
        &outC->_L4,
        &outC->Context_1[i].TrainPos);
      outC->_L2 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L2 = 0;
  }
  outC->_L11 = outC->_L4.TrainPos;
  outC->_L10 = outC->_L4.NID_BG;
  outC->nid_BG = outC->_L10;
  noname = outC->_L2;
  outC->TrainPos = outC->_L11;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TriggerBaliseByIndex_Internal_Tests.c
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */

