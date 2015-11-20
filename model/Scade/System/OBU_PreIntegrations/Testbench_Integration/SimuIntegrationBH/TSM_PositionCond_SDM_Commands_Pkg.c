/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TSM_PositionCond_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::TSM_PositionCond */
void TSM_PositionCond_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::TSM_PositionCond::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::TSM_PositionCond::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::TSM_PositionCond::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::TSM_PositionCond::triggerConds */ TSM_triggerCond_T_SDM_Commands_Pkg *triggerConds)
{
  /* SDM_Commands_Pkg::TSM_PositionCond::FLOI_eq_SBI1 */
  static kcg_bool FLOI_eq_SBI1;
  /* SDM_Commands_Pkg::TSM_PositionCond::FLOI_eq_SBI2 */
  static kcg_bool FLOI_eq_SBI2;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L7 */
  static SDM_Locations_T_SDM_Types_Pkg _L7;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L6 */
  static kcg_bool _L6;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L3 */
  static TSM_triggerCond_T_SDM_Commands_Pkg _L3;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L10 */
  static Location_T_Obu_BasicTypes_Pkg _L10;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L11 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L11;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L12 */
  static Location_T_Obu_BasicTypes_Pkg _L12;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L13 */
  static kcg_bool _L13;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L14 */
  static kcg_bool _L14;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L15 */
  static kcg_bool _L15;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L16 */
  static kcg_bool _L16;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L17 */
  static kcg_bool _L17;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L18 */
  static kcg_bool _L18;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L19 */
  static kcg_bool _L19;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L20 */
  static kcg_bool _L20;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L21 */
  static kcg_bool _L21;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L22 */
  static kcg_bool _L22;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L23 */
  static kcg_bool _L23;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L24 */
  static kcg_bool _L24;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L25 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L25;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L26 */
  static Location_T_Obu_BasicTypes_Pkg _L26;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L27 */
  static kcg_bool _L27;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L28 */
  static kcg_bool _L28;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L29 */
  static kcg_bool _L29;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L30 */
  static kcg_bool _L30;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L31 */
  static kcg_bool _L31;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L32 */
  static kcg_bool _L32;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L33 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L33;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L34 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L34;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L35 */
  static Location_T_Obu_BasicTypes_Pkg _L35;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L36 */
  static kcg_bool _L36;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L38 */
  static kcg_bool _L38;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L39 */
  static kcg_bool _L39;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L40 */
  static kcg_bool _L40;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L41 */
  static kcg_bool _L41;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L42 */
  static kcg_bool _L42;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L43 */
  static kcg_bool _L43;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L44 */
  static kcg_bool _L44;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L45 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L45;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L46 */
  static Location_T_Obu_BasicTypes_Pkg _L46;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L47 */
  static kcg_bool _L47;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L48 */
  static kcg_bool _L48;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L49 */
  static kcg_bool _L49;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L50 */
  static kcg_bool _L50;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L51 */
  static kcg_bool _L51;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L54 */
  static kcg_bool _L54;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L55 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L55;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L56 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L56;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L57 */
  static Location_T_Obu_BasicTypes_Pkg _L57;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L58 */
  static kcg_bool _L58;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L59 */
  static kcg_bool _L59;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L60 */
  static kcg_bool _L60;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L61 */
  static kcg_bool _L61;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L62 */
  static kcg_bool _L62;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L63 */
  static kcg_bool _L63;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L64 */
  static kcg_bool _L64;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L65 */
  static kcg_bool _L65;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L66 */
  static kcg_bool _L66;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L67 */
  static kcg_bool _L67;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L68 */
  static kcg_bool _L68;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L69 */
  static kcg_bool _L69;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L70 */
  static kcg_bool _L70;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L71 */
  static Location_T_Obu_BasicTypes_Pkg _L71;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L72 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L72;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L73 */
  static kcg_bool _L73;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L74 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L74;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L75 */
  static kcg_bool _L75;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L76 */
  static kcg_bool _L76;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L77 */
  static kcg_bool _L77;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L78 */
  static kcg_bool _L78;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L79 */
  static kcg_bool _L79;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L81 */
  static trainPosition_T_TrainPosition_Types_Pck _L81;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L82 */
  static kcg_bool _L82;
  /* SDM_Commands_Pkg::TSM_PositionCond::_L83 */
  static kcg_bool _L83;
  
  _L6 = kcg_true;
  _L82 = floiIsSB1;
  _L83 = !_L82;
  FLOI_eq_SBI2 = _L83;
  _L18 = FLOI_eq_SBI2;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L81, trainLocations);
  _L10 = _L81.maxSafeFrontEndPostion;
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&_L7, locations);
  _L11 = _L7.d_I_of_V_est;
  _L13 = _L10 <= _L11;
  _L15 = _L18 & _L13;
  _L12 = _L81.estimatedFrontEndPosition;
  _L14 = _L11 >= _L12;
  FLOI_eq_SBI1 = _L82;
  _L19 = FLOI_eq_SBI1;
  _L17 = _L14 & _L19;
  _L16 = _L15 | _L17;
  _L20 = !_L13;
  _L22 = _L18 & _L20;
  _L21 = !_L14;
  _L23 = _L21 & _L19;
  _L24 = _L22 | _L23;
  _L25 = _L7.d_P_of_V_est;
  _L27 = _L12 > _L25;
  _L29 = _L19 & _L27;
  _L26 = _L81.maxSafeFrontEndPostion;
  _L28 = _L25 < _L26;
  _L31 = FLOI_eq_SBI2;
  _L30 = _L28 & _L31;
  _L32 = _L29 | _L30;
  _L33 = _L7.d_I_of_V_MRSP;
  _L36 = _L26 > _L33;
  _L34 = _L7.d_W_of_V_est;
  _L38 = _L26 <= _L34;
  _L39 = _L31 & _L36 & _L38;
  _L35 = _L81.estimatedFrontEndPosition;
  _L40 = _L33 < _L35;
  _L41 = _L34 >= _L35;
  _L44 = FLOI_eq_SBI1;
  _L42 = _L40 & _L41 & _L44;
  _L43 = _L39 | _L42;
  _L45 = _L7.d_W_of_V_est;
  _L47 = _L35 > _L45;
  _L49 = _L44 & _L47;
  _L46 = _L81.maxSafeFrontEndPostion;
  _L48 = _L45 < _L46;
  _L51 = FLOI_eq_SBI2;
  _L50 = _L48 & _L51;
  _L54 = _L49 | _L50;
  _L55 = _L7.d_I_of_V_MRSP;
  _L58 = _L46 > _L55;
  _L56 = _L7.d_FLOI_of_V_est;
  _L59 = _L46 <= _L56;
  _L60 = _L51 & _L58 & _L59;
  _L57 = _L81.estimatedFrontEndPosition;
  _L61 = _L55 < _L57;
  _L62 = _L56 >= _L57;
  _L64 = FLOI_eq_SBI1;
  _L63 = _L61 & _L62 & _L64;
  _L65 = _L60 | _L63;
  _L66 = !_L59;
  _L68 = _L51 & _L66;
  _L67 = !_L62;
  _L69 = _L67 & _L64;
  _L70 = _L68 | _L69;
  _L71 = _L81.maxSafeFrontEndPostion;
  _L72 = _L7.d_I_of_V_MRSP;
  _L73 = _L71 <= _L72;
  _L76 = !_L73;
  _L74 = _L7.d_EBI_of_V_est;
  _L75 = _L71 <= _L74;
  _L77 = _L76 & _L75;
  _L78 = !_L75;
  _L79 = kcg_true;
  _L3.t1 = _L6;
  _L3.t2 = _L16;
  _L3.t3 = _L24;
  _L3.t4 = _L32;
  _L3.t5 = _L16;
  _L3.t6 = _L43;
  _L3.t7 = _L54;
  _L3.t8 = _L16;
  _L3.t9 = _L65;
  _L3.t10 = _L70;
  _L3.t11 = _L73;
  _L3.t12 = _L77;
  _L3.t13 = _L78;
  _L3.t14 = _L79;
  kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(triggerConds, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TSM_PositionCond_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

