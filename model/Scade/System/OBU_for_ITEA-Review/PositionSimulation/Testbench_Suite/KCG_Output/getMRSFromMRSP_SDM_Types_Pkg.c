/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getMRSFromMRSP_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::getMRSFromMRSP */
V_internal_real_Type_SDM_Types_Pkg getMRSFromMRSP_SDM_Types_Pkg(
  /* SDM_Types_Pkg::getMRSFromMRSP::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* SDM_Types_Pkg::getMRSFromMRSP::d_max_safe_front */ L_internal_real_Type_SDM_Types_Pkg d_max_safe_front)
{
  MRSP_internal_section_T_TargetManagement_types tmp1;
  MRSP_internal_section_T_TargetManagement_types tmp;
  kcg_int i;
  /* SDM_Types_Pkg::getMRSFromMRSP::V_MRSP */ V_internal_real_Type_SDM_Types_Pkg V_MRSP;
  
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(&tmp1, &(*MRSP)[0]);
  for (i = 0; i < 200; i++) {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&tmp, &tmp1);
    if ((*MRSP)[i].valid & ((*MRSP)[i].Loc_Abs <= d_max_safe_front)) {
      kcg_copy_MRSP_internal_section_T_TargetManagement_types(
        &tmp1,
        &(*MRSP)[i]);
    }
    else {
      kcg_copy_MRSP_internal_section_T_TargetManagement_types(&tmp1, &tmp);
    }
  }
  V_MRSP = tmp1.MRS;
  return V_MRSP;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** getMRSFromMRSP_SDM_Types_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

