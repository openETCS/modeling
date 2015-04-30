/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertMA_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::ConvertMA */
void ConvertMA_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::ConvertMA::maSection_in */ MA_section_t *maSection_in,
  /* SDM_Input_Wrappers::ConvertMA::maSection_out */ MA_section_real_T_TargetManagement_types *maSection_out)
{
  (*maSection_out).valid = (*maSection_in).MA_section_valid;
  (*maSection_out).EndSection = (*maSection_in).EndSection;
  (*maSection_out).DP_valid = (*maSection_in).DP_valid;
  (*maSection_out).OL_valid = (*maSection_in).OL_valid;
  (*maSection_out).ReleaseSpeedValid = (*maSection_in).ReleaseSpeedvald;
  (*maSection_out).EOA.Location = /* 2 */
    TransformL_intToL_real_SDM_Types_Pkg((*maSection_in).EOA.Location);
  (*maSection_out).EOA.TargetSpeed = /* 2 */
    TransformV_intToV_real_SDM_Types_Pkg((*maSection_in).EOA.TargetSpeed);
  (*maSection_out).EOA.Timer = /* 2 */
    TransformT_intToT_real_SDM_Types_Pkg((*maSection_in).EOA.Timer);
  (*maSection_out).DangerPoint = /* 1 */
    TransformL_intToL_real_SDM_Types_Pkg((*maSection_in).DangerPoint);
  (*maSection_out).Overlap.Location = /* 3 */
    TransformL_intToL_real_SDM_Types_Pkg((*maSection_in).Overlap.Location);
  (*maSection_out).Overlap.Timer = /* 3 */
    TransformT_intToT_real_SDM_Types_Pkg((*maSection_in).Overlap.Timer);
  (*maSection_out).ReleaseSpeed = /* 1 */
    TransformV_intToV_real_SDM_Types_Pkg((*maSection_in).ReleaseSpeed);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** ConvertMA_SDM_Input_Wrappers.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

