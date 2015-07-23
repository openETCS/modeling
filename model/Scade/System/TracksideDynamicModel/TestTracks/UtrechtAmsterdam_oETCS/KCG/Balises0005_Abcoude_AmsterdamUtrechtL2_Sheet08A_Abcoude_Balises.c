/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.h"

/* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude */
void Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::SectionData_out */TrackSectionData_T_InfraLib *SectionData_out)
{
  static CompressedBaliseMessage_TM tmp1;
  static CompressedBaliseMessage_TM tmp;
  
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, SectionData_in);
  /* 1 */
  Balise_Group_374_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG374_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_375_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG375_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_376_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG376_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_377_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG374_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.c
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

