/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CountMSG_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::CountMSG */
kcg_int CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::CountMSG::msg */array_char_30_5 *msg)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::CountMSG::num */ kcg_int num;
  
  if (!kcg_comp_array_char_30(
      &(*msg)[0],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    kcg_comp_array_char_30(
      &(*msg)[1],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    kcg_comp_array_char_30(
      &(*msg)[2],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    kcg_comp_array_char_30(
      &(*msg)[3],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    kcg_comp_array_char_30(
      &(*msg)[4],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg)) {
    num = 1;
  }
  else if (!kcg_comp_array_char_30(
      &(*msg)[0],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    !kcg_comp_array_char_30(
      &(*msg)[1],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    kcg_comp_array_char_30(
      &(*msg)[2],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    kcg_comp_array_char_30(
      &(*msg)[3],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    kcg_comp_array_char_30(
      &(*msg)[4],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg)) {
    num = 2;
  }
  else if (!kcg_comp_array_char_30(
      &(*msg)[0],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    !kcg_comp_array_char_30(
      &(*msg)[1],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    !kcg_comp_array_char_30(
      &(*msg)[2],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    kcg_comp_array_char_30(
      &(*msg)[3],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    kcg_comp_array_char_30(
      &(*msg)[4],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg)) {
    num = 3;
  }
  else if (!kcg_comp_array_char_30(
      &(*msg)[0],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    !kcg_comp_array_char_30(
      &(*msg)[1],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    !kcg_comp_array_char_30(
      &(*msg)[2],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    !kcg_comp_array_char_30(
      &(*msg)[3],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    kcg_comp_array_char_30(
      &(*msg)[4],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg)) {
    num = 4;
  }
  else if (!kcg_comp_array_char_30(
      &(*msg)[0],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    !kcg_comp_array_char_30(
      &(*msg)[1],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    !kcg_comp_array_char_30(
      &(*msg)[2],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    !kcg_comp_array_char_30(
      &(*msg)[3],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg) &
    !kcg_comp_array_char_30(
      &(*msg)[4],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg)) {
    num = 5;
  }
  else {
    num = 0;
  }
  return num;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CountMSG_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

