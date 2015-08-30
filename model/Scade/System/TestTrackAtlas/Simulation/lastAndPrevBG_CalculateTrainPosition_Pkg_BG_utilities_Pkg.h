/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::prvBG */ prvBG;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::lastBG */ lastBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  struct__16883 /* linear::Memory::_L8 */ _L8_2;
  struct__16883 /* linear::Memory::_L8 */ _L8_1;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::prvBG_loc */ prvBG_loc;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::storedBG_loc */ storedBG_loc;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BG */ rem_BG;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _1_Context_1;
  outC_positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 2 */ Context_2;
  outC_positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  struct__16883 /* linear::Memory::_L7 */ _L7_2;
  struct__16883 /* linear::Memory::_L6 */ _L6_2;
  struct__16883 /* linear::Memory::_L5 */ _L5_2;
  kcg_bool /* linear::Memory::_L3 */ _L3_2;
  struct__16883 /* linear::Memory::_L2 */ _L2_2;
  kcg_bool /* linear::Memory::_L1 */ _L1_2;
  struct__16883 /* linear::Memory::_L9 */ _L9_2;
  struct__16883 /* linear::Memory::Out */ Out_2;
  struct__16883 /* linear::Memory::InitVal */ InitVal_2;
  kcg_bool /* linear::Memory::MemCond */ MemCond_2;
  kcg_bool /* linear::Memory::Reset */ Reset_2;
  struct__16883 /* linear::Memory::M_Input */ M_Input_2;
  struct__16883 /* linear::Memory::_L7 */ _L7_1;
  struct__16883 /* linear::Memory::_L6 */ _L6_1;
  struct__16883 /* linear::Memory::_L5 */ _L5_1;
  kcg_bool /* linear::Memory::_L3 */ _L3_1;
  struct__16883 /* linear::Memory::_L2 */ _L2_1;
  kcg_bool /* linear::Memory::_L1 */ _L1_1;
  struct__16883 /* linear::Memory::_L9 */ _L9_1;
  struct__16883 /* linear::Memory::Out */ Out_1;
  struct__16883 /* linear::Memory::InitVal */ InitVal_1;
  kcg_bool /* linear::Memory::MemCond */ MemCond_1;
  kcg_bool /* linear::Memory::Reset */ Reset_1;
  struct__16883 /* linear::Memory::M_Input */ M_Input_1;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L9 */ _L9;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L8 */ _L8;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L6 */ _L6;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L5 */ _L5;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L4 */ _L4;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L2 */ _L2;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L10 */ _L10;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L12 */ _L12;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L13 */ _L13;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L14 */ _L14;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L15 */ _L15;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L16 */ _L16;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L17 */ _L17;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L18 */ _L18;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L19 */ _L19;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L20 */ _L20;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L23 */ _L23;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L22 */ _L22;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L21 */ _L21;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L24 */ _L24;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L25 */ _L25;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L26 */ _L26;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L27 */ _L27;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L29 */ _L29;
  Q_LINK /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L37 */ _L37;
  Q_LINK /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L36 */ _L36;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L35 */ _L35;
  Q_LINK /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L34 */ _L34;
  Q_LINK /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L33 */ _L33;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L32 */ _L32;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L38 */ _L38;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L39 */ _L39;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L40 */ _L40;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L41 */ _L41;
} outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG */
extern void lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::linked */kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::reset */kcg_bool reset,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::enable */kcg_bool enable,
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

