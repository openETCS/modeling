/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen */
void RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  static R_data_internal_T_InfraLib tmp1;
  static R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  Send_RBC_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    RadiaDataIn,
    427000475,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_428_D_00182_0_M015_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &tmp1,
    428001820,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_431_D_00410_2_M015_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &tmp,
    428001820,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_432_D_00040_9_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &tmp1,
    431004102,
    R_data_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

