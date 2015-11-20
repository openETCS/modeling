/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005 */
void ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005::newP005 */P005_TM_TrainToTrack *newP005,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005::oldP005 */PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *oldP005)
{
  (*oldP005).valid = (*newP005).valid;
  (*oldP005).TrainRunningNumber = (*newP005).nid_opeartional;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

