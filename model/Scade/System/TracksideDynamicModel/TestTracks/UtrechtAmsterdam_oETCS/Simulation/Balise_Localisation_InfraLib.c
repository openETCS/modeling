/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Localisation_InfraLib.h"

void Balise_Localisation_reset_InfraLib(outC_Balise_Localisation_InfraLib *outC)
{
  /* 1 */ TOOLS_convert_engineering_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ Balise_Interdistance_reset_InfraLib(&outC->Context_1);
}

/* InfraLib::Balise_Localisation */
void Balise_Localisation_InfraLib(
  /* InfraLib::Balise_Localisation::B_data_in */B_data_internal_T_InfraLib *B_data_in,
  /* InfraLib::Balise_Localisation::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* InfraLib::Balise_Localisation::PIG_nom */kcg_int PIG_nom,
  outC_Balise_Localisation_InfraLib *outC)
{
  kcg_int noname;
  
  outC->_L92 = ReleaseDelta_InfraLib;
  outC->I2_1 = outC->_L92;
  outC->_L48 = PIG_nom;
  outC->_L51 = 0;
  outC->_L50 = outC->_L48 == outC->_L51;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L16, Header);
  outC->_L47 = outC->_L16.n_pig;
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L65, B_data_in);
  outC->_L66 = outC->_L65.pig_nom_0;
  if (outC->_L50) {
    outC->_L52 = outC->_L47;
  }
  else {
    outC->_L52 = outC->_L66;
  }
  /* 1 */
  Balise_Interdistance_InfraLib(outC->_L52, outC->_L47, &outC->Context_1);
  outC->_L75 = outC->Context_1.distance_BB;
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L71, B_data_in);
  outC->_L68 = outC->_L71.engineering_BG_location;
  /* 1 */
  TOOLS_convert_engineering_TM_conversions(outC->_L68, &outC->_1_Context_1);
  outC->_L77 = outC->_1_Context_1.Loc_real;
  outC->_L76 = outC->_L75 + outC->_L77;
  outC->_L82 = Half_Distance_Balises_in_BG_InfraLib;
  outC->I1_1 = outC->_L82;
  outC->_L21_1 = outC->I1_1;
  outC->_L22_1 = outC->I2_1;
  outC->_L25_1 = outC->_L21_1 <= outC->_L22_1;
  if (outC->_L25_1) {
    outC->_L24_1 = outC->_L21_1;
  }
  else {
    outC->_L24_1 = outC->_L22_1;
  }
  outC->Mi_Output_1 = outC->_L24_1;
  outC->_L93 = outC->Mi_Output_1;
  outC->_L90 = outC->_L76 + outC->_L93;
  outC->_L73 = outC->_L71.TrainPos;
  outC->_L95 = outC->_L90 > outC->_L73;
  outC->_L91 = outC->_L76 - outC->_L93;
  outC->_L94 = outC->_L91 <= outC->_L73;
  outC->_L96 = outC->_L95 & outC->_L94;
  outC->TrainPass = outC->_L96;
  outC->PIG_0_out = outC->_L52;
  outC->_L15 = 0;
  noname = outC->_L15;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Localisation_InfraLib.c
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

