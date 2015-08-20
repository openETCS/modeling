/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TriggerAllBalisesInSequence_Internal_Tests.h"

void TriggerAllBalisesInSequence_reset_Internal_Tests(
  outC_TriggerAllBalisesInSequence_Internal_Tests *outC)
{
  /* 1 */ TriggerBaliseByIndex_reset_Internal_Tests(&outC->_1_Context_1);
  /* 1 */ ClockCounter_reset_pwlinear(&outC->Context_1);
}

/* Internal_Tests::TriggerAllBalisesInSequence */
void TriggerAllBalisesInSequence_Internal_Tests(
  /* Internal_Tests::TriggerAllBalisesInSequence::reset */kcg_bool reset,
  outC_TriggerAllBalisesInSequence_Internal_Tests *outC)
{
  outC->_L4 = reset;
  /* 1 */ ClockCounter_pwlinear(outC->_L4, &outC->Context_1);
  outC->_L3 = outC->Context_1.Count;
  outC->_L20 = 3;
  outC->_L18 = outC->_L3 % outC->_L20;
  outC->_L21 = 0;
  outC->_L22 = outC->_L18 == outC->_L21;
  outC->_L19 = 0.0;
  outC->_L17 = Distance_Balises_in_BG_InfraLib;
  if (outC->_L22) {
    outC->_L23 = outC->_L19;
  }
  else {
    outC->_L23 = outC->_L17;
  }
  outC->_L16 = 100;
  outC->_L14 = 3;
  outC->_L13 = outC->_L3 / outC->_L14;
  outC->_L15 = outC->_L13 % outC->_L16;
  outC->_L12 = 0.0;
  outC->_L6 = 2;
  outC->_L5 = outC->_L3 % outC->_L6;
  outC->_L7 = 0;
  outC->_L8 = outC->_L5 == outC->_L7;
  outC->_L10 = Distance_Balises_in_BG_InfraLib * - 1.0;
  if (outC->_L8) {
    outC->_L9 = outC->_L12;
  }
  else {
    outC->_L9 = outC->_L10;
  }
  /* 1 */ TriggerBaliseByIndex_Internal_Tests(outC->_L15, &outC->_1_Context_1);
  outC->_L1 = outC->_1_Context_1.TrainPos;
  outC->_L2 = outC->_1_Context_1.nid_BG;
  outC->_L11 = outC->_L23 + outC->_L9 + outC->_L1;
  outC->nid_BG = outC->_L2;
  outC->TrainPos = outC->_L11;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TriggerAllBalisesInSequence_Internal_Tests.c
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

