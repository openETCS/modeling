/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"

void sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg *outC)
{
}

/* BasicLocationFunctions_Pkg::sub_2_odoDistances */
void sub_2_odoDistances_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::odo_2 */OdometryLocations_T_Obu_BasicTypes_Pkg *odo_2,
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::odo_1 */OdometryLocations_T_Obu_BasicTypes_Pkg *odo_1,
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg *outC)
{
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L1, odo_2);
  outC->_L3 = outC->_L1.o_nominal;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L2, odo_1);
  outC->_L4 = outC->_L2.o_nominal;
  outC->_L5 = outC->_L3 - outC->_L4;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L16, odo_2);
  outC->_L14 = outC->_L16.o_min;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L17, odo_1);
  outC->_L13 = outC->_L17.o_min;
  outC->_L15 = outC->_L14 - outC->_L13;
  outC->_L23 = outC->_L15 - outC->_L5;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L19, odo_2);
  outC->_L22 = outC->_L19.o_max;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L18, odo_1);
  outC->_L21 = outC->_L18.o_max;
  outC->_L20 = outC->_L22 - outC->_L21;
  outC->_L24 = outC->_L20 - outC->_L5;
  outC->_L31.nominal = outC->_L5;
  outC->_L31.d_min = outC->_L23;
  outC->_L31.d_max = outC->_L24;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->distance, &outC->_L31);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** sub_2_odoDistances_BasicLocationFunctions_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

