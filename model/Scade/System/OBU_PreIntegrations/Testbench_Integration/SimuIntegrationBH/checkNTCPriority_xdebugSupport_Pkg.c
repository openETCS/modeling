/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkNTCPriority_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void checkNTCPriority_init_xdebugSupport_Pkg(
  outC_checkNTCPriority_xdebugSupport_Pkg *outC)
{
  static kcg_int i;
  
  outC->_L8.valid = kcg_true;
  outC->_L8.q_dir = Q_DIR_Reverse;
  outC->_L8.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.d_leveltr = 0;
  outC->_L8.m_leveltr = M_LEVELTR_Level_0;
  outC->_L8.nid_ntc = 0;
  outC->_L8.l_ackleveltr = 0;
  outC->_L7 = kcg_true;
  outC->_L6 = M_LEVELTR_Level_0;
  outC->_L5 = M_LEVELTR_Level_0;
  outC->_L3 = 0;
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.d_leveltr = 0;
  outC->_L2.m_leveltr = M_LEVELTR_Level_0;
  outC->_L2.nid_ntc = 0;
  outC->_L2.l_ackleveltr = 0;
  for (i = 0; i < 7; i++) {
    outC->_L1[i].valid = kcg_true;
    outC->_L1[i].q_dir = Q_DIR_Reverse;
    outC->_L1[i].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1[i].d_leveltr = 0;
    outC->_L1[i].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1[i].nid_ntc = 0;
    outC->_L1[i].l_ackleveltr = 0;
  }
  outC->isNTC = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkNTCPriority_reset_xdebugSupport_Pkg(
  outC_checkNTCPriority_xdebugSupport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::checkNTCPriority */
void checkNTCPriority_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::checkNTCPriority::p41 */ P41_LevelTransistionOrders_T_Packet_Types_Pkg *p41,
  outC_checkNTCPriority_xdebugSupport_Pkg *outC)
{
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(&outC->_L1, p41);
  kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
    &outC->_L8,
    (P41_LevelTransitionOrder_T_Packet_Types_Pkg *)
      &cNoP41Element_xdebugSupport_Pkg);
  outC->_L3 = 0;
  if ((0 <= outC->_L3) & (outC->_L3 < 7)) {
    kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
      &outC->_L2,
      &outC->_L1[outC->_L3]);
  }
  else {
    kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
      &outC->_L2,
      &outC->_L8);
  }
  outC->_L5 = outC->_L2.m_leveltr;
  outC->_L6 = M_LEVELTR_Level_NTC_specified_by_NID_NTC;
  outC->_L7 = outC->_L5 == outC->_L6;
  outC->isNTC = outC->_L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkNTCPriority_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

