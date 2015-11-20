/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg.h"

/* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
void SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg(
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::Header */Radio_TrackTrain_Header_T_TM *Header,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M03 */P003V1_trackside_int_T_TM_baseline2 *M03,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M05 */P005_trackside_int_T_TM *M05,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M15 */P015_trackside_int_T_TM *M15,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M21 */P021_trackside_int_T_TM *M21,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M27 */P027V1_trackside_int_T_TM_baseline2 *M27,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M42 */P042_trackside_int_T_TM *M42,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M57 */P057_trackside_int_T_TM *M57,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M58 */P058_trackside_int_T_TM *M58,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::MessageOUT */CompressedRadioMessage_TM *MessageOUT)
{
  static kcg_bool tmp;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::RadioMessagePackets_1_2 */
  static CompressedPackets_T_Common_Types_Pkg RadioMessagePackets_1_2;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L24 */
  static CompressedPackets_T_Common_Types_Pkg _L24;
  
  kcg_copy_Radio_TrackTrain_Header_T_TM(&(*MessageOUT).Header, Header);
  if ((*M03).valid) {
    /* 1 */
    Write_P003V1_TM_trackside_baseline2(
      M03,
      (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM,
      &tmp,
      &RadioMessagePackets_1_2);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_1_2,
      (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  }
  if ((*M05).valid) {
    /* 1 */ Write_P005_TM_trackside(M05, &RadioMessagePackets_1_2, &tmp, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_1_2);
  }
  if ((*M15).valid) {
    /* 1 */ Write_P015_TM_trackside(M15, &_L24, &tmp, &RadioMessagePackets_1_2);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_1_2,
      &_L24);
  }
  if ((*M21).valid) {
    /* 1 */ Write_P021_TM_trackside(M21, &RadioMessagePackets_1_2, &tmp, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_1_2);
  }
  if ((*M27).valid) {
    /* 1 */
    Write_P027V1_TM_trackside_baseline2(
      M27,
      &_L24,
      &tmp,
      &RadioMessagePackets_1_2);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_1_2,
      &_L24);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L24,
    &RadioMessagePackets_1_2);
  if ((*M57).valid) {
    /* 1 */ Write_P057_TM_trackside(M57, &_L24, &tmp, &RadioMessagePackets_1_2);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_1_2,
      &_L24);
  }
  if ((*M42).valid) {
    /* 1 */ Write_P042_TM_trackside(M42, &RadioMessagePackets_1_2, &tmp, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_1_2);
  }
  if ((*M58).valid) {
    /* 1 */ Write_P058_TM_trackside(M58, &_L24, &tmp, &(*MessageOUT).Messages);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &(*MessageOUT).Messages,
      &_L24);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg.c
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

