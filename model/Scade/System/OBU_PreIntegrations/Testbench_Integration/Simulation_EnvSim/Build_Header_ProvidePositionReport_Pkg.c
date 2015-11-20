/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Header_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Header */
void Build_Header_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Header::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_Header::t_train */T_TRAIN t_train,
  /* ProvidePositionReport_Pkg::Build_Header::posRepHeader */Radio_TrainTrack_Header_T_Radio_Types_Pkg *posRepHeader)
{
  (*posRepHeader).present = kcg_true;
  (*posRepHeader).nid_message = 136;
  (*posRepHeader).t_train = t_train;
  (*posRepHeader).nid_engine = (*trainProps).nid_engine;
  (*posRepHeader).xQ_MARQSTREASON = cxQ_MARQSTREASON_ProvidePositionReport_Pkg;
  (*posRepHeader).xT_TRAIN = cxT_TRAIN_ProvidePositionReport_Pkg;
  (*posRepHeader).xNID_EM = cxNID_EM_ProvidePositionReport_Pkg;
  (*posRepHeader).xQ_EMERGENCYSTOP =
    cxQ_EMERGENCYSTOP_ProvidePositionReport_Pkg;
  (*posRepHeader).xNID_TEXTMESSAGE =
    cxNID_TEXTMESSAGE_ProvidePositionReport_Pkg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_Header_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

