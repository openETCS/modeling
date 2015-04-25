/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GetSvLOfEndsection_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::GetSvLOfEndsection */
void GetSvLOfEndsection_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::GetSvLOfEndsection::MA_section */ MA_section_real_T_TargetManagement_types *MA_section,
  /* TargetManagement_pkg::internalOperators::GetSvLOfEndsection::EOA_Target */ Target_real_T_TargetManagement_types *EOA_Target,
  /* TargetManagement_pkg::internalOperators::GetSvLOfEndsection::SvL_Target */ Target_real_T_TargetManagement_types *SvL_Target,
  /* TargetManagement_pkg::internalOperators::GetSvLOfEndsection::ReleaseSpeed */ V_internal_real_Type_SDM_Types_Pkg *ReleaseSpeed,
  /* TargetManagement_pkg::internalOperators::GetSvLOfEndsection::ReleaseSpeedValid */ kcg_bool *ReleaseSpeedValid)
{
  (*SvL_Target).targetType = SvL_TargetManagement_types;
  (*SvL_Target).speed = (*MA_section).EOA.TargetSpeed;
  (*SvL_Target).valid = kcg_true;
  (*EOA_Target).targetType = EoA_TargetManagement_types;
  (*EOA_Target).distance = (*MA_section).EOA.Location;
  (*EOA_Target).speed = (*MA_section).EOA.TargetSpeed;
  (*EOA_Target).valid = kcg_true;
  if ((*MA_section).OL_valid) {
    (*SvL_Target).distance = (*MA_section).Overlap.Location;
  }
  else if ((*MA_section).DP_valid) {
    (*SvL_Target).distance = (*MA_section).DangerPoint;
  }
  else {
    (*SvL_Target).distance = (*MA_section).EOA.Location;
  }
  *ReleaseSpeedValid = (*MA_section).ReleaseSpeedValid;
  *ReleaseSpeed = (*MA_section).ReleaseSpeed;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** GetSvLOfEndsection_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

