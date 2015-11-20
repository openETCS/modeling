/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel */
void RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::_L2 */
  static R_data_internal_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::_L3 */
  static R_data_internal_T_InfraLib _L3;
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::_L4 */
  static R_data_internal_T_InfraLib _L4;
  
  kcg_copy_R_data_internal_T_InfraLib(&_L4, RadiaDataIn);
  /* 1 */
  Send_RBC_LRBG_353_D_00319_2_M032_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &_L4,
    353003192,
    &_L1);
  /* 1 */
  Send_RBC_LRBG_353_D_00421_9_M008_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &_L1,
    353004219,
    &_L2);
  /* 1 */
  Send_RBC_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &_L2,
    353004310,
    &_L3);
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

