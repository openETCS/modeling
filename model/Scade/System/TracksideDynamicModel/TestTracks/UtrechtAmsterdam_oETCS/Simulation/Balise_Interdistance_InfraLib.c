/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Interdistance_InfraLib.h"

void Balise_Interdistance_reset_InfraLib(
  outC_Balise_Interdistance_InfraLib *outC)
{
}

/* InfraLib::Balise_Interdistance */
void Balise_Interdistance_InfraLib(
  /* InfraLib::Balise_Interdistance::pig0 */kcg_int pig0,
  /* InfraLib::Balise_Interdistance::n_pig */kcg_int n_pig,
  outC_Balise_Interdistance_InfraLib *outC)
{
  outC->_L8_1 = 0;
  outC->_L10 = n_pig;
  outC->_L6 = pig0;
  outC->_L11 = outC->_L10 - outC->_L6;
  outC->A_Input_1 = outC->_L11;
  outC->_L5_1 = outC->A_Input_1;
  outC->_L1_1 = outC->_L8_1 <= outC->_L5_1;
  outC->_L3_1 = - outC->_L5_1;
  if (outC->_L1_1) {
    outC->_L2_1 = outC->_L5_1;
  }
  else {
    outC->_L2_1 = outC->_L3_1;
  }
  outC->A_Output_1 = outC->_L2_1;
  outC->_L13 = outC->A_Output_1;
  outC->_L14 = (kcg_real) outC->_L13;
  outC->_L9 = 0;
  outC->_L8 = outC->_L6 == outC->_L9;
  outC->_L4 = 1.0;
  outC->_L5 = - 1.0;
  if (outC->_L8) {
    outC->_L1 = outC->_L4;
  }
  else {
    outC->_L1 = outC->_L5;
  }
  outC->_L3 = Distance_Balises_in_BG_InfraLib;
  outC->_L2 = outC->_L1 * outC->_L3;
  outC->_L12 = outC->_L14 * outC->_L2;
  outC->distance_BB = outC->_L12;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Interdistance_InfraLib.c
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */

