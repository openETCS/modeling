/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613 */
void Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613::_L1 */
  static CompressedBaliseMessage_TM _L1;
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613::_L3 */
  static TrackSectionData_T_InfraLib _L3;
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613::_L13 */
  static CompressedBaliseMessage_TM _L13;
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613::_L14 */
  static kcg_real _L14;
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613::_L15 */
  static TrackSectionData_T_InfraLib _L15;
  
  kcg_copy_TrackSectionData_T_InfraLib(&_L3, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&_L13, &_L3.BG_Message);
  _L14 = _L3.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &_L13,
    _L14,
    (BaliseGroupData_TM *) &BG352_Balises426,
    &_L1);
  kcg_copy_TrackSectionData_T_InfraLib(&_L15, &_L3);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&_L15.BG_Message, &_L1);
  }
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, &_L15);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

