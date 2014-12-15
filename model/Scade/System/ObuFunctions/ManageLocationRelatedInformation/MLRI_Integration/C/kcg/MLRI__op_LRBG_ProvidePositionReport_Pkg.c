/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__op_LRBG_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_LRBG */
kcg_int MLRI__op_LRBG_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_LRBG::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_LRBG::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos)
{
  /* ProvidePositionReport_Pkg::op_LRBG::_L31 */ MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg _L31;
  /* ProvidePositionReport_Pkg::op_LRBG::_L39 */ MLRI__positionedBG_T_TrainPosition_Types_Pck _L39;
  /* ProvidePositionReport_Pkg::op_LRBG::_L38 */ kcg_bool _L38;
  /* ProvidePositionReport_Pkg::op_LRBG::d_lrbg */ kcg_int d_lrbg;
  
  /* op_GetLRBGfromBGs */
  MLRI__op_GetLRBGfromBGs_ProvidePositionReport_Pkg(
    posBGs,
    trainPos,
    &_L38,
    &_L39);
  /* 1 */
  MLRI__sub_2_distances_BasicLocationFunctions_Pkg(
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
** MLRI__op_LRBG_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

