/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-09T20:36:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Packets_BG365_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.h"

void Packets_BG365_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
  outC_Packets_BG365_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises *outC)
{
  /* 1 */ Send_P255_reset_MessageLibBaseline2(&outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG365 */
void Packets_BG365_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG365::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG365::Balise_data_in */B_data_internal_T_InfraLib *Balise_data_in,
  outC_Packets_BG365_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises *outC)
{
  outC->_L33 = kcg_true;
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L26, Balise_data_in);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L28, Header);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L29, &outC->_L26);
  if (kcg_true) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L29.header, &outC->_L28);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L25,
    &outC->_L26.packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_in, &outC->_L25);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L22, &outC->B_data_in);
  /* 1 */
  Send_P255_MessageLibBaseline2(
    &outC->_L22,
    (P255_trackside_int_T_TM *) &BGxxx_P255_Packets426,
    &outC->Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L11,
    &outC->Context_1.packet_data_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_out, &outC->_L11);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L30, &outC->B_data_out);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L31, &outC->_L29);
  if (kcg_true) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L31.packets,
      &outC->_L30);
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L32, &outC->_L31);
  if (kcg_true) {
    outC->_L32.balise_passed = outC->_L33;
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->Balise_data_out, &outC->_L32);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Packets_BG365_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.c
** Generation date: 2015-07-09T20:36:53
*************************************************************$ */

