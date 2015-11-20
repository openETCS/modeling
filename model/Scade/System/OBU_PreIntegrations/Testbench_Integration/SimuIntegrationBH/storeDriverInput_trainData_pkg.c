/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "storeDriverInput_trainData_pkg.h"

/* trainData_pkg::storeDriverInput */
void storeDriverInput_trainData_pkg(
  /* trainData_pkg::storeDriverInput::fromDMI_TrainData */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *fromDMI_TrainData,
  /* trainData_pkg::storeDriverInput::trainDataAckfromDriver */ DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trainData_pkg::storeDriverInput::originalTrainData */ trainData_T_TIU_Types_Pkg *originalTrainData,
  /* trainData_pkg::storeDriverInput::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::storeDriverInput::trainDataForEVC */ trainData_T_TIU_Types_Pkg *_2_trainDataForEVC,
  /* trainData_pkg::storeDriverInput::updatedStatus */ trainDataStatus_T_trainData_Types_pkg *updatedStatus)
{
  /* trainData_pkg::storeDriverInput::trainDataForEVC */
  static trainData_T_TIU_Types_Pkg _1_trainDataForEVC;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L34 */
  static kcg_bool _L34_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L16 */
  static M_LOADINGGAUGE _L16_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L17 */
  static kcg_int _L17_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L18 */
  static M_AIRTIGHT _L18_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L19 */
  static M_AXLELOADCAT _L19_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L20 */
  static NC_CDTRAIN _L20_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L22 */
  static NC_TRAIN _L22_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L23 */
  static aTractionIdentity_T_Packet_TrainTypes_Pkg _L23_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L24 */
  static kcg_int _L24_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L25 */
  static kcg_int _L25_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L26 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L26_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L27 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L27_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L28 */
  static kcg_bool _L28_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L29 */
  static trainData_T_TIU_Types_Pkg _L29_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L30 */
  static aNID_NTC_T_Packet_TrainTypes_Pkg _L30_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L31 */
  static trainData_T_TIU_Types_Pkg _L31_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L32 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L32_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::then::_L33 */
  static M_BRAKEPERCT_DMI_Types_Pkg _L33_IfBlock1;
  /* trainData_pkg::storeDriverInput::trainDataForEVC */
  static trainData_T_TIU_Types_Pkg trainDataForEVC;
  /* trainData_pkg::storeDriverInput::IfBlock1::else::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::else::_L2 */
  static trainData_T_TIU_Types_Pkg _L2_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1::else::_L1 */
  static trainData_T_TIU_Types_Pkg _L1_IfBlock1;
  /* trainData_pkg::storeDriverInput::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* trainData_pkg::storeDriverInput::updateTrainData */
  static kcg_bool updateTrainData;
  /* trainData_pkg::storeDriverInput::newState */
  static kcg_bool newState;
  /* trainData_pkg::storeDriverInput::_L72 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L72;
  /* trainData_pkg::storeDriverInput::_L73 */
  static kcg_bool _L73;
  /* trainData_pkg::storeDriverInput::_L74 */
  static trainData_T_TIU_Types_Pkg _L74;
  /* trainData_pkg::storeDriverInput::_L75 */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L75;
  /* trainData_pkg::storeDriverInput::_L76 */
  static kcg_bool _L76;
  /* trainData_pkg::storeDriverInput::_L77 */
  static kcg_bool _L77;
  /* trainData_pkg::storeDriverInput::_L78 */
  static kcg_bool _L78;
  /* trainData_pkg::storeDriverInput::_L79 */
  static kcg_bool _L79;
  /* trainData_pkg::storeDriverInput::_L81 */
  static kcg_bool _L81;
  /* trainData_pkg::storeDriverInput::_L80 */
  static trainDataStatus_T_trainData_Types_pkg _L80;
  /* trainData_pkg::storeDriverInput::_L82 */
  static trainDataStatus_T_trainData_Types_pkg _L82;
  
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&_L72, fromDMI_TrainData);
  _L73 = _L72.valid;
  updateTrainData = _L73;
  IfBlock1_clock = updateTrainData;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    kcg_copy_trainData_T_TIU_Types_Pkg(&_L1_IfBlock1, originalTrainData);
  }
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L75,
    trainDataAckfromDriver);
  _L76 = _L75.valid;
  _L78 = _L75.acknowledged;
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L74, originalTrainData);
  _L79 = _L74.acknowledgedByDriver;
  /* 1 */ if (_L76) {
    _L77 = _L78;
  }
  else {
    _L77 = _L79;
  }
  newState = _L77;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_trainData_T_TIU_Types_Pkg(&_L29_IfBlock1, originalTrainData);
    _L28_IfBlock1 = _L29_IfBlock1.valid;
    _L34_IfBlock1 = newState;
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &_L27_IfBlock1,
      fromDMI_TrainData);
    _L22_IfBlock1 = _L27_IfBlock1.trainCategory;
    _L20_IfBlock1 = _L29_IfBlock1.cantDeficientcy;
    _L32_IfBlock1 = _L27_IfBlock1.l_train;
    _L33_IfBlock1 = _L27_IfBlock1.m_brakeperct;
    _L26_IfBlock1 = _L27_IfBlock1.v_maxTrain;
    _L16_IfBlock1 = _L27_IfBlock1.m_loadingGauge;
    _L19_IfBlock1 = _L27_IfBlock1.m_axleLoad;
    _L18_IfBlock1 = _L27_IfBlock1.m_airTight;
    _L25_IfBlock1 = _L29_IfBlock1.axleNumber;
    _L17_IfBlock1 = _L29_IfBlock1.numberNationalSystems;
    kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(
      &_L30_IfBlock1,
      &_L29_IfBlock1.nationSystems);
    _L24_IfBlock1 = _L29_IfBlock1.numberTractionSystems;
    kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
      &_L23_IfBlock1,
      &_L29_IfBlock1.tractionSystem);
    _L31_IfBlock1.valid = _L28_IfBlock1;
    _L31_IfBlock1.acknowledgedByDriver = _L34_IfBlock1;
    _L31_IfBlock1.trainCategory = _L22_IfBlock1;
    _L31_IfBlock1.cantDeficientcy = _L20_IfBlock1;
    _L31_IfBlock1.trainLength = _L32_IfBlock1;
    _L31_IfBlock1.brakePerctage = _L33_IfBlock1;
    _L31_IfBlock1.maxTrainSpeed = _L26_IfBlock1;
    _L31_IfBlock1.loadingGauge = _L16_IfBlock1;
    _L31_IfBlock1.axleLoadCategory = _L19_IfBlock1;
    _L31_IfBlock1.airtightSystem = _L18_IfBlock1;
    _L31_IfBlock1.axleNumber = _L25_IfBlock1;
    _L31_IfBlock1.numberNationalSystems = _L17_IfBlock1;
    kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(
      &_L31_IfBlock1.nationSystems,
      &_L30_IfBlock1);
    _L31_IfBlock1.numberTractionSystems = _L24_IfBlock1;
    kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
      &_L31_IfBlock1.tractionSystem,
      &_L23_IfBlock1);
    kcg_copy_trainData_T_TIU_Types_Pkg(&_1_trainDataForEVC, &_L31_IfBlock1);
    kcg_copy_trainData_T_TIU_Types_Pkg(_2_trainDataForEVC, &_1_trainDataForEVC);
  }
  else {
    _L3_IfBlock1 = newState;
    kcg_copy_trainData_T_TIU_Types_Pkg(&_L2_IfBlock1, &_L1_IfBlock1);
    if (kcg_true) {
      _L2_IfBlock1.acknowledgedByDriver = _L3_IfBlock1;
    }
    kcg_copy_trainData_T_TIU_Types_Pkg(&trainDataForEVC, &_L2_IfBlock1);
    kcg_copy_trainData_T_TIU_Types_Pkg(_2_trainDataForEVC, &trainDataForEVC);
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L82, actualStatus);
  _L81 = newState;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L80, &_L82);
  if (kcg_true) {
    _L80.validatedByDriver = _L81;
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(updatedStatus, &_L80);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** storeDriverInput_trainData_pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

