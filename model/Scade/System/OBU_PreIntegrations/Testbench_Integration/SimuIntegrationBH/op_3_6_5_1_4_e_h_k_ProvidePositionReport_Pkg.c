/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_e_h_k_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_trackInfo.minSafeRearEndPassed = kcg_true;
  outC->rem_trackInfo.maxSafeFrontEndPassed = kcg_true;
  outC->rem_rbcComm.newSessionEstablished = kcg_true;
  outC->trigger = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_e_h_k_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k */
void op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::trackInfo */ LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::rbcComm */ RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  outC_op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::rbcComm */
  static RBC_Communication_T_ProvidePositionReport_Pkg last_rbcComm;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::trackInfo */
  static LocationBasedEvents_T_ProvidePositionReport_Pkg last_trackInfo;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L1 */
  static LocationBasedEvents_T_ProvidePositionReport_Pkg _L1;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L8 */
  static kcg_bool _L8;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L14 */
  static kcg_bool _L14;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L13 */
  static kcg_bool _L13;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L16 */
  static RBC_Communication_T_ProvidePositionReport_Pkg _L16;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L18 */
  static kcg_bool _L18;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L19 */
  static RBC_Communication_T_ProvidePositionReport_Pkg _L19;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L20 */
  static kcg_bool _L20;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L22 */
  static LocationBasedEvents_T_ProvidePositionReport_Pkg _L22;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L26 */
  static kcg_bool _L26;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L25 */
  static kcg_bool _L25;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L27 */
  static kcg_bool _L27;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L28 */
  static kcg_bool _L28;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L29 */
  static kcg_bool _L29;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L30 */
  static kcg_bool _L30;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L32 */
  static kcg_bool _L32;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::_L33 */
  static kcg_bool _L33;
  
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(&_L1, trackInfo);
  /* last_init_ck_rbcComm */ if (outC->init) {
    kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(
      &last_rbcComm,
      (RBC_Communication_T_ProvidePositionReport_Pkg *)
        &cRBC_Communication_T_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(
      &last_rbcComm,
      &outC->rem_rbcComm);
  }
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(&_L19, &last_rbcComm);
  _L32 = _L19.newSessionEstablished;
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(&_L16, rbcComm);
  _L18 = _L16.newSessionEstablished;
  _L20 = _L32 != _L18;
  _L33 = _L20 & _L18;
  _L13 = _L1.minSafeRearEndPassed;
  /* last_init_ck_trackInfo */ if (outC->init) {
    kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
      &last_trackInfo,
      (LocationBasedEvents_T_ProvidePositionReport_Pkg *)
        &cLocationBasedEvents_T_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
      &last_trackInfo,
      &outC->rem_trackInfo);
  }
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &_L22,
    &last_trackInfo);
  _L25 = _L22.minSafeRearEndPassed;
  _L29 = _L13 != _L25;
  _L27 = _L13 & _L29;
  _L14 = _L1.maxSafeFrontEndPassed;
  _L26 = _L22.maxSafeFrontEndPassed;
  _L30 = _L14 != _L26;
  _L28 = _L30 & _L26;
  _L8 = _L33 | _L27 | _L28;
  outC->trigger = _L8;
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &outC->rem_trackInfo,
    trackInfo);
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(
    &outC->rem_rbcComm,
    rbcComm);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

