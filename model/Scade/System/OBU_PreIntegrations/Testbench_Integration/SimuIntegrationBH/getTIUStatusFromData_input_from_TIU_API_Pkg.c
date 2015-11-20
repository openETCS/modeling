/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getTIUStatusFromData_input_from_TIU_API_Pkg.h"

/* input_from_TIU_API_Pkg::getTIUStatusFromData */
void getTIUStatusFromData_input_from_TIU_API_Pkg(
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::inTIUActualData */ Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *inTIUActualData,
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::outStatus */ TIU_trainStatus_T_TIU_Types_Pkg *outStatus)
{
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::isA */
  static kcg_bool isA;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::isB */
  static kcg_bool isB;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L1 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L1;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L3 */
  static Mode_control_and_train_status_T_TIU_Types_Pkg _L3;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L4 */
  static TIU_trainStatus_T_TIU_Types_Pkg _L4;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L7 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L7;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L8 */
  static kcg_bool _L8;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L11 */
  static kcg_bool _L11;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L13 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L13;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L14 */
  static kcg_bool _L14;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L15 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L15;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L16 */
  static kcg_bool _L16;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L17 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L17;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L18 */
  static kcg_bool _L18;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L19 */
  static cab_ID_T_TIU_Types_Pkg _L19;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L20 */
  static kcg_bool _L20;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L21 */
  static cab_ID_T_TIU_Types_Pkg _L21;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L24 */
  static cab_ID_T_TIU_Types_Pkg _L24;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L23 */
  static cab_ID_T_TIU_Types_Pkg _L23;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L25 */
  static kcg_bool _L25;
  /* input_from_TIU_API_Pkg::getTIUStatusFromData::_L26 */
  static cab_ID_T_TIU_Types_Pkg _L26;
  
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &_L1,
    inTIUActualData);
  kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(
    &_L3,
    &_L1.train_status);
  _L8 = _L3.valid;
  _L7 = _L3.m_cab_st;
  _L13 = both_desks_are_open_TIU_Types_Pkg;
  _L11 = _L7 == _L13;
  _L15 = desk_A_is_open_TIU_Types_Pkg;
  _L14 = _L7 == _L15;
  _L17 = desk_B_is_open_TIU_Types_Pkg;
  _L16 = _L7 == _L17;
  _L18 = _L11 | _L14 | _L16;
  isA = _L14;
  _L20 = isA;
  _L21 = CabA_TIU_Types_Pkg;
  isB = _L16;
  _L25 = isB;
  _L23 = CabB_TIU_Types_Pkg;
  _L26 = CabUndefined_TIU_Types_Pkg;
  /* 2 */ if (_L25) {
    _L24 = _L23;
  }
  else {
    _L24 = _L26;
  }
  /* 1 */ if (_L20) {
    _L19 = _L21;
  }
  else {
    _L19 = _L24;
  }
  _L4.valid = _L8;
  _L4.deskOpen = _L18;
  _L4.ownCab = _L19;
  _L4.activeCab = _L19;
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(outStatus, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getTIUStatusFromData_input_from_TIU_API_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

