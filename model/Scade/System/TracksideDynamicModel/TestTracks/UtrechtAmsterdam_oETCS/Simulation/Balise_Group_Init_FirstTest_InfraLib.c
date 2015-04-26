/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_Init_FirstTest_InfraLib.h"

void Balise_Group_Init_reset_FirstTest_InfraLib(
  outC_Balise_Group_Init_FirstTest_InfraLib *outC)
{
}

/* FirstTest::InfraLib::Balise_Group_Init */
void Balise_Group_Init_FirstTest_InfraLib(
  /* FirstTest::InfraLib::Balise_Group_Init::TrainPos */kcg_real TrainPos,
  /* FirstTest::InfraLib::Balise_Group_Init::Engineering_Data */TM_BaliseGroupData *Engineering_Data,
  outC_Balise_Group_Init_FirstTest_InfraLib *outC)
{
  outC->_L31 = kcg_false;
  outC->_L30 = TrainPos;
  kcg_copy_TM_BaliseGroupData(&outC->_L2, Engineering_Data);
  outC->_L29 = outC->_L2.Pos;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L28,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets);
  kcg_copy_TM_BaliseTelegramHeader_int_T(
    &outC->_L27,
    (TM_BaliseTelegramHeader_int_T *) &DEFAULT_TM_BaliseHeaderInt);
  outC->_L14 = 0;
  kcg_copy_TM_BaliseTelegramHeader_int_T(&outC->_L26.header, &outC->_L27);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L26.packets,
    &outC->_L28);
  outC->_L26.engineering_BG_location = outC->_L29;
  outC->_L26.TrainPos = outC->_L30;
  outC->_L26.pig_nom_0 = outC->_L14;
  outC->_L26.balise_passed = outC->_L31;
  kcg_copy_B_data_internal_FirstTest_InfraLib(
    &outC->BG_internal_out,
    &outC->_L26);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_Init_FirstTest_InfraLib.c
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */

