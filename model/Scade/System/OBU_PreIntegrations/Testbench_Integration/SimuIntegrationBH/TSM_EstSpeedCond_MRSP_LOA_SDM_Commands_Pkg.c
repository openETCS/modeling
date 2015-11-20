/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA */
void TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::triggerConds */ TSM_triggerCond_T_SDM_Commands_Pkg *triggerConds)
{
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L1 */
  static Speeds_T_SDM_Types_Pkg _L1;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L2 */
  static kcg_bool _L2;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L3 */
  static kcg_bool _L3;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L4 */
  static kcg_int _L4;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L5 */
  static kcg_bool _L5;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L6 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L6;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L7 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L7;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L8 */
  static kcg_bool _L8;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L9 */
  static TSM_triggerCond_T_SDM_Commands_Pkg _L9;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L10 */
  static kcg_bool _L10;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L11 */
  static kcg_bool _L11;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L12 */
  static kcg_int _L12;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L13 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L13;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L14 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L14;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L15 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L15;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L16 */
  static kcg_bool _L16;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L17 */
  static kcg_bool _L17;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L18 */
  static kcg_int _L18;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L19 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L19;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L20 */
  static kcg_bool _L20;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L21 */
  static kcg_bool _L21;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L22 */
  static kcg_int _L22;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L23 */
  static kcg_int _L23;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L24 */
  static kcg_bool _L24;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L25 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L25;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L26 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L26;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L27 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L27;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L28 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L28;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L29 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L29;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L30 */
  static kcg_bool _L30;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L31 */
  static kcg_bool _L31;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L32 */
  static kcg_bool _L32;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L33 */
  static kcg_int _L33;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L34 */
  static kcg_int _L34;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L35 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L35;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L36 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L36;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L37 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L37;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L38 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L38;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L39 */
  static kcg_bool _L39;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L40 */
  static kcg_bool _L40;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L41 */
  static kcg_int _L41;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L42 */
  static kcg_bool _L42;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L43 */
  static kcg_bool _L43;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L44 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L44;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L45 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L45;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L46 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L46;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L47 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L47;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L48 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L48;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L49 */
  static kcg_bool _L49;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L50 */
  static kcg_bool _L50;
  /* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA::_L51 */
  static kcg_bool _L51;
  
  kcg_copy_Speeds_T_SDM_Types_Pkg(&_L1, speeds);
  _L48 = _L1.V_est;
  _L47 = _L1.V_target;
  _L51 = _L48 <= _L47;
  _L50 = _L47 < _L48;
  _L46 = _L1.V_MRSP;
  _L49 = _L48 <= _L46;
  _L40 = _L50 & _L49;
  _L45 = _L1.V_est;
  _L43 = _L46 < _L45;
  _L44 = _L1.dV_warning_V_MRSP;
  _L41 = _L46 + _L44;
  _L42 = _L45 <= _L41;
  _L39 = _L43 & _L42;
  _L38 = _L1.V_MRSP;
  _L33 = _L44 + _L38;
  _L37 = _L1.V_est;
  _L32 = _L33 < _L37;
  _L36 = _L1.V_target;
  _L35 = _L1.dV_warning_V_target;
  _L34 = _L36 + _L35;
  _L31 = _L37 <= _L34;
  _L30 = _L32 & _L31;
  _L29 = _L1.dV_warning_V_MRSP;
  _L27 = _L1.V_MRSP;
  _L23 = _L29 + _L27;
  _L28 = _L1.V_est;
  _L21 = _L23 < _L28;
  _L26 = _L1.dV_sbi_V_MRSP;
  _L22 = _L27 + _L26;
  _L20 = _L28 <= _L22;
  _L24 = _L21 & _L20;
  _L25 = _L1.V_target;
  _L19 = _L1.dV_sbi_V_target;
  _L18 = _L25 + _L19;
  _L16 = _L18 < _L28;
  _L17 = _L20 & _L16;
  _L15 = _L1.V_est;
  _L8 = _L22 < _L15;
  _L14 = _L1.V_MRSP;
  _L13 = _L1.dV_ebi_V_MRSP;
  _L12 = _L14 + _L13;
  _L10 = _L15 <= _L12;
  _L11 = _L8 & _L10;
  _L7 = _L1.V_target;
  _L6 = _L1.dV_ebi_V_target;
  _L4 = _L7 + _L6;
  _L3 = _L4 < _L15;
  _L5 = _L10 & _L3;
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
** TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

