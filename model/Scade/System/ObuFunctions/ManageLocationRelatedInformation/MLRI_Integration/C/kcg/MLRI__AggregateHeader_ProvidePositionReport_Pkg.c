/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__AggregateHeader_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::AggregateHeader */
void MLRI__AggregateHeader_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregateHeader::trainProps */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::AggregateHeader::posRepHeader */MLRI__PositionReportHeader_T_ProvidePositionReport_Pkg *posRepHeader)
{
  (*posRepHeader).nid_message = 136;
  (*posRepHeader).l_message = MLRI__cL_MESSAGE_ProvidePositionReport_Pkg;
  (*posRepHeader).t_train = MLRI__cT_TRAIN_ProvidePositionReport_Pkg;
  (*posRepHeader).nid_engine = (*trainProps).nid_engine;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__AggregateHeader_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

