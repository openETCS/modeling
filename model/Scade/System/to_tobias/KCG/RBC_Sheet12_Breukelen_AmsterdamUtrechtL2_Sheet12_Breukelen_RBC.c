/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.h"

/* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::RBC_Sheet12_Breukelen */
void RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::RBC_Sheet12_Breukelen::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::RBC_Sheet12_Breukelen::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  static R_data_internal_T_InfraLib tmp1;
  static R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  Send_RBC_LRBG_417_D_00052_4_M003_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    RadiaDataIn,
    486002514,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_418_D_00204_0_M015_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &tmp1,
    417000524,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_419_D_00053_5_M015_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &tmp,
    418002040,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_476_D_00251_4_M015_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &tmp1,
    419000535,
    R_data_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

