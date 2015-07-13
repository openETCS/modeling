/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-12T22:54:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_386_0_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.h"

void Balise_386_0_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
  outC_Balise_386_0_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises *outC)
{
  /* 1 */ No_Balise_Packets_reset_InfraLib(&outC->_1_Context_1);
  /* 1 */ Balise_Localisation_reset_InfraLib(&outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_386_0 */
void Balise_386_0_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_386_0::B_data_in */B_data_internal_T_InfraLib *B_data_in,
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_386_0::Header */BaliseTelegramHeader_int_T_TM *_1_Header,
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_386_0::PIG_nom */kcg_int PIG_nom,
  outC_Balise_386_0_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises *outC)
{
  static B_data_internal_T_InfraLib tmp;
  
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L23, _1_Header);
  outC->_L20 = PIG_nom;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L19, _1_Header);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L15, B_data_in);
  /* 1 */
  Balise_Localisation_InfraLib(
    &outC->_L15,
    &outC->_L19,
    outC->_L20,
    &outC->Context_1);
  outC->_L21 = outC->Context_1.PIG_0_out;
  outC->_L2 = outC->Context_1.TrainPass;
  outC->tmp = outC->_L2;
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L5, B_data_in);
  if (outC->tmp) {
    /* 1 */
    No_Balise_Packets_InfraLib(&outC->_L23, &outC->_L5, &outC->_1_Context_1);
    kcg_copy_B_data_internal_T_InfraLib(
      &tmp,
      &outC->_1_Context_1.Balise_data_out);
    kcg_copy_B_data_internal_T_InfraLib(&outC->_L4, &tmp);
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&outC->_L4, &outC->_L5);
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L17, &outC->_L4);
  if (kcg_true) {
    outC->_L17.pig_nom_0 = outC->_L21;
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->B_data_out, &outC->_L17);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_386_0_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.c
** Generation date: 2015-07-12T22:54:51
*************************************************************$ */

