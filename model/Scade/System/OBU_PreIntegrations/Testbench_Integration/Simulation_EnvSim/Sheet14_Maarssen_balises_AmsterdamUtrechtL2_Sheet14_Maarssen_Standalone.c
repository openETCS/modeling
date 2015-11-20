/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Maarssen_balises */
void Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Maarssen_balises::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Maarssen_balises::SectionData_out */TrackSectionData_T_InfraLib *SectionData_out)
{
  static TrackSectionData_T_InfraLib tmp;
  
  /* 1 */
  Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    SectionData_in,
    &tmp);
  /* 1 */
  Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &tmp,
    SectionData_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

