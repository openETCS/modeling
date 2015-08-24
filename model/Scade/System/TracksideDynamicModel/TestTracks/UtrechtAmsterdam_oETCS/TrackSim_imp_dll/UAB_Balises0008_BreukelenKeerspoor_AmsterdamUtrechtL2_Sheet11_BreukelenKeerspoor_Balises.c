/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_Balises0008_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.h"

/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor */
void UAB_Balises0008_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::SectionData_in */UAB_TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor::SectionData_out */UAB_TrackSectionData_T_InfraLib *SectionData_out)
{
  static UAB_CompressedBaliseMessage_TM tmp1;
  static UAB_CompressedBaliseMessage_TM tmp;
  
  UAB_kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, SectionData_in);
  /* 1 */
  UAB_Balise_Group_397_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG397_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_398_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG398_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_399_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG399_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_400_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG400_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_401_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG401_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_402_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG402_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_403_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG403_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_404_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG404_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_405_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG405_Balises426,
    &tmp);
  /* 2 */
  UAB_Balise_Group_406_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG406_Balises426,
    &tmp1);
  /* 2 */
  UAB_Balise_Group_407_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG407_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_408_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG408_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_409_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG409_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Balises0008_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.c
** Generation date: 2015-08-20T20:42:33
*************************************************************$ */

