/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL */
void TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::triggerConds */ TSM_triggerCond_T_SDM_Commands_Pkg *triggerConds)
{
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L2 */
  static kcg_bool _L2;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L5 */
  static kcg_bool _L5;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L7 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L7;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L8 */
  static kcg_bool _L8;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L9 */
  static TSM_triggerCond_T_SDM_Commands_Pkg _L9;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L10 */
  static kcg_bool _L10;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L11 */
  static kcg_bool _L11;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L12 */
  static kcg_int _L12;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L13 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L13;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L14 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L14;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L15 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L15;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L17 */
  static kcg_bool _L17;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L20 */
  static kcg_bool _L20;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L21 */
  static kcg_bool _L21;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L22 */
  static kcg_int _L22;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L23 */
  static kcg_int _L23;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L24 */
  static kcg_bool _L24;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L25 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L25;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L26 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L26;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L27 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L27;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L28 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L28;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L29 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L29;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L30 */
  static kcg_bool _L30;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L36 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L36;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L37 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L37;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L39 */
  static kcg_bool _L39;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L40 */
  static kcg_bool _L40;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L41 */
  static kcg_int _L41;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L42 */
  static kcg_bool _L42;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L43 */
  static kcg_bool _L43;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L44 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L44;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L45 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L45;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L46 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L46;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L47 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L47;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L48 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L48;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L49 */
  static kcg_bool _L49;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L50 */
  static kcg_bool _L50;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L51 */
  static kcg_bool _L51;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L52 */
  static kcg_bool _L52;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L53 */
  static kcg_bool _L53;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L54 */
  static kcg_bool _L54;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L55 */
  static kcg_bool _L55;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL::_L86 */
  static Speeds_T_SDM_Types_Pkg _L86;
  
  kcg_copy_Speeds_T_SDM_Types_Pkg(&_L86, speeds);
  _L48 = _L86.V_est;
  _L47 = _L86.V_release;
  _L51 = _L48 <= _L47;
  _L50 = _L47 < _L48;
  _L46 = _L86.V_MRSP;
  _L49 = _L48 <= _L46;
  _L40 = _L50 & _L49;
  _L45 = _L86.V_est;
  _L43 = _L46 < _L45;
  _L44 = _L86.dV_warning_V_MRSP;
  _L41 = _L46 + _L44;
  _L42 = _L45 <= _L41;
  _L39 = _L43 & _L42;
  _L37 = _L86.V_est;
  _L52 = _L41 >= _L37;
  _L36 = _L86.V_release;
  _L53 = _L37 > _L36;
  _L30 = _L52 & _L53;
  _L29 = _L86.dV_warning_V_MRSP;
  _L27 = _L86.V_MRSP;
  _L23 = _L29 + _L27;
  _L28 = _L86.V_est;
  _L21 = _L23 < _L28;
  _L26 = _L86.dV_sbi_V_MRSP;
  _L22 = _L27 + _L26;
  _L20 = _L28 <= _L22;
  _L24 = _L21 & _L20;
  _L25 = _L86.V_release;
  _L54 = _L28 > _L25;
  _L17 = _L20 & _L54;
  _L15 = _L86.V_est;
  _L8 = _L22 < _L15;
  _L14 = _L86.V_MRSP;
  _L13 = _L86.dV_ebi_V_MRSP;
  _L12 = _L14 + _L13;
  _L10 = _L15 <= _L12;
  _L11 = _L8 & _L10;
  _L7 = _L86.V_release;
  _L55 = _L15 > _L7;
  _L5 = _L10 & _L55;
  _L2 = !_L10;
  _L9.t1 = _L51;
  _L9.t2 = _L40;
  _L9.t3 = _L40;
  _L9.t4 = _L40;
  _L9.t5 = _L39;
  _L9.t6 = _L39;
  _L9.t7 = _L30;
  _L9.t8 = _L24;
  _L9.t9 = _L24;
  _L9.t10 = _L17;
  _L9.t11 = _L11;
  _L9.t12 = _L11;
  _L9.t13 = _L5;
  _L9.t14 = _L2;
  kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(triggerConds, &_L9);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

