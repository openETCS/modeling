/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T19:26:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TriggerSpecificBalise_Internal_Tests.h"

void TriggerSpecificBalise_reset_Internal_Tests(void)
{
  static kcg_int i;
  
  for (i = 0; i < 100; i++) {
    /* 1 */
    TriggerSpecificBaliseLoop_reset_Internal_Tests(
      &Ctxt_TriggerSpecificBalise_Internal_Tests.Context_1[i]);
  }
}

/* Internal_Tests::TriggerSpecificBalise */
void TriggerSpecificBalise_Internal_Tests(void)
{
  static kcg_int i1;
  static kcg_real tmp;
  static kcg_int i;
  static kcg_int noname;
  
  Ctxt_TriggerSpecificBalise_Internal_Tests._L1 = nid_BG_looked_for;
  for (i1 = 0; i1 < 100; i1++) {
    Ctxt_TriggerSpecificBalise_Internal_Tests._L6[i1] =
      Ctxt_TriggerSpecificBalise_Internal_Tests._L1;
  }
  Ctxt_TriggerSpecificBalise_Internal_Tests._L5 = 0.0;
  Ctxt_TriggerSpecificBalise_Internal_Tests._L3 = kcg_true;
  Ctxt_TriggerSpecificBalise_Internal_Tests._L4 =
    Ctxt_TriggerSpecificBalise_Internal_Tests._L5;
  if (Ctxt_TriggerSpecificBalise_Internal_Tests._L3) {
    for (i = 0; i < 100; i++) {
      tmp = Ctxt_TriggerSpecificBalise_Internal_Tests._L4;
      /* 1 */
      TriggerSpecificBaliseLoop_Internal_Tests(
        i,
        tmp,
        Ctxt_TriggerSpecificBalise_Internal_Tests._L6[i],
        &Ctxt_TriggerSpecificBalise_Internal_Tests.Context_1[i]);
      Ctxt_TriggerSpecificBalise_Internal_Tests._L4 =
        Ctxt_TriggerSpecificBalise_Internal_Tests.Context_1[i].TrainPos;
      Ctxt_TriggerSpecificBalise_Internal_Tests._L2 = i + 1;
      if (!Ctxt_TriggerSpecificBalise_Internal_Tests.Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    Ctxt_TriggerSpecificBalise_Internal_Tests._L2 = 0;
  }
  noname = Ctxt_TriggerSpecificBalise_Internal_Tests._L2;
  TrainPos = Ctxt_TriggerSpecificBalise_Internal_Tests._L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TriggerSpecificBalise_Internal_Tests.c
** Generation date: 2015-08-12T19:26:02
*************************************************************$ */

