/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T16:26:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TriggerSpecificBalise_Internal_Tests.h"

void TriggerSpecificBalise_reset_Internal_Tests(
  outC_TriggerSpecificBalise_Internal_Tests *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 100; i++) {
    /* 1 */ TriggerSpecificBaliseLoop_reset_Internal_Tests(&outC->Context_1[i]);
  }
}

/* Internal_Tests::TriggerSpecificBalise */
void TriggerSpecificBalise_Internal_Tests(
  /* Internal_Tests::TriggerSpecificBalise::nid_BG_looked_for */kcg_int nid_BG_looked_for,
  outC_TriggerSpecificBalise_Internal_Tests *outC)
{
  static kcg_int i1;
  static kcg_real tmp;
  static kcg_int i;
  static kcg_int noname;
  
  outC->_L1 = nid_BG_looked_for;
  for (i1 = 0; i1 < 100; i1++) {
    outC->_L6[i1] = outC->_L1;
  }
  outC->_L5 = 0.0;
  outC->_L3 = kcg_true;
  outC->_L4 = outC->_L5;
  if (outC->_L3) {
    for (i = 0; i < 100; i++) {
      tmp = outC->_L4;
      /* 1 */
      TriggerSpecificBaliseLoop_Internal_Tests(
        i,
        tmp,
        outC->_L6[i],
        &outC->Context_1[i]);
      outC->_L4 = outC->Context_1[i].TrainPos;
      outC->_L2 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L2 = 0;
  }
  noname = outC->_L2;
  outC->TrainPos = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TriggerSpecificBalise_Internal_Tests.c
** Generation date: 2015-08-20T16:26:57
*************************************************************$ */

