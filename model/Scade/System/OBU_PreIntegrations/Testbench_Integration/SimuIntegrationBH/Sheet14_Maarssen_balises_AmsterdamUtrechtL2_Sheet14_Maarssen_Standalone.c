/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Maarssen_balises */
void Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Maarssen_balises::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Maarssen_balises::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Maarssen_balises::_L1 */
  static TrackSectionData_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Maarssen_balises::_L2 */
  static TrackSectionData_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Maarssen_balises::_L3 */
  static TrackSectionData_T_InfraLib _L3;
  
  kcg_copy_TrackSectionData_T_InfraLib(&_L1, SectionData_in);
  /* 1 */
  Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(&_L1, &_L3);
  /* 1 */
  Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &_L3,
    &_L2);
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

