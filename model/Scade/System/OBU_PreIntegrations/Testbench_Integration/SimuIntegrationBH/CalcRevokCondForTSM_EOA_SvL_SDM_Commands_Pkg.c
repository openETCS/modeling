/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL */
void CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::revokationConds */ TSM_revokeCond_T_SDM_Commands_Pkg *revokationConds)
{
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::FLOI_eq_SBI2 */
  static kcg_bool FLOI_eq_SBI2;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::FLOI_eq_SBI1 */
  static kcg_bool FLOI_eq_SBI1;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L37 */
  static Location_T_Obu_BasicTypes_Pkg _L37;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L34 */
  static Location_T_Obu_BasicTypes_Pkg _L34;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L33 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L33;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L32 */
  static kcg_bool _L32;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L31 */
  static kcg_bool _L31;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L30 */
  static kcg_bool _L30;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L29 */
  static SDM_Locations_T_SDM_Types_Pkg _L29;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L26 */
  static kcg_bool _L26;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L25 */
  static kcg_bool _L25;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L24 */
  static kcg_bool _L24;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L23 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L23;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L22 */
  static kcg_bool _L22;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L21 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L21;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L20 */
  static kcg_bool _L20;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L19 */
  static kcg_bool _L19;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L17 */
  static TSM_revokeCond_T_SDM_Commands_Pkg _L17;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L16 */
  static kcg_bool _L16;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L15 */
  static Location_T_Obu_BasicTypes_Pkg _L15;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L12 */
  static kcg_bool _L12;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L11 */
  static kcg_bool _L11;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L10 */
  static kcg_bool _L10;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L9 */
  static kcg_bool _L9;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L8 */
  static kcg_bool _L8;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L7 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L7;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L6 */
  static kcg_bool _L6;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L4 */
  static kcg_bool _L4;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L3 */
  static kcg_bool _L3;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L2 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L2;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L1 */
  static kcg_bool _L1;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L51 */
  static Speeds_T_SDM_Types_Pkg _L51;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L71 */
  static trainPosition_T_TrainPosition_Types_Pck _L71;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L72 */
  static kcg_bool _L72;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L73 */
  static kcg_bool _L73;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L74 */
  static kcg_bool _L74;
  
  kcg_copy_Speeds_T_SDM_Types_Pkg(&_L51, speeds);
  _L74 = _L51.OdoStandStill;
  _L21 = _L51.V_est;
  _L7 = _L51.V_release;
  _L31 = _L21 <= _L7;
  _L16 = !_L31;
  _L2 = _L51.V_MRSP;
  _L26 = _L21 <= _L2;
  _L9 = _L16 & _L26;
  _L72 = floiIsSB1;
  _L73 = !_L72;
  FLOI_eq_SBI2 = _L73;
  _L19 = FLOI_eq_SBI2;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L71, trainLocations);
  _L34 = _L71.maxSafeFrontEndPostion;
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&_L29, locations);
  _L33 = _L29.d_I_of_V_est;
  _L3 = _L34 <= _L33;
  _L6 = _L19 & _L3;
  _L37 = _L71.estimatedFrontEndPosition;
  _L4 = _L33 >= _L37;
  FLOI_eq_SBI1 = _L72;
  _L8 = FLOI_eq_SBI1;
  _L12 = _L4 & _L8;
  _L25 = _L6 | _L12;
  _L10 = _L9 & _L25;
  _L23 = _L29.d_P_of_V_est;
  _L22 = _L37 <= _L23;
  _L11 = _L8 & _L22;
  _L15 = _L71.maxSafeFrontEndPostion;
  _L1 = _L23 >= _L15;
  _L24 = FLOI_eq_SBI2;
  _L30 = _L1 & _L24;
  _L20 = _L11 | _L30;
  _L32 = _L9 & _L20;
  _L17.r0 = _L74;
  _L17.r1 = _L31;
  _L17.r2 = _L10;
  _L17.r3 = _L32;
  kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg(revokationConds, &_L17);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

