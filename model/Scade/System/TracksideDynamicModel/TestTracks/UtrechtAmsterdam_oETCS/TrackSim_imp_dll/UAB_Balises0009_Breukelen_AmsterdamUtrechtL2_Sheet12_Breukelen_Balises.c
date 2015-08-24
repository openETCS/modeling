/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises.h"

/* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen */
void UAB_Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::SectionData_in */UAB_TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::SectionData_out */UAB_TrackSectionData_T_InfraLib *SectionData_out)
{
  static UAB_CompressedBaliseMessage_TM tmp1;
  static UAB_CompressedBaliseMessage_TM tmp;
  
  UAB_kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, SectionData_in);
  /* 1 */
  UAB_Balise_Group_410_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG410_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_476_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG476_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_411_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG411_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_412_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG412_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_413_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG413_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_414_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG414_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_415_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG415_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_416_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG416_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_417_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG417_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_418_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG418_Balises426,
    &tmp1);
  /* 2 */
  UAB_Balise_Group_419_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG419_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises.c
** Generation date: 2015-08-20T20:42:34
*************************************************************$ */

