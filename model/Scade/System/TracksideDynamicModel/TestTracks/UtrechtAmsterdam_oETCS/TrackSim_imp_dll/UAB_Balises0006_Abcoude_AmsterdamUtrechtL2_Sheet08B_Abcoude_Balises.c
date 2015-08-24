/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.h"

/* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude */
void UAB_Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::SectionData_in */UAB_TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::SectionData_out */UAB_TrackSectionData_T_InfraLib *SectionData_out)
{
  static UAB_CompressedBaliseMessage_TM tmp1;
  static UAB_CompressedBaliseMessage_TM tmp;
  
  UAB_kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, SectionData_in);
  /* 1 */
  UAB_Balise_Group_378_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG378_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_379_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG379_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_380_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG380_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_381_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG381_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_382_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG382_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_383_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG383_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_384_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG384_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_385_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG385_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_386_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG386_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_387_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG387_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_388_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG388_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.c
** Generation date: 2015-08-20T20:42:33
*************************************************************$ */

