/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg_H_
#define _invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_DIRTRAIN /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::out */ out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_DIRTRAIN /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::_L1 */ _L1;
  Q_DIRTRAIN /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::_L2 */ _L2;
  Q_DIRTRAIN /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::_L3 */ _L3;
  Q_DIRTRAIN /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::_L4 */ _L4;
  Q_DIRTRAIN /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::_L5 */ _L5;
} outC_invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN */
extern void invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN::in */Q_DIRTRAIN in,
  outC_invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg *outC);

extern void invert_Q_DIRTRAIN_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg *outC);

#endif /* _invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

