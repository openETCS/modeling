/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0010_Breukelen_Maarssen_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises.h"

/* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen */
void Balises0010_Breukelen_Maarssen_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises(
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen::_L4 */
  static TrackSectionData_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen::_L3 */
  static CompressedBaliseMessage_TM _L3;
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen::_L2 */
  static kcg_real _L2;
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen::_L1 */
  static CompressedBaliseMessage_TM _L1;
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen::_L6 */
  static TrackSectionData_T_InfraLib _L6;
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen::_L7 */
  static CompressedBaliseMessage_TM _L7;
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen::_L8 */
  static CompressedBaliseMessage_TM _L8;
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen::_L9 */
  static CompressedBaliseMessage_TM _L9;
  
  kcg_copy_TrackSectionData_T_InfraLib(&_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&_L3, &_L6.BG_Message);
  _L2 = _L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_420_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises(
    &_L3,
    _L2,
    (BaliseGroupData_TM *) &BG420_Balises426,
    &_L1);
  /* 1 */
  Balise_Group_421_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises(
    &_L1,
    _L2,
    (BaliseGroupData_TM *) &BG421_Balises426,
    &_L7);
  /* 1 */
  Balise_Group_422_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises(
    &_L7,
    _L2,
    (BaliseGroupData_TM *) &BG422_Balises426,
    &_L8);
  /* 1 */
  Balise_Group_423_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises(
    &_L8,
    _L2,
    (BaliseGroupData_TM *) &BG423_Balises426,
    &_L9);
  kcg_copy_TrackSectionData_T_InfraLib(&_L4, &_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&_L4.BG_Message, &_L9);
  }
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0010_Breukelen_Maarssen_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

