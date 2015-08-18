/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Packets_BG353_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"

void Packets_BG353_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  outC_Packets_BG353_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC)
{
  /* 1 */ Send_P255_reset_MessageLibBaseline2(&outC->_1_Context_1);
  /* 2 */ Send_P042_reset_MessageLibBaseline2(&outC->Context_2);
  /* 1 */ Send_P042_reset_MessageLibBaseline2(&outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Packets_BG353 */
void Packets_BG353_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Packets_BG353::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Packets_BG353::Balise_data_in */B_data_internal_T_InfraLib *Balise_data_in,
  outC_Packets_BG353_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC)
{
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L26, Balise_data_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L25,
    &outC->_L26.packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_in, &outC->_L25);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L22, &outC->B_data_in);
  /* 1 */
  Send_P042_MessageLibBaseline2(
    &outC->_L22,
    (P042_trackside_int_T_TM *) &BG353_P042_N_Packets426,
    &outC->Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L11,
    &outC->Context_1.B_data_out);
  /* 2 */
  Send_P042_MessageLibBaseline2(
    &outC->_L11,
    (P042_trackside_int_T_TM *) &BG353_P042_R_Packets426,
    &outC->Context_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L34,
    &outC->Context_2.B_data_out);
  outC->_L33 = kcg_true;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L28, Header);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L29, &outC->_L26);
  if (kcg_true) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L29.header, &outC->_L28);
  }
  /* 1 */
  Send_P255_MessageLibBaseline2(
    &outC->_L34,
    (P255_trackside_int_T_TM *) &BGXXX_P255_Packets426,
    &outC->_1_Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L2,
    &outC->_1_Context_1.packet_data_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_out, &outC->_L2);
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
** Packets_BG353_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */

