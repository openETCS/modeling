/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertMRSP_section_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::ConvertMRSP_section */
void ConvertMRSP_section_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::ConvertMRSP_section::Input1 */ MRSP_section_t *Input1,
  /* SDM_Input_Wrappers::ConvertMRSP_section::Output1 */ MRSP_internal_section_T_TargetManagement_types *Output1)
{
  (*Output1).valid = (*Input1).valid;
  (*Output1).Loc_Abs = /* 12 */
    TransformL_intToL_real_SDM_Types_Pkg((*Input1).Loc_Abs);
  (*Output1).MRS = /* 6 */ TransformV_intToV_real_SDM_Types_Pkg((*Input1).MRS);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** ConvertMRSP_section_SDM_Input_Wrappers.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

