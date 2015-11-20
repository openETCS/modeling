/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isStored_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::isStored */
void isStored_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::isStored::recivedBG_header */BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* CheckBGConsistency_Pkg::SubFunction::isStored::storedBG */positionedBG_T_TrainPosition_Types_Pck *storedBG,
  /* CheckBGConsistency_Pkg::SubFunction::isStored::go_on */kcg_bool *go_on,
  /* CheckBGConsistency_Pkg::SubFunction::isStored::acc_out */BG_Header_T_BG_Types_Pkg *acc_out)
{
  kcg_copy_BG_Header_T_BG_Types_Pkg(acc_out, recivedBG_header);
  *go_on = ((*storedBG).nid_bg != (*acc_out).nid_bg) | ((*acc_out).nid_c !=
      (*storedBG).nid_c);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** isStored_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

