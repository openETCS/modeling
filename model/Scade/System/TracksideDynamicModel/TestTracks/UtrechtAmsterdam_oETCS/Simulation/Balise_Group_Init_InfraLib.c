/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_Init_InfraLib.h"

void Balise_Group_Init_reset_InfraLib(outC_Balise_Group_Init_InfraLib *outC)
{
}

/* InfraLib::Balise_Group_Init */
void Balise_Group_Init_InfraLib(
  /* InfraLib::Balise_Group_Init::TrainPos */kcg_real TrainPos,
  /* InfraLib::Balise_Group_Init::Engineering_Data */BaliseGroupData_TM *Engineering_Data,
  outC_Balise_Group_Init_InfraLib *outC)
{
  outC->_L31 = kcg_false;
  outC->_L30 = TrainPos;
  kcg_copy_BaliseGroupData_TM(&outC->_L2, Engineering_Data);
  outC->_L29 = outC->_L2.Pos;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L28,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &outC->_L27,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  outC->_L14 = 0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L26.header, &outC->_L27);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L26.packets,
    &outC->_L28);
  outC->_L26.engineering_BG_location = outC->_L29;
  outC->_L26.TrainPos = outC->_L30;
  outC->_L26.pig_nom_0 = outC->_L14;
  outC->_L26.balise_passed = outC->_L31;
  kcg_copy_B_data_internal_T_InfraLib(&outC->BG_internal_out, &outC->_L26);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_Init_InfraLib.c
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */

