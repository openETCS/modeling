/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trainDataStorage_trainData_pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void trainDataStorage_init_trainData_pkg(
  outC_trainDataStorage_trainData_pkg *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->trainData.valid = kcg_true;
  outC->trainData.acknowledgedByDriver = kcg_true;
  outC->trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->trainData.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->trainData.trainLength = 0;
  outC->trainData.brakePerctage = 0;
  outC->trainData.maxTrainSpeed = 0;
  outC->trainData.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->trainData.axleLoadCategory = M_AXLELOADCAT_A;
  outC->trainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->trainData.axleNumber = 0;
  outC->trainData.numberNationalSystems = 0;
  for (i = 0; i < 5; i++) {
    outC->trainData.nationSystems[i] = 0;
  }
  outC->trainData.numberTractionSystems = 0;
  for (i1 = 0; i1 < 4; i1++) {
    outC->trainData.tractionSystem[i1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->trainData.tractionSystem[i1].nid_ctraction = 0;
  }
  outC->updatedStatus.valid = kcg_true;
  outC->updatedStatus.validatedByDriver = kcg_true;
  outC->updatedStatus.RBCsystemVersionOnboard = kcg_true;
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.driverIsModificationTrainData = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = 0;
  outC->actualTrainData.valid = kcg_true;
  outC->actualTrainData.acknowledgedByDriver = kcg_true;
  outC->actualTrainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->actualTrainData.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->actualTrainData.trainLength = 0;
  outC->actualTrainData.brakePerctage = 0;
  outC->actualTrainData.maxTrainSpeed = 0;
  outC->actualTrainData.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->actualTrainData.axleLoadCategory = M_AXLELOADCAT_A;
  outC->actualTrainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->actualTrainData.axleNumber = 0;
  outC->actualTrainData.numberNationalSystems = 0;
  for (i2 = 0; i2 < 5; i2++) {
    outC->actualTrainData.nationSystems[i2] = 0;
  }
  outC->actualTrainData.numberTractionSystems = 0;
  for (i3 = 0; i3 < 4; i3++) {
    outC->actualTrainData.tractionSystem[i3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->actualTrainData.tractionSystem[i3].nid_ctraction = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void trainDataStorage_reset_trainData_pkg(
  outC_trainDataStorage_trainData_pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* trainData_pkg::trainDataStorage */
void trainDataStorage_trainData_pkg(
  /* trainData_pkg::trainDataStorage::reset */ kcg_bool reset,
  /* trainData_pkg::trainDataStorage::trainDatafromTIU */ trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainData_pkg::trainDataStorage::trainDatafromDriver */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainDatafromDriver,
  /* trainData_pkg::trainDataStorage::trainDataAckfromDriver */ DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trainData_pkg::trainDataStorage::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::trainDataStorage::eventsForTrainData */ trainData_Events_T_trainData_Types_pkg *eventsForTrainData,
  outC_trainDataStorage_trainData_pkg *outC)
{
  /* trainData_pkg::trainDataStorage::trainData */
  static trainData_T_TIU_Types_Pkg _2_trainData;
  /* trainData_pkg::trainDataStorage::updatedStatus */
  static trainDataStatus_T_trainData_Types_pkg _1_updatedStatus;
  /* trainData_pkg::trainDataStorage::IfBlock1::then::_L7 */
  static trainData_T_TIU_Types_Pkg _L7_IfBlock1;
  /* trainData_pkg::trainDataStorage::IfBlock1::then::_L5 */
  static trainData_T_TIU_Types_Pkg _L5_IfBlock1;
  /* trainData_pkg::trainDataStorage::IfBlock1::then::_L4 */
  static trainDataStatus_T_trainData_Types_pkg _L4_IfBlock1;
  /* trainData_pkg::trainDataStorage::IfBlock1::then::_L3 */
  static trainDataStatus_T_trainData_Types_pkg _L3_IfBlock1;
  /* trainData_pkg::trainDataStorage::IfBlock1::then::_L2 */
  static trainData_T_TIU_Types_Pkg _L2_IfBlock1;
  /* trainData_pkg::trainDataStorage::trainData */
  static trainData_T_TIU_Types_Pkg trainData;
  /* trainData_pkg::trainDataStorage::updatedStatus */
  static trainDataStatus_T_trainData_Types_pkg updatedStatus;
  /* trainData_pkg::trainDataStorage::IfBlock1::else */
  static kcg_bool _12_else_clock_IfBlock1;
  /* trainData_pkg::trainDataStorage::trainData */
  static trainData_T_TIU_Types_Pkg _10_trainData;
  /* trainData_pkg::trainDataStorage::updatedStatus */
  static trainDataStatus_T_trainData_Types_pkg _9_updatedStatus;
  /* trainData_pkg::trainDataStorage::IfBlock1::else::else::then::_L4 */
  static trainData_T_TIU_Types_Pkg _L414_IfBlock1;
  /* trainData_pkg::trainDataStorage::IfBlock1::else::else::then::_L2 */
  static trainDataStatus_T_trainData_Types_pkg _L215_IfBlock1;
  /* trainData_pkg::trainDataStorage::trainData */
  static trainData_T_TIU_Types_Pkg _8_trainData;
  /* trainData_pkg::trainDataStorage::updatedStatus */
  static trainDataStatus_T_trainData_Types_pkg _7_updatedStatus;
  /* trainData_pkg::trainDataStorage::IfBlock1::else::else::else::_L2 */
  static trainData_T_TIU_Types_Pkg _L216_IfBlock1;
  /* trainData_pkg::trainDataStorage::IfBlock1::else::else::else::_L1 */
  static trainDataStatus_T_trainData_Types_pkg _L1_IfBlock1;
  /* trainData_pkg::trainDataStorage::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* trainData_pkg::trainDataStorage::updatedStatus */
  static trainDataStatus_T_trainData_Types_pkg _3_updatedStatus;
  /* trainData_pkg::trainDataStorage::trainData */
  static trainData_T_TIU_Types_Pkg _4_trainData;
  /* trainData_pkg::trainDataStorage::IfBlock1::else::then::_L5 */
  static trainDataStatus_T_trainData_Types_pkg _L513_IfBlock1;
  /* trainData_pkg::trainDataStorage::IfBlock1::else::then::_L8 */
  static trainData_T_TIU_Types_Pkg _L8_IfBlock1;
  /* trainData_pkg::trainDataStorage::IfBlock1::else::then::_L9 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L9_IfBlock1;
  /* trainData_pkg::trainDataStorage::IfBlock1::else::then::_L12 */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L12_IfBlock1;
  /* trainData_pkg::trainDataStorage::IfBlock1::else::then::_L14 */
  static trainDataStatus_T_trainData_Types_pkg _L14_IfBlock1;
  /* trainData_pkg::trainDataStorage::IfBlock1::else::then::_L13 */
  static trainData_T_TIU_Types_Pkg _L13_IfBlock1;
  /* trainData_pkg::trainDataStorage::updatedStatus */
  static trainDataStatus_T_trainData_Types_pkg _5_updatedStatus;
  /* trainData_pkg::trainDataStorage::trainData */
  static trainData_T_TIU_Types_Pkg _6_trainData;
  static kcg_bool noname;
  static kcg_bool _11_noname;
  /* trainData_pkg::trainDataStorage::trainData */
  static trainData_T_TIU_Types_Pkg last_trainData;
  /* trainData_pkg::trainDataStorage::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* trainData_pkg::trainDataStorage::dataFromTIU */
  static kcg_bool dataFromTIU;
  /* trainData_pkg::trainDataStorage::dataFromDMI */
  static kcg_bool dataFromDMI;
  /* trainData_pkg::trainDataStorage::systemFailure */
  static kcg_bool systemFailure;
  /* trainData_pkg::trainDataStorage::modifyData */
  static kcg_bool modifyData;
  /* trainData_pkg::trainDataStorage::_L1 */
  static trainData_T_TIU_Types_Pkg _L1;
  /* trainData_pkg::trainDataStorage::_L2 */
  static trainDataStatus_T_trainData_Types_pkg _L2;
  /* trainData_pkg::trainDataStorage::_L3 */
  static kcg_bool _L3;
  /* trainData_pkg::trainDataStorage::_L4 */
  static kcg_bool _L4;
  /* trainData_pkg::trainDataStorage::_L5 */
  static kcg_bool _L5;
  /* trainData_pkg::trainDataStorage::_L6 */
  static kcg_bool _L6;
  /* trainData_pkg::trainDataStorage::_L7 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L7;
  /* trainData_pkg::trainDataStorage::_L8 */
  static kcg_bool _L8;
  /* trainData_pkg::trainDataStorage::_L9 */
  static kcg_bool _L9;
  /* trainData_pkg::trainDataStorage::_L17 */
  static kcg_bool _L17;
  /* trainData_pkg::trainDataStorage::_L20 */
  static kcg_bool _L20;
  /* trainData_pkg::trainDataStorage::_L19 */
  static trainDataStatus_T_trainData_Types_pkg _L19;
  /* trainData_pkg::trainDataStorage::_L18 */
  static kcg_bool _L18;
  /* trainData_pkg::trainDataStorage::_L21 */
  static kcg_bool _L21;
  /* trainData_pkg::trainDataStorage::_L23 */
  static trainData_Events_T_trainData_Types_pkg _L23;
  /* trainData_pkg::trainDataStorage::_L24 */
  static kcg_bool _L24;
  /* trainData_pkg::trainDataStorage::_L25 */
  static kcg_bool _L25;
  /* trainData_pkg::trainDataStorage::_L26 */
  static kcg_bool _L26;
  /* trainData_pkg::trainDataStorage::_L27 */
  static kcg_bool _L27;
  /* trainData_pkg::trainDataStorage::_L28 */
  static trainData_T_TIU_Types_Pkg _L28;
  /* trainData_pkg::trainDataStorage::_L29 */
  static kcg_bool _L29;
  /* trainData_pkg::trainDataStorage::_L30 */
  static kcg_bool _L30;
  /* trainData_pkg::trainDataStorage::_L31 */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L31;
  /* trainData_pkg::trainDataStorage::_L32 */
  static kcg_bool _L32;
  /* trainData_pkg::trainDataStorage::_L33 */
  static kcg_bool _L33;
  
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L1, trainDatafromTIU);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L2, actualStatus);
  _L3 = _L2.valid;
  _L4 = _L1.valid;
  _L5 = !_L3;
  _L6 = _L4 & _L5;
  dataFromTIU = _L6;
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &_L7,
    trainDatafromDriver);
  _L8 = _L7.valid;
  _L9 = _L2.valid;
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L31,
    trainDataAckfromDriver);
  _L32 = _L31.valid;
  _L33 = _L8 | _L32;
  _L17 = _L9 & _L33;
  dataFromDMI = _L17;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L19, actualStatus);
  _L18 = _L19.valid;
  _L20 = !_L18;
  _L21 = _L33 & _L20;
  kcg_copy_trainData_Events_T_trainData_Types_pkg(&_L23, eventsForTrainData);
  _L24 = _L23.driverRequestModify;
  _L25 = _L23.trainStandStill;
  _L26 = _L24 & _L25;
  _L27 = _L21 | _L26;
  systemFailure = _L27;
  modifyData = _L26;
  IfBlock1_clock = dataFromTIU;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _12_else_clock_IfBlock1 = dataFromDMI;
    /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
      kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
        &_L9_IfBlock1,
        trainDatafromDriver);
      kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_L12_IfBlock1,
        trainDataAckfromDriver);
    }
    else {
      else_clock_IfBlock1 = reset;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_L215_IfBlock1,
          (trainDataStatus_T_trainData_Types_pkg *)
            &cNoStates_trainData_Types_pkg);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_9_updatedStatus,
          &_L215_IfBlock1);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_3_updatedStatus,
          &_9_updatedStatus);
      }
      else {
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_L1_IfBlock1,
          actualStatus);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_7_updatedStatus,
          &_L1_IfBlock1);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_3_updatedStatus,
          &_7_updatedStatus);
      }
    }
  }
  /* last_init_ck_trainData */ if (outC->init) {
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &last_trainData,
      (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
  }
  else {
    kcg_copy_trainData_T_TIU_Types_Pkg(&last_trainData, &outC->trainData);
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_trainData_T_TIU_Types_Pkg(&_L2_IfBlock1, trainDatafromTIU);
    kcg_copy_trainData_T_TIU_Types_Pkg(&_L7_IfBlock1, &last_trainData);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L4_IfBlock1, actualStatus);
    /* 1 */
    storeTIUData_trainData_pkg(
      &_L2_IfBlock1,
      &_L7_IfBlock1,
      &_L4_IfBlock1,
      &_L5_IfBlock1,
      &_L3_IfBlock1);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &_1_updatedStatus,
      &_L3_IfBlock1);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &outC->updatedStatus,
      &_1_updatedStatus);
    kcg_copy_trainData_T_TIU_Types_Pkg(&_2_trainData, &_L5_IfBlock1);
    kcg_copy_trainData_T_TIU_Types_Pkg(&outC->trainData, &_2_trainData);
  }
  else {
    /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
      kcg_copy_trainData_T_TIU_Types_Pkg(&_L8_IfBlock1, &last_trainData);
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &_L513_IfBlock1,
        actualStatus);
      /* 1 */
      storeDriverInput_trainData_pkg(
        &_L9_IfBlock1,
        &_L12_IfBlock1,
        &_L8_IfBlock1,
        &_L513_IfBlock1,
        &_L13_IfBlock1,
        &_L14_IfBlock1);
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &_5_updatedStatus,
        &_L14_IfBlock1);
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &updatedStatus,
        &_5_updatedStatus);
    }
    else {
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &updatedStatus,
        &_3_updatedStatus);
    }
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &outC->updatedStatus,
      &updatedStatus);
    /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
      kcg_copy_trainData_T_TIU_Types_Pkg(&_6_trainData, &_L13_IfBlock1);
      kcg_copy_trainData_T_TIU_Types_Pkg(&trainData, &_6_trainData);
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        kcg_copy_trainData_T_TIU_Types_Pkg(
          &_L414_IfBlock1,
          (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
        kcg_copy_trainData_T_TIU_Types_Pkg(&_10_trainData, &_L414_IfBlock1);
        kcg_copy_trainData_T_TIU_Types_Pkg(&_4_trainData, &_10_trainData);
      }
      else {
        kcg_copy_trainData_T_TIU_Types_Pkg(&_L216_IfBlock1, &last_trainData);
        kcg_copy_trainData_T_TIU_Types_Pkg(&_8_trainData, &_L216_IfBlock1);
        kcg_copy_trainData_T_TIU_Types_Pkg(&_4_trainData, &_8_trainData);
      }
      kcg_copy_trainData_T_TIU_Types_Pkg(&trainData, &_4_trainData);
    }
    kcg_copy_trainData_T_TIU_Types_Pkg(&outC->trainData, &trainData);
  }
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L28, &outC->trainData);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->actualTrainData, &_L28);
  _L29 = modifyData;
  noname = _L29;
  _L30 = systemFailure;
  _11_noname = _L30;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** trainDataStorage_trainData_pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

