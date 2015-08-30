/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"

void add_2_Distances_reset_BasicLocationFunctions_Pkg(
  outC_add_2_Distances_BasicLocationFunctions_Pkg *outC)
{
}

/* BasicLocationFunctions_Pkg::add_2_Distances */
void add_2_Distances_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::add_2_Distances::dist_2 */LocWithInAcc_T_Obu_BasicTypes_Pkg *dist_2,
  /* BasicLocationFunctions_Pkg::add_2_Distances::dist_1 */LocWithInAcc_T_Obu_BasicTypes_Pkg *dist_1,
  outC_add_2_Distances_BasicLocationFunctions_Pkg *outC)
{
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L1, dist_2);
  outC->_L3 = outC->_L1.nominal;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L2, dist_1);
  outC->_L4 = outC->_L2.nominal;
  outC->_L5 = outC->_L3 + outC->_L4;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L16, dist_2);
  outC->_L14 = outC->_L16.d_min;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L17, dist_1);
  outC->_L13 = outC->_L17.d_min;
  outC->_L15 = outC->_L14 + outC->_L13;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L19, dist_2);
  outC->_L22 = outC->_L19.d_max;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L18, dist_1);
  outC->_L21 = outC->_L18.d_max;
  outC->_L20 = outC->_L22 + outC->_L21;
  outC->_L23.nominal = outC->_L5;
  outC->_L23.d_min = outC->_L15;
  outC->_L23.d_max = outC->_L20;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->distance, &outC->_L23);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** add_2_Distances_BasicLocationFunctions_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

