/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen */
void Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::SectionData_out */TrackSectionData_T_InfraLib *SectionData_out)
{
  static CompressedBaliseMessage_TM tmp1;
  static CompressedBaliseMessage_TM tmp;
  
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, SectionData_in);
  /* 1 */
  Balise_Group_424_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG424_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_425_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG425_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_426_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG426_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_427_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG427_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_428_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG428_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_429_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG429_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_477_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG477_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_430_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG430_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_431_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG431_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_432_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG432_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_433_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG433_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_434_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG434_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_435_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG435_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_436_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG436_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_437_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG437_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

