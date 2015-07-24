/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_Init_InfraLib.h"

/* InfraLib::Balise_Group_Init */
void Balise_Group_Init_InfraLib(
  /* InfraLib::Balise_Group_Init::TrainPos */kcg_real _1_TrainPos,
  /* InfraLib::Balise_Group_Init::Engineering_Data */BaliseGroupData_TM *Engineering_Data,
  /* InfraLib::Balise_Group_Init::BG_internal_out */B_data_internal_T_InfraLib *BG_internal_out)
{
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &(*BG_internal_out).header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*BG_internal_out).packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  (*BG_internal_out).engineering_BG_location = (*Engineering_Data).Pos;
  (*BG_internal_out).TrainPos = _1_TrainPos;
  (*BG_internal_out).pig_nom_0 = 0;
  (*BG_internal_out).balise_passed = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_Init_InfraLib.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

