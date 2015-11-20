/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getP41Level_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void getP41Level_init_xdebugSupport_Pkg(
  outC_getP41Level_xdebugSupport_Pkg *outC)
{
  static kcg_int i;
  
  outC->_L14 = M_LEVEL_Level_0;
  outC->_L13 = M_LEVEL_Level_0;
  outC->_L12 = M_LEVEL_Level_0;
  outC->_L11 = M_LEVEL_Level_0;
  outC->_L10 = M_LEVEL_Level_0;
  outC->_L9 = M_LEVEL_Level_0;
  outC->_L8.valid = kcg_true;
  outC->_L8.q_dir = Q_DIR_Reverse;
  outC->_L8.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.d_leveltr = 0;
  outC->_L8.m_leveltr = M_LEVELTR_Level_0;
  outC->_L8.nid_ntc = 0;
  outC->_L8.l_ackleveltr = 0;
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
  outC->p41_level = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getP41Level_reset_xdebugSupport_Pkg(
  outC_getP41Level_xdebugSupport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::getP41Level */
void getP41Level_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::getP41Level::p41 */ P41_LevelTransistionOrders_T_Packet_Types_Pkg *p41,
  outC_getP41Level_xdebugSupport_Pkg *outC)
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
  outC->_L10 = M_LEVEL_Level_0;
  outC->_L11 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L12 = M_LEVEL_Level_1;
  outC->_L13 = M_LEVEL_Level_2;
  outC->_L14 = M_LEVEL_Level_3;
  switch (outC->_L5) {
    case M_LEVELTR_Level_0 :
      outC->_L9 = outC->_L10;
      break;
    case M_LEVELTR_Level_NTC_specified_by_NID_NTC :
      outC->_L9 = outC->_L11;
      break;
    case M_LEVELTR_Level_1 :
      outC->_L9 = outC->_L12;
      break;
    case M_LEVELTR_Level_2 :
      outC->_L9 = outC->_L13;
      break;
    case M_LEVELTR_Level_3 :
      outC->_L9 = outC->_L14;
      break;
    
  }
  outC->p41_level = outC->_L9;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getP41Level_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

