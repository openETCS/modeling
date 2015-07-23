/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer */
void RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  static R_data_internal_T_InfraLib tmp1;
  static R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    RadiaDataIn,
    354002753,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &tmp,
    351000549,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_355_D_00089_4_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &tmp1,
    355000894,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_356_D_00048_5_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &tmp,
    356000485,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_358_D_00123_1_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &tmp1,
    358001231,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_360_D_00249_2_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &tmp,
    362001249,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_362_D_00124_9_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &tmp1,
    360002492,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_362_D_00230_7_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &tmp,
    362002307,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &tmp1,
    362002307,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &tmp,
    364000911,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_369_D_00231_3_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &tmp1,
    369002313,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_341_D_00134_4_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &tmp,
    341001344,
    R_data_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
** Generation date: 2015-07-21T17:59:24
*************************************************************$ */

