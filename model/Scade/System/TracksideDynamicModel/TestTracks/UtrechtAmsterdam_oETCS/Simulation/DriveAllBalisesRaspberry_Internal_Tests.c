/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DriveAllBalisesRaspberry_Internal_Tests.h"

void DriveAllBalisesRaspberry_reset_Internal_Tests(void)
{
  /* 1 */
  DriveAllBalises_reset_Internal_Tests(
    &Ctxt_DriveAllBalisesRaspberry_Internal_Tests.Context_1);
}

/* Internal_Tests::DriveAllBalisesRaspberry */
void DriveAllBalisesRaspberry_Internal_Tests(void)
{
  Ctxt_DriveAllBalisesRaspberry_Internal_Tests._L2 = kcg_false;
  /* 1 */
  DriveAllBalises_Internal_Tests(
    Ctxt_DriveAllBalisesRaspberry_Internal_Tests._L2,
    &Ctxt_DriveAllBalisesRaspberry_Internal_Tests.Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &Ctxt_DriveAllBalisesRaspberry_Internal_Tests._L1,
    &Ctxt_DriveAllBalisesRaspberry_Internal_Tests.Context_1.BG_data);
  kcg_copy_CompressedBaliseMessage_TM(
    &BG_data,
    &Ctxt_DriveAllBalisesRaspberry_Internal_Tests._L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DriveAllBalisesRaspberry_Internal_Tests.c
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

