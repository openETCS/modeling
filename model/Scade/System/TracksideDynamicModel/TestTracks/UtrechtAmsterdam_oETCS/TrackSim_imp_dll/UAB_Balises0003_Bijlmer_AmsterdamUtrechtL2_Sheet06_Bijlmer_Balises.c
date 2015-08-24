/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.h"

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer */
void UAB_Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::SectionData_in */UAB_TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::SectionData_out */UAB_TrackSectionData_T_InfraLib *SectionData_out)
{
  static UAB_CompressedBaliseMessage_TM tmp1;
  static UAB_CompressedBaliseMessage_TM tmp;
  
  UAB_kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, SectionData_in);
  /* 1 */
  UAB_Balise_Group_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG354_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG351_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_355_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG355_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_356_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG356_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_357_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG357_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_358_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG358_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_359_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG359_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_360_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG360_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_361_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG361_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG362_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_363_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG363_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG364_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_365_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG365_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_366_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG366_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_367_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG367_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_368_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG368_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_369_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG369_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_341_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG341_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_370_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG370_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.c
** Generation date: 2015-08-20T20:42:33
*************************************************************$ */

