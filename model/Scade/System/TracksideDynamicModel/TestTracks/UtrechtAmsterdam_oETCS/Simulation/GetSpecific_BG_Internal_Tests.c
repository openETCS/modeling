/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T16:26:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GetSpecific_BG_Internal_Tests.h"

void GetSpecific_BG_reset_Internal_Tests(void)
{
  /* 1 */
  Amsterdam_Utrecht_Lijn1_b_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    &Ctxt_GetSpecific_BG_Internal_Tests._1_Context_1);
  /* 1 */
  TriggerSpecificBalise_reset_Internal_Tests(
    &Ctxt_GetSpecific_BG_Internal_Tests.Context_1);
}

/* Internal_Tests::GetSpecific_BG */
void GetSpecific_BG_Internal_Tests(void)
{
  Ctxt_GetSpecific_BG_Internal_Tests._L3 = BG_that_I_want;
  /* 1 */
  TriggerSpecificBalise_Internal_Tests(
    Ctxt_GetSpecific_BG_Internal_Tests._L3,
    &Ctxt_GetSpecific_BG_Internal_Tests.Context_1);
  Ctxt_GetSpecific_BG_Internal_Tests._L1 =
    Ctxt_GetSpecific_BG_Internal_Tests.Context_1.TrainPos;
  /* 1 */
  Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    Ctxt_GetSpecific_BG_Internal_Tests._L1,
    &Ctxt_GetSpecific_BG_Internal_Tests._1_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &Ctxt_GetSpecific_BG_Internal_Tests._L2,
    &Ctxt_GetSpecific_BG_Internal_Tests._1_Context_1.BaliseMessage);
  kcg_copy_CompressedBaliseMessage_TM(
    &BG_data,
    &Ctxt_GetSpecific_BG_Internal_Tests._L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GetSpecific_BG_Internal_Tests.c
** Generation date: 2015-08-20T16:26:58
*************************************************************$ */

