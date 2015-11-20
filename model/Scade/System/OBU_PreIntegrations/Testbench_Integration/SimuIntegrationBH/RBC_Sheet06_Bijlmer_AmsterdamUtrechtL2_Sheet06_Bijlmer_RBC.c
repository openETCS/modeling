/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer */
void RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::_L2 */
  static R_data_internal_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::_L3 */
  static R_data_internal_T_InfraLib _L3;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::_L4 */
  static R_data_internal_T_InfraLib _L4;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::_L5 */
  static R_data_internal_T_InfraLib _L5;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::_L6 */
  static R_data_internal_T_InfraLib _L6;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::_L7 */
  static R_data_internal_T_InfraLib _L7;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::_L8 */
  static R_data_internal_T_InfraLib _L8;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::_L9 */
  static R_data_internal_T_InfraLib _L9;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::_L10 */
  static R_data_internal_T_InfraLib _L10;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::_L11 */
  static R_data_internal_T_InfraLib _L11;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::_L12 */
  static R_data_internal_T_InfraLib _L12;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer::_L13 */
  static R_data_internal_T_InfraLib _L13;
  
  kcg_copy_R_data_internal_T_InfraLib(&_L13, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &_L13,
    354002753,
    &_L1);
  /* 1 */
  Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &_L1,
    351000549,
    &_L2);
  /* 1 */
  Send_RBC_LRBG_355_D_00089_4_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &_L2,
    355000894,
    &_L3);
  /* 1 */
  Send_RBC_LRBG_356_D_00048_5_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &_L3,
    356000485,
    &_L4);
  /* 1 */
  Send_RBC_LRBG_358_D_00123_1_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &_L4,
    358001231,
    &_L5);
  /* 1 */
  Send_RBC_LRBG_360_D_00249_2_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &_L5,
    360002492,
    &_L6);
  /* 1 */
  Send_RBC_LRBG_362_D_00124_9_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &_L6,
    362001249,
    &_L7);
  /* 1 */
  Send_RBC_LRBG_362_D_00230_6_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &_L7,
    362002306,
    &_L8);
  /* 1 */
  Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &_L8,
    362002389,
    &_L9);
  /* 1 */
  Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &_L9,
    364000911,
    &_L10);
  /* 1 */
  Send_RBC_LRBG_369_D_00231_3_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &_L10,
    369002313,
    &_L11);
  /* 1 */
  Send_RBC_LRBG_341_D_00134_4_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &_L11,
    341001344,
    &_L12);
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L12);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

