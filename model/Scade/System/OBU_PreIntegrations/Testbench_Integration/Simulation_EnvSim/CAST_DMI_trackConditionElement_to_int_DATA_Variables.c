/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_trackConditionElement_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_trackConditionElement_to_int */
void CAST_DMI_trackConditionElement_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_trackConditionElement_to_int::dmi_trackConditionElement */DMI_trackConditionElement_T_DMI_Types_Pkg *dmi_trackConditionElement,
  /* DATA::Variables::CAST_DMI_trackConditionElement_to_int::d_trackcond_int */kcg_int *d_trackcond_int,
  /* DATA::Variables::CAST_DMI_trackConditionElement_to_int::m_trackcond_int */kcg_int *m_trackcond_int)
{
  *m_trackcond_int = /* 1 */
    CAST_M_TRACKCOND_to_int_TM_conversions(
      (*dmi_trackConditionElement).m_trackcond);
  *d_trackcond_int = /* 1 */
    CAST_D_TRACKCOND_to_int_TM_conversions(
      (*dmi_trackConditionElement).d_trackcond);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_trackConditionElement_to_int_DATA_Variables.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

