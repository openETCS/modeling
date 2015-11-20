/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRevokationCondForTSM_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcRevokationCondForTSM */
void CalcRevokationCondForTSM_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::revokationConds */ TSM_revokeCond_T_SDM_Commands_Pkg *revokationConds)
{
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::_L1 */
  static Speeds_T_SDM_Types_Pkg _L1;
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::_L2 */
  static SDM_Locations_T_SDM_Types_Pkg _L2;
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::_L59 */
  static TSM_revokeCond_T_SDM_Commands_Pkg _L59;
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::_L60 */
  static TSM_revokeCond_T_SDM_Commands_Pkg _L60;
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::_L66 */
  static TargetType_T_TargetManagement_types _L66;
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::_L65 */
  static kcg_bool _L65;
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::_L64 */
  static kcg_bool _L64;
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::_L63 */
  static TargetType_T_TargetManagement_types _L63;
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::_L62 */
  static Target_T_TargetManagement_types _L62;
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::_L61 */
  static kcg_bool _L61;
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::_L67 */
  static TSM_revokeCond_T_SDM_Commands_Pkg _L67;
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::_L68 */
  static TargetType_T_TargetManagement_types _L68;
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::_L69 */
  static trainPosition_T_TrainPosition_Types_Pck _L69;
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::_L70 */
  static kcg_bool _L70;
  
  kcg_copy_Speeds_T_SDM_Types_Pkg(&_L1, speeds);
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&_L2, locations);
  _L66 = EoA_TargetManagement_types;
  kcg_copy_Target_T_TargetManagement_types(&_L62, mrdt);
  _L68 = _L62.targetType;
  _L64 = _L66 == _L68;
  _L63 = SvL_TargetManagement_types;
  _L65 = _L68 == _L63;
  _L61 = _L64 | _L65;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L69, trainLocations);
  _L70 = floiIsSB1;
  /* 1 */
  CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg(&_L2, &_L1, &_L69, _L70, &_L59);
  /* 1 */
  CalcRevokCondForTSM_MRSP_LOA_SDM_Commands_Pkg(&_L2, &_L1, &_L69, _L70, &_L60);
  /* 1 */ if (_L61) {
    kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg(&_L67, &_L59);
  }
  else {
    kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg(&_L67, &_L60);
  }
  kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg(revokationConds, &_L67);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcRevokationCondForTSM_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

