/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises.h"

/* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen */
void Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::SectionData_out */TrackSectionData_T_InfraLib *SectionData_out)
{
  static CompressedBaliseMessage_TM tmp1;
  static CompressedBaliseMessage_TM tmp;
  
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, SectionData_in);
  /* 1 */
  Balise_Group_410_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG410_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_476_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG476_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_411_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG411_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_412_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG412_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_413_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG413_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_414_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG414_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_415_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG415_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_416_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG416_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_417_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG417_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_418_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG418_Balises426,
    &tmp1);
  /* 2 */
  Balise_Group_419_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG419_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises.c
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

