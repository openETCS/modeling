/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-12T22:54:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Balises_US_Integration_June.h"

void Amsterdam_Utrecht_Balises_reset_US_Integration_June(void)
{
  /* 1 */
  CASTLIB_BaliseHeaders_reset_TM_conversions(
    &Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June._1_Context_1);
  /* 1 */
  Amsterdam_Utrecht_Lijn1_b_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    &Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June.Context_1);
}

/* US_Integration_June::Amsterdam_Utrecht_Balises_Integration_opt */
void Amsterdam_Utrecht_Balises_US_Integration_June(void)
{
  Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June.L2 = TrainPos;
  /* 1 */
  Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June.L2,
    &Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June.Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June.L1,
    &Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June.Context_1.BaliseMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June.L3,
    &Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June.L1.Messages);
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June.L4,
    &Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June.L1.Header);
  /* 1 */
  CASTLIB_BaliseHeaders_TM_conversions(
    &Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June.L4,
    &Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June._1_Context_1);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June.L5,
    &Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June._1_Context_1.Out);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &Header,
    &Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June.L5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &Packets,
    &Ctxt_Amsterdam_Utrecht_Balises_US_Integration_June.L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_Balises_US_Integration_June.c
** Generation date: 2015-07-12T22:54:51
*************************************************************$ */

