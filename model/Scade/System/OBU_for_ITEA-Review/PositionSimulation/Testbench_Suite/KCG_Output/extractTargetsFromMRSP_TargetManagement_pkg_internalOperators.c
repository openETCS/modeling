/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractTargetsFromMRSP_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP */
void extractTargetsFromMRSP_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::TargetsOfMRSP */ extractTargetsMRSPACC_TargetManagement_pkg *TargetsOfMRSP)
{
  kcg_int i;
  extractTargetsMRSPACC_TargetManagement_pkg tmp1;
  kcg_bool tmp;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::_L24 */ Target_list_MRSP_real_T_TargetManagement_types _L24;
  
  (*TargetsOfMRSP).lastInsertedTargetIndex = - 1;
  for (i = 0; i < 200; i++) {
    kcg_copy_Target_real_T_TargetManagement_types(
      &_L24[i],
      (Target_real_T_TargetManagement_types *)
        &emptyTargetMRSP_TargetManagement_pkg);
  }
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &(*TargetsOfMRSP).targetList,
    &_L24);
  if ((*MRSP)[0].valid) {
    for (i = 0; i < 200; i++) {
      kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&tmp1, TargetsOfMRSP);
      /* 1 */
      extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators(
        i,
        &tmp1,
        MRSP,
        &tmp,
        TargetsOfMRSP);
      if (!tmp) {
        break;
      }
    }
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** extractTargetsFromMRSP_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

