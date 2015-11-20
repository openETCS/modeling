/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getMRSFromMRSP_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::getMRSFromMRSP */
V_internal_real_Type_SDM_Types_Pkg getMRSFromMRSP_SDM_Types_Pkg(
  /* SDM_Types_Pkg::getMRSFromMRSP::MRSP */MRSP_internal_T_TargetManagement_types *MRSP,
  /* SDM_Types_Pkg::getMRSFromMRSP::d_max_safe_front */L_internal_real_Type_SDM_Types_Pkg d_max_safe_front)
{
  static MRSP_internal_section_T_TargetManagement_types tmp1;
  static MRSP_internal_section_T_TargetManagement_types tmp;
  static kcg_int i;
  /* SDM_Types_Pkg::getMRSFromMRSP::V_MRSP */
  static V_internal_real_Type_SDM_Types_Pkg V_MRSP;
  
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(&tmp1, &(*MRSP)[0]);
  for (i = 0; i < 110; i++) {
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getMRSFromMRSP_SDM_Types_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

