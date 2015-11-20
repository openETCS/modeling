/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id */
void indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BG */passedBG_T_BG_Types_Pkg *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::enable */kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::indexOfBG */kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BG_found */kcg_bool *BG_found,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::indexValid */kcg_bool *indexValid)
{
  static struct__156510 tmp;
  
  tmp.valid = (*BG).valid & (*BG).BG_Header.valid;
  tmp.nid_c = (*BG).BG_Header.nid_c;
  tmp.nid_bg = (*BG).BG_Header.nid_bg;
  tmp.q_link = (*BG).BG_Header.q_link;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &tmp.location,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  tmp.seqNoOnTrack = 0;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &tmp.infoFromLinking,
    (infoFromLinking_T_TrainPosition_Types_Pck *)
      &cNoInfoFromLinking_CalculateTrainPosition_Pkg);
  kcg_copy_passedBG_T_BG_Types_Pkg(&tmp.infoFromPassing, BG);
  tmp.missed = kcg_false;
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &tmp,
    BGs,
    enable,
    indexOfBG,
    BG_found,
    indexValid);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

