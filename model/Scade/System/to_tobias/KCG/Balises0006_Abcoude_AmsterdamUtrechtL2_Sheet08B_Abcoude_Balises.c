/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.h"

/* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude */
void Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::SectionData_out */TrackSectionData_T_InfraLib *SectionData_out)
{
  static CompressedBaliseMessage_TM tmp1;
  static CompressedBaliseMessage_TM tmp;
  
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, SectionData_in);
  /* 1 */
  Balise_Group_378_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG378_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_379_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG379_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_380_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG380_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_381_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG381_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_382_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG382_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_383_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG383_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_384_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG384_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_385_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG385_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_386_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG386_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_387_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG387_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_388_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG388_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

