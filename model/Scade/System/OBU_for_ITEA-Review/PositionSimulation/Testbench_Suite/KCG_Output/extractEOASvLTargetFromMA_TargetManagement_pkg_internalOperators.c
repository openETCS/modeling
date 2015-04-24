/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractEOASvLTargetFromMA_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA */
void extractEOASvLTargetFromMA_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA::MA */ MAs_real_T_TargetManagement_types *MA,
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA::EOA_Target */ Target_real_T_TargetManagement_types *EOA_Target,
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA::SvL_Target */ Target_real_T_TargetManagement_types *SvL_Target,
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA::ReleaseSpeedOfMA */ V_internal_real_Type_SDM_Types_Pkg *ReleaseSpeedOfMA,
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA::ReleaseSpeedOfMAValid */ kcg_bool *ReleaseSpeedOfMAValid)
{
  MA_section_real_T_TargetManagement_types tmp;
  kcg_int i;
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA::_L23 */ MA_section_real_T_TargetManagement_types _L23;
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA::_L25 */ Target_real_T_TargetManagement_types _L25;
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA::_L40 */ Target_real_T_TargetManagement_types _L40;
  /* TargetManagement_pkg::internalOperators::extractEOASvLTargetFromMA::_L47 */ kcg_bool _L47;
  
  kcg_copy_MA_section_real_T_TargetManagement_types(
    &_L23,
    (MA_section_real_T_TargetManagement_types *)
      &emptyMASection_TargetManagement_pkg);
  for (i = 0; i < 10; i++) {
    kcg_copy_MA_section_real_T_TargetManagement_types(&tmp, &_L23);
    /* 1 */
    extractEOASvLTargetFromMAint_TargetManagement_pkg_internalOperators(
      &tmp,
      &(*MA)[i],
      &_L23);
  }
  _L47 = _L23.valid & _L23.EndSection;
  /* 1 */
  GetSvLOfEndsection_TargetManagement_pkg_internalOperators(
    &_L23,
    &_L25,
    &_L40,
    ReleaseSpeedOfMA,
    ReleaseSpeedOfMAValid);
  if (_L47) {
    kcg_copy_Target_real_T_TargetManagement_types(SvL_Target, &_L40);
    kcg_copy_Target_real_T_TargetManagement_types(EOA_Target, &_L25);
  }
  else {
    kcg_copy_Target_real_T_TargetManagement_types(
      SvL_Target,
      (Target_real_T_TargetManagement_types *)
        &emptyTargetEOA_TargetManagement_pkg);
    kcg_copy_Target_real_T_TargetManagement_types(
      EOA_Target,
      (Target_real_T_TargetManagement_types *)
        &emptyTargetEOA_TargetManagement_pkg);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** extractEOASvLTargetFromMA_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

