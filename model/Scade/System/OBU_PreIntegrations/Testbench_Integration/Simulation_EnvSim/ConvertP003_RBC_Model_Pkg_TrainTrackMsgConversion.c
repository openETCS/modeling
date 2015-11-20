/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003 */
void ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003::newP003 */P003_TM_TrainToTrack *newP003,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003::oldP003 */PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *oldP003)
{
  (*oldP003).valid = (*newP003).valid;
  (*oldP003).number = (*newP003).n_iter;
  kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(
    &(*oldP003).aNID_RADIO,
    (aNID_RADIO_T_Packet_TrainTypes_Pkg *)
      &cEMPTY_ANID_RADIO_RBC_Model_Pkg_TrainTrackMsgConversion);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

