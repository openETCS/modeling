/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h"

/* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen */
void Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::SectionData_out */TrackSectionData_T_InfraLib *SectionData_out)
{
  static CompressedBaliseMessage_TM tmp1;
  static CompressedBaliseMessage_TM tmp;
  
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, SectionData_in);
  /* 1 */
  Balise_Group_389_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG389_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_390_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG390_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_391_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG391_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_392_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG392_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_393_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG393_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_394_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG394_Balises426,
    &tmp1);
  /* 1 */
  Balise_Group_395_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG395_Balises426,
    &tmp);
  /* 1 */
  Balise_Group_396_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG396_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.c
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

