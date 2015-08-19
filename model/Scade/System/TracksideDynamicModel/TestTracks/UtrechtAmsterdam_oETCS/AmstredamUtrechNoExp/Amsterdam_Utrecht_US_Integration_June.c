/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_US_Integration_June.h"

void Amsterdam_Utrecht_reset_US_Integration_June(void)
{
}

/* US_Integration_June::Amsterdam_Utrecht */
void Amsterdam_Utrecht_US_Integration_June(void)
{
  /* US_Integration_June::Amsterdam_Utrecht::_L1 */
  static CompressedBaliseMessage_TM _L1;
  
  /* 1 */
  Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    TrainPos,
    &_L1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&Balise_Packets, &_L1.Messages);
  /* 1 */
  Amsterdam_Utrecht_RBC_Integration_US_Integration_June(
    Trigger_in,
    &RadioTrackTrainHeader_out,
    &Compressed_Packets_out,
    &Compressed_Radio_Message_out);
  /* 1 */ CASTLIB_BaliseHeaders_TM_conversions(&_L1.Header, &Balise_Header);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_US_Integration_June.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

