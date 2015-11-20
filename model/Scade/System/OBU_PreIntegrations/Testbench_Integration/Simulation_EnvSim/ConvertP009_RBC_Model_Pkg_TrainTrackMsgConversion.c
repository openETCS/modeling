/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009 */
void ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009::newP009 */P009_TM_TrainToTrack *newP009,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009::oldP009 */PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *oldP009)
{
  (*oldP009).valid = (*newP009).valid;
  (*oldP009).transitionInformation = (*newP009).nid_ltrbg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

