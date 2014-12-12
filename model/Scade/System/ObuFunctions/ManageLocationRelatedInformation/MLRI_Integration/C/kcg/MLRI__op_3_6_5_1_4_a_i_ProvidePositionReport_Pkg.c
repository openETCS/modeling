/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.h"

void MLRI__op_3_6_5_1_4_a_i_reset_ProvidePositionReport_Pkg(
  MLRI__outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i */
void MLRI__op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::trainPosInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPosInfo,
  MLRI__outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC)
{
  MLRI__Speed_T_Obu_BasicTypes_Pkg tmp;
  
  if ((*trainPosInfo).valid) {
    outC->_L20 = (*trainPosInfo).speed;
  }
  else if (outC->init) {
    outC->_L20 = 0;
  }
  if (outC->init) {
    tmp = MLRI__cTrainPosInfo_ProvidePositionReport_Pkg.speed;
  }
  else {
    tmp = outC->rem_trainPosInfo.speed;
  }
  outC->b = ((tmp > 0) & (0 == outC->_L20)) | (outC->_L20 > 0);
  MLRI__kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &outC->rem_trainPosInfo,
    trainPosInfo);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

