/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h"

/* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen */
void UAB_Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::SectionData_in */UAB_TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen::SectionData_out */UAB_TrackSectionData_T_InfraLib *SectionData_out)
{
  static UAB_CompressedBaliseMessage_TM tmp1;
  static UAB_CompressedBaliseMessage_TM tmp;
  
  UAB_kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, SectionData_in);
  /* 1 */
  UAB_Balise_Group_389_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG389_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_390_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG390_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_391_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG391_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_392_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG392_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_393_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG393_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_394_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG394_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_395_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG395_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_396_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG396_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.c
** Generation date: 2015-08-20T20:42:33
*************************************************************$ */

