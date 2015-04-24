/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_366_0_FirstTest_InfraLib.h"

void Balise_366_0_reset_FirstTest_InfraLib(
  outC_Balise_366_0_FirstTest_InfraLib *outC)
{
  /* 1 */ TEMPLATE_Balise_Packets_reset_FirstTest_InfraLib(&outC->_1_Context_1);
  /* 1 */ Balise_Localisation_reset_FirstTest_InfraLib(&outC->Context_1);
}

/* FirstTest::InfraLib::Balise_366_0 */
void Balise_366_0_FirstTest_InfraLib(
  /* FirstTest::InfraLib::Balise_366_0::B_data_in */B_data_internal_FirstTest_InfraLib *B_data_in,
  /* FirstTest::InfraLib::Balise_366_0::Header */TM_BaliseTelegramHeader_int_T *Header,
  /* FirstTest::InfraLib::Balise_366_0::PIG_nom */kcg_int PIG_nom,
  outC_Balise_366_0_FirstTest_InfraLib *outC)
{
  B_data_internal_FirstTest_InfraLib tmp;
  
  kcg_copy_TM_BaliseTelegramHeader_int_T(&outC->_L23, Header);
  outC->_L20 = PIG_nom;
  kcg_copy_TM_BaliseTelegramHeader_int_T(&outC->_L19, Header);
  kcg_copy_B_data_internal_FirstTest_InfraLib(&outC->_L15, B_data_in);
  /* 1 */
  Balise_Localisation_FirstTest_InfraLib(
    &outC->_L15,
    &outC->_L19,
    outC->_L20,
    &outC->Context_1);
  outC->_L21 = outC->Context_1.PIG_0_out;
  outC->_L2 = outC->Context_1.TrainPass;
  outC->tmp = outC->_L2;
  kcg_copy_B_data_internal_FirstTest_InfraLib(&outC->_L5, B_data_in);
  if (outC->tmp) {
    /* 1 */
    TEMPLATE_Balise_Packets_FirstTest_InfraLib(
      &outC->_L23,
      &outC->_L5,
      &outC->_1_Context_1);
    kcg_copy_B_data_internal_FirstTest_InfraLib(
      &tmp,
      &outC->_1_Context_1.Balise_data_out);
    kcg_copy_B_data_internal_FirstTest_InfraLib(&outC->_L4, &tmp);
  }
  else {
    kcg_copy_B_data_internal_FirstTest_InfraLib(&outC->_L4, &outC->_L5);
  }
  kcg_copy_B_data_internal_FirstTest_InfraLib(&outC->_L17, &outC->_L4);
  if (kcg_true) {
    outC->_L17.pig_nom_0 = outC->_L21;
  }
  kcg_copy_B_data_internal_FirstTest_InfraLib(&outC->B_data_out, &outC->_L17);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_366_0_FirstTest_InfraLib.c
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

