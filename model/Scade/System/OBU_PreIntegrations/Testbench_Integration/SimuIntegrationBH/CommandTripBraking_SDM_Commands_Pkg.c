/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CommandTripBraking_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CommandTripBraking */
EB_command_T_SDM_Commands_Pkg CommandTripBraking_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CommandTripBraking::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CommandTripBraking::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CommandTripBraking::TrainData_int */ trainData_internal_t_SDM_Types_Pkg *TrainData_int)
{
  /* SDM_Commands_Pkg::CommandTripBraking::_L4 */
  static Target_T_TargetManagement_types _L4;
  /* SDM_Commands_Pkg::CommandTripBraking::_L9 */
  static kcg_bool _L9;
  /* SDM_Commands_Pkg::CommandTripBraking::_L10 */
  static kcg_int _L10;
  /* SDM_Commands_Pkg::CommandTripBraking::_L20 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L20;
  /* SDM_Commands_Pkg::CommandTripBraking::_L21 */
  static TargetType_T_TargetManagement_types _L21;
  /* SDM_Commands_Pkg::CommandTripBraking::_L26 */
  static kcg_bool _L26;
  /* SDM_Commands_Pkg::CommandTripBraking::_L25 */
  static TargetType_T_TargetManagement_types _L25;
  /* SDM_Commands_Pkg::CommandTripBraking::_L24 */
  static kcg_bool _L24;
  /* SDM_Commands_Pkg::CommandTripBraking::_L23 */
  static TargetType_T_TargetManagement_types _L23;
  /* SDM_Commands_Pkg::CommandTripBraking::_L22 */
  static kcg_bool _L22;
  /* SDM_Commands_Pkg::CommandTripBraking::_L27 */
  static kcg_bool _L27;
  /* SDM_Commands_Pkg::CommandTripBraking::_L29 */
  static trainPosition_T_TrainPosition_Types_Pck _L29;
  /* SDM_Commands_Pkg::CommandTripBraking::_L30 */
  static Location_T_Obu_BasicTypes_Pkg _L30;
  /* SDM_Commands_Pkg::CommandTripBraking::_L31 */
  static kcg_bool _L31;
  /* SDM_Commands_Pkg::CommandTripBraking::_L32 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L32;
  /* SDM_Commands_Pkg::CommandTripBraking::_L39 */
  static trainData_internal_t_SDM_Types_Pkg _L39;
  /* SDM_Commands_Pkg::CommandTripBraking::_L40 */
  static kcg_bool _L40;
  /* SDM_Commands_Pkg::CommandTripBraking::_L41 */
  static kcg_bool _L41;
  /* SDM_Commands_Pkg::CommandTripBraking::_L42 */
  static kcg_bool _L42;
  /* SDM_Commands_Pkg::CommandTripBraking::eb */
  static EB_command_T_SDM_Commands_Pkg eb;
  
  kcg_copy_Target_T_TargetManagement_types(&_L4, mrdt);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L29, trainLocations);
  _L30 = _L29.minSafeFrontEndPosition;
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L39, TrainData_int);
  _L32 = _L39.offsetAntennaL1;
  _L10 = _L30 - _L32;
  _L20 = _L4.distance;
  _L9 = _L10 > _L20;
  _L21 = _L4.targetType;
  _L23 = EoA_TargetManagement_types;
  _L22 = _L23 == _L21;
  _L25 = SvL_TargetManagement_types;
  _L24 = _L21 == _L25;
  _L26 = _L22 | _L24;
  _L40 = _L29.trainPositionIsUnknown;
  _L41 = !_L40;
  _L31 = _L29.valid;
  _L42 = _L41 & _L31;
  _L27 = _L42 & _L9 & _L26;
  eb = _L27;
  return eb;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CommandTripBraking_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

