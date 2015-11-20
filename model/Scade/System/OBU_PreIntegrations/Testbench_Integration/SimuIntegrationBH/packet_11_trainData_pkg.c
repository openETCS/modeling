/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "packet_11_trainData_pkg.h"

/* trainData_pkg::packet_11 */
void packet_11_trainData_pkg(
  /* trainData_pkg::packet_11::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* trainData_pkg::packet_11::p11 */ P011_TM_TrainToTrack *p11)
{
  /* trainData_pkg::packet_11::_L12 */
  static P011_TM_TrainToTrack _L12;
  /* trainData_pkg::packet_11::_L14 */
  static kcg_bool _L14;
  /* trainData_pkg::packet_11::_L15 */
  static trainData_T_TIU_Types_Pkg _L15;
  /* trainData_pkg::packet_11::_L18 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L18;
  /* trainData_pkg::packet_11::_L19 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L19;
  /* trainData_pkg::packet_11::_L20 */
  static M_LOADINGGAUGE _L20;
  /* trainData_pkg::packet_11::_L21 */
  static M_AXLELOADCAT _L21;
  /* trainData_pkg::packet_11::_L22 */
  static M_AIRTIGHT _L22;
  /* trainData_pkg::packet_11::_L23 */
  static kcg_int _L23;
  /* trainData_pkg::packet_11::_L25 */
  static aTractionIdentity_T_Packet_TrainTypes_Pkg _L25;
  /* trainData_pkg::packet_11::_L26 */
  static kcg_int _L26;
  /* trainData_pkg::packet_11::_L27 */
  static aNID_NTC_T_Packet_TrainTypes_Pkg _L27;
  /* trainData_pkg::packet_11::_L40 */
  static NC_CDTRAIN _L40;
  /* trainData_pkg::packet_11::_L41 */
  static NC_TRAIN _L41;
  /* trainData_pkg::packet_11::_L42 */
  static kcg_int _L42;
  /* trainData_pkg::packet_11::_L43 */
  static kcg_int _L43;
  /* trainData_pkg::packet_11::_L44 */
  static kcg_int _L44;
  /* trainData_pkg::packet_11::_L50 */
  static kcg_int _L50;
  /* trainData_pkg::packet_11::_L49 */
  static kcg_int _L49;
  /* trainData_pkg::packet_11::_L57 */
  static kcg_int _L57;
  /* trainData_pkg::packet_11::_L58 */
  static kcg_int _L58;
  /* trainData_pkg::packet_11::_L59 */
  static kcg_int _L59;
  /* trainData_pkg::packet_11::_L60 */
  static kcg_int _L60;
  /* trainData_pkg::packet_11::_L61 */
  static V_TRAIN _L61;
  
  _L14 = kcg_true;
  _L58 = cp011_ValidatedTrainData_ids;
  _L57 = 0;
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L15, trainData);
  _L40 = _L15.cantDeficientcy;
  _L41 = _L15.trainCategory;
  _L18 = _L15.trainLength;
  _L60 = 100;
  _L59 = _L18 / _L60;
  _L19 = _L15.maxTrainSpeed;
  _L61 = /* 1 */ vIntern2Extern_RadioSupport_Pkg(_L19);
  _L20 = _L15.loadingGauge;
  _L21 = _L15.axleLoadCategory;
  _L22 = _L15.airtightSystem;
  _L23 = _L15.axleNumber;
  _L42 = _L15.numberTractionSystems;
  _L44 = 1;
  _L43 = _L42 - _L44;
  kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
    &_L25,
    &_L15.tractionSystem);
  _L26 = _L15.numberNationalSystems;
  _L49 = 1;
  _L50 = _L26 - _L49;
  kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(&_L27, &_L15.nationSystems);
  _L12.valid = _L14;
  _L12.nid_packet = _L58;
  _L12.l_packet = _L57;
  _L12.nc_cdtrain = _L40;
  _L12.nc_train = _L41;
  _L12.l_train = _L59;
  _L12.v_maxtrain = _L61;
  _L12.m_loadinggauge = _L20;
  _L12.m_axleloadcat = _L21;
  _L12.m_airtight = _L22;
  _L12.n_axle = _L23;
  _L12.n_iter_voltage = _L43;
  kcg_copy_P011_voltage_list_TM_TrainToTrack(&_L12.voltage_list, &_L25);
  _L12.n_iter_nid_ntc = _L50;
  kcg_copy_P011_ntc_list_TM_TrainToTrack(&_L12.nid_ntc_list, &_L27);
  kcg_copy_P011_TM_TrainToTrack(p11, &_L12);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** packet_11_trainData_pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

