/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintainingSession_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void maintainingSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->_L4_1.valid = kcg_true;
  outC->_L4_1.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L4_1.nid_c = 0;
  outC->_L4_1.nid_rbc = 0;
  outC->_L4_1.nid_radio = 0;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus.nid_c = 0;
  outC->sessionStatus.nid_rbc = 0;
  outC->sessionStatus.nid_radio = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


void maintainingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2 */
void maintainingSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::prevSessionStatus */ sessionStatus_T_RCM_Session_Types_Pkg *prevSessionStatus,
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* linear::MemoryBasic::Memorized */
  static sessionStatus_T_RCM_Session_Types_Pkg Memorized_1;
  /* linear::MemoryBasic::Write */
  static kcg_bool Write_1;
  /* linear::MemoryBasic::Init */
  static sessionStatus_T_RCM_Session_Types_Pkg Init_1;
  /* linear::MemoryBasic::BM_Input */
  static sessionStatus_T_RCM_Session_Types_Pkg BM_Input_1;
  /* linear::MemoryBasic::_L7 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L7_1;
  /* linear::MemoryBasic::_L6 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L6_1;
  /* linear::MemoryBasic::_L5 */
  static kcg_bool _L5_1;
  /* linear::MemoryBasic::_L2 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L2_1;
  /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::_L128 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L128;
  /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::_L129 */
  static kcg_bool _L129;
  /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::_L130 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L130;
  /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::_L131 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L131;
  /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::_L133 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L133;
  /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::_L134 */
  static kcg_bool _L134;
  /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::_L135 */
  static NID_C _L135;
  /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::_L136 */
  static NID_RBC _L136;
  /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::_L137 */
  static NID_RADIO _L137;
  
  _L129 = kcg_true;
  _L130 = sp_maintaining_RCM_Session_Types_Pkg;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L131, prevSessionStatus);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&Init_1, &_L131);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L7_1, &Init_1);
  /* 1_fby_1_init_4 */ if (outC->init) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L6_1, &_L7_1);
  }
  else {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L6_1, &outC->_L4_1);
  }
  _L134 = _L131.valid;
  Write_1 = _L134;
  _L5_1 = Write_1;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&BM_Input_1, &_L131);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L2_1, &BM_Input_1);
  /* 1 */ if (_L5_1) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->_L4_1, &_L2_1);
  }
  else {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->_L4_1, &_L6_1);
  }
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&Memorized_1, &outC->_L4_1);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L133, &Memorized_1);
  _L135 = _L133.nid_c;
  _L136 = _L133.nid_rbc;
  _L137 = _L133.nid_radio;
  _L128.valid = _L129;
  _L128.phase = _L130;
  _L128.nid_c = _L135;
  _L128.nid_rbc = _L136;
  _L128.nid_radio = _L137;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->sessionStatus, &_L128);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** maintainingSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

