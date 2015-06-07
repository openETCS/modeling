/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-06T10:22:38
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
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_0,
    &outC->_L22);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_0,
    &outC->B_data_in_0);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_0,
    &outC->_L1_0);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L11,
    &outC->B_data_out_0);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_1,
    &outC->_L11);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_1,
    &outC->B_data_in_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_1,
    &outC->_L1_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L2,
    &outC->B_data_out_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_in_2, &outC->_L2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_2,
    &outC->B_data_in_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_2,
    &outC->_L1_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->B_data_out_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_in_3, &outC->_L3);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_3,
    &outC->B_data_in_3);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_3,
    &outC->_L1_3);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L4,
    &outC->B_data_out_3);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_in_4, &outC->_L4);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_4,
    &outC->B_data_in_4);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_4,
    &outC->_L1_4);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L5,
    &outC->B_data_out_4);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_in_5, &outC->_L5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_5,
    &outC->B_data_in_5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_5,
    &outC->_L1_5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L6,
    &outC->B_data_out_5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_in_6, &outC->_L6);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_6,
    &outC->B_data_in_6);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_6,
    &outC->_L1_6);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L7,
    &outC->B_data_out_6);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_in_7, &outC->_L7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_7,
    &outC->B_data_in_7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_7,
    &outC->_L1_7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L8,
    &outC->B_data_out_7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_in_8, &outC->_L8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_8,
    &outC->B_data_in_8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_8,
    &outC->_L1_8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L9,
    &outC->B_data_out_8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_in_9, &outC->_L9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_9,
    &outC->B_data_in_9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_9,
    &outC->_L1_9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L10,
    &outC->B_data_out_9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_link,
    &outC->_L10);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L24,
    &outC->B_data_link);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_16,
    &outC->_L24);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_16,
    &outC->B_data_in_16);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_16,
    &outC->_L1_16);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L16,
    &outC->B_data_out_16);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_11,
    &outC->_L16);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_11,
    &outC->B_data_in_11);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_11,
    &outC->_L1_11);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L21,
    &outC->B_data_out_11);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_17,
    &outC->_L21);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_17,
    &outC->B_data_in_17);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_17,
    &outC->_L1_17);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L15,
    &outC->B_data_out_17);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_13,
    &outC->_L15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_13,
    &outC->B_data_in_13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_13,
    &outC->_L1_13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L19,
    &outC->B_data_out_13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_19,
    &outC->_L19);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_19,
    &outC->B_data_in_19);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_19,
    &outC->_L1_19);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L13,
    &outC->B_data_out_19);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_15,
    &outC->_L13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_15,
    &outC->B_data_in_15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_15,
    &outC->_L1_15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L17,
    &outC->B_data_out_15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_12,
    &outC->_L17);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_12,
    &outC->B_data_in_12);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_12,
    &outC->_L1_12);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L20,
    &outC->B_data_out_12);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_18,
    &outC->_L20);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_18,
    &outC->B_data_in_18);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_18,
    &outC->_L1_18);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L14,
    &outC->B_data_out_18);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_14,
    &outC->_L14);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_14,
    &outC->B_data_in_14);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_14,
    &outC->_L1_14);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L18,
    &outC->B_data_out_14);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_20,
    &outC->_L18);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_20,
    &outC->B_data_in_20);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_20,
    &outC->_L1_20);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L12,
    &outC->B_data_out_20);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_out, &outC->_L12);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L30, &outC->B_data_out);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L31, &outC->_L29);
  if (kcg_true) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L31.packets,
      &outC->_L30);
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->Balise_data_out, &outC->_L31);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** No_Balise_Packets_InfraLib.c
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */

