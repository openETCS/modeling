/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkNTCPriority_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::checkNTCPriority */
kcg_bool checkNTCPriority_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::checkNTCPriority::p41 */P41_LevelTransistionOrders_T_Packet_Types_Pkg *p41)
{
  /* xdebugSupport_Pkg::checkNTCPriority::isNTC */
  static kcg_bool isNTC;
  
  isNTC = (*p41)[0].m_leveltr == M_LEVELTR_Level_NTC_specified_by_NID_NTC;
  return isNTC;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkNTCPriority_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

