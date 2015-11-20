/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init */
void Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init::_L4 */
  static TrackSectionData_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init::_L3 */
  static CompressedBaliseMessage_TM _L3;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init::_L2 */
  static kcg_real _L2;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init::_L1 */
  static CompressedBaliseMessage_TM _L1;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init::_L6 */
  static TrackSectionData_T_InfraLib _L6;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init::_L7 */
  static CompressedBaliseMessage_TM _L7;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init::_L21 */
  static CompressedBaliseMessage_TM _L21;
  
  kcg_copy_TrackSectionData_T_InfraLib(&_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&_L3, &_L6.BG_Message);
  _L2 = _L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_14_100_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &_L3,
    _L2,
    (BaliseGroupData_TM *) &BG100_Balises_Sim,
    &_L1);
  /* 1 */
  Balise_Group_14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &_L1,
    _L2,
    (BaliseGroupData_TM *) &BG200_Balises_Sim,
    &_L7);
  /* 1 */
  Balise_Group_14_201_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &_L7,
    _L2,
    (BaliseGroupData_TM *) &BG201_Balises_Sim,
    &_L21);
  kcg_copy_TrackSectionData_T_InfraLib(&_L4, &_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&_L4.BG_Message, &_L21);
  }
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

