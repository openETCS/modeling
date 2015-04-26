/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GetLOAFromSection_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::GetLOAFromSection */
void GetLOAFromSection_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::GetLOAFromSection::MA_Section */ MA_section_real_T_TargetManagement_types *MA_Section,
  /* TargetManagement_pkg::internalOperators::GetLOAFromSection::LOA_Target */ Target_real_T_TargetManagement_types *LOA_Target)
{
  (*LOA_Target).targetType = LoA_TargetManagement_types;
  (*LOA_Target).distance = (*MA_Section).EOA.Location;
  (*LOA_Target).speed = (*MA_Section).EOA.TargetSpeed;
  (*LOA_Target).valid = kcg_true;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** GetLOAFromSection_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

