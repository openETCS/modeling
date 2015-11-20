/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg.h"

void op_3_6_5_1_4_e_h_k_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k */
void op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::trackInfo */LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::rbcComm */RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  outC_op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg *outC)
{
  static kcg_bool tmp;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L22 */
  static LocationBasedEvents_T_ProvidePositionReport_Pkg _L22;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
      &_L22,
      (LocationBasedEvents_T_ProvidePositionReport_Pkg *)
        &cLocationBasedEvents_T_ProvidePositionReport_Pkg);
    tmp = cRBC_Communication_T_ProvidePositionReport_Pkg.newSessionEstablished;
  }
  else {
    kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
      &_L22,
      &outC->rem_trackInfo);
    tmp = outC->rem_rbcComm.newSessionEstablished;
  }
  outC->trigger = ((tmp != (*rbcComm).newSessionEstablished) &
      (*rbcComm).newSessionEstablished) | ((*trackInfo).minSafeRearEndPassed &
      ((*trackInfo).minSafeRearEndPassed != _L22.minSafeRearEndPassed)) |
    (((*trackInfo).maxSafeFrontEndPassed != _L22.maxSafeFrontEndPassed) &
      _L22.maxSafeFrontEndPassed);
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &outC->rem_trackInfo,
    trackInfo);
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(
    &outC->rem_rbcComm,
    rbcComm);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

