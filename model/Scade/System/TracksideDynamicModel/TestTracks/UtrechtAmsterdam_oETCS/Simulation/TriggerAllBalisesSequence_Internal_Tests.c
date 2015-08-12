/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TriggerAllBalisesSequence_Internal_Tests.h"

void TriggerAllBalisesSequence_reset_Internal_Tests(
  outC_TriggerAllBalisesSequence_Internal_Tests *outC)
{
  /* 1 */ TriggerBaliseByIndex_reset_Internal_Tests(&outC->_1_Context_1);
  /* 1 */ ClockCounter_reset_pwlinear(&outC->Context_1);
}

/* Internal_Tests::TriggerAllBalisesSequence */
void TriggerAllBalisesSequence_Internal_Tests(
  /* Internal_Tests::TriggerAllBalisesSequence::reset */kcg_bool reset1,
  outC_TriggerAllBalisesSequence_Internal_Tests *outC)
{
  outC->_L4 = reset1;
  /* 1 */ ClockCounter_pwlinear(outC->_L4, &outC->Context_1);
  outC->_L3 = outC->Context_1.Count;
  /* 1 */ TriggerBaliseByIndex_Internal_Tests(outC->_L3, &outC->_1_Context_1);
  outC->_L1 = outC->_1_Context_1.TrainPos;
  outC->_L2 = outC->_1_Context_1.nid_BG;
  outC->nid_BG = outC->_L2;
  outC->TrainPos = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TriggerAllBalisesSequence_Internal_Tests.c
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */

