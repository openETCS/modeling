/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_cond_3_4_2_3_3_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3 */
void op_cond_3_4_2_3_3_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::posRep */ Position_Report_TrainToTrack *posRep,
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::nidPrvLrbg */ kcg_int *nidPrvLrbg,
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::cond_3_4_2_3_3_2 */ kcg_bool *cond_3_4_2_3_3_2,
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::cond_3_4_2_3_3_3 */ kcg_bool *cond_3_4_2_3_3_3,
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::cond_3_4_2_3_3_4 */ kcg_bool *cond_3_4_2_3_3_4)
{
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L6 */ kcg_bool _L6;
  /* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3::_L8 */ kcg_bool _L8;
  
  _L8 = (*trainPos).prvLRBG.nid_bg != (*trainPos).LRBG.nid_bg;
  *cond_3_4_2_3_3_4 = _L8 & (((Q_DIRTRAIN_Reverse == (*posRep).dirtrain) &
        (Q_DIRTRAIN_Nominal == prvDirTrain)) | (((*posRep).dirtrain ==
          Q_DIRTRAIN_Nominal) & (prvDirTrain == Q_DIRTRAIN_Reverse)));
  if (*cond_3_4_2_3_3_4) {
    *nidPrvLrbg = 16777215;
  }
  else {
    *nidPrvLrbg = (*trainPos).prvLRBG.nid_bg;
  }
  _L6 = (*trainPos).prvLRBG.nid_bg != 16777215;
  *cond_3_4_2_3_3_3 = !_L6;
  *cond_3_4_2_3_3_2 = _L6 & _L8;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_cond_3_4_2_3_3_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

