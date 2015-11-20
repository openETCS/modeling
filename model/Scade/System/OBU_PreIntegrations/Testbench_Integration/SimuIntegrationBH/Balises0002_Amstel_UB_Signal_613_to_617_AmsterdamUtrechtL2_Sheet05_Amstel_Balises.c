/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0002_Amstel_UB_Signal_613_to_617_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617 */
void Balises0002_Amstel_UB_Signal_613_to_617_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617::_L4 */
  static TrackSectionData_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617::_L3 */
  static CompressedBaliseMessage_TM _L3;
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617::_L2 */
  static kcg_real _L2;
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617::_L1 */
  static CompressedBaliseMessage_TM _L1;
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617::_L6 */
  static TrackSectionData_T_InfraLib _L6;
  
  kcg_copy_TrackSectionData_T_InfraLib(&_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&_L3, &_L6.BG_Message);
  _L2 = _L6.TrainPosRaw.TrainPosCalibrated;
  /* 2 */
  Balise_Group_353_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &_L3,
    _L2,
    (BaliseGroupData_TM *) &BG353_Balises426,
    &_L1);
  kcg_copy_TrackSectionData_T_InfraLib(&_L4, &_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&_L4.BG_Message, &_L1);
  }
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balises0002_Amstel_UB_Signal_613_to_617_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

