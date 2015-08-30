/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */
#ifndef _twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg_H_
#define _twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg_H_

#include "kcg_types.h"
#include "positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::secondConsecutiveBG_missed */ secondConsecutiveBG_missed;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  struct__16883 /* linear::Memory::_L8 */ _L8_1;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::storedMissedBG */ storedMissedBG;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
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
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::linkedAnnouncedBG_passed */ linkedAnnouncedBG_passed;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L2 */ _L2;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L4 */ _L4;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L6 */ _L6;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L9 */ _L9;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L10 */ _L10;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L11 */ _L11;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L12 */ _L12;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L13 */ _L13;
  Q_LINK /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L14 */ _L14;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L15 */ _L15;
  Q_LINK /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L16 */ _L16;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L17 */ _L17;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L21 */ _L21;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L24 */ _L24;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L25 */ _L25;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L27 */ _L27;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L29 */ _L29;
} outC_twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed */
extern void twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::missed */kcg_bool missed,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::missedLinkedBG */positionedBG_T_TrainPosition_Types_Pck *missedLinkedBG,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::passedBG */positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::reset */kcg_bool reset,
  outC_twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg *outC);

extern void twoConsecutiveLinkedBGs_m_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg *outC);

#endif /* _twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg.h
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

