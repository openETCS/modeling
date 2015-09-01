/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_TestP015_Internal_Tests.h"

void UAB_TestP015_reset_Internal_Tests(void)
{
}

/* Internal_Tests::TestP015 */
void UAB_TestP015_Internal_Tests(void)
{
  /* Internal_Tests::TestP015::_L1 */
  static kcg_bool _L1;
  /* Internal_Tests::TestP015::_L3 */
  static UAB_CompressedPackets_T_Common_Types_Pkg _L3;
  
  /* 1 */
  UAB_Write_P015_TM_trackside(
    (UAB_P015_trackside_int_T_TM *) &UAB_LRBG354_P015_1_Packets426,
    (UAB_CompressedPackets_T_Common_Types_Pkg *)
      &UAB_DEFAULT_CompressedPackets_Internal_Tests,
    &_L1,
    &_L3);
  /* 1 */ UAB_Read_P015_TM(&_L3, &_L1, &UAB_PacketOut);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_TestP015_Internal_Tests.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

