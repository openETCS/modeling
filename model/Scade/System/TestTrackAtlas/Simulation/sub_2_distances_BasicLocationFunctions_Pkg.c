/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"

void sub_2_distances_reset_BasicLocationFunctions_Pkg(
  outC_sub_2_distances_BasicLocationFunctions_Pkg *outC)
{
}

/* BasicLocationFunctions_Pkg::sub_2_distances */
void sub_2_distances_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::sub_2_distances::loc_2 */LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* BasicLocationFunctions_Pkg::sub_2_distances::loc_1 */LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  outC_sub_2_distances_BasicLocationFunctions_Pkg *outC)
{
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L1, loc_2);
  outC->_L3 = outC->_L1.nominal;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L2, loc_1);
  outC->_L4 = outC->_L2.nominal;
  outC->_L5 = outC->_L3 - outC->_L4;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L16, loc_2);
  outC->_L14 = outC->_L16.d_min;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L17, loc_1);
  outC->_L13 = outC->_L17.d_max;
  outC->_L15 = outC->_L14 - outC->_L13;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L19, loc_2);
  outC->_L22 = outC->_L19.d_max;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L18, loc_1);
  outC->_L21 = outC->_L18.d_min;
  outC->_L20 = outC->_L22 - outC->_L21;
  outC->_L23.nominal = outC->_L5;
  outC->_L23.d_min = outC->_L15;
  outC->_L23.d_max = outC->_L20;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->distance, &outC->_L23);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** sub_2_distances_BasicLocationFunctions_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

