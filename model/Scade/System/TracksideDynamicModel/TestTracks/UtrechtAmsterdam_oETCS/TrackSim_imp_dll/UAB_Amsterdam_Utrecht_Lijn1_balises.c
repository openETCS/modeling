/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_Amsterdam_Utrecht_Lijn1_balises.h"

void UAB_Amsterdam_Utrecht_Lijn1_balises_reset(void)
{
}

/* Amsterdam_Utrecht_Lijn1_balises */
void UAB_Amsterdam_Utrecht_Lijn1_balises(void)
{
  static UAB_TrackSectionData_T_InfraLib tmp1;
  static UAB_TrackSectionData_T_InfraLib tmp;
  
  /* 1 */ UAB_TrackInit_InfraLib(UAB_TrainPosSim_in, 0, &tmp);
  /* 1 */ UAB_TrackDiscontinuity_InfraLib(&tmp, 104775, 105650, &tmp1);
  /* 1 */
  UAB_Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &tmp1,
    &tmp);
  /* 2 */ UAB_TrackDiscontinuity_InfraLib(&tmp, 1659 - 400, 32962, &tmp1);
  /* 1 */
  UAB_Balises0002_Amstel_UB_Signal_613_to_617_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &tmp1,
    &tmp);
  /* 1 */
  UAB_Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &tmp,
    &tmp1);
  /* 1 */
  UAB_Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &tmp1,
    &tmp);
  /* 1 */
  UAB_Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &tmp,
    &tmp1);
  /* 1 */
  UAB_Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &tmp1,
    &tmp);
  /* 1 */
  UAB_Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &tmp,
    &tmp1);
  /* 1 */
  UAB_Balises0008_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &tmp1,
    &tmp);
  /* 1 */
  UAB_Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &tmp,
    &tmp1);
  /* 1 */
  UAB_Balises0010_Breukelen_Maarssen_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises(
    &tmp1,
    &tmp);
  /* 1 */
  UAB_Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    &tmp1);
  /* 1 */
  UAB_Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &tmp1,
    &tmp);
  /* 1 */ UAB_TrackClose_InfraLib(&tmp, &UAB_BaliseMessage);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Amsterdam_Utrecht_Lijn1_balises.c
** Generation date: 2015-08-20T20:42:34
*************************************************************$ */

