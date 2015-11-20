/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRevokCondForTSM_MRSP_LOA_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA */
void CalcRevokCondForTSM_MRSP_LOA_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::revokationConds */ TSM_revokeCond_T_SDM_Commands_Pkg *revokationConds)
{
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::FLOI_eq_SBI2 */
  static kcg_bool FLOI_eq_SBI2;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::FLOI_eq_SBI1 */
  static kcg_bool FLOI_eq_SBI1;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L37 */
  static kcg_bool _L37;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L36 */
  static TSM_revokeCond_T_SDM_Commands_Pkg _L36;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L35 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L35;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L34 */
  static kcg_bool _L34;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L32 */
  static kcg_bool _L32;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L31 */
  static kcg_bool _L31;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L29 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L29;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L28 */
  static kcg_bool _L28;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L27 */
  static Location_T_Obu_BasicTypes_Pkg _L27;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L26 */
  static kcg_bool _L26;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L25 */
  static SDM_Locations_T_SDM_Types_Pkg _L25;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L23 */
  static Location_T_Obu_BasicTypes_Pkg _L23;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L22 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L22;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L21 */
  static kcg_bool _L21;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L20 */
  static kcg_bool _L20;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L19 */
  static kcg_bool _L19;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L16 */
  static kcg_bool _L16;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L15 */
  static kcg_bool _L15;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L14 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L14;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L13 */
  static kcg_bool _L13;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L12 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L12;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L11 */
  static kcg_bool _L11;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L10 */
  static kcg_bool _L10;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L8 */
  static kcg_bool _L8;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L7 */
  static kcg_bool _L7;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L6 */
  static Location_T_Obu_BasicTypes_Pkg _L6;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L5 */
  static Speeds_T_SDM_Types_Pkg _L5;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L3 */
  static kcg_bool _L3;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L2 */
  static kcg_bool _L2;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L1 */
  static kcg_bool _L1;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L40 */
  static trainPosition_T_TrainPosition_Types_Pck _L40;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L41 */
  static kcg_bool _L41;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L42 */
  static kcg_bool _L42;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L43 */
  static kcg_bool _L43;
  
  _L41 = floiIsSB1;
  FLOI_eq_SBI1 = _L41;
  _L1 = FLOI_eq_SBI1;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L40, trainLocations);
  _L27 = _L40.estimatedFrontEndPosition;
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&_L25, locations);
  _L14 = _L25.d_P_of_V_est;
  _L28 = _L27 <= _L14;
  _L2 = _L1 & _L28;
  _L22 = _L25.d_I_of_V_est;
  _L32 = _L22 >= _L27;
  _L3 = _L32 & _L1;
  kcg_copy_Speeds_T_SDM_Types_Pkg(&_L5, speeds);
  _L6 = _L40.maxSafeFrontEndPostion;
  _L12 = _L5.V_est;
  _L35 = _L5.V_target;
  _L20 = _L12 <= _L35;
  _L7 = !_L20;
  _L29 = _L5.V_MRSP;
  _L16 = _L12 <= _L29;
  _L37 = _L7 & _L16;
  _L13 = _L14 >= _L6;
  _L42 = !_L41;
  FLOI_eq_SBI2 = _L42;
  _L26 = FLOI_eq_SBI2;
  _L19 = _L13 & _L26;
  _L11 = _L2 | _L19;
  _L8 = _L37 & _L11;
  _L10 = FLOI_eq_SBI2;
  _L23 = _L40.maxSafeFrontEndPostion;
  _L31 = _L23 <= _L22;
  _L34 = _L10 & _L31;
  _L15 = _L34 | _L3;
  _L43 = _L5.OdoStandStill;
  _L21 = _L37 & _L15;
  _L36.r0 = _L43;
  _L36.r1 = _L20;
  _L36.r2 = _L21;
  _L36.r3 = _L8;
  kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg(revokationConds, &_L36);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcRevokCondForTSM_MRSP_LOA_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

