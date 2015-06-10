/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T14:04:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "No_Balise_Packets_InfraLib.h"

void No_Balise_Packets_reset_InfraLib(outC_No_Balise_Packets_InfraLib *outC)
{
}

/* InfraLib::No_Balise_Packets */
void No_Balise_Packets_InfraLib(
  /* InfraLib::No_Balise_Packets::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* InfraLib::No_Balise_Packets::Balise_data_in */B_data_internal_T_InfraLib *Balise_data_in,
  outC_No_Balise_Packets_InfraLib *outC)
{
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L30, Balise_data_in);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L32, Header);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L36, &outC->_L30);
  if (kcg_true) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L36.header, &outC->_L32);
  }
  outC->_L35 = kcg_true;
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L31, &outC->_L36);
  if (kcg_true) {
    outC->_L31.balise_passed = outC->_L35;
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->Balise_data_out, &outC->_L31);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** No_Balise_Packets_InfraLib.c
** Generation date: 2015-06-09T14:04:51
*************************************************************$ */

