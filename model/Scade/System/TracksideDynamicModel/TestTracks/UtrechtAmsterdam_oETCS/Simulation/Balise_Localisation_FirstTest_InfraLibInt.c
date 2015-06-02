/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T15:02:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Localisation_FirstTest_InfraLibInt.h"

void Balise_Localisation_reset_FirstTest_InfraLibInt(
  outC_Balise_Localisation_FirstTest_InfraLibInt *outC)
{
  outC->init = kcg_true;
  /* 1 */ Balise_Interdistance_reset_FirstTest_InfraLibInt(&outC->_1_Context_1);
  /* 1 */ TOOLS_convert_engineering_reset_TM_conversions(&outC->Context_1);
}

/* FirstTest::InfraLibInt::Balise_Localisation */
void Balise_Localisation_FirstTest_InfraLibInt(
  /* FirstTest::InfraLibInt::Balise_Localisation::B_data_in */B_data_internal_FirstTest_InfraLibInt *B_data_in,
  /* FirstTest::InfraLibInt::Balise_Localisation::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* FirstTest::InfraLibInt::Balise_Localisation::PIG_nom */kcg_int PIG_nom,
  outC_Balise_Localisation_FirstTest_InfraLibInt *outC)
{
  kcg_int noname;
  
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(&outC->_L71, B_data_in);
  outC->_L68 = outC->_L71.engineering_BG_location;
  /* 1 */
  TOOLS_convert_engineering_TM_conversions(outC->_L68, &outC->Context_1);
  outC->_L77 = outC->Context_1.Loc_real;
  outC->_L48 = PIG_nom;
  outC->_L51 = 0;
  outC->_L50 = outC->_L48 == outC->_L51;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L16, Header);
  outC->_L47 = outC->_L16.n_pig;
  kcg_copy_B_data_internal_FirstTest_InfraLibInt(&outC->_L65, B_data_in);
  outC->_L66 = outC->_L65.pig_nom_0;
  if (outC->_L50) {
    outC->_L52 = outC->_L47;
  }
  else {
    outC->_L52 = outC->_L66;
  }
  /* 1 */
  Balise_Interdistance_FirstTest_InfraLibInt(
    outC->_L52,
    outC->_L47,
    &outC->_1_Context_1);
  outC->_L75 = outC->_1_Context_1.distance_BB;
  outC->_L76 = outC->_L75 + outC->_L77;
  if (outC->init) {
    outC->_L70 = 999999999999999999999.0;
  }
  else {
    outC->_L70 = outC->_L73;
  }
  outC->_L73 = outC->_L71.TrainPos;
  outC->_L72 = outC->_L73 >= outC->_L76;
  outC->_L69 = outC->_L70 <= outC->_L76;
  outC->_L67 = outC->_L72 & outC->_L69;
  outC->TrainPass = outC->_L67;
  outC->PIG_0_out = outC->_L52;
  outC->_L15 = 0;
  noname = outC->_L15;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Localisation_FirstTest_InfraLibInt.c
** Generation date: 2015-06-02T15:02:42
*************************************************************$ */

