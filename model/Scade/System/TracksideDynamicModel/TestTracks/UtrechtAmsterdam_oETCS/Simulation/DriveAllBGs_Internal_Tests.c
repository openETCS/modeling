/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T20:04:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DriveAllBGs_Internal_Tests.h"

void DriveAllBGs_reset_Internal_Tests(void)
{
  /* 1 */
  Amsterdam_Utrecht_Lijn1_b_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    &Ctxt_DriveAllBGs_Internal_Tests._1_Context_1);
  /* 1 */
  TriggerAllBalisesSequence_reset_Internal_Tests(
    &Ctxt_DriveAllBGs_Internal_Tests.Context_1);
}

/* Internal_Tests::DriveAllBGs */
void DriveAllBGs_Internal_Tests(void)
{
  static NID_BG noname;
  
  Ctxt_DriveAllBGs_Internal_Tests._L1 = reset;
  /* 1 */
  TriggerAllBalisesSequence_Internal_Tests(
    Ctxt_DriveAllBGs_Internal_Tests._L1,
    &Ctxt_DriveAllBGs_Internal_Tests.Context_1);
  Ctxt_DriveAllBGs_Internal_Tests._L2 =
    Ctxt_DriveAllBGs_Internal_Tests.Context_1.TrainPos;
  Ctxt_DriveAllBGs_Internal_Tests._L3 =
    Ctxt_DriveAllBGs_Internal_Tests.Context_1.nid_BG;
  /* 1 */
  Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    Ctxt_DriveAllBGs_Internal_Tests._L2,
    &Ctxt_DriveAllBGs_Internal_Tests._1_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &Ctxt_DriveAllBGs_Internal_Tests._L4,
    &Ctxt_DriveAllBGs_Internal_Tests._1_Context_1.BaliseMessage);
  noname = Ctxt_DriveAllBGs_Internal_Tests._L3;
  kcg_copy_CompressedBaliseMessage_TM(
    &BG_data,
    &Ctxt_DriveAllBGs_Internal_Tests._L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DriveAllBGs_Internal_Tests.c
** Generation date: 2015-08-12T20:04:59
*************************************************************$ */

