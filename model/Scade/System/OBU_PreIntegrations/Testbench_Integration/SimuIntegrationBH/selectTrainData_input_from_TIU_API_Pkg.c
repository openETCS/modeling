/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "selectTrainData_input_from_TIU_API_Pkg.h"

/* input_from_TIU_API_Pkg::selectTrainData */
void selectTrainData_input_from_TIU_API_Pkg(
  /* input_from_TIU_API_Pkg::selectTrainData::newTIUTrainData */ trainData_T_TIU_Types_Pkg *newTIUTrainData,
  /* input_from_TIU_API_Pkg::selectTrainData::EVC_trainData */ trainData_T_TIU_Types_Pkg *EVC_trainData,
  /* input_from_TIU_API_Pkg::selectTrainData::outTrainData */ trainData_T_TIU_Types_Pkg *outTrainData)
{
  /* input_from_TIU_API_Pkg::selectTrainData::_L2 */
  static trainData_T_TIU_Types_Pkg _L2;
  /* input_from_TIU_API_Pkg::selectTrainData::_L4 */
  static trainData_T_TIU_Types_Pkg _L4;
  /* input_from_TIU_API_Pkg::selectTrainData::_L6 */
  static kcg_bool _L6;
  /* input_from_TIU_API_Pkg::selectTrainData::_L8 */
  static kcg_bool _L8;
  /* input_from_TIU_API_Pkg::selectTrainData::_L9 */
  static trainData_T_TIU_Types_Pkg _L9;
  /* input_from_TIU_API_Pkg::selectTrainData::_L10 */
  static trainData_T_TIU_Types_Pkg _L10;
  /* input_from_TIU_API_Pkg::selectTrainData::_L14 */
  static trainData_T_TIU_Types_Pkg _L14;
  
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L2, EVC_trainData);
  _L6 = _L2.valid;
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L10, newTIUTrainData);
  _L8 = _L10.valid;
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &_L14,
    (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData);
  /* 2 */ if (_L8) {
    kcg_copy_trainData_T_TIU_Types_Pkg(&_L9, &_L10);
  }
  else {
    kcg_copy_trainData_T_TIU_Types_Pkg(&_L9, &_L14);
  }
  /* 1 */ if (_L6) {
    kcg_copy_trainData_T_TIU_Types_Pkg(&_L4, &_L2);
  }
  else {
    kcg_copy_trainData_T_TIU_Types_Pkg(&_L4, &_L9);
  }
  kcg_copy_trainData_T_TIU_Types_Pkg(outTrainData, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** selectTrainData_input_from_TIU_API_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

