/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_M_Loc_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Supervision_M_Loc_init_ProvidePositionReport_Pkg(
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC)
{
  outC->trigger = kcg_true;
  /* 1 */ op_3_6_5_1_4_j_init_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervision_M_Loc_reset_ProvidePositionReport_Pkg(
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC)
{
  /* 1 */ op_3_6_5_1_4_j_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::Supervision_M_Loc */
void Supervision_M_Loc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::mloc */ M_LOC mloc,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::present */ kcg_bool present,
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC)
{
  static kcg_bool noname;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L13 */
  static M_LOC _L13;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L11 */
  static kcg_bool _L11;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L10 */
  static M_LOC _L10;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L9 */
  static kcg_bool _L9;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L8 */
  static kcg_bool _L8;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L7 */
  static kcg_bool _L7;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L6 */
  static M_LOC _L6;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L5 */
  static kcg_bool _L5;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L4 */
  static kcg_bool _L4;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L3 */
  static trainPosition_T_TrainPosition_Types_Pck _L3;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L2 */
  static kcg_bool _L2;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L1 */
  static kcg_bool _L1;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L14 */
  static M_LOC _L14;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L16 */
  static positionedBG_T_TrainPosition_Types_Pck _L16;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L15 */
  static kcg_bool _L15;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L17 */
  static positionedBGs_T_TrainPosition_Types_Pck _L17;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L18 */
  static kcg_bool _L18;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L19 */
  static kcg_bool _L19;
  
  _L6 = M_LOC_Now;
  _L14 = mloc;
  _L1 = _L6 == _L14;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L17, posBGs);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L3, trainPos);
  /* 1 */
  op_GetLRBGfromBGs_ProvidePositionReport_Pkg(&_L17, &_L3, &_L15, &_L16);
  /* 1 */
  op_3_6_5_1_4_j_ProvidePositionReport_Pkg(&_L16, &_L3, &outC->Context_1);
  _L11 = outC->Context_1.trigger;
  _L10 = M_LOC_Every_LRBG_compliant_balise_group;
  _L7 = _L10 == _L14;
  _L2 = _L11 & _L7;
  _L4 = !_L11;
  _L18 = present;
  _L19 = _L18 & _L1;
  _L13 =
    M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group;
  _L8 = _L13 == _L14;
  _L9 = _L8 & _L4;
  _L5 = _L19 | _L9 | _L2;
  outC->trigger = _L5;
  noname = _L15;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervision_M_Loc_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

