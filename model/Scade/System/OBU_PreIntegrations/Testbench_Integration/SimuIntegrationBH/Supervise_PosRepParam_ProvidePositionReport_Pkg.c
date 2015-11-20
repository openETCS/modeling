/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervise_PosRepParam_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Supervise_PosRepParam_init_ProvidePositionReport_Pkg(
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC)
{
  outC->trigger = kcg_true;
  /* 1 */ Supervision_M_Loc_init_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */ Supervision_T_Cycloc_init_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervise_PosRepParam_reset_ProvidePositionReport_Pkg(
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC)
{
  /* 1 */
  Supervision_M_Loc_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */
  Supervision_T_Cycloc_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::Supervise_PosRepParam */
void Supervise_PosRepParam_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::posRepParam */ P58_PositionReportParameters_T_Packet_Types_Pkg *posRepParam,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::present */ kcg_bool present,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::systemTime */ SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam */
  static kcg_bool op_call;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam */
  static kcg_bool ck_every;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L5 */
  static positionedBGs_T_TrainPosition_Types_Pck _L5;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L4 */
  static trainPosition_T_TrainPosition_Types_Pck _L4;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L3 */
  static SystemTime_T_ProvidePositionReport_Pkg _L3;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L2 */
  static kcg_bool _L2;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L1 */
  static P58_PositionReportParameters_T_Packet_Types_Pkg _L1;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L6 */
  static IterPacket58List_T_Packet_Types_Pkg _L6;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L7 */
  static N_ITER _L7;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L8 */
  static D_CYCLOC _L8;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L9 */
  static T_CYCLOC _L9;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L10 */
  static kcg_bool _L10;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L11 */
  static kcg_bool _L11;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L12 */
  static kcg_bool _L12;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L13 */
  static kcg_bool _L13;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L14 */
  static kcg_bool _L14;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L15 */
  static M_LOC _L15;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L16 */
  static kcg_bool _L16;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L17 */
  static kcg_bool _L17;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L18 */
  static kcg_int _L18;
  
  _L18 = 0;
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(&_L1, posRepParam);
  _L9 = _L1.t_cycloc;
  _L17 = _L18 != _L9;
  ck_every = _L17;
  _L2 = present;
  _L3 = systemTime;
  /* ck_Supervise_PosRepParam */ if (ck_every) {
    /* 1 */
    Supervision_T_Cycloc_ProvidePositionReport_Pkg(
      _L2,
      _L9,
      _L3,
      &outC->Context_1);
    op_call = outC->Context_1.trigger;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L5, posBGs);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L4, trainPos);
  _L15 = _L1.m_loc;
  /* 1 */
  Supervision_M_Loc_ProvidePositionReport_Pkg(
    &_L4,
    &_L5,
    _L15,
    _L2,
    &outC->_1_Context_1);
  _L14 = outC->_1_Context_1.trigger;
  _L8 = _L1.d_cycloc;
  _L13 = /* 1 */ Supervision_D_Cycloc_ProvidePositionReport_Pkg(_L8);
  _L7 = _L1.n_iter;
  kcg_copy_IterPacket58List_T_Packet_Types_Pkg(&_L6, &_L1.iterPacket58List);
  _L12 = /* 1 */ Supervision_N_Iter_ProvidePositionReport_Pkg(_L7, &_L6);
  _L16 = kcg_false;
  /* ck_Supervise_PosRepParam */ if (ck_every) {
    _L11 = op_call;
  }
  else {
    _L11 = _L16;
  }
  _L10 = _L14 | _L13 | _L12 | _L11;
  outC->trigger = _L10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervise_PosRepParam_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

