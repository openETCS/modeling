/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcModeTransOutput_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcModeTransOutput */
void CalcModeTransOutput_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcModeTransOutput::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcModeTransOutput::TrainData_int */ trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  /* SDM_Commands_Pkg::CalcModeTransOutput::eoaOverpassed */ kcg_bool *eoaOverpassed,
  /* SDM_Commands_Pkg::CalcModeTransOutput::targetSpeedReached */ kcg_bool *targetSpeedReached)
{
  /* SDM_Commands_Pkg::CalcModeTransOutput::_L9 */
  static Speeds_T_SDM_Types_Pkg _L9;
  /* SDM_Commands_Pkg::CalcModeTransOutput::_L6 */
  static SDM_Locations_T_SDM_Types_Pkg _L6;
  /* SDM_Commands_Pkg::CalcModeTransOutput::_L4 */
  static trainPosition_T_TrainPosition_Types_Pck _L4;
  /* SDM_Commands_Pkg::CalcModeTransOutput::_L19 */
  static kcg_bool _L19;
  /* SDM_Commands_Pkg::CalcModeTransOutput::_L20 */
  static kcg_int _L20;
  /* SDM_Commands_Pkg::CalcModeTransOutput::_L23 */
  static Location_T_Obu_BasicTypes_Pkg _L23;
  /* SDM_Commands_Pkg::CalcModeTransOutput::_L24 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L24;
  /* SDM_Commands_Pkg::CalcModeTransOutput::_L27 */
  static kcg_bool _L27;
  /* SDM_Commands_Pkg::CalcModeTransOutput::_L28 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L28;
  /* SDM_Commands_Pkg::CalcModeTransOutput::_L29 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L29;
  /* SDM_Commands_Pkg::CalcModeTransOutput::_L30 */
  static trainData_internal_t_SDM_Types_Pkg _L30;
  /* SDM_Commands_Pkg::CalcModeTransOutput::_L32 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L32;
  
  kcg_copy_Speeds_T_SDM_Types_Pkg(&_L9, speeds);
  _L29 = _L9.V_est;
  _L28 = _L9.V_target;
  _L27 = _L29 <= _L28;
  *targetSpeedReached = _L27;
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&_L6, locations);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L4, trainLocations);
  _L24 = _L6.d_eoa;
  _L23 = _L4.estimatedFrontEndPosition;
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L30, TrainData_int);
  _L32 = _L30.offsetAntennaL1;
  _L20 = _L23 - _L32;
  _L19 = _L24 <= _L20;
  *eoaOverpassed = _L19;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcModeTransOutput_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

