/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_LRBG_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_LRBG */
kcg_int op_LRBG_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_LRBG::posBGs */positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_LRBG::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos)
{
  /* ProvidePositionReport_Pkg::op_LRBG::_L31 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L31;
  /* ProvidePositionReport_Pkg::op_LRBG::_L39 */
  static positionedBG_T_TrainPosition_Types_Pck _L39;
  /* ProvidePositionReport_Pkg::op_LRBG::_L38 */
  static kcg_bool _L38;
  /* ProvidePositionReport_Pkg::op_LRBG::d_lrbg */
  static kcg_int d_lrbg;
  
  /* op_GetLRBGfromBGs */
  op_GetLRBGfromBGs_ProvidePositionReport_Pkg(posBGs, trainPos, &_L38, &_L39);
  /* 1 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &(*trainPos).trainPosition,
    &_L39.location,
    &_L31);
  if ((*trainPos).valid & !(*trainPos).trainPositionIsUnknown & _L38) {
    if (0 <= _L31.nominal) {
      d_lrbg = _L31.nominal;
    }
    else {
      d_lrbg = - _L31.nominal;
    }
  }
  else {
    d_lrbg = 32767;
  }
  return d_lrbg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_LRBG_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

