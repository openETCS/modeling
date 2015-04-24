/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractEOASvLTargetFromMAint_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMAint */
void extractEOASvLTargetFromMAint_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMAint::ACC */ MA_section_real_T_TargetManagement_types *ACC,
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMAint::MA_section */ MA_section_real_T_TargetManagement_types *MA_section,
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMAint::ACC_Out */ MA_section_real_T_TargetManagement_types *ACC_Out)
{
  if ((*MA_section).valid & (*MA_section).EndSection) {
    kcg_copy_MA_section_real_T_TargetManagement_types(ACC_Out, MA_section);
  }
  else {
    kcg_copy_MA_section_real_T_TargetManagement_types(ACC_Out, ACC);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** extractEOASvLTargetFromMAint_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

