/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "storeTIUData_trainData_pkg.h"

/* trainData_pkg::storeTIUData */
void storeTIUData_trainData_pkg(
  /* trainData_pkg::storeTIUData::trainDatafromTIU */ trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainData_pkg::storeTIUData::originalTrainData */ trainData_T_TIU_Types_Pkg *originalTrainData,
  /* trainData_pkg::storeTIUData::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::storeTIUData::actualTrainData */ trainData_T_TIU_Types_Pkg *actualTrainData,
  /* trainData_pkg::storeTIUData::updatedStatus */ trainDataStatus_T_trainData_Types_pkg *updatedStatus)
{
  static trainData_T_TIU_Types_Pkg noname;
  static trainDataStatus_T_trainData_Types_pkg _1_noname;
  /* trainData_pkg::storeTIUData::_L1 */
  static trainData_T_TIU_Types_Pkg _L1;
  /* trainData_pkg::storeTIUData::_L2 */
  static trainData_T_TIU_Types_Pkg _L2;
  /* trainData_pkg::storeTIUData::_L3 */
  static trainDataStatus_T_trainData_Types_pkg _L3;
  /* trainData_pkg::storeTIUData::_L4 */
  static trainDataStatus_T_trainData_Types_pkg _L4;
  /* trainData_pkg::storeTIUData::_L5 */
  static kcg_bool _L5;
  /* trainData_pkg::storeTIUData::_L6 */
  static trainDataStatus_T_trainData_Types_pkg _L6;
  
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L1, trainDatafromTIU);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L2, originalTrainData);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L3, actualStatus);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &_L6,
    (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
  _L5 = kcg_true;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L4, &_L6);
  if (kcg_true) {
    _L4.valid = _L5;
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(updatedStatus, &_L4);
  kcg_copy_trainData_T_TIU_Types_Pkg(actualTrainData, &_L1);
  kcg_copy_trainData_T_TIU_Types_Pkg(&noname, &_L2);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_1_noname, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** storeTIUData_trainData_pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

