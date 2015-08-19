/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0002_Amstel_UB_Signal_613_to_617_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617 */
void Balises0002_Amstel_UB_Signal_613_to_617_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617::SectionData_out */TrackSectionData_T_InfraLib *SectionData_out)
{
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, SectionData_in);
  /* 2 */
  Balise_Group_353_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG353_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0002_Amstel_UB_Signal_613_to_617_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

