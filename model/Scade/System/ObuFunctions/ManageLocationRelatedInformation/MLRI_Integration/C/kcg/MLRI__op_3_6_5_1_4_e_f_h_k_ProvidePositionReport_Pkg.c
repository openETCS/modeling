/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__op_3_6_5_1_4_e_f_h_k_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_f_h_k */
kcg_bool MLRI__op_3_6_5_1_4_e_f_h_k_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_f_h_k::trackInfo */MLRI__LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_f_h_k::rbcComm */MLRI__RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_f_h_k::b */ kcg_bool b;
  
  b = (*rbcComm).newSessionEstablished | (*trackInfo).minSafeRearEndPassed |
    (*trackInfo).maxSafeFrontEndPassed |
    (*trackInfo).levelTransitionBorderPassed;
  return b;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_3_6_5_1_4_e_f_h_k_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

