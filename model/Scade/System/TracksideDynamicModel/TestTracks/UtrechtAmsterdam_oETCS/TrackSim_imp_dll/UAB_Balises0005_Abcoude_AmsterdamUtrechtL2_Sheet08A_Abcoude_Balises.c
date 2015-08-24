/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.h"

/* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude */
void UAB_Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::SectionData_in */UAB_TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::SectionData_out */UAB_TrackSectionData_T_InfraLib *SectionData_out)
{
  static UAB_CompressedBaliseMessage_TM tmp1;
  static UAB_CompressedBaliseMessage_TM tmp;
  
  UAB_kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, SectionData_in);
  /* 1 */
  UAB_Balise_Group_374_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG374_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_375_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG375_Balises426,
    &tmp);
  /* 1 */
  UAB_Balise_Group_376_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG376_Balises426,
    &tmp1);
  /* 1 */
  UAB_Balise_Group_377_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (UAB_BaliseGroupData_TM *) &UAB_BG377_Balises426,
    &(*SectionData_out).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.c
** Generation date: 2015-08-20T20:42:33
*************************************************************$ */

