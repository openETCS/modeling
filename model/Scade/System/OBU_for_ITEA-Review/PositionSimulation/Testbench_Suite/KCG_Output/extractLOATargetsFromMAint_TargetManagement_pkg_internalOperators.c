/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractLOATargetsFromMAint_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::extractLOATargetsFromMAint */
void extractLOATargetsFromMAint_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::extractLOATargetsFromMAint::ACC */ extractTargetsLOAACC_TargetManagement_pkg *ACC,
  /* TargetManagement_pkg::internalOperators::extractLOATargetsFromMAint::MA */ MA_section_real_T_TargetManagement_types *MA,
  /* TargetManagement_pkg::internalOperators::extractLOATargetsFromMAint::Cond */ kcg_bool *Cond,
  /* TargetManagement_pkg::internalOperators::extractLOATargetsFromMAint::ACC_out */ extractTargetsLOAACC_TargetManagement_pkg *ACC_out)
{
  Target_real_T_TargetManagement_types tmp;
  /* TargetManagement_pkg::internalOperators::extractLOATargetsFromMAint::_L89 */ kcg_int _L89;
  
  *Cond = (*MA).valid;
  _L89 = 1 + (*ACC).lastInsertedTargetIndex;
  if (*Cond & !(*MA).EndSection) {
    (*ACC_out).lastInsertedTargetIndex = _L89;
    kcg_copy_Target_list_LOA_real_T_TargetManagement_types(
      &(*ACC_out).targetList,
      &(*ACC).targetList);
    /* 7 */ GetLOAFromSection_TargetManagement_pkg_internalOperators(MA, &tmp);
    if ((0 <= _L89) & (_L89 < 10)) {
      kcg_copy_Target_real_T_TargetManagement_types(
        &(*ACC_out).targetList[_L89],
        &tmp);
    }
  }
  else {
    kcg_copy_extractTargetsLOAACC_TargetManagement_pkg(ACC_out, ACC);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** extractLOATargetsFromMAint_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

