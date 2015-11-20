/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL */
void TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::speeds */Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::triggerConds */TSM_triggerCond_T_SDM_Commands_Pkg *triggerConds)
{
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L10 */
  static kcg_bool _L10;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L20 */
  static kcg_bool _L20;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L22 */
  static kcg_int _L22;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L40 */
  static kcg_bool _L40;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L41 */
  static kcg_int _L41;
  
  _L41 = (*speeds).V_MRSP + (*speeds).dV_warning_V_MRSP;
  _L40 = ((*speeds).V_release < (*speeds).V_est) & ((*speeds).V_est <=
      (*speeds).V_MRSP);
  _L22 = (*speeds).V_MRSP + (*speeds).dV_sbi_V_MRSP;
  _L20 = (*speeds).V_est <= _L22;
  _L10 = (*speeds).V_est <= (*speeds).V_MRSP + (*speeds).dV_ebi_V_MRSP;
  (*triggerConds).t13 = _L10 & ((*speeds).V_est > (*speeds).V_release);
  (*triggerConds).t14 = !_L10;
  (*triggerConds).t11 = (_L22 < (*speeds).V_est) & _L10;
  (*triggerConds).t12 = (*triggerConds).t11;
  (*triggerConds).t8 = ((*speeds).dV_warning_V_MRSP + (*speeds).V_MRSP <
      (*speeds).V_est) & _L20;
  (*triggerConds).t9 = (*triggerConds).t8;
  (*triggerConds).t5 = ((*speeds).V_MRSP < (*speeds).V_est) &
    ((*speeds).V_est <= _L41);
  (*triggerConds).t6 = (*triggerConds).t5;
  (*triggerConds).t3 = _L40;
  (*triggerConds).t4 = (*triggerConds).t3;
  (*triggerConds).t1 = (*speeds).V_est <= (*speeds).V_release;
  (*triggerConds).t2 = _L40;
  (*triggerConds).t7 = (_L41 >= (*speeds).V_est) & ((*speeds).V_est >
      (*speeds).V_release);
  (*triggerConds).t10 = _L20 & ((*speeds).V_est > (*speeds).V_release);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

