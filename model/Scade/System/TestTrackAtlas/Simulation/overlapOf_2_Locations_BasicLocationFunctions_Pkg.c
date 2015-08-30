/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"

void overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg *outC)
{
}

/* BasicLocationFunctions_Pkg::overlapOf_2_Locations */
void overlapOf_2_Locations_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::loc_2 */LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::loc_1 */LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg *outC)
{
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L18, loc_2);
  outC->_L13 = outC->_L18.d_min;
  outC->_L15 = outC->_L18.nominal;
  outC->_L17 = outC->_L13 + outC->_L15;
  outC->I2_11 = outC->_L17;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L2, loc_2);
  outC->_L8 = outC->_L2.d_max;
  outC->_L9 = outC->_L2.nominal;
  outC->_L7 = outC->_L8 + outC->_L9;
  outC->I2_1 = outC->_L7;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L12, loc_1);
  outC->_L14 = outC->_L12.d_min;
  outC->_L16 = outC->_L12.nominal;
  outC->_L11 = outC->_L14 + outC->_L16;
  outC->I1_12 = outC->_L11;
  outC->_L1_1 = outC->I1_12;
  outC->_L2_1 = outC->I2_11;
  outC->_L3_1 = outC->_L1_1 >= outC->_L2_1;
  if (outC->_L3_1) {
    outC->_L4_1 = outC->_L1_1;
  }
  else {
    outC->_L4_1 = outC->_L2_1;
  }
  outC->Ma_Output_1 = outC->_L4_1;
  outC->_L19 = outC->Ma_Output_1;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L1, loc_1);
  outC->_L3 = outC->_L1.d_max;
  outC->_L5 = outC->_L1.nominal;
  outC->_L6 = outC->_L3 + outC->_L5;
  outC->I1_1 = outC->_L6;
  outC->_L21_1 = outC->I1_1;
  outC->_L22_1 = outC->I2_1;
  outC->_L25_1 = outC->_L21_1 <= outC->_L22_1;
  if (outC->_L25_1) {
    outC->_L24_1 = outC->_L21_1;
  }
  else {
    outC->_L24_1 = outC->_L22_1;
  }
  outC->Mi_Output_1 = outC->_L24_1;
  outC->_L10 = outC->Mi_Output_1;
  outC->_L21 = outC->_L10 - outC->_L19;
  outC->_L23 = 2;
  outC->_L22 = outC->_L21 / outC->_L23;
  outC->_L24 = outC->_L22 + outC->_L19;
  outC->_L33 = outC->_L19 - outC->_L24;
  outC->_L32 = outC->_L10 - outC->_L24;
  outC->_L31.nominal = outC->_L24;
  outC->_L31.d_min = outC->_L33;
  outC->_L31.d_max = outC->_L32;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->loc, &outC->_L31);
  outC->_L20 = outC->_L10 >= outC->_L19;
  outC->overlap = outC->_L20;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** overlapOf_2_Locations_BasicLocationFunctions_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

