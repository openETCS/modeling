/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen */
void UAB_Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::SectionData_in */UAB_TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::SectionData_out */UAB_TrackSectionData_T_InfraLib *SectionData_out)
{
  static UAB_CompressedBaliseMessage_TM tmp1;
  static UAB_CompressedBaliseMessage_TM tmp;
  
  UAB_kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, SectionData_in);
  /* 1 */
  UAB_Balise_Group_424_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG424_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_425_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG425_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_426_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG426_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_427_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG427_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_428_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG428_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_429_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG429_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_477_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG477_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_430_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG430_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_431_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG431_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_432_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG432_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_433_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG433_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_434_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG434_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_435_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG435_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_436_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG436_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_437_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG437_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.c
** Generation date: 2015-08-20T20:42:34
*************************************************************$ */

