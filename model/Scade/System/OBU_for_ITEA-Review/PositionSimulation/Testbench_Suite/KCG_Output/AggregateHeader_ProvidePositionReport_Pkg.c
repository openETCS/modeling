/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AggregateHeader_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::AggregateHeader */
void AggregateHeader_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregateHeader::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::AggregateHeader::posRepHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *posRepHeader)
{
  (*posRepHeader).present = kcg_true;
  (*posRepHeader).nid_message = 136;
  (*posRepHeader).t_train = cT_TRAIN_ProvidePositionReport_Pkg;
  (*posRepHeader).nid_engine = (*trainProps).nid_engine;
  (*posRepHeader).xQ_MARQSTREASON = cxQ_MARQSTREASON_ProvidePositionReport_Pkg;
  (*posRepHeader).xT_TRAIN = cxT_TRAIN_ProvidePositionReport_Pkg;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** AggregateHeader_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

