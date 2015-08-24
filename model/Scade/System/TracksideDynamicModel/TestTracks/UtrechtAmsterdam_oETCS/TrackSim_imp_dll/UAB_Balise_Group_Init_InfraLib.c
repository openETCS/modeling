/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_Balise_Group_Init_InfraLib.h"

/* InfraLib::Balise_Group_Init */
void UAB_Balise_Group_Init_InfraLib(
  /* InfraLib::Balise_Group_Init::TrainPos */kcg_real TrainPos,
  /* InfraLib::Balise_Group_Init::Engineering_Data */UAB_BaliseGroupData_TM *Engineering_Data,
  /* InfraLib::Balise_Group_Init::BG_internal_out */UAB_B_data_internal_T_InfraLib *BG_internal_out)
{
  UAB_kcg_copy_BaliseTelegramHeader_int_T_TM(
    &(*BG_internal_out).header,
    (UAB_BaliseTelegramHeader_int_T_TM *) &UAB_DEFAULT_TM_BaliseHeaderInt_TM);
  UAB_kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*BG_internal_out).packets,
    (UAB_CompressedPackets_T_Common_Types_Pkg *) &UAB_DEFAULT_Packets_TM);
  (*BG_internal_out).engineering_BG_location = (*Engineering_Data).Pos;
  (*BG_internal_out).TrainPos = TrainPos;
  (*BG_internal_out).pig_nom_0 = 0;
  (*BG_internal_out).balise_passed = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Balise_Group_Init_InfraLib.c
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

