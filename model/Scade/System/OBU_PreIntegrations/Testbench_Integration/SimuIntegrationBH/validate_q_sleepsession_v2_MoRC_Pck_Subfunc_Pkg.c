/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2 */
kcg_bool validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::p42_SessionManagement */ p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::mode */ M_MODE mode)
{
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::_L2 */
  static M_MODE _L2;
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::_L1 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L1;
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::_L3 */
  static Q_SLEEPSESSION _L3;
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::_L4 */
  static Q_SLEEPSESSION _L4;
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::_L5 */
  static kcg_bool _L5;
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::_L6 */
  static kcg_bool _L6;
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::_L7 */
  static kcg_bool _L7;
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::_L8 */
  static kcg_bool _L8;
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::_L9 */
  static M_MODE _L9;
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::_L10 */
  static kcg_bool _L10;
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::_L11 */
  static kcg_bool _L11;
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::_L12 */
  static kcg_bool _L12;
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::execute */
  static kcg_bool execute;
  
  _L2 = mode;
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &_L1,
    p42_SessionManagement);
  _L11 = _L1.valid;
  _L3 = _L1.q_sleepsession;
  _L4 = Q_SLEEPSESSION_Execute_session_establishment_order;
  _L5 = _L3 == _L4;
  _L9 = M_MODE_Sleeping;
  _L10 = _L2 == _L9;
  _L8 = _L5 & _L10;
  _L6 = !_L10;
  _L7 = _L8 | _L6;
  _L12 = _L11 & _L7;
  execute = _L12;
  return execute;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

