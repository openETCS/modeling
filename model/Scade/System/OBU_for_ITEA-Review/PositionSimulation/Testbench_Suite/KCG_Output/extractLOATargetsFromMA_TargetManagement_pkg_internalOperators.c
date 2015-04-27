/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractLOATargetsFromMA_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::extractLOATargetsFromMA */
void extractLOATargetsFromMA_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::extractLOATargetsFromMA::MA */ MAs_real_T_TargetManagement_types *MA,
  /* TargetManagement_pkg::internalOperators::extractLOATargetsFromMA::TargetsFromMA */ extractTargetsLOAACC_TargetManagement_pkg *TargetsFromMA)
{
  kcg_int i;
  extractTargetsLOAACC_TargetManagement_pkg tmp1;
  kcg_bool tmp;
  /* TargetManagement_pkg::internalOperators::extractLOATargetsFromMA::_L49 */ Target_list_LOA_real_T_TargetManagement_types _L49;
  
  (*TargetsFromMA).lastInsertedTargetIndex = - 1;
  for (i = 0; i < 10; i++) {
    kcg_copy_Target_real_T_TargetManagement_types(
      &_L49[i],
      (Target_real_T_TargetManagement_types *)
        &emptyTargetLOA_TargetManagement_pkg);
  }
  kcg_copy_Target_list_LOA_real_T_TargetManagement_types(
    &(*TargetsFromMA).targetList,
    &_L49);
  if ((*MA)[0].valid) {
    for (i = 0; i < 10; i++) {
      kcg_copy_extractTargetsLOAACC_TargetManagement_pkg(&tmp1, TargetsFromMA);
      /* 1 */
      extractLOATargetsFromMAint_TargetManagement_pkg_internalOperators(
        &tmp1,
        &(*MA)[i],
        &tmp,
        TargetsFromMA);
      if (!tmp) {
        break;
      }
    }
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** extractLOATargetsFromMA_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

